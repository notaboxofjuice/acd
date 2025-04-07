// Copyright Epic Games, Inc. All Rights Reserved.

#include "acdGameMode.h"
#include "acdCharacter.h"
#include "UObject/ConstructorHelpers.h"

AacdGameMode::AacdGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
