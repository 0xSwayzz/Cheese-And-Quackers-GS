﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: MinimalSquadMember

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function MinimalSquadMember.MinimalSquadMember_C.SetSitOutVisuals
// 0x0008 (0x0008 - 0x0000)
struct MinimalSquadMember_C_SetSitOutVisuals final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MinimalSquadMember.MinimalSquadMember_C.SetNotReadyVisuals
// 0x0008 (0x0008 - 0x0000)
struct MinimalSquadMember_C_SetNotReadyVisuals final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MinimalSquadMember.MinimalSquadMember_C.SetEmptyVisuals
// 0x0008 (0x0008 - 0x0000)
struct MinimalSquadMember_C_SetEmptyVisuals final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MinimalSquadMember.MinimalSquadMember_C.OnMemberGameReadinessChanged
// 0x0001 (0x0001 - 0x0000)
struct MinimalSquadMember_C_OnMemberGameReadinessChanged final
{
public:
	EGameReadiness                                ReadyStatus;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MinimalSquadMember.MinimalSquadMember_C.BP_OnTeamMemberEstablished
// 0x0001 (0x0001 - 0x0000)
struct MinimalSquadMember_C_BP_OnTeamMemberEstablished final
{
public:
	bool                                          bHasValidMember;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MinimalSquadMember.MinimalSquadMember_C.ExecuteUbergraph_MinimalSquadMember
// 0x0020 (0x0020 - 0x0000)
struct MinimalSquadMember_C_ExecuteUbergraph_MinimalSquadMember final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameReadiness                                K2Node_Event_ReadyStatus;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bHasValidMember;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCurrentMemberLocal_ReturnValue;         // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EGameReadiness                                Temp_byte_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-8 ])
	class UWidgetAnimation*                       K2Node_Select_Default;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

