// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Engine.h"
#include "StatComponent.h"
#include "HealthStatComponent.generated.h"

/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UHealthStatComponent : public UStatComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bPlaysHeartbeatSound;                                     // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class USoundCue*                                   HeartbeatSound;                                           // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                HeartbeatSoundPlayBelowHealth;                            // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class UAudioComponent>              LastHeartbeat;                                            // 0x012C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	UFUNCTION(BlueprintCallable)
		void OnCharacterDied(class AAdvancedCharacter* Character);
};