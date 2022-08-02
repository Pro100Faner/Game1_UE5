// Copyright Epic Games, Inc. All Rights Reserved.

#include "Game1_UE5GameMode.h"
#include "Game1_UE5Character.h"
#include "UObject/ConstructorHelpers.h"

AGame1_UE5GameMode::AGame1_UE5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
