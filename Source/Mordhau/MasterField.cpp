// Fill out your copyright notice in the Description page of Project Settings.

#include "MasterField.h"



struct FVector AMasterField::GetFieldBoundsCenter()
{
	return { 1,1,1 };
	}
	void AMasterField::GetSubFields(TArray<class ASubField*>& ReturnValue)
	{}
	void AMasterField::RecomputeCombinedBoundingBox()
	{}
	void AMasterField::SetSubFieldsHidden(bool bAreHidden)
	{}
	float AMasterField::ComputeDistanceIntoField(const struct FVector& Location)
	{
		return 1;
	}






