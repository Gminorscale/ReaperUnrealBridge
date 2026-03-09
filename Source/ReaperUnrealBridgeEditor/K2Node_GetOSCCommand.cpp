#include "K2Node_GetOSCCommand.h"
#include "EdGraphSchema_K2.h"
#include "K2Node_CallFunction.h"
#include "KismetCompiler.h"
#include "Engine/DataTable.h"
#include "Kismet/KismetSystemLibrary.h"
#include "UObject/UnrealType.h"

#define LOCTEXT_NAMESPACE "K2Node_GetOSCCommand"

const FName UK2Node_GetOSCCommand::PN_OSCAddress(TEXT("OSCAddress"));
const FName UK2Node_GetOSCCommand::PN_ArgumentType(TEXT("ArgumentType"));
const FName UK2Node_GetOSCCommand::PN_Category(TEXT("Category"));
const FName UK2Node_GetOSCCommand::PN_Example(TEXT("Example"));

void UK2Node_GetOSCCommand::AllocateDefaultPins()
{
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_String, PN_OSCAddress);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_String, PN_ArgumentType);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_String, PN_Category);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_String, PN_Example);

	Super::AllocateDefaultPins();
}

FText UK2Node_GetOSCCommand::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	if (TitleType == ENodeTitleType::FullTitle && !SelectedRowName.IsNone())
	{
		return FText::Format(
			LOCTEXT("GetOSCCommandFull", "Get OSC Command\n{0}"),
			FText::FromName(SelectedRowName)
		);
	}
	return LOCTEXT("GetOSCCommand", "Get OSC Command");
}

FText UK2Node_GetOSCCommand::GetMenuCategory() const
{
	return LOCTEXT("Category", "Reaper Unreal Bridge");
}

UDataTable* UK2Node_GetOSCCommand::GetDataTable() const
{
	return LoadDataTableByPath(GetDataTablePath());
}

FString UK2Node_GetOSCCommand::GetDataTablePath() const
{
	return TEXT("/ReaperUnrealBridge/DT_Reaper_OSCList.DT_Reaper_OSCList");
}

/**
 * Helper: extract any property value as a string (handles int, string, name, text, float, etc.)
 */
static FString ExtractFieldAsString(const UScriptStruct* RowStruct, void* RowData, const FName& FieldName)
{
	FProperty* Prop = RowStruct->FindPropertyByName(FieldName);
	if (!Prop)
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

	// ExportTextItem wraps strings in quotes - strip them
	if (Result.Len() >= 2 && Result.StartsWith(TEXT("\"")) && Result.EndsWith(TEXT("\"")))
	{
		Result = Result.Mid(1, Result.Len() - 2);
	}

	return Result;
}

/** Helper: create a MakeLiteralString node for a baked value and move pin links */
static void BakeLiteralOutput(
	FKismetCompilerContext& CompilerContext,
	UEdGraph* SourceGraph,
	UK2Node* OwnerNode,
	UEdGraphPin* SourcePin,
	const FString& Value)
{
	if (!SourcePin || SourcePin->LinkedTo.Num() == 0)
	{
		return;
	}

	const UFunction* MakeLiteralFunc = UKismetSystemLibrary::StaticClass()->FindFunctionByName(FName(TEXT("MakeLiteralString")));
	if (!MakeLiteralFunc)
	{
		return;
	}

	UK2Node_CallFunction* LiteralNode = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(OwnerNode, SourceGraph);
	LiteralNode->SetFromFunction(MakeLiteralFunc);
	LiteralNode->AllocateDefaultPins();

	UEdGraphPin* ValuePin = LiteralNode->FindPin(TEXT("Value"));
	if (ValuePin)
	{
		ValuePin->DefaultValue = Value;
	}

	UEdGraphPin* ReturnPin = LiteralNode->GetReturnValuePin();
	if (ReturnPin)
	{
		CompilerContext.MovePinLinksToIntermediate(*SourcePin, *ReturnPin);
	}
}

void UK2Node_GetOSCCommand::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);

	// --- Read values at COMPILE TIME from the DataTable ---
	FString OSCAddressValue, ArgumentTypeValue, CategoryValue, ExampleValue;

	UDataTable* DT = GetDataTable();
	if (DT && !SelectedRowName.IsNone())
	{
		const UScriptStruct* RowStruct = DT->GetRowStruct();
		void* RowData = DT->FindRowUnchecked(SelectedRowName);

		if (RowStruct && RowData)
		{
			OSCAddressValue = ExtractFieldAsString(RowStruct, RowData, FName("OSCAddress"));
			ArgumentTypeValue = ExtractFieldAsString(RowStruct, RowData, FName("ArgumentType"));
			CategoryValue = ExtractFieldAsString(RowStruct, RowData, FName("Category"));
			ExampleValue = ExtractFieldAsString(RowStruct, RowData, FName("Example"));
		}
	}

	// --- Bake each output as a literal string ---
	BakeLiteralOutput(CompilerContext, SourceGraph, this, FindPin(PN_OSCAddress), OSCAddressValue);
	BakeLiteralOutput(CompilerContext, SourceGraph, this, FindPin(PN_ArgumentType), ArgumentTypeValue);
	BakeLiteralOutput(CompilerContext, SourceGraph, this, FindPin(PN_Category), CategoryValue);
	BakeLiteralOutput(CompilerContext, SourceGraph, this, FindPin(PN_Example), ExampleValue);

	BreakAllNodeLinks();
}

#undef LOCTEXT_NAMESPACE
