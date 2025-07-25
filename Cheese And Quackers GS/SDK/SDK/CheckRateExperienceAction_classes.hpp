﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: CheckRateExperienceAction

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CheckRateExperienceAction.CheckRateExperienceAction_C
// 0x0010 (0x02B0 - 0x02A0)
class ACheckRateExperienceAction_C final : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void HandleClientEvent_FinishedModalQueue(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void Execute(const struct FFortScriptedActionParams& Params_0);
	void ExecuteUbergraph_CheckRateExperienceAction(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CheckRateExperienceAction_C">();
	}
	static class ACheckRateExperienceAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACheckRateExperienceAction_C>();
	}
};

}

