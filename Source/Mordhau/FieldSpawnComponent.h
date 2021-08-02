// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FieldSpawnComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable)
class MORDHAU_API UFieldSpawnComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FieldSpawnCompBools")
		bool                                               bSnapLocationToGround;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FieldSpawnCompBools")
		bool                                               bSnapLocationToGroundDestroyIfNoGround;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FieldSpawnCompBools")
		bool                                               bSnapRotationToGroundNormal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FieldSpawnCompFloats")
		float                                              MaxAllowedRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FieldSpawnCompFloats")
		float                                              SnapGroundTraceOffsetZ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FieldSpawnCompFloats")
		float                                              SnapGroundRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FieldSpawnCompFloats")
		float                                              MaxDistanceSnapGround;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FieldSpawnCompBools")
		bool                                               bShouldCheckLineOfSight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FieldSpawnCompFloats")
		float                                              LineOfSightRadiusCheck;
};