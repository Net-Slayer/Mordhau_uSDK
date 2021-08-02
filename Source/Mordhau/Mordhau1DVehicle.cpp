// Fill out your copyright notice in the Description page of Project Settings.

#include "Mordhau1DVehicle.h"
#include "OneDimensionalMovementComponent.h"
#include "CharacterMeshComponent.h"

AMordhau1DVehicle::AMordhau1DVehicle(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer
		.SetDefaultSubobjectClass<UOneDimensionalMovementComponent>(ACharacter::CharacterMovementComponentName))
		
{

}



