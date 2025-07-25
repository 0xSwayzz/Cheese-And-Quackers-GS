﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: AthenaBattlePassAnimatedLogo

#include "Basic.hpp"

#include "AthenaBattlePassAnimatedLogo_classes.hpp"
#include "AthenaBattlePassAnimatedLogo_parameters.hpp"


namespace SDK
{

// Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.PlayIntroAnim
// (BlueprintCallable, BlueprintEvent)

void UAthenaBattlePassAnimatedLogo_C::PlayIntroAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBattlePassAnimatedLogo_C", "PlayIntroAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// const class UWidgetAnimation*           Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBattlePassAnimatedLogo_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBattlePassAnimatedLogo_C", "OnAnimationFinished");

	Params::AthenaBattlePassAnimatedLogo_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaBattlePassAnimatedLogo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBattlePassAnimatedLogo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.ExecuteUbergraph_AthenaBattlePassAnimatedLogo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBattlePassAnimatedLogo_C::ExecuteUbergraph_AthenaBattlePassAnimatedLogo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBattlePassAnimatedLogo_C", "ExecuteUbergraph_AthenaBattlePassAnimatedLogo");

	Params::AthenaBattlePassAnimatedLogo_C_ExecuteUbergraph_AthenaBattlePassAnimatedLogo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

