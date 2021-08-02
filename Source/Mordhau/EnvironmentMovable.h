// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mordhau.h"
#include "EnvironmentMovable.generated.h"

UCLASS()
class MORDHAU_API AEnvironmentMovable : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		ESwayMethod                                        SwayMethod;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class USceneComponent>              SwayingComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     RollPitchYawFrequency;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     RollPitchYawMagnitude;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     RollPitchYawSpeed;
	
	UFUNCTION(BlueprintCallable, Category = "EnvironmentMoveFn")
	void InitializeMovable(class USceneComponent* InSwayingComponent, const struct FVector& InRollPitchYawFrequency, const struct FVector& InRollPitchYawMagnitude, const struct FVector& InRollPitchYawSpeed);

};
