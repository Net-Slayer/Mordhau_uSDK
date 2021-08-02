// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauInventoryItem.h"
#include "MordhauWearable.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UMordhauWearable : public UMordhauInventoryItem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EWearableSlot                                      UseColorsFromSlot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D*                                  AlbedoMap;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D*                                  NormalMap;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D*                                  RoughnessMap;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FColor                                      Albedo;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Metallic;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Roughness;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MetalAlbedoDarken;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              PDO;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     BloodOffsetA;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     BloodOffsetB;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     BloodMaskSizeFine;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     BloodMaskSizeSoft;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     BloodTextureSize;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     EmblemScale;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     EmblemOffset;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              EmblemRotation;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasEmblem;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bMuffleVoice;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bTreatAsMaster;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHideIn1P;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHideEars;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHideHair;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHideBeard;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHideNose;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHideLeftHand;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHideRightHand;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHideLeftFoot;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHideRightFoot;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHideLeftLeg;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHideRightLeg;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHideChest;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHideLeftArm;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHideRightArm;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh*                               Mesh;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh*                               Mesh1POverride;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh*                               AuxiliaryMesh;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsAuxiliaryConsideredBody;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh*                               AuxiliaryMesh1POverride;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bAuxiliaryWantsMaterialInstance;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bAuxiliary1POverrideWantsMaterialInstance;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              VertexCameraDisplacement;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                CharacterPointCost;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                      ArmorClass;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsAllowedForPeasants;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SpeedFactor;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AccelerationFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FPatternInfo>                        Patterns;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                      Pattern;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8>                              Colors;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8>                              ColorTables;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIgnoreTeamColor1;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIgnoreTeamColor2;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FLinearColor                                DefaultColor1Temp;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FLinearColor                                DefaultColor2Temp;
	
	
	
};
