// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "DisarmedMotion.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UDisarmedMotion : public UMordhauMotion
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              RecoveryTime;
	
	
};
