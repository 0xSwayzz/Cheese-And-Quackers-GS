﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: B_Constructor_BASE

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "StructRecyclingResource_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Constructor_BASE.B_Constructor_BASE_C
// 0x06D0 (0x1550 - 0x0E80)
class AB_Constructor_BASE_C final : public AFortConstructorBASE
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        BaseEnergyComponentC;                              // 0x0E88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        BaseEnergyComponentB;                              // 0x0E90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        BaseEnergyComponentA;                              // 0x0E98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_FeeltheBase_Chargup;                             // 0x0EA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        FeelTheBaseTraceLocation;                          // 0x0EA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0EB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x0EB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere_Collision_For_Anim;                         // 0x0EC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Base_Device;                                    // 0x0EC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                  FortMiniMap1;                                      // 0x0ED0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Workbench_Ticking;                                 // 0x0ED8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0EE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_BigBrother;                                     // 0x0EE8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         BigBrotherAdditionalNodes;                         // 0x0F08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F0C[0x4];                                      // 0x0F0C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UTexture2D*                             MiniMapIcon;                                       // 0x0F10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Minimap_View_Distance;                             // 0x0F18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1C[0x4];                                      // 0x0F1C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UClass*                                 GE_ElectrifiedFloors;                              // 0x0F20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_Hyperthreading;                                 // 0x0F28(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_SubroutineOptimization;                         // 0x0F48(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_SubroutineOptimization;                         // 0x0F68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_Recycling;                                      // 0x0F70(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ConnectedWood;                                     // 0x0F90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ConnectedStone;                                    // 0x0F94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ConnectedMetal;                                    // 0x0F98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9C[0x4];                                      // 0x0F9C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortWorldItemDefinition*               Wood;                                              // 0x0FA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               Stone;                                             // 0x0FA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               Metal;                                             // 0x0FB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RecyclingMultiplier;                               // 0x0FB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnWood;                                         // 0x0FBC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SpawnStone;                                        // 0x0FBD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SpawnMetal;                                        // 0x0FBE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FBF[0x1];                                      // 0x0FBF(0x0001)(Fixing Size After Last Property [ Dumper-8 ])
	int32                                         SpawnMax;                                          // 0x0FC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperThreadingMultiplier;                          // 0x0FC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_DefensiveIntegration;                           // 0x0FC8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_DefensiveIntegration;                           // 0x0FE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_AutomatedDefenses;                              // 0x0FF0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         AutomatedDefenses_Additional_Nodes;                // 0x1010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1014[0x4];                                     // 0x1014(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	struct FGameplayTagContainer                  TC_TotalIntegration;                               // 0x1018(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_PowerModulation;                                // 0x1038(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_PowerModulation;                                // 0x1058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DefensiveIntegrationLevel;                         // 0x1060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1064[0x4];                                     // 0x1064(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UClass*                                 GE_LoftyArchitecture;                              // 0x1068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_LoftyArchitecture;                              // 0x1070(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_SafetyProtocols;                                // 0x1090(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_SafetyProtocols;                                // 0x10B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BaseIsPlaced;                                      // 0x10B8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_10B9[0x3];                                     // 0x10B9(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	int32                                         NumPlayersNearBase;                                // 0x10BC(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BasePowerLevel;                                    // 0x10C0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalResourcesSpawned;                             // 0x10C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ResourceLimit;                                     // 0x10C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10CC[0x4];                                     // 0x10CC(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	struct FGameplayTagContainer                  TC_Overclocking;                                   // 0x10D0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_UpgradedPowerModulation;                        // 0x10F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_ElectrifiedFloors;                              // 0x10F8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_SlowUnit;                                       // 0x1118(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_SlowUnit;                                       // 0x1138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_ContainmentUnit;                                // 0x1140(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_Grant_TriggerReflectDamage_FromBASEWall;        // 0x1160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_StrongerExit;                                   // 0x1168(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_StrongerExit;                                   // 0x1188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_CardioFeedbackLoop;                             // 0x1190(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_ShieldCapacitor;                                // 0x11B0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_ShieldCapacitor;                                // 0x11D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStructRecyclingResource               StoredWood;                                        // 0x11D8(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStructRecyclingResource               StoredStone;                                       // 0x11E8(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStructRecyclingResource               StoredMetal;                                       // 0x11F8(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HyperthreadingResourceLimit;                       // 0x1208(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MegaBASEAdditionalNodes;                           // 0x120C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_NeuroFeedbackLoop;                              // 0x1210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                ConstructorAbilitySystemComponent;                 // 0x1218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_OutgoingHealAmp;                                // 0x1220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_FullyContained;                                 // 0x1228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Effect_Mesh_Comp;                                  // 0x1230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             Inner_MIDs_Friendly;                               // 0x1238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         Transition_Start_Delay;                            // 0x1248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124C[0x4];                                     // 0x124C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	TArray<class UMaterialInterface*>             Outer_MIDs_Friendly;                               // 0x1250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_MegaBASE;                                       // 0x1260(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_NeuroFeedbackLoop;                              // 0x1280(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_CardioFeedbackLoop;                             // 0x12A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_FullyContained;                                 // 0x12A8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          InitialStaticMeshAnimationIsComplete;              // 0x12C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12C9[0x7];                                     // 0x12C9(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class USoundBase*                             SoundResourcesCreated;                             // 0x12D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundResourcesCollected;                           // 0x12D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           EffectMeshArray;                                   // 0x12E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABuildingSMActor*>               BuildingActorArray;                                // 0x12F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         DelayBeforeShowingMeshes;                          // 0x1300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DelayDisabled;                                     // 0x1304(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1305[0x3];                                     // 0x1305(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	struct FTimerHandle                           DelayedMeshedTimer;                                // 0x1308(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_TrapDamage;                                     // 0x1310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_TrapDamage;                                     // 0x1318(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_TrapReloadRate;                                 // 0x1338(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_TrapReloadRate;                                 // 0x1358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_Constructor_BASEOutgoingDamageMod;              // 0x1360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         T1Amount;                                          // 0x1368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         T2Amount;                                          // 0x136C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         T3Amount;                                          // 0x1370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RecyclingTimer;                                    // 0x1374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_FeelTheBase;                                    // 0x1378(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_FeelTheBase;                                    // 0x1398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Constructor_C*              ConstructorPawn;                                   // 0x13A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FeelTheBasePowerLevel1;                            // 0x13A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FeelTheBasePowerLevel2;                            // 0x13B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FeelTheBasePowerLevel3;                            // 0x13B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             EnergyBuildASound;                                 // 0x13C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             EnergyBuildBSound;                                 // 0x13C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             EnergyBuildCSound;                                 // 0x13D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             EnergyStageTransitionSound;                        // 0x13D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPlayingLoopA;                                   // 0x13E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13E1[0x7];                                     // 0x13E1(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UClass*                                 GE_Enduring_Machine;                               // 0x13E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_Enduring_Machine;                               // 0x13F0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_MegaBASE_T01;                                   // 0x1410(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_MegaBASE_T02;                                   // 0x1430(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         MegaBASE_AdditionalNodes_T01;                      // 0x1450(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         MegaBASE_AdditionalNodes_T02;                      // 0x1470(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_Recycling_T01;                                  // 0x1490(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_Recycling_T02;                                  // 0x14B0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         NewVar_0;                                          // 0x14D0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         NewVar_1;                                          // 0x14F0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_BASEMD;                                         // 0x1510(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_BASEMD;                                         // 0x1530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           TC_FullyContained_T01;                             // 0x1538(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          NewHeroSystem;                                     // 0x1540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1541[0x7];                                     // 0x1541(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UClass*                                 GE_FullyContained_T01;                             // 0x1548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Constructor_BASE(int32 EntryPoint);
	void BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature(class FName EventName, float EmitterTime, int32 ParticleCount);
	void ResetFeelTheBaseGlow();
	void FeelTheBaseGlow(bool Stack1, bool Stack2, bool Stack3);
	void SaveOwner(class APlayerPawn_Constructor_C* ConstructorPawn_0);
	void ApplyTrapEffects();
	void ShowHiddenMeshes();
	void BaseIsReadyToAnimate();
	void ResourcesCollected();
	void ResourcesCreated();
	void GetDamageAmp();
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn);
	void StopBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp);
	void StartBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp);
	void AnimateLegs(bool LegsUp);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Recycling();
	void OnPlaced(class UAbilitySystemComponent* InstigatorAbilitySystemComponent);
	void SetupBaseDefaultValues(class UAbilitySystemComponent* Ability_System_Component, int32* NodesToAffect_0);
	void Setup_Base_Effect_Array(class UAbilitySystemComponent* Instigator_Ability_System, TArray<struct FBASEGameplayEffect>* BASEBuildingEffects, TArray<struct FBASEGameplayEffect>* BASEFriendlyEffects, TArray<struct FBASEGameplayEffect>* BASEHostileEffects);
	void SetupBuildingEffects(class UAbilitySystemComponent* AbilitySystemComponent_0, TArray<struct FBASEGameplayEffect>* BuildingEffects);
	void SetupFriendlyEffects(class UAbilitySystemComponent* AbilitySystemComponent_0, TArray<struct FBASEGameplayEffect>* FriendlyEffects);
	void SetupHostileEffects(class UAbilitySystemComponent* AbilitySystemComponent_0, TArray<struct FBASEGameplayEffect>* HostileEffects);
	void RecycleResources();
	void OnRep_BaseIsPlaced();
	void SpawnResourceForRecycling(class UFortWorldItemDefinition* ItemDefinition, int32 AmountToSpawn, EFortResourceType ResourceType_0);
	void AddResourceToStack(const struct FStructRecyclingResource& RecyclingResource, class UFortWorldItemDefinition* Stored_Resource, int32 AmountToSpawn, struct FStructRecyclingResource* SetValue);
	void OnRep_CollectResources();
	void SetDamageMultiplier();
	void SetBaseVisualGlow(class UAbilitySystemComponent* AbilitySystemComponent_0);
	void BaseSelfApplyGameplaySpec(const struct FGameplayEffectSpecHandle& GE_Spec);
	void OnRep_InitialStaticMeshAnimationIsComplete();
	void GetTrapGEFromTag(const struct FGameplayTagContainer& InTag, class UClass** OutGE);
	void SetupTrapEffects(class UAbilitySystemComponent* AbilityComponent);
	void SetHealingMultiplier();
	void SpawnResourceWithAmount(class UFortWorldItemDefinition* ItemDefinition, int32 AmountToSpawn, EFortResourceType ResourceType_0);
	void GetFeelTheBaseTraceLocation(struct FTransform* TraceLocation);
	void UpdateAudioCrossfade(class USoundBase* Sound);

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Constructor_BASE_C">();
	}
	static class AB_Constructor_BASE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Constructor_BASE_C>();
	}
};

}

