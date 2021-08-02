// Fill out your copyright notice in the Description page of Project Settings.

#include "Horse.h"
#include "CharacterMeshComponent.h"
#include "MordhauCapsuleComponent.h"
#include "HorseMovementComponent.h"


AHorse::AHorse(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer
		.SetDefaultSubobjectClass<UHorseMovementComponent>(ACharacter::CharacterMovementComponentName)
		.SetDefaultSubobjectClass<UCharacterMeshComponent>(ACharacter::MeshComponentName))

{		

}


void AHorse::ServerRequestRearing_Implementation()
{

}




void AHorse::SecondaryTurnNotAbsolute(float Value)
{}
void AHorse::RequestRearing()
{}

void AHorse::OnRep_ReplicatedRearing()
{}
void AHorse::OnBumpCapsuleOverlapped(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{}
bool AHorse::GetIsInRearingMode()
{
	return 1;
}
float AHorse::CalculateBumpDamage(const struct FVector& OurWorldVelocity)
{
	return 1;
}
