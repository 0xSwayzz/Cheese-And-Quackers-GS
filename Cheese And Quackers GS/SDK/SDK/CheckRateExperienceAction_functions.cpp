﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: CheckRateExperienceAction

#include "Basic.hpp"

#include "CheckRateExperienceAction_classes.hpp"
#include "CheckRateExperienceAction_parameters.hpp"


namespace SDK
{

// Function CheckRateExperienceAction.CheckRateExperienceAction_C.HandleClientEvent_FinishedModalQueue
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EventSource                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          EventFocus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FFortClientEvent&          ClientEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ACheckRateExperienceAction_C::HandleClientEvent_FinishedModalQueue(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckRateExperienceAction_C", "HandleClientEvent_FinishedModalQueue");

	Params::CheckRateExperienceAction_C_HandleClientEvent_FinishedModalQueue Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CheckRateExperienceAction.CheckRateExperienceAction_C.Execute
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FFortScriptedActionParams& Params_0                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ACheckRateExperienceAction_C::Execute(const struct FFortScriptedActionParams& Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckRateExperienceAction_C", "Execute");

	Params::CheckRateExperienceAction_C_Execute Parms{};

	Parms.Params_0 = std::move(Params_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CheckRateExperienceAction.CheckRateExperienceAction_C.ExecuteUbergraph_CheckRateExperienceAction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACheckRateExperienceAction_C::ExecuteUbergraph_CheckRateExperienceAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckRateExperienceAction_C", "ExecuteUbergraph_CheckRateExperienceAction");

	Params::CheckRateExperienceAction_C_ExecuteUbergraph_CheckRateExperienceAction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

