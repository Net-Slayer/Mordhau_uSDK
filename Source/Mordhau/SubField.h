// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SubField.generated.h"

UCLASS()
class MORDHAU_API ASubField : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent*                         Area;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsSubFieldDeactivated;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsSubFieldHidden;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
TWeakObjectPtr<class AMasterField>                 Master;


	UFUNCTION(BlueprintCallable, Category = "SubFieldFns")
class AMasterField* GetMaster();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "SubFieldEvents")
void DeactivateSubField();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "SubFieldEvents")
void BeginSubFieldDeactivation();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "SubFieldEvents")
void SetSubFieldHidden(bool bValue);





};