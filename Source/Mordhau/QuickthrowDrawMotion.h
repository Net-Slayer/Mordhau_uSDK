// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "QuickthrowDrawMotion.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UQuickthrowDrawMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AMordhauEquipment*                           RangedEquipment;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                      Slot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                      Stage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FirstStageEnd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SecondStageEnd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ThirdStageEnd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasFiredLocally;

	
	
};
