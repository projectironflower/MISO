// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "misoGameMode.h"
#include "misoHUD.h"
#include "misoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmisoGameMode::AmisoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Human/FirstPersonCPP/Blueprints/FirstPersonCharacter.FirstPersonCharacter_C"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AmisoHUD::StaticClass();
}
