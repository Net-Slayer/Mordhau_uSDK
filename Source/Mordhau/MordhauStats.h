// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mordhau.h"
#include "MordhauStats.generated.h"

/**
*
*/
UCLASS(Blueprintable)
class MORDHAU_API UMordhauStats : public UObject
{
	GENERATED_BODY()

public:
	// UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat GameVersion; // 0x00A8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat Blocks; // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat Chambers; // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat ProjectilesDeflected; // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat ProjectilesBlocked; // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat Battlecries; // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat Disarms; // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat Kills; // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat Assists; // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat KillsOneMatch; // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat AssistsOneMatch; // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat KillsOneLife; // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat DamageTakenOneLife; // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat HeadsDecapitated; // 0x0178(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat ProjectileHeadHits; // 0x0188(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat ProjectileTorsoHits; // 0x0198(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat ProjectileLegHits; // 0x01A8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat MeleeHeadHits; // 0x01B8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat MeleeTorsoHits; // 0x01C8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat MeleeLegHits; // 0x01D8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat KillsOneAttack; // 0x01E8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat FireKills; // 0x01F8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat CouchedHeadKills; // 0x0208(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat LadderKills; // 0x0218(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat TrampleKills; // 0x0228(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat CasualRank; // 0x0238(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat CasualRankSamples; // 0x0248(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat DuelRank; // 0x0258(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat DuelRankSamples; // 0x0268(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat DuelRankTimestamp; // 0x0278(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat DuelRankLeaderboard; // 0x0288(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat TeamfightRank; // 0x0298(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat TeamfightRankSamples; // 0x02A8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat TeamfightRankTimestamp; // 0x02B8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat TeamfightRankLeaderboard; // 0x02C8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FAchievement TheABCs; // 0x02D8(0x0008) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FAchievement LivedToTell; // 0x02E0(0x0008) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FAchievement Highlander; // 0x02E8(0x0008) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FAchievement KeepsComingOff; // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FAchievement EagleEye; // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FAchievement Yoink; // 0x0300(0x0008) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FAchievement JusticeFromGrave; // 0x0308(0x0008) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FAchievement NotSparta; // 0x0310(0x0008) (BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FAchievement BurningMan;

	UFUNCTION(BlueprintCallable, Category = "StatFunctions", meta = (WorldContext = "WorldContextObject", ExpandEnumAsExecs = "CallResult") )
		void RequestStats(ECallResult& CallResult);
	UFUNCTION(BlueprintCallable, Category = "StatFunctions", meta = (WorldContext = "WorldContextObject", ExpandEnumAsExecs = "CallResult"))
		void RequestPlayerStats(const FString& PlayFabId, ECallResult& CallResult);
	UFUNCTION(BlueprintCallable, Category = "StatFunctions", meta = (WorldContext = "WorldContextObject", ExpandEnumAsExecs = "CallResult"))
		void IsAchievementUnlocked(const struct FAchievement& Achievement, ECallResult& CallResult, bool& bIsUnlocked);
	UFUNCTION(BlueprintCallable, Category = "StatFunctions", meta = (WorldContext = "WorldContextObject"))
		void IncrementValueChecked(class UWorld* World, const struct FStat& Stat);
	UFUNCTION(BlueprintCallable, Category = "StatFunctions", meta = (WorldContext = "WorldContextObject"))
		bool GetValueByName(const FString& StatName, int& OutValue);
	UFUNCTION(BlueprintCallable, Category = "StatFunctions", meta = (WorldContext = "WorldContextObject", ExpandEnumAsExecs = "CallResult"))
		void GetValue(const struct FStat& Stat, ECallResult& CallResult, int& Value);
	UFUNCTION(BlueprintCallable, Category = "StatFunctions", meta = (WorldContext = "WorldContextObject", ExpandEnumAsExecs = "CallResult"))
		void GetPlayerValue(const FString& PlayFabId, const struct FStat& Stat, ECallResult& CallResult, int& Value);
	UFUNCTION(BlueprintCallable, Category = "StatFunctions", meta = (WorldContext = "WorldContextObject"))
		bool AreStatsAvailable(const FString& PlayFabId);
};
