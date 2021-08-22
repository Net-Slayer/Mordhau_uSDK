// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauActor.h"
#include "Mordhau.h"
#include "MordhauProjectile.generated.h"

/**
*
*/

USTRUCT(Blueprintable, BlueprintType)
struct FProjectileInfo
{
	GENERATED_BODY()
};

UCLASS()
class MORDHAU_API AMordhauProjectile : public AMordhauActor
{
	GENERATED_BODY()

public:

	AMordhauProjectile();

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		class USceneComponent* SpinComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bDestroyWhenTerminated = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bWasAttachedOnClient;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FText ProjectileName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector LastProjectileLocation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bHideProjectile;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FTransform CosmeticOffsetToBlendOut;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float CosmeticOffsetBlendOutSpeed = 5.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float CosmeticOffsetBlendWeight;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FTransform OriginalMeshRelativeTransform;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FQuat DefaultMeshRotationOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<struct FWoundInfo> WoundInfoArray;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<TEnumAsByte<EPhysicalSurface>> WillStickyOn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<TEnumAsByte<EPhysicalSurface>> WillPassThroughOn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TMap <TEnumAsByte<EPhysicalSurface>, class UParticleSystem*> SurfaceImpactParticles;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TMap <TEnumAsByte<EPhysicalSurface>, struct FDecalInfo> SurfaceImpactDecals;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector RotationSpin;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float PathBlendDuration = 0.5;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float RagdollLifeSpan = 20;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 AttackMask = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float DamageMultiplier = 1.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class USoundCue* FlightSound;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class USoundCue* ImpactSound;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class USoundCue* FleshImpactSound;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class UAudioComponent> CurrentFlightSound;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FActorSetAndArray CosmeticIgnoreActors;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<struct FHitResult> HitResultCache;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator AccumulatedRotationSpin;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FActorSetAndArray IgnoreActors;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FReplicatedProjectileInfo ReplicatedProjectileInfo;
	UPROPERTY()
		TWeakObjectPtr<class AActor> Creator;
	UPROPERTY()
		TWeakObjectPtr<class AController> OwningController;
	UPROPERTY()
		TWeakObjectPtr<class APawn> OwningPawn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bIsFromLocalPlayer;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class AMordhauProjectile* AssociatedProjectile;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float DamageModifierHuntsmanPerk = 1.75;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<float> Damage = { 75.0, 50.0, 40.0, 30.0 };

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<float> HeadBonus = { 15.0, 15.0, 15.0, 15.0 };
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<float> LegBonus = { -10.0, -10.0, -10.0, -10.0 };
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float WoodDamage = 5.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float StoneDamage = 1.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bHasReceivedInfo;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float FiredTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float LastProjectileSweepTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bUsesLocalProjectileBlending = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bIsConfirmed;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bHasTerminated;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float TerminatedTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bHasNetworkOrigin;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bHasFired;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<class UClass*> RestockAmmoForEquipment;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UClass* GiveEquipmentOnPickup;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bAssignCustomizationOnPickup = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FEquipmentCustomization CreatorEquipmentCustomization;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bIsActiveBlendProjectile;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bHasStartedTrail;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bAutomaticallyDetermineMeshLocation = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int ProjectileCollisionPrecedence;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bWillIgnoreShooter = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bAutomaticallyDetermineSpinLocation = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float StickySurfacePitchBlend = 1.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float StickySurfaceYawBlend;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UParticleSystem* TrailParticleTemplate;
	UPROPERTY()
		TWeakObjectPtr<class UParticleSystemComponent> CurrentTrailParticles;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName TrailStartSocket = FName(TEXT("StickyPoint"));
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName TrailEndSocket = FName(TEXT("StickyPoint"));
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float TrailWidth = 100.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TEnumAsByte<ETrailWidthMode> TrailWidthMode;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bIsLocallyPredicted;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float AttackBounceForce = 800.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float ParryBounceForce = 400.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float ProjectileBounceForce = 200.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float EnvironmentBounceForce = 400.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float BounceAngularVelocityFactor = 0.0125;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float BounceMinAngularVelocity = 2.0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bShouldFlinch;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float CullDistanceRagdoll = 5000;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		class UBoxComponent* CollisionComp;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		class UAdvProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		class USkeletalMeshComponent* SkeletalMeshComponent;

	UFUNCTION(BlueprintCallable)
		bool WillSticky(uint8 Surface);
	UFUNCTION(BlueprintCallable)
		bool WillPassThrough(uint8 Surface);
	UFUNCTION(BlueprintCallable)
		bool UsesProjectileBlending();
	UFUNCTION(BlueprintCallable)
		void UpdateProjectileState(float DeltaTime);
	UFUNCTION(BlueprintCallable)
		void TerminateProjectile();
	UFUNCTION(BlueprintCallable)
		void SweepProjectile();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void StopTrail();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void StartTrail();
	UFUNCTION(BlueprintCallable)
		void SpawnParticles(const struct FVector& Location, const struct FRotator& Rotation, class UParticleSystem* System);
	UFUNCTION(BlueprintCallable)
		void SpawnDecal(const struct FVector& Location, const struct FRotator& Rotation, const struct FDecalInfo& DecalInfo);
	UFUNCTION(BlueprintCallable)
		void SetCurrentTrailParticles(class UParticleSystemComponent* ParticleSystemComponent);
	UFUNCTION(BlueprintCallable)
		bool RestockCharacter(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void ProcessProjectileHit(bool bIsBlocking, const struct FHitResult& Hit);
	UFUNCTION(BlueprintCallable)
		void OnRep_ReplicatedProjectileInfo();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void OnProjectileHitCosmetic(class AActor* OtherActor, const struct FHitResult& Hit);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void OnProjectileHit(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, uint8 Surface, bool bHasHitWorld, bool bHasStopped);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void OnProjectileFired();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void OnProjectileDamagedCharacter(class AAdvancedCharacter* Character, bool bWillKill, const struct FVector& WorldLocation, const FName& bone);
	UFUNCTION(BlueprintCallable)
		void InitializeProjectile(class AController* InOwningController, bool bInIsLocallyPredicted, class AActor* InCreator);
	UFUNCTION(BlueprintCallable)
		struct FTransform GetWorldMeshTransformWithOffsets();
	UFUNCTION(BlueprintCallable)
		class AController* GetProjectileOwningController();
	UFUNCTION(BlueprintCallable)
		class AActor* GetProjectileCreator();
	UFUNCTION(BlueprintCallable)
		float GetPercentageOfMaxVelocityClamped();
	UFUNCTION(BlueprintCallable)
		class UParticleSystemComponent* GetCurrentTrailParticles();
	UFUNCTION(BlueprintCallable)
		struct FTransform GetBlendedTransform(const struct FTransform& Ours, const struct FTransform& Associated, float T);
	UFUNCTION(BlueprintCallable)
		struct FTransform GetBlendedMeshTransform(float T);
	UFUNCTION(BlueprintCallable)
		struct FTransform GetBlendedActorTransform(float T);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void Fire();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void CarryOverTrail(class AMordhauProjectile* NewProjectile);
	UFUNCTION(BlueprintCallable)
		void BounceComponent(class USkeletalMeshComponent* ComponentToBounce, const struct FVector& NewVelocity, const struct FVector& NewAngularVelocity);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		bool AttachProjectile(const struct FHitResult& Hit);
};
