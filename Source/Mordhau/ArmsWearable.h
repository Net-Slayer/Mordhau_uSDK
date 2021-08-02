// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauWearable.h"
#include "ArmsWearable.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UArmsWearable : public UMordhauWearable
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     ArmsBouncyLimits;  
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                     DefaultHands;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TSoftClassPtr<UObject>> HandsWearables;

	UFUNCTION(BlueprintCallable, Category = "ArmsWearableFns")
	int GetHandsWearablesNum();
	UFUNCTION(BlueprintCallable, Category = "ArmsWearableFns")
	class UClass* GetHandsWearable(int Index);
	
};
