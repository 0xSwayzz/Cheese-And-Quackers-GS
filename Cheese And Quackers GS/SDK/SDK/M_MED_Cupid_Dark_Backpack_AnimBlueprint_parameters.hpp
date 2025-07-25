﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: M_MED_Cupid_Dark_Backpack_AnimBlueprint

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function M_MED_Cupid_Dark_Backpack_AnimBlueprint.M_MED_Cupid_Dark_Backpack_AnimBlueprint_C.ExecuteUbergraph_M_MED_Cupid_Dark_Backpack_AnimBlueprint
// 0x00A0 (0x00A0 - 0x0000)
struct M_MED_Cupid_Dark_Backpack_AnimBlueprint_C_ExecuteUbergraph_M_MED_Cupid_Dark_Backpack_AnimBlueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	struct FVector                                CallFunc_GetAxes_X;                                // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetAxes_Y;                                // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetAxes_Z;                                // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCurrentAcceleration_ReturnValue;       // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function M_MED_Cupid_Dark_Backpack_AnimBlueprint.M_MED_Cupid_Dark_Backpack_AnimBlueprint_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct M_MED_Cupid_Dark_Backpack_AnimBlueprint_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

