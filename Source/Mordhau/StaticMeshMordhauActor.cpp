// Fill out your copyright notice in the Description page of Project Settings.

#include "StaticMeshMordhauActor.h"

AStaticMeshMordhauActor::AStaticMeshMordhauActor()
{
	GetRootComponent()->DestroyComponent();
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = StaticMeshComponent;
}

