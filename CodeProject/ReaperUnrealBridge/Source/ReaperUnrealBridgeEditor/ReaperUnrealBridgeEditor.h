#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FReaperUnrealBridgeEditorModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	TSharedPtr<struct FGraphPanelNodeFactory> NodeFactory;
};
