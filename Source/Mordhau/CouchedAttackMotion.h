// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "Mordhau.h"
#include "CouchedAttackMotion.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UCouchedAttackMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anims")
	class UAnimMontage*                                WindUpMontage;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClassRefs")
	class AMordhauWeapon*                              Weapon;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              CouchingBlendFrom;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bytes")
	uint8                                      CouchStage;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              CouchStart;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              MaxCouchTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              RecoveryDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Booleans")
	bool                                               bIsInRecovery;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StructRefs")
	struct FAttackInfo                                 AttackInfo;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              OriginalSecondaryTurnLimit;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClassRefs")
	TWeakObjectPtr<class AHorse>                       HorsePtr;

	
	
	
};
