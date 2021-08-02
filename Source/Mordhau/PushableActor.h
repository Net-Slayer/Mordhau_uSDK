// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauActor.h"
#include "PushableActor.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API APushableActor : public AMordhauActor
{
	GENERATED_BODY()
public:
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float>                                      NonPullableThresholds;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                Team1Presence;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                Team2Presence;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 Team1PushSpeedByPushers;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 Team2PushSpeedByPushers;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bStopPushingIfContested;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent*                         PushArea;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ProgressStepToAwardScoreFor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ScoreAwardedPerProgressStep;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              NetworkInterpolationSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              NetworkInterpolationSpeedConstant;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsNetworkInterpolationConstant;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Progress;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
bool                                               bIsPushingAllowed;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
bool                                               bIsPullingAllowed;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
bool                                               bAutoMoveIfAlone;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
float                                              AutoMoveSpeed;

UFUNCTION(BlueprintCallable, Category = "PushableFns")
	void SetProgress(float NewProgress);
UFUNCTION(BlueprintCallable, Category = "PushableFns")
	void OnRep_Progress();
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "PushableFns")
	void OnProgressUpdated(float OldProgress);
};
