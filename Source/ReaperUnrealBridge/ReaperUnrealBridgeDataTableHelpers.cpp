#include "ReaperUnrealBridgeDataTableHelpers.h"
#include "Engine/DataTable.h"
#include "UObject/UnrealType.h"
#include "UObject/PropertyPortFlags.h"

// Helper function to extract any field as a string from a row (handles String, Int, Name, Text, etc.)
static FString ExtractStringField(const UScriptStruct* RowStruct, void* RowData, const FName& FieldName)
{
	FProperty* Prop = RowStruct->FindPropertyByName(FieldName);
	if (!Prop)
	{
		return FString();
	}

	// Try FStrProperty first (most common)
	if (FStrProperty* StrProp = CastField<FStrProperty>(Prop))
	{
		return StrProp->GetPropertyValue_InContainer(RowData);
	}

	// Try integer types (CommandID is likely an int)
	if (FIntProperty* IntProp = CastField<FIntProperty>(Prop))
	{
		int32 Value = IntProp->GetPropertyValue_InContainer(RowData);
		return FString::FromInt(Value);
	}

	if (FInt64Property* Int64Prop = CastField<FInt64Property>(Prop))
	{
		int64 Value = Int64Prop->GetPropertyValue_InContainer(RowData);
		return FString::Printf(TEXT("%lld"), Value);
	}

	// Try FNameProperty
	if (FNameProperty* NameProp = CastField<FNameProperty>(Prop))
	{
		return NameProp->GetPropertyValue_InContainer(RowData).ToString();
	}

	// Try FTextProperty
	if (FTextProperty* TextProp = CastField<FTextProperty>(Prop))
	{
		return TextProp->GetPropertyValue_InContainer(RowData).ToString();
	}

	// Fallback: use ExportText for any other type
	FString Result;
	const void* ValuePtr = Prop->ContainerPtrToValuePtr<void>(RowData);
	if (ValuePtr)
	{
		Prop->ExportTextItem_Direct(Result, ValuePtr, nullptr, nullptr, PPF_None);
	}
	return Result;
}

// Generic thunk implementation for GetDataTableRowByHandle
DEFINE_FUNCTION(UReaperUnrealBridgeDataTableHelpers::execGetDataTableRowByHandle)
{
	P_GET_STRUCT_REF(FDataTableRowHandle, RowHandle);
	
	// Get the output property
	Stack.StepCompiledIn<FStructProperty>(nullptr);
	void* OutRowPtr = Stack.MostRecentPropertyAddress;
	FStructProperty* OutRowProperty = CastField<FStructProperty>(Stack.MostRecentProperty);
	
	P_FINISH;
	
	P_NATIVE_BEGIN;
	
	bool bSuccess = false;
	
	if (RowHandle.DataTable && OutRowProperty && OutRowPtr)
	{
		const UScriptStruct* RowStruct = RowHandle.DataTable->GetRowStruct();
		if (RowStruct && RowStruct == OutRowProperty->Struct)
		{
			void* RowData = RowHandle.DataTable->FindRowUnchecked(RowHandle.RowName);
			if (RowData)
			{
				RowStruct->CopyScriptStruct(OutRowPtr, RowData);
				bSuccess = true;
			}
		}
	}
	
	*(bool*)RESULT_PARAM = bSuccess;
	
	P_NATIVE_END;
}

bool UReaperUnrealBridgeDataTableHelpers::GetDataTableRowByHandle(const FDataTableRowHandle& RowHandle, int32& OutRow)
{
	// This is never actually called - the thunk handles it
	return false;
}

bool UReaperUnrealBridgeDataTableHelpers::GetReaperActionData(
	const FDataTableRowHandle& ActionRowHandle,
	FString& OutCommandID,
	FString& OutActionName,
	FString& OutCategory,
	FString& OutSection)
{
	if (!ActionRowHandle.DataTable)
	{
		return false;
	}

	// Get the row struct
	const UScriptStruct* RowStruct = ActionRowHandle.DataTable->GetRowStruct();
	if (!RowStruct)
	{
		return false;
	}

	// Find the row
	void* RowData = ActionRowHandle.DataTable->FindRowUnchecked(ActionRowHandle.RowName);
	if (!RowData)
	{
		return false;
	}

	// Use ExtractStringField to handle any property type (int, string, name, etc.)
	OutCommandID = ExtractStringField(RowStruct, RowData, FName("CommandID"));
	OutActionName = ExtractStringField(RowStruct, RowData, FName("ActionName"));
	OutCategory = ExtractStringField(RowStruct, RowData, FName("Category"));
	OutSection = ExtractStringField(RowStruct, RowData, FName("Section"));

	return true;
}

bool UReaperUnrealBridgeDataTableHelpers::GetOSCAddressFromActionID(
	const FDataTableRowHandle& ActionRowHandle,
	FString& OutOSCAddress)
{
	FString CommandID;
	FString Dummy1, Dummy2, Dummy3;
	
	if (GetReaperActionData(ActionRowHandle, CommandID, Dummy1, Dummy2, Dummy3))
	{
		if (!CommandID.IsEmpty())
		{
			OutOSCAddress = FString::Printf(TEXT("/action/%s"), *CommandID);
			return true;
		}
	}
	
	return false;
}

bool UReaperUnrealBridgeDataTableHelpers::GetOSCListData(
	const FDataTableRowHandle& OSCRowHandle,
	FString& OutOSCAddress,
	FString& OutArgumentType,
	FString& OutCategory,
	FString& OutExample)
{
	if (!OSCRowHandle.DataTable)
	{
		return false;
	}

	const UScriptStruct* RowStruct = OSCRowHandle.DataTable->GetRowStruct();
	if (!RowStruct)
	{
		return false;
	}

	void* RowData = OSCRowHandle.DataTable->FindRowUnchecked(OSCRowHandle.RowName);
	if (!RowData)
	{
		return false;
	}

	// Use ExtractStringField to handle any property type
	OutOSCAddress = ExtractStringField(RowStruct, RowData, FName("OSCAddress"));
	OutArgumentType = ExtractStringField(RowStruct, RowData, FName("ArgumentType"));
	OutCategory = ExtractStringField(RowStruct, RowData, FName("Category"));
	OutExample = ExtractStringField(RowStruct, RowData, FName("Example"));

	return true;
}

bool UReaperUnrealBridgeDataTableHelpers::Internal_GetReaperActionByName(
	UDataTable* DataTable,
	FName RowName,
	FString& OutCommandID,
	FString& OutActionName,
	FString& OutCategory,
	FString& OutSection,
	FString& OutOSCAddress)
{
	if (!DataTable || RowName.IsNone())
	{
		return false;
	}

	const UScriptStruct* RowStruct = DataTable->GetRowStruct();
	if (!RowStruct)
	{
		return false;
	}

	void* RowData = DataTable->FindRowUnchecked(RowName);
	if (!RowData)
	{
		return false;
	}

	OutCommandID = ExtractStringField(RowStruct, RowData, FName("CommandID"));
	OutActionName = ExtractStringField(RowStruct, RowData, FName("ActionName"));
	OutCategory = ExtractStringField(RowStruct, RowData, FName("Category"));
	OutSection = ExtractStringField(RowStruct, RowData, FName("Section"));

	if (!OutCommandID.IsEmpty())
	{
		OutOSCAddress = FString::Printf(TEXT("/action/%s"), *OutCommandID);
	}

	return true;
}

bool UReaperUnrealBridgeDataTableHelpers::Internal_GetOSCCommandByName(
	UDataTable* DataTable,
	FName RowName,
	FString& OutOSCAddress,
	FString& OutArgumentType,
	FString& OutCategory,
	FString& OutExample)
{
	if (!DataTable || RowName.IsNone())
	{
		return false;
	}

	const UScriptStruct* RowStruct = DataTable->GetRowStruct();
	if (!RowStruct)
	{
		return false;
	}

	void* RowData = DataTable->FindRowUnchecked(RowName);
	if (!RowData)
	{
		return false;
	}

	OutOSCAddress = ExtractStringField(RowStruct, RowData, FName("OSCAddress"));
	OutArgumentType = ExtractStringField(RowStruct, RowData, FName("ArgumentType"));
	OutCategory = ExtractStringField(RowStruct, RowData, FName("Category"));
	OutExample = ExtractStringField(RowStruct, RowData, FName("Example"));

	return true;
}
