// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MordhauPlayerStart.h"
#include "ControlPoint.generated.h"

UCLASS()
class MORDHAU_API AControlPoint : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*>                              OverlapsCache;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText                                       Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsHiddenPoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsCapturable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bTeam1OwnsPrerequisites;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bTeam2OwnsPrerequisites;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bSpawnsDisabled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic*                    DecalMaterialInstance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                SpawnsTeam;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                SpawnsToken;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMordhauWidgetComponent*                     WidgetComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bDoNotShowFloaterWidget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bDoNotShowInTopBarWidget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface*                          UIMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic*                    UIMaterialInstance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor                                LastSetUIIconColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor                                LastSetUIBorderColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LastSetUIProgress;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AwardScoreInterval;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                AwardScoreCapturing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                AwardScoreCaptured;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                AwardScoreNeutralizing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                AwardScoreNeutralized;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class ACapturePointBanner*>                 Banners;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent*                         CaptureArea;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CaptureProgress;//
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bBannersDoNotAnimateCaptureProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              NetworkSmoothTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                     OwningTeam;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                      CapturingTeam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class AControlPoint*>                       Team1PrerequisitePoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class AControlPoint*>                       Team2PrerequisitePoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class AMordhauPlayerStart*>                 SpawnPoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                Team1Presence;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                Team2Presence;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsFlashing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bPreventSpawningIfContested;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasEverProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              UncaptureSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 NeutralizeSpeedCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 CaptureSpeedCurve;


	
	
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "ControlPointFns")
	void UpdateVisuals();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "ControlPointFns")
	void UpdateUIWidgets();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "ControlPointFns")
	void UpdateUIMaterialInstance();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "ControlPointFns")
	void UpdatePresenceNumbers();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "ControlPointFns")
	void UpdateCaptureProgress(float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "ControlPointFns")
	void SetCaptureProgress(float NewProgress, uint8 NewCaptor, bool bAwardScore);
	UFUNCTION(BlueprintNativeEvent, Category = "ControlPointEvents")
	void OnStoppedFlashing();
	UFUNCTION(BlueprintNativeEvent, Category = "ControlPointEvents")
	void OnStartedFlashing();
	UFUNCTION(BlueprintNativeEvent, Category = "ControlPointEvents")
	void OnRep_CaptureProgress();
	UFUNCTION(BlueprintNativeEvent, Category = "ControlPointEvents")
	void OnRep_OwningTeam();
	UFUNCTION(BlueprintNativeEvent, Category = "ControlPointEvents")
	void OnRep_CapturingTeam();
	UFUNCTION(BlueprintNativeEvent, Category = "ControlPointEvents")
	void OnOwningTeamChanged();
	UFUNCTION(BlueprintNativeEvent, Category = "ControlPointEvents")
	void OnCapturingTeamChanged();
	UFUNCTION(BlueprintNativeEvent, Category = "ControlPointEvents")
	void OnCaptureAreaEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	UFUNCTION(BlueprintNativeEvent, Category = "ControlPointEvents")
	void OnCaptureAreaBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "ControlPointFns")
	void EnemyLostPrerequisites();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "ControlPointFns")
	void EnemyGainedPrerequisites();
	UFUNCTION(BlueprintCallable, Category = "ControlPointFns")
	bool CanCapture(uint8 Team);
	
	
};
