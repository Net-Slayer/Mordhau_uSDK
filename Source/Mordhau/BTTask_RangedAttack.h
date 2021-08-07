#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_RangedAttack.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class MORDHAU_API UBTTask_RangedAttack : public UBTTaskNode
{
	GENERATED_BODY()
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float MaxProjectileFlightTime; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};