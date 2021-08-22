// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "StunMotion.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UStunMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              StunGracePeriodExtraTime;                                 // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              StunDuration;
	
	
	
};
