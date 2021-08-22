// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauWeapon.h"
#include "UnrealNetwork.h"

void AMordhauWeapon::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
};


void AMordhauWeapon::UpdateTrail(float Weight)
{}
bool AMordhauWeapon::RequestBlock_Implementation(EBlockType BlockType, bool bAllowFTP)
{
	return 1;
}
void AMordhauWeapon::OnWasBlocked_Implementation(EBlockedReason Reason, EAttackMove Move, uint8 SurfaceType)
{}
void AMordhauWeapon::OnHit_Implementation(class AActor* Actor, EAttackMove Move, const FName& bone, const struct FVector& WorldLocation, uint8 Tier, uint8 SurfaceType)
{}
void AMordhauWeapon::OnCosmeticHit_Implementation(EAttackMove Move, const struct FHitResult& Hit)
{}
void AMordhauWeapon::OnBlockStarted_Implementation(EBlockType Type)
{}
void AMordhauWeapon::OnBlocked_Implementation(EBlockedReason Reason, EAttackMove Move)
{}
void AMordhauWeapon::OnAttackStopped_Implementation()
{}
void AMordhauWeapon::OnAttackStarted_Implementation(EAttackMove Move, float Angle)
{}
void AMordhauWeapon::IncreaseBloodLevel(float Amount)
{}
void AMordhauWeapon::GetBaseAttackInfo(FAttackInfo& atkInfo, EAttackMove Move)
{}