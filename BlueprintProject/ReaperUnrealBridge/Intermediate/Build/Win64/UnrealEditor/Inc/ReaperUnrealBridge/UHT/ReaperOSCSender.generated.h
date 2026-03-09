// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReaperOSCSender.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REAPERUNREALBRIDGE_ReaperOSCSender_generated_h
#error "ReaperOSCSender.generated.h already included, missing '#pragma once' in ReaperOSCSender.h"
#endif
#define REAPERUNREALBRIDGE_ReaperOSCSender_generated_h

#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperOSCSender_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execQuickSendMessage);


#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperOSCSender_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReaperOSCSender(); \
	friend struct Z_Construct_UClass_UReaperOSCSender_Statics; \
public: \
	DECLARE_CLASS(UReaperOSCSender, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReaperUnrealBridge"), NO_API) \
	DECLARE_SERIALIZER(UReaperOSCSender)


#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperOSCSender_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReaperOSCSender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReaperOSCSender(UReaperOSCSender&&); \
	UReaperOSCSender(const UReaperOSCSender&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReaperOSCSender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReaperOSCSender); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReaperOSCSender) \
	NO_API virtual ~UReaperOSCSender();


#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperOSCSender_h_12_PROLOG
#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperOSCSender_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperOSCSender_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperOSCSender_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperOSCSender_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REAPERUNREALBRIDGE_API UClass* StaticClass<class UReaperOSCSender>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperOSCSender_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
