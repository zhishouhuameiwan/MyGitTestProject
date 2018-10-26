// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MyGitTestProjectGameMode.h"
#include "MyGitTestProjectHUD.h"
#include "MyGitTestProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyGitTestProjectGameMode::AMyGitTestProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyGitTestProjectHUD::StaticClass();
}
