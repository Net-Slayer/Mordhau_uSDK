// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AdvancedCharacter.h"
#include "Mordhau.h"
#include "MordhauVehicle.generated.h"

/**
 *
 */
 //USTRUCT(BlueprintType)
 /*struct FPOV
 {
	 GENERATED_BODY()
 public:
	 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	 struct FVector                                     Location;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	 struct FRotator                                    Rotation;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	 float                                              FOV;
 };*/
 //USTRUCT(BlueprintType)
 //struct FVehicleTransitionInfo
 //{
 //	GENERATED_BODY()
 //public:
 //	UPROPERTY(EditAnywhere, BlueprintReadWrite)
 //	class UAnimSequence*                               Animation;
 //	UPROPERTY(EditAnywhere, BlueprintReadWrite)
 //	float                                              Duration;
 //	UPROPERTY(EditAnywhere, BlueprintReadWrite)
 //	float                                              BlendTime;
 //};

UCLASS(Blueprintable)
class MORDHAU_API AMordhauVehicle : public AAdvancedCharacter
{
	GENERATED_BODY()

public:
	AMordhauVehicle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FString, FText>  ActionToDescriptionMap;  //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bShowVehicleHealth;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bIsLadder;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bIsHorse; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LastObservedVehicleYaw;  //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bWasEverDriven; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CurrentUnusedTime; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float UnusedNetUpdateFrequency;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float OriginalNetUpdateFrequency; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bTickDriverAnimsAfterOurs;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bUseVisualPingCompensationOnAttacks; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bWillDieIfUnused;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MinTimeToStartUnusedDying;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8  UnusedDyingHealthReduction; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float UnusedDyingHealthReductionInterval;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bCanDriverRegenHealth;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bCanDriverRegenStamina;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MinimumInteractableVelocity;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxDistanceCorrectionForLeaveSpot;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bDisableCameraDistance;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bUseDriverTurnCaps;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bCounteractTurnWithSecondaryTurn; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bResetSecondaryTurnWhenNoDriver;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bResetLookUpWhenNoDriver;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	float SecondaryTurnValue;   //(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SecondaryTurnLimit;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8  ReplicatedSecondaryTurnValue;  //(Net, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SecondaryTurnValueSmoothingTarget;   //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SecondaryTurnValueSmoothingFrom;  //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SecondaryTurnValueSmoothingStartTime;   //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	class AMordhauCharacter*   Driver;   //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText   VehicleName; //(Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName   AttachSocketName;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FTransform AttachSocketOffset;   //(Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName   DetachSocketName;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bUseDetachRotation;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bLeaveOnDamage; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bLeaveOnDamageIfFriendly;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bDisarmOnEnter; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName   MainAnimationType; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MinXYDistanceToEnter; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D  MinZDistanceToEnter;  //(Edit, BlueprintVisible, IsPlainOldData)






	UFUNCTION(BlueprintCallable, Category = "MordhauVehicleFns")
		void StopDriving();
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicleFns")
		void StartDriving(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicleFns")
		void ServerSecondaryTurn(float NewTurn);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicleFns")
		void SecondaryTurnAtRate(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicleFns")
		void SecondaryTurn(float Value, bool bIsAbsolute);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicleFns")
		void OnRep_SecondaryTurnValue();








	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void UpdateFPCameraFor(class AMordhauCharacter* Character, float DeltaSeconds, bool bRotationOnly);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void UpdateAnimationFor(class AMordhauCharacter* Character, class UMordhauAnimInstance* AnimInst, float DeltaTime);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void KnockOffDriver(class AMordhauCharacter* Character);


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void OnDriverChanged();



	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		struct FVehicleTransitionInfo GetVehicleLeaveInfo(class AMordhauCharacter* Character, const struct FTransform& FromTransform);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		struct FVehicleTransitionInfo GetVehicleEnterInfo(class AMordhauCharacter* Character, const struct FTransform& FromTransform);



	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		struct FTransform GetExitTransform();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void DriverLateTick(class AMordhauCharacter* FromDriver, float DeltaTime);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauVehicleEvents")
		bool CanDrive(class AMordhauCharacter* Character) const;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void RequestUse();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		struct FPOV PostProcessCameraPOV(const struct FPOV& InPOV);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		float OverrideAttackAngle(class UAttackMotion* Motion);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void OnStoppedDriving(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void OnStartedDriving(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void SetDriver(class AMordhauCharacter* NewDriver);

};
