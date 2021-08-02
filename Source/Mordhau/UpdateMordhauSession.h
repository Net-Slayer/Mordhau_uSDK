// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Mordhau.h"
#include "UpdateMordhauSession.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UUpdateMordhauSession : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FScriptMulticastDelegate                    onSuccess;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FScriptMulticastDelegate                    onFailure;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UpdateSessionFn")
		static class UUpdateMordhauSession* UpdateMordhauSession(const struct FServerSearchResult& Session);
	
	
	
};
