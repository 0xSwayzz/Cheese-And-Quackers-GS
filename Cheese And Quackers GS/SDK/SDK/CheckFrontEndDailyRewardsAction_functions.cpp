﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: CheckFrontEndDailyRewardsAction

#include "Basic.hpp"

#include "CheckFrontEndDailyRewardsAction_classes.hpp"
#include "CheckFrontEndDailyRewardsAction_parameters.hpp"


namespace SDK
{

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.IsFrontEndRewards Running
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   IsRunning                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFrontEndDailyRewardsAction_C::IsFrontEndRewards_Running(bool* IsRunning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckFrontEndDailyRewardsAction_C", "IsFrontEndRewards Running");

	Params::CheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsRunning != nullptr)
		*IsRunning = Parms.IsRunning;
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Daily Rewards Open
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   bRunning                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFrontEndDailyRewardsAction_C::Daily_Rewards_Open(bool* bRunning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckFrontEndDailyRewardsAction_C", "Daily Rewards Open");

	Params::CheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bRunning != nullptr)
		*bRunning = Parms.bRunning;
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.CompleteDailyRewardAction
// (Public, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndDailyRewardsAction_C::CompleteDailyRewardAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckFrontEndDailyRewardsAction_C", "CompleteDailyRewardAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ShowDailyRewards
// (Public, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndDailyRewardsAction_C::ShowDailyRewards()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckFrontEndDailyRewardsAction_C", "ShowDailyRewards");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Execute
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FFortScriptedActionParams& Params_0                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ACheckFrontEndDailyRewardsAction_C::Execute(const struct FFortScriptedActionParams& Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckFrontEndDailyRewardsAction_C", "Execute");

	Params::CheckFrontEndDailyRewardsAction_C_Execute Parms{};

	Parms.Params_0 = std::move(Params_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.HandleClientEvent_FinishedModalQueue
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EventSource                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          EventFocus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FFortClientEvent&          ClientEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ACheckFrontEndDailyRewardsAction_C::HandleClientEvent_FinishedModalQueue(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckFrontEndDailyRewardsAction_C", "HandleClientEvent_FinishedModalQueue");

	Params::CheckFrontEndDailyRewardsAction_C_HandleClientEvent_FinishedModalQueue Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ExecuteUbergraph_CheckFrontEndDailyRewardsAction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACheckFrontEndDailyRewardsAction_C::ExecuteUbergraph_CheckFrontEndDailyRewardsAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckFrontEndDailyRewardsAction_C", "ExecuteUbergraph_CheckFrontEndDailyRewardsAction");

	Params::CheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

