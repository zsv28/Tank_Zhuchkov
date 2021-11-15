// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULESINVENTARY_InventoryItem_generated_h
#error "InventoryItem.generated.h already included, missing '#pragma once' in InventoryItem.h"
#endif
#define MODULESINVENTARY_InventoryItem_generated_h

#define TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryItem_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventorySlotInfo_Statics; \
	MODULESINVENTARY_API static class UScriptStruct* StaticStruct();


template<> MODULESINVENTARY_API UScriptStruct* StaticStruct<struct FInventorySlotInfo>();

#define TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryItem_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItemInfo_Statics; \
	MODULESINVENTARY_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MODULESINVENTARY_API UScriptStruct* StaticStruct<struct FInventoryItemInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryItem_h


#define FOREACH_ENUM_EEQUIPSLOT(op) \
	op(EEquipSlot::ES_None) \
	op(EEquipSlot::ES_Cannon) \
	op(EEquipSlot::ES_Tower) \
	op(EEquipSlot::ES_Engine) \
	op(EEquipSlot::ES_TankTrack) \
	op(EEquipSlot::ES_Bullet) 

enum class EEquipSlot : uint8;
template<> MODULESINVENTARY_API UEnum* StaticEnum<EEquipSlot>();

#define FOREACH_ENUM_EITEMRARITY(op) \
	op(EItemRarity::IR_Common) \
	op(EItemRarity::IR_Uncommon) \
	op(EItemRarity::IR_Rare) \
	op(EItemRarity::IR_Epic) \
	op(EItemRarity::IR_Legendary) 

enum class EItemRarity : uint8;
template<> MODULESINVENTARY_API UEnum* StaticEnum<EItemRarity>();

#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::IT_Miscellaneous) \
	op(EItemType::IT_Currency) \
	op(EItemType::IT_Equipment) \
	op(EItemType::IT_Consumable) 

enum class EItemType : uint8;
template<> MODULESINVENTARY_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
