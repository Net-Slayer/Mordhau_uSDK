// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Mordhau.h"
#include "ThudderComponent.generated.h"


UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UThudderComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FScriptMulticastDelegate                    OnThud;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bOnlyIfBoneIsSimulatingPhysics;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UPrimitiveComponent*                         MonitoredComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName                                       MonitoredBone;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MinTimeBetweenThuds;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              ThudMinVelocityThreshold;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              NextThudTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              PreviousVelocity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              CurrentVelocity;

	UFUNCTION(BlueprintCallable, Category = "Thudder")
		void DoTick();
};
