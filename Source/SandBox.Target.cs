// Copyright Hyojin Kang. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SandBoxTarget : TargetRules
{
	public SandBoxTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "SandBox" } );
	}
}
