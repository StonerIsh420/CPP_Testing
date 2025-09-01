// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/GameGenieBFLRuntime.Build.cs
using UnrealBuildTool;

public class GameGenieBFLRuntime : ModuleRules
{
    public GameGenieBFLRuntime(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "DeveloperSettings",
            "NavigationSystem",
            "PhysicsCore",
            "AIModule",
            "GameplayTags"
        });

        PrivateDependencyModuleNames.AddRange(new[]
        {
            "SlateCore",
            "Json",
            "JsonUtilities"
        });

        // Optional: flip to 1 and add "EnhancedInput" to PrivateDependencyModuleNames to enable the input binder
        PublicDefinitions.Add("GG_WITH_ENHANCED_INPUT=0");
        // PrivateDependencyModuleNames.Add("EnhancedInput"); // enable alongside define above if you want
    }
}
