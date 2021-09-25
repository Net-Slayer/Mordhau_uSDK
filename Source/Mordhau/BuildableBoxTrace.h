#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "BuildableTraceBase.h"
#include "BuildableBoxTrace.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UBuildableBoxTrace : public UBuildableTraceBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FName                                       ProfileName;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StartTraceXAxisPercentage;                                 // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};