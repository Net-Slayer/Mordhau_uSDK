// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mordhau.h"
#include "MordhauWebAPI.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UMordhauWebAPI : public UObject
{
	GENERATED_BODY()
	
	
public:





	UFUNCTION(BlueprintCallable, Category = "MordhauWebAPIFns")
	void RankBackendServers(int InPingedServerCount);
	UFUNCTION(BlueprintCallable, Category = "MordhauWebAPIFns")
	void ProcessRequestQueue();
	UFUNCTION(BlueprintCallable, Category = "MordhauWebAPIFns")
	bool IsAvailable();
	UFUNCTION(BlueprintCallable, Category = "MordhauWebAPIFns")
	EAuthStatus GetAuthStatus();
	UFUNCTION(BlueprintCallable, Category = "MordhauWebAPIFns")	
	bool Authenticate();
	
};
