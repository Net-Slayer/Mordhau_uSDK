#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "BuildableTraceBase.h"
#include "BuildableSphereOverlap.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UBuildableSphereOverlap : public UBuildableTraceBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SphereRadius;                                              // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StartTraceXAxisPercentage;                                 // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCheckOnlyLoadedEquipement;                                // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UClass*                                      ActorClassFilter;                                          // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


};