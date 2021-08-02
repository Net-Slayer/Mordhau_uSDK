// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Engine.h"
#include "StatComponent.h"
#include "StaminaStatComponent.generated.h"

/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UStaminaStatComponent : public UStatComponent
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bPlaysOutOfBreathSound;                                   // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                BreathingSoundPlayBelowStamina;                           // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              BreathingSoundMaxDistance;                                // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class UAudioComponent>              LastBreath;                                               // 0x0124(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	UFUNCTION(BlueprintCallable)
		void OnCharacterDied(class AAdvancedCharacter* Character);
};
