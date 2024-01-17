// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Survival_Craft : ModuleRules
{
	public Survival_Craft(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
