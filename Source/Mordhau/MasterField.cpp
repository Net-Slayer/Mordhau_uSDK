// Fill out your copyright notice in the Description page of Project Settings.

#include "MasterField.h"


void AMasterField::GetSubFields(TArray<class ASubField*>& ReturnValue)
{}
FVector AMasterField::GetFieldBoundsCenter() const
{
	return FVector();
}
void AMasterField::RecomputeCombinedBoundingBox()
{}
void AMasterField::SetSubFieldsHidden(bool bAreHidden)
{}
float AMasterField::ComputeDistanceIntoField(const struct FVector& Location)
{
	return 1.0f;
}