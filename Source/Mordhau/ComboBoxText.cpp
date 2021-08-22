// Fill out your copyright notice in the Description page of Project Settings.

#include "ComboBoxText.h"


FText returnText;
void UComboBoxText::SetSelectedOption(const FText& Option)
{

}
bool UComboBoxText::RemoveOption(const FText& Option)
{
	return 1;
}
void UComboBoxText::RefreshOptions()
{

}
void UComboBoxText::OnOpeningEvent__DelegateSignature()
{

}
FText UComboBoxText::GetSelectedOption()
{
	return returnText;
}
int UComboBoxText::GetOptionCount()
{
	return 1;
}
FText UComboBoxText::GetOptionAtIndex(int Index)
{
	return returnText;
}
int UComboBoxText::FindOptionIndex(const FText& Option)
{
	return 1;
}
void UComboBoxText::ClearSelection()
{

}
void UComboBoxText::ClearOptions()
{

}
void UComboBoxText::AddOption(const FText& Option)
{}
