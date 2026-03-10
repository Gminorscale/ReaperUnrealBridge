#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ReaperUnrealBridgeDataTableHelpers.generated.h"

/**
 * Generic helper class for DataTable operations with Blueprint dropdown support.
 */
UCLASS()
class REAPERUNREALBRIDGE_API UReaperUnrealBridgeDataTableHelpers : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Get ActionID data from a DataTableRowHandle.
	 * Specifically designed for the ReaperActions_DataTable.
	 */
	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|ReaperActions", meta = (RowType = "STRUCT_ActionIDs"))
	static bool GetReaperActionData(
		UPARAM(meta = (RowType = "STRUCT_ActionIDs")) const FDataTableRowHandle& ActionRowHandle,
		FString& OutCommandID,
		FString& OutActionName,
		FString& OutCategory,
		FString& OutSection
	);

	/**
	 * Internal function used by the K2 node. Not visible in Blueprint menus.
	 * Looks up a Reaper action by DataTable + RowName and returns all fields + OSC address.
	 */
	UFUNCTION(BlueprintPure, Category = "ReaperUnrealBridge|Internal", meta = (BlueprintInternalUseOnly = "true"))
	static bool Internal_GetReaperActionByName(
		UDataTable* DataTable,
		FName RowName,
		FString& OutCommandID,
		FString& OutActionName,
		FString& OutCategory,
		FString& OutSection,
		FString& OutOSCAddress
	);
};
