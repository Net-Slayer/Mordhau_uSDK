// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mordhau.h"
#include "Components/ActorComponent.h"
#include "CharacterVoiceComponent.generated.h"

/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UCharacterVoiceComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY()
		TWeakObjectPtr<class UAudioComponent>              LastHurtYell;                                             // 0x00F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class UAudioComponent>              DeathScreamPtr;                                           // 0x0100(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class UAudioComponent>              LastVoiceCommand;                                         // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class UAudioComponent>              LastAttackYell;                                           // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class UAudioComponent>              LastScream;                                               // 0x0118(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UCharacterVoice*                             CharacterVoice;                                           // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              LastRequestedVoiceCommandTime;                            // 0x0128(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              VoiceCommandQueueDuration;                                // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MinDelayBetweenVoiceCommands;                             // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MinDelayBetweenBattlecries;                               // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              VoicePitch;                                               // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bIsVoiceMuffled;                                          // 0x013C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MuffledVoiceLowPassFrequency;                             // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MuffledVoiceVolumeMultiplier;                             // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AttackYellVolumeMultiplierViewTarget;                     // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAnimMontage*                                FaceAttackAnimation;                                      // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAnimMontage*                                FaceBattlecryAnimation;                                   // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAnimMontage*                                FaceTalkingAnimation;                                     // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAnimMontage*                                FaceHurtAnimation;                                        // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	UFUNCTION(BlueprintCallable)
		void UpdateVoiceDataFromCharacter();
	UFUNCTION(BlueprintCallable)
		void OnVoiceCommandReplicated();
	UFUNCTION(BlueprintCallable)
		void OnTakeDamage(class AAdvancedCharacter* Character, const struct FMordhauDamageInfo& DamageInfo, class AController* EventInstigator, class AActor* DamageCauser);
	UFUNCTION(BlueprintCallable)
		void OnLODTick(float DeltaTime);
	UFUNCTION(BlueprintCallable)
		void OnCharacterDied(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable)
		void OnCharacterBuilt(class AMordhauCharacter* Character);
};
