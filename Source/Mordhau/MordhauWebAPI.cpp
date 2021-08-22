// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauWebAPI.h"

UPROPERTY(BlueprintReadWrite)
EAuthStatus ReturnValue3;

void UMordhauWebAPI::ProcessRequestQueue()
{}
bool UMordhauWebAPI::IsAvailable()
{
	return 1;
}
EAuthStatus UMordhauWebAPI::GetAuthStatus()
{
	return ReturnValue3;
		}
bool UMordhauWebAPI::Authenticate()
{
	return 1;
		}
void UMordhauWebAPI::RankBackendServers(int InPingedServerCount)
{}