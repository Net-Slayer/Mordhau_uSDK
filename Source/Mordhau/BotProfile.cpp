// Fill out your copyright notice in the Description page of Project Settings.

#include "BotProfile.h"
#include "UnrealNetwork.h"


void UBotProfile::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	//DOREPLIFETIME(UBotProfile, BotName)
		DOREPLIFETIME(UBotProfile, UseBotLoadoutProfileID)
		DOREPLIFETIME(UBotProfile, BehaviorProfile)
		DOREPLIFETIME(UBotProfile, bRandomizeBehavior)
		DOREPLIFETIME(UBotProfile, bRandomizeName)
		DOREPLIFETIME(UBotProfile, bRandomizeAppearance)
		DOREPLIFETIME(UBotProfile, bRandomizeFace)
		DOREPLIFETIME(UBotProfile, bRandomizeVoice)
		DOREPLIFETIME(UBotProfile, bRandomizeSkills)
		DOREPLIFETIME(UBotProfile, bRandomizeEquipment)
		DOREPLIFETIME(UBotProfile, bRandomizeWearables)
}
void UBotProfile::AssignToController(class AMordhauAIController* Controller)
{}