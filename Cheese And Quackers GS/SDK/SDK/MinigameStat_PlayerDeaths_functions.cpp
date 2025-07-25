﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: MinigameStat_PlayerDeaths

#include "Basic.hpp"

#include "MinigameStat_PlayerDeaths_classes.hpp"
#include "MinigameStat_PlayerDeaths_parameters.hpp"


namespace SDK
{

// Function MinigameStat_PlayerDeaths.MinigameStat_PlayerDeaths_C.Compare
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   FirstScore                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SecondScore                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UMinigameStat_PlayerDeaths_C::Compare(int32 FirstScore, int32 SecondScore) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameStat_PlayerDeaths_C", "Compare");

	Params::MinigameStat_PlayerDeaths_C_Compare Parms{};

	Parms.FirstScore = FirstScore;
	Parms.SecondScore = SecondScore;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

