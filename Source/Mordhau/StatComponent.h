// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Components/ActorComponent.h"
#include "StatComponent.generated.h"

/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UStatComponent : public UActorComponent {

	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                InitialStatValue;                                         // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                MinStatValue;                                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                MaxStatValue;                                             // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bIsRegenerable;                                           // 0x0104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RegenerationStoppedDelay;                                 // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                RegenerationPerTick;                                      // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RegenerationTickRate;                                     // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	UFUNCTION(BlueprintCallable)
		void TickStat(float DeltaTime);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		int GetStatValue();
};