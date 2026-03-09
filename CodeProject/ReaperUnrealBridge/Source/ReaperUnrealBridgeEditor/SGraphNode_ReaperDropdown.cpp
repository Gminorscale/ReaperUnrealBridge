#include "SGraphNode_ReaperDropdown.h"
#include "K2Node_ReaperBase.h"
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Views/SListView.h"
#include "Widgets/Input/SComboButton.h"

#define LOCTEXT_NAMESPACE "SGraphNode_ReaperDropdown"

void SGraphNode_ReaperDropdown::Construct(const FArguments& InArgs, UK2Node_ReaperBase* InNode)
{
	ReaperNode = InNode;
	GraphNode = InNode;
	SetCursor(EMouseCursor::CardinalCross);
	UpdateGraphNode();
}

void SGraphNode_ReaperDropdown::CreateBelowPinControls(TSharedPtr<SVerticalBox> MainBox)
{
	RefreshOptions();

	MainBox->AddSlot()
	.AutoHeight()
	.Padding(10.0f, 4.0f, 10.0f, 6.0f)
	[
		SNew(SBox)
		.MinDesiredWidth(200.0f)
		[
			SAssignNew(ComboButton, SComboButton)
			.ButtonContent()
			[
				SNew(STextBlock)
				.Text(this, &SGraphNode_ReaperDropdown::GetSelectedText)
				.Font(FCoreStyle::GetDefaultFontStyle("Regular", 9))
			]
			.MenuContent()
			[
				SNew(SBox)
				.WidthOverride(300.0f)
				.HeightOverride(300.0f)
				[
					SNew(SVerticalBox)

					// Search box
					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(4.0f)
					[
						SNew(SSearchBox)
						.OnTextChanged(this, &SGraphNode_ReaperDropdown::OnSearchTextChanged)
					]

					// Filtered list
					+ SVerticalBox::Slot()
					.FillHeight(1.0f)
					[
						SAssignNew(ListView, SListView<TSharedPtr<FString>>)
						.ListItemsSource(&FilteredOptions)
						.OnGenerateRow(this, &SGraphNode_ReaperDropdown::OnGenerateRow)
						.SelectionMode(ESelectionMode::Single)
					]
				]
			]
		]
	];
}

void SGraphNode_ReaperDropdown::RefreshOptions()
{
	AllOptions = ReaperNode->GetRowNameOptions();
	UpdateFilteredOptions();
}

void SGraphNode_ReaperDropdown::OnSearchTextChanged(const FText& InText)
{
	SearchText = InText.ToString();
	UpdateFilteredOptions();
}

void SGraphNode_ReaperDropdown::UpdateFilteredOptions()
{
	FilteredOptions.Empty();

	if (SearchText.IsEmpty())
	{
		FilteredOptions = AllOptions;
	}
	else
	{
		for (const TSharedPtr<FString>& Option : AllOptions)
		{
			if (Option->Contains(SearchText, ESearchCase::IgnoreCase))
			{
				FilteredOptions.Add(Option);
			}
		}
	}

	if (ListView.IsValid())
	{
		ListView->RequestListRefresh();
	}
}

TSharedRef<ITableRow> SGraphNode_ReaperDropdown::OnGenerateRow(
	TSharedPtr<FString> InItem,
	const TSharedRef<STableViewBase>& OwnerTable)
{
	return SNew(STableRow<TSharedPtr<FString>>, OwnerTable)
	[
		SNew(SBox)
		.Padding(FMargin(4.0f, 2.0f))
		[
			SNew(STextBlock)
			.Text(FText::FromString(*InItem))
			.Font(FCoreStyle::GetDefaultFontStyle("Regular", 9))
			.OnDoubleClicked_Lambda([this, InItem](const FGeometry&, const FPointerEvent&) -> FReply
			{
				OnRowClicked(InItem);
				return FReply::Handled();
			})
		]
	];
}

void SGraphNode_ReaperDropdown::OnRowClicked(TSharedPtr<FString> InItem)
{
	if (InItem.IsValid() && ReaperNode)
	{
		ReaperNode->Modify();
		ReaperNode->SelectedRowName = FName(**InItem);

		// Close the combo menu
		if (ComboButton.IsValid())
		{
			ComboButton->SetIsOpen(false);
		}

		// Refresh node title
		UpdateGraphNode();
	}
}

FText SGraphNode_ReaperDropdown::GetSelectedText() const
{
	if (ReaperNode && !ReaperNode->SelectedRowName.IsNone())
	{
		return FText::FromName(ReaperNode->SelectedRowName);
	}
	return LOCTEXT("SelectAction", "Select...");
}

#undef LOCTEXT_NAMESPACE
