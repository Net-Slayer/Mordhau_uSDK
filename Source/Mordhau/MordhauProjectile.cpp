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

bool AMordhauProjectile::WillSticky(uint8 Surface)
{
	return false;
}

bool AMordhauProjectile::WillPassThrough(uint8 Surface)
{
	return false;
}

bool AMordhauProjectile::UsesProjectileBlending()
{
	return false;
}

void AMordhauProjectile::UpdateProjectileState(float DeltaTime)
{
}

void AMordhauProjectile::TerminateProjectile()
{
}

void AMordhauProjectile::SweepProjectile()
{
}



void AMordhauProjectile::SpawnParticles(const FVector & Location, const FRotator & Rotation, UParticleSystem * System)
{
}

void AMordhauProjectile::SpawnDecal(const FVector & Location, const FRotator & Rotation, const FDecalInfo & DecalInfo)
{
}

void AMordhauProjectile::SetCurrentTrailParticles(UParticleSystemComponent * ParticleSystemComponent)
{
}

bool AMordhauProjectile::RestockCharacter(AMordhauCharacter * Character)
{
	return false;
}



void AMordhauProjectile::OnRep_ReplicatedProjectileInfo()
{
}



void AMordhauProjectile::InitializeProjectile(AController * InOwningController, bool bInIsLocallyPredicted, AActor * InCreator)
{
}

FTransform AMordhauProjectile::GetWorldMeshTransformWithOffsets()
{
	return FTransform();
}

AController * AMordhauProjectile::GetProjectileOwningController()
{
	return nullptr;
}

AActor * AMordhauProjectile::GetProjectileCreator()
{
	return nullptr;
}

float AMordhauProjectile::GetPercentageOfMaxVelocityClamped()
{
	return 0.0f;
}

UParticleSystemComponent * AMordhauProjectile::GetCurrentTrailParticles()
{
	return nullptr;
}

FTransform AMordhauProjectile::GetBlendedTransform(const FTransform & Ours, const FTransform & Associated, float T)
{
	return FTransform();
}

FTransform AMordhauProjectile::GetBlendedMeshTransform(float T)
{
	return FTransform();
}

FTransform AMordhauProjectile::GetBlendedActorTransform(float T)
{
	return FTransform();
}



void AMordhauProjectile::BounceComponent(USkeletalMeshComponent * ComponentToBounce, const FVector & NewVelocity, const FVector & NewAngularVelocity)
{
}

