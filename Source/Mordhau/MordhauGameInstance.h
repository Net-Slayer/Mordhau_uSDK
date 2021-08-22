// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Mordhau.h"
#include "DummyActor.h"
#include "MordhauGameInstance.generated.h"

/**
 *
 */
// Delegates: 
// UPROPERTY(BlueprintAssignable, Instanced)
// struct FScriptMulticastDelegate OnPlayerInformationReceived; // 0x0E28(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
// UPROPERTY(BlueprintAssignable, Instanced)
// struct FScriptMulticastDelegate OnPartyUpdated; // 0x0D00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
// UPROPERTY(BlueprintAssignable, Instanced)
// struct FScriptMulticastDelegate OnMatchmakingRegionsDetermined; // 0x0D28(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


UCLASS(Blueprintable)
class MORDHAU_API UMordhauGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FServerSearchResult ServerSession; // 0x0978(0x02E8) (BlueprintVisible, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FBasicServerInfo ServerInfo; // 0x0C60(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FPlayFabServerDetails ServerDetails; // 0x0C78(0x0028) (BlueprintVisible, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString ServerPassword; // 0x0CA0(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		bool bServerFull; // 0x0CB0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int ChangeLevelCounter; // 0x0CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FText NetworkErrorText; // 0x0CB8(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<class UClass*> GameModes; // 0x0CD0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		TArray<class UClass*> Maps; // 0x0CE0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FText> Tips; // 0x0CF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EServerRegion CurrentMatchmakingRegion; // 0x0D10(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FString> CurrentMatchmakingGameModes; // 0x0D18(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString PlayFabId; // 0x0D38(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		FString StartupMap; // 0x0DE8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString PublicIP; // 0x0DF8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<EServerRegion> CasualMatchmakingRegions; // 0x0E08(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		TArray<EServerRegion> RankedMatchmakingRegions; // 0x0E18(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	
	
	UFUNCTION(BlueprintCallable)
	void UpdateParty(bool bSendProfile);
	UFUNCTION(BlueprintCallable)
	bool UnmountMod(int ModId);
	UFUNCTION(BlueprintCallable)
	void Shutdown();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowPasswordDialog(const struct FServerSearchResult& SearchResult);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowNetworkErrorDialog();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowJoiningDialog(const struct FServerSearchResult& SearchResult);
	UFUNCTION(BlueprintCallable)
	void ShowInviteDialog();
	UFUNCTION(BlueprintCallable)
	void SetPartyState(EPartyState PartyState);
	UFUNCTION(BlueprintCallable)
	void SetPartyServerDetails(const struct FPlayFabServerDetails& InServerDetails);
	UFUNCTION(BlueprintCallable)
	void SetPartyMemberProfile(const struct FPlayFabPlayer& Player, const struct FPlayerProfile& Profile);
	UFUNCTION(BlueprintCallable)
	void SetPartyMatchmakingMembers(TArray<FString> Members);
	UFUNCTION(BlueprintCallable)
	void SetPartyMatch(const FString& QueueName, const FString& MatchID);
	UFUNCTION(BlueprintCallable)
	void SetPartyLeader(const struct FPlayFabPlayer& Player);
	UFUNCTION(BlueprintCallable)
	void SetPartyGameServer(const struct FServerSearchResult& SearchResult);
	UFUNCTION(BlueprintCallable)
	void SetNetworkError(const FText& ErrorText);
	UFUNCTION(BlueprintCallable)
	void SetMatchmakingMatchID(const FString& MatchID);
	UFUNCTION(BlueprintCallable)
	void SetIngameEvent(EIngameEvent InIngameEvent);
	UFUNCTION(BlueprintCallable)
	bool ServerTravel(class UObject* WorldContextObject, const FString& MapName);
	UFUNCTION(BlueprintCallable)
	void SaveConfig();
	UFUNCTION(BlueprintCallable)
	void RequestPlayerInformation(const struct FPlayFabPlayer& Player);

	UFUNCTION(BlueprintCallable)
	void OnFindMordhauServerSessionByAddressSuccess(const struct FServerSearchResult& SearchResult);
	UFUNCTION(BlueprintCallable)
	void MountMods();
	UFUNCTION(BlueprintCallable)
	bool MountMod(int ModId);
	UFUNCTION(BlueprintCallable)
	void LogMatchmakingState(const FString& Message);
	UFUNCTION(BlueprintCallable)
	void LeaveParty();
	UFUNCTION(BlueprintCallable)
	void KickPartyMember(const struct FPlayFabPlayer& Player);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void JoinSessionSearchResult(const struct FServerSearchResult& SearchResult);
	UFUNCTION(BlueprintCallable)
	void JoinPartyGameServer();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsPartyReadyForMatchmaking();
	UFUNCTION(BlueprintCallable)
	bool IsPartyMember(const struct FPlayFabPlayer& Player);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsOfficialServerMuted();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsOfficialServerBanned();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsModMounted(int ModId);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsGlobalServerMuted();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsGlobalServerBanned();
	UFUNCTION(BlueprintCallable)
	void Init();
	UFUNCTION(BlueprintCallable)
	TMap<EServerLocation, int> GetServerRegionPings(EServerRegion Region);
	UFUNCTION(BlueprintCallable)
	TArray<EServerLocation> GetServerLocationPreference(EServerRegion Region);
	UFUNCTION(BlueprintCallable)
	TMap<EServerLocation, int> GetServerLocationPings();
	UFUNCTION(BlueprintCallable)
	int GetServerLocationPing(EServerLocation Location);
	UFUNCTION(BlueprintCallable)
	TArray<FString> GetProfaneWords();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	EPlatform GetPlatform();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	EPartyState GetPartyState();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetPartySize();
	UFUNCTION(BlueprintCallable)
	void GetPartyServerDetails(struct FPlayFabServerDetails& OutServerDetails, bool& bWasSuccessful);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetPartyMMR(const FString& GameMode);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	FString GetPartyMemberStatus(const struct FPlayFabPlayer& Player);
	UFUNCTION(BlueprintCallable)
	void GetPartyMemberServerAddress(const struct FPlayFabPlayer& Player, struct FServerAddress& Address, bool& bWasSuccessful);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<struct FPlayFabPlayer> GetPartyMembers();
	UFUNCTION(BlueprintCallable)
	bool GetPartyMemberProfile(const struct FPlayFabPlayer& Player, struct FPlayerProfile& Profile);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<struct FPlayFabPlayerEntity> GetPartyMemberEntities();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<FString> GetPartyMatchmakingMembers();
	UFUNCTION(BlueprintCallable)
	void GetPartyMatch(FString& QueueName, FString& MatchID);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FPlayFabPlayer GetPartyLeader();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	FString GetPartyGroupID();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<FString> GetOtherPartyMembersEntityIDs();
	UFUNCTION(BlueprintCallable)
	int GetOfficialServerMuteDuration();
	UFUNCTION(BlueprintCallable)
	int GetOfficialServerBanDuration();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetNumReservedSlots();
	UFUNCTION(BlueprintCallable)
	int GetNextMatchID();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	FString GetMatchmakingMatchID();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	FString GetMatchmakingGroupID();
	UFUNCTION(BlueprintCallable)
	struct FMapInfo GetMapInfo(const FString& MapName);
	UFUNCTION(BlueprintCallable)
	TArray<int> GetInstalledMods();
	UFUNCTION(BlueprintCallable)
	EIngameEvent GetIngameEvent();
	UFUNCTION(BlueprintCallable)
	int GetGlobalServerMuteDuration();
	UFUNCTION(BlueprintCallable)
	int GetGlobalServerBanDuration();
	UFUNCTION(BlueprintCallable)
	TArray<FString> GetBlacklistedServers();
	UFUNCTION(BlueprintCallable)
	EServerRegion FindBestServerRegion();
	UFUNCTION(BlueprintCallable)
	EServerLocation FindBestServerLocation();
	UFUNCTION(BlueprintCallable)
	void DetermineServerLocationPings();

	UFUNCTION(BlueprintCallable)
	bool ClientTravel(const FString& MapName, int PlayerCount);
	UFUNCTION(BlueprintCallable)
	void ClearPartyServerDetails();
	UFUNCTION(BlueprintCallable)
	void ClearPartyMemberProfile(const struct FPlayFabPlayer& Player);
	UFUNCTION(BlueprintCallable)
	void ClearPartyMatchmakingTickets();
	UFUNCTION(BlueprintCallable)
	void ClearPartyMatchmakingMembers();
	UFUNCTION(BlueprintCallable)
	void ClearPartyMatch();
	UFUNCTION(BlueprintCallable)
	void ClearPartyGameServer();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CanLeaveParty();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CanInviteToParty();
	UFUNCTION(BlueprintCallable)
	void BPStopRecordingReplay();
	UFUNCTION(BlueprintCallable)
	void BPStopPlayingReplay();
	UFUNCTION(BlueprintCallable)
	void BPStartRecordingReplay(const FString& InName, const FString& FriendlyName, TArray<FString> AdditionalOptions);
	UFUNCTION(BlueprintCallable)
	void BPPlayReplay(const FString& InName, TArray<FString> AdditionalOptions);
	UFUNCTION(BlueprintCallable)
	void AddPartyMatchmakingTicket(const FString& QueueName, const FString& TicketId);

};

