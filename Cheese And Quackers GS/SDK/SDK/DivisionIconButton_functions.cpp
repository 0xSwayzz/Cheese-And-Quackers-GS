﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: DivisionIconButton

#include "Basic.hpp"

#include "DivisionIconButton_classes.hpp"
#include "DivisionIconButton_parameters.hpp"


namespace SDK
{

// Function DivisionIconButton.DivisionIconButton_C.OnRankButtonSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDivisionIconButton_C::OnRankButtonSelected(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DivisionIconButton_C", "OnRankButtonSelected");

	Params::DivisionIconButton_C_OnRankButtonSelected Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DivisionIconButton.DivisionIconButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UDivisionIconButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DivisionIconButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DivisionIconButton.DivisionIconButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UDivisionIconButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DivisionIconButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DivisionIconButton.DivisionIconButton_C.ExecuteUbergraph_DivisionIconButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDivisionIconButton_C::ExecuteUbergraph_DivisionIconButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DivisionIconButton_C", "ExecuteUbergraph_DivisionIconButton");

	Params::DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

