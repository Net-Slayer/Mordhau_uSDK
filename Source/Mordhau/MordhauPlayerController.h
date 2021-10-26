#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Mordhau.h"
#include "DummyActor.h"
#include "MordhauPlayerController.generated.h"

/**
 *
 */
UCLASS()
class MORDHAU_API AMordhauPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class APawn>                        LastPawn;                                                 // 0x067C(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UTagSystemComponent*                         TagSystemComponent;                                       // 0x06D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FScriptMulticastDelegate                    OnServerRestrictionInfoReceived;                          // 0x06E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              TotalMordhauCharacterTeamDamage;                          // 0x06F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              TotalMordhauCharacterDamage;                              // 0x06F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bIsAnythingRestockable;                                   // 0x06F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                SelectedCharacterProfile;                                 // 0x06FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                SelectedDefaultProfile;                                   // 0x0700(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FCharacterProfile                           CharacterProfile;                                         // 0x0708(0x00B8) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bReceivedValidProfileFromClient;                          // 0x07C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              LastAskedForSpawnTime;                                    // 0x07C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                SpawnToken;                                               // 0x07C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FCharacterProfile                           LastSentCharacterProfile;                                 // 0x07D8(0x00B8)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class ACustomizationReplicationActor*              CustomizationReplicationActor;                            // 0x0898(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bSendsDefaultCustomization;                               // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<struct FEquipmentCustomization>             DefaultCharacterEquipment;                                // 0x08A8(0x0010) (BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<struct FCharacterGearCustomization>         DefaultCharacterTier;                                     // 0x08C8(0x0010) (BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FCharacterProfile                           PendingCharacterProfile;                                  // 0x08E0(0x00B8) (BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bIsPendingCharacterProfileASelectedDefaultProfile;        // 0x0998(0x0001) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FCharacterProfile                           ConstructingCharacterProfile;                             // 0x09A0(0x00B8)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class AMordhauCharacter>            LastControlledCharacter;                                  // 0x0A5C(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              NextRespawnTime;                                          // 0x0AB8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bUseInstancing;                                           // 0x0ABE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              LocallyTrackedObjectiveScore;                             // 0x0B10(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bWantsBlockInput;                                         // 0x0B14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MaxAFKTime;                                               // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bOnlyAFKIfAlive;                                          // 0x0B1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CurrentAFKTime;                                           // 0x0B20(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     LastAFKCheckCameraLocation;                               // 0x0B24(0x000C) (IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bIsAuthenticated;                                         // 0x0B30(0x0001) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bClientRequestedRewards;                                  // 0x0B31(0x0001) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bServerReceivedRewards;                                   // 0x0B32(0x0001) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                RewardedGold;                                             // 0x0B34(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                RewardedXP;                                               // 0x0B38(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FServerStats                                ServerStats;                                              // 0x0B3C(0x0018)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FString>                             MapVoteMaps;                                              // 0x0B58(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8>                              MapVoteCounts;                                            // 0x0B68(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                Rank;                                                     // 0x0B78(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString                                     MatchmakingMatchID;                                       // 0x0B80(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FPlayerCommand CurrentPlayerCommand;                                     // 0x0B90(0x0030)

	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void VoteMap(const FString& MapName);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void VoteLevel(const FString& LevelName);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void VoteKick(const FString& PlayerNameOrPlayFabID);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Unmute(const FString& PlayerNameOrPlayFabID);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void UnmountPak(const FString& PakPath);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Unban(const FString& PlayFabId);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Turn(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ToggleStamina();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ToggleServerNetProfile();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ToggleDamage();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void StopServerStatsFile();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void StartServerStatsFile();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void SpectatorCmd(const FString& SpecCmd);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Slomo(float Value);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ShowTips();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ShowEquipment();

	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ShowAuthTraces(bool bValue);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauControllerFns")
		bool SharesInstanceWith(class AActor* OtherActor);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void SetMaxNetSkip(int NewMaxNetSkip);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void SetFriendlyNetSkipOffset(int NewFriendlyNetSkipOffset);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void SetChoiceMenuConsumesInput(bool Value);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerVoteLevel(const FString& LevelName);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerUnbanPlayer(const FString& PlayFabId);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerToggleStamina();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerToggleNetProfile();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerToggleDamage();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerStopServerStatsFile();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerStartServerStatsFile();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerSlomo(float Value);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerSetXPAndMMR(int XP, int DuelMMR, int TeamfightMMR, int CasualMMR);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerSetSpawnToken(int NewToken);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerSetSessionTicket(const FString& InSessionTicket);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerSetMaxNetSkip(int NewMaxNetSkip);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerSetMatchmakingMatchID(const FString& InMatchmakingMatchID);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerSetLevelDisplayType(uint8 NewLevelDisplayType);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerSetFriendlyNetSkipOffset(int NewFriendlyNetSkipOffset);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerSetBadge(uint8 NewBadge);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerRequestSphericalHitboxes();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerRequestSetTeam(int NewTeam);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerRequestSetSkillsCustomization(const struct FSkillsCustomization& NewCharacterSkills);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerRequestSetGearCustomization(const struct FCharacterGearCustomization& NewCharacterGear);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerRequestSetFaceCustomization(const struct FFaceCustomization& NewCharacterFace);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerRequestSetDefaultProfile(int NewDefaultProfile);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerRequestSetDefaultCharacterTiers(const TArray<struct FCharacterGearCustomization>& Tiers);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerRequestSetDefaultCharacterEquipment(const TArray<struct FEquipmentCustomization>& Equip);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerRequestSetAppearanceCustomization(const struct FAppearanceCustomization& NewCharacterAppearance);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerRequestAuthTraces(bool bEnabled);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerRemoveBots(int Amount, int Team);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerRemoveAdmin(const FString& PlayFabId);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerPlayerStatus(const FString& PlayFabId);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerNotifyPlayerDisconnecting();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerNotifyItemsUnlocked();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerMuteList();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerKickPlayer(const FString& PlayFabId, const FString& KickReason);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerHasPassedCheck(uint8 Param);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerGetServerStats();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerGetMapVoteMaps();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerGetMapVoteCounts();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerChatUnmutePlayer(const FString& PlayFabId);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerChatMutePlayer(const FString& PlayFabId, int MuteDuration);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerChangeLevel(const FString& LevelName);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerBanPlayer(const FString& PlayFabId, int BanDuration, const FString& BanReason);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerBanList();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerAdminLogin(const FString& Password);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerAdminList();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerAddBots(int Amount, int Team);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ServerAddAdmin(const FString& PlayFabId);

	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void SaveCurrentProfilesAsBotProfiles();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void RequestSphericalHitboxes();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void RequestServerRestrictionInfo();

	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void RequestRewards();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void RemoveBotsTeam(int Amount, int Team);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void RemoveBots(int Amount);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void RemoveAdmin(const FString& PlayerNameOrPlayFabID);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void RegisterAnglingYInput(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void RegisterAnglingXInput(float Value);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ReceiveServerRestrictionInfo(const struct FServerRestrictionInfo& Info);

	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void PrepareAndSendCustomizationIfChanged();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void PlayerStatus(const FString& PlayFabId);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void PlayerList();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ParryThis();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnSpectatorCmd(const FString& Cmd, const FString& Param);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnSpectatorAction(uint8 Action);

	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void OnSettingsChanged();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnRequestVoteKick(class AMordhauPlayerState* TargetPlayer);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnRequestCancelVoteKick();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnReceivedKillScore(class AMordhauCharacter* Killed);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnReceivedAssistScore(float Percentage, class AMordhauCharacter* Killed);

	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void OnPlayFabLoginComplete(bool bWasSuccessful, const FString& PlayFabId);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnNewProfileFromClientPreValidation();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnNewProfileFromClientPostValidation();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnMordhauCharacterSpawned(class AMordhauCharacter* SpawnedCharacter);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnIsAnythingRestockableChanged();

	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void OnInventoryItemsUnlocked(bool bWasSuccessful, TArray<struct FItemStack> ItemStacks);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnHighlightStart(class AActor* Actor);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnHighlightEnd(class AActor* Actor);

	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void OnGetPlayFabPlayerComplete(bool bWasSuccessful, const FString& PlayFabId, const struct FPlayFabPlayer& PlayFabPlayer);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void OnGetPlayFabIDsFromPlatformIDsComplete(bool bWasSuccessful, TMap<FString, FString> PlayFabIds);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnAmmoChanged(class AMordhauEquipment* Equipment, int AmmoDifference);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnAfterUnPossess();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnAfterPossess(class APawn* APawn);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnAFKTimeExceededMaximum();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void OnActionFailed(const FName& Reason);

	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void MuteList();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Mute(const FString& PlayerNameOrPlayFabID, int MuteDuration);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void MountPak(const FString& PakPath);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void LookupPlayer(const FString& UniqueId);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void LookUp(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Kick(const FString& PlayerNameOrPlayFabID, const FString& KickReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		bool IsSessionTicketAvailable();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		bool IsInventoryAvailable();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauControllerFns")
		bool IsAdmin();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void GiveClientScoreBP(EScoreFeedReason Reason, int ScoreAmount);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauControllerFns")
		struct FPlayFabPlayer GetPlayFabPlayer();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauControllerFns")
		FString GetPlayFabId();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		class AAdvancedCharacter* GetNextViewablePlayerNonAuth(bool bReverse, bool bOnlyOwnTeam);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		class AMordhauCharacter* GetLastControlledCharacter();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		bool GetDefaultTierCustomizationForSlot(EMainWearableSlot MainSlot, uint8 ArmorTier, TMap<EWearableSlot, struct FWearableCustomization>& OutMap);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		bool GetDefaultEquipmentCustomizationFor(class UClass* ForEquipmentClass, struct FEquipmentCustomization& OutCustomization);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauControllerFns")
		class AMordhauCharacter* GetControlledMordhauCharacter(bool bAlsoSearchVehicle);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		struct FVector2D GetAnglingVector();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		float GetAnglingAngle();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void FlushPendingAnglingInputs();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void EquipmentCommand(int Command);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void DisplayMessage(class APlayerState* SenderPlayerState, const FString& S, const FName& Type, float MsgLifeTime);

	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void CopyName(const FString& UniqueId);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void CopyID(const FString& UniqueId);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		int ComputePlayerRank();

	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ClientWasKicked_Implementation(const FText& KickReason);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ClientSetServerStats(const struct FServerStats& InServerStats);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ClientSetServerInfo(const struct FBasicServerInfo& ServerInfo);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ClientSetPlayFabMatch(const struct FPlayFabMatch& InMatch);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ClientSetControlAndPawnRotation(class APawn* APawn, const struct FRotator& NewRotation);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ClientRequestXPAndMMR();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ClientRequestSessionTicket();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ClientRequestMatchmakingMatchID();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ClientReceiveSphericalHitboxes(const TArray<FVector>& Locations, FVector const& WeaponTraceStart, FVector const& WeaponTraceEnd);
	UFUNCTION()
		void ClientReceiveScoreNoState(uint8 ReasonAndParam, int16 ScoreAmount);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ClientReceiveScoreBP(EScoreFeedReason Reason, uint8 ReasonParam, float ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);
	UFUNCTION()
		void ClientReceiveScore(uint8 ReasonAndParam, int16 ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);
	UFUNCTION(BlueprintCallable, Client, Reliable, Category = "MordhauControllerFns")
		void ClientReceiveMessage(const FString& Message);

	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ClientMessageBP(const FString& String);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ClientDrawTracer(const struct FVector& Start, const struct FVector& End);

	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ChooseExit();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose9();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose8();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose7();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose6();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose5();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose4();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose3();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose2();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose1();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerFns")
		void ChoiceMenuOptionSelected(int Choice);

	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ChoiceMenu(int Index);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ChangeMap(const FString& MapName);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ChangeLevel(const FString& LevelName);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void CancelVoteKick();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		bool CanAskForSpawn();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void BanList();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Ban(const FString& PlayerNameOrPlayFabID, int BanDuration, const FString& BanReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void AskForSpawn();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		bool AreStatsAvailable();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void AdminLogin(const FString& Password);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void AdminList();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void AddBotsTeam(int Amount, int Team);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void AddBots(int Amount);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void AddAdmin(const FString& PlayerNameOrPlayFabID);
};
