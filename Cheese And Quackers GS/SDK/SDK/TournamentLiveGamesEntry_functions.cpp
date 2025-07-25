﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: TournamentLiveGamesEntry

#include "Basic.hpp"

#include "TournamentLiveGamesEntry_classes.hpp"
#include "TournamentLiveGamesEntry_parameters.hpp"


namespace SDK
{

// Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.ExecuteUbergraph_TournamentLiveGamesEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentLiveGamesEntry_C::ExecuteUbergraph_TournamentLiveGamesEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentLiveGamesEntry_C", "ExecuteUbergraph_TournamentLiveGamesEntry");

	Params::TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UTournamentLiveGamesEntry_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentLiveGamesEntry_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UTournamentLiveGamesEntry_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentLiveGamesEntry_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.OnEntrySet
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   EntryIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentLiveGamesEntry_C::OnEntrySet(int32 EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentLiveGamesEntry_C", "OnEntrySet");

	Params::TournamentLiveGamesEntry_C_OnEntrySet Parms{};

	Parms.EntryIndex = EntryIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}

