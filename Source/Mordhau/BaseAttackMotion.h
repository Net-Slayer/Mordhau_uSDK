// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauMotion.h"
#include "BaseAttackMotion.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UBaseAttackMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bBlendInMultiplicative; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveFloat BlendIn; //(Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveCurveFloat BlendInCurve; //(Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveFloat SlowBlendIn; //(Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveFloat ParrySlowBlendIn; //(Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveFloat RiposteBlendInWithShield; //(Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<class UAnimSequence*, struct FPerspectiveAnimSequenceBaseArray> AnimationMap; //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator CueAmount; //(Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* CueCurve; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FHighMidLowSpineSpaceAdditive AngleAdditive; //(Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveHighMidLowSpineSpaceAdditive AngleAdditiveWindUp; //(Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* ReleaseCurve; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveFloat FeintAnimRate; //(Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveFloat FeintAnimDurationOffset; //(Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveFloat MinimumFeintAnimDuration; //(Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveCurveFloat WorldBounceCurve; //(Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveCurveFloat WorldBounceScaleCurve; //(Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveCurveFloat ParryBounceCurve; //(Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveCurveFloat ParryLateBounceCurve; //(Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveCurveFloat ParryBounceScaleCurve; //(Edit, BlueprintVisible)
};
