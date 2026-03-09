// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReaperUnrealBridgeEditor/K2Node_ReaperBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_ReaperBase() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
REAPERUNREALBRIDGEEDITOR_API UClass* Z_Construct_UClass_UK2Node_ReaperBase();
REAPERUNREALBRIDGEEDITOR_API UClass* Z_Construct_UClass_UK2Node_ReaperBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ReaperUnrealBridgeEditor();
// End Cross Module References

// Begin Class UK2Node_ReaperBase
void UK2Node_ReaperBase::StaticRegisterNativesUK2Node_ReaperBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_ReaperBase);
UClass* Z_Construct_UClass_UK2Node_ReaperBase_NoRegister()
{
	return UK2Node_ReaperBase::StaticClass();
}
struct Z_Construct_UClass_UK2Node_ReaperBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for Reaper DataTable lookup K2 nodes.\n * Provides common functionality: DataTable loading, row name dropdown, menu registration.\n */" },
		{ "IncludePath", "K2Node_ReaperBase.h" },
		{ "ModuleRelativePath", "K2Node_ReaperBase.h" },
		{ "ToolTip", "Base class for Reaper DataTable lookup K2 nodes.\nProvides common functionality: DataTable loading, row name dropdown, menu registration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedRowName_MetaData[] = {
		{ "Comment", "/** The currently selected row name (serialized with the node) */" },
		{ "ModuleRelativePath", "K2Node_ReaperBase.h" },
		{ "ToolTip", "The currently selected row name (serialized with the node)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedRowName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_ReaperBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_ReaperBase_Statics::NewProp_SelectedRowName = { "SelectedRowName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_ReaperBase, SelectedRowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedRowName_MetaData), NewProp_SelectedRowName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_ReaperBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_ReaperBase_Statics::NewProp_SelectedRowName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_ReaperBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UK2Node_ReaperBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_ReaperUnrealBridgeEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_ReaperBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_ReaperBase_Statics::ClassParams = {
	&UK2Node_ReaperBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UK2Node_ReaperBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_ReaperBase_Statics::PropPointers),
	0,
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_ReaperBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_ReaperBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_ReaperBase()
{
	if (!Z_Registration_Info_UClass_UK2Node_ReaperBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_ReaperBase.OuterSingleton, Z_Construct_UClass_UK2Node_ReaperBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_ReaperBase.OuterSingleton;
}
template<> REAPERUNREALBRIDGEEDITOR_API UClass* StaticClass<UK2Node_ReaperBase>()
{
	return UK2Node_ReaperBase::StaticClass();
}
UK2Node_ReaperBase::UK2Node_ReaperBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_ReaperBase);
UK2Node_ReaperBase::~UK2Node_ReaperBase() {}
// End Class UK2Node_ReaperBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridgeEditor_K2Node_ReaperBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_ReaperBase, UK2Node_ReaperBase::StaticClass, TEXT("UK2Node_ReaperBase"), &Z_Registration_Info_UClass_UK2Node_ReaperBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_ReaperBase), 656763294U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridgeEditor_K2Node_ReaperBase_h_1351998136(TEXT("/Script/ReaperUnrealBridgeEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridgeEditor_K2Node_ReaperBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridgeEditor_K2Node_ReaperBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
