// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauVehicle.h"
#include "Mordhau1DVehicle.generated.h"

/**
 *
 */
UCLASS()
class MORDHAU_API AMordhau1DVehicle : public AMordhauVehicle
{
	GENERATED_BODY()


public:

	AMordhau1DVehicle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Mordhau1DVehicleEvent")
		void OnStepChanged();
};
