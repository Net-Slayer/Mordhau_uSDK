// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "RagdollFallingMotion.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API URagdollFallingMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsGettingUp;
	
	
};
