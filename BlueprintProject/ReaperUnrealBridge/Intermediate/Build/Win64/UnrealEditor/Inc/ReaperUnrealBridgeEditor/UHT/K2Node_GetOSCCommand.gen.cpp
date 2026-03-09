// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReaperUnrealBridgeEditor/K2Node_GetOSCCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetOSCCommand() {}

// Begin Cross Module References
REAPERUNREALBRIDGEEDITOR_API UClass* Z_Construct_UClass_UK2Node_GetOSCCommand();
REAPERUNREALBRIDGEEDITOR_API UClass* Z_Construct_UClass_UK2Node_GetOSCCommand_NoRegister();
REAPERUNREALBRIDGEEDITOR_API UClass* Z_Construct_UClass_UK2Node_ReaperBase();
UPackage* Z_Construct_UPackage__Script_ReaperUnrealBridgeEditor();
// End Cross Module References

// Begin Class UK2Node_GetOSCCommand
void UK2Node_GetOSCCommand::StaticRegisterNativesUK2Node_GetOSCCommand()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GetOSCCommand);
UClass* Z_Construct_UClass_UK2Node_GetOSCCommand_NoRegister()
{
	return UK2Node_GetOSCCommand::StaticClass();
}
struct Z_Construct_UClass_UK2Node_GetOSCCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom Blueprint node: Get OSC Command\n * \n * Shows a dropdown of all rows in DT_Reaper_OSCList.\n * Outputs: OSCAddress, ArgumentType, Category, Example, and Success bool.\n * \n * Use this to select an OSC command pattern from the Reaper OSC database.\n */" },
		{ "IncludePath", "K2Node_GetOSCCommand.h" },
		{ "ModuleRelativePath", "K2Node_GetOSCCommand.h" },
		{ "ToolTip", "Custom Blueprint node: Get OSC Command\n\nShows a dropdown of all rows in DT_Reaper_OSCList.\nOutputs: OSCAddress, ArgumentType, Category, Example, and Success bool.\n\nUse this to select an OSC command pattern from the Reaper OSC database." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetOSCCommand>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UK2Node_GetOSCCommand_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_ReaperBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ReaperUnrealBridgeEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetOSCCommand_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetOSCCommand_Statics::ClassParams = {
	&UK2Node_GetOSCCommand::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetOSCCommand_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_GetOSCCommand_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_GetOSCCommand()
{
	if (!Z_Registration_Info_UClass_UK2Node_GetOSCCommand.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetOSCCommand.OuterSingleton, Z_Construct_UClass_UK2Node_GetOSCCommand_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_GetOSCCommand.OuterSingleton;
}
template<> REAPERUNREALBRIDGEEDITOR_API UClass* StaticClass<UK2Node_GetOSCCommand>()
{
	return UK2Node_GetOSCCommand::StaticClass();
}
UK2Node_GetOSCCommand::UK2Node_GetOSCCommand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetOSCCommand);
UK2Node_GetOSCCommand::~UK2Node_GetOSCCommand() {}
// End Class UK2Node_GetOSCCommand

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridgeEditor_K2Node_GetOSCCommand_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_GetOSCCommand, UK2Node_GetOSCCommand::StaticClass, TEXT("UK2Node_GetOSCCommand"), &Z_Registration_Info_UClass_UK2Node_GetOSCCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetOSCCommand), 711289830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridgeEditor_K2Node_GetOSCCommand_h_2335204215(TEXT("/Script/ReaperUnrealBridgeEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridgeEditor_K2Node_GetOSCCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridgeEditor_K2Node_GetOSCCommand_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
