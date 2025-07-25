﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GA_Athena_Balloons_Consumable

#include "Basic.hpp"

#include "GA_Athena_Balloons_Consumable_classes.hpp"
#include "GA_Athena_Balloons_Consumable_parameters.hpp"


namespace SDK
{

// Function GA_Athena_Balloons_Consumable.GA_Athena_Balloons_Consumable_C.ExecuteUbergraph_GA_Athena_Balloons_Consumable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Balloons_Consumable_C::ExecuteUbergraph_GA_Athena_Balloons_Consumable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Balloons_Consumable_C", "ExecuteUbergraph_GA_Athena_Balloons_Consumable");

	Params::GA_Athena_Balloons_Consumable_C_ExecuteUbergraph_GA_Athena_Balloons_Consumable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Balloons_Consumable.GA_Athena_Balloons_Consumable_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Balloons_Consumable_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Balloons_Consumable_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Balloons_Consumable.GA_Athena_Balloons_Consumable_C.Triggered_99E3BAFE45A69278E8FDD9B6EB33BE53
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Balloons_Consumable_C::Triggered_99E3BAFE45A69278E8FDD9B6EB33BE53(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Balloons_Consumable_C", "Triggered_99E3BAFE45A69278E8FDD9B6EB33BE53");

	Params::GA_Athena_Balloons_Consumable_C_Triggered_99E3BAFE45A69278E8FDD9B6EB33BE53 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Balloons_Consumable.GA_Athena_Balloons_Consumable_C.Cancelled_99E3BAFE45A69278E8FDD9B6EB33BE53
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Balloons_Consumable_C::Cancelled_99E3BAFE45A69278E8FDD9B6EB33BE53(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Balloons_Consumable_C", "Cancelled_99E3BAFE45A69278E8FDD9B6EB33BE53");

	Params::GA_Athena_Balloons_Consumable_C_Cancelled_99E3BAFE45A69278E8FDD9B6EB33BE53 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Balloons_Consumable.GA_Athena_Balloons_Consumable_C.Completed_99E3BAFE45A69278E8FDD9B6EB33BE53
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilityTargetDataHandle&TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FGameplayTag&              ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Balloons_Consumable_C::Completed_99E3BAFE45A69278E8FDD9B6EB33BE53(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Balloons_Consumable_C", "Completed_99E3BAFE45A69278E8FDD9B6EB33BE53");

	Params::GA_Athena_Balloons_Consumable_C_Completed_99E3BAFE45A69278E8FDD9B6EB33BE53 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Balloons_Consumable.GA_Athena_Balloons_Consumable_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FGameplayAbilityActorInfo& ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayTagContainer*           RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Athena_Balloons_Consumable_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Balloons_Consumable_C", "K2_CanActivateAbility");

	Params::GA_Athena_Balloons_Consumable_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}

