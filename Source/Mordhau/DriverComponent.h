// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Components/ActorComponent.h"
#include "DriverComponent.generated.h"

/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UDriverComponent : public UActorComponent
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable)
		void OnLateTick(float DeltaTime);
};

