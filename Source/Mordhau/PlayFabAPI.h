// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Engine.h"
#include "PlayFabAPI.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class MORDHAU_API UPlayFabAPI : public UObject {
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FScriptMulticastDelegate OnGetLeaderboardComplete; // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool IsPlayerLoggedIn();
	UFUNCTION(BlueprintCallable)
		void GetLeaderboard(const FString& LeaderboardName);
};
