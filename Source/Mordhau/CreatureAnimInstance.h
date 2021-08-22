// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AdvancedCharacterAnimInstance.h"
#include "CreatureAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UCreatureAnimInstance : public UAdvancedCharacterAnimInstance
{
	GENERATED_BODY()
	
	
public:
	//TArray<struct FFootGroundingLimb>                  GroundingLimbs;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bComputeGroundingRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FootstepEffectsMaxCameraDist;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FootstepLODDistance;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   FootstepVolumeVelocityRangeIn;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   FootstepVolumeVelocityRangeOut;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   FootstepPitchVelocityRangeIn;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   FootstepPitchVelocityRangeOut;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FootstepVolumeModifierSelf;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FootstepVolumeModifierAlly;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FootstepSoundZOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     FootstepDecalSize;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialInterface*>                  FootstepDecals;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleSystem*>                     FootstepParticles;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LandOffsetBlendInTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LandOffsetBlendInSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LandOffsetBlendOutSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     LandOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bDoNotAddLandOffsetToGrounding;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 LandOffsetFactorByAirTime;

	
};

