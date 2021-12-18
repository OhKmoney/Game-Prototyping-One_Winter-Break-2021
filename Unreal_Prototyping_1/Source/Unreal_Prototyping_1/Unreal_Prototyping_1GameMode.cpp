// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal_Prototyping_1GameMode.h"
#include "Unreal_Prototyping_1Character.h"
#include "UObject/ConstructorHelpers.h"

AUnreal_Prototyping_1GameMode::AUnreal_Prototyping_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
