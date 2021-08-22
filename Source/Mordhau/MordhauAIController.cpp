// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauAIController.h"
#include "MordhauCharacter.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "UnrealNetwork.h"




AMordhauAIController::AMordhauAIController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer
		.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{}




void AMordhauAIController::UpdatePerceptionInfo(AAdvancedCharacter * InCharacter, FPerceptionInfo & PerceptionInfo)
{
}

void AMordhauAIController::StartFacingMovement(float LocationUpOffset)
{
}

void AMordhauAIController::StartFacingLocation(const FVector & WorldLocation)
{
}

void AMordhauAIController::StartFacingBone(USkeletalMeshComponent * SkelMesh, const FName & BoneToFace, float LocationUpOffset, const FVector2D & DegreeOffset)
{
}

void AMordhauAIController::StartFacingActor2D(AActor * Actor, float LocationUpOffset)
{
}

void AMordhauAIController::StartFacingActor(AActor * Actor, float LocationUpOffset, const FVector2D & DegreeOffset)
{
}

void AMordhauAIController::SetClosestEnemyOverride(AMordhauCharacter * Override)
{
}

void AMordhauAIController::RequestVoiceCommand(uint8 Command)
{
}

void AMordhauAIController::RefreshCharacterProfile()
{
}

bool AMordhauAIController::PerceivesEnemy()
{
	return false;
}

bool AMordhauAIController::PerceivesAlly()
{
	return false;
}



void AMordhauAIController::OnPerceptionUpdated(TArray<class AActor*> InUpdatedActors)
{
}

void AMordhauAIController::OnCharacterDiedOrDestroyed(AAdvancedCharacter * AdvancedCharacter)
{
}


int AMordhauAIController::GetTeam()
{
	return 0;
}

TArray<class AMordhauCharacter*> AMordhauAIController::GetPerceivedEnemies()
{
	return TArray<class AMordhauCharacter*>();
}

TArray<class AMordhauCharacter*> AMordhauAIController::GetPerceivedAllies()
{
	return TArray<class AMordhauCharacter*>();
}

float AMordhauAIController::GetMotionBasedRandom()
{
	return 0.0f;
}

AMordhauCharacter * AMordhauAIController::GetKthClosestOfThree(int Idx)
{
	return nullptr;
}

AActor * AMordhauAIController::GetCurrentlyFacingActor()
{
	return nullptr;
}

EAIFacingMode AMordhauAIController::GetCurrentFacingMode()
{
	return EAIFacingMode();
}

AMordhauCharacter * AMordhauAIController::GetClosestEnemyOverride()
{
	return nullptr;
}

AMordhauCharacter * AMordhauAIController::GetClosestEnemy()
{
	return nullptr;
}

AMordhauCharacter * AMordhauAIController::GetClosestAlly()
{
	return nullptr;
}

int AMordhauAIController::GetAllyClearanceSides()
{
	return 0;
}

void AMordhauAIController::DestroyController()
{
}
