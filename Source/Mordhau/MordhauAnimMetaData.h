// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "MordhauAnimMetaData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UMordhauAnimMetaData : public UAnimMetaData
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              OverrideIdleChangeBlendTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bDisablesSpineBending;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ForceCinematicCameraWeight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bDisablesOffhandIK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bForcesOffhandIK;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bOverridesOffhandIKChangeSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              OffhandIKChangeSpeedOverride;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MaxOffhandIKDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MinOffhandIKDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bDisablesSpineArmsCompensation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ParamA;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ParamB;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ParamC;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ParamD;
	

	
};
