#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Engine/DataAsset.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "BuildableTraceBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UBuildableTraceBase : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<TEnumAsByte<EObjectTypeQuery>>       TraceObjectTypes;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool                                               bTraceComplex;                                             // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool                                               bIgnoreSelf;                                               // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TEnumAsByte<EDrawDebugTrace::Type>                DrawType;                                                  // 0x0042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	struct FColor                                      DrawColor;                                                 // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FText                                       TraceTextForUI;                                            // 0x0048(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};