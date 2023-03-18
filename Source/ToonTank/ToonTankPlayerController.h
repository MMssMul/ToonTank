// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ToonTankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANK_API AToonTankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	void SetPlayerEnableState(bool bPlayerEnabled);
	
};
