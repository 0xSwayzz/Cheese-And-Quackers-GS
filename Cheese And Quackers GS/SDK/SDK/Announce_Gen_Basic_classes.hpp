﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: Announce_Gen_Basic

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Announce_Gen_Basic.Announce_Gen_Basic_C
// 0x0008 (0x03A0 - 0x0398)
class AAnnounce_Gen_Basic_C final : public AFortClientAnnouncement_Basic
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announce_Gen_Basic_C">();
	}
	static class AAnnounce_Gen_Basic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAnnounce_Gen_Basic_C>();
	}
};

}

