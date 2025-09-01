// Plugins/GameGenieBFL/Source/GameGenieBFLEditor/GameGenieBFLEditor.Build.cs
using UnrealBuildTool;

public class GameGenieBFLEditor : ModuleRules
{
    public GameGenieBFLEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "GameGenieBFLRuntime" // our runtime module
        });

        PrivateDependencyModuleNames.AddRange(new[]
        {
            "UnrealEd",
            "Kismet",
            "KismetCompiler",
            "BlueprintGraph",
            "GraphEditor",
            "Slate",
            "SlateCore",
        });
    }
}
