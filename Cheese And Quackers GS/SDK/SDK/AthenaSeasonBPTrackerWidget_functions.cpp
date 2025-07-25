﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: AthenaSeasonBPTrackerWidget

#include "Basic.hpp"

#include "AthenaSeasonBPTrackerWidget_classes.hpp"
#include "AthenaSeasonBPTrackerWidget_parameters.hpp"


namespace SDK
{

// Function AthenaSeasonBPTrackerWidget.AthenaSeasonBPTrackerWidget_C.ExecuteUbergraph_AthenaSeasonBPTrackerWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonBPTrackerWidget_C::ExecuteUbergraph_AthenaSeasonBPTrackerWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonBPTrackerWidget_C", "ExecuteUbergraph_AthenaSeasonBPTrackerWidget");

	Params::AthenaSeasonBPTrackerWidget_C_ExecuteUbergraph_AthenaSeasonBPTrackerWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaSeasonBPTrackerWidget.AthenaSeasonBPTrackerWidget_C.OnAccountInfoChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FFortPublicAccountInfo&    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAthenaSeasonBPTrackerWidget_C::OnAccountInfoChanged(const struct FFortPublicAccountInfo& Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSeasonBPTrackerWidget_C", "OnAccountInfoChanged");

	Params::AthenaSeasonBPTrackerWidget_C_OnAccountInfoChanged Parms{};

	Parms.Result = std::move(Result);

	UObject::ProcessEvent(Func, &Parms);
}

}

