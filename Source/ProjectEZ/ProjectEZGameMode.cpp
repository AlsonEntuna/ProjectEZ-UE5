// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectEZGameMode.h"
#include "ProjectEZCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectEZGameMode::AProjectEZGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Characters/BP_Player_Main"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
