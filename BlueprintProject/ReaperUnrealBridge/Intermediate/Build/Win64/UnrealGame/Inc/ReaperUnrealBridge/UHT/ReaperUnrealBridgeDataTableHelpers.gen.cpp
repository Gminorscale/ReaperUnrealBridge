// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReaperUnrealBridge/ReaperUnrealBridgeDataTableHelpers.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReaperUnrealBridgeDataTableHelpers() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
REAPERUNREALBRIDGE_API UClass* Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers();
REAPERUNREALBRIDGE_API UClass* Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers_NoRegister();
UPackage* Z_Construct_UPackage__Script_ReaperUnrealBridge();
// End Cross Module References

// Begin Class UReaperUnrealBridgeDataTableHelpers Function GetDataTableRowByHandle
struct Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics
{
	struct ReaperUnrealBridgeDataTableHelpers_eventGetDataTableRowByHandle_Parms
	{
		FDataTableRowHandle RowHandle;
		int32 OutRow;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReaperUnrealBridge|DataTable" },
		{ "Comment", "/**\n\x09 * Generic function to get a DataTable row by handle.\n\x09 * This function can be used with any DataTable struct type.\n\x09 * \n\x09 * @param RowHandle The DataTableRowHandle to look up\n\x09 * @param OutRow The output struct row (wildcard type, will be resolved by Blueprint)\n\x09 * @return True if the row was found, false otherwise\n\x09 */" },
		{ "CustomStructureParam", "OutRow" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "ReaperUnrealBridgeDataTableHelpers.h" },
		{ "ToolTip", "Generic function to get a DataTable row by handle.\nThis function can be used with any DataTable struct type.\n\n@param RowHandle The DataTableRowHandle to look up\n@param OutRow The output struct row (wildcard type, will be resolved by Blueprint)\n@return True if the row was found, false otherwise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RowHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutRow;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::NewProp_RowHandle = { "RowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventGetDataTableRowByHandle_Parms, RowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowHandle_MetaData), NewProp_RowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventGetDataTableRowByHandle_Parms, OutRow), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReaperUnrealBridgeDataTableHelpers_eventGetDataTableRowByHandle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReaperUnrealBridgeDataTableHelpers_eventGetDataTableRowByHandle_Parms), &Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::NewProp_RowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::NewProp_OutRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers, nullptr, "GetDataTableRowByHandle", nullptr, nullptr, Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::ReaperUnrealBridgeDataTableHelpers_eventGetDataTableRowByHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::ReaperUnrealBridgeDataTableHelpers_eventGetDataTableRowByHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UReaperUnrealBridgeDataTableHelpers Function GetDataTableRowByHandle

// Begin Class UReaperUnrealBridgeDataTableHelpers Function GetOSCAddressFromActionID
struct Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics
{
	struct ReaperUnrealBridgeDataTableHelpers_eventGetOSCAddressFromActionID_Parms
	{
		FDataTableRowHandle ActionRowHandle;
		FString OutOSCAddress;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReaperUnrealBridge|ReaperActions" },
		{ "Comment", "/**\n\x09 * Get OSC address from ActionID.\n\x09 * Builds the OSC command string in the format /action/{CommandID}\n\x09 * \n\x09 * @param ActionRowHandle The DataTableRowHandle pointing to an action row\n\x09 * @param OutOSCAddress The resulting OSC address (e.g., \"/action/40044\")\n\x09 * @return True if the row was found and address was built\n\x09 */" },
		{ "ModuleRelativePath", "ReaperUnrealBridgeDataTableHelpers.h" },
		{ "RowType", "STRUCT_ActionIDs" },
		{ "ToolTip", "Get OSC address from ActionID.\nBuilds the OSC command string in the format /action/{CommandID}\n\n@param ActionRowHandle The DataTableRowHandle pointing to an action row\n@param OutOSCAddress The resulting OSC address (e.g., \"/action/40044\")\n@return True if the row was found and address was built" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionRowHandle_MetaData[] = {
		{ "NativeConst", "" },
		{ "RowType", "STRUCT_ActionIDs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionRowHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutOSCAddress;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::NewProp_ActionRowHandle = { "ActionRowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventGetOSCAddressFromActionID_Parms, ActionRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionRowHandle_MetaData), NewProp_ActionRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::NewProp_OutOSCAddress = { "OutOSCAddress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventGetOSCAddressFromActionID_Parms, OutOSCAddress), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReaperUnrealBridgeDataTableHelpers_eventGetOSCAddressFromActionID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReaperUnrealBridgeDataTableHelpers_eventGetOSCAddressFromActionID_Parms), &Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::NewProp_ActionRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::NewProp_OutOSCAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers, nullptr, "GetOSCAddressFromActionID", nullptr, nullptr, Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::ReaperUnrealBridgeDataTableHelpers_eventGetOSCAddressFromActionID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::ReaperUnrealBridgeDataTableHelpers_eventGetOSCAddressFromActionID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReaperUnrealBridgeDataTableHelpers::execGetOSCAddressFromActionID)
{
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_ActionRowHandle);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutOSCAddress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UReaperUnrealBridgeDataTableHelpers::GetOSCAddressFromActionID(Z_Param_Out_ActionRowHandle,Z_Param_Out_OutOSCAddress);
	P_NATIVE_END;
}
// End Class UReaperUnrealBridgeDataTableHelpers Function GetOSCAddressFromActionID

// Begin Class UReaperUnrealBridgeDataTableHelpers Function GetOSCListData
struct Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics
{
	struct ReaperUnrealBridgeDataTableHelpers_eventGetOSCListData_Parms
	{
		FDataTableRowHandle OSCRowHandle;
		FString OutOSCAddress;
		FString OutArgumentType;
		FString OutCategory;
		FString OutExample;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReaperUnrealBridge|OSCList" },
		{ "Comment", "/**\n\x09 * Get OSC list data from a DataTableRowHandle.\n\x09 * Specifically designed for the DT_Reaper_OSCList DataTable.\n\x09 * \n\x09 * @param OSCRowHandle The DataTableRowHandle pointing to an OSC command row\n\x09 * @param OutOSCAddress The OSC address pattern\n\x09 * @param OutArgumentType The argument type description\n\x09 * @param OutCategory The category of the OSC command\n\x09 * @param OutExample An example of the OSC address\n\x09 * @return True if the row was found and data was retrieved\n\x09 */" },
		{ "ModuleRelativePath", "ReaperUnrealBridgeDataTableHelpers.h" },
		{ "RowType", "STRUCT_ReaperOSCList" },
		{ "ToolTip", "Get OSC list data from a DataTableRowHandle.\nSpecifically designed for the DT_Reaper_OSCList DataTable.\n\n@param OSCRowHandle The DataTableRowHandle pointing to an OSC command row\n@param OutOSCAddress The OSC address pattern\n@param OutArgumentType The argument type description\n@param OutCategory The category of the OSC command\n@param OutExample An example of the OSC address\n@return True if the row was found and data was retrieved" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OSCRowHandle_MetaData[] = {
		{ "NativeConst", "" },
		{ "RowType", "STRUCT_ReaperOSCList" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OSCRowHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutOSCAddress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutArgumentType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutExample;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::NewProp_OSCRowHandle = { "OSCRowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventGetOSCListData_Parms, OSCRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OSCRowHandle_MetaData), NewProp_OSCRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::NewProp_OutOSCAddress = { "OutOSCAddress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventGetOSCListData_Parms, OutOSCAddress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::NewProp_OutArgumentType = { "OutArgumentType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventGetOSCListData_Parms, OutArgumentType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::NewProp_OutCategory = { "OutCategory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventGetOSCListData_Parms, OutCategory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::NewProp_OutExample = { "OutExample", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventGetOSCListData_Parms, OutExample), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReaperUnrealBridgeDataTableHelpers_eventGetOSCListData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReaperUnrealBridgeDataTableHelpers_eventGetOSCListData_Parms), &Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::NewProp_OSCRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::NewProp_OutOSCAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::NewProp_OutArgumentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::NewProp_OutCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::NewProp_OutExample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers, nullptr, "GetOSCListData", nullptr, nullptr, Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::ReaperUnrealBridgeDataTableHelpers_eventGetOSCListData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::ReaperUnrealBridgeDataTableHelpers_eventGetOSCListData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReaperUnrealBridgeDataTableHelpers::execGetOSCListData)
{
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_OSCRowHandle);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutOSCAddress);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutArgumentType);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCategory);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutExample);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UReaperUnrealBridgeDataTableHelpers::GetOSCListData(Z_Param_Out_OSCRowHandle,Z_Param_Out_OutOSCAddress,Z_Param_Out_OutArgumentType,Z_Param_Out_OutCategory,Z_Param_Out_OutExample);
	P_NATIVE_END;
}
// End Class UReaperUnrealBridgeDataTableHelpers Function GetOSCListData

// Begin Class UReaperUnrealBridgeDataTableHelpers Function GetReaperActionData
struct Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics
{
	struct ReaperUnrealBridgeDataTableHelpers_eventGetReaperActionData_Parms
	{
		FDataTableRowHandle ActionRowHandle;
		FString OutCommandID;
		FString OutActionName;
		FString OutCategory;
		FString OutSection;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReaperUnrealBridge|ReaperActions" },
		{ "Comment", "/**\n\x09 * Get ActionID data from a DataTableRowHandle.\n\x09 * Specifically designed for the ReaperActions_DataTable.\n\x09 * \n\x09 * @param ActionRowHandle The DataTableRowHandle pointing to an action row\n\x09 * @param OutCommandID The command ID string (e.g., \"40044\")\n\x09 * @param OutActionName The action name\n\x09 * @param OutCategory The category of the action\n\x09 * @param OutSection The section the action belongs to\n\x09 * @return True if the row was found and data was retrieved\n\x09 */" },
		{ "ModuleRelativePath", "ReaperUnrealBridgeDataTableHelpers.h" },
		{ "RowType", "STRUCT_ActionIDs" },
		{ "ToolTip", "Get ActionID data from a DataTableRowHandle.\nSpecifically designed for the ReaperActions_DataTable.\n\n@param ActionRowHandle The DataTableRowHandle pointing to an action row\n@param OutCommandID The command ID string (e.g., \"40044\")\n@param OutActionName The action name\n@param OutCategory The category of the action\n@param OutSection The section the action belongs to\n@return True if the row was found and data was retrieved" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionRowHandle_MetaData[] = {
		{ "NativeConst", "" },
		{ "RowType", "STRUCT_ActionIDs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionRowHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutCommandID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutActionName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutSection;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::NewProp_ActionRowHandle = { "ActionRowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventGetReaperActionData_Parms, ActionRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionRowHandle_MetaData), NewProp_ActionRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::NewProp_OutCommandID = { "OutCommandID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventGetReaperActionData_Parms, OutCommandID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::NewProp_OutActionName = { "OutActionName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventGetReaperActionData_Parms, OutActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::NewProp_OutCategory = { "OutCategory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventGetReaperActionData_Parms, OutCategory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::NewProp_OutSection = { "OutSection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventGetReaperActionData_Parms, OutSection), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReaperUnrealBridgeDataTableHelpers_eventGetReaperActionData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReaperUnrealBridgeDataTableHelpers_eventGetReaperActionData_Parms), &Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::NewProp_ActionRowHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::NewProp_OutCommandID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::NewProp_OutActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::NewProp_OutCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::NewProp_OutSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers, nullptr, "GetReaperActionData", nullptr, nullptr, Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::ReaperUnrealBridgeDataTableHelpers_eventGetReaperActionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::ReaperUnrealBridgeDataTableHelpers_eventGetReaperActionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReaperUnrealBridgeDataTableHelpers::execGetReaperActionData)
{
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_ActionRowHandle);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCommandID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutActionName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCategory);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutSection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UReaperUnrealBridgeDataTableHelpers::GetReaperActionData(Z_Param_Out_ActionRowHandle,Z_Param_Out_OutCommandID,Z_Param_Out_OutActionName,Z_Param_Out_OutCategory,Z_Param_Out_OutSection);
	P_NATIVE_END;
}
// End Class UReaperUnrealBridgeDataTableHelpers Function GetReaperActionData

// Begin Class UReaperUnrealBridgeDataTableHelpers Function Internal_GetOSCCommandByName
struct Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics
{
	struct ReaperUnrealBridgeDataTableHelpers_eventInternal_GetOSCCommandByName_Parms
	{
		UDataTable* DataTable;
		FName RowName;
		FString OutOSCAddress;
		FString OutArgumentType;
		FString OutCategory;
		FString OutExample;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "ReaperUnrealBridge|Internal" },
		{ "Comment", "/**\n\x09 * Internal function used by the K2 node. Not visible in Blueprint menus.\n\x09 * Looks up an OSC command by DataTable + RowName and returns all fields.\n\x09 */" },
		{ "ModuleRelativePath", "ReaperUnrealBridgeDataTableHelpers.h" },
		{ "ToolTip", "Internal function used by the K2 node. Not visible in Blueprint menus.\nLooks up an OSC command by DataTable + RowName and returns all fields." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutOSCAddress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutArgumentType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutExample;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventInternal_GetOSCCommandByName_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventInternal_GetOSCCommandByName_Parms, RowName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::NewProp_OutOSCAddress = { "OutOSCAddress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventInternal_GetOSCCommandByName_Parms, OutOSCAddress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::NewProp_OutArgumentType = { "OutArgumentType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventInternal_GetOSCCommandByName_Parms, OutArgumentType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::NewProp_OutCategory = { "OutCategory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventInternal_GetOSCCommandByName_Parms, OutCategory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::NewProp_OutExample = { "OutExample", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventInternal_GetOSCCommandByName_Parms, OutExample), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReaperUnrealBridgeDataTableHelpers_eventInternal_GetOSCCommandByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReaperUnrealBridgeDataTableHelpers_eventInternal_GetOSCCommandByName_Parms), &Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::NewProp_RowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::NewProp_OutOSCAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::NewProp_OutArgumentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::NewProp_OutCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::NewProp_OutExample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers, nullptr, "Internal_GetOSCCommandByName", nullptr, nullptr, Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::ReaperUnrealBridgeDataTableHelpers_eventInternal_GetOSCCommandByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::ReaperUnrealBridgeDataTableHelpers_eventInternal_GetOSCCommandByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReaperUnrealBridgeDataTableHelpers::execInternal_GetOSCCommandByName)
{
	P_GET_OBJECT(UDataTable,Z_Param_DataTable);
	P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutOSCAddress);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutArgumentType);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCategory);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutExample);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UReaperUnrealBridgeDataTableHelpers::Internal_GetOSCCommandByName(Z_Param_DataTable,Z_Param_RowName,Z_Param_Out_OutOSCAddress,Z_Param_Out_OutArgumentType,Z_Param_Out_OutCategory,Z_Param_Out_OutExample);
	P_NATIVE_END;
}
// End Class UReaperUnrealBridgeDataTableHelpers Function Internal_GetOSCCommandByName

// Begin Class UReaperUnrealBridgeDataTableHelpers Function Internal_GetReaperActionByName
struct Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics
{
	struct ReaperUnrealBridgeDataTableHelpers_eventInternal_GetReaperActionByName_Parms
	{
		UDataTable* DataTable;
		FName RowName;
		FString OutCommandID;
		FString OutActionName;
		FString OutCategory;
		FString OutSection;
		FString OutOSCAddress;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "ReaperUnrealBridge|Internal" },
		{ "Comment", "/**\n\x09 * Internal function used by the K2 node. Not visible in Blueprint menus.\n\x09 * Looks up a Reaper action by DataTable + RowName and returns all fields + OSC address.\n\x09 */" },
		{ "ModuleRelativePath", "ReaperUnrealBridgeDataTableHelpers.h" },
		{ "ToolTip", "Internal function used by the K2 node. Not visible in Blueprint menus.\nLooks up a Reaper action by DataTable + RowName and returns all fields + OSC address." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutCommandID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutActionName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutSection;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutOSCAddress;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventInternal_GetReaperActionByName_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventInternal_GetReaperActionByName_Parms, RowName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_OutCommandID = { "OutCommandID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventInternal_GetReaperActionByName_Parms, OutCommandID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_OutActionName = { "OutActionName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventInternal_GetReaperActionByName_Parms, OutActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_OutCategory = { "OutCategory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventInternal_GetReaperActionByName_Parms, OutCategory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_OutSection = { "OutSection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventInternal_GetReaperActionByName_Parms, OutSection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_OutOSCAddress = { "OutOSCAddress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperUnrealBridgeDataTableHelpers_eventInternal_GetReaperActionByName_Parms, OutOSCAddress), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReaperUnrealBridgeDataTableHelpers_eventInternal_GetReaperActionByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReaperUnrealBridgeDataTableHelpers_eventInternal_GetReaperActionByName_Parms), &Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_RowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_OutCommandID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_OutActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_OutCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_OutSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_OutOSCAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers, nullptr, "Internal_GetReaperActionByName", nullptr, nullptr, Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::ReaperUnrealBridgeDataTableHelpers_eventInternal_GetReaperActionByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::ReaperUnrealBridgeDataTableHelpers_eventInternal_GetReaperActionByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReaperUnrealBridgeDataTableHelpers::execInternal_GetReaperActionByName)
{
	P_GET_OBJECT(UDataTable,Z_Param_DataTable);
	P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCommandID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutActionName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCategory);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutSection);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutOSCAddress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UReaperUnrealBridgeDataTableHelpers::Internal_GetReaperActionByName(Z_Param_DataTable,Z_Param_RowName,Z_Param_Out_OutCommandID,Z_Param_Out_OutActionName,Z_Param_Out_OutCategory,Z_Param_Out_OutSection,Z_Param_Out_OutOSCAddress);
	P_NATIVE_END;
}
// End Class UReaperUnrealBridgeDataTableHelpers Function Internal_GetReaperActionByName

// Begin Class UReaperUnrealBridgeDataTableHelpers
void UReaperUnrealBridgeDataTableHelpers::StaticRegisterNativesUReaperUnrealBridgeDataTableHelpers()
{
	UClass* Class = UReaperUnrealBridgeDataTableHelpers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDataTableRowByHandle", &UReaperUnrealBridgeDataTableHelpers::execGetDataTableRowByHandle },
		{ "GetOSCAddressFromActionID", &UReaperUnrealBridgeDataTableHelpers::execGetOSCAddressFromActionID },
		{ "GetOSCListData", &UReaperUnrealBridgeDataTableHelpers::execGetOSCListData },
		{ "GetReaperActionData", &UReaperUnrealBridgeDataTableHelpers::execGetReaperActionData },
		{ "Internal_GetOSCCommandByName", &UReaperUnrealBridgeDataTableHelpers::execInternal_GetOSCCommandByName },
		{ "Internal_GetReaperActionByName", &UReaperUnrealBridgeDataTableHelpers::execInternal_GetReaperActionByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReaperUnrealBridgeDataTableHelpers);
UClass* Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers_NoRegister()
{
	return UReaperUnrealBridgeDataTableHelpers::StaticClass();
}
struct Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Generic helper class for DataTable operations with Blueprint dropdown support.\n * This class provides static functions that can be called from Blueprint nodes\n * with searchable dropdowns for DataTableRowHandle inputs.\n */" },
		{ "IncludePath", "ReaperUnrealBridgeDataTableHelpers.h" },
		{ "ModuleRelativePath", "ReaperUnrealBridgeDataTableHelpers.h" },
		{ "ToolTip", "Generic helper class for DataTable operations with Blueprint dropdown support.\nThis class provides static functions that can be called from Blueprint nodes\nwith searchable dropdowns for DataTableRowHandle inputs." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetDataTableRowByHandle, "GetDataTableRowByHandle" }, // 340807769
		{ &Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCAddressFromActionID, "GetOSCAddressFromActionID" }, // 3859886858
		{ &Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetOSCListData, "GetOSCListData" }, // 271480296
		{ &Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_GetReaperActionData, "GetReaperActionData" }, // 4096506935
		{ &Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetOSCCommandByName, "Internal_GetOSCCommandByName" }, // 107431029
		{ &Z_Construct_UFunction_UReaperUnrealBridgeDataTableHelpers_Internal_GetReaperActionByName, "Internal_GetReaperActionByName" }, // 2558652321
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReaperUnrealBridgeDataTableHelpers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ReaperUnrealBridge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers_Statics::ClassParams = {
	&UReaperUnrealBridgeDataTableHelpers::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers()
{
	if (!Z_Registration_Info_UClass_UReaperUnrealBridgeDataTableHelpers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReaperUnrealBridgeDataTableHelpers.OuterSingleton, Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReaperUnrealBridgeDataTableHelpers.OuterSingleton;
}
template<> REAPERUNREALBRIDGE_API UClass* StaticClass<UReaperUnrealBridgeDataTableHelpers>()
{
	return UReaperUnrealBridgeDataTableHelpers::StaticClass();
}
UReaperUnrealBridgeDataTableHelpers::UReaperUnrealBridgeDataTableHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReaperUnrealBridgeDataTableHelpers);
UReaperUnrealBridgeDataTableHelpers::~UReaperUnrealBridgeDataTableHelpers() {}
// End Class UReaperUnrealBridgeDataTableHelpers

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperUnrealBridgeDataTableHelpers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers, UReaperUnrealBridgeDataTableHelpers::StaticClass, TEXT("UReaperUnrealBridgeDataTableHelpers"), &Z_Registration_Info_UClass_UReaperUnrealBridgeDataTableHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReaperUnrealBridgeDataTableHelpers), 4103706905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperUnrealBridgeDataTableHelpers_h_995192286(TEXT("/Script/ReaperUnrealBridge"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperUnrealBridgeDataTableHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperUnrealBridgeDataTableHelpers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
