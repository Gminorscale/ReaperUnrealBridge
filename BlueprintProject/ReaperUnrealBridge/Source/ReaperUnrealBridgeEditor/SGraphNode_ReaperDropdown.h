#pragma once

#include "CoreMinimal.h"
#include "SGraphNode.h"
#include "K2Node_ReaperBase.h"
#include "Widgets/Views/SListView.h"

/**
 * Custom SGraphNode with a searchable dropdown for Reaper K2 nodes.
 * Features a search box that filters the row name list in real-time.
 */
class SGraphNode_ReaperDropdown : public SGraphNode
{
public:
	SLATE_BEGIN_ARGS(SGraphNode_ReaperDropdown) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, UK2Node_ReaperBase* InNode);

	virtual void CreateBelowPinControls(TSharedPtr<SVerticalBox> MainBox) override;

private:
	UK2Node_ReaperBase* ReaperNode = nullptr;

	/** All available options (unfiltered) */
	TArray<TSharedPtr<FString>> AllOptions;

	/** Filtered options shown in the list */
	TArray<TSharedPtr<FString>> FilteredOptions;

	/** Current search text */
	FString SearchText;

	/** The list view widget */
	TSharedPtr<SListView<TSharedPtr<FString>>> ListView;

	/** The combo button */
	TSharedPtr<SComboButton> ComboButton;

	void RefreshOptions();
	void OnSearchTextChanged(const FText& InText);
	void UpdateFilteredOptions();

	/** Called when user clicks a row in the list */
	void OnRowClicked(TSharedPtr<FString> InItem);

	/** Generate a row widget for the list view */
	TSharedRef<ITableRow> OnGenerateRow(TSharedPtr<FString> InItem, const TSharedRef<STableViewBase>& OwnerTable);

	/** Get the display text for the button */
	FText GetSelectedText() const;
};
