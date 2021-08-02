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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UTagSystemComponent*                         TagSystemComponent;                                       // 0x25F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float>                                      ClosestWidgetVisibilityQueueDistances;                    // 0x2600(0x0010) (ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ClosestWidgetVisibilityQueueMaxDistance;                  // 0x2610(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class AAtmosphericFog*                             AtmosphericFog;                                           // 0x2618(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              AtmosphericFogMultiplierChangeSpeed;                      // 0x2624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsInMainMenu;                                            // 0x2628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FMinimalViewInfo                            LastViewInfo;                                             // 0x2630(0x0570)
	UPROPERTY()
		TWeakObjectPtr<class AActor>                       QueuedViewTarget;                                         // 0x2BA0(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TArray<TWeakObjectPtr<class UMordhauWidgetComponent>> LateTickRequests;                                         // 0x2BA8(0x0010) (ExportObject, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              HitFlashFadeInDuration;                                   // 0x2BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              HitFlashStayDuration;                                     // 0x2BBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              HitFlashFadeOutDuration;                                  // 0x2BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              HitFlashValue;                                            // 0x2BCC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsHitFlashDirectional;                                   // 0x2BD0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class AActor>                       HitFlashSource;                                           // 0x2BD4(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              HitFlashDegrees;

	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
		void SetViewTargetBP(class AActor* NewTarget);
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
		void SetCameraStyleBP(const FName& NewCameraStyle);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCameraManagerFns")
		void OnHitFlash(bool bIsDirectional, class AActor* Source);
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
		void LeaveMapView();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
		void LeaveCustomization();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
		class AActor* GetViewTargetBP();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCameraManagerFns")
		bool GetIsInMapView();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCameraManagerFns")
		bool GetIsInCustomization();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
		FName GetCameraStyleBP();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
		struct FMinimalViewInfo GetCameraCache();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
		void EnterMapView();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
		void EnterCustomization(class AActor* CustomizationTarget);
};
