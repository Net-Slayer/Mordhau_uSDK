// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauStats.h"

void UMordhauStats::RequestStats(ECallResult & CallResult)
{
}

void UMordhauStats::RequestPlayerStats(const FString & PlayFabId, ECallResult & CallResult)
{
}

void UMordhauStats::IsAchievementUnlocked(const FAchievement & Achievement, ECallResult & CallResult, bool & bIsUnlocked)
{
}

void UMordhauStats::IncrementValueChecked(UWorld * World, const FStat & Stat)
{
}

bool UMordhauStats::GetValueByName(const FString & StatName, int & OutValue)
{
	return false;
}

void UMordhauStats::GetValue(const FStat & Stat, ECallResult & CallResult, int & Value)
{
}

void UMordhauStats::GetPlayerValue(const FString & PlayFabId, const FStat & Stat, ECallResult & CallResult, int & Value)
{
}

bool UMordhauStats::AreStatsAvailable(const FString & PlayFabId)
{
	return false;
}