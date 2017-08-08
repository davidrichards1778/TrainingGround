// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TrainingGroundGameMode.h"
#include "TrainingGroundHUD.h"
#include "TrainingGroundCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATrainingGroundGameMode::ATrainingGroundGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATrainingGroundHUD::StaticClass();
}
