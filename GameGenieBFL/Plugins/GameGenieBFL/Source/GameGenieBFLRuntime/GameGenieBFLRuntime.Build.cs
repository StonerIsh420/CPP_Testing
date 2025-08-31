// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/GameGenieBFLRuntime.Build.cs
using UnrealBuildTool;

public class GameGenieBFLRuntime : ModuleRules
{
    public GameGenieBFLRuntime(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "DeveloperSettings"
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "Engine",
            "NavigationSystem"
        });
    }
}
