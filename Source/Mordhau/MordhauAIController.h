// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Engine.h"
#include "MordhauCharacter.h"
#include "Mordhau.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "MordhauAIController.generated.h"

/**
 *
 */

USTRUCT(Blueprintable)
struct FPerceptionInfo
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bSight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bHearing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8			                                     Team;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              UpdateTime;
};
UCLASS()
class MORDHAU_API AMordhauAIController : public AAIController
{
	GENERATED_BODY()

public:

	AMordhauAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSet<class AMordhauCharacter*> ClosestEnemyIgnoreSet;
	UPROPERTY()
		TWeakObjectPtr<class AActor> FacingActor; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class USkeletalMeshComponent> FacingSkelMesh; //(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName FacingBone; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAISenseConfig_Sight* SightConfig; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAISenseConfig_Hearing* HearingConfig; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAISenseConfig_Damage* DamageConfig; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator DesiredControlRotationOverride; //(IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class AMordhauCharacter> ReallyCloseEnemyCached; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class AMordhauCharacter> LastClosestEnemy; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class AMordhauCharacter> ClosestEnemyOverride; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bFirstRun; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float LODDeltaTime; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float RandomFloat; //(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UBotProfile* BotProfile; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UBotBehaviorProfile* BehaviorProfile; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float RotationInterpolationTime; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FCharacterProfile CharacterProfile;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class ACustomizationReplicationActor* CustomizationReplicationActor; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bUsePassedCustomizationReplicationActor; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float EnemyScanInterval; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float EnemyScanIntervalVariance; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bAutoRespawn; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bWantsRespawn; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float NextRespawnTime; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bWants1DMovementBackwards; //(BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector DesiredClimbTarget; //(BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bEnableAnticipateTurns; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bEnableObstacleAvoidance; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bEnableSeparation; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bEnableOptimizeVisibility; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bEnableOptimizeTopology; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bEnablePathOffset; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bEnableSlowdownAtGoal; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float SeparationWeight; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float CollisionQueryRange; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float PathOptimizationRange; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float AvoidanceRangeMultiplier; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UClass* DefaultNavQueryFilter; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UClass* Team1NavQueryFilter; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UClass* Team2NavQueryFilter; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	//Refuses to Compile
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 		TEnumAsByte<ECrowdAvoidanceQuality::Type> AvoidanceQuality; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 		ECrowdSimulationState SimulationState; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldDat

	UFUNCTION(BlueprintCallable)
		void UpdatePerceptionInfo(class AAdvancedCharacter* InCharacter, struct FPerceptionInfo& PerceptionInfo);
	UFUNCTION(BlueprintCallable)
		void StartFacingMovement(float LocationUpOffset);
	UFUNCTION(BlueprintCallable)
		void StartFacingLocation(const struct FVector& WorldLocation);
	UFUNCTION(BlueprintCallable)
		void StartFacingBone(class USkeletalMeshComponent* SkelMesh, const FName& BoneToFace, float LocationUpOffset, const struct FVector2D& DegreeOffset);
	UFUNCTION(BlueprintCallable)
		void StartFacingActor2D(class AActor* Actor, float LocationUpOffset);
	UFUNCTION(BlueprintCallable)
		void StartFacingActor(class AActor* Actor, float LocationUpOffset, const struct FVector2D& DegreeOffset);
	UFUNCTION(BlueprintCallable)
		void SetClosestEnemyOverride(class AMordhauCharacter* Override);
	UFUNCTION(BlueprintCallable)
		void RequestVoiceCommand(uint8 Command);
	UFUNCTION(BlueprintCallable)
		void RefreshCharacterProfile();
	UFUNCTION(BlueprintCallable)
		bool PerceivesEnemy();
	UFUNCTION(BlueprintCallable)
		bool PerceivesAlly();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void OnStoppedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void OnStartedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo);
	UFUNCTION(BlueprintCallable)
		void OnPerceptionUpdated(TArray<class AActor*> InUpdatedActors);
	UFUNCTION(BlueprintCallable)
		void OnCharacterDiedOrDestroyed(class AAdvancedCharacter* AdvancedCharacter);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void OnAfterUnPossess();
	UFUNCTION(BlueprintCallable)
		int GetTeam();
	UFUNCTION(BlueprintCallable)
		TArray<class AMordhauCharacter*> GetPerceivedEnemies();
	UFUNCTION(BlueprintCallable)
		TArray<class AMordhauCharacter*> GetPerceivedAllies();
	UFUNCTION(BlueprintCallable)
		float GetMotionBasedRandom();
	UFUNCTION(BlueprintCallable)
		class AMordhauCharacter* GetKthClosestOfThree(int Idx);
	UFUNCTION(BlueprintCallable)
		class AActor* GetCurrentlyFacingActor();
	UFUNCTION(BlueprintCallable, BlueprintPure)
		EAIFacingMode GetCurrentFacingMode();
	UFUNCTION(BlueprintCallable)
		class AMordhauCharacter* GetClosestEnemyOverride();
	UFUNCTION(BlueprintCallable)
		class AMordhauCharacter* GetClosestEnemy();
	UFUNCTION(BlueprintCallable)
		class AMordhauCharacter* GetClosestAlly();
	UFUNCTION(BlueprintCallable)
		int GetAllyClearanceSides();
	UFUNCTION(BlueprintCallable)
		void DestroyController();
};