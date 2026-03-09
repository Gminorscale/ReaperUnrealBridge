// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReaperUnrealBridgeDataTableHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
struct FDataTableRowHandle;
#ifdef REAPERUNREALBRIDGE_ReaperUnrealBridgeDataTableHelpers_generated_h
#error "ReaperUnrealBridgeDataTableHelpers.generated.h already included, missing '#pragma once' in ReaperUnrealBridgeDataTableHelpers.h"
#endif
#define REAPERUNREALBRIDGE_ReaperUnrealBridgeDataTableHelpers_generated_h

#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperUnrealBridgeDataTableHelpers_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInternal_GetOSCCommandByName); \
	DECLARE_FUNCTION(execInternal_GetReaperActionByName); \
	DECLARE_FUNCTION(execGetOSCListData); \
	DECLARE_FUNCTION(execGetOSCAddressFromActionID); \
	DECLARE_FUNCTION(execGetReaperActionData);


#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperUnrealBridgeDataTableHelpers_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReaperUnrealBridgeDataTableHelpers(); \
	friend struct Z_Construct_UClass_UReaperUnrealBridgeDataTableHelpers_Statics; \
public: \
	DECLARE_CLASS(UReaperUnrealBridgeDataTableHelpers, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReaperUnrealBridge"), NO_API) \
	DECLARE_SERIALIZER(UReaperUnrealBridgeDataTableHelpers)


#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperUnrealBridgeDataTableHelpers_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReaperUnrealBridgeDataTableHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReaperUnrealBridgeDataTableHelpers(UReaperUnrealBridgeDataTableHelpers&&); \
	UReaperUnrealBridgeDataTableHelpers(const UReaperUnrealBridgeDataTableHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReaperUnrealBridgeDataTableHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReaperUnrealBridgeDataTableHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReaperUnrealBridgeDataTableHelpers) \
	NO_API virtual ~UReaperUnrealBridgeDataTableHelpers();


#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperUnrealBridgeDataTableHelpers_h_13_PROLOG
#define FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperUnrealBridgeDataTableHelpers_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperUnrealBridgeDataTableHelpers_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperUnrealBridgeDataTableHelpers_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperUnrealBridgeDataTableHelpers_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REAPERUNREALBRIDGE_API UClass* StaticClass<class UReaperUnrealBridgeDataTableHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ReaperUnrealBridge_Source_ReaperUnrealBridge_ReaperUnrealBridgeDataTableHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
