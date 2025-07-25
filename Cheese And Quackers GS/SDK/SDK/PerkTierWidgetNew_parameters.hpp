﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: PerkTierWidgetNew

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.InitializeSettings
// 0x0028 (0x0028 - 0x0000)
struct PerkTierWidgetNew_C_InitializeSettings final
{
public:
	bool                                          bIncludeName_0;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIncludeDescription_0;                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bUseLegacyFixedSizeIcons_0;                        // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortBrushSize                                IconSize_0;                                        // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	struct FFortUIPerkTier                        FortPerkTier_0;                                    // 0x0008(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.OnGeneratePerk
// 0x00A0 (0x00A0 - 0x0000)
struct PerkTierWidgetNew_C_OnGeneratePerk final
{
public:
	struct FFortUIPerk                            Perk;                                              // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortPerkWidget_NUI*                    PerkWidget_0;                                      // 0x0098(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.ExecuteUbergraph_PerkTierWidgetNew
// 0x00D0 (0x00D0 - 0x0000)
struct PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UPerkDivider_C*                         CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortUIPerk                            K2Node_Event_Perk;                                 // 0x0018(0x0098)()
	class UFortPerkWidget_NUI*                    K2Node_Event_PerkWidget;                           // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPerkWidgetNew_C*                       K2Node_DynamicCast_AsPerk_Widget_New;              // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

