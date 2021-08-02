// Fill out your copyright notice in the Description page of Project Settings.
#include "MordhauCharacter.h"
#include "MordhauMovementComponent.h"
#include "HumanMeshComponent.h"
#include "MordhauCapsuleComponent.h"
#include "UnrealNetwork.h"

AMordhauCharacter::AMordhauCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer
		.SetDefaultSubobjectClass<UMordhauMovementComponent>(ACharacter::CharacterMovementComponentName)
		.SetDefaultSubobjectClass<UHumanMeshComponent>(ACharacter::MeshComponentName)
		.SetDefaultSubobjectClass<UMordhauCapsuleComponent>(ACharacter::CapsuleComponentName))
{

	FaceCustomizationComponent = CreateDefaultSubobject<UFaceCustomizationComponent>(TEXT("FaceCustomizationComponent"));
}

void AMordhauCharacter::AssignNetBlock(const FBlockResult & BlockResult, EAttackMove BlockedMove, AActor * Weapon)
{
}

void AMordhauCharacter::AssignNetMotionSimple(uint8 MotionType, uint8 Param0, uint8 Param1, uint8 Param2)
{
}

void AMordhauCharacter::AssignProfile(const FCharacterProfile & NewProfile)
{
}

void AMordhauCharacter::BakeFaceCustomizationTransforms(bool bDeferBake)
{
}

void AMordhauCharacter::BlockPressed()
{
}

void AMordhauCharacter::BlockReleased()
{
}


bool AMordhauCharacter::CanAccomodate(UClass * EquipmentToTest)
{
	return false;
}

bool AMordhauCharacter::CanDismember(const FName & bone)
{
	return false;
}

bool AMordhauCharacter::CanEasyParry()
{
	return false;
}

bool AMordhauCharacter::CanEmote()
{
	return false;
}

bool AMordhauCharacter::CanInitiateMotion(UClass * NewMotion, bool bAttemptCancel)
{
	return false;
}

bool AMordhauCharacter::CanPerformAttack(EAttackMove Move)
{
	return false;
}

bool AMordhauCharacter::CheckCanEquip(AMordhauEquipment * Equip)
{
	return false;
}

bool AMordhauCharacter::CheckCanEquipAlt(AMordhauEquipment * Equip)
{
	return false;
}

void AMordhauCharacter::ClientSetNetMotion(const FNetMotion & NewMotion, float ServerStartTime)
{
}

void AMordhauCharacter::CrouchPressed()
{
}

void AMordhauCharacter::CrouchReleased()
{
}

void AMordhauCharacter::CycleCamera()
{
}

void AMordhauCharacter::DisableBlockCollider()
{
}

void AMordhauCharacter::DisableLimb(const FName & BoneName)
{
}

ASeparatedBodyPart * AMordhauCharacter::Dismember(const FName & bone)
{
	return nullptr;
}

AMordhauEquipment * AMordhauCharacter::DropEquipment(AMordhauEquipment * ToDrop, bool bForce)
{
	return nullptr;
}

AMordhauEquipment * AMordhauCharacter::DropSlot(uint8 Index, bool bForce)
{
	return nullptr;
}

void AMordhauCharacter::EmptyHands()
{
}

void AMordhauCharacter::EnableBlockCollider()
{
}

void AMordhauCharacter::EnteredTeamArea(int OwningTeam)
{
}

bool AMordhauCharacter::EquipSlot(uint8 Index, bool bDisplayEquipmentList)
{
	return false;
}

void AMordhauCharacter::EquipSlot1()
{
}

void AMordhauCharacter::EquipSlot2()
{
}

void AMordhauCharacter::EquipSlot3()
{
}

void AMordhauCharacter::EquipSlot4()
{
}

void AMordhauCharacter::EquipSlot5()
{
}

void AMordhauCharacter::EquipSlot6()
{
}

void AMordhauCharacter::EquipSlot7()
{
}

void AMordhauCharacter::EquipSlot8()
{
}

void AMordhauCharacter::EquipSlot9()
{
}

void AMordhauCharacter::FeintOrBlockPressed()
{
}

void AMordhauCharacter::FeintOrBlockReleased()
{
}

AController * AMordhauCharacter::FindBestKiller(float CutOffTime)
{
	return nullptr;
}

AMordhauEquipment * AMordhauCharacter::FindEquipmentToRestock(TArray<class UClass*> ValidEquipment)
{
	return nullptr;
}

void AMordhauCharacter::FirePressed()
{
}

void AMordhauCharacter::FireReleased()
{
}

void AMordhauCharacter::FlipAttackSidePressed()
{
}

void AMordhauCharacter::FlipAttackSideReleased()
{
}

void AMordhauCharacter::ForceUpdateMeshVisibility()
{
}

void AMordhauCharacter::FreeHandsForEquipment(AMordhauEquipment * EquipmentInstigator)
{
}

TArray<FName> AMordhauCharacter::GetAllFaceSelectionChildBonesRecursive(const FName & ParentBone)
{
	return TArray<FName>();
}

ULODSkeletalMeshComponent * AMordhauCharacter::GetClothMesh()
{
	return nullptr;
}

FNetMotion AMordhauCharacter::GetCurrentNetMotion()
{
	return FNetMotion();
}

ACustomizationReplicationActor * AMordhauCharacter::GetCustomizationReplicationActor()
{
	return nullptr;
}

bool AMordhauCharacter::GetEquipmentIndex(AMordhauEquipment * Equip, uint8 & OutIndex)
{
	return false;
}

int AMordhauCharacter::GetFaceCustomizationBoneIdx(const FName & BoneName)
{
	return 0;
}

FVector AMordhauCharacter::GetFaceCustomizationRotate(const FName & BoneName)
{
	return FVector();
}

FVector AMordhauCharacter::GetFaceCustomizationScale(const FName & BoneName)
{
	return FVector();
}

FTransform AMordhauCharacter::GetFaceCustomizationTransform(const FName & BoneName)
{
	return FTransform();
}

FVector AMordhauCharacter::GetFaceCustomizationTranslate(const FName & BoneName)
{
	return FVector();
}

AActor * AMordhauCharacter::GetLastMovementFrontalHitActor(float MaxAgeSeconds)
{
	return nullptr;
}

AMordhauVehicle * AMordhauCharacter::GetLastUsedVehicle(float MaximumTimeDiscrepancy)
{
	return nullptr;
}

float AMordhauCharacter::GetLastVehicleTime()
{
	return 0.0f;
}

UAudioComponent * AMordhauCharacter::GetLastVoiceCommand()
{
	return nullptr;
}

EMovementRestriction AMordhauCharacter::GetMovementRestriction()
{
	return EMovementRestriction();
}

bool AMordhauCharacter::HasEquipmentHeSpawnedWith()
{
	return false;
}

bool AMordhauCharacter::HasPerk(uint8 PerkId)
{
	return false;
}

void AMordhauCharacter::Holster(AMordhauEquipment * ToHolster)
{
}

bool AMordhauCharacter::IsArm(const FName & bone)
{
	return false;
}

bool AMordhauCharacter::IsBoneDismembered(const FName & bone)
{
	return false;
}

bool AMordhauCharacter::IsHead(const FName & bone)
{
	return false;
}

bool AMordhauCharacter::IsHoldingBlock()
{
	return false;
}

bool AMordhauCharacter::IsInAnyTeamArea()
{
	return false;
}

bool AMordhauCharacter::IsInEnemyTeamArea()
{
	return false;
}

bool AMordhauCharacter::IsInKnockback()
{
	return false;
}

bool AMordhauCharacter::IsLeftArm(const FName & bone)
{
	return false;
}

bool AMordhauCharacter::IsLeftLeg(const FName & bone)
{
	return false;
}

bool AMordhauCharacter::IsLeg(const FName & bone)
{
	return false;
}

bool AMordhauCharacter::IsRightArm(const FName & bone)
{
	return false;
}

bool AMordhauCharacter::IsRightLeg(const FName & bone)
{
	return false;
}

void AMordhauCharacter::JumpPressed()
{
}

void AMordhauCharacter::JumpReleased()
{
}

void AMordhauCharacter::LeftTeamArea(int OwningTeam)
{
}

void AMordhauCharacter::ListenForStab360()
{
}

void AMordhauCharacter::ListenForStrike360()
{
}



void AMordhauCharacter::NextEquipmentPressed()
{
}

void AMordhauCharacter::NextEquipmentReleased()
{
}

void AMordhauCharacter::NextShieldEquipment()
{
}

void AMordhauCharacter::OffsetStamina(int Amount, bool bReplicate)
{
}

void AMordhauCharacter::OnActionFailed(const FName & Reason)
{
}








void AMordhauCharacter::OnRep_LeftHandEquipment()
{
}

void AMordhauCharacter::OnRep_NetBlock()
{
}

void AMordhauCharacter::OnRep_Quiver()
{
}

void AMordhauCharacter::OnRep_ReplicatedCustomizationReplicationActor()
{
}

void AMordhauCharacter::OnRep_ReplicatedDodge()
{
}

void AMordhauCharacter::OnRep_ReplicatedKnockback()
{
}

void AMordhauCharacter::OnRep_ReplicatedNetMotion()
{
}

void AMordhauCharacter::OnRep_ReplicatedStamina()
{
}

void AMordhauCharacter::OnRep_ReplicatedVoiceCommand()
{
}

void AMordhauCharacter::OnRep_RightHandEquipment()
{
}

bool AMordhauCharacter::PerformVoiceCommand(uint8 PackedVoiceCommand)
{
	return false;
}

bool AMordhauCharacter::PickUp(AMordhauEquipment * ToEquip, int PreferredSlot)
{
	return false;
}

bool AMordhauCharacter::PickUpToSlot(AMordhauEquipment * ToEquip, uint8 Slot)
{
	return false;
}

void AMordhauCharacter::PlayAttackYell()
{
}

void AMordhauCharacter::PlayDeathYell(bool bIsLongYell)
{
}

void AMordhauCharacter::PlayHurtYell()
{
}

UAudioComponent * AMordhauCharacter::PlayMouthSound(USoundBase * Sound, float VolumeMultiplier)
{
	return nullptr;
}

UAudioComponent * AMordhauCharacter::PlayNonSnappyArmorFoley()
{
	return nullptr;
}

UAudioComponent * AMordhauCharacter::PlaySnappyArmorFoley()
{
	return nullptr;
}

void AMordhauCharacter::PreviousEquipment()
{
}

void AMordhauCharacter::PreviousEquipmentPressed()
{
}

void AMordhauCharacter::PreviousEquipmentReleased()
{
}

void AMordhauCharacter::PreviousShieldEquipment()
{
}

bool AMordhauCharacter::QueueDismember(const FName & bone, bool bIsDismemberPartial, bool bIsBluntForce, const FVector & Force, AActor * Agent)
{
	return false;
}

void AMordhauCharacter::RequestAttack(EAttackMove Move, float Angle)
{
}

void AMordhauCharacter::RequestBash()
{
}

void AMordhauCharacter::RequestClimb(const FVector & TargetLocation, bool bIsSlowClimb)
{
}

void AMordhauCharacter::RequestCouchedAttack()
{
}

void AMordhauCharacter::RequestDrop()
{
}

void AMordhauCharacter::RequestEmote(uint8 EmoteId)
{
}

void AMordhauCharacter::RequestFeint()
{
}

void AMordhauCharacter::RequestFire()
{
}

void AMordhauCharacter::RequestHolster(uint8 Mode)
{
}

void AMordhauCharacter::RequestJump()
{
}

void AMordhauCharacter::RequestKick()
{
}

void AMordhauCharacter::RequestLeftLowerStrike()
{
}

void AMordhauCharacter::RequestLeftStab()
{
}

void AMordhauCharacter::RequestLeftStrike()
{
}

void AMordhauCharacter::RequestLeftUpperStrike()
{
}

bool AMordhauCharacter::RequestParry(EBlockType BlockType, bool bAllowFTP)
{
	return false;
}

void AMordhauCharacter::RequestRangedCancel()
{
}

void AMordhauCharacter::RequestRightLowerStrike()
{
}

void AMordhauCharacter::RequestRightStab()
{
}

void AMordhauCharacter::RequestRightStrike()
{
}

void AMordhauCharacter::RequestRightUpperStrike()
{
}

void AMordhauCharacter::RequestStab360()
{
}

void AMordhauCharacter::RequestStrike360()
{
}

void AMordhauCharacter::RequestToggleWeaponMode()
{
}

void AMordhauCharacter::RequestUse()
{
}

void AMordhauCharacter::RequestVoiceCommand(uint8 CommandType, bool bAllowQueue)
{
}

TArray<class AMordhauEquipment*> AMordhauCharacter::RestockDefaultEquipment(int MaxSlotsToRestock)
{
	return TArray<class AMordhauEquipment*>();
}

bool AMordhauCharacter::RestockEquipmentFromAmmoBox()
{
	return false;
}

void AMordhauCharacter::ReweightSkinning(int BoneFrom, int BoneTo, bool bIncludeChildren, const FVector & ExceptNearThisPoint, float Radius, const FName & NearPointBone)
{
}

void AMordhauCharacter::ServerAssignFireAim(const FVector & Orig, const FRotator & Rot)
{
}

void AMordhauCharacter::ServerAssignNetMotion(const FNetMotion & NewNetMotion, uint8 LastAuthObserved)
{
}

void AMordhauCharacter::ServerDropParry(uint8 MotionID)
{
}

void AMordhauCharacter::ServerFinishInteraction(uint8 Result)
{
}

void AMordhauCharacter::ServerQueueAttack(EAttackMove Move, uint8 Angle, uint8 MotionID)
{
}

void AMordhauCharacter::ServerRequestDodge(uint8 PackedWorldYaw)
{
}

void AMordhauCharacter::ServerRequestPassiveInteraction(AActor * Target)
{
}

void AMordhauCharacter::ServerRequestVoiceCommand(uint8 VoiceRequest)
{
}

void AMordhauCharacter::ServerSetInteractionTarget(AActor * Target)
{
}

void AMordhauCharacter::ServerSuggestHitDetection(AAdvancedCharacter * OtherCharacter, const FVector_NetQuantize & HitLocation, uint8 BoneId)
{
}

void AMordhauCharacter::SetCameraStyle(uint8 NewStyle, bool bBlendCamera)
{
}

void AMordhauCharacter::SetCurrentlyTracking(AActor * NewTrackingTarget)
{
}

void AMordhauCharacter::SetCustomizationReplicationActor(ACustomizationReplicationActor * CRA)
{
}

void AMordhauCharacter::SetFaceCustomizationRotate(const FName & BoneName, const FVector & Vector)
{
}

void AMordhauCharacter::SetFaceCustomizationScale(const FName & BoneName, const FVector & Vector)
{
}

void AMordhauCharacter::SetFaceCustomizationTranslate(const FName & BoneName, const FVector & Vector)
{
}

void AMordhauCharacter::SetQuiver(UClass * NewQuiver)
{
}

void AMordhauCharacter::ShowEquipmentIfViewTarget()
{
}



void AMordhauCharacter::SprintReleased()
{
}

void AMordhauCharacter::StartCrouching()
{
}

void AMordhauCharacter::StartScreaming()
{
}

void AMordhauCharacter::StartSprinting()
{
}

void AMordhauCharacter::StartSupersprint()
{
}

void AMordhauCharacter::StopAttackYell()
{
}

void AMordhauCharacter::StopCrouching()
{
}

void AMordhauCharacter::StopCurrentVoiceCommand()
{
}

void AMordhauCharacter::StopListenForStab360()
{
}

void AMordhauCharacter::StopListenForStrike360()
{
}

void AMordhauCharacter::StopScreaming()
{
}

void AMordhauCharacter::StopSprinting()
{
}

void AMordhauCharacter::StopStaminaRegen(float ExtraTime)
{
}

void AMordhauCharacter::StopSupersprint()
{
}

void AMordhauCharacter::SwitchEquipment(AMordhauEquipment * ToSwitch)
{
}

void AMordhauCharacter::SwitchEquipmentByIndex(uint8 Index)
{
}

void AMordhauCharacter::SwitchModeAndReAttach(AMordhauEquipment * ToSwitch)
{
}

void AMordhauCharacter::SwitchToFists()
{
}

void AMordhauCharacter::ToggleWeaponModePressed()
{
}

void AMordhauCharacter::ToggleWeaponModeReleased()
{
}



void AMordhauCharacter::UpdateAllSkeletalMeshComponentMaterials()
{
}

void AMordhauCharacter::UpdateFPCamera(float DeltaSeconds, float InLookUpValue, bool bOnlyUpdateRotation, const FRotator & Offset)
{
}

void AMordhauCharacter::UpdateLOD(float DeltaTime)
{
}

void AMordhauCharacter::UpdateWearableInstanceColorsAndPatterns()
{
}

void AMordhauCharacter::UsePressed()
{
}

void AMordhauCharacter::UseReleased()
{
}

bool AMordhauCharacter::ValidateInteractionTarget(AActor * TargetActor)
{
	return false;
}