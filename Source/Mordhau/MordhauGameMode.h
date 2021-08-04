// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/GameMode.h"
#include "Engine.h"
#include "Mordhau.h"
#include "UnrealNetwork.h"
#include "MordhauGameMode.generated.h"

UCLASS()
class MORDHAU_API AMordhauGameMode : public AGameMode
{
	GENERATED_BODY()
public:


	//Speculative Properties from BPs
	UPROPERTY(BlueprintReadWrite, Config = Game, EditAnywhere, GlobalConfig, Replicated)
	bool AllowWhisperChat;
	UPROPERTY(BlueprintReadWrite, Config = Game, EditAnywhere, GlobalConfig, Replicated)
	bool AllowAdminChat;


	//doesn't wish to compile anything called mapPrefixes
// 	UPROPERTY() 
// 	TArray<struct FGameModeName> MapPrefixes; //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, Config = Game, EditAnywhere, GlobalConfig, Replicated)
	TArray<FString>  MapRotation; //(Edit, BlueprintVisible, ZeroConstructor, Config, GlobalConfig)
	UPROPERTY(Config = Game, GlobalConfig, VisibleAnywhere, Replicated)
	FString MOTDURL;  //(BlueprintVisible, ZeroConstructor, Config, GlobalConfig)
	UPROPERTY(Config = Game, GlobalConfig, VisibleAnywhere, Replicated)
	bool  bIsThirdPersonCameraDisabled;  //(BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	UPROPERTY(Config = Game, GlobalConfig, VisibleAnywhere, Replicated)
	float ConstrainAspectRatio; //(BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	UPROPERTY(Config = Game, GlobalConfig, VisibleAnywhere, Replicated)
	bool  bIsHitStopOnTeamHitsDisabled;  //(BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	UPROPERTY(Config = Game, GlobalConfig, VisibleAnywhere, Replicated)
	bool  bDisableClientMods;   //(BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	UPROPERTY(Config = Game, GlobalConfig, VisibleAnywhere, Replicated)
	TArray<FString>  SpawnServerActorsOnMapLoad; //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig)
	UPROPERTY(Config = Game, GlobalConfig, VisibleAnywhere, Replicated)
	bool  bLogKillfeed;   //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	UPROPERTY(Config = Game, GlobalConfig, VisibleAnywhere, Replicated)
	bool  bLogChat; //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	UPROPERTY(Config = Game, GlobalConfig, VisibleAnywhere, Replicated)
	bool  bLogScore;   //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	bool  bAllowSpawningServerActorsOnMapLoad; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	TArray<TWeakObjectPtr<class AController>> SpawnQueue;  //(ZeroConstructor)
	UPROPERTY()
	TWeakObjectPtr<class AController>   CurrentlySpawningController;   //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class AActor*  CurrentlySpawningPlayerStart;  //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	int   CurrentlySpawningStage;  //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	bool  bMatchTimeRanOut;  //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	float PlayerRespawnTime; //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	bool  bUsesSlowPlayerSpawning; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, Config = Game, EditAnywhere, Replicated)
	int   AutoKickOnTeamKillAmount;   //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	bool  bPlayersSpawnInWaves; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	bool  bPlayersDropAllGearOnDeath; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	bool  bEquipmentDoesNotDespawn;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	float OverrideEquipmentDespawnTime;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, Config = Game, EditAnywhere, Replicated)
	float BallistaRespawnTime;  //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, Config = Game, EditAnywhere, Replicated)
	float CatapultRespawnTime;  //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, Config = Game, EditAnywhere, Replicated)
	float HorseRespawnTime;  //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Replicated)
	TArray<FString>  MapVoteMaps; //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	EOfficialServerVisibility  OfficialServerVisibility;   //(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, Config = Game, EditAnywhere, Replicated)
	float DamageFactor;   //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, Config = Game, EditAnywhere, Replicated)
	float TeamDamageFactor;  //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, Config = Game, EditAnywhere, Replicated)
	int   TeamDamageFlinch;  //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	float SpawnProtectionDuration; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	bool  bDisableDamage; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	bool  bDisableStamina;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	bool  bIsScoringDisabled;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	float AssistScoreFactor; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	uint8  AssistDamageToCountAsKill;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	float KillScoreChange;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	float KillTeamScoreChange;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	float TeamKillScoreChange;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	float TeamKillTeamScoreChange; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	bool  bTeamKillsDecrementKillerKills;   //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	bool  bTeamKillsIncrementKilledDeaths;  //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	bool  bSuicideDecrementsKills; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	TArray<FString>  ChatMessages;   //(Edit, BlueprintVisible, ZeroConstructor)



	
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 	struct FScriptMulticastDelegate  OnRconStringCommand;  //(ZeroConstructor, InstancedReference, BlueprintAssignable)
// 	
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 	TArray<struct FRconEventStruct>  RconEvents;  //(BlueprintVisible, ZeroConstructor)
// 	
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 	struct FScriptMulticastDelegate  OnMessageBroadcasted; //(ZeroConstructor, InstancedReference, BlueprintAssignable)
// 	
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 	struct FScriptMulticastDelegate  OnAfterLogin;   //(ZeroConstructor, InstancedReference, BlueprintAssignable)
// 	
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 	struct FScriptMulticastDelegate  OnBeforeLogout; //(ZeroConstructor, InstancedReference, BlueprintAssignable)


	UFUNCTION(BlueprintCallable)
	bool VoteLevel(class APlayerController* Player, const FString& LevelName);
	UFUNCTION(BlueprintCallable)
	void SetTeamScore(int Team, float Amount);

// 	UFUNCTION(BlueprintCallable)
// 	bool SetRconEvent(const struct FScriptDelegate& InEvent, bool bOverrideExisting, struct FRconEventStruct* InStruct);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void RequestedAssignTeam(class AController* Controller, int Team);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void RemoveBots(int Amount, int Team);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnTeamScoreChanged(int Team, float OldValue);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnScoreChanged(class APlayerState* State, float OldValue);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnMatchStateChanged(const FName& OldState, const FName& NewState);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnKillsChanged(class APlayerState* State, int OldValue);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, EMordhauDamageType Type, uint8 SubType, class AActor* DamageSource, class AActor* DamageAgent);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnDeathsChanged(class APlayerState* State, int OldValue);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnAssistsChanged(class APlayerState* State, int OldValue);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void MatchTimeRanOut();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool IsSpawnpointAllowed(class APlayerStart* PlayerStart, class AController* Player);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	float GetSpawnpointPreference(class APlayerStart* PlayerStart, class AController* Player);
	UFUNCTION(BlueprintCallable)
	TArray<FString> GetNextMaps(int Count);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	FString GetNextMap();
	UFUNCTION(BlueprintCallable)
	TArray<FString> GetMapVoteMaps();
	UFUNCTION(BlueprintCallable)
	TArray<uint8> GetMapVoteCounts();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	float GetDamageFactor(class AActor* DamageSource, class AActor* DamageTarget);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool ControllerCanRestart(class AController* Controller);
	UFUNCTION(BlueprintCallable)
	bool ChangeLevel(const FString& LevelName);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool CanDealDamage(class AActor* DamageSource, class AActor* DamageTarget);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool CanClash(class APawn* Source, class APawn* Target);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool CanChamber(class APawn* Source, class APawn* Target);
	UFUNCTION(BlueprintCallable, meta = (AutoCreateRefTerm = "Msg, Type"))
	virtual void Broadcast(class AActor* Sender, const FString& Msg, const FName& Type);
	UFUNCTION(BlueprintCallable)
	void AddTeamScore(int Team, float Amount);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AddBots(int Amount, int Team);




};
