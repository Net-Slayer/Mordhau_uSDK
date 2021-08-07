#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BTTask_VoiceOrEmote.generated.h"
/**
 *
 */
UCLASS()
class MORDHAU_API UBTTask_VoiceOrEmote : public UBTTaskNode
{
	GENERATED_BODY()
	
		virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:





	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8> VoiceCommandsList; //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8> EmotesList; //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bForceEmote; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float GlobalCooldown; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float Chance; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};