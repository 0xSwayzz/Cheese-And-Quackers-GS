﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: AnimNotify_MimicTrailOff

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_MimicTrailOff.AnimNotify_MimicTrailOff_C
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_MimicTrailOff_C final : public UAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_MimicTrailOff_C">();
	}
	static class UAnimNotify_MimicTrailOff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_MimicTrailOff_C>();
	}
};

}

