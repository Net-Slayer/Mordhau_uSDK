// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauGameMode.h"
#include "UnrealNetwork.h"

void AMordhauGameMode::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate to everyone
	DOREPLIFETIME(AMordhauGameMode, MapRotation) //(Edit, BlueprintVisible, ZeroConstructor, Config, GlobalConfig)
	DOREPLIFETIME(AMordhauGameMode, MOTDURL) //(BlueprintVisible, ZeroConstructor, Config, GlobalConfig)
	DOREPLIFETIME(AMordhauGameMode, bIsThirdPersonCameraDisabled) //(BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, ConstrainAspectRatio) //(BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, bIsHitStopOnTeamHitsDisabled) //(BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, bDisableClientMods) //(BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, SpawnServerActorsOnMapLoad) //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig)
	DOREPLIFETIME(AMordhauGameMode, bAllowSpawningServerActorsOnMapLoad) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, CurrentlySpawningStage) //(ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, bMatchTimeRanOut) //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, PlayerRespawnTime) //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, bUsesSlowPlayerSpawning) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, AutoKickOnTeamKillAmount) //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, bPlayersSpawnInWaves) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, bPlayersDropAllGearOnDeath) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, bEquipmentDoesNotDespawn) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, OverrideEquipmentDespawnTime) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, BallistaRespawnTime) //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, CatapultRespawnTime) //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, HorseRespawnTime) //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, MapVoteMaps) //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	DOREPLIFETIME(AMordhauGameMode, DamageFactor) //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, TeamDamageFactor) //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, TeamDamageFlinch) //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, SpawnProtectionDuration) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, bDisableDamage) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, bDisableStamina) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, bIsScoringDisabled) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, AssistScoreFactor) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, AssistDamageToCountAsKill) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, KillScoreChange) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, KillTeamScoreChange) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, TeamKillScoreChange) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, TeamKillTeamScoreChange) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, bTeamKillsDecrementKillerKills) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, bTeamKillsIncrementKilledDeaths) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, bSuicideDecrementsKills) //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	DOREPLIFETIME(AMordhauGameMode, ChatMessages) //(Edit, BlueprintVisible, ZeroConstructor)


}

bool AMordhauGameMode::ChangeLevel(const FString & LevelName)
{
	return false;
}

void AMordhauGameMode::Broadcast(AActor * Sender, const FString & Msg, const FName & Type)
{
}

void AMordhauGameMode::AddTeamScore(int Team, float Amount)
{
}

bool AMordhauGameMode::VoteLevel(APlayerController * Player, const FString & LevelName)
{
	return false;
}

void AMordhauGameMode::SetTeamScore(int Team, float Amount)
{
}

TArray<FString> AMordhauGameMode::GetNextMaps(int Count)
{
	return TArray<FString>();
}

TArray<FString> AMordhauGameMode::GetMapVoteMaps()
{
	return TArray<FString>();
}

TArray<uint8> AMordhauGameMode::GetMapVoteCounts()
{
	return TArray<uint8>();
}
