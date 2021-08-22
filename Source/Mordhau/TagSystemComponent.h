// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mordhau.h"
#include "Components/ActorComponent.h"
#include "TagSystemComponent.generated.h"


/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UTagSystemComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FGameplayTagContainer OwnTags;                                                  // 0x00F0(0x0020)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FGameplayTagContainer Tags;                                                     // 0x0110(0x0020) (BlueprintVisible, BlueprintReadOnly, Transient)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UTagSystemComponent*>                 ParentTagSystemComponents;                                // 0x0130(0x0010) (ExportObject, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UTagSystemComponent*>                 ChildrenTagSystemComponents;                              // 0x0140(0x0010) (ExportObject, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FGameplayTagConditionDelegate>       ConditionDelegates;                                       // 0x0150(0x0010) (ZeroConstructor)


	UFUNCTION(BlueprintCallable)
	void SetTags(const struct FGameplayTagContainer& TagContainer);
	UFUNCTION(BlueprintCallable)
	void RemoveTags(const struct FGameplayTagContainer& TagContainer);
	UFUNCTION(BlueprintCallable)
	void RemoveTag(const struct FGameplayTag& Tag);
	UFUNCTION(BlueprintCallable)
	void RegisterTagConditionDelegate(const struct FGameplayTagCondition& Condition, class UObject* Object, const FName& Function);
	UFUNCTION(BlueprintCallable)
	void FlashTags(const struct FGameplayTagContainer& TagContainer);
	UFUNCTION(BlueprintCallable)
	void FlashTag(const struct FGameplayTag& Tag);
	UFUNCTION(BlueprintCallable)
	void AddTags(const struct FGameplayTagContainer& TagContainer);
	UFUNCTION(BlueprintCallable)
	void AddTag(const struct FGameplayTag& Tag);
	UFUNCTION(BlueprintCallable)
	void AddAndRemoveTags(const struct FGameplayTagContainer& TagsToAdd, const struct FGameplayTagContainer& TagsToRemove);
	UFUNCTION(BlueprintCallable)
	void AddAndRemoveTag(const struct FGameplayTag& TagToAdd, const struct FGameplayTag& TagToRemove);
	
};