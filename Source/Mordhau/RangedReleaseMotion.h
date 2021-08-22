// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "RangedReleaseMotion.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API URangedReleaseMotion : public UMordhauMotion
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauEquipment>            RangedEquipment;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UClass*                                      RangedEquipmentClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauProjectile>           CreatedLocalProjectile;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                CurrentMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                CurrentEquipmentMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                ReleaseMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                Release1PMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                ReleaseEquipmentMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                ReleaseEquipment1PMontage;
	

};
