// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauMovementComponent.h"
#include "UnrealNetwork.h"

void UMordhauMovementComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UMordhauMovementComponent, ChasingSprintTimeStart)
	DOREPLIFETIME(UMordhauMovementComponent, RushSprintTimeStart)
	DOREPLIFETIME(UMordhauMovementComponent, BeingChasedSlowdownTimeFactor)
	DOREPLIFETIME(UMordhauMovementComponent, MaxAngleToChase)
	DOREPLIFETIME(UMordhauMovementComponent, TimeToBreakUsChasing)
	DOREPLIFETIME(UMordhauMovementComponent, TimeToBreakUsBeingChased)
	DOREPLIFETIME(UMordhauMovementComponent, MinTimeToStartChasing)
	DOREPLIFETIME(UMordhauMovementComponent, MinTimeToStartBeingChased)
	DOREPLIFETIME(UMordhauMovementComponent, MaxWalkSpeedCrouchedWithRatPerk)
	DOREPLIFETIME(UMordhauMovementComponent, SprintModifier)
	DOREPLIFETIME(UMordhauMovementComponent, PartialSprintModifier)
	DOREPLIFETIME(UMordhauMovementComponent, SupersprintModifier)
	DOREPLIFETIME(UMordhauMovementComponent, BackpedalModifier)
	DOREPLIFETIME(UMordhauMovementComponent, StrafeModifier)
	DOREPLIFETIME(UMordhauMovementComponent, WalkAcceleration)
	DOREPLIFETIME(UMordhauMovementComponent, PartialSprintAcceleration)
	DOREPLIFETIME(UMordhauMovementComponent, SprintAcceleration)
	DOREPLIFETIME(UMordhauMovementComponent, SprintTimeToReachMaxSprint)
	DOREPLIFETIME(UMordhauMovementComponent, SprintTime)
	DOREPLIFETIME(UMordhauMovementComponent, SupersprintAcceleration)
	DOREPLIFETIME(UMordhauMovementComponent, MotionSpeedFactor)
	DOREPLIFETIME(UMordhauMovementComponent, EquipmentBackpedalSpeedFactor)
	DOREPLIFETIME(UMordhauMovementComponent, ArmorSpeedFactor)
	DOREPLIFETIME(UMordhauMovementComponent, ArmorAccelerationFactor)
	DOREPLIFETIME(UMordhauMovementComponent, EquipmentSpeedBonusPercentage)
	DOREPLIFETIME(UMordhauMovementComponent, EquipmentAccelerationBonusPercentage)
	DOREPLIFETIME(UMordhauMovementComponent, bWantsSprint)
	DOREPLIFETIME(UMordhauMovementComponent, bSprintIsAllowed)
	DOREPLIFETIME(UMordhauMovementComponent, bOnlyPartialSprint)
	DOREPLIFETIME(UMordhauMovementComponent, bWantsSupersprint)
	DOREPLIFETIME(UMordhauMovementComponent, MaxSpeedFalling)
	DOREPLIFETIME(UMordhauMovementComponent, KnockbackDuration)

}


void UMordhauMovementComponent::Knockback(const struct FVector& Amount)
{}
bool UMordhauMovementComponent::IsInKnockback()
{
	return 1;
}
float UMordhauMovementComponent::GetSpeedFactor()
{
	return 1;
}
float UMordhauMovementComponent::GetAccelerationFactor()
{
	return 1;
}