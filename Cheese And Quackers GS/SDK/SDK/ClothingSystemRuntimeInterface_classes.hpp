﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ClothingSystemRuntimeInterface

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// 0x0020 (0x0048 - 0x0028)
class UClothingAssetBase : public UObject
{
public:
	class FString                                 ImportedFilePath;                                  // 0x0028(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  AssetGuid;                                         // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingAssetBase">();
	}
	static class UClothingAssetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingAssetBase>();
	}
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// 0x0000 (0x0028 - 0x0028)
class UClothingSimulationFactory : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingSimulationFactory">();
	}
	static class UClothingSimulationFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingSimulationFactory>();
	}
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// 0x0008 (0x0030 - 0x0028)
class UClothingSimulationInteractor : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-8 ])

public:
	void ClothConfigUpdated();
	void PhysicsAssetUpdated();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingSimulationInteractor">();
	}
	static class UClothingSimulationInteractor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingSimulationInteractor>();
	}
};

}

