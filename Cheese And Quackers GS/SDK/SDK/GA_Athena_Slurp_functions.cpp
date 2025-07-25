﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GA_Athena_Slurp

#include "Basic.hpp"

#include "GA_Athena_Slurp_classes.hpp"
#include "GA_Athena_Slurp_parameters.hpp"


namespace SDK
{

// Function GA_Athena_Slurp.GA_Athena_Slurp_C.ExecuteUbergraph_GA_Athena_Slurp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Slurp_C::ExecuteUbergraph_GA_Athena_Slurp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Slurp_C", "ExecuteUbergraph_GA_Athena_Slurp");

	Params::GA_Athena_Slurp_C_ExecuteUbergraph_GA_Athena_Slurp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Slurp.GA_Athena_Slurp_C.ApplyHealthOrShield
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Slurp_C::ApplyHealthOrShield()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Slurp_C", "ApplyHealthOrShield");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Slurp.GA_Athena_Slurp_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_Slurp_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Slurp_C", "K2_OnEndAbility");

	Params::GA_Athena_Slurp_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Slurp.GA_Athena_Slurp_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Slurp_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Slurp_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

