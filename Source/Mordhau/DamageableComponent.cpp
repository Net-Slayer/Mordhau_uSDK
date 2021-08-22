// Fill out your copyright notice in the Description page of Project Settings.

#include "DamageableComponent.h"

void UDamageableComponent::OnTookDamage(bool bWillKill, EMordhauDamageType Type, uint8 SubType, const FName & bone, const FVector & Point, AActor * Source, AActor * Agent)
{
}

float UDamageableComponent::OnTakeDamage(float DamageAmount, const FMordhauDamageInfo & DamageInfo, AController * EventInstigator, AActor * DamageCauser)
{
	return 0.0f;
}

void UDamageableComponent::OnRep_NetDamage()
{
}

void UDamageableComponent::OnPostTakeDamage(float DamageAmount, const FMordhauDamageInfo & DamageInfo, AController * EventInstigator, AActor * DamageCauser)
{
}

void UDamageableComponent::OnKilled()
{
}

float UDamageableComponent::ModifyDamage(float DamageAmount, const FMordhauDamageInfo & DamageInfo, AController * EventInstigator, AActor * DamageCauser)
{
	return 0.0f;
}
