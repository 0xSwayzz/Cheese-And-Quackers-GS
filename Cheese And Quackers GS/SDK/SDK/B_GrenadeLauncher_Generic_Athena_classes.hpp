﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: B_GrenadeLauncher_Generic_Athena

#include "Basic.hpp"

#include "B_Ranged_Generic_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_GrenadeLauncher_Generic_Athena.B_GrenadeLauncher_Generic_Athena_C
// 0x0010 (0x0DB8 - 0x0DA8)
class AB_GrenadeLauncher_Generic_Athena_C final : public AB_Ranged_Generic_C
{
public:
	class UStaticMeshComponent*                   Reload_MagazineReload;                             // 0x0DA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Reload_Ammo;                                       // 0x0DB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_GrenadeLauncher_Generic_Athena_C">();
	}
	static class AB_GrenadeLauncher_Generic_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_GrenadeLauncher_Generic_Athena_C>();
	}
};

}

