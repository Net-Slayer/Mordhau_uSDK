// Fill out your copyright notice in the Description page of Project Settings.

#include "SkeletalMeshMordhauActor.h"

ASkeletalMeshMordhauActor::ASkeletalMeshMordhauActor()
{
	GetRootComponent()->DestroyComponent();
	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	RootComponent = SkeletalMeshComponent;
}



