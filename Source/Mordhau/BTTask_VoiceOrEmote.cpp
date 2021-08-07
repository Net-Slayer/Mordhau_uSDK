#include "BTTask_VoiceOrEmote.h"

EBTNodeResult::Type UBTTask_VoiceOrEmote::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UE_LOG(LogTemp, Error, TEXT("Log Some Stuff!"));
	return EBTNodeResult::Succeeded;
}
