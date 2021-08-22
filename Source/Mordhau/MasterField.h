// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MasterField.generated.h"

UCLASS()
class MORDHAU_API AMasterField : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	float CreatedTime; //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	float DeactivatedTime; //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	float DeactivationStartedTime; //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	bool bAreSubfieldsHidden; //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsFieldActive; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bHasBegunDeactivation; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
	TArray<class UFieldSpawnComponent*> SubFieldSpawns; //(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	UPROPERTY()
	TArray<TWeakObjectPtr<class ASubField>> SubFields; //(ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBox CombinedBoundsBox; //(BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FieldLifeTime; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FieldDeactivationTime; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FieldFadeOutTime; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> CollisionFilter; //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<class AActor*, int> ActorPresenceTickCount; //(BlueprintVisible, ZeroConstructor)
// 
// 
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateField();
	UFUNCTION(BlueprintCallable)
	void SetSubFieldsHidden(bool bAreHidden);
	UFUNCTION(BlueprintCallable)
	void RecomputeCombinedBoundingBox();
	UFUNCTION(BlueprintCallable, BlueprintGetter)
	TArray<class ASubField*> GetSubFields();
	UFUNCTION(BlueprintGetter)
	struct FVector GetFieldBoundsCenter() const;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DeactivateAndDestroyField();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void CreateField();
	UFUNCTION(BlueprintCallable)
	float ComputeDistanceIntoField(const struct FVector& Location);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BeginFieldDeactivation();


};