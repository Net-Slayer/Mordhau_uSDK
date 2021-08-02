#include "DismemberableComponent.h"

bool UDismemberableComponent::TryDismember(const FName & bone, const FVector & Point, AMordhauWeapon * Weapon, EAttackMove Move, bool bIsRagdollDismember)
{
	return false;
}

bool UDismemberableComponent::QueueDismember(const FName & bone, bool bIsDismemberPartial, bool bIsBluntForce, const FVector & Force, AActor * Agent)
{
	return false;
}

bool UDismemberableComponent::ProcessQueuedDismemberment()
{
	return false;
}

void UDismemberableComponent::OnCharacterCameraStyleChanged(AMordhauCharacter * Character)
{
}

bool UDismemberableComponent::IsBoneDismembered(const FName & bone)
{
	return false;
}

ASeparatedBodyPart * UDismemberableComponent::Dismember(const FName & bone)
{
	return nullptr;
}

bool UDismemberableComponent::CanDismember(const FName & bone)
{
	return false;
}
