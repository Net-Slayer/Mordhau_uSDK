// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "Mordhau.h"
#include "EquipmentSwitchMotion.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UEquipmentSwitchMotion : public UMordhauMotion
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bHasFinishedSwitch;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8                                   SwitchingToSlot;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class AMordhauEquipment>            SwitchingTo;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class AMordhauEquipment>            HiddenLeft;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class AMordhauEquipment>            HiddenRight;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAnimMontage*                                Montage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ReachEnd;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		ESwitchStage                                       Stage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              LocalVirtualReparentStart;
	
	UFUNCTION(BlueprintCallable, Category = "EquipSwitchFn")
	class AMordhauEquipment* GetSwitchingTo();
};
