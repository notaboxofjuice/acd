// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class acd : ModuleRules
{
	public acd(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
