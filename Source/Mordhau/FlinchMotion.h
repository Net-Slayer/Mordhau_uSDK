// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "FlinchMotion.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UFlinchMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bHasDoneFlinchEffect;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              FlinchDuration;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              ParryLockOutTime;
	
	
};
