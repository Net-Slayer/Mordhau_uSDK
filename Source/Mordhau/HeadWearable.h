// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauWearable.h"
#include "HeadWearable.generated.h"

/**
 *
 */
UCLASS()
class MORDHAU_API UHeadWearable : public UMordhauWearable
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
		uint8 DefaultCoif; //(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TSoftClassPtr<UObject>> CoifWearables;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
		float HelmetAOOffset; //(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
		float HelmetAOPower; //(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
		float HelmetAOIntensity; //(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
		float HelmetAOEyeIntensity; //(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	UFUNCTION(BlueprintCallable, Category = "HeadWearableFns")
		int GetCoifWearablesNum();
	UFUNCTION(BlueprintCallable, Category = "HeadWearableFns")
		class UClass* GetCoifWearable(int Index);
	UFUNCTION(BlueprintCallable, Category = "HeadWearableFns")
	void AddCoifWearable();

};
