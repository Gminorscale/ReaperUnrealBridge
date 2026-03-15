using UnrealBuildTool;
using System.IO;

public class ReaperUnrealBridgeEditor : ModuleRules
{
	public ReaperUnrealBridgeEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(
			new string[]
			{
				// Parent Source directory so UHT-generated "ReaperUnrealBridgeEditor/Header.h" includes resolve.
				// Do NOT add "../ReaperUnrealBridge" here — "ReaperUnrealBridge" is a string prefix of
				// "ReaperUnrealBridgeEditor", which confuses UHT's relative-path computation and produces
				// truncated includes like "ditor/K2Node_GetOSCCommand.h". The runtime module's headers
				// are already accessible via the module dependency (ReaperUnrealBridge in PublicDependencyModuleNames).
				Path.Combine(ModuleDirectory, "..")
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"ReaperUnrealBridge"
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Slate",
				"SlateCore",
				"InputCore",
				"UnrealEd",
				"BlueprintGraph",
				"KismetCompiler",
				"GraphEditor"
			}
		);
	}
}
