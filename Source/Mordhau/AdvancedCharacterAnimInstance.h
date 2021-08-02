// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AdvancedCharacterAnimInstance.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UAdvancedCharacterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bWantsGrounding;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     RootTranslationOffsetInternal;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     RootTranslationOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    RootRotationOffsetInternal;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    RootRotationOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     RootRotationPivot;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              TranslationInterpSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RotationInterpSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RootRotationOffsetFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LimbRotationOffsetFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   RootLiftLimits;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              GroundingWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     AccumulatedLocationLag;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    AccumulatedTurnLag;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsAirborne;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LastLand;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LastJump;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AirborneTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bJumped;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bAirborneFromJump;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsDead;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              DeathDirection;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       AdditiveOverrideType;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AdditiveOverrideWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AdditiveOverrideNoneTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AdditiveOverrideTypeNormalizedTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchDirection;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchIsHead;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AltFlinchDirection;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AltFlinchIsHead;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LastDeltaSeconds;

};
