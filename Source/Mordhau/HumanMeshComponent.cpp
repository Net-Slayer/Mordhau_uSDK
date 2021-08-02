#include "HumanMeshComponent.h"

void UHumanMeshComponent::UpdateSkeletalMeshComponentMaterials(USkeletalMeshComponent * USMC)
{
}

void UHumanMeshComponent::UpdateAllSkeletalMeshComponentMaterials()
{
}

void UHumanMeshComponent::SetMaterialParamsForMergedSlot(const FString & Prefix, UMordhauWearable * Wearable, UMaterialInstanceDynamic * Mid)
{
}

void UHumanMeshComponent::SetMaterialParamsForLODMasterSlot(const FString & Slot, UMordhauWearable * Wearable, UMaterialInstanceDynamic * Mid)
{
}

void UHumanMeshComponent::OnCharacterTornOff(AAdvancedCharacter * Character)
{
}

void UHumanMeshComponent::OnCharacterChangedTeam(AAdvancedCharacter * Character)
{
}

void UHumanMeshComponent::OnCharacterCameraStyleChanged(AMordhauCharacter * Character)
{
}

void UHumanMeshComponent::OnCharacterBuilt(AMordhauCharacter * Character)
{
}

bool UHumanMeshComponent::CreateUnifiedMeshIfNone(bool bRequireHeavyDutyCheck)
{
	return false;
}

bool UHumanMeshComponent::CreateFPMeshIfNone()
{
	return false;
}

bool UHumanMeshComponent::CreateFPDeadMeshIfNone()
{
	return false;
}
