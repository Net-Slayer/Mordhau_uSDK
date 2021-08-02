// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "PommelThrowDrawMotion.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UPommelThrowDrawMotion : public UMordhauMotion
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AMordhauEquipment*                           RangedEquipment;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                 Stage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FirstStageEnd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SecondStageEnd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ThirdStageEnd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasFiredLocally;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsPlaying1P;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                CurrentMontage;
	
};
