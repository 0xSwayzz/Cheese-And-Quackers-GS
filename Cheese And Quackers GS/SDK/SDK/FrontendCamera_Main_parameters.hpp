﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: FrontendCamera_Main

#include "Basic.hpp"


namespace SDK::Params
{

// Function FrontendCamera_Main.FrontendCamera_Main_C.ExecuteUbergraph_FrontendCamera_Main
// 0x0028 (0x0028 - 0x0000)
struct FrontendCamera_Main_C_ExecuteUbergraph_FrontendCamera_Main final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class AFortTimeOfDayManager*                  CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

