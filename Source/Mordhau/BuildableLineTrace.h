#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "BuildableTraceBase.h"
#include "BuildableLineTrace.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UBuildableLineTrace : public UBuildableTraceBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     TraceStartOffset;                                          // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     TraceEndOffset;

};