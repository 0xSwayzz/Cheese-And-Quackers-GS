﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ItemCalledOutAttributesDetailWidget

#include "Basic.hpp"

#include "ItemCalledOutAttributesDetailWidget_classes.hpp"
#include "ItemCalledOutAttributesDetailWidget_parameters.hpp"


namespace SDK
{

// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.Clear Stats
// (Public, BlueprintCallable, BlueprintEvent)

void UItemCalledOutAttributesDetailWidget_C::Clear_Stats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCalledOutAttributesDetailWidget_C", "Clear Stats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.UpdateStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemCalledOutAttributesDetailWidget_C::UpdateStats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCalledOutAttributesDetailWidget_C", "UpdateStats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.GetDisplayAttributesToCallOut
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortDisplayAttribute>*   Attributes                                             (Parm, OutParm, ZeroConstructor)

void UItemCalledOutAttributesDetailWidget_C::GetDisplayAttributesToCallOut(TArray<struct FFortDisplayAttribute>* Attributes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCalledOutAttributesDetailWidget_C", "GetDisplayAttributesToCallOut");

	Params::ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Attributes != nullptr)
		*Attributes = std::move(Parms.Attributes);
}


// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemCalledOutAttributesDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCalledOutAttributesDetailWidget_C", "HandlePostDifferentItemToDetailSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.HandleItemToDetailChangedBP
// (Event, Protected, BlueprintEvent)

void UItemCalledOutAttributesDetailWidget_C::HandleItemToDetailChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCalledOutAttributesDetailWidget_C", "HandleItemToDetailChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.ExecuteUbergraph_ItemCalledOutAttributesDetailWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCalledOutAttributesDetailWidget_C::ExecuteUbergraph_ItemCalledOutAttributesDetailWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCalledOutAttributesDetailWidget_C", "ExecuteUbergraph_ItemCalledOutAttributesDetailWidget");

	Params::ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

