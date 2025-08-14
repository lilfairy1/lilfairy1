using UnrealBuildTool;

public class AshRoads : ModuleRules
{
	public AshRoads(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput",
			"AIModule", "NavigationSystem", "GameplayTasks",
			"UMG", "Slate", "SlateCore", "Niagara",
			"ChaosVehicles", "PhysicsCore"
		});

		PrivateDependencyModuleNames.AddRange(new string[] {});

		PublicIncludePaths.AddRange(new string[] { "AshRoads/Public" });
		PrivateIncludePaths.AddRange(new string[] { "AshRoads/Private" });
	}
}