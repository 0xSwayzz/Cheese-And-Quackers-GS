﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GCL_Rift_Teleport

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCL_Rift_Teleport.GCL_Rift_Teleport_C
// 0x0000 (0x0338 - 0x0338)
class AGCL_Rift_Teleport_C final : public AFortGameplayCueNotify_Looping
{
public:
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters) const;
	void OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCL_Rift_Teleport_C">();
	}
	static class AGCL_Rift_Teleport_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCL_Rift_Teleport_C>();
	}
};

}

