﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: MaterialShaderQualitySettings

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "MaterialShaderQualitySettings_structs.hpp"


namespace SDK
{

// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// 0x0050 (0x0078 - 0x0028)
class UMaterialShaderQualitySettings final : public UObject
{
public:
	TMap<class FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;                      // 0x0028(0x0050)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialShaderQualitySettings">();
	}
	static class UMaterialShaderQualitySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialShaderQualitySettings>();
	}
};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// 0x0028 (0x0050 - 0x0028)
class UShaderPlatformQualitySettings final : public UObject
{
public:
	struct FMaterialQualityOverrides              QualityOverrides[0x3];                             // 0x0028(0x0008)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_40[0x10];                                      // 0x0040(0x0010)(Fixing Struct Size After Last Property [ Dumper-8 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ShaderPlatformQualitySettings">();
	}
	static class UShaderPlatformQualitySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShaderPlatformQualitySettings>();
	}
};

}

