﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GiftBoxButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function GiftBoxButton.GiftBoxButton_C.PlayGiftSelectedAnimation
// 0x0001 (0x0001 - 0x0000)
struct GiftBoxButton_C_PlayGiftSelectedAnimation final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GiftBoxButton.GiftBoxButton_C.ExecuteUbergraph_GiftBoxButton
// 0x0020 (0x0020 - 0x0000)
struct GiftBoxButton_C_ExecuteUbergraph_GiftBoxButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

