// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauProjectile.h"
#include "AdvProjectileMovementComponent.h"

AMordhauProjectile::AMordhauProjectile()
{
	GetRootComponent()->DestroyComponent();
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	RootComponent = CollisionComp;
	SpinComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SpinComponent"));
	SpinComponent->SetupAttachment(RootComponent);

	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	SkeletalMeshComponent->SetupAttachment(SpinComponent);
	ProjectileMovement = CreateDefaultSubobject<UAdvProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = RootComponent;
}

float AMordhauProjectile::GetPercentageOfMaxVelocityClamped()
{
	return 1;
}
bool AMordhauProjectile::AttachProjectile_Implementation(const struct FHitResult& Hit)
{
	return 1;
}
bool AMordhauProjectile::WillSticky(uint8 Surface)
{
	return 1;
}
bool AMordhauProjectile::WillPassThrough(uint8 Surface)
{
	return 1;
}
bool AMordhauProjectile::UsesProjectileBlending()
{
	return 1;
}
bool AMordhauProjectile::RestockCharacter(class AMordhauCharacter* Character)
{
	return 1;
}

void AMordhauProjectile::UpdateProjectileState(float DeltaTime)
{}
void AMordhauProjectile::TerminateProjectile()
{}
void AMordhauProjectile::SweepProjectile()
{}
void AMordhauProjectile::StopTrail_Implementation()
{}
void AMordhauProjectile::StartTrail_Implementation()
{}
void AMordhauProjectile::SpawnParticles(const struct FVector& Location, const struct FRotator& Rotation, class UParticleSystem* System)
{}
void AMordhauProjectile::SpawnDecal(const struct FVector& Location, const struct FRotator& Rotation, const struct FDecalInfo& DecalInfo)
{}
void AMordhauProjectile::SetCurrentTrailParticles(class UParticleSystemComponent* ParticleSystemComponent)
{}
void AMordhauProjectile::Fire_Implementation()
{}
void AMordhauProjectile::CarryOverTrail_Implementation(class AMordhauProjectile* NewProjectile)
{}
void AMordhauProjectile::BounceComponent(class USkeletalMeshComponent* ComponentToBounce, const struct FVector& NewVelocity, const struct FVector& NewAngularVelocity)
{}
void AMordhauProjectile::ProcessProjectileHit_Implementation(bool bIsBlocking, const struct FHitResult& Hit)
{}
void AMordhauProjectile::OnRep_ProjectileInfo()
{}
void AMordhauProjectile::OnProjectileHitCosmetic_Implementation(class AActor* OtherActor, const struct FHitResult& Hit)
{}
void AMordhauProjectile::OnProjectileHit_Implementation(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, uint8 Surface, bool bHasHitWorld, bool bHasStopped)
{}
void AMordhauProjectile::OnProjectileFired_Implementation()
{}
void AMordhauProjectile::OnProjectileDamagedCharacter_Implementation(class AAdvancedCharacter* Character, bool bWillKill, const struct FVector& WorldLocation, const FName& bone)
{}
void AMordhauProjectile::InitializeProjectile(class AController* InOwningController, bool bInIsLocallyPredicted, class AActor* InCreator)
{}

//struct FTransform GetBlendedTransform(float T);
//struct FTransform GetCurrentTransformWithOffsets();

class UParticleSystemComponent* AMordhauProjectile::GetCurrentTrailParticles()
{
	return nullptr;
}
class AController* AMordhauProjectile::GetProjectileOwningController()
{
	return nullptr;
}
class AActor* AMordhauProjectile::GetProjectileCreator()
{
	return nullptr;
}