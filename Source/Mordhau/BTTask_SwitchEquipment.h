#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SwitchEquipment.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class MORDHAU_API UBTTask_SwitchEquipment : public UBTTaskNode
{
	GENERATED_BODY()
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bMelee; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<class UClass*> AllowedSubclasses; //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<class UClass*> NotAllowedSubclasses; //(Edit, BlueprintVisible, ZeroConstructor)
};