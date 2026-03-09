// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReaperUnrealBridge/ReaperAudioCaptureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReaperAudioCaptureComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
REAPERUNREALBRIDGE_API UClass* Z_Construct_UClass_UReaperAudioCaptureComponent();
REAPERUNREALBRIDGE_API UClass* Z_Construct_UClass_UReaperAudioCaptureComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ReaperUnrealBridge();
// End Cross Module References

// Begin Class UReaperAudioCaptureComponent Function CopySettingsFromExistingSound
struct Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics
{
	struct ReaperAudioCaptureComponent_eventCopySettingsFromExistingSound_Parms
	{
		UAudioComponent* SourceAudioComp;
		bool bPlaySound;
		bool bCopySoundClass;
		bool bCopyAttenuation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReaperUnrealBridge|Audio" },
		{ "CPP_Default_bCopyAttenuation", "true" },
		{ "CPP_Default_bCopySoundClass", "true" },
		{ "CPP_Default_bPlaySound", "false" },
		{ "DisplayName", "Copy Settings from Existing Sound" },
		{ "ModuleRelativePath", "ReaperAudioCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAudioComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAudioComp;
	static void NewProp_bPlaySound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaySound;
	static void NewProp_bCopySoundClass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopySoundClass;
	static void NewProp_bCopyAttenuation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyAttenuation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::NewProp_SourceAudioComp = { "SourceAudioComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperAudioCaptureComponent_eventCopySettingsFromExistingSound_Parms, SourceAudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAudioComp_MetaData), NewProp_SourceAudioComp_MetaData) };
void Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::NewProp_bPlaySound_SetBit(void* Obj)
{
	((ReaperAudioCaptureComponent_eventCopySettingsFromExistingSound_Parms*)Obj)->bPlaySound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::NewProp_bPlaySound = { "bPlaySound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReaperAudioCaptureComponent_eventCopySettingsFromExistingSound_Parms), &Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::NewProp_bPlaySound_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::NewProp_bCopySoundClass_SetBit(void* Obj)
{
	((ReaperAudioCaptureComponent_eventCopySettingsFromExistingSound_Parms*)Obj)->bCopySoundClass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::NewProp_bCopySoundClass = { "bCopySoundClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReaperAudioCaptureComponent_eventCopySettingsFromExistingSound_Parms), &Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::NewProp_bCopySoundClass_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::NewProp_bCopyAttenuation_SetBit(void* Obj)
{
	((ReaperAudioCaptureComponent_eventCopySettingsFromExistingSound_Parms*)Obj)->bCopyAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::NewProp_bCopyAttenuation = { "bCopyAttenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReaperAudioCaptureComponent_eventCopySettingsFromExistingSound_Parms), &Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::NewProp_bCopyAttenuation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::NewProp_SourceAudioComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::NewProp_bPlaySound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::NewProp_bCopySoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::NewProp_bCopyAttenuation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReaperAudioCaptureComponent, nullptr, "CopySettingsFromExistingSound", nullptr, nullptr, Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::ReaperAudioCaptureComponent_eventCopySettingsFromExistingSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::ReaperAudioCaptureComponent_eventCopySettingsFromExistingSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReaperAudioCaptureComponent::execCopySettingsFromExistingSound)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_SourceAudioComp);
	P_GET_UBOOL(Z_Param_bPlaySound);
	P_GET_UBOOL(Z_Param_bCopySoundClass);
	P_GET_UBOOL(Z_Param_bCopyAttenuation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopySettingsFromExistingSound(Z_Param_SourceAudioComp,Z_Param_bPlaySound,Z_Param_bCopySoundClass,Z_Param_bCopyAttenuation);
	P_NATIVE_END;
}
// End Class UReaperAudioCaptureComponent Function CopySettingsFromExistingSound

// Begin Class UReaperAudioCaptureComponent Function CopySettingsFromSoundAsset
struct Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromSoundAsset_Statics
{
	struct ReaperAudioCaptureComponent_eventCopySettingsFromSoundAsset_Parms
	{
		USoundBase* SoundAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReaperUnrealBridge|Audio" },
		{ "DisplayName", "Copy Settings from Sound Asset" },
		{ "ModuleRelativePath", "ReaperAudioCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromSoundAsset_Statics::NewProp_SoundAsset = { "SoundAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperAudioCaptureComponent_eventCopySettingsFromSoundAsset_Parms, SoundAsset), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromSoundAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromSoundAsset_Statics::NewProp_SoundAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromSoundAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromSoundAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReaperAudioCaptureComponent, nullptr, "CopySettingsFromSoundAsset", nullptr, nullptr, Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromSoundAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromSoundAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromSoundAsset_Statics::ReaperAudioCaptureComponent_eventCopySettingsFromSoundAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromSoundAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromSoundAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromSoundAsset_Statics::ReaperAudioCaptureComponent_eventCopySettingsFromSoundAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromSoundAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromSoundAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReaperAudioCaptureComponent::execCopySettingsFromSoundAsset)
{
	P_GET_OBJECT(USoundBase,Z_Param_SoundAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopySettingsFromSoundAsset(Z_Param_SoundAsset);
	P_NATIVE_END;
}
// End Class UReaperAudioCaptureComponent Function CopySettingsFromSoundAsset

// Begin Class UReaperAudioCaptureComponent Function DebugLogAudioSettings
struct Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings_Statics
{
	struct ReaperAudioCaptureComponent_eventDebugLogAudioSettings_Parms
	{
		bool bPrintToScreen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReaperUnrealBridge|Debug" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "DisplayName", "Debug Log Audio Settings" },
		{ "ModuleRelativePath", "ReaperAudioCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPrintToScreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
{
	((ReaperAudioCaptureComponent_eventDebugLogAudioSettings_Parms*)Obj)->bPrintToScreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReaperAudioCaptureComponent_eventDebugLogAudioSettings_Parms), &Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings_Statics::NewProp_bPrintToScreen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReaperAudioCaptureComponent, nullptr, "DebugLogAudioSettings", nullptr, nullptr, Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings_Statics::ReaperAudioCaptureComponent_eventDebugLogAudioSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings_Statics::ReaperAudioCaptureComponent_eventDebugLogAudioSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReaperAudioCaptureComponent::execDebugLogAudioSettings)
{
	P_GET_UBOOL(Z_Param_bPrintToScreen);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugLogAudioSettings(Z_Param_bPrintToScreen);
	P_NATIVE_END;
}
// End Class UReaperAudioCaptureComponent Function DebugLogAudioSettings

// Begin Class UReaperAudioCaptureComponent
void UReaperAudioCaptureComponent::StaticRegisterNativesUReaperAudioCaptureComponent()
{
	UClass* Class = UReaperAudioCaptureComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CopySettingsFromExistingSound", &UReaperAudioCaptureComponent::execCopySettingsFromExistingSound },
		{ "CopySettingsFromSoundAsset", &UReaperAudioCaptureComponent::execCopySettingsFromSoundAsset },
		{ "DebugLogAudioSettings", &UReaperAudioCaptureComponent::execDebugLogAudioSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReaperAudioCaptureComponent);
UClass* Z_Construct_UClass_UReaperAudioCaptureComponent_NoRegister()
{
	return UReaperAudioCaptureComponent::StaticClass();
}
struct Z_Construct_UClass_UReaperAudioCaptureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ReaperUnrealBridge" },
		{ "Comment", "/**\n * Lightweight orchestrator component for the ReaperUnrealBridge plugin.\n * Provides helper functions (Copy Settings, Debug Log) that operate on\n * a user-assigned AudioCapture target. Does NOT create or own an\n * AudioCaptureComponent \xe2\x80\x94 that lives in your Blueprint actor.\n *\n * Set AudioCaptureTarget in your Blueprint to point to your\n * AudioCaptureComponent (e.g. AudioCaptureInBP on BP_AudioFromReaper).\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ReaperAudioCaptureComponent.h" },
		{ "ModuleRelativePath", "ReaperAudioCaptureComponent.h" },
		{ "ToolTip", "Lightweight orchestrator component for the ReaperUnrealBridge plugin.\nProvides helper functions (Copy Settings, Debug Log) that operate on\na user-assigned AudioCapture target. Does NOT create or own an\nAudioCaptureComponent \xe2\x80\x94 that lives in your Blueprint actor.\n\nSet AudioCaptureTarget in your Blueprint to point to your\nAudioCaptureComponent (e.g. AudioCaptureInBP on BP_AudioFromReaper)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioCaptureTarget_MetaData[] = {
		{ "Category", "ReaperUnrealBridge" },
		{ "Comment", "/**\n\x09 * The AudioCaptureComponent to apply settings to.\n\x09 * Set this from Blueprint to your AudioCaptureInBP reference.\n\x09 */" },
		{ "DisplayName", "Audio Capture Target" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ReaperAudioCaptureComponent.h" },
		{ "ToolTip", "The AudioCaptureComponent to apply settings to.\nSet this from Blueprint to your AudioCaptureInBP reference." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioCaptureTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromExistingSound, "CopySettingsFromExistingSound" }, // 2968609199
		{ &Z_Construct_UFunction_UReaperAudioCaptureComponent_CopySettingsFromSoundAsset, "CopySettingsFromSoundAsset" }, // 1132409923
		{ &Z_Construct_UFunction_UReaperAudioCaptureComponent_DebugLogAudioSettings, "DebugLogAudioSettings" }, // 3662300787
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReaperAudioCaptureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReaperAudioCaptureComponent_Statics::NewProp_AudioCaptureTarget = { "AudioCaptureTarget", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReaperAudioCaptureComponent, AudioCaptureTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioCaptureTarget_MetaData), NewProp_AudioCaptureTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReaperAudioCaptureComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReaperAudioCaptureComponent_Statics::NewProp_AudioCaptureTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReaperAudioCaptureComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReaperAudioCaptureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ReaperUnrealBridge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReaperAudioCaptureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReaperAudioCaptureComponent_Statics::ClassParams = {
	&UReaperAudioCaptureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UReaperAudioCaptureComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UReaperAudioCaptureComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReaperAudioCaptureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UReaperAudioCaptureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReaperAudioCaptureComponent()
{
	if (!Z_Registration_Info_UClass_UReaperAudioCaptureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReaperAudioCaptureComponent.OuterSingleton, Z_Construct_UClass_UReaperAudioCaptureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReaperAudioCaptureComponent.OuterSingleton;
}
template<> REAPERUNREALBRIDGE_API UClass* StaticClass<UReaperAudioCaptureComponent>()
{
	return UReaperAudioCaptureComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReaperAudioCaptureComponent);
UReaperAudioCaptureComponent::~UReaperAudioCaptureComponent() {}
// End Class UReaperAudioCaptureComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioCaptureComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReaperAudioCaptureComponent, UReaperAudioCaptureComponent::StaticClass, TEXT("UReaperAudioCaptureComponent"), &Z_Registration_Info_UClass_UReaperAudioCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReaperAudioCaptureComponent), 804222039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioCaptureComponent_h_3146445815(TEXT("/Script/ReaperUnrealBridge"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioCaptureComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
