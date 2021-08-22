// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "AttackMotion.h"
#include "StabMotion.generated.h"

/**
 * 
 */

// Class Mordhau.StabMotion
UCLASS()
class MORDHAU_API UStabMotion : public UAttackMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator   AnimAngleCueAmount;   //(Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat*   AnimAngleCurve; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};