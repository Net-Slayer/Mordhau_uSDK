// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauMotion.h"
#include "Net/UnrealNetwork.h"

void UMordhauMotion::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
		DOREPLIFETIME(UMordhauMotion, StartRealTime)
		DOREPLIFETIME(UMordhauMotion, StartRealTime)
		DOREPLIFETIME(UMordhauMotion, ComingFromMotion)
		DOREPLIFETIME(UMordhauMotion, bDisablesDodge)
		DOREPLIFETIME(UMordhauMotion, TurncapModifier)
		DOREPLIFETIME(UMordhauMotion, ExpectedDelay)
		DOREPLIFETIME(UMordhauMotion, StartTime)
		DOREPLIFETIME(UMordhauMotion, EndTime)
		DOREPLIFETIME(UMordhauMotion, LeaveTime)
		DOREPLIFETIME(UMordhauMotion, bInitiatedLocally)
		DOREPLIFETIME(UMordhauMotion, bWasConfirmedByAuthority)
		DOREPLIFETIME(UMordhauMotion, ConfirmedByAuthorityTime)
		DOREPLIFETIME(UMordhauMotion, bIsFlinchable)
		DOREPLIFETIME(UMordhauMotion, MovementRestriction)
		DOREPLIFETIME(UMordhauMotion, SpeedFactor)
		DOREPLIFETIME(UMordhauMotion, BackpedalSpeedFactor)
		DOREPLIFETIME(UMordhauMotion, bCanEmote)
		DOREPLIFETIME(UMordhauMotion, bCanAttack)
		DOREPLIFETIME(UMordhauMotion, bCanBlock)
		DOREPLIFETIME(UMordhauMotion, bDisablesAtmospherics)
		DOREPLIFETIME(UMordhauMotion, bRequires3PArmsSync)
		DOREPLIFETIME(UMordhauMotion, bDisablesCosmeticWeaponTransform)
		DOREPLIFETIME(UMordhauMotion, bDisablesOffhandIK)
		DOREPLIFETIME(UMordhauMotion, bDisablesChaseMechanic)
		DOREPLIFETIME(UMordhauMotion, bForcesOffhandIK)
		DOREPLIFETIME(UMordhauMotion, bOffhandIsRightHand)
		DOREPLIFETIME(UMordhauMotion, OffhandIKChangeSpeed)
		DOREPLIFETIME(UMordhauMotion, CosmeticTransformChangeSpeed)
		DOREPLIFETIME(UMordhauMotion, OffhandIKDistanceMax)
		DOREPLIFETIME(UMordhauMotion, OffhandIKDistanceMin)
		DOREPLIFETIME(UMordhauMotion, bBlocksRegen)
		DOREPLIFETIME(UMordhauMotion, bAllowDedicatedServerAnimLOD)
		DOREPLIFETIME(UMordhauMotion, bUsesLeftTorsoBlend)
		DOREPLIFETIME(UMordhauMotion, LeftTorsoBlendSpeed)
		DOREPLIFETIME(UMordhauMotion, bWantsRightLegBending)
		DOREPLIFETIME(UMordhauMotion, RightLegBendingChangeSpeed)
		DOREPLIFETIME(UMordhauMotion, bWantsSlowLookSmoothing)
		DOREPLIFETIME(UMordhauMotion, LookSmoothingChangeSpeed)
}

AMordhauCharacter * UMordhauMotion::GetOwnerMordhauCharacter()
{
	return nullptr;
}

AAdvancedCharacter * UMordhauMotion::GetOwnerAdvancedCharacter()
{
	return nullptr;
}

AActor * UMordhauMotion::GetOwnerActor()
{
	return nullptr;
}

UMotionSystemComponent * UMordhauMotion::GetOwner()
{
	return nullptr;
}

bool UMordhauMotion::GetIsFirstPerson()
{
	return false;
}

bool UMordhauMotion::HasAuthority()
{
	return false;
}

UWorld * UMordhauMotion::GetWorld() const
{
	return nullptr;
}
