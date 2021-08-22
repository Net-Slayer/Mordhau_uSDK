// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Components/ActorComponent.h"
#include "PerkSystemComponent.generated.h"

/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UPerkSystemComponent : public UActorComponent {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ButcherDamageModifier;                                    // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              WreckerStructureDamageModifier;                           // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              SmithStructureRepairModifier;                             // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              FireproofReceivedFireDamageModifier;                      // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                FuryStaminaOnKill;                                        // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                BloodlustHealthOnKill;                                    // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                SecondWindExtraStaminaOnHit;                              // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AcrobatJumpStaminaCost;                                   // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RushMovementBoostDuration;                                // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RushMovementRestrictionOverrideDuration;                  // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              HuntsmanCooldown;                                         // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RatFootstepVolumeModifier;                                // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CatFallDamageModifier;                                    // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              TankScale;                                                // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              TankArmorSpeedFactor;                                     // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              TankArmorAccelerationFactor;                              // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              TankHealingModifier;                                      // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              TankReceivedDamageModifier;                               // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              TankVoicePitchMultiplier;                                 // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              TankAttackTurncapModifier;                                // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DwarfScale;                                               // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DwarfMeshZOffset;                                         // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DwarfMeshZOffsetCrouched;                                 // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DwarfReceivedDamageModifier;                              // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DwarfSpeedModifier;                                       // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DwarfVoicePitchMultiplier;                                // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DwarfJumpVelocityMultiplier;                              // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	UFUNCTION(BlueprintCallable)
		void OnTakeDamage(class AAdvancedCharacter* Character, const struct FMordhauDamageInfo& DamageInfo, class AController* EventInstigator, class AActor* DamageCauser);
	UFUNCTION(BlueprintCallable)
		void OnPreBeginPlay(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable)
		void OnLODTick(float DeltaTime);
	UFUNCTION(BlueprintCallable)
		void OnCharacterBuilt(class AMordhauCharacter* Character);
};
