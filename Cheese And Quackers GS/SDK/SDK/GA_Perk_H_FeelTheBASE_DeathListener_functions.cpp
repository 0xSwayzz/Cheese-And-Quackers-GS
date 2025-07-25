﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GA_Perk_H_FeelTheBASE_DeathListener

#include "Basic.hpp"

#include "GA_Perk_H_FeelTheBASE_DeathListener_classes.hpp"
#include "GA_Perk_H_FeelTheBASE_DeathListener_parameters.hpp"


namespace SDK
{

// Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.ExecuteUbergraph_GA_Perk_H_FeelTheBASE_DeathListener
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Perk_H_FeelTheBASE_DeathListener_C::ExecuteUbergraph_GA_Perk_H_FeelTheBASE_DeathListener(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Perk_H_FeelTheBASE_DeathListener_C", "ExecuteUbergraph_GA_Perk_H_FeelTheBASE_DeathListener");

	Params::GA_Perk_H_FeelTheBASE_DeathListener_C_ExecuteUbergraph_GA_Perk_H_FeelTheBASE_DeathListener Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        EventData_0                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Perk_H_FeelTheBASE_DeathListener_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Perk_H_FeelTheBASE_DeathListener_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Perk_H_FeelTheBASE_DeathListener_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData_0 = std::move(EventData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.ExecuteGC
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_Perk_C_Constructor_BASE_C*     BaseReference                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Overflow                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Perk_H_FeelTheBASE_DeathListener_C::ExecuteGC(class AB_Perk_C_Constructor_BASE_C* BaseReference, bool* Overflow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Perk_H_FeelTheBASE_DeathListener_C", "ExecuteGC");

	Params::GA_Perk_H_FeelTheBASE_DeathListener_C_ExecuteGC Parms{};

	Parms.BaseReference = BaseReference;

	UObject::ProcessEvent(Func, &Parms);

	if (Overflow != nullptr)
		*Overflow = Parms.Overflow;
}


// Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.ActivateBaseStacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Stack_Count                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Perk_C_Constructor_BASE_C*     BaseReference                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Perk_H_FeelTheBASE_DeathListener_C::ActivateBaseStacks(int32 Stack_Count, class AB_Perk_C_Constructor_BASE_C* BaseReference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Perk_H_FeelTheBASE_DeathListener_C", "ActivateBaseStacks");

	Params::GA_Perk_H_FeelTheBASE_DeathListener_C_ActivateBaseStacks Parms{};

	Parms.Stack_Count = Stack_Count;
	Parms.BaseReference = BaseReference;

	UObject::ProcessEvent(Func, &Parms);
}

}

