// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapCameraActor.generated.h"

UCLASS()
class MORDHAU_API AMapCameraActor : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                Team;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AtmosphericFogMultiplierOverride;
	
};
