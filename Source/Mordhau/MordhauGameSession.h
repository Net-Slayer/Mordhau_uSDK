// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "Mordhau.h"
#include "DummyActor.h"
#include "MordhauGameSession.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRequestBan);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRequestUnban);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRequestMute);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRequestUnmute);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRequestKick);
UCLASS(Blueprintable)
class MORDHAU_API AMordhauGameSession : public AGameSession
{
	GENERATED_BODY()
public:
	UPROPERTY(Config = Game)
		int MaxSlots; //(ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(Config = Game)
		FString ServerName; //(ZeroConstructor, Config)
	UPROPERTY(Config = Game)
		FString ServerPassword; //(ZeroConstructor, Config)
	UPROPERTY(BlueprintReadOnly, Config = Game, VisibleAnywhere)
		TArray<int> Mods; //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	UPROPERTY(Config = Game)
		FString AdminPassword; //(ZeroConstructor, Config)
	UPROPERTY(Config = Game)
		FString RconPassword; //(ZeroConstructor, Config)
	UPROPERTY(Config = Game)
		float RconTimeout; //(ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(Config = Game)
		int RconPort; //(ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(Config = Game)
		bool bTieredAdmins; //(ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(Config = Game)
		TMap<FString, FString> RconAdminsTierMap; //(ZeroConstructor, Config)
	UPROPERTY(Config = Game)
		TMap<FString, FString> AdminsTierMap; //(ZeroConstructor, Config)
	UPROPERTY(Config = Game)
		bool bAllowHttpRequests; //(ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(Config = Game)
		int MaxNetSkip; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(Config = Game)
		int FriendlyNetSkipOffset; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(Config = Game)
		TArray<FString> Admins; //(ZeroConstructor, Config)
	UPROPERTY(Config = Game)
		TMap<FString, int64> BannedPlayers; //(ZeroConstructor, Config)
	UPROPERTY(Config = Game)
		TMap<FString, int64> MutedPlayers; //(ZeroConstructor, Config)
	UPROPERTY(Config = Game)
		TArray<uint64> LegacyAdmins; //(ZeroConstructor, Config)
	UPROPERTY(Config = Game)
		TMap<uint64, int64> LegacyBannedPlayers; //(ZeroConstructor, Config)
	UPROPERTY(Config = Game)
		TMap<uint64, int64> LegacyMutedPlayers; //(ZeroConstructor, Config)
	UPROPERTY(Config = Game)
		bool bAdvertiseServerViaSteam; //(ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(Config = Game)
		bool bUseLegacyPakMounting; //(ZeroConstructor, Config, IsPlainOldData)


	UPROPERTY(BlueprintAssignable)
		FOnRequestBan OnRequestBan; //(ZeroConstructor, InstancedReference, BlueprintAssignable)
	UPROPERTY(BlueprintAssignable)
		FOnRequestUnban OnRequestUnban; //(ZeroConstructor, InstancedReference, BlueprintAssignable)
	UPROPERTY(BlueprintAssignable)
		FOnRequestMute OnRequestMute; //(ZeroConstructor, InstancedReference, BlueprintAssignable)
	UPROPERTY(BlueprintAssignable)
		FOnRequestUnmute OnRequestUnmute; //(ZeroConstructor, InstancedReference, BlueprintAssignable)
	UPROPERTY(BlueprintAssignable)
		FOnRequestKick OnRequestKick; //(ZeroConstructor, InstancedReference, BlueprintAssignable)





	UFUNCTION(BlueprintCallable)
		bool UnmutePlayer(const FString& PlayFabId, bool bExpired);
	UFUNCTION(BlueprintCallable)
		bool UnbanPlayer(const FString& PlayFabId, bool bExpired);
	UFUNCTION(BlueprintCallable)
		void TriggerRewardDropForPlayer(class APlayerController* Player);
	UFUNCTION(BlueprintCallable)
		void TriggerRewardDrop();
	UFUNCTION(BlueprintCallable)
		void ReportTimeLeft(TArray<float> TimeLeft);
	UFUNCTION(BlueprintCallable)
		void RemoveAdmin(class APlayerController* AdminPlayer);
	UFUNCTION(BlueprintCallable)
		bool MutePlayerWithDuration(class APlayerController* MutedPlayer, int MuteDuration);
	UFUNCTION(BlueprintCallable)
		bool MutePlayer(class APlayerController* MutedPlayer);
	UFUNCTION(BlueprintCallable)
		bool KickPlayer(class APlayerController* KickedPlayer, const FText& KickReason);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool IsPlayerMuted(const FString& PlayFabId);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool IsPlayerBanned(const FString& PlayFabId);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		int GetPlayerMuteDuration(const FString& PlayFabId);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		int GetPlayerBanDuration(const FString& PlayFabId);
	UFUNCTION(BlueprintCallable)
		bool BanPlayerWithDuration(class APlayerController* BannedPlayer, int BanDuration, const FText& BanReason);
	UFUNCTION(BlueprintCallable)
		bool BanPlayer(class APlayerController* BannedPlayer, const FText& BanReason);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool AllowsJoin();
	UFUNCTION(BlueprintCallable)
		void AllowJoin(bool bInAllowJoin);
	UFUNCTION(BlueprintCallable)
		void AddTieredAdmin(class APlayerController* AdminPlayer, const FString& Tier);
	UFUNCTION(BlueprintCallable)
		void AddAdmin(class APlayerController* AdminPlayer);
};
