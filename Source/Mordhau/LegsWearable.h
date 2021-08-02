// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauWearable.h"
#include "LegsWearable.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API ULegsWearable : public UMordhauWearable
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     LegsBouncyLimits;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                     DefaultFeet;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TSoftClassPtr<UObject>> FeetWearables;



	UFUNCTION(BlueprintCallable, Category = "LegsWearableFns")
	int GetFeetWearablesNum();
	UFUNCTION(BlueprintCallable, Category = "LegsWearableFns")
	class UClass* GetFeetWearable(int Index);
};
