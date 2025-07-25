﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: HuntingGeneratorLocationContext

#include "Basic.hpp"

#include "HuntingGeneratorLocationContext_classes.hpp"
#include "HuntingGeneratorLocationContext_parameters.hpp"


namespace SDK
{

// Function HuntingGeneratorLocationContext.HuntingGeneratorLocationContext_C.ProvideSingleLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                          QuerierObject                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           QuerierActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                         ResultingLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHuntingGeneratorLocationContext_C::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HuntingGeneratorLocationContext_C", "ProvideSingleLocation");

	Params::HuntingGeneratorLocationContext_C_ProvideSingleLocation Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingLocation != nullptr)
		*ResultingLocation = std::move(Parms.ResultingLocation);
}

}

