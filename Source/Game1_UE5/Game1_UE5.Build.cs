// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Game1_UE5 : ModuleRules
{
	public Game1_UE5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
