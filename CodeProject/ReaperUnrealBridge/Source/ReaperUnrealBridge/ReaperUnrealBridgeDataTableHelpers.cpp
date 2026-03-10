#include "ReaperUnrealBridgeDataTableHelpers.h"
#include "Engine/DataTable.h"
#include "UObject/UnrealType.h"
#include "UObject/TextProperty.h"
#include "UObject/PropertyPortFlags.h"

static FString ExtractStringField(const UScriptStruct* RowStruct, void* RowData, const FName& FieldName)
{
	FProperty* Prop = RowStruct->FindPropertyByName(FieldName);
	if (!Prop) return FString();

	if (FStrProperty* StrProp = CastField<FStrProperty>(Prop))
		return StrProp->GetPropertyValue_InContainer(RowData);

	if (FIntProperty* IntProp = CastField<FIntProperty>(Prop))
		return FString::FromInt(IntProp->GetPropertyValue_InContainer(RowData));

	if (FInt64Property* Int64Prop = CastField<FInt64Property>(Prop))
		return FString::Printf(TEXT("%lld"), Int64Prop->GetPropertyValue_InContainer(RowData));

	if (FNameProperty* NameProp = CastField<FNameProperty>(Prop))
		return NameProp->GetPropertyValue_InContainer(RowData).ToString();

	if (FTextProperty* TextProp = CastField<FTextProperty>(Prop))
		return TextProp->GetPropertyValue_InContainer(RowData).ToString();

	FString Result;
	const void* ValuePtr = Prop->ContainerPtrToValuePtr<void>(RowData);
	if (ValuePtr)
		Prop->ExportTextItem_Direct(Result, ValuePtr, nullptr, nullptr, PPF_None);
	return Result;
}

bool UReaperUnrealBridgeDataTableHelpers::GetReaperActionData(
	const FDataTableRowHandle& ActionRowHandle,
	FString& OutCommandID,
	FString& OutActionName,
	FString& OutCategory,
	FString& OutSection)
{
	if (!ActionRowHandle.DataTable) return false;

	const UScriptStruct* RowStruct = ActionRowHandle.DataTable->GetRowStruct();
	if (!RowStruct) return false;

	void* RowData = ActionRowHandle.DataTable->FindRowUnchecked(ActionRowHandle.RowName);
	if (!RowData) return false;

	OutCommandID  = ExtractStringField(RowStruct, RowData, FName("CommandID"));
	OutActionName = ExtractStringField(RowStruct, RowData, FName("ActionName"));
	OutCategory   = ExtractStringField(RowStruct, RowData, FName("Category"));
	OutSection    = ExtractStringField(RowStruct, RowData, FName("Section"));

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
	if (!DataTable || RowName.IsNone()) return false;

	const UScriptStruct* RowStruct = DataTable->GetRowStruct();
	if (!RowStruct) return false;

	void* RowData = DataTable->FindRowUnchecked(RowName);
	if (!RowData) return false;

	OutCommandID  = ExtractStringField(RowStruct, RowData, FName("CommandID"));
	OutActionName = ExtractStringField(RowStruct, RowData, FName("ActionName"));
	OutCategory   = ExtractStringField(RowStruct, RowData, FName("Category"));
	OutSection    = ExtractStringField(RowStruct, RowData, FName("Section"));

	if (!OutCommandID.IsEmpty())
		OutOSCAddress = FString::Printf(TEXT("/action/%s"), *OutCommandID);

	return true;
}
