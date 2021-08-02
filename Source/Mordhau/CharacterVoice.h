// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauInventoryItem.h"
#include "CharacterVoice.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UCharacterVoice : public UMordhauInventoryItem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue*                                   VoiceCommands;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue*                                   Hurt;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue*                                   Death;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue*                                   AttackYell;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue*                                   Breathing;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue*                                   Screaming;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D                                   PitchLimits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int>                                        ClipCounts;
	
	
};
