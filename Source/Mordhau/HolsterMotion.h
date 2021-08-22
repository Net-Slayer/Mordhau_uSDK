// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "HolsterMotion.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UHolsterMotion : public UMordhauMotion
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                     Mode;
	
	
};
