﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BPI_ShieldFlash

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_ShieldFlash.BPI_ShieldFlash_C
// 0x0000 (0x0000 - 0x0000)
class IBPI_ShieldFlash_C final
{
public:
	void FlashShield();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_ShieldFlash_C">();
	}
	static class IBPI_ShieldFlash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_ShieldFlash_C>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};

}

