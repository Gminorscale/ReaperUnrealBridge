// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReaperAudioCaptureComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;
class USoundBase;
#ifdef REAPERUNREALBRIDGE_ReaperAudioCaptureComponent_generated_h
#error "ReaperAudioCaptureComponent.generated.h already included, missing '#pragma once' in ReaperAudioCaptureComponent.h"
#endif
#define REAPERUNREALBRIDGE_ReaperAudioCaptureComponent_generated_h

#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioCaptureComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDebugLogAudioSettings); \
	DECLARE_FUNCTION(execCopySettingsFromSoundAsset); \
	DECLARE_FUNCTION(execCopySettingsFromExistingSound);


#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioCaptureComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReaperAudioCaptureComponent(); \
	friend struct Z_Construct_UClass_UReaperAudioCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UReaperAudioCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReaperUnrealBridge"), NO_API) \
	DECLARE_SERIALIZER(UReaperAudioCaptureComponent)


#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioCaptureComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReaperAudioCaptureComponent(UReaperAudioCaptureComponent&&); \
	UReaperAudioCaptureComponent(const UReaperAudioCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReaperAudioCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReaperAudioCaptureComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReaperAudioCaptureComponent) \
	NO_API virtual ~UReaperAudioCaptureComponent();


#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioCaptureComponent_h_19_PROLOG
#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioCaptureComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioCaptureComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioCaptureComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioCaptureComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REAPERUNREALBRIDGE_API UClass* StaticClass<class UReaperAudioCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperAudioCaptureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
