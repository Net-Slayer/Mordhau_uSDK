// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "Mordhau.h"
#include "EquipmentModeSwitchMotion.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UEquipmentModeSwitchMotion : public UMordhauMotion
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              Stage1Duration;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              Stage2Duration;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAnimMontage*                                Montage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class AMordhauEquipment*                           SwitchingEquipment;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     VirtualReparentLocation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FQuat                                       VirtualReparentRotation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bIsSwitchingToAlt;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EModeSwitchType                                    SwitchType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              FirstStageEnd;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              SecondStageEnd;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                     Stage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bHasFinishedSwitch;
	
	
};
