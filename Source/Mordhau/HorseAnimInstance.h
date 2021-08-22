// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CreatureAnimInstance.h"
#include "HorseAnimInstance.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UHorseAnimInstance : public UCreatureAnimInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USoundCue*                                   SoundTrot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USoundCue*                                   SoundCanterFront;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USoundCue*                                   SoundCanterBack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USoundCue*                                   SoundGallopLeft;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USoundCue*                                   SoundGallopRight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              FastFootstepParticlesMinVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class UParticleSystem*>                     FastFootstepParticles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector2D                                   BackLimits;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector2D                                   FrontLimits;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              RootOffsetTranslationToRotationFactor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     BackOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     LeftBackLegOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     RightBackLegOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     FrontOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     LeftFrontLegOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     RightFrontLegOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsRearing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              BounceDuckLimit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              StopTiltFactorLeftRight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              StopTiltFactorForward;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              StopTiltFactorBack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              StopBounceLimit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              BounceInterpSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              HeadStopTiltFactorLeftRight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              HeadStopTiltFactorForward;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              HeadStopTiltFactorBack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              HeadStopBounceLimit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              HeadBounceInterpSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              FastVelocityLagTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SlowVelocityLagTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FRotator                                    StopBounce;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FRotator                                    StopBounceWorld;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FRotator                                    HeadStopBounce;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FRotator                                    HeadStopBounceWorld;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     BounceDuck;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     FastVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     SlowVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     FastVelocityChangeVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     SlowVelocityChangeVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FRotator                                    PreviousMeshRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              FrontBackLegsDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              FeetShuffleWeight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              FeetShuffleAnimRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              HorseVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              AnimatedHorseVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              StopSmoothSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MovementAnimRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              HorseDirection;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              LeanFactor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SmoothedDirectionSmoothTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SmoothedDirectionSmoothTimeNoMovement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FRotator                                    FrontHorseRotator;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FRotator                                    BackHorseRotator;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FRotator                                    HorseLeanRotator;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     HorseLeanOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FRotator                                    HorseHeadRotator;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HasDriverFloat;
	

	
};
