#include "ReaperUnrealBridgeEditor.h"
#include "K2Node_GetReaperAction.h"
#include "K2Node_GetOSCCommand.h"
#include "SGraphNode_ReaperDropdown.h"
#include "EdGraphUtilities.h"

class FReaperNodeFactory : public FGraphPanelNodeFactory
{
public:
	virtual TSharedPtr<SGraphNode> CreateNode(UEdGraphNode* InNode) const override
	{
		if (UK2Node_GetReaperAction* ReaperNode = Cast<UK2Node_GetReaperAction>(InNode))
		{
			return SNew(SGraphNode_ReaperDropdown, ReaperNode);
		}
		if (UK2Node_GetOSCCommand* OSCNode = Cast<UK2Node_GetOSCCommand>(InNode))
		{
			return SNew(SGraphNode_ReaperDropdown, OSCNode);
		}
		return nullptr;
	}
};

void FReaperUnrealBridgeEditorModule::StartupModule()
{
	NodeFactory = MakeShareable(new FReaperNodeFactory());
	FEdGraphUtilities::RegisterVisualNodeFactory(NodeFactory);
}

void FReaperUnrealBridgeEditorModule::ShutdownModule()
{
	if (NodeFactory.IsValid())
	{
		FEdGraphUtilities::UnregisterVisualNodeFactory(NodeFactory);
		NodeFactory.Reset();
	}
}

IMPLEMENT_MODULE(FReaperUnrealBridgeEditorModule, ReaperUnrealBridgeEditor)
