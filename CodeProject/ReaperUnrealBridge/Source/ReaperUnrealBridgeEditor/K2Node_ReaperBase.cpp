#include "K2Node_ReaperBase.h"
#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "Engine/DataTable.h"

#define LOCTEXT_NAMESPACE "K2Node_ReaperBase"

FText UK2Node_ReaperBase::GetTooltipText() const
{
	return GetNodeTitle(ENodeTitleType::FullTitle);
}

void UK2Node_ReaperBase::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	UClass* ActionKey = GetClass();
	if (ActionRegistrar.IsOpenForRegistration(ActionKey))
	{
		UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
		check(NodeSpawner);
		ActionRegistrar.AddBlueprintAction(ActionKey, NodeSpawner);
	}
}

void UK2Node_ReaperBase::PreloadRequiredAssets()
{
	GetDataTable();
	Super::PreloadRequiredAssets();
}

TArray<TSharedPtr<FString>> UK2Node_ReaperBase::GetRowNameOptions() const
{
	TArray<TSharedPtr<FString>> Options;

	UDataTable* DT = GetDataTable();
	if (DT)
	{
		TArray<FName> RowNames = DT->GetRowNames();
		Options.Reserve(RowNames.Num());
		for (const FName& Name : RowNames)
		{
			Options.Add(MakeShareable(new FString(Name.ToString())));
		}
	}

	return Options;
}

UDataTable* UK2Node_ReaperBase::LoadDataTableByPath(const FString& Path) const
{
	return Cast<UDataTable>(
		FSoftObjectPath(Path).TryLoad()
	);
}

#undef LOCTEXT_NAMESPACE
