﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GCN_BoostJumpPack_Boost

#include "Basic.hpp"

#include "GCN_BoostJumpPack_Boost_classes.hpp"
#include "GCN_BoostJumpPack_Boost_parameters.hpp"


namespace SDK
{

// Function GCN_BoostJumpPack_Boost.GCN_BoostJumpPack_Boost_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*         SpawnedParticleSysComponent                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGCN_BoostJumpPack_Boost_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_BoostJumpPack_Boost_C", "OnStartParticleSystemSpawned");

	Params::GCN_BoostJumpPack_Boost_C_OnStartParticleSystemSpawned Parms{};

	Parms.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

}

