// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "Mordhau.h"
#include "MordhauCameraManager.generated.h"

/**
 *
 */
UCLASS()
class MORDHAU_API AMordhauCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()
public:

	AMordhauCameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Export,Instanced)
	class UTagSystemComponent* TagSystemComponent;   //(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float>  ClosestWidgetVisibilityQueueDistances;  //(ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ClosestWidgetVisibilityQueueMaxDistance;   //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class AAtmosphericFog*  AtmosphericFog; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float AtmosphericFogMultiplierChangeSpeed; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bIsInMainMenu;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FMinimalViewInfo LastViewInfo;
	UPROPERTY()
	TWeakObjectPtr<class AActor>  QueuedViewTarget;  //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(Export)
	TArray<TWeakObjectPtr<class UMordhauWidgetComponent>> LateTickRequests;  //(ExportObject, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HitFlashFadeInDuration;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HitFlashStayDuration; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HitFlashFadeOutDuration; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HitFlashValue;  //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bIsHitFlashDirectional;  //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	TWeakObjectPtr<class AActor>  HitFlashSource; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HitFlashDegrees;   //(BlueprintVisible, ZeroConstructor, IsPlainOldData)


	UFUNCTION(BlueprintCallable)
	void SetViewTargetBP(class AActor* NewTarget);
	UFUNCTION(BlueprintCallable, meta = (AutoCreateRefTerm = "NewCameraStyle"))
	void SetCameraStyleBP(const FName& NewCameraStyle);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnHitFlash(bool bIsDirectional, class AActor* Source);
	UFUNCTION(BlueprintCallable)
	void LeaveMapView();
	UFUNCTION(BlueprintCallable)
	void LeaveCustomization();
	UFUNCTION(BlueprintCallable)
	class AActor* GetViewTargetBP();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetIsInMapView();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetIsInCustomization();
	UFUNCTION(BlueprintCallable)
	FName GetCameraStyleBP();
	UFUNCTION(BlueprintCallable)
	struct FMinimalViewInfo GetCameraCache();
	UFUNCTION(BlueprintCallable)
	void EnterMapView();
	UFUNCTION(BlueprintCallable)
	void EnterCustomization(class AActor* CustomizationTarget);


};
