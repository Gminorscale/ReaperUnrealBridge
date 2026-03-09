#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/Engine.h"
#include "ReaperUnrealBridgeDataTableHelpers.generated.h"

/**
 * Generic helper class for DataTable operations with Blueprint dropdown support.
 * This class provides static functions that can be called from Blueprint nodes
 * with searchable dropdowns for DataTableRowHandle inputs.
 */
UCLASS()
class REAPERUNREALBRIDGE_API UReaperUnrealBridgeDataTableHelpers : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Generic function to get a DataTable row by handle.
	 * This function can be used with any DataTable struct type.
	 * 
	 * @param RowHandle The DataTableRowHandle to look up
	 * @param OutRow The output struct row (wildcard type, will be resolved by Blueprint)
	 * @return True if the row was found, false otherwise
	 */
	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|DataTable", CustomThunk, meta = (CustomStructureParam = "OutRow"))
	static bool GetDataTableRowByHandle(const FDataTableRowHandle& RowHandle, int32& OutRow);

	// Thunk implementation for the generic function
	DECLARE_FUNCTION(execGetDataTableRowByHandle);

	/**
	 * Get ActionID data from a DataTableRowHandle.
	 * Specifically designed for the ReaperActions_DataTable.
	 * 
	 * @param ActionRowHandle The DataTableRowHandle pointing to an action row
	 * @param OutCommandID The command ID string (e.g., "40044")
	 * @param OutActionName The action name
	 * @param OutCategory The category of the action
	 * @param OutSection The section the action belongs to
	 * @return True if the row was found and data was retrieved
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
	 * Get OSC address from ActionID.
	 * Builds the OSC command string in the format /action/{CommandID}
	 * 
	 * @param ActionRowHandle The DataTableRowHandle pointing to an action row
	 * @param OutOSCAddress The resulting OSC address (e.g., "/action/40044")
	 * @return True if the row was found and address was built
	 */
	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|ReaperActions", meta = (RowType = "STRUCT_ActionIDs"))
	static bool GetOSCAddressFromActionID(
		UPARAM(meta = (RowType = "STRUCT_ActionIDs")) const FDataTableRowHandle& ActionRowHandle,
		FString& OutOSCAddress
	);

	/**
	 * Get OSC list data from a DataTableRowHandle.
	 * Specifically designed for the DT_Reaper_OSCList DataTable.
	 * 
	 * @param OSCRowHandle The DataTableRowHandle pointing to an OSC command row
	 * @param OutOSCAddress The OSC address pattern
	 * @param OutArgumentType The argument type description
	 * @param OutCategory The category of the OSC command
	 * @param OutExample An example of the OSC address
	 * @return True if the row was found and data was retrieved
	 */
	UFUNCTION(BlueprintCallable, Category = "ReaperUnrealBridge|OSCList", meta = (RowType = "STRUCT_ReaperOSCList"))
	static bool GetOSCListData(
		UPARAM(meta = (RowType = "STRUCT_ReaperOSCList")) const FDataTableRowHandle& OSCRowHandle,
		FString& OutOSCAddress,
		FString& OutArgumentType,
		FString& OutCategory,
		FString& OutExample
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

	/**
	 * Internal function used by the K2 node. Not visible in Blueprint menus.
	 * Looks up an OSC command by DataTable + RowName and returns all fields.
	 */
	UFUNCTION(BlueprintPure, Category = "ReaperUnrealBridge|Internal", meta = (BlueprintInternalUseOnly = "true"))
	static bool Internal_GetOSCCommandByName(
		UDataTable* DataTable,
		FName RowName,
		FString& OutOSCAddress,
		FString& OutArgumentType,
		FString& OutCategory,
		FString& OutExample
	);
};
