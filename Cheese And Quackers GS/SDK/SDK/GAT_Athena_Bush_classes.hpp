﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GAT_Athena_Bush

#include "Basic.hpp"

#include "GAT_TriggeredAbility_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_Athena_Bush.GAT_Athena_Bush_C
// 0x0018 (0x0970 - 0x0958)
class UGAT_Athena_Bush_C final : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_Athena_Bush_C;                  // 0x0958(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0960(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               BushItemDef;                                       // 0x0968(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAT_Athena_Bush(int32 EntryPoint);
	void K2_ActivateAbility();
	void RemoveBush(class AFortPlayerPawn* PlayerPawn_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_Athena_Bush_C">();
	}
	static class UGAT_Athena_Bush_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_Athena_Bush_C>();
	}
};

}

