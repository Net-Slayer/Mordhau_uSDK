// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauVehicle.h"
#include "CharacterMeshComponent.h"




AMordhauVehicle::AMordhauVehicle(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer
		.SetDefaultSubobjectClass<UCharacterMeshComponent>(TEXT("CharacterMesh0"))){}



void AMordhauVehicle::UpdateFPCameraFor_Implementation(class AMordhauCharacter* Character, float DeltaSeconds, bool bRotationOnly)
{

}
//void AMordhauVehicle::UpdateAnimationFor_Implementation(class AMordhauCharacter* Character, class UMordhauAnimInstance* AnimInst, float DeltaTime)
//{}
void AMordhauVehicle::KnockOffDriver_Implementation(class AMordhauCharacter* Character)
{

}


FTransform AMordhauVehicle::GetExitTransform_Implementation()
{
	return FTransform();
}
void AMordhauVehicle::DriverLateTick_Implementation(class AMordhauCharacter* FromDriver, float DeltaTime)
{

}

void AMordhauVehicle::RequestUse_Implementation()
{

}


/*void AMordhauVehicle::PostProcessCameraPOV_Implementation(const struct FPOV& InPOV)
{

}*/




float AMordhauVehicle::OverrideAttackAngle_Implementation(class UAttackMotion* Motion)
{
	return 1;
}
void AMordhauVehicle::OnStoppedDriving_Implementation(class AMordhauCharacter* Character)
{

}
void AMordhauVehicle::OnStartedDriving_Implementation(class AMordhauCharacter* Character)
{

}
void AMordhauVehicle::SetDriver_Implementation(class AMordhauCharacter* NewDriver)
{

}


void AMordhauVehicle::StopDriving()
{}
void AMordhauVehicle::StartDriving(class AMordhauCharacter* Character)
{}
void AMordhauVehicle::ServerSecondaryTurn(float NewTurn)
{}
void AMordhauVehicle::SecondaryTurnAtRate(float Value)
{}
void AMordhauVehicle::SecondaryTurn(float Value, bool bIsAbsolute)
{}
void AMordhauVehicle::OnRep_SecondaryTurnValue()
{}

FVehicleTransitionInfo AMordhauVehicle::GetVehicleLeaveInfo_Implementation(AMordhauCharacter * Character, const struct FTransform& FromTransform)
{
	return FVehicleTransitionInfo();
}

FVehicleTransitionInfo AMordhauVehicle::GetVehicleEnterInfo_Implementation(AMordhauCharacter * Character, const struct FTransform& FromTransform)
{
	return FVehicleTransitionInfo();
}

void AMordhauVehicle::OnDriverChanged_Implementation()
{
}
