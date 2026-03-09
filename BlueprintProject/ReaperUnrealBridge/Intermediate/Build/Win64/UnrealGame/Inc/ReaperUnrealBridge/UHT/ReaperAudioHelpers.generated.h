// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReaperAudioHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;
class USceneComponent;
class USoundAttenuation;
class USoundBase;
class USoundClass;
#ifdef REAPERUNREALBRIDGE_ReaperAudioHelpers_generated_h
#error "ReaperAudioHelpers.generated.h already included, missing '#pragma once' in ReaperAudioHelpers.h"
#endif
#define REAPERUNREALBRIDGE_ReaperAudioHelpers_generated_h

#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioHelpers_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDebugLogAudioSettings); \
	DECLARE_FUNCTION(execGetEffectiveSoundClass); \
	DECLARE_FUNCTION(execSetAttenuationOnSynthComponent); \
	DECLARE_FUNCTION(execSetSoundClassOnSynthComponent); \
	DECLARE_FUNCTION(execCopySettingsFromSoundAsset); \
	DECLARE_FUNCTION(execCopySettingsFromExistingSound);


#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioHelpers_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReaperAudioHelpers(); \
	friend struct Z_Construct_UClass_UReaperAudioHelpers_Statics; \
public: \
	DECLARE_CLASS(UReaperAudioHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReaperUnrealBridge"), NO_API) \
	DECLARE_SERIALIZER(UReaperAudioHelpers)


#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioHelpers_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReaperAudioHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReaperAudioHelpers(UReaperAudioHelpers&&); \
	UReaperAudioHelpers(const UReaperAudioHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReaperAudioHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReaperAudioHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReaperAudioHelpers) \
	NO_API virtual ~UReaperAudioHelpers();


#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioHelpers_h_22_PROLOG
#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioHelpers_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioHelpers_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioHelpers_h_25_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioHelpers_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REAPERUNREALBRIDGE_API UClass* StaticClass<class UReaperAudioHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
