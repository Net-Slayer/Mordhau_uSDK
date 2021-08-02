// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Components/ActorComponent.h"
#include "DismemberableComponent.generated.h"

/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UDismemberableComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	UPROPERTY()
		TWeakObjectPtr<class AActor>                       QueuedDismemberAgent;                                     // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class ASeparatedBodyPart>           SeparatedHead;                                            // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TArray<TWeakObjectPtr<class ASeparatedBodyPart>>   SeparatedBodyParts;                                       // 0x0100(0x0010) (ZeroConstructor)
	UPROPERTY()
		TMap<FName, TWeakObjectPtr<class AActor>>   AttachedGoreMeshes;                                       // 0x0110(0x0050) (ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FWoundInfo                                  DismemberWoundInfo;                                       // 0x01B0(0x0014) (Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UClass*                                      BodyPart;                                                 // 0x01C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class USoundCue*                                   DismembermentGore;                                        // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class USoundCue*                                   BluntDismembermentGore;                                   // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UClass*                                      OutGoreMeshBlunt;                                         // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UClass*                                      OutGoreMesh;                                              // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UClass*                                      OutGoreMeshNeck;                                          // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UParticleSystem*                             LimbExplosionParticle;                                    // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MaxDistFromBoneForAnyDismember;                           // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MaxAngleDistFromBoneForAnyDismember;                      // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MaxDistFromBoneForFullDismember;                          // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MaxAngleDistFromBoneForFullDismember;                     // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RagdollMaxDistFromBoneForAnyDismember;                    // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RagdollMaxDistFromBoneForFullDismember;                   // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TMap<FName, float>                          MinimumDamageToExplode;                                   // 0x0218(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TMap<FName, float>                          MinimumDamageToDismember;                                 // 0x0268(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TMap<FName, float>                          MinimumDamageToPartialDismember;                          // 0x02B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector2D                                   DismemberArmsSpineYawPitchLimit;                          // 0x0308(0x0008) (Edit, BlueprintVisible, IsPlainOldData)

	UFUNCTION(BlueprintCallable)
		bool TryDismember(const FName& bone, const struct FVector& Point, class AMordhauWeapon* Weapon, EAttackMove Move, bool bIsRagdollDismember);
	UFUNCTION(BlueprintCallable)
		bool QueueDismember(const FName& bone, bool bIsDismemberPartial, bool bIsBluntForce, const struct FVector& Force, class AActor* Agent);
	UFUNCTION(BlueprintCallable)
		bool ProcessQueuedDismemberment();
	UFUNCTION(BlueprintCallable)
		void OnCharacterCameraStyleChanged(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool IsBoneDismembered(const FName& bone);
	UFUNCTION(BlueprintCallable)
		class ASeparatedBodyPart* Dismember(const FName& bone);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool CanDismember(const FName& bone);
};
