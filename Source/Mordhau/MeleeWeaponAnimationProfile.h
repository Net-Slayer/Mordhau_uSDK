// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "UObject/NoExportTypes.h"
#include "MeleeWeaponAnimationProfile.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UMeleeWeaponAnimationProfile : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TMap<EAttackMove, class UClass*> Attacks;  //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	struct FAnglingSpineSpaceAdditive   ParryAngleAdditive;   //(Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimMontage*  ParryAnimation; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimMontage*  ParryAnimation1P;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimMontage*  AltParryAnimation; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimMontage*  AltParryAnimation1P;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UBlendSpaceBase*  ParryAdditive;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UBlendSpaceBase*  ParryPushAdditive; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UBlendSpaceBase*  ParryPushAdditive3P;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UBlendSpaceBase*  AltParryPushAdditive; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UBlendSpaceBase*  AltParryPushAdditive3P;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimSequence* RightStabBounce;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimSequence* LeftStabBounce; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimSequence* RightStabBounce1P; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimSequence* LeftStabBounce1P;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimSequence* RightStrikeBounce; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimSequence* LeftStrikeBounce;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimSequence* RightStrikeBounce1P;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimSequence* LeftStrikeBounce1P;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)


	

	
};
