// Copyright Epic Games, Inc. All Rights Reserved.

#include "GASCrouzieETHANGameMode.h"
#include "GASCrouzieETHANCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGASCrouzieETHANGameMode::AGASCrouzieETHANGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
