// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CapturePointBanner.h"
#include "StaticMeshCapturePointBanner.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API AStaticMeshCapturePointBanner : public ACapturePointBanner
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStaticMeshComponent*                        StaticMeshComponent;
	
	
};
