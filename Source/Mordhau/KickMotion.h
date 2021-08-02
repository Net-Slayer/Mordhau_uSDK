#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "AttackMotion.h"
#include "KickMotion.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UKickMotion : public UAttackMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float KickDamageModifierTier3Legs;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float JumpKickStaminaDrain; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float JumpKickExtraWindup;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EMovementRestriction JumpKickAirMovementRestriction;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxAirborneTimeForJumpKickAnim;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bIsAirKick;  //(BlueprintVisible, ZeroConstructor, IsPlainOldData)


};