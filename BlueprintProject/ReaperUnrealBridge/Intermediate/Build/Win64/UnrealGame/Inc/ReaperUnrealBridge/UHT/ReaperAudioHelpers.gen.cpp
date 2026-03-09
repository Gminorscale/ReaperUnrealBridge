// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReaperUnrealBridge/ReaperAudioHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReaperAudioHelpers() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
REAPERUNREALBRIDGE_API UClass* Z_Construct_UClass_UReaperAudioHelpers();
REAPERUNREALBRIDGE_API UClass* Z_Construct_UClass_UReaperAudioHelpers_NoRegister();
UPackage* Z_Construct_UPackage__Script_ReaperUnrealBridge();
// End Cross Module References

// Begin Class UReaperAudioHelpers Function CopySettingsFromExistingSound
struct Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics
{
	struct ReaperAudioHelpers_eventCopySettingsFromExistingSound_Parms
	{
		USceneComponent* TargetComponent;
		UAudioComponent* SourceAudioComp;
		bool bPlaySound;
		bool bCopySoundClass;
		bool bCopyAttenuation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReaperUnrealBridge|Audio" },
		{ "Comment", "/**\n\x09 * Copy SoundClass and Attenuation from an existing sound onto a SynthComponent,\n\x09 * with optional playback of the source sound.\n\x09 *\n\x09 * @param TargetComponent   SynthComponent to apply settings to (e.g. AudioCapture)\n\x09 * @param SourceAudioComp   AudioComponent to copy settings from (and optionally play)\n\x09 * @param bPlaySound        If true, play the source sound after copying\n\x09 * @param bCopySoundClass   Whether to copy the SoundClass (default: true)\n\x09 * @param bCopyAttenuation  Whether to copy the Attenuation settings (default: true)\n\x09 */" },
		{ "CPP_Default_bCopyAttenuation", "true" },
		{ "CPP_Default_bCopySoundClass", "true" },
		{ "CPP_Default_bPlaySound", "false" },
		{ "DisplayName", "Copy Settings from Existing Sound" },
		{ "ModuleRelativePath", "ReaperAudioHelpers.h" },
		{ "ToolTip", "Copy SoundClass and Attenuation from an existing sound onto a SynthComponent,\nwith optional playback of the source sound.\n\n@param TargetComponent   SynthComponent to apply settings to (e.g. AudioCapture)\n@param SourceAudioComp   AudioComponent to copy settings from (and optionally play)\n@param bPlaySound        If true, play the source sound after copying\n@param bCopySoundClass   Whether to copy the SoundClass (default: true)\n@param bCopyAttenuation  Whether to copy the Attenuation settings (default: true)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAudioComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperAudioHelpers_eventCopySettingsFromExistingSound_Parms, TargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetComponent_MetaData), NewProp_TargetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::NewProp_SourceAudioComp = { "SourceAudioComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperAudioHelpers_eventCopySettingsFromExistingSound_Parms, SourceAudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAudioComp_MetaData), NewProp_SourceAudioComp_MetaData) };
void Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::NewProp_bPlaySound_SetBit(void* Obj)
{
	((ReaperAudioHelpers_eventCopySettingsFromExistingSound_Parms*)Obj)->bPlaySound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::NewProp_bPlaySound = { "bPlaySound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReaperAudioHelpers_eventCopySettingsFromExistingSound_Parms), &Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::NewProp_bPlaySound_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::NewProp_bCopySoundClass_SetBit(void* Obj)
{
	((ReaperAudioHelpers_eventCopySettingsFromExistingSound_Parms*)Obj)->bCopySoundClass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::NewProp_bCopySoundClass = { "bCopySoundClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReaperAudioHelpers_eventCopySettingsFromExistingSound_Parms), &Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::NewProp_bCopySoundClass_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::NewProp_bCopyAttenuation_SetBit(void* Obj)
{
	((ReaperAudioHelpers_eventCopySettingsFromExistingSound_Parms*)Obj)->bCopyAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::NewProp_bCopyAttenuation = { "bCopyAttenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReaperAudioHelpers_eventCopySettingsFromExistingSound_Parms), &Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::NewProp_bCopyAttenuation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::NewProp_TargetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::NewProp_SourceAudioComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::NewProp_bPlaySound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::NewProp_bCopySoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::NewProp_bCopyAttenuation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReaperAudioHelpers, nullptr, "CopySettingsFromExistingSound", nullptr, nullptr, Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::ReaperAudioHelpers_eventCopySettingsFromExistingSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::ReaperAudioHelpers_eventCopySettingsFromExistingSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReaperAudioHelpers::execCopySettingsFromExistingSound)
{
	P_GET_OBJECT(USceneComponent,Z_Param_TargetComponent);
	P_GET_OBJECT(UAudioComponent,Z_Param_SourceAudioComp);
	P_GET_UBOOL(Z_Param_bPlaySound);
	P_GET_UBOOL(Z_Param_bCopySoundClass);
	P_GET_UBOOL(Z_Param_bCopyAttenuation);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReaperAudioHelpers::CopySettingsFromExistingSound(Z_Param_TargetComponent,Z_Param_SourceAudioComp,Z_Param_bPlaySound,Z_Param_bCopySoundClass,Z_Param_bCopyAttenuation);
	P_NATIVE_END;
}
// End Class UReaperAudioHelpers Function CopySettingsFromExistingSound

// Begin Class UReaperAudioHelpers Function CopySettingsFromSoundAsset
struct Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset_Statics
{
	struct ReaperAudioHelpers_eventCopySettingsFromSoundAsset_Parms
	{
		USceneComponent* TargetComponent;
		USoundBase* SoundAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReaperUnrealBridge|Audio" },
		{ "Comment", "/**\n\x09 * Copy SoundClass and Attenuation from a Sound asset onto a SynthComponent.\n\x09 * Use this when you have a USoundBase reference but no AudioComponent.\n\x09 * Works with SoundCue, SoundWave, MetaSound, etc.\n\x09 *\n\x09 * @param TargetComponent   SynthComponent to apply settings to\n\x09 * @param SoundAsset        The Sound asset to read SoundClass and Attenuation from\n\x09 */" },
		{ "DisplayName", "Copy Settings from Sound Asset" },
		{ "ModuleRelativePath", "ReaperAudioHelpers.h" },
		{ "ToolTip", "Copy SoundClass and Attenuation from a Sound asset onto a SynthComponent.\nUse this when you have a USoundBase reference but no AudioComponent.\nWorks with SoundCue, SoundWave, MetaSound, etc.\n\n@param TargetComponent   SynthComponent to apply settings to\n@param SoundAsset        The Sound asset to read SoundClass and Attenuation from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperAudioHelpers_eventCopySettingsFromSoundAsset_Parms, TargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetComponent_MetaData), NewProp_TargetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset_Statics::NewProp_SoundAsset = { "SoundAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperAudioHelpers_eventCopySettingsFromSoundAsset_Parms, SoundAsset), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset_Statics::NewProp_TargetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset_Statics::NewProp_SoundAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReaperAudioHelpers, nullptr, "CopySettingsFromSoundAsset", nullptr, nullptr, Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset_Statics::ReaperAudioHelpers_eventCopySettingsFromSoundAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset_Statics::ReaperAudioHelpers_eventCopySettingsFromSoundAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReaperAudioHelpers::execCopySettingsFromSoundAsset)
{
	P_GET_OBJECT(USceneComponent,Z_Param_TargetComponent);
	P_GET_OBJECT(USoundBase,Z_Param_SoundAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReaperAudioHelpers::CopySettingsFromSoundAsset(Z_Param_TargetComponent,Z_Param_SoundAsset);
	P_NATIVE_END;
}
// End Class UReaperAudioHelpers Function CopySettingsFromSoundAsset

// Begin Class UReaperAudioHelpers Function DebugLogAudioSettings
struct Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics
{
	struct ReaperAudioHelpers_eventDebugLogAudioSettings_Parms
	{
		USceneComponent* TargetComponent;
		bool bPrintToScreen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReaperUnrealBridge|Debug" },
		{ "Comment", "/**\n\x09 * Print the current SoundClass, Attenuation, and spatialization state\n\x09 * of a SynthComponent to the Output Log and optionally to screen.\n\x09 */" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "DisplayName", "Debug Log Audio Settings" },
		{ "ModuleRelativePath", "ReaperAudioHelpers.h" },
		{ "ToolTip", "Print the current SoundClass, Attenuation, and spatialization state\nof a SynthComponent to the Output Log and optionally to screen." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
	static void NewProp_bPrintToScreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperAudioHelpers_eventDebugLogAudioSettings_Parms, TargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetComponent_MetaData), NewProp_TargetComponent_MetaData) };
void Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
{
	((ReaperAudioHelpers_eventDebugLogAudioSettings_Parms*)Obj)->bPrintToScreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReaperAudioHelpers_eventDebugLogAudioSettings_Parms), &Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics::NewProp_TargetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics::NewProp_bPrintToScreen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReaperAudioHelpers, nullptr, "DebugLogAudioSettings", nullptr, nullptr, Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics::ReaperAudioHelpers_eventDebugLogAudioSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics::ReaperAudioHelpers_eventDebugLogAudioSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReaperAudioHelpers::execDebugLogAudioSettings)
{
	P_GET_OBJECT(USceneComponent,Z_Param_TargetComponent);
	P_GET_UBOOL(Z_Param_bPrintToScreen);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReaperAudioHelpers::DebugLogAudioSettings(Z_Param_TargetComponent,Z_Param_bPrintToScreen);
	P_NATIVE_END;
}
// End Class UReaperAudioHelpers Function DebugLogAudioSettings

// Begin Class UReaperAudioHelpers Function GetEffectiveSoundClass
struct Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass_Statics
{
	struct ReaperAudioHelpers_eventGetEffectiveSoundClass_Parms
	{
		UAudioComponent* AudioComp;
		USoundClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReaperUnrealBridge|Audio" },
		{ "Comment", "/**\n\x09 * Get the effective SoundClass from a UAudioComponent.\n\x09 * Returns the SoundClassOverride if set, otherwise the SoundClass from the Sound asset.\n\x09 */" },
		{ "DisplayName", "Get Effective Sound Class" },
		{ "ModuleRelativePath", "ReaperAudioHelpers.h" },
		{ "ToolTip", "Get the effective SoundClass from a UAudioComponent.\nReturns the SoundClassOverride if set, otherwise the SoundClass from the Sound asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass_Statics::NewProp_AudioComp = { "AudioComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperAudioHelpers_eventGetEffectiveSoundClass_Parms, AudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComp_MetaData), NewProp_AudioComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperAudioHelpers_eventGetEffectiveSoundClass_Parms, ReturnValue), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass_Statics::NewProp_AudioComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReaperAudioHelpers, nullptr, "GetEffectiveSoundClass", nullptr, nullptr, Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass_Statics::ReaperAudioHelpers_eventGetEffectiveSoundClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass_Statics::ReaperAudioHelpers_eventGetEffectiveSoundClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReaperAudioHelpers::execGetEffectiveSoundClass)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_AudioComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundClass**)Z_Param__Result=UReaperAudioHelpers::GetEffectiveSoundClass(Z_Param_AudioComp);
	P_NATIVE_END;
}
// End Class UReaperAudioHelpers Function GetEffectiveSoundClass

// Begin Class UReaperAudioHelpers Function SetAttenuationOnSynthComponent
struct Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent_Statics
{
	struct ReaperAudioHelpers_eventSetAttenuationOnSynthComponent_Parms
	{
		USceneComponent* TargetComponent;
		USoundAttenuation* Attenuation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReaperUnrealBridge|Audio" },
		{ "Comment", "/**\n\x09 * Set the Attenuation Settings on a SynthComponent at runtime.\n\x09 */" },
		{ "DisplayName", "Set Attenuation on Synth Component" },
		{ "ModuleRelativePath", "ReaperAudioHelpers.h" },
		{ "ToolTip", "Set the Attenuation Settings on a SynthComponent at runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attenuation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperAudioHelpers_eventSetAttenuationOnSynthComponent_Parms, TargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetComponent_MetaData), NewProp_TargetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperAudioHelpers_eventSetAttenuationOnSynthComponent_Parms, Attenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent_Statics::NewProp_TargetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent_Statics::NewProp_Attenuation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReaperAudioHelpers, nullptr, "SetAttenuationOnSynthComponent", nullptr, nullptr, Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent_Statics::ReaperAudioHelpers_eventSetAttenuationOnSynthComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent_Statics::ReaperAudioHelpers_eventSetAttenuationOnSynthComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReaperAudioHelpers::execSetAttenuationOnSynthComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_TargetComponent);
	P_GET_OBJECT(USoundAttenuation,Z_Param_Attenuation);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReaperAudioHelpers::SetAttenuationOnSynthComponent(Z_Param_TargetComponent,Z_Param_Attenuation);
	P_NATIVE_END;
}
// End Class UReaperAudioHelpers Function SetAttenuationOnSynthComponent

// Begin Class UReaperAudioHelpers Function SetSoundClassOnSynthComponent
struct Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent_Statics
{
	struct ReaperAudioHelpers_eventSetSoundClassOnSynthComponent_Parms
	{
		USceneComponent* TargetComponent;
		USoundClass* SoundClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReaperUnrealBridge|Audio" },
		{ "Comment", "/**\n\x09 * Set the SoundClass on a SynthComponent at runtime.\n\x09 */" },
		{ "DisplayName", "Set Sound Class on Synth Component" },
		{ "ModuleRelativePath", "ReaperAudioHelpers.h" },
		{ "ToolTip", "Set the SoundClass on a SynthComponent at runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperAudioHelpers_eventSetSoundClassOnSynthComponent_Parms, TargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetComponent_MetaData), NewProp_TargetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent_Statics::NewProp_SoundClass = { "SoundClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReaperAudioHelpers_eventSetSoundClassOnSynthComponent_Parms, SoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent_Statics::NewProp_TargetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent_Statics::NewProp_SoundClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReaperAudioHelpers, nullptr, "SetSoundClassOnSynthComponent", nullptr, nullptr, Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent_Statics::ReaperAudioHelpers_eventSetSoundClassOnSynthComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent_Statics::ReaperAudioHelpers_eventSetSoundClassOnSynthComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReaperAudioHelpers::execSetSoundClassOnSynthComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_TargetComponent);
	P_GET_OBJECT(USoundClass,Z_Param_SoundClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReaperAudioHelpers::SetSoundClassOnSynthComponent(Z_Param_TargetComponent,Z_Param_SoundClass);
	P_NATIVE_END;
}
// End Class UReaperAudioHelpers Function SetSoundClassOnSynthComponent

// Begin Class UReaperAudioHelpers
void UReaperAudioHelpers::StaticRegisterNativesUReaperAudioHelpers()
{
	UClass* Class = UReaperAudioHelpers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CopySettingsFromExistingSound", &UReaperAudioHelpers::execCopySettingsFromExistingSound },
		{ "CopySettingsFromSoundAsset", &UReaperAudioHelpers::execCopySettingsFromSoundAsset },
		{ "DebugLogAudioSettings", &UReaperAudioHelpers::execDebugLogAudioSettings },
		{ "GetEffectiveSoundClass", &UReaperAudioHelpers::execGetEffectiveSoundClass },
		{ "SetAttenuationOnSynthComponent", &UReaperAudioHelpers::execSetAttenuationOnSynthComponent },
		{ "SetSoundClassOnSynthComponent", &UReaperAudioHelpers::execSetSoundClassOnSynthComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReaperAudioHelpers);
UClass* Z_Construct_UClass_UReaperAudioHelpers_NoRegister()
{
	return UReaperAudioHelpers::StaticClass();
}
struct Z_Construct_UClass_UReaperAudioHelpers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint function library for Reaper audio helpers.\n * Provides runtime access to SoundClass and Attenuation on SynthComponent,\n * and a \"Copy Settings from Existing Sound\" flow with optional playback.\n *\n * The same copy function is also available on UReaperAudioCaptureComponent\n * (target = self, no Target pin).\n */" },
		{ "IncludePath", "ReaperAudioHelpers.h" },
		{ "ModuleRelativePath", "ReaperAudioHelpers.h" },
		{ "ToolTip", "Blueprint function library for Reaper audio helpers.\nProvides runtime access to SoundClass and Attenuation on SynthComponent,\nand a \"Copy Settings from Existing Sound\" flow with optional playback.\n\nThe same copy function is also available on UReaperAudioCaptureComponent\n(target = self, no Target pin)." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromExistingSound, "CopySettingsFromExistingSound" }, // 3800035325
		{ &Z_Construct_UFunction_UReaperAudioHelpers_CopySettingsFromSoundAsset, "CopySettingsFromSoundAsset" }, // 190574412
		{ &Z_Construct_UFunction_UReaperAudioHelpers_DebugLogAudioSettings, "DebugLogAudioSettings" }, // 1455439839
		{ &Z_Construct_UFunction_UReaperAudioHelpers_GetEffectiveSoundClass, "GetEffectiveSoundClass" }, // 2758962007
		{ &Z_Construct_UFunction_UReaperAudioHelpers_SetAttenuationOnSynthComponent, "SetAttenuationOnSynthComponent" }, // 1303677557
		{ &Z_Construct_UFunction_UReaperAudioHelpers_SetSoundClassOnSynthComponent, "SetSoundClassOnSynthComponent" }, // 1377718596
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReaperAudioHelpers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReaperAudioHelpers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ReaperUnrealBridge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReaperAudioHelpers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReaperAudioHelpers_Statics::ClassParams = {
	&UReaperAudioHelpers::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReaperAudioHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_UReaperAudioHelpers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReaperAudioHelpers()
{
	if (!Z_Registration_Info_UClass_UReaperAudioHelpers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReaperAudioHelpers.OuterSingleton, Z_Construct_UClass_UReaperAudioHelpers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReaperAudioHelpers.OuterSingleton;
}
template<> REAPERUNREALBRIDGE_API UClass* StaticClass<UReaperAudioHelpers>()
{
	return UReaperAudioHelpers::StaticClass();
}
UReaperAudioHelpers::UReaperAudioHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReaperAudioHelpers);
UReaperAudioHelpers::~UReaperAudioHelpers() {}
// End Class UReaperAudioHelpers

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioHelpers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReaperAudioHelpers, UReaperAudioHelpers::StaticClass, TEXT("UReaperAudioHelpers"), &Z_Registration_Info_UClass_UReaperAudioHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReaperAudioHelpers), 353100871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioHelpers_h_1782179384(TEXT("/Script/ReaperUnrealBridge"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioHelpers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
