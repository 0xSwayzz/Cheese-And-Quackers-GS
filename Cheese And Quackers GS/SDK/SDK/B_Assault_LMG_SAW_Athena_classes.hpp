﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: B_Assault_LMG_SAW_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "B_Assault_Bulletswarm_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C
// 0x0020 (0x0DC8 - 0x0DA8)
class AB_Assault_LMG_SAW_Athena_C final : public AB_Assault_Bulletswarm_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Assault_LMG_SAW_Athena_C;         // 0x0DA8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                LaserScaleUntargeted;                              // 0x0DB0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LaserScaleTargeted;                                // 0x0DBC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Assault_LMG_SAW_Athena(int32 EntryPoint);
	void OnSetTargeting(bool bNewIsTargeting);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Assault_LMG_SAW_Athena_C">();
	}
	static class AB_Assault_LMG_SAW_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Assault_LMG_SAW_Athena_C>();
	}
};

}

