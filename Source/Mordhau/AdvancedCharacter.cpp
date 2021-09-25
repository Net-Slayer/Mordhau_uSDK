// Fill out your copyright notice in the Description page of Project Settings.

#include "AdvancedCharacter.h"
#include "AdvancedCharacterMovement.h"
#include "LODSkeletalMeshComponent.h"
#include "MordhauCapsuleComponent.h"
#include "LateTickComponent.h"
#include "Net/UnrealNetwork.h"

AAdvancedCharacter::AAdvancedCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer
		.SetDefaultSubobjectClass<UAdvancedCharacterMovement>(ACharacter::CharacterMovementComponentName)
		.SetDefaultSubobjectClass<ULODSkeletalMeshComponent>(ACharacter::MeshComponentName)
		.SetDefaultSubobjectClass<UMordhauCapsuleComponent>(ACharacter::CapsuleComponentName))

{
	TagSystemComponent = CreateDefaultSubobject<UTagSystemComponent>(TEXT("TagSystemComponent"));
	LateTickComponent = CreateDefaultSubobject<ULateTickComponent>(TEXT("LateTickComponent"));
	DamageableComponent = CreateDefaultSubobject<UDamageableComponent>(TEXT("DamageableComponent"));
	HealthStatComponent = CreateDefaultSubobject<UHealthStatComponent>(TEXT("HealthStatComponent"));
	DismemberableComponent = CreateDefaultSubobject<UDismemberableComponent>(TEXT("DismemberableComponent"));
	EquipmentSystemComponent = CreateDefaultSubobject<UEquipmentSystemComponent>(TEXT("EquipmentSystemComponent"));
	MotionSystemComponent = CreateDefaultSubobject<UMotionSystemComponent>(TEXT("MotionSystemComponent"));
	PerkSystemComponent = CreateDefaultSubobject<UPerkSystemComponent>(TEXT("PerkSystemComponent"));
	DriverComponent = CreateDefaultSubobject<UDriverComponent>(TEXT("DriverComponent"));
	InteractionSystemComponent = CreateDefaultSubobject<UInteractionSystemComponent>(TEXT("InteractionSystemComponent"));
	CharacterVoiceComponent = CreateDefaultSubobject<UCharacterVoiceComponent>(TEXT("CharacterVoiceComponent"));
	StaminaStatComponent = CreateDefaultSubobject<UStaminaStatComponent>(TEXT("StaminaStatComponent"));
}

void AAdvancedCharacter::AddWound(const FVector & ImpactPoint, const FVector & ImpactNormal, const FName & bone, AActor * Agent, EMordhauDamageType DamageType, uint8 DamageSubType)
{
}

void AAdvancedCharacter::AddTurnDegrees(float Delta)
{
}

UAudioComponent * AAdvancedCharacter::BP_PlayCharacterSound(USoundBase * Sound, const FName & bone, const FVector & Location, TEnumAsByte<EAttachLocation::Type> AttachLocation, bool bAttach)
{
	return nullptr;
}

void AAdvancedCharacter::BoostAnimBlendWeight(float BoostAmount, UAnimMontage * Montage)
{
}

void AAdvancedCharacter::BeginFlinchAdditiveOverride(const FName & FlinchOverrideName, const FName & AltFlinchOverrideName, float Duration, float Degree, bool bIsHead, float SnapDegreeToSteps)
{
}

void AAdvancedCharacter::LookUpNotAbsolute(float Value)
{
}

void AAdvancedCharacter::LookUpAtRate(float Val)
{
}

void AAdvancedCharacter::LookUp(float Val, bool bIsAbsolute)
{
}

void AAdvancedCharacter::LeftOutOfBoundsArea()
{
}

bool AAdvancedCharacter::Knockback(const FVector & Amount)
{
	return false;
}

bool AAdvancedCharacter::IsViewTarget()
{
	return false;
}

bool AAdvancedCharacter::IsPlayerControlledIncludingVehicle()
{
	return false;
}

bool AAdvancedCharacter::IsOutOfBounds()
{
	return false;
}

bool AAdvancedCharacter::IsLocallyPlayerControlledIncludingVehicle()
{
	return false;
}

bool AAdvancedCharacter::IsLocallyPlayerControlled()
{
	return false;
}

bool AAdvancedCharacter::IsLocallyControlledOrUncontrolled()
{
	return false;
}

bool AAdvancedCharacter::IsLocallyControlledIncludingVehicle()
{
	return false;
}

bool AAdvancedCharacter::IsAnimActive(UAnimMontage * Montage)
{
	return false;
}

bool AAdvancedCharacter::IsAirborne()
{
	return false;
}

void AAdvancedCharacter::InteractionStart(AAdvancedCharacter * Character)
{
}

void AAdvancedCharacter::InteractionEnd()
{
}

void AAdvancedCharacter::Highlight()
{
}

float AAdvancedCharacter::GetRawLookUpValue()
{
	return 0.0f;
}

float AAdvancedCharacter::GetOutOfBoundsTimeUntilDeath()
{
	return 0.0f;
}

UMordhauMotion * AAdvancedCharacter::GetMotion()
{
	return nullptr;
}

float AAdvancedCharacter::GetLookUpValue()
{
	return 0.0f;
}

EMordhauDamageType AAdvancedCharacter::GetLastNetDamageType()
{
	return EMordhauDamageType();
}

AActor * AAdvancedCharacter::GetLastNetDamageSource()
{
	return nullptr;
}

bool AAdvancedCharacter::GetIsDead() const
{
	return false;
}

bool AAdvancedCharacter::GetIsBurning() const
{
	return false;
}

float AAdvancedCharacter::GetDistanceIntoSmokeFieldSmoothed()
{
	return 0.0f;
}

float AAdvancedCharacter::GetDistanceIntoSmokeField()
{
	return 0.0f;
}

AController * AAdvancedCharacter::GetControllerIncludingVehicle()
{
	return nullptr;
}

bool AAdvancedCharacter::GetBestStickyLocation(const FVector InLocation, FVector & OutLocation, FVector & OutNormal, FName & OutBone)
{
	return false;
}

uint8 AAdvancedCharacter::GetArmorTierForBone(const FName & BoneName)
{
	return uint8();
}

float AAdvancedCharacter::GetAnimWeight(UAnimMontage * Montage)
{
	return 0.0f;
}

float AAdvancedCharacter::GetAdditiveOverrideTypeNormalizedTime()
{
	return 0.0f;
}

FName AAdvancedCharacter::GetAdditiveOverrideType()
{
	return FName();
}

void AAdvancedCharacter::EnteredOutOfBoundsArea()
{
}

void AAdvancedCharacter::DouseFire()
{
}

void AAdvancedCharacter::OffsetHealth(int Amount, bool bReplicate)
{
}

void AAdvancedCharacter::MoveRight(float Val)
{
}

void AAdvancedCharacter::MoveForward(float Val)
{
}

float AAdvancedCharacter::MordhauTakeDamage(float DamageAmount, const FHitResult & Hit, EMordhauDamageType DamageType, uint8 DamageSubType, AActor * Source, AActor * Agent, AController * EventInstigator)
{
	return 0.0f;
}

void AAdvancedCharacter::OnRep_ReplicatedCharacterFlags(uint8 OldValue)
{
}

void AAdvancedCharacter::OnRep_NetDamage()
{
}

bool AAdvancedCharacter::PlayHitEffectParticle(const FVector & Location, const FRotator & Rotation, const FName & bone, bool bFindOptimalSpot)
{
	return false;
}

UAudioComponent * AAdvancedCharacter::PlayCharacterSound(USoundBase * Sound, const FName bone, const FVector InLocation, TEnumAsByte<EAttachLocation::Type> AttachLocation, bool bAttach, USoundAttenuation * Override, float VolumeMultiplier, float PitchMultiplier)
{
	return nullptr;
}

UAnimMontage * AAdvancedCharacter::PlayAnim(UAnimMontage * Montage, float PlayRate, bool bStopExistingMontages)
{
	return nullptr;
}

void AAdvancedCharacter::ResetLookLagInductionTarget()
{
}

void AAdvancedCharacter::ResetLocationLagInductionTarget()
{
}

void AAdvancedCharacter::ResetLagInductionTargets()
{
}

void AAdvancedCharacter::ResetAdditiveOverrideType()
{
}

void AAdvancedCharacter::RequestTrip()
{
}

void AAdvancedCharacter::RequestSuicide()
{
}

void AAdvancedCharacter::RequestMeshEnablePhysics(float Duration)
{
}

void AAdvancedCharacter::RegisterMaterialToDissolve(UMaterialInstanceDynamic * Mat)
{
}

void AAdvancedCharacter::StartBurning(float Duration, float Damage, float Tick, AActor * DamageAgent, AController * InstigatorController)
{
}

UParticleSystemComponent * AAdvancedCharacter::SpawnParticlesAttached(UParticleSystem * Particle, const FVector & Location, const FRotator & Rotation, TEnumAsByte<EAttachLocation::Type> AttachType, const FName & Socket, bool bForce)
{
	return nullptr;
}

void AAdvancedCharacter::SetOnSmoke(AMasterField * SmokeField)
{
}

void AAdvancedCharacter::SetOnFire(AMasterField * FireField)
{
}

void AAdvancedCharacter::SetMaxAnimBlendWeight(float MaxAmount, UAnimMontage * Montage)
{
}

void AAdvancedCharacter::SetLookLagInductionTarget(float Amount, float ChangeSpeed)
{
}

void AAdvancedCharacter::SetLocationLagInductionTarget(float Amount, float ChangeSpeed)
{
}

void AAdvancedCharacter::SetIsRagdollFalling(bool bInIsRagdollFalling)
{
}

void AAdvancedCharacter::SetAnimRate(UAnimMontage * Montage, float NewRate)
{
}

void AAdvancedCharacter::SetAnimPosition(UAnimMontage * Montage, float NewPosition)
{
}

void AAdvancedCharacter::SetAdditiveOverrideType(const FName & NewType, float Duration)
{
}

void AAdvancedCharacter::StopAnim(float FadeOut)
{
}

void AAdvancedCharacter::StartRagdollWithBlend(float BlendDuration)
{
}

void AAdvancedCharacter::StartRagdoll()
{
}



void AAdvancedCharacter::UnHighlight()
{
}

void AAdvancedCharacter::TurnNotAbsolute(float Value)
{
}

void AAdvancedCharacter::TurnAtRate(float Val)
{
}

void AAdvancedCharacter::Turn(float Val, bool bIsAbsolute)
{
}

bool AAdvancedCharacter::Trip()
{
	return false;
}

bool AAdvancedCharacter::TraceSphericalLimbs(const FVector TraceStart, const FVector TraceEnd, FHitResult & OutResult)
{
	return false;
}

void AAdvancedCharacter::Suicide()
{
}

void AAdvancedCharacter::StopRegen(float ExtraTime)
{
}

void AAdvancedCharacter::StopMontage(UAnimMontage * Montage, float FadeOut)
{
}

void AAdvancedCharacter::StopHealthRegen(float ExtraTime)
{
}
