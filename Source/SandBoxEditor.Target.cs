// Copyright Hyojin Kang. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SandBoxEditorTarget : TargetRules
{
	public SandBoxEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "SandBoxEditor", "SandBox" } );
	}
}
