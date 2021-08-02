// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauCameraManager.h"

UPROPERTY(EditAnywhere,BlueprintReadWrite)
struct FMinimalViewInfo ReturnMinView;

void AMordhauCameraManager::SetViewTargetBP(class AActor* NewTarget)
{}
void AMordhauCameraManager::SetCameraStyleBP(const FName& NewCameraStyle)
{}
void AMordhauCameraManager::LeaveMapView()
{}
void AMordhauCameraManager::LeaveCustomization()
{}
void AMordhauCameraManager::EnterMapView()
{}
void AMordhauCameraManager::EnterCustomization(class AActor* CustomizationTarget)
{}
class AActor* AMordhauCameraManager::GetViewTargetBP()
{
	return nullptr;
}
bool AMordhauCameraManager::GetIsInMapView()
{
	return 1;
}
bool AMordhauCameraManager::GetIsInCustomization()
{
	return 1;
}
FName AMordhauCameraManager::GetCameraStyleBP()
{
	return "1";
}
struct FMinimalViewInfo AMordhauCameraManager::GetCameraCache()
{
	return ReturnMinView;
}


