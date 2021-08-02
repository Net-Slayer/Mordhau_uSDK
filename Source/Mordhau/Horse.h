// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauVehicle.h"
#include "Mordhau.h"
#include "Horse.generated.h"

/**
 *
 */
UCLASS()
class MORDHAU_API AHorse : public AMordhauVehicle
{
	GENERATED_BODY()

public:
	
	AHorse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCapsuleComponent*   BumpCapsule; //(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TurdSpawnInterval; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TurdSpawnChance;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LastTurdSpawnCheck;   //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FastFootstepParticlesMinVelocity; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UParticleSystem*>   FastFootstepParticles;   //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue*  SoundTrot;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue*  SoundCanter; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue*  SoundGallop; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat*   BumpDamageBySpeedModifierCurve;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat*   AttackDamageBySpeedModifierCurve; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int   DesiredGear; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int   UncontrolledGear;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float KnockbackForce; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float KnockbackForceVelocityFactor;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float KnockbackDamage;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue*  KnockbackSound; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat*   RiderRearingCurve; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float RearingDuration;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8  ReplicatedRearing; //(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ReplicatedRearingTimeOut;   //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LastRearingTime;   //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LastRearingRealTime;  //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bIsRearing;  //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EHorseGear  MinimumGearToCouch;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SpawnTurd();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ServerRequestRearing();
	UFUNCTION(BlueprintCallable)
	void SecondaryTurnNotAbsolute(float Value);
	UFUNCTION(BlueprintCallable)
	void RequestRearing();
	UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedRearing();
	UFUNCTION(BlueprintCallable)
	void OnBumpCapsuleOverlapped(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetIsInRearingMode();
	UFUNCTION(BlueprintCallable)
	float CalculateBumpDamage(const struct FVector& OurWorldVelocity);

};
