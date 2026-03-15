#include "K2Node_GetReaperAction.h"
#include "EdGraphSchema_K2.h"
#include "K2Node_CallFunction.h"
#include "KismetCompiler.h"
#include "Engine/DataTable.h"
#include "Kismet/KismetSystemLibrary.h"
#include "UObject/UnrealType.h"
#include "UObject/FieldIterator.h"

#define LOCTEXT_NAMESPACE "K2Node_GetReaperAction"

const FName UK2Node_GetReaperAction::PN_CommandID(TEXT("CommandID"));

void UK2Node_GetReaperAction::AllocateDefaultPins()
{
	// Single output: CommandID
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_String, PN_CommandID);

	Super::AllocateDefaultPins();
}

FText UK2Node_GetReaperAction::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	if (TitleType == ENodeTitleType::FullTitle && !SelectedRowName.IsNone())
	{
		return FText::Format(
			LOCTEXT("GetReaperActionFull", "Get Reaper Action\n{0}"),
			FText::FromName(SelectedRowName)
		);
	}
	return LOCTEXT("GetReaperAction", "Get Reaper Action");
}

FText UK2Node_GetReaperAction::GetMenuCategory() const
{
	return LOCTEXT("Category", "Reaper Unreal Bridge");
}

UDataTable* UK2Node_GetReaperAction::GetDataTable() const
{
	return LoadDataTableByPath(GetDataTablePath());
}

FString UK2Node_GetReaperAction::GetDataTablePath() const
{
	return TEXT("/ReaperUnrealBridge/OSC/ReaperActions_DataTable.ReaperActions_DataTable");
}

/**
 * Find a property by name, with fuzzy fallback.
 * Blueprint struct property names can have internal suffixes (e.g. "CommandID_7_ABC123...")
 * so we first try exact match, then partial/case-insensitive match.
 */
static FProperty* FindPropertyFuzzy(const UScriptStruct* RowStruct, const FString& DesiredName)
{
	// 1. Exact match
	FProperty* Prop = RowStruct->FindPropertyByName(FName(*DesiredName));
	if (Prop)
	{
		return Prop;
	}

	// 2. Case-insensitive / partial match (handles Blueprint struct name suffixes)
	FString LowerDesired = DesiredName.ToLower();
	for (TFieldIterator<FProperty> It(RowStruct); It; ++It)
	{
		FString PropName = It->GetName();
		// Check if the property name starts with our desired name (case-insensitive)
		if (PropName.ToLower().StartsWith(LowerDesired))
		{
			return *It;
		}
	}

	// 3. Contains match as last resort
	for (TFieldIterator<FProperty> It(RowStruct); It; ++It)
	{
		FString PropName = It->GetName();
		if (PropName.ToLower().Contains(LowerDesired))
		{
			return *It;
		}
	}

	return nullptr;
}

/**
 * Extract any property value as a string using ExportText (handles int, string, name, text, float, etc.)
 */
static FString ExtractFieldValue(FProperty* Prop, void* RowData)
{
	if (!Prop || !RowData)
	{
		return FString();
	}

	const void* ValuePtr = Prop->ContainerPtrToValuePtr<void>(RowData);
	if (!ValuePtr)
	{
		return FString();
	}

	FString Result;
	Prop->ExportTextItem_Direct(Result, ValuePtr, nullptr, nullptr, PPF_None);

	// ExportTextItem wraps FString values in quotes - strip them
	if (Result.Len() >= 2 && Result.StartsWith(TEXT("\"")) && Result.EndsWith(TEXT("\"")))
	{
		Result = Result.Mid(1, Result.Len() - 2);
	}

	return Result;
}

/**
 * Build a debug string listing all property names and types in a struct.
 */
static FString GetAllPropertyNames(const UScriptStruct* RowStruct)
{
	FString Result;
	for (TFieldIterator<FProperty> It(RowStruct); It; ++It)
	{
		if (!Result.IsEmpty())
		{
			Result += TEXT(", ");
		}
		Result += FString::Printf(TEXT("'%s' [%s]"), *It->GetName(), *It->GetClass()->GetName());
	}
	return Result;
}

void UK2Node_GetReaperAction::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);

	UEdGraphPin* CommandIDPin = FindPin(PN_CommandID);

	// Early out if nothing is connected
	if (!CommandIDPin || CommandIDPin->LinkedTo.Num() == 0)
	{
		BreakAllNodeLinks();
		return;
	}

	// --- Read the value at COMPILE TIME from the DataTable ---
	FString CommandIDValue;

	UDataTable* DT = GetDataTable();
	if (!DT)
	{
		CompilerContext.MessageLog.Error(
			*LOCTEXT("NoDT", "@@: Could not load ReaperActions_DataTable.").ToString(), this);
		BreakAllNodeLinks();
		return;
	}

	if (SelectedRowName.IsNone())
	{
		CompilerContext.MessageLog.Warning(
			*LOCTEXT("NoRow", "@@: No action selected.").ToString(), this);
		BreakAllNodeLinks();
		return;
	}

	const UScriptStruct* RowStruct = DT->GetRowStruct();
	if (!RowStruct)
	{
		CompilerContext.MessageLog.Error(
			*LOCTEXT("NoStruct", "@@: DataTable has no row struct.").ToString(), this);
		BreakAllNodeLinks();
		return;
	}

	void* RowData = DT->FindRowUnchecked(SelectedRowName);
	if (!RowData)
	{
		CompilerContext.MessageLog.Warning(
			*FText::Format(
				LOCTEXT("RowNotFound", "@@: Row '{0}' not found in DataTable. Available rows: {1}"),
				FText::FromName(SelectedRowName),
				FText::AsNumber(DT->GetRowNames().Num())
			).ToString(), this);
		BreakAllNodeLinks();
		return;
	}

	// Find the CommandID property (with fuzzy matching for Blueprint struct names)
	FProperty* CommandIDProp = FindPropertyFuzzy(RowStruct, TEXT("CommandID"));
	if (!CommandIDProp)
	{
		// Show all available property names so user can identify the correct one
		CompilerContext.MessageLog.Warning(
			*FText::Format(
				LOCTEXT("NoProp", "@@: Property 'CommandID' not found in struct '{0}'. Available properties: {1}"),
				FText::FromString(RowStruct->GetName()),
				FText::FromString(GetAllPropertyNames(RowStruct))
			).ToString(), this);
		BreakAllNodeLinks();
		return;
	}

	CommandIDValue = ExtractFieldValue(CommandIDProp, RowData);

	if (CommandIDValue.IsEmpty())
	{
		CompilerContext.MessageLog.Warning(
			*FText::Format(
				LOCTEXT("EmptyValue", "@@: CommandID value is empty for row '{0}'. Property found: '{1}' [{2}]"),
				FText::FromName(SelectedRowName),
				FText::FromString(CommandIDProp->GetName()),
				FText::FromString(CommandIDProp->GetClass()->GetName())
			).ToString(), this);
	}

	// --- Bake the value as a literal string using MakeLiteralString ---
	const UFunction* MakeLiteralFunc = UKismetSystemLibrary::StaticClass()->FindFunctionByName(FName(TEXT("MakeLiteralString")));
	if (!MakeLiteralFunc)
	{
		CompilerContext.MessageLog.Error(
			*LOCTEXT("NoMakeLiteral", "@@: Could not find MakeLiteralString.").ToString(), this);
		BreakAllNodeLinks();
		return;
	}

	UK2Node_CallFunction* LiteralNode = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	LiteralNode->SetFromFunction(MakeLiteralFunc);
	LiteralNode->AllocateDefaultPins();

	// Set the baked value on the input pin
	UEdGraphPin* ValuePin = LiteralNode->FindPin(TEXT("Value"));
	if (ValuePin)
	{
		ValuePin->DefaultValue = CommandIDValue;
	}

	// Move our output connections to the literal node's return pin
	UEdGraphPin* ReturnPin = LiteralNode->GetReturnValuePin();
	if (ReturnPin)
	{
		CompilerContext.MovePinLinksToIntermediate(*CommandIDPin, *ReturnPin);
	}

	BreakAllNodeLinks();
}

#undef LOCTEXT_NAMESPACE
