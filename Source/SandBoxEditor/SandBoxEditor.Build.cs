// Copyright Hyojin Kang. All Rights Reserved.

using UnrealBuildTool;

public class SandBoxEditor : ModuleRules
{
	public SandBoxEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PrivateIncludePaths.AddRange(new string[]
		{
			"SandBoxEditor"
		});
		
		PrivateDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"Slate", 
			"SlateCore", 
			"SandBox" 
		});
	}
}
