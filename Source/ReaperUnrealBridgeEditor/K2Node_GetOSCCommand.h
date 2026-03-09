#pragma once

#include "CoreMinimal.h"
#include "K2Node_ReaperBase.h"
#include "K2Node_GetOSCCommand.generated.h"

/**
 * Custom Blueprint node: Get OSC Command
 * 
 * Shows a dropdown of all rows in DT_Reaper_OSCList.
 * Outputs: OSCAddress, ArgumentType, Category, Example, and Success bool.
 * 
 * Use this to select an OSC command pattern from the Reaper OSC database.
 */
UCLASS()
class UK2Node_GetOSCCommand : public UK2Node_ReaperBase
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
	static const FName PN_OSCAddress;
	static const FName PN_ArgumentType;
	static const FName PN_Category;
	static const FName PN_Example;
};
