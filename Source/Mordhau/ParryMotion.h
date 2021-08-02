// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "Mordhau.h"
#include "ParryMotion.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UParryMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)

	TMap<class UMordhauMotion*, float>                 BlockedAttacks;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HeldBlockMemoryDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              TimedBlockMemoryDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              EasyParryDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                EasyParryStaminaCost;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HeldRiposteWindowExtra;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              NonHeldParryExtensionAndRiposteWindowExtra;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMovementRestriction                               SuccessfulParryRecoveryMovementRestriction;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMovementRestriction                               FailedParryRecoveryMovementRestriction;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMeleeWeaponAnimationProfile*                MWAP;
UPROPERTY(EditAnywhere, BlueprintReadWrite)

	float                                              RiposteWindowBase;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ParryFailPlayRate;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ParryFailFadeOut;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ParryFailPlayRate1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ParryFailFadeOut1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HeldParryFailPlayRate;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HeldParryFailFadeOut;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HeldParryFailPlayRate1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HeldParryFailFadeOut1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MinimumHeldParryTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ParryRecoveryTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HeldParryRecoveryTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ParrySuccessRecoveryTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HeldParrySuccessRecoveryTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ParryUpTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                BlockStaminaRecover;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                     TotalBlocks;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsBlockHoldable;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EParryStage                                        Stage;
UPROPERTY(EditAnywhere, BlueprintReadWrite)

	float                                              ParryEnd;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RiposteWindowStart;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                Montage;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauWeapon>               WeaponPtr;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasQueuedMove;
UPROPERTY(EditAnywhere, BlueprintReadWrite)

	float                                              QueuedMoveTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              QueuedAngle;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackMove                                        QueuedMove;

	
	
	
};
