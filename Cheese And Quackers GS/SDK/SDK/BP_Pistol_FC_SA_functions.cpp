﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BP_Pistol_FC_SA

#include "Basic.hpp"

#include "BP_Pistol_FC_SA_classes.hpp"
#include "BP_Pistol_FC_SA_parameters.hpp"


namespace SDK
{

// Function BP_Pistol_FC_SA.BP_Pistol_FC_SA_C.ExecuteUbergraph_BP_Pistol_FC_SA
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Pistol_FC_SA_C::ExecuteUbergraph_BP_Pistol_FC_SA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Pistol_FC_SA_C", "ExecuteUbergraph_BP_Pistol_FC_SA");

	Params::BP_Pistol_FC_SA_C_ExecuteUbergraph_BP_Pistol_FC_SA Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

