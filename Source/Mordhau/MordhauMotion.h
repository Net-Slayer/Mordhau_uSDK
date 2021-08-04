// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mordhau.h"
#include "MordhauMotion.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class MORDHAU_API UMordhauMotion : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		float StartRealTime; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		class UMordhauMotion* ComingFromMotion; //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bDisablesDodge; //(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		float TurncapModifier; //(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		float ExpectedDelay; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		float StartTime; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		float EndTime; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		float LeaveTime; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bInitiatedLocally; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bWasConfirmedByAuthority; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		float ConfirmedByAuthorityTime; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bIsFlinchable; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		EMovementRestriction MovementRestriction; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		float SpeedFactor; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		float BackpedalSpeedFactor; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bCanEmote; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bCanAttack; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bCanBlock; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bDisablesAtmospherics; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bRequires3PArmsSync; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bDisablesCosmeticWeaponTransform; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bDisablesOffhandIK; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bDisablesChaseMechanic; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bForcesOffhandIK; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bOffhandIsRightHand; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		float OffhandIKChangeSpeed; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		float CosmeticTransformChangeSpeed; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		float OffhandIKDistanceMax; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		float OffhandIKDistanceMin; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bBlocksRegen; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bAllowDedicatedServerAnimLOD; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bUsesLeftTorsoBlend; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		float LeftTorsoBlendSpeed; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bWantsRightLegBending; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		float RightLegBendingChangeSpeed; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		bool bWantsSlowLookSmoothing; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
		float LookSmoothingChangeSpeed; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauMotionEvents")
		bool ProcessFeint();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauMotionEvents")
		bool ProcessBlock(EBlockType Type);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauMotionEvents")
		bool ProcessAttack(EAttackMove Move, float Angle);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauMotionEvents")
		void OnTick(float DeltaTime);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauMotionEvents")
		void OnLeave(bool Interrupted);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauMotionEvents")
		void OnLateTick(float DeltaTime);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauMotionEvents")
		void OnEnded();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauMotionEvents")
		void OnBegin();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauMotionEvents")
		void OnDynamicParamChanged(uint8 OldValue, uint8 NewValue);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauMotionFns")
		bool HasAuthority();
	UFUNCTION(BlueprintCallable, Category = "MordhauMotionFns")
		class UWorld* GetWorld() const;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauMotionFns")
		class AMordhauCharacter* GetOwnerMordhauCharacter();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauMotionFns")
		class AAdvancedCharacter* GetOwnerAdvancedCharacter();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauMotionFns")
		class AActor* GetOwnerActor();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauMotionFns")
		class UMotionSystemComponent* GetOwner();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauMotionFns")
		bool GetIsFirstPerson();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauMotionEvents")
		bool CanInitiateMotion(class UClass* NewMotionType);
};
