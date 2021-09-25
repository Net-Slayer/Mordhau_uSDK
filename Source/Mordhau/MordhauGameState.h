// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "Mordhau.h"
#include "Engine.h"
#include "MordhauEquipment.h"
#include "MordhauGameState.generated.h"

/**
 *
 */

 //USTRUCT(BlueprintType)
 //struct FGameStateLastDemotableTickFunction : public FTickFunction
 //{
 //	GENERATED_BODY()
 //};
 //USTRUCT(BlueprintType)
 //struct FGameStatePostPhysicsTickFunction : public FTickFunction
 //{
 //	GENERATED_BODY()
 //};

USTRUCT()
struct FEmpty_array
{
	GENERATED_BODY()
		UPROPERTY(VisibleAnywhere)
		TArray<int> nonsense;
};
USTRUCT(BlueprintType)
struct FCapturePointGroup
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class AControlPoint*>                       CapturePoints;
};
UCLASS()
class MORDHAU_API AMordhauGameState : public AGameState
{
	GENERATED_BODY()

		//private:
		//	UFUNCTION()
		//		int64 GetEquipmentCacheHash(int ID, uint8 Skin, uint8 Part1, uint8 Part2, uint8 Part3, bool bUseAuxiliaryMesh);

public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//struct FGameStateLastDemotableTickFunction LastDemotableTickFunction;                                // 0x0388(0x0058)
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//struct FGameStatePostPhysicsTickFunction PostPhysicsTickFunction;                                  // 0x03E0(0x0058)
	UPROPERTY()
		TArray<TWeakObjectPtr<class AAdvancedCharacter>>   CharacterTemporaryArrayCached;                            // 0x04B8(0x0010) (ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float>                                      NextBudgetTime;                                           // 0x04C8(0x0010) (ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class AParticleSystemActor*>                ParticleSystemActors;                                     // 0x04E0(0x0010) (ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class AAdvancedCharacter*>                  CharacterDistanceArray;                                   // 0x04F8(0x0010) (ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TMap<class AAdvancedCharacter*, int>               CharacterToDistanceArray;                                 // 0x0508(0x0050) (ZeroConstructor)
	UPROPERTY()
		TArray<TWeakObjectPtr<class AAdvancedCharacter>>   RagdollDistanceArray;                                     // 0x05A8(0x0010) (ZeroConstructor)
	UPROPERTY()
		TMap<int64, class USkeletalMesh*>                EquipmentMeshCacheMap;                                    // 0x05B8(0x0050) (ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class APreSkinnedPoseOracle*                       PreSkinnedPoseOracle;                                     // 0x0608(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		double                                             NextLoginTime;                                            // 0x0610(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		double                                             LoginAttemptInterval;                                     // 0x0618(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                LoginAttempts;                                            // 0x0620(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                MaxLoginAttempts;                                         // 0x0624(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		double                                             NextTokenRefreshTime;                                     // 0x0628(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		double                                             TokenRefreshInterval;                                     // 0x0630(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString                                     MatchmakingTicketID;                                      // 0x0638(0x0010) (ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString                                     MatchmakingMatchID;                                       // 0x0648(0x0010) (ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bAreStatsAvailable;                                       // 0x0658(0x0001) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsInventoryAvailable;                                    // 0x0659(0x0001) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class AAdvancedCharacter*>                  ImmutableLivingCharacterArray;                            // 0x0660(0x0010) (ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FLineTraceMemoryEntry>               AttackTracesMemory;                                       // 0x0678(0x0010) (ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UClass*                                      MetaData;                                                 // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bDisableClientStats;                                      // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bDisableChat;                                             // 0x0691(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bDisableScoreboard;                                       // 0x0692(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bAllowHealthRegen;                                        // 0x0693(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bDoNotLimitPlaceables;                                    // 0x0694(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bOverrideArmorSpeedAndAccelerationFactor;                 // 0x0695(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              OverrideArmorSpeedFactor;                                 // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              OverrideArmorAccelerationFactor;                          // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bAllPlayersHaveMarkers;                                   // 0x06A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString                                     MOTDURL;                                                  // 0x0748(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsThirdPersonCameraDisabled;                             // 0x0758(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ConstrainAspectRatio;                                     // 0x075C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bDisableClientMods;                                       // 0x0760(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                MatchDurationMax;                                         // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TMap<int, class AMapCameraActor*>                  MapCameraActors;                                          // 0x0768(0x0050) (BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              DefaultEndMatchMapChangeTime;                             // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              EndMatchMapChangeEnd;                                     // 0x07BC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              PostMatchScreenDelay;                                     // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              DefaultWarmupTime;                                        // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bSkipWarmupInDevBuild;                                    // 0x07C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bBlockInputInWarmup;                                      // 0x07C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                MinPlayersToStart;                                        // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              WarmupEnd;                                                // 0x07D0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bDoNotGoToNextMapOnMatchEnd;                              // 0x07D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bDoNotShowPostMatchScreen;                                // 0x07D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bAllowSpawning;                                           // 0x07D6(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8                                      TeamCount;                                                // 0x07D7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float>                                      TeamScores;                                               // 0x07D8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsTeamMode;                                              // 0x07E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bEnforceTeamColors;                                       // 0x07E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FLinearColor>                        TeamColors;                                               // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FString>                             TeamNames;                                                // 0x0800(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FLinearColor>                        SecondaryTeamColors;                                      // 0x0810(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class AControlPoint*>                       AllCapturePoints;                                         // 0x0820(0x0010) (BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                Team1CapturePoints;                                       // 0x0830(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                Team2CapturePoints;                                       // 0x0834(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bUsePushTopologicalProgress;                              // 0x0838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8                                      PushTopologicalProgressAttackingTeam;                     // 0x0839(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              Team1TopologicalProgress;                                 // 0x083C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              Team2TopologicalProgress;                                 // 0x0840(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FCapturePointGroup>                  CapturePointTopologicalOrdering;                          // 0x0848(0x0010) (BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TMap<FName, struct FGroupSoundGroup>        SoundGroups;                                              // 0x0858(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              LastBotVoiceCommandTime;                                  // 0x08A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              LastBotEmoteTime;                                         // 0x08AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              LastBotClimbTime;                                         // 0x08B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TArray<TWeakObjectPtr<class UDecalComponent>>      BloodDecalsArray;                                         // 0x08B8(0x0010) (ExportObject, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSet<TSubclassOf<AMordhauEquipment>> BannedEquipment; // 0x0670(0x0050) UNKNOWN PROPERTY: SetProperty Mordhau.MordhauGameState.BannedEquipment
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSet<uint8> BannedPerks; // 0x06C0(0x0050) UNKNOWN PROPERTY: SetProperty Mordhau.MordhauGameState.BannedPerks





	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		void UpdateSoundGroups();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		void UpdateCapturePointData();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		void UnregisterParticleSystemActor(class AParticleSystemActor* ParticleActor);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		void StoreEquipmentMeshInCache(class USkeletalMesh* Mesh, int ID, uint8 Skin, uint8 Part1, uint8 Part2, uint8 Part3, bool bUseAuxiliaryMesh);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		bool ShouldTickThisFrame(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		bool ShouldTickAnimationThisFrame(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauGameStateFns")
		bool ShouldPaintGearWithTeamColors();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauGameStateFns")
		bool ShouldBlockPawnInput();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		void ReserveCharacterRagdoll(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		void RemoveCharacterFromDistanceArray(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		void RegisterParticleSystemActor(class AParticleSystemActor* ParticleActor);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		void PostPhysicsTick(float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		void OnReplicatedMOTD();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauGameStateFns")
		void OnRep_MOTDURL();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauGameStateFns")
		void LocalPlayerChangedTeam();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		bool LineTraceCharacters(const struct FVector& LineStart, const struct FVector& LineEnd, TArray<struct FHitResult>& Results);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		void LastDemotableTick(float DeltaTime);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauGameStateFns")
		bool IsFriendly(class AActor* ActorA, class AActor* ActorB);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauGameStateFns")
		FString GetTeamName(int Team);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauGameStateFns")
		struct FLinearColor GetTeamColor(int Team);
	UFUNCTION(BlueprintCallable, BlueprintInternalUseOnly, Category = "MordhauGameStateFns")
		struct FLinearColor GetSecondaryTeamColor(int Team);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		TArray<int> GetPlayerCountsPerTeam(bool bOnlyLiving, bool bOnlyWithValidProfiles);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		class USkeletalMesh* GetEquipmentMeshFromCache(int ID, uint8 Skin, uint8 Part1, uint8 Part2, uint8 Part3, bool bUseAuxiliaryMesh);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		int GetCurrentFrame();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		class AAdvancedCharacter* GetCharacterByDistanceRank(int DistanceRank);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		struct FTransform GetBindPoseTransform(class USkeletalMesh* Mesh, const FName& SocketName);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		class AMapCameraActor* GetAppropriateMapCameraActor(class APlayerController* Controller);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameStateFns")
		bool CanPlayerJoinTeam(class AMordhauPlayerState* Player, int Team);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauGameStateFns")
		bool CanImmediatelyChangeProfile(class AController* Controller);
};
