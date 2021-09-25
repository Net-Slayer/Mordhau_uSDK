// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauActor.h"
#include "Net/UnrealNetwork.h"
#include "MordhauSceneComponent.h"

AMordhauActor::AMordhauActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	UMordhauSceneComponent * RootSceneComponent = CreateDefaultSubobject<UMordhauSceneComponent>(TEXT("RootSceneComponent"));
	//RootSceneComponent = CreateDefaultSubobject<UMordhauSceneComponent>(TEXT("RootSceneComponent"));
	RootComponent = RootSceneComponent;
}

void AMordhauActor::UpdateThudVelocity(float NewThudVelocity)
{
}

void AMordhauActor::UnHighlight()
{
}

void AMordhauActor::OnThud_Implementation()
{
}

void AMordhauActor::OnRep_ReplicatedThud()
{
}

bool AMordhauActor::IsAnyInstanceOwner(TArray<class AMordhauPlayerController*> ControllerArray)
{
	return false;
}

void AMordhauActor::InteractPassively(AMordhauCharacter * Character)
{
}

void AMordhauActor::InteractionStart(AMordhauCharacter * Character)
{
}

void AMordhauActor::InteractionMaintained(AMordhauCharacter * Character)
{
}

void AMordhauActor::InteractionEnd()
{
}

void AMordhauActor::Highlight()
{
}

void AMordhauActor::HeldInteractionStart(class AMordhauCharacter* Character)
{
}


