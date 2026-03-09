using UnrealBuildTool;
using System.IO;

public class ReaperUnrealBridge : ModuleRules
{
	public ReaperUnrealBridge(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		// Parent Source directory so UHT-generated "ReaperUnrealBridge/Header.h" includes resolve
		PublicIncludePaths.AddRange(
			new string[] {
				Path.Combine(ModuleDirectory, "..")
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"AudioMixer",
				"Sockets",
				"Networking"
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Slate",
				"SlateCore"
			}
		);
	}
}
