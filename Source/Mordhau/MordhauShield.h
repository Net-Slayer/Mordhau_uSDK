// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauWeapon.h"
#include "MordhauShield.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API AMordhauShield : public AMordhauWeapon
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mordhau Shield")
		float                                              PassiveBlockDamageModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mordhau Shield")
		bool                                              bCanBlockMeleePassively;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mordhau Shield")
		bool                                              bAllowShieldWall;
	
	
};
