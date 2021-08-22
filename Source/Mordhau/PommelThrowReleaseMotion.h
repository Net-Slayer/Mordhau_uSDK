// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "PommelThrowReleaseMotion.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UPommelThrowReleaseMotion : public UMordhauMotion
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AMordhauEquipment*                           RangedEquipment;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauProjectile>           CreatedLocalProjectile;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                    Stage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FirstStageEnd;
	
};
