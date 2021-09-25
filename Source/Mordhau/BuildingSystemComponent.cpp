#include "BuildingSystemComponent.h"


bool UBuildingSystemComponent::ValidateSpot(const FVector Offset, FVector & OutLocation, FRotator & OutRotation, USceneComponent *& AttachToComponent, UBuildableTraceBase *& BuildableTraceHit, int SpawnableObjectIndex, bool bDrawObjectPreview)
{
	return false;
}

void UBuildingSystemComponent::SetupMeshPreview() const
{
}

int UBuildingSystemComponent::GetEquipmentPlaceableMaxLimit(int SpawnableObjectIndex)
{
	return 0;
}

FName UBuildingSystemComponent::GetEquipmentPlaceableLimitName(int SpawnableObjectIndex)
{
	return FName();
}

FSpawnableObjectInfo UBuildingSystemComponent::GetEquipmentInfo(int SpawnableObjectIndex)
{
	return FSpawnableObjectInfo();
}

FName UBuildingSystemComponent::GetEquipmentDisplayName(int SpawnableObjectIndex)
{
	return FName();
}

int UBuildingSystemComponent::GetEquipmentAmmoCost(int SpawnableObjectIndex)
{
	return 0;
}

void UBuildingSystemComponent::DisplayPreview(bool bDrawObjectPreview, bool bIsValid, const FSpawnableObjectInfo & ObjectInfo, const FTransform & ObjectTransform, int SpawnableObjectIndex)
{
}

void UBuildingSystemComponent::DestroyMeshPreview()
{
}

void UBuildingSystemComponent::AddStaticMeshPreviewIfNone(UStaticMesh * StaticMesh)
{
}

void UBuildingSystemComponent::AddSkeletalMeshPreviewIfNone(USkeletalMesh * SkeletalMesh)
{
}
