// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauGameSession.h"

bool AMordhauGameSession::UnmutePlayer(const FString & PlayFabId, bool bExpired)
{
	return false;
}

bool AMordhauGameSession::UnbanPlayer(const FString & PlayFabId, bool bExpired)
{
	return false;
}

void AMordhauGameSession::TriggerRewardDropForPlayer(APlayerController * Player)
{
}

void AMordhauGameSession::TriggerRewardDrop()
{
}

void AMordhauGameSession::ReportTimeLeft(TArray<float> TimeLeft)
{
}

void AMordhauGameSession::RemoveAdmin(APlayerController * AdminPlayer)
{
}

bool AMordhauGameSession::MutePlayerWithDuration(APlayerController * MutedPlayer, int MuteDuration)
{
	return false;
}

bool AMordhauGameSession::MutePlayer(APlayerController * MutedPlayer)
{
	return false;
}

bool AMordhauGameSession::KickPlayer(APlayerController * KickedPlayer, const FText & KickReason)
{
	return false;
}

bool AMordhauGameSession::IsPlayerMuted(const FString & PlayFabId)
{
	return false;
}

bool AMordhauGameSession::IsPlayerBanned(const FString & PlayFabId)
{
	return false;
}

int AMordhauGameSession::GetPlayerMuteDuration(const FString & PlayFabId)
{
	return 0;
}

int AMordhauGameSession::GetPlayerBanDuration(const FString & PlayFabId)
{
	return 0;
}

bool AMordhauGameSession::BanPlayerWithDuration(APlayerController * BannedPlayer, int BanDuration, const FText & BanReason)
{
	return false;
}

bool AMordhauGameSession::BanPlayer(APlayerController * BannedPlayer, const FText & BanReason)
{
	return false;
}

bool AMordhauGameSession::AllowsJoin()
{
	return false;
}

void AMordhauGameSession::AllowJoin(bool bInAllowJoin)
{
}

void AMordhauGameSession::AddTieredAdmin(APlayerController * AdminPlayer, const FString & Tier)
{
}

void AMordhauGameSession::AddAdmin(APlayerController * AdminPlayer)
{
}
