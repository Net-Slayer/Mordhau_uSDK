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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                      DefaultCoif;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TSoftClassPtr<UObject>> CoifWearables;
	
	UFUNCTION(BlueprintCallable, Category = "HeadWearableFns")
	int GetCoifWearablesNum();
	UFUNCTION(BlueprintCallable, Category = "HeadWearableFns")
	class UClass* GetCoifWearable(int Index);
};
