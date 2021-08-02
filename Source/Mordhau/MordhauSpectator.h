// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "MordhauSpectator.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API AMordhauSpectator : public ASpectatorPawn
{
	GENERATED_BODY()
public:
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BlockInputAfterDeathTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bAutomaticallyAsksForSpawn;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCanOnlyViewOwnTeam;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CreatedTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LastSentCameraUpdate;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MouseSmoothedTurnValue;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MouseSmoothingTurnVelocity;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MouseSmoothedLookUpValue;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MouseSmoothingLookUpVelocity;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsFirstTick;

UFUNCTION(BlueprintCallable, Category = "MordhauSpectatorFns")
void TertiarySpectatorAction();
UFUNCTION(BlueprintCallable, Category = "MordhauSpectatorFns")
void SwitchToFreeCam();
UFUNCTION(BlueprintCallable, Category = "MordhauSpectatorFns")
void SecondarySpectatorAction();
UFUNCTION(BlueprintCallable, Category = "MordhauSpectatorFns")
void PrimarySpectatorAction();
UFUNCTION(BlueprintCallable, Category = "MordhauSpectatorFns")
bool IsWatchingOwnDeath();
	
};
