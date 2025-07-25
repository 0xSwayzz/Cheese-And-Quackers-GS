﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: FrontEndRewards_ChoiceRewards

#include "Basic.hpp"

#include "FrontEndRewards_ChoiceRewards_classes.hpp"
#include "FrontEndRewards_ChoiceRewards_parameters.hpp"


namespace SDK
{

// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleResizeFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*              Card                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::HandleResizeFinished(class URewards_ItemCard_C* Card)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "HandleResizeFinished");

	Params::FrontEndRewards_ChoiceRewards_C_HandleResizeFinished Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.AddInputActions
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::AddInputActions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "AddInputActions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleInspectAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Committed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ChoiceRewards_C::HandleInspectAction(bool* Committed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "HandleInspectAction");

	Params::FrontEndRewards_ChoiceRewards_C_HandleInspectAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Committed != nullptr)
		*Committed = Parms.Committed;
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleTransitionInComplete
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::HandleTransitionInComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "HandleTransitionInComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.PopulateFromCardList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URewards_ItemCard_C*>&     Cards                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEndRewards_ChoiceRewards_C::PopulateFromCardList(TArray<class URewards_ItemCard_C*>& Cards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "PopulateFromCardList");

	Params::FrontEndRewards_ChoiceRewards_C_PopulateFromCardList Parms{};

	Parms.Cards = std::move(Cards);

	UObject::ProcessEvent(Func, &Parms);

	Cards = std::move(Parms.Cards);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HideConfirmation
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::HideConfirmation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "HideConfirmation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ShowConfirmation
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::ShowConfirmation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "ShowConfirmation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ConfirmChoice
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::ConfirmChoice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "ConfirmChoice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetCanvasSize
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::SetCanvasSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "SetCanvasSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetSelectedItemDescription
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::SetSelectedItemDescription()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "SetSelectedItemDescription");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.HandleCardClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*              ItemCard                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::HandleCardClicked(class URewards_ItemCard_C* ItemCard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "HandleCardClicked");

	Params::FrontEndRewards_ChoiceRewards_C_HandleCardClicked Parms{};

	Parms.ItemCard = ItemCard;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectPreviousCard
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::SelectPreviousCard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "SelectPreviousCard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectNextCard
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::SelectNextCard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "SelectNextCard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SelectCard
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewSelection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::SelectCard(int32 NewSelection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "SelectCard");

	Params::FrontEndRewards_ChoiceRewards_C_SelectCard Parms{};

	Parms.NewSelection = NewSelection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.SetCardSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*              Card                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::SetCardSelected(class URewards_ItemCard_C* Card)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "SetCardSelected");

	Params::FrontEndRewards_ChoiceRewards_C_SetCardSelected Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.InitDesignView
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::InitDesignView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "InitDesignView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.AdjustCardPositions
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::AdjustCardPositions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "AdjustCardPositions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_ChoiceRewards_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "PreConstruct");

	Params::FrontEndRewards_ChoiceRewards_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature");

	Params::FrontEndRewards_ChoiceRewards_C_BndEvt__ButtonSure_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature");

	Params::FrontEndRewards_ChoiceRewards_C_BndEvt__ButtonNope_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.TransitionInBegin
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::TransitionInBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "TransitionInBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.TransitionOutBegin
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::TransitionOutBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "TransitionOutBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnNavigationLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::OnNavigationLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "OnNavigationLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnNavigationRight
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::OnNavigationRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "OnNavigationRight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "CustomEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnPrimaryAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::OnPrimaryAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "OnPrimaryAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFrontEndRewards_ChoiceRewards_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_ChoiceRewards.FrontEndRewards_ChoiceRewards_C.ExecuteUbergraph_FrontEndRewards_ChoiceRewards
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_ChoiceRewards_C::ExecuteUbergraph_FrontEndRewards_ChoiceRewards(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_ChoiceRewards_C", "ExecuteUbergraph_FrontEndRewards_ChoiceRewards");

	Params::FrontEndRewards_ChoiceRewards_C_ExecuteUbergraph_FrontEndRewards_ChoiceRewards Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

