// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BotBehaviorProfile.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UBotBehaviorProfile : public UObject
{
	GENERATED_BODY()
public:
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int                                                DefaultTeam;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              FriendlyFireVoiceChance;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              HurtHelpVoiceChance;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              WasDisarmedHelpVoiceChance;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              DisarmedLaughVoiceChance;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              ThanksOnAssistVoiceChance;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              RespectOnKillVoiceChance;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int                                                IgnoreEnemiesWithAllyCount;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   RangedAccuracyDegreesMinMax;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   RangedAccuracyDistanceMinMax;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bPrefersAltMode;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              BaseAttackHesitanceTime;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              AttackHesitanceVariance;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              RegularAttackProbability;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              FootworkInsteadOfParryProbability;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              FootworkWithCrouchProbability;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   ParryTimingVariance;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              PerfectParryProbability;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              FeintTimingVariance;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              FallForFeintProbability;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              ComboProbability;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              DragProbability;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              AccelProbability;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              ChamberProbability;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              MorphProbability;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              GambleProbability;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              FeintProbability;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              RiposteProbability;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              BrawlProbability;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              MaxTurnRate;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              MaxLookUpRate;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   Random2DUnitVector;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bWillBrawl;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bWillRegularAttack;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bWillRiposte;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bWillFeint;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bWillGamble;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bWillMorph;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bWillChamber;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bWillAccel;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bWillDrag;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bWillCombo;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bWillFallForFeint;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              FeintTimingRandom;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bWillPerfectParry;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              ParryTimingRandom;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bWillFootwork;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bWillFootworkWithCrouch;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              AttackHesitanceRandom;

	
	
	
};
