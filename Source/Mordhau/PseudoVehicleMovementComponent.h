// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AdvancedCharacterMovement.h"
#include "PseudoVehicleMovementComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UPseudoVehicleMovementComponent : public UAdvancedCharacterMovement
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class UPrimitiveComponent*>                 SecondaryStepCapableComponents;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              TurningVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 TurningBrakeAccelerationByVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 TurningFactorByVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 TurningAccelerationByVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              TurningFactorScaleAirborne;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class UPrimitiveComponent*> SecondaryComponents;
	
};
