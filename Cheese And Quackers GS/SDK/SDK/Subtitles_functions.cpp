﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: Subtitles

#include "Basic.hpp"

#include "Subtitles_classes.hpp"
#include "Subtitles_parameters.hpp"


namespace SDK
{

// Function Subtitles.Subtitles_C.ExecuteUbergraph_Subtitles
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubtitles_C::ExecuteUbergraph_Subtitles(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Subtitles_C", "ExecuteUbergraph_Subtitles");

	Params::Subtitles_C_ExecuteUbergraph_Subtitles Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Subtitles.Subtitles_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USubtitles_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Subtitles_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Subtitles.Subtitles_C.GetSubtitleVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility USubtitles_C::GetSubtitleVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Subtitles_C", "GetSubtitleVisibility");

	Params::Subtitles_C_GetSubtitleVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

