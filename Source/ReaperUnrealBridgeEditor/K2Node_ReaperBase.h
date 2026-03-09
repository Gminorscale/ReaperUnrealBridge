#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "K2Node_ReaperBase.generated.h"

class UDataTable;

/**
 * Base class for Reaper DataTable lookup K2 nodes.
 * Provides common functionality: DataTable loading, row name dropdown, menu registration.
 */
UCLASS(Abstract)
class UK2Node_ReaperBase : public UK2Node
{
	GENERATED_BODY()

public:
	/** The currently selected row name (serialized with the node) */
	UPROPERTY()
	FName SelectedRowName;

	//~ UEdGraphNode interface
	virtual FText GetTooltipText() const override;
	virtual bool IsNodePure() const override { return true; }

	//~ UK2Node interface
	virtual bool IsNodeSafeToIgnore() const override { return true; }
	virtual void GetMenuActions(class FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual void PreloadRequiredAssets() override;
	virtual bool ShouldShowNodeProperties() const override { return true; }

	/** Get the DataTable this node reads from. Override in subclasses. */
	virtual UDataTable* GetDataTable() const PURE_VIRTUAL(UK2Node_ReaperBase::GetDataTable, return nullptr;);

	/** Get content path for the DataTable asset. Override in subclasses. */
	virtual FString GetDataTablePath() const PURE_VIRTUAL(UK2Node_ReaperBase::GetDataTablePath, return FString(););

	/** Get available row names for the dropdown */
	TArray<TSharedPtr<FString>> GetRowNameOptions() const;

protected:
	/** Helper to load a DataTable by content path */
	UDataTable* LoadDataTableByPath(const FString& Path) const;
};
