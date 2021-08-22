// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/PrimitiveComponent.h"
#include "SubField.generated.h"

UCLASS()
class MORDHAU_API ASubField : public AActor
{
	GENERATED_BODY()
	
public:	



	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced)
	class UPrimitiveComponent* Area; //(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	bool bIsSubFieldDeactivated; //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsSubFieldHidden; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	TWeakObjectPtr<class AMasterField> Master; //(ZeroConstructor, IsPlainOldData)

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "SubFieldEvents")
	void SetSubFieldHidden(bool bValue);
	UFUNCTION(BlueprintCallable, BlueprintGetter, Category = "SubFieldFns")
	class AMasterField* GetMaster();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "SubFieldEvents")
	void DeactivateSubField();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "SubFieldEvents")
	void BeginSubFieldDeactivation();


};