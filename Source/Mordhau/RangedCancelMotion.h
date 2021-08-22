// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "RangedCancelMotion.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API URangedCancelMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AMordhauEquipment*                           RangedEquipment;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent*                             CurrentlyPlayingRangedCancel;
	
	
	
};
