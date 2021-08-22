// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CapturePointBanner.h"
#include "SkeletalMeshCapturePointBanner.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API ASkeletalMeshCapturePointBanner : public ACapturePointBanner
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class USkeletalMeshComponent*                      SkeletalMeshComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
class UAudioComponent*                             CapturingAudioComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
class USoundCue*                                   RaisingSound;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
class USoundCue*                                   LoweringSound;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bAddWindActor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
float                                              WindDisabledIfLessThanProgress;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
float                                              WindStrength;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
float                                              WindSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
float                                              WindRadius;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
float                                              WindMinGustAmount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
float                                              WindMaxGustAmount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
float                                              CurrentWindSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
class AWindDirectionalSource*                      WindActor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
class UAudioComponent*                             WavingAudioComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FVector2D                                   AudioVolumeByProgressIn;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FVector2D                                   AudioVolumeByProgressOut;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FVector2D                                   AudioPitchByProgressIn;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FVector2D                                   AudioPitchByProgressOut;
	
	
};
