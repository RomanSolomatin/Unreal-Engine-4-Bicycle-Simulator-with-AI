// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class BikeV3Target : TargetRules
{
	public BikeV3Target(TargetInfo Target) : base (Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.Add("BikeV3");
	}
}
