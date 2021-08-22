// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "FeintedMotion.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UFeintedMotion : public UMordhauMotion
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              SpineSpaceAdditiveBlendOutTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              QueueWindow;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CouchFeintLockout;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector2D                                   StrikeAndStabLockoutIn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector2D                                   StrikeAndStabLockoutOut;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EFeintType                                         Type;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EAttackMove                                        FromMove;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bHasQueuedMove;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EAttackMove                                        QueuedMove;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              QueuedAngle;
	

	
};
