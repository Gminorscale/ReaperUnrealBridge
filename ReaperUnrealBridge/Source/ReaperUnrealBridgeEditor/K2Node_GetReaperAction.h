#pragma once

#include "CoreMinimal.h"
#include "K2Node_ReaperBase.h"
#include "K2Node_GetReaperAction.generated.h"

/**
 * Custom Blueprint node: Get Reaper Action
 * 
 * Shows a searchable dropdown of all rows in ReaperActions_DataTable.
 * Outputs only the CommandID string.
 * 
 * Use this to select a Reaper action and get its command ID for OSC.
 */
UCLASS()
class UK2Node_GetReaperAction : public UK2Node_ReaperBase
{
	GENERATED_BODY()

public:
	//~ UEdGraphNode interface
	virtual void AllocateDefaultPins() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;

	//~ UK2Node interface
	virtual FText GetMenuCategory() const override;
	virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;

	//~ UK2Node_ReaperBase interface
	virtual UDataTable* GetDataTable() const override;
	virtual FString GetDataTablePath() const override;

	// Pin name constants
	static const FName PN_CommandID;
};
