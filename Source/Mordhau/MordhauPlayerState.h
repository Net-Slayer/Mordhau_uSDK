// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MordhauCharacter.h"
#include "MordhauPlayerState.generated.h"

/**
 *
 */
UCLASS()
class MORDHAU_API AMordhauPlayerState : public APlayerState
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float>                                      MedianPings;                                              // 0x03F0(0x0010) (ZeroConstructor, Transient)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float>                                      MedianPingsSorted;                                        // 0x0400(0x0010) (ZeroConstructor, Transient)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                CurMedianPingIndex;                                       // 0x0410(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              PingMedian;                                               // 0x0414(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                LocalStableShortID;                                       // 0x0418(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY()
		int16                                            ReplicatedRank;                                           // 0x041C(0x0002) (Net, ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY()
		int16                                            ReplicatedKills;                                          // 0x041E(0x0002) (Net, ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY()
		int16                                            ReplicatedAssists;                                        // 0x0420(0x0002) (Net, ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY()
		uint16                                           ReplicatedDeathsAndFlags;                                 // 0x0422(0x0002) (Net, ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY()
		int8                                             ReplicatedTeam;                                           // 0x0424(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 Badge;                                                    // 0x0425(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 LevelDisplayType;                                         // 0x0426(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsPartyMember;                                           // 0x0427(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsFriend;                                                // 0x0428(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                FilteredTeamKills;                                        // 0x042C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsAlive;                                                 // 0x0430(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                Kills;                                                    // 0x0434(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                Deaths;                                                   // 0x0438(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                Assists;                                                  // 0x043C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                Team;                                                     // 0x0440(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<class AMordhauCharacter>            LastMordhauCharacter;                                     // 0x0444(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsAdmin;                                                 // 0x044C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString                                     AdminTier;                                                // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                KilledLocalPlayerCounter;                                 // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsMuted;                                                 // 0x0464(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                KilledByLocalPlayerCounter;                               // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FPlayFabPlayer                              PlayFabPlayer;                                            // 0x0470(0x0060) (Transient)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString                                     SessionTicket;                                            // 0x04D0(0x0010) (ZeroConstructor, Transient)

	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
		void SetTeam(int NewTeam);
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
		void SetPlayerName(const FString& S);
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
		void OnRep_ReplicatedTeam();
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
		void OnRep_ReplicatedKills();
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
		void OnRep_ReplicatedDeathsAndFlags();
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
		void OnRep_ReplicatedAssists();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PlayerStateFns")
		int GetRank();
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
		class AMordhauCharacter* GetLastPossessedMordhauCharacter();
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
		void BanPlayer(int BanDuration, const FString& BanReason, bool bIsOfficialServerBan, EBanType BanType);
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
		void AddScore(int Amount);
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
		void AddKills(int Amount);
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
		void AddDeaths(int Amount);
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
		void AddAssists(int Amount);

	UFUNCTION(BlueprintPure, Category = "AMordhauPlayerState|PlayFab")
		FORCEINLINE    FString GetPlayFabID() { return FString(); }

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "PlayerState")
		struct FSteamID GetSteamID();
};
