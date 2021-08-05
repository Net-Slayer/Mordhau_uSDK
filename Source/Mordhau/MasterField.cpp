// Fill out your copyright notice in the Description page of Project Settings.

#include "MasterField.h"


void AMasterField::UpdateField_Implementation()
{

}




struct FVector AMasterField::GetFieldBoundsCenter() const
{
	return FVector(0);
}


void AMasterField::DeactivateAndDestroyField_Implementation()
{

}

void AMasterField::SetSubFieldsHidden(bool bAreHidden)
{
}

void AMasterField::RecomputeCombinedBoundingBox()
{
}

TArray<class ASubField*> AMasterField::GetSubFields()
{
	return TArray<class ASubField*>();
}



float AMasterField::ComputeDistanceIntoField(const FVector & Location)
{
	return 0.0f;
}


void AMasterField::BeginFieldDeactivation_Implementation()
{

}

void AMasterField::CreateField_Implementation()
{

}
