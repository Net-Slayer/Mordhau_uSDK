// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauWearable.h"
#include "UpperChestWearable.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UUpperChestWearable : public UMordhauWearable
{
	GENERATED_BODY()
	
	
public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     SpineBouncyLimits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     BreastBouncyLimits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     BellyBouncyLimitsFat;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     BellyBouncyLimitsSlim;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      DefaultLowerChest;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      DefaultArms;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      DefaultShoulders;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TSoftClassPtr<UObject>> LowerChestWearables;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TSoftClassPtr<UObject>> ArmsWearables;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TSoftClassPtr<UObject>> ShouldersWearables;

	UFUNCTION(BlueprintCallable, Category = "UpperChestWearableFns")
		int GetShouldersWearablesNum();
	UFUNCTION(BlueprintCallable, Category = "UpperChestWearableFns")
	class UClass* GetShouldersWearable(int Index);
	UFUNCTION(BlueprintCallable, Category = "UpperChestWearableFns")
	int GetLowerChestWearablesNum();
	UFUNCTION(BlueprintCallable, Category = "UpperChestWearableFns")
	class UClass* GetLowerChestWearable(int Index);
	UFUNCTION(BlueprintCallable, Category = "UpperChestWearableFns")
	int GetArmsWearablesNum();
	UFUNCTION(BlueprintCallable, Category = "UpperChestWearableFns")
	class UClass* GetArmsWearable(int Index);


















	
};
