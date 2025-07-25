﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: CheckForMessageItems

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CheckForMessageItems.CheckForMessageItems_C
// 0x0018 (0x02B8 - 0x02A0)
class ACheckForMessageItems_C final : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortGiftBoxItem*                       GiftBox;                                           // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Closed(class UCommonActivatablePanel* Closed_0);
	void ShowMessage();
	void Execute(const struct FFortScriptedActionParams& Params_0);
	void ExecuteUbergraph_CheckForMessageItems(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CheckForMessageItems_C">();
	}
	static class ACheckForMessageItems_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACheckForMessageItems_C>();
	}
};

}

