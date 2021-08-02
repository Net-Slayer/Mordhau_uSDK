// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauWheeledVehicle.h"
#include "CharacterMeshComponent.h"
#include "MordhauCapsuleComponent.h"
#include "PseudoVehicleMovementComponent.h"


AMordhauWheeledVehicle::AMordhauWheeledVehicle(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer
		.SetDefaultSubobjectClass<UPseudoVehicleMovementComponent>(ACharacter::CharacterMovementComponentName))
		
{

}



