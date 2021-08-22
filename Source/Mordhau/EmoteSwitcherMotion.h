// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "EmoteSwitcherMotion.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UEmoteSwitcherMotion : public UMordhauMotion
{
	GENERATED_BODY()
	
	
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      SwitchToID;
};
