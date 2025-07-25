﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: CreativeIslandLinkEntry

#include "Basic.hpp"

#include "CreativeIslandLinkEntry_classes.hpp"
#include "CreativeIslandLinkEntry_parameters.hpp"


namespace SDK
{

// Function CreativeIslandLinkEntry.CreativeIslandLinkEntry_C.ExecuteUbergraph_CreativeIslandLinkEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeIslandLinkEntry_C::ExecuteUbergraph_CreativeIslandLinkEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandLinkEntry_C", "ExecuteUbergraph_CreativeIslandLinkEntry");

	Params::CreativeIslandLinkEntry_C_ExecuteUbergraph_CreativeIslandLinkEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeIslandLinkEntry.CreativeIslandLinkEntry_C.BndEvt__SimplePipButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeIslandLinkEntry_C::BndEvt__SimplePipButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandLinkEntry_C", "BndEvt__SimplePipButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::CreativeIslandLinkEntry_C_BndEvt__SimplePipButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeIslandLinkEntry.CreativeIslandLinkEntry_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UCreativeIslandLinkEntry_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandLinkEntry_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativeIslandLinkEntry.CreativeIslandLinkEntry_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UCreativeIslandLinkEntry_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandLinkEntry_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativeIslandLinkEntry.CreativeIslandLinkEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeIslandLinkEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandLinkEntry_C", "OnListItemObjectSet");

	Params::CreativeIslandLinkEntry_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

}

