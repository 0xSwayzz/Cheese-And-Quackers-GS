﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: EventLeaderboardEventDetails

#include "Basic.hpp"

#include "EventLeaderboardEventDetails_classes.hpp"
#include "EventLeaderboardEventDetails_parameters.hpp"


namespace SDK
{

// Function EventLeaderboardEventDetails.EventLeaderboardEventDetails_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UEventLeaderboardEventDetails_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEventDetails_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventLeaderboardEventDetails.EventLeaderboardEventDetails_C.ExecuteUbergraph_EventLeaderboardEventDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardEventDetails_C::ExecuteUbergraph_EventLeaderboardEventDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEventDetails_C", "ExecuteUbergraph_EventLeaderboardEventDetails");

	Params::EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

