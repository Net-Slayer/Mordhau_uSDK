// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "ReloadMotion.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UReloadMotion : public UMordhauMotion
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauEquipment>            RangedEquipment;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                CurrentMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                CurrentEquipmentMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                ReloadMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                Reload1PMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                ReloadEquipmentMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                Reload1PEquipmentMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent>              CurrentReloadSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ReachTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ReloadTime;
	
	
};
