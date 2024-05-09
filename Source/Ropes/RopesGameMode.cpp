// Copyright Epic Games, Inc. All Rights Reserved.

#include "RopesGameMode.h"
#include "RopesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARopesGameMode::ARopesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
