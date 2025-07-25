﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: Frontend_CommanderNew_Camera1

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Frontend_CommanderNew_Camera1.Frontend_CommanderNew_Camera1_C
// 0x0010 (0x07F0 - 0x07E0)
class AFrontend_CommanderNew_Camera1_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x07E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_Frontend_CommanderNew_Camera1(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Frontend_CommanderNew_Camera1_C">();
	}
	static class AFrontend_CommanderNew_Camera1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontend_CommanderNew_Camera1_C>();
	}
};

}

