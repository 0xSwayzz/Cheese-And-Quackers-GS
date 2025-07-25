﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: AssetRegistry

#include "Basic.hpp"

#include "AssetRegistry_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
// 0x0060 (0x0060 - 0x0000)
struct AssetRegistryHelpers_CreateAssetData final
{
public:
	const class UObject*                          InAsset;                                           // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowBlueprintClass;                              // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	struct FAssetData                             ReturnValue;                                       // 0x0010(0x0050)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.GetAsset
// 0x0058 (0x0058 - 0x0000)
struct AssetRegistryHelpers_GetAsset final
{
public:
	struct FAssetData                             InAssetData;                                       // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                ReturnValue;                                       // 0x0050(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
// 0x0010 (0x0010 - 0x0000)
struct AssetRegistryHelpers_GetAssetRegistry final
{
public:
	TScriptInterface<class IAssetRegistry>        ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.GetClass
// 0x0058 (0x0058 - 0x0000)
struct AssetRegistryHelpers_GetClass final
{
public:
	struct FAssetData                             InAssetData;                                       // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                 ReturnValue;                                       // 0x0050(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
// 0x0060 (0x0060 - 0x0000)
struct AssetRegistryHelpers_GetExportTextName final
{
public:
	struct FAssetData                             InAssetData;                                       // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0050(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.GetFullName
// 0x0060 (0x0060 - 0x0000)
struct AssetRegistryHelpers_GetFullName final
{
public:
	struct FAssetData                             InAssetData;                                       // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0050(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
// 0x0070 (0x0070 - 0x0000)
struct AssetRegistryHelpers_GetTagValue final
{
public:
	struct FAssetData                             InAssetData;                                       // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   InTagName;                                         // 0x0050(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 OutTagValue;                                       // 0x0058(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0068(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
// 0x0058 (0x0058 - 0x0000)
struct AssetRegistryHelpers_IsAssetLoaded final
{
public:
	struct FAssetData                             InAssetData;                                       // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0050(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
// 0x0058 (0x0058 - 0x0000)
struct AssetRegistryHelpers_IsRedirector final
{
public:
	struct FAssetData                             InAssetData;                                       // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0050(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
// 0x0058 (0x0058 - 0x0000)
struct AssetRegistryHelpers_IsUAsset final
{
public:
	struct FAssetData                             InAssetData;                                       // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0050(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function AssetRegistry.AssetRegistryHelpers.IsValid
// 0x0058 (0x0058 - 0x0000)
struct AssetRegistryHelpers_IsValid final
{
public:
	struct FAssetData                             InAssetData;                                       // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0050(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
// 0x01E0 (0x01E0 - 0x0000)
struct AssetRegistryHelpers_SetFilterTagsAndValues final
{
public:
	struct FARFilter                              InFilter;                                          // 0x0000(0x00E8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FTagAndValue>                   InTagsAndValues;                                   // 0x00E8(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FARFilter                              ReturnValue;                                       // 0x00F8(0x00E8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
// 0x0068 (0x0068 - 0x0000)
struct AssetRegistryHelpers_ToSoftObjectPath final
{
public:
	struct FAssetData                             InAssetData;                                       // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        ReturnValue;                                       // 0x0050(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
// 0x0010 (0x0010 - 0x0000)
struct AssetRegistry_PrioritizeSearchPath final
{
public:
	class FString                                 PathToPrioritize;                                  // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
// 0x0018 (0x0018 - 0x0000)
struct AssetRegistry_ScanFilesSynchronous final
{
public:
	TArray<class FString>                         InFilePaths;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          bForceRescan;                                      // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
// 0x0010 (0x0010 - 0x0000)
struct AssetRegistry_ScanModifiedAssetFiles final
{
public:
	TArray<class FString>                         InFilePaths;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
// 0x0018 (0x0018 - 0x0000)
struct AssetRegistry_ScanPathsSynchronous final
{
public:
	TArray<class FString>                         InPaths;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          bForceRescan;                                      // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function AssetRegistry.AssetRegistry.SearchAllAssets
// 0x0001 (0x0001 - 0x0000)
struct AssetRegistry_SearchAllAssets final
{
public:
	bool                                          bSynchronousSearch;                                // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.GetAllAssets
// 0x0018 (0x0018 - 0x0000)
struct AssetRegistry_GetAllAssets final
{
public:
	TArray<struct FAssetData>                     OutAssetData;                                      // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bIncludeOnlyOnDiskAssets;                          // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
// 0x0010 (0x0010 - 0x0000)
struct AssetRegistry_GetAllCachedPaths final
{
public:
	TArray<class FString>                         OutPathList;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
// 0x0060 (0x0060 - 0x0000)
struct AssetRegistry_GetAssetByObjectPath final
{
public:
	class FName                                   ObjectPath;                                        // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIncludeOnlyOnDiskAssets;                          // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	struct FAssetData                             ReturnValue;                                       // 0x0010(0x0050)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.GetAssets
// 0x0100 (0x0100 - 0x0000)
struct AssetRegistry_GetAssets final
{
public:
	struct FARFilter                              Filter;                                            // 0x0000(0x00E8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FAssetData>                     OutAssetData;                                      // 0x00E8(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x00F8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function AssetRegistry.AssetRegistry.GetAssetsByClass
// 0x0020 (0x0020 - 0x0000)
struct AssetRegistry_GetAssetsByClass final
{
public:
	class FName                                   ClassName;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssetData>                     OutAssetData;                                      // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bSearchSubClasses;                                 // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0019(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
// 0x0020 (0x0020 - 0x0000)
struct AssetRegistry_GetAssetsByPackageName final
{
public:
	class FName                                   PackageName;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssetData>                     OutAssetData;                                      // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bIncludeOnlyOnDiskAssets;                          // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0019(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function AssetRegistry.AssetRegistry.GetAssetsByPath
// 0x0020 (0x0020 - 0x0000)
struct AssetRegistry_GetAssetsByPath final
{
public:
	class FName                                   PackagePath;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssetData>                     OutAssetData;                                      // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bRecursive;                                        // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIncludeOnlyOnDiskAssets;                          // 0x0019(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x001A(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function AssetRegistry.AssetRegistry.GetSubPaths
// 0x0028 (0x0028 - 0x0000)
struct AssetRegistry_GetSubPaths final
{
public:
	class FString                                 InBasePath;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         OutPathList;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bInRecurse;                                        // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function AssetRegistry.AssetRegistry.HasAssets
// 0x000C (0x000C - 0x0000)
struct AssetRegistry_HasAssets final
{
public:
	class FName                                   PackagePath;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRecursive;                                        // 0x0008(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// Function AssetRegistry.AssetRegistry.IsLoadingAssets
// 0x0001 (0x0001 - 0x0000)
struct AssetRegistry_IsLoadingAssets final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
// 0x00F8 (0x00F8 - 0x0000)
struct AssetRegistry_RunAssetsThroughFilter final
{
public:
	TArray<struct FAssetData>                     AssetDataList;                                     // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FARFilter                              Filter;                                            // 0x0010(0x00E8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
// 0x00F8 (0x00F8 - 0x0000)
struct AssetRegistry_UseFilterToExcludeAssets final
{
public:
	TArray<struct FAssetData>                     AssetDataList;                                     // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FARFilter                              Filter;                                            // 0x0010(0x00E8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}

