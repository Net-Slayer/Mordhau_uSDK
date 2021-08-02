// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauEquipment.h"

#include "MordhauSceneComponent.h"

#include "LODSkeletalMeshComponent.h"

#include "UnrealNetwork.h"

AMordhauEquipment::AMordhauEquipment()
{
	//RootSceneComponent = CreateDefaultSubobject<UMordhauSceneComponent>(TEXT("RootComponent"));
	//RootSceneComponent = RootSceneComponent;
	//RootComponent = CreateDefaultSubobject<UMordhauSceneComponent>(TEXT("RootComponent"));
	//RootComponent = CreateDefaultSubobject<UMordhauSceneComponent>(TEXT("RootSceneComponent"));

	SkeletalMeshComponent = CreateDefaultSubobject<ULODSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	SkeletalMeshComponent->AttachTo(RootComponent);
}

/*AMordhauEquipment::AMordhauEquipment()
{
	GetRootComponent()->RemoveFromRoot();
	GetRootComponent()->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);

	UMordhauSceneComponent * tmpRoot = CreateDefaultSubobject<UMordhauSceneComponent>(TEXT("RootComponent"));
	RootComponent = tmpRoot;

	//RootComponent = CreateDefaultSubobject<UMordhauSceneComponent>(TEXT("RootComponent"));
	SkeletalMeshComponent = CreateDefaultSubobject<ULODSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));

	SkeletalMeshComponent->AttachTo(RootComponent);
}*/

void AMordhauEquipment::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMordhauEquipment, bForceRefPoseOnMesh)
		DOREPLIFETIME(AMordhauEquipment, CreatedRealTime)
		DOREPLIFETIME(AMordhauEquipment, DefaultMeshRelativeTransform)
		DOREPLIFETIME(AMordhauEquipment, HideInGameOverride)
		DOREPLIFETIME(AMordhauEquipment, EquippedOffset)
		DOREPLIFETIME(AMordhauEquipment, bUseEquippedOffset)
		DOREPLIFETIME(AMordhauEquipment, bCanThrowPommel)
		DOREPLIFETIME(AMordhauEquipment, bSecondUseEquippedOffset)
		DOREPLIFETIME(AMordhauEquipment, bIsHeldInHand)
		DOREPLIFETIME(AMordhauEquipment, bIsParentInFirstPerson)
		DOREPLIFETIME(AMordhauEquipment, bWantsToRebuildParts)
		DOREPLIFETIME(AMordhauEquipment, LastOwnerTeam)
		DOREPLIFETIME(AMordhauEquipment, bForceTeamColor1)
		DOREPLIFETIME(AMordhauEquipment, bForceTeamColor2)
		DOREPLIFETIME(AMordhauEquipment, bHasColor1)
		DOREPLIFETIME(AMordhauEquipment, bHasColor2)
		DOREPLIFETIME(AMordhauEquipment, bHasColor3)
		DOREPLIFETIME(AMordhauEquipment, bWasLastParentCharacterLocalPlayer)
		DOREPLIFETIME(AMordhauEquipment, bHeldInteractIsSwap)
		DOREPLIFETIME(AMordhauEquipment, bIsRightHanded)
		DOREPLIFETIME(AMordhauEquipment, bSecondIsRightHanded)
		DOREPLIFETIME(AMordhauEquipment, bIsTwoHanded)
		DOREPLIFETIME(AMordhauEquipment, bSecondIsTwoHanded)
		DOREPLIFETIME(AMordhauEquipment, EquipTimeModifier)
		DOREPLIFETIME(AMordhauEquipment, bRangedActionAllowsRegen)
		DOREPLIFETIME(AMordhauEquipment, RangedDrawFOVOffset)
		DOREPLIFETIME(AMordhauEquipment, RangedDrawSway)
		DOREPLIFETIME(AMordhauEquipment, bIsRangedSwayCameraBased)
		DOREPLIFETIME(AMordhauEquipment, RangedAirborneSway)
		DOREPLIFETIME(AMordhauEquipment, RangedAirborneSwayBlendInSpeed)
		DOREPLIFETIME(AMordhauEquipment, RangedAirborneSwayBlendOutSpeed)
		DOREPLIFETIME(AMordhauEquipment, RangedDrawSwayLoopSegment)
		DOREPLIFETIME(AMordhauEquipment, RangedDrawTremblingStartAfter)
		DOREPLIFETIME(AMordhauEquipment, RangedDrawTremblingMaxAfter)
		DOREPLIFETIME(AMordhauEquipment, RangedDrawTremblingMagnitude)
		DOREPLIFETIME(AMordhauEquipment, RangedDrawTremblingFrequency)
		DOREPLIFETIME(AMordhauEquipment, bIsFollowingProjectile)
		DOREPLIFETIME(AMordhauEquipment, bCanRestockFromEquipmentDefaults)
		DOREPLIFETIME(AMordhauEquipment, MaxAmmoBoxRestockAmount)
		DOREPLIFETIME(AMordhauEquipment, bDoNotDisarmOnMeleeWeaponHit)
		DOREPLIFETIME(AMordhauEquipment, bCannotChaseOthers)
		DOREPLIFETIME(AMordhauEquipment, bCanBeChasedFromFront)
		DOREPLIFETIME(AMordhauEquipment, bCanRagdoll)
		DOREPLIFETIME(AMordhauEquipment, bUsesPhysicsProxy)
		DOREPLIFETIME(AMordhauEquipment, bOnlyPeasants)
		DOREPLIFETIME(AMordhauEquipment, bIsAllowedForPeasants)
		DOREPLIFETIME(AMordhauEquipment, CharacterPointCost)
		DOREPLIFETIME(AMordhauEquipment, CullDistanceHeld)
		DOREPLIFETIME(AMordhauEquipment, CullDistanceNotHeld)
		DOREPLIFETIME(AMordhauEquipment, CullDistanceAuxiliaryHeld)
		DOREPLIFETIME(AMordhauEquipment, CullDistanceAuxiliaryNotHeld)
		DOREPLIFETIME(AMordhauEquipment, bForceInstantMeshUpdate)
		DOREPLIFETIME(AMordhauEquipment, bForceMipStreaming)
		DOREPLIFETIME(AMordhauEquipment, bForceMaxLOD)
		DOREPLIFETIME(AMordhauEquipment, bPartsUseAuxiliaryMesh)
		DOREPLIFETIME(AMordhauEquipment, MaxAmmo)
		DOREPLIFETIME(AMordhauEquipment, MaxAmmoWithoutQuiver)
		DOREPLIFETIME(AMordhauEquipment, LastAmmo)
		DOREPLIFETIME(AMordhauEquipment, bDestroyIfNoAmmo)
		DOREPLIFETIME(AMordhauEquipment, bPreventsClimbing)
		DOREPLIFETIME(AMordhauEquipment, BackpedalSpeedFactorEquipped)
		DOREPLIFETIME(AMordhauEquipment, SpeedBonusPercentageEquipped)
		DOREPLIFETIME(AMordhauEquipment, AccelerationBonusPercentageEquipped)
		DOREPLIFETIME(AMordhauEquipment, SpeedBonusPercentageHolstered)
		DOREPLIFETIME(AMordhauEquipment, AccelerationBonusPercentageHolstered)
		DOREPLIFETIME(AMordhauEquipment, bHasColors)
		DOREPLIFETIME(AMordhauEquipment, bHasPartsId)
		DOREPLIFETIME(AMordhauEquipment, bHasSkin)
		DOREPLIFETIME(AMordhauEquipment, bHasEmblem)
		DOREPLIFETIME(AMordhauEquipment, bHasEmblemColors)
		DOREPLIFETIME(AMordhauEquipment, bHasPattern)
		DOREPLIFETIME(AMordhauEquipment, bUsesOffhandIK)
		DOREPLIFETIME(AMordhauEquipment, bInvertOffhandUp)
		DOREPLIFETIME(AMordhauEquipment, bSecondInvertOffhandUp)
		DOREPLIFETIME(AMordhauEquipment, bSecondUsesOffhandIK)
		DOREPLIFETIME(AMordhauEquipment, OffhandIKUpOffset)
		DOREPLIFETIME(AMordhauEquipment, OffhandIKUpOffset1P)
		DOREPLIFETIME(AMordhauEquipment, SecondOffhandIKUpOffset)
		DOREPLIFETIME(AMordhauEquipment, SecondOffhandIKUpOffset1P)
		DOREPLIFETIME(AMordhauEquipment, RightHandEquipOffset)
		DOREPLIFETIME(AMordhauEquipment, RightWeaponBoneCosmeticTransform)
		DOREPLIFETIME(AMordhauEquipment, RightWeaponBoneCosmeticTransform1P)
		DOREPLIFETIME(AMordhauEquipment, SecondRightWeaponBoneCosmeticTransform)
		DOREPLIFETIME(AMordhauEquipment, SecondRightWeaponBoneCosmeticTransform1P)
		DOREPLIFETIME(AMordhauEquipment, RotationOffset)
		DOREPLIFETIME(AMordhauEquipment, SecondRotationOffset)
		DOREPLIFETIME(AMordhauEquipment, GripLocationLocal)
		DOREPLIFETIME(AMordhauEquipment, SecondGripLocationLocal)
		DOREPLIFETIME(AMordhauEquipment, bCanHolster)
		DOREPLIFETIME(AMordhauEquipment, bCanEquipOnHorse)
		DOREPLIFETIME(AMordhauEquipment, bCanEquipOnLadder)
		DOREPLIFETIME(AMordhauEquipment, bSecondCanEquipOnHorse)
		DOREPLIFETIME(AMordhauEquipment, bSecondCanEquipOnLadder)
		DOREPLIFETIME(AMordhauEquipment, bAlwaysDestroyOnDeath)
		DOREPLIFETIME(AMordhauEquipment, bDeferDestroyUntilRagdoll)
		DOREPLIFETIME(AMordhauEquipment, RagdollStayTime)
		DOREPLIFETIME(AMordhauEquipment, bAllowDrop)
		DOREPLIFETIME(AMordhauEquipment, bCanAttack)
		DOREPLIFETIME(AMordhauEquipment, bCanAttackOnFoot)
		DOREPLIFETIME(AMordhauEquipment, bCanAttackOnHorseback)
		DOREPLIFETIME(AMordhauEquipment, bAllowFire)
		DOREPLIFETIME(AMordhauEquipment, bFireThrowsEquipment)
		DOREPLIFETIME(AMordhauEquipment, ExtraSwitchTime)
		DOREPLIFETIME(AMordhauEquipment, bRangedReleasePlaysAttackYell)
		DOREPLIFETIME(AMordhauEquipment, bUsesRangedCamera)
		DOREPLIFETIME(AMordhauEquipment, bAllowHoldDraw)
		DOREPLIFETIME(AMordhauEquipment, bAllowCancelDraw)
		DOREPLIFETIME(AMordhauEquipment, MaxHoldDrawTime)
		DOREPLIFETIME(AMordhauEquipment, SecondRightWeaponBoneCosmeticTransform1P)
		DOREPLIFETIME(AMordhauEquipment, RotationOffset)
		DOREPLIFETIME(AMordhauEquipment, SecondRotationOffset)
		DOREPLIFETIME(AMordhauEquipment, GripLocationLocal)
		DOREPLIFETIME(AMordhauEquipment, SecondGripLocationLocal)
		DOREPLIFETIME(AMordhauEquipment, bCanHolster)
		DOREPLIFETIME(AMordhauEquipment, bCanEquipOnHorse)
		DOREPLIFETIME(AMordhauEquipment, bCanEquipOnLadder)
		DOREPLIFETIME(AMordhauEquipment, bSecondCanEquipOnHorse)
		DOREPLIFETIME(AMordhauEquipment, bSecondCanEquipOnLadder)
		DOREPLIFETIME(AMordhauEquipment, RangedDrawSpeedFactor)
		DOREPLIFETIME(AMordhauEquipment, RangedDrawSpeedFactorWithRangerPerk)
		DOREPLIFETIME(AMordhauEquipment, RangedDrawTurnCaps)
		DOREPLIFETIME(AMordhauEquipment, bDoNotFireAfterMaxHoldDrawTime)
		DOREPLIFETIME(AMordhauEquipment, bQuickthrowOnly)
		DOREPLIFETIME(AMordhauEquipment, ForceAppliedOnDrop)
		DOREPLIFETIME(AMordhauEquipment, bAllowCleanup)
		DOREPLIFETIME(AMordhauEquipment, RangedDrawTime)
		DOREPLIFETIME(AMordhauEquipment, RangedCancelTime)
		DOREPLIFETIME(AMordhauEquipment, RangedReleaseTime)
		DOREPLIFETIME(AMordhauEquipment, RangedReleaseCameraShake)
		DOREPLIFETIME(AMordhauEquipment, RangedReloadTime)
		DOREPLIFETIME(AMordhauEquipment, RangedReloadTurnCaps)
		DOREPLIFETIME(AMordhauEquipment, RangedReloadGrabAmmoNormTime)
		DOREPLIFETIME(AMordhauEquipment, RangedReloadFinishReloadNormTime)
		DOREPLIFETIME(AMordhauEquipment, AutoReloadTime)
		DOREPLIFETIME(AMordhauEquipment, AutoReloadTimeSpent)
		DOREPLIFETIME(AMordhauEquipment, bCanReload)
		DOREPLIFETIME(AMordhauEquipment, bUnloadOnUnequip)
		DOREPLIFETIME(AMordhauEquipment, bLoadOnUnequip)
		DOREPLIFETIME(AMordhauEquipment, bIsLoaded)
		DOREPLIFETIME(AMordhauEquipment, bHiddenWhenUnloaded)
		DOREPLIFETIME(AMordhauEquipment, bIsUsingAlternateMode)
		DOREPLIFETIME(AMordhauEquipment, bHasAlternateMode)
		DOREPLIFETIME(AMordhauEquipment, bRevertModeOnUnequip)
		DOREPLIFETIME(AMordhauEquipment, bRevertModeOnDrop)
}

void AMordhauEquipment::AssignCustomization(const FEquipmentCustomization& Customization, uint8 CustomizationEmblem, uint8 CustomizationEmblemColor1, uint8 CustomizationEmblemColor2)
{}
void AMordhauEquipment::UpdateMaterial(class USkeletalMeshComponent* SkeletalMeshComp)
{
}
void AMordhauEquipment::UpdateInteractionCollision()
{
}
//void AMordhauEquipment::UpdateEquipmentVisualState()
//{
//
//}
//void AMordhauEquipment::UpdateEquipmentState()
//{
//
//}
void AMordhauEquipment::SwitchMode()
{
}
//void AMordhauEquipment::StopThrownTrail()
//{
//
//}
//void AMordhauEquipment::StartThrownTrail()
//{
//
//}
bool AMordhauEquipment::ShouldShine_Implementation()
{
	return 1;
}
void AMordhauEquipment::SetPartsUseAuxiliaryMesh(bool bNewValue)
{
}
void AMordhauEquipment::SetParts(TArray<uint8> NewPartsId, bool bRebuild)
{
}
void AMordhauEquipment::SetLoaded(bool bNewLoaded)
{
}
void AMordhauEquipment::SetColors(TArray<uint8> NewColors)
{
}
void AMordhauEquipment::SetAmmo(uint8 NewAmmo)
{
}
bool AMordhauEquipment::RestockOtherEquipmentOnCharacter(class AMordhauCharacter* Character)
{
	return 1;
}
void AMordhauEquipment::ResetMeshRelativeTransform()
{
}
void AMordhauEquipment::RebuildIfAll()
{
}
void AMordhauEquipment::RebuildEquipment(bool bDoOnlyQuickJob)
{
}
void AMordhauEquipment::LocalPlayerTick(float DeltaTime)
{
}
//void AMordhauEquipment::LocalPlayerLateTick(float DeltaTime)
//{
//
//}
void AMordhauEquipment::LateTick(float DeltaSeconds)
{
}
uint8 AMordhauEquipment::GetCurrentMaxAmmo()
{
	return 1;
}
uint8 AMordhauEquipment::GetAmmo()
{
	return 1;
}
//void AMordhauEquipment::FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay)
//{
//
//}
void AMordhauEquipment::EquipmentCommand_Implementation(int Command)
{
}
void AMordhauEquipment::DestroyPhysicsProxy()
{
}
bool AMordhauEquipment::BelongsToCharacter()
{
	return 1;
}
//void AMordhauEquipment::AssignCustomizationToProjectile(class AMordhauProjectile* Projectile)
//{
//
//}
/*void AMordhauEquipment::AssignCustomization(const struct FEquipmentCustomization& Customization, uint8 CustomizationEmblem, uint8 CustomizationEmblemColor1, uint8 CustomizationEmblemColor2)
{
}*/
void AMordhauEquipment::RequestAttack_Implementation(EAttackMove Move, float Angle)
{}
bool AMordhauEquipment::CanPerformAttack(class AMordhauCharacter* Character, EAttackMove Move)
{
	return 1;
}
class AMordhauCharacter* AMordhauEquipment::GetParentCharacter()
{
	return nullptr;
}

bool AMordhauEquipment::OnRequestModeSwitch_Implementation(class AMordhauCharacter* Character)
{
	return 1;
}
bool AMordhauEquipment::OnRequestFire_Implementation(class AMordhauCharacter* Character)
{
	return 1;
}
void AMordhauEquipment::OnRep_Skin_Implementation()
{
}
void AMordhauEquipment::OnRep_Pattern_Implementation()
{
}
void AMordhauEquipment::OnRep_PartsId_Implementation()
{
}
void AMordhauEquipment::OnRep_EmblemColors_Implementation()
{
}
void AMordhauEquipment::OnRep_Emblem_Implementation()
{
}
void AMordhauEquipment::OnRep_Colors_Implementation()
{
}
void AMordhauEquipment::OnRep_IsUsingAlternateMode_Implementation()
{
}
void AMordhauEquipment::OnRep_IsLoaded_Implementation()
{
}
void AMordhauEquipment::OnRep_Ammo_Implementation()
{
}
void AMordhauEquipment::OnPickedUp_Implementation(class AMordhauCharacter* Character)
{
}
void AMordhauEquipment::OnPartsChanged_Implementation()
{
}
void AMordhauEquipment::OnLoadedChanged_Implementation()
{
}
void AMordhauEquipment::OnHolsteredOrDropped_Implementation(class AMordhauCharacter* Character)
{
}
void AMordhauEquipment::OnHolstered_Implementation(class AMordhauCharacter* Character)
{
}
void AMordhauEquipment::OnEquipped_Implementation(class AMordhauCharacter* Character)
{
}
void AMordhauEquipment::OnDropped_Implementation(class AMordhauCharacter* Character)
{
}
void AMordhauEquipment::OnAmmoChanged_Implementation()
{
}

FEquipmentCustomization AMordhauEquipment::GetRandomCustomization(bool bOnlyColors)
{
	return FEquipmentCustomization();
}