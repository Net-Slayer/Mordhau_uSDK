// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PseudoVehicleMovementComponent.h"
#include "Mordhau.h"
#include "HorseMovementComponent.generated.h"

/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UHorseMovementComponent : public UPseudoVehicleMovementComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              HeadOnCollisionMinSpeedToRear;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     SoftBubbleEllipseRelativeLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SoftBubbleEllipseLength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SoftBubbleEllipseRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SoftBubbleMaxHeight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              FrontAndRearCapsuleHalfHeight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              FrontAndRearCapsuleRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     FrontCapsuleRelativeLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     RearCapsuleRelativeLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              AvoidanceTurningAcceleration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EHorseGear                                         Gear;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FHorseGearInfo>                      GearInfo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EHorseGear                                         DesiredGear;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SpeedMultiplierOnBump;
};
