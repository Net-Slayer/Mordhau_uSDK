#include "BTTask_VoiceOrEmote.h"



UBTTask_VoiceOrEmote::UBTTask_VoiceOrEmote(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	NodeName = "BTTask_VoiceOrEmote";
}


EBTNodeResult::Type UBTTask_VoiceOrEmote::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UE_LOG(LogTemp, Error, TEXT("Log Some Stuff!"));
	return EBTNodeResult::Succeeded;
}
