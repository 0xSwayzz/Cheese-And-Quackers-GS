﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GA_TrapGeneric

#include "Basic.hpp"

#include "GA_TrapGeneric_classes.hpp"
#include "GA_TrapGeneric_parameters.hpp"


namespace SDK
{

// Function GA_TrapGeneric.GA_TrapGeneric_C.ExecuteUbergraph_GA_TrapGeneric
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TrapGeneric_C::ExecuteUbergraph_GA_TrapGeneric(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TrapGeneric_C", "ExecuteUbergraph_GA_TrapGeneric");

	Params::GA_TrapGeneric_C_ExecuteUbergraph_GA_TrapGeneric Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TrapGeneric.GA_TrapGeneric_C.Cancelled_EFEC611E4D988CAA3867F28EE35771B3
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_TrapGeneric_C::Cancelled_EFEC611E4D988CAA3867F28EE35771B3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TrapGeneric_C", "Cancelled_EFEC611E4D988CAA3867F28EE35771B3");

	Params::GA_TrapGeneric_C_Cancelled_EFEC611E4D988CAA3867F28EE35771B3 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TrapGeneric.GA_TrapGeneric_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_TrapGeneric_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TrapGeneric_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TrapGeneric.GA_TrapGeneric_C.Targeted_EFEC611E4D988CAA3867F28EE35771B3
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_TrapGeneric_C::Targeted_EFEC611E4D988CAA3867F28EE35771B3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TrapGeneric_C", "Targeted_EFEC611E4D988CAA3867F28EE35771B3");

	Params::GA_TrapGeneric_C_Targeted_EFEC611E4D988CAA3867F28EE35771B3 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

}

