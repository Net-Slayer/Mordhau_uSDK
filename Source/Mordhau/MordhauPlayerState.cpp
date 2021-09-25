// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauPlayerState.h"
#include "Net/UnrealNetwork.h"

void AMordhauPlayerState::SetTeam(int NewTeam)
{
}

void AMordhauPlayerState::SetPlayerName(const FString & S)
{
}

void AMordhauPlayerState::OnRep_ReplicatedTeam()
{
}

void AMordhauPlayerState::OnRep_ReplicatedKills()
{
}

void AMordhauPlayerState::OnRep_ReplicatedDeathsAndFlags()
{
}

void AMordhauPlayerState::OnRep_ReplicatedAssists()
{
}

int AMordhauPlayerState::GetRank()
{
	return 0;
}

AMordhauCharacter * AMordhauPlayerState::GetLastPossessedMordhauCharacter()
{
	return nullptr;
}

void AMordhauPlayerState::BanPlayer(int BanDuration, const FString & BanReason, bool bIsOfficialServerBan, EBanType BanType)
{
}

void AMordhauPlayerState::AddScore(int Amount)
{
}

void AMordhauPlayerState::AddKills(int Amount)
{
}

void AMordhauPlayerState::AddDeaths(int Amount)
{
}

void AMordhauPlayerState::AddAssists(int Amount)
{
}

FSteamID AMordhauPlayerState::GetSteamID()
{
	return FSteamID();
}
