// Copyright Epic Games, Inc. All Rights Reserved.

#include "Survival_CraftGameMode.h"
#include "Survival_CraftCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASurvival_CraftGameMode::ASurvival_CraftGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
