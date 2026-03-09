// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReaperUnrealBridgeEditor/K2Node_GetReaperAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetReaperAction() {}

// Begin Cross Module References
REAPERUNREALBRIDGEEDITOR_API UClass* Z_Construct_UClass_UK2Node_GetReaperAction();
REAPERUNREALBRIDGEEDITOR_API UClass* Z_Construct_UClass_UK2Node_GetReaperAction_NoRegister();
REAPERUNREALBRIDGEEDITOR_API UClass* Z_Construct_UClass_UK2Node_ReaperBase();
UPackage* Z_Construct_UPackage__Script_ReaperUnrealBridgeEditor();
// End Cross Module References

// Begin Class UK2Node_GetReaperAction
void UK2Node_GetReaperAction::StaticRegisterNativesUK2Node_GetReaperAction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GetReaperAction);
UClass* Z_Construct_UClass_UK2Node_GetReaperAction_NoRegister()
{
	return UK2Node_GetReaperAction::StaticClass();
}
struct Z_Construct_UClass_UK2Node_GetReaperAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom Blueprint node: Get Reaper Action\n * \n * Shows a searchable dropdown of all rows in ReaperActions_DataTable.\n * Outputs only the CommandID string.\n * \n * Use this to select a Reaper action and get its command ID for OSC.\n */" },
		{ "IncludePath", "K2Node_GetReaperAction.h" },
		{ "ModuleRelativePath", "K2Node_GetReaperAction.h" },
		{ "ToolTip", "Custom Blueprint node: Get Reaper Action\n\nShows a searchable dropdown of all rows in ReaperActions_DataTable.\nOutputs only the CommandID string.\n\nUse this to select a Reaper action and get its command ID for OSC." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetReaperAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UK2Node_GetReaperAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_ReaperBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ReaperUnrealBridgeEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetReaperAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetReaperAction_Statics::ClassParams = {
	&UK2Node_GetReaperAction::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetReaperAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_GetReaperAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_GetReaperAction()
{
	if (!Z_Registration_Info_UClass_UK2Node_GetReaperAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetReaperAction.OuterSingleton, Z_Construct_UClass_UK2Node_GetReaperAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_GetReaperAction.OuterSingleton;
}
template<> REAPERUNREALBRIDGEEDITOR_API UClass* StaticClass<UK2Node_GetReaperAction>()
{
	return UK2Node_GetReaperAction::StaticClass();
}
UK2Node_GetReaperAction::UK2Node_GetReaperAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetReaperAction);
UK2Node_GetReaperAction::~UK2Node_GetReaperAction() {}
// End Class UK2Node_GetReaperAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridgeEditor_K2Node_GetReaperAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_GetReaperAction, UK2Node_GetReaperAction::StaticClass, TEXT("UK2Node_GetReaperAction"), &Z_Registration_Info_UClass_UK2Node_GetReaperAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetReaperAction), 1367906839U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridgeEditor_K2Node_GetReaperAction_h_1810901788(TEXT("/Script/ReaperUnrealBridgeEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridgeEditor_K2Node_GetReaperAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridgeEditor_K2Node_GetReaperAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
