// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "EmoteMotion.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UEmoteMotion : public UMordhauMotion
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              Duration;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CanEmoteAfter;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CancelTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CancelBlendTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector2D                                   TurnCaps;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAnimMontage*                                TransitionInMontage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimMontage*                                Montage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAnimMontage*                                TransitionOutMontage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              StartMontageTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              StartTransitionOutMontageTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bForce3P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bHideLeftHand;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bHideRightHand;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bUnequipLeftHand;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bUnequipRightHand;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bDropLeftHand;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     LeftHandDropForce;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bDropRightHand;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     RightHandDropForce;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bWasIn1P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bHasStartedMainMontage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bHasStartedMainMontageTransitionOut;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class AMordhauEquipment>            HidLeft;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TWeakObjectPtr<class AMordhauEquipment>            HidRight;
	
	UFUNCTION(BlueprintCallable, Category = "EnvironmentMoveFn")
	void DoDrop(class AMordhauEquipment* Equipment, const struct FVector& Force);
};
