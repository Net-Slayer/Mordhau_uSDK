#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "BuildableTraceBase.h"
#include "BuildablePlaneTrace.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UBuildablePlaneTrace : public UBuildableTraceBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<class UClass*>                              CheckActorsOnPlaneTraceHit;                                // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	struct FSpawnablePlaneInfo PlaneInfo;                                                 // 0x0070(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	struct FVector                                     TraceAmount;                                               // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<class UClass*>                              ForbiddenHitActorsList;                                    // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool                                               bInverseXYAngle;                                           // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float                                              MaxAllowedPlacementAngle;                                  // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float                                              InverseXAxisMod;                                           // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float                                              InverseYAxisMod;                                           // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	struct FVector                                     PlacementLocationOffset;                                   // 0x00B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	struct FRotator                                    PlacementRotationOffset;                                   // 0x00C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


// 	void GetPlacementAngleAndRotation(struct FSpawnablePlaneTraceResult* OutTraceResult, const struct FSpawnableObjectInfo& ObjectInfo, float* OutAngle, struct FRotator* OutRotation);
// 	
// 	void DrawDebugPlane(class UObject* WorldContextObject, const struct FVector& Forward, const struct FVector& Back, const struct FVector& Right, const struct FVector& Left, const struct FVector& InTraceAmount, TEnumAsByte<Engine::EDrawDebugTrace> DrawDebugType);



};