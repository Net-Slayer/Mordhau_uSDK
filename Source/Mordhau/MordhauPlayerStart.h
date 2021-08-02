// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "MordhauPlayerStart.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API AMordhauPlayerStart : public APlayerStart
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Team = 5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsSpawnDisabled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                Token;
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "PlayerStartEvents")
	bool IsAllowedSpawnFor(class AController* Player);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "PlayerStartEvents")
	float GetSpawnPreferenceFor(class AController* Player);
};
