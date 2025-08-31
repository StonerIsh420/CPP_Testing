// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GameGenieBFL : ModuleRules
{
	public GameGenieBFL(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"GameGenieBFL",
			"GameGenieBFL/Variant_Horror",
			"GameGenieBFL/Variant_Horror/UI",
			"GameGenieBFL/Variant_Shooter",
			"GameGenieBFL/Variant_Shooter/AI",
			"GameGenieBFL/Variant_Shooter/UI",
			"GameGenieBFL/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
