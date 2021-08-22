#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_MeleeDefend.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class MORDHAU_API UBTTask_MeleeDefend : public UBTTaskNode
{
	GENERATED_BODY()
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
public:
};