// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "DropEquipmentMotion.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UDropEquipmentMotion : public UMordhauMotion
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Booleans")
	bool                                               bIsDroppingRightHand;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClassRefs")
	class AMordhauEquipment*                           DroppingEquipment;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anims")
	class UAnimMontage*                                Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              DropTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Booleans")
	bool                                               bHasDropped;
	
};
