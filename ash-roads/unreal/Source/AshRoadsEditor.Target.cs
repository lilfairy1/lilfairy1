using UnrealBuildTool;
using System.Collections.Generic;

public class AshRoadsEditorTarget : TargetRules
{
	public AshRoadsEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_3;
		ExtraModuleNames.Add("AshRoads");
	}
}