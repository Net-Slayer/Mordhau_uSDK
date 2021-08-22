// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "RangedDrawMotion.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API URangedDrawMotion : public UMordhauMotion
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                      RandomValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    AimRotationOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    AimVisualRotationOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AMordhauEquipment*                           RangedEquipment;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                DrawMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                Draw1PMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                DrawEquipmentMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                DrawEquipment1PMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                CurrentMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                CurrentEquipmentMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent*                             CurrentlyPlayingDraw;
	

};
