// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CapturePointBanner.generated.h"

UCLASS()
class MORDHAU_API ACapturePointBanner : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class AControlPoint* ControlPoint;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CaptureProgress;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                RopeMaterialIndex;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                FlagMaterialIndex;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RopeSpeed;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UMaterialInstanceDynamic*                    RopeMaterialInstance;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UMaterialInstanceDynamic*                    FlagMaterialInstance;
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "CapturePointBannerEvents")
		void UpdateVisuals();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "CapturePointBannerEvents")
		void InitializeBanner(class AControlPoint* OwningPoint);
};
