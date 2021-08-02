// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "MordhauWidgetComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UMordhauWidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              WorldSpaceZOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   WidgetCullAngle;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              WidgetCullAngleZPositionOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              DistanceToCameraZPositionOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              DistanceToCamera;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString                                     TextParameter;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString                                     DistanceToCameraString;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bWantsDistanceToCameraStringUpdated;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AngleToCamera;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                OverrideVisible;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class APlayerState>                 PlayerStateAlwaysSee;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bShowInMapView;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bShowInMainMenu;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bUsesViewTargetTeamRestriction;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ViewTargetTeamRestriction;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                FrameSkip;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AMordhauCameraManager*                       CachedPlayerCameraManager;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AMordhauGameState*                           CachedGameState;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSlowHideOverride;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool PartakesInSortedVisibilityQueue;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VisibilityWeightInterpolationSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VisibilityWeight;


UFUNCTION(BlueprintCallable, Category = "MordhauWidgetCompFn")
void SetPlayerStateAlwaysSee(class APlayerState* PlayerState);
	
	
};
