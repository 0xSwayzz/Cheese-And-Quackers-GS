﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: Tooltip_Custom_S

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Tooltip-Custom-S.Tooltip-Custom-S_C.ExecuteUbergraph_Tooltip-Custom-S
// 0x0028 (0x0028 - 0x0000)
struct Tooltip_Custom_S_C_ExecuteUbergraph_Tooltip_Custom_S final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_7;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Body Text
// 0x0018 (0x0018 - 0x0000)
struct Tooltip_Custom_S_C_Get_Body_Text final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};

// Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Header Text
// 0x0018 (0x0018 - 0x0000)
struct Tooltip_Custom_S_C_Get_Header_Text final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};

// Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Icon Brush
// 0x0110 (0x0110 - 0x0000)
struct Tooltip_Custom_S_C_Get_Icon_Brush final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x0088)(Parm, OutParm, ReturnParm)
	struct FSlateBrush                            CallFunc_MakeBrushFromAsset_ReturnValue;           // 0x0088(0x0088)()
};

}

