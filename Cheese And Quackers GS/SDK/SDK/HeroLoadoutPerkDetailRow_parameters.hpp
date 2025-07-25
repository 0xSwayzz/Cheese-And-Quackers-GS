﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: HeroLoadoutPerkDetailRow

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetTeamPerk
// 0x0008 (0x0008 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_SetTeamPerk final
{
public:
	class UFortTeamPerkItem*                      Team_Perk_0;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetRawAbilityKit
// 0x0008 (0x0008 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_SetRawAbilityKit final
{
public:
	class UFortAbilityKit*                        Ability_Kit;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayUnHover
// 0x0008 (0x0008 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_PlayUnHover final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayHover
// 0x0008 (0x0008 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_PlayHover final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetShouldDisplayWarning
// 0x0002 (0x0002 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_SetShouldDisplayWarning final
{
public:
	bool                                          InShouldDisplayWarning;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateLockedImage
// 0x0098 (0x0098 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_UpdateLockedImage final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPerkUnlocked_ReturnValue;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-8 ])
	struct FSlateBrush                            K2Node_Select_Default;                             // 0x0008(0x0088)(ConstParm)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayUnhoverCue
// 0x0008 (0x0008 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_PlayUnhoverCue final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayHoverCue
// 0x0008 (0x0008 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_PlayHoverCue final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetShouldDisplayAsIgnored
// 0x0002 (0x0002 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_SetShouldDisplayAsIgnored final
{
public:
	bool                                          InShouldDisplayAsIgnored;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetPerkTypeToRepresent
// 0x0001 (0x0001 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_SetPerkTypeToRepresent final
{
public:
	EFortHeroLoadoutPerkType                      Perk_Type;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.IsPerkUnlocked
// 0x0006 (0x0006 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_IsPerkUnlocked final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortHeroLoadoutPerkType                      Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCommanderPerkUnlockedForHero_ReturnValue; // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.GetPerkAbilityKit
// 0x0070 (0x0070 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_GetPerkAbilityKit final
{
public:
	class UFortAbilityKit*                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortTeamPerkItemDefinition*            K2Node_DynamicCast_AsFort_Team_Perk_Item_Definition; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortAbilityKit*                        CallFunc_GetAbilityKitBP_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortHeroLoadoutPerkType                      Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue_1;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortHeroType*                          K2Node_DynamicCast_AsFort_Hero_Type;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortAbilityKit*                        CallFunc_GetAbilityKitForHeroPerk_ReturnValue;     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilityKit*                        CallFunc_GetAbilityKitForCommanderPerk_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilityKit*                        K2Node_Select_Default;                             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHero
// 0x0008 (0x0008 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_SetHero final
{
public:
	class UFortHero*                              Hero;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateTextStyles
// 0x0058 (0x0058 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_UpdateTextStyles final
{
public:
	float                                         Temp_float_Variable;                               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	float                                         Temp_float_Variable_2;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_3;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	float                                         Temp_float_Variable_4;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	float                                         Temp_float_Variable_5;                             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_6;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPerkUnlocked_ReturnValue;               // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPerkUnlocked_ReturnValue_1;             // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Select_Default;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	float                                         K2Node_Select_Default_2;                           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPerkUnlocked_ReturnValue_2;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	float                                         K2Node_Select_Default_3;                           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_Select_Default_4;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_Select_Default_5;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateFromState
// 0x02C0 (0x02C0 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_UpdateFromState final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTeamPerkItemDefinition*            K2Node_DynamicCast_AsFort_Team_Perk_Item_Definition; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasProgressiveBonus_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortAbilityKit*                        CallFunc_GetAbilityKitBP_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0028(0x0018)()
	class UFortAbilityKit*                        CallFunc_GetPerkAbilityKit_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortAbilityKit*                        CallFunc_GetPerkAbilityKit_ReturnValue_1;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortAbilityKit*                        CallFunc_GetPerkAbilityKit_ReturnValue_2;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0070(0x0018)()
	struct FSlateBrush                            CallFunc_NoResourceBrush_ReturnValue;              // 0x0088(0x0088)()
	struct FSlateBrush                            CallFunc_ResizeBrush_ResizedBrush;                 // 0x0110(0x0088)()
	struct FSlateBrush                            CallFunc_ResizeBrush_ResizedBrush_1;               // 0x0198(0x0088)()
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                    CallFunc_SpawnTooltipContextWithSource_ReturnValue; // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                    CallFunc_SpawnTooltipContextWithSource_ReturnValue_1; // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortTooltipUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetCombinedDescription_OutDescription;    // 0x0250(0x0018)()
	bool                                          CallFunc_GetCombinedDescription_ReturnValue;       // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_269[0x7];                                      // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	const class UObject*                          K2Node_Select_Default;                             // 0x0270(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_279[0x7];                                      // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortTooltipUIContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default_1;                           // 0x0288(0x0018)()
	class FText                                   CallFunc_GetCombinedDescription_OutDescription_1;  // 0x02A0(0x0018)()
	bool                                          CallFunc_GetCombinedDescription_ReturnValue_1;     // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateFromStyle
// 0x0018 (0x0018 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_UpdateFromStyle final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHoverAlphaValue
// 0x0004 (0x0004 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_SetHoverAlphaValue final
{
public:
	float                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHoverHorizontalOffset
// 0x0004 (0x0004 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_SetHoverHorizontalOffset final
{
public:
	float                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.ExecuteUbergraph_HeroLoadoutPerkDetailRow
// 0x00C8 (0x00C8 - 0x0000)
struct HeroLoadoutPerkDetailRow_C_ExecuteUbergraph_HeroLoadoutPerkDetailRow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	float                                         K2Node_CustomEvent_NewValue_1;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_NewValue;                       // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x00A8(0x0018)()
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

