// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauGameInstance.h"

void UMordhauGameInstance::OnFindMordhauServerSessionByAddressSuccess(const FServerSearchResult & SearchResult)
{
}

void UMordhauGameInstance::MountMods()
{
}

bool UMordhauGameInstance::MountMod(int ModId)
{
	return false;
}

void UMordhauGameInstance::LogMatchmakingState(const FString & Message)
{
}

void UMordhauGameInstance::LeaveParty()
{
}

void UMordhauGameInstance::KickPartyMember(const FPlayFabPlayer & Player)
{
}


void UMordhauGameInstance::JoinPartyGameServer()
{
}

bool UMordhauGameInstance::IsPartyReadyForMatchmaking()
{
	return false;
}

bool UMordhauGameInstance::IsPartyMember(const FPlayFabPlayer & Player)
{
	return false;
}

bool UMordhauGameInstance::IsOfficialServerMuted()
{
	return false;
}

bool UMordhauGameInstance::IsOfficialServerBanned()
{
	return false;
}

bool UMordhauGameInstance::IsModMounted(int ModId)
{
	return false;
}

bool UMordhauGameInstance::IsGlobalServerMuted()
{
	return false;
}

bool UMordhauGameInstance::IsGlobalServerBanned()
{
	return false;
}

void UMordhauGameInstance::Init()
{
}

TMap<EServerLocation, int> UMordhauGameInstance::GetServerRegionPings(EServerRegion Region)
{
	return TMap<EServerLocation, int>();
}

TArray<EServerLocation> UMordhauGameInstance::GetServerLocationPreference(EServerRegion Region)
{
	return TArray<EServerLocation>();
}

TMap<EServerLocation, int> UMordhauGameInstance::GetServerLocationPings()
{
	return TMap<EServerLocation, int>();
}

int UMordhauGameInstance::GetServerLocationPing(EServerLocation Location)
{
	return 0;
}

TArray<FString> UMordhauGameInstance::GetProfaneWords()
{
	return TArray<FString>();
}

EPlatform UMordhauGameInstance::GetPlatform()
{
	return EPlatform();
}

EPartyState UMordhauGameInstance::GetPartyState()
{
	return EPartyState();
}

int UMordhauGameInstance::GetPartySize()
{
	return 0;
}

void UMordhauGameInstance::GetPartyServerDetails(FPlayFabServerDetails & OutServerDetails, bool & bWasSuccessful)
{
}

int UMordhauGameInstance::GetPartyMMR(const FString & GameMode)
{
	return 0;
}

FString UMordhauGameInstance::GetPartyMemberStatus(const FPlayFabPlayer & Player)
{
	return FString();
}

void UMordhauGameInstance::GetPartyMemberServerAddress(const FPlayFabPlayer & Player, FServerAddress & Address, bool & bWasSuccessful)
{
}

TArray<struct FPlayFabPlayer> UMordhauGameInstance::GetPartyMembers()
{
	return TArray<struct FPlayFabPlayer>();
}

bool UMordhauGameInstance::GetPartyMemberProfile(const FPlayFabPlayer & Player, FPlayerProfile & Profile)
{
	return false;
}

TArray<struct FPlayFabPlayerEntity> UMordhauGameInstance::GetPartyMemberEntities()
{
	return TArray<struct FPlayFabPlayerEntity>();
}

TArray<FString> UMordhauGameInstance::GetPartyMatchmakingMembers()
{
	return TArray<FString>();
}

void UMordhauGameInstance::GetPartyMatch(FString & QueueName, FString & MatchID)
{
}

FPlayFabPlayer UMordhauGameInstance::GetPartyLeader()
{
	return FPlayFabPlayer();
}

FString UMordhauGameInstance::GetPartyGroupID()
{
	return FString();
}

TArray<FString> UMordhauGameInstance::GetOtherPartyMembersEntityIDs()
{
	return TArray<FString>();
}

int UMordhauGameInstance::GetOfficialServerMuteDuration()
{
	return 0;
}

int UMordhauGameInstance::GetOfficialServerBanDuration()
{
	return 0;
}

int UMordhauGameInstance::GetNumReservedSlots()
{
	return 0;
}

int UMordhauGameInstance::GetNextMatchID()
{
	return 0;
}

FString UMordhauGameInstance::GetMatchmakingMatchID()
{
	return FString();
}

FString UMordhauGameInstance::GetMatchmakingGroupID()
{
	return FString();
}

FMapInfo UMordhauGameInstance::GetMapInfo(const FString & MapName)
{
	return FMapInfo();
}

TArray<int> UMordhauGameInstance::GetInstalledMods()
{
	return TArray<int>();
}

EIngameEvent UMordhauGameInstance::GetIngameEvent()
{
	return EIngameEvent();
}

int UMordhauGameInstance::GetGlobalServerMuteDuration()
{
	return 0;
}

int UMordhauGameInstance::GetGlobalServerBanDuration()
{
	return 0;
}

TArray<FString> UMordhauGameInstance::GetBlacklistedServers()
{
	return TArray<FString>();
}

EServerRegion UMordhauGameInstance::FindBestServerRegion()
{
	return EServerRegion();
}

EServerLocation UMordhauGameInstance::FindBestServerLocation()
{
	return EServerLocation();
}

void UMordhauGameInstance::DetermineServerLocationPings()
{
}


bool UMordhauGameInstance::ClientTravel(const FString & MapName, int PlayerCount)
{
	return false;
}

void UMordhauGameInstance::ClearPartyServerDetails()
{
}

void UMordhauGameInstance::ClearPartyMemberProfile(const FPlayFabPlayer & Player)
{
}

void UMordhauGameInstance::ClearPartyMatchmakingTickets()
{
}

void UMordhauGameInstance::ClearPartyMatchmakingMembers()
{
}

void UMordhauGameInstance::ClearPartyMatch()
{
}

void UMordhauGameInstance::ClearPartyGameServer()
{
}

bool UMordhauGameInstance::CanLeaveParty()
{
	return false;
}

bool UMordhauGameInstance::CanInviteToParty()
{
	return false;
}

void UMordhauGameInstance::BPStopRecordingReplay()
{
}

void UMordhauGameInstance::BPStopPlayingReplay()
{
}

void UMordhauGameInstance::BPStartRecordingReplay(const FString & InName, const FString & FriendlyName, TArray<FString> AdditionalOptions)
{
}

void UMordhauGameInstance::BPPlayReplay(const FString & InName, TArray<FString> AdditionalOptions)
{
}

void UMordhauGameInstance::AddPartyMatchmakingTicket(const FString & QueueName, const FString & TicketId)
{
}

void UMordhauGameInstance::UpdateParty(bool bSendProfile)
{
}

bool UMordhauGameInstance::UnmountMod(int ModId)
{
	return false;
}

void UMordhauGameInstance::Shutdown()
{
}





void UMordhauGameInstance::ShowInviteDialog()
{
}

void UMordhauGameInstance::SetPartyState(EPartyState PartyState)
{
}

void UMordhauGameInstance::SetPartyServerDetails(const FPlayFabServerDetails & InServerDetails)
{
}

void UMordhauGameInstance::SetPartyMemberProfile(const FPlayFabPlayer & Player, const FPlayerProfile & Profile)
{
}

void UMordhauGameInstance::SetPartyMatchmakingMembers(TArray<FString> Members)
{
}

void UMordhauGameInstance::SetPartyMatch(const FString & QueueName, const FString & MatchID)
{
}

void UMordhauGameInstance::SetPartyLeader(const FPlayFabPlayer & Player)
{
}

void UMordhauGameInstance::SetPartyGameServer(const FServerSearchResult & SearchResult)
{
}

void UMordhauGameInstance::SetNetworkError(const FText & ErrorText)
{
}

void UMordhauGameInstance::SetMatchmakingMatchID(const FString & MatchID)
{
}

void UMordhauGameInstance::SetIngameEvent(EIngameEvent InIngameEvent)
{
}

bool UMordhauGameInstance::ServerTravel(UObject * WorldContextObject, const FString & MapName)
{
	return false;
}

void UMordhauGameInstance::SaveConfig()
{
}

void UMordhauGameInstance::RequestPlayerInformation(const FPlayFabPlayer & Player)
{
}
