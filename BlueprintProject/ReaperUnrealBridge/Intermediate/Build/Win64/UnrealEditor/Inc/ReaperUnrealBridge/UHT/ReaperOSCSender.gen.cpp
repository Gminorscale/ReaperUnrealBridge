// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReaperUnrealBridge/ReaperOSCSender.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReaperOSCSender() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
REAPERUNREALBRIDGE_API UClass* Z_Construct_UClass_UReaperOSCSender();
REAPERUNREALBRIDGE_API UClass* Z_Construct_UClass_UReaperOSCSender_NoRegister();
UPackage* Z_Construct_UPackage__Script_ReaperUnrealBridge();
// End Cross Module References

// Begin Class UReaperOSCSender Function QuickSendMessage
struct Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics
{
	struct ReaperOSCSender_eventQuickSendMessage_Parms
	{
		FString IPAddress;
		int32 Port;
		FString Address;
		float Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReaperUnrealBridge|OSC" },
		{ "Comment", "/**\n\x09 * Send a simple OSC message to an IP address and port.\n\x09 * Sends the address with a single float argument (default 1.0 for trigger/bang).\n\x09 *\n\x09 * @param IPAddress  Target IP address (e.g. \"127.0.0.1\" for local Reaper)\n\x09 * @param Port       Target UDP port (Reaper default OSC port is 8000)\n\x09 * @param Address    OSC address string (e.g. \"/action/40044\")\n\x09 * @param Value      Float argument to send with the message (default 1.0)\n\x09 * @return true if the message was sent successfully\n\x09 */" },
		{ "CPP_Default_Value", "1.000000" },
		{ "DisplayName", "Quick Send Message" },
		{ "ModuleRelativePath", "ReaperOSCSender.h" },
		{ "ToolTip", "Send a simple OSC message to an IP address and port.\nSends the address with a single float argument (default 1.0 for trigger/bang).\n\n@param IPAddress  Target IP address (e.g. \"127.0.0.1\" for local Reaper)\n@param Port       Target UDP port (Reaper default OSC port is 8000)\n@param Address    OSC address string (e.g. \"/action/40044\")\n@param Value      Float argument to send with the message (default 1.0)\n@return true if the message was sent successfully" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperOSCSender_eventQuickSendMessage_Parms, IPAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPAddress_MetaData), NewProp_IPAddress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperOSCSender_eventQuickSendMessage_Parms, Port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperOSCSender_eventQuickSendMessage_Parms, Address), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Address_MetaData), NewProp_Address_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperOSCSender_eventQuickSendMessage_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReaperOSCSender_eventQuickSendMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReaperOSCSender_eventQuickSendMessage_Parms), &Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::NewProp_IPAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::NewProp_Address,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReaperOSCSender, nullptr, "QuickSendMessage", nullptr, nullptr, Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::ReaperOSCSender_eventQuickSendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::ReaperOSCSender_eventQuickSendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReaperOSCSender::execQuickSendMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
	P_GET_PROPERTY(FIntProperty,Z_Param_Port);
	P_GET_PROPERTY(FStrProperty,Z_Param_Address);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UReaperOSCSender::QuickSendMessage(Z_Param_IPAddress,Z_Param_Port,Z_Param_Address,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UReaperOSCSender Function QuickSendMessage

// Begin Class UReaperOSCSender
void UReaperOSCSender::StaticRegisterNativesUReaperOSCSender()
{
	UClass* Class = UReaperOSCSender::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "QuickSendMessage", &UReaperOSCSender::execQuickSendMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReaperOSCSender);
UClass* Z_Construct_UClass_UReaperOSCSender_NoRegister()
{
	return UReaperOSCSender::StaticClass();
}
struct Z_Construct_UClass_UReaperOSCSender_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Lightweight OSC sender for the ReaperUnrealBridge plugin.\n * Sends a single OSC message (address + optional float value) over UDP.\n * No OSC plugin dependency required at runtime.\n */" },
		{ "IncludePath", "ReaperOSCSender.h" },
		{ "ModuleRelativePath", "ReaperOSCSender.h" },
		{ "ToolTip", "Lightweight OSC sender for the ReaperUnrealBridge plugin.\nSends a single OSC message (address + optional float value) over UDP.\nNo OSC plugin dependency required at runtime." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReaperOSCSender_QuickSendMessage, "QuickSendMessage" }, // 1139074462
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReaperOSCSender>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReaperOSCSender_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ReaperUnrealBridge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReaperOSCSender_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReaperOSCSender_Statics::ClassParams = {
	&UReaperOSCSender::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReaperOSCSender_Statics::Class_MetaDataParams), Z_Construct_UClass_UReaperOSCSender_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReaperOSCSender()
{
	if (!Z_Registration_Info_UClass_UReaperOSCSender.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReaperOSCSender.OuterSingleton, Z_Construct_UClass_UReaperOSCSender_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReaperOSCSender.OuterSingleton;
}
template<> REAPERUNREALBRIDGE_API UClass* StaticClass<UReaperOSCSender>()
{
	return UReaperOSCSender::StaticClass();
}
UReaperOSCSender::UReaperOSCSender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReaperOSCSender);
UReaperOSCSender::~UReaperOSCSender() {}
// End Class UReaperOSCSender

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperOSCSender_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReaperOSCSender, UReaperOSCSender::StaticClass, TEXT("UReaperOSCSender"), &Z_Registration_Info_UClass_UReaperOSCSender, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReaperOSCSender), 1773705986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperOSCSender_h_1184049199(TEXT("/Script/ReaperUnrealBridge"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperOSCSender_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperOSCSender_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
