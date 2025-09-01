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
            "AIModule" // for some nav helpers; light dependency
        });

        PrivateDependencyModuleNames.AddRange(new[]
        {
            "SlateCore"
        });
    }
}
