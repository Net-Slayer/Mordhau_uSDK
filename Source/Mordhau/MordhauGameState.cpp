// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauGameState.h"
#include "Net/UnrealNetwork.h"

//void AMordhauGameState::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
//{
//	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
//
//	// Replicate to everyone
//	//DOREPLIFETIME(AAdvancedCharacter, Health);
//	//DOREPLIFETIME(AAdvancedCharacter, ReplicatedHealth);
//	//DOREPLIFETIME(AAdvancedCharacter, NextHealthTick);
//
//	DOREPLIFETIME(AMordhauGameState, CharacterDistanceArray)
//	DOREPLIFETIME(AMordhauGameState, CharacterToDistanceArray)
//	DOREPLIFETIME(AMordhauGameState, bDisableClientStats)
//	DOREPLIFETIME(AMordhauGameState, bDisableChat)
//	DOREPLIFETIME(AMordhauGameState, bDisableScoreboard)
//	DOREPLIFETIME(AMordhauGameState, bAllowHealthRegen)
//	DOREPLIFETIME(AMordhauGameState, bDoNotLimitPlaceables)
//	DOREPLIFETIME(AMordhauGameState, bOverrideArmorSpeedAndAccelerationFactor)
//	DOREPLIFETIME(AMordhauGameState, OverrideArmorSpeedFactor)
//	DOREPLIFETIME(AMordhauGameState, OverrideArmorAccelerationFactor)
//	DOREPLIFETIME(AMordhauGameState, bAllPlayersHaveMarkers)
//	DOREPLIFETIME(AMordhauGameState, MatchDurationMax)
//	DOREPLIFETIME(AMordhauGameState, DefaultEndMatchMapChangeTime)
//	DOREPLIFETIME(AMordhauGameState, EndMatchMapChangeEnd)
//	DOREPLIFETIME(AMordhauGameState, PostMatchScreenDelay)
//	DOREPLIFETIME(AMordhauGameState, DefaultWarmupTime)
//	DOREPLIFETIME(AMordhauGameState, bSkipWarmupInDevBuild)
//	DOREPLIFETIME(AMordhauGameState, bBlockInputInWarmup)
//	DOREPLIFETIME(AMordhauGameState, MinPlayersToStart)
//	DOREPLIFETIME(AMordhauGameState, WarmupEnd)
//	DOREPLIFETIME(AMordhauGameState, bDoNotGoToNextMapOnMatchEnd)
//	DOREPLIFETIME(AMordhauGameState, bDoNotShowPostMatchScreen)
//	DOREPLIFETIME(AMordhauGameState, bAllowSpawning)
//	DOREPLIFETIME(AMordhauGameState, TeamScores)
//	DOREPLIFETIME(AMordhauGameState, bIsTeamMode)
//	DOREPLIFETIME(AMordhauGameState, bEnforceTeamColors)
//	DOREPLIFETIME(AMordhauGameState, Team1CapturePoints)
//	DOREPLIFETIME(AMordhauGameState, Team2CapturePoints)
//	DOREPLIFETIME(AMordhauGameState, Team1TopologicalProgress)
//	DOREPLIFETIME(AMordhauGameState, Team2TopologicalProgress)
//	DOREPLIFETIME(AMordhauGameState, LastBotVoiceCommandTime)
//	DOREPLIFETIME(AMordhauGameState, LastBotEmoteTime)
//	DOREPLIFETIME(AMordhauGameState, LastBotClimbTime)
//}

void AMordhauGameState::UpdateSoundGroups()
{
}

void AMordhauGameState::UpdateCapturePointData()
{
}

void AMordhauGameState::UnregisterParticleSystemActor(AParticleSystemActor * ParticleActor)
{
}

void AMordhauGameState::StoreEquipmentMeshInCache(USkeletalMesh * Mesh, int ID, uint8 Skin, uint8 Part1, uint8 Part2, uint8 Part3, bool bUseAuxiliaryMesh)
{
}

bool AMordhauGameState::ShouldTickThisFrame(AAdvancedCharacter * Character)
{
	return false;
}

bool AMordhauGameState::ShouldTickAnimationThisFrame(AAdvancedCharacter * Character)
{
	return false;
}

bool AMordhauGameState::ShouldPaintGearWithTeamColors()
{
	return false;
}

void AMordhauGameState::ReserveCharacterRagdoll(AAdvancedCharacter * Character)
{
}

void AMordhauGameState::RemoveCharacterFromDistanceArray(AAdvancedCharacter * Character)
{
}

void AMordhauGameState::RegisterParticleSystemActor(AParticleSystemActor * ParticleActor)
{
}

void AMordhauGameState::PostPhysicsTick(float DeltaTime)
{
}

void AMordhauGameState::OnReplicatedMOTD()
{
}

bool AMordhauGameState::LineTraceCharacters(const FVector & LineStart, const FVector & LineEnd, TArray<struct FHitResult>& Results)
{
	return false;
}

void AMordhauGameState::LastDemotableTick(float DeltaTime)
{
}

FLinearColor AMordhauGameState::GetSecondaryTeamColor(int Team)
{
	return FLinearColor();
}

TArray<int> AMordhauGameState::GetPlayerCountsPerTeam(bool bOnlyLiving, bool bOnlyWithValidProfiles)
{
	return TArray<int>();
}

USkeletalMesh * AMordhauGameState::GetEquipmentMeshFromCache(int ID, uint8 Skin, uint8 Part1, uint8 Part2, uint8 Part3, bool bUseAuxiliaryMesh)
{
	return nullptr;
}

int AMordhauGameState::GetCurrentFrame()
{
	return 0;
}

AAdvancedCharacter * AMordhauGameState::GetCharacterByDistanceRank(int DistanceRank)
{
	return nullptr;
}

FTransform AMordhauGameState::GetBindPoseTransform(USkeletalMesh * Mesh, const FName & SocketName)
{
	return FTransform();
}

AMapCameraActor * AMordhauGameState::GetAppropriateMapCameraActor(APlayerController * Controller)
{
	return nullptr;
}

bool AMordhauGameState::CanPlayerJoinTeam(AMordhauPlayerState * Player, int Team)
{
	return false;
}

//int64 AMordhauGameState::GetEquipmentCacheHash(int ID, uint8 Skin, uint8 Part1, uint8 Part2, uint8 Part3, bool bUseAuxiliaryMesh)
//{
//	return int64();
//}
