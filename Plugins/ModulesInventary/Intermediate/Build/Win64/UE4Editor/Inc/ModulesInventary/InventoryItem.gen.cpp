// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModulesInventary/Public/InventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItem() {}
// Cross Module References
	MODULESINVENTARY_API UEnum* Z_Construct_UEnum_ModulesInventary_EEquipSlot();
	UPackage* Z_Construct_UPackage__Script_ModulesInventary();
	MODULESINVENTARY_API UEnum* Z_Construct_UEnum_ModulesInventary_EItemRarity();
	MODULESINVENTARY_API UEnum* Z_Construct_UEnum_ModulesInventary_EItemType();
	MODULESINVENTARY_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotInfo();
	MODULESINVENTARY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* EEquipSlot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ModulesInventary_EEquipSlot, Z_Construct_UPackage__Script_ModulesInventary(), TEXT("EEquipSlot"));
		}
		return Singleton;
	}
	template<> MODULESINVENTARY_API UEnum* StaticEnum<EEquipSlot>()
	{
		return EEquipSlot_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEquipSlot(EEquipSlot_StaticEnum, TEXT("/Script/ModulesInventary"), TEXT("EEquipSlot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ModulesInventary_EEquipSlot_Hash() { return 2202610696U; }
	UEnum* Z_Construct_UEnum_ModulesInventary_EEquipSlot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ModulesInventary();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEquipSlot"), 0, Get_Z_Construct_UEnum_ModulesInventary_EEquipSlot_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEquipSlot::ES_None", (int64)EEquipSlot::ES_None },
				{ "EEquipSlot::ES_Cannon", (int64)EEquipSlot::ES_Cannon },
				{ "EEquipSlot::ES_Tower", (int64)EEquipSlot::ES_Tower },
				{ "EEquipSlot::ES_Engine", (int64)EEquipSlot::ES_Engine },
				{ "EEquipSlot::ES_TankTrack", (int64)EEquipSlot::ES_TankTrack },
				{ "EEquipSlot::ES_Bullet", (int64)EEquipSlot::ES_Bullet },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ES_Bullet.Name", "EEquipSlot::ES_Bullet" },
				{ "ES_Cannon.Name", "EEquipSlot::ES_Cannon" },
				{ "ES_Engine.Name", "EEquipSlot::ES_Engine" },
				{ "ES_None.Name", "EEquipSlot::ES_None" },
				{ "ES_TankTrack.Name", "EEquipSlot::ES_TankTrack" },
				{ "ES_Tower.Name", "EEquipSlot::ES_Tower" },
				{ "ModuleRelativePath", "Public/InventoryItem.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ModulesInventary,
				nullptr,
				"EEquipSlot",
				"EEquipSlot",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EItemRarity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ModulesInventary_EItemRarity, Z_Construct_UPackage__Script_ModulesInventary(), TEXT("EItemRarity"));
		}
		return Singleton;
	}
	template<> MODULESINVENTARY_API UEnum* StaticEnum<EItemRarity>()
	{
		return EItemRarity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemRarity(EItemRarity_StaticEnum, TEXT("/Script/ModulesInventary"), TEXT("EItemRarity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ModulesInventary_EItemRarity_Hash() { return 619157290U; }
	UEnum* Z_Construct_UEnum_ModulesInventary_EItemRarity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ModulesInventary();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemRarity"), 0, Get_Z_Construct_UEnum_ModulesInventary_EItemRarity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemRarity::IR_Common", (int64)EItemRarity::IR_Common },
				{ "EItemRarity::IR_Uncommon", (int64)EItemRarity::IR_Uncommon },
				{ "EItemRarity::IR_Rare", (int64)EItemRarity::IR_Rare },
				{ "EItemRarity::IR_Epic", (int64)EItemRarity::IR_Epic },
				{ "EItemRarity::IR_Legendary", (int64)EItemRarity::IR_Legendary },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "IR_Common.Name", "EItemRarity::IR_Common" },
				{ "IR_Epic.Name", "EItemRarity::IR_Epic" },
				{ "IR_Legendary.Name", "EItemRarity::IR_Legendary" },
				{ "IR_Rare.Name", "EItemRarity::IR_Rare" },
				{ "IR_Uncommon.Name", "EItemRarity::IR_Uncommon" },
				{ "ModuleRelativePath", "Public/InventoryItem.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ModulesInventary,
				nullptr,
				"EItemRarity",
				"EItemRarity",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ModulesInventary_EItemType, Z_Construct_UPackage__Script_ModulesInventary(), TEXT("EItemType"));
		}
		return Singleton;
	}
	template<> MODULESINVENTARY_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemType(EItemType_StaticEnum, TEXT("/Script/ModulesInventary"), TEXT("EItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ModulesInventary_EItemType_Hash() { return 2201292052U; }
	UEnum* Z_Construct_UEnum_ModulesInventary_EItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ModulesInventary();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemType"), 0, Get_Z_Construct_UEnum_ModulesInventary_EItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemType::IT_Miscellaneous", (int64)EItemType::IT_Miscellaneous },
				{ "EItemType::IT_Currency", (int64)EItemType::IT_Currency },
				{ "EItemType::IT_Equipment", (int64)EItemType::IT_Equipment },
				{ "EItemType::IT_Consumable", (int64)EItemType::IT_Consumable },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "IT_Consumable.Name", "EItemType::IT_Consumable" },
				{ "IT_Currency.Name", "EItemType::IT_Currency" },
				{ "IT_Equipment.Name", "EItemType::IT_Equipment" },
				{ "IT_Miscellaneous.Name", "EItemType::IT_Miscellaneous" },
				{ "ModuleRelativePath", "Public/InventoryItem.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ModulesInventary,
				nullptr,
				"EItemType",
				"EItemType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FInventorySlotInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODULESINVENTARY_API uint32 Get_Z_Construct_UScriptStruct_FInventorySlotInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventorySlotInfo, Z_Construct_UPackage__Script_ModulesInventary(), TEXT("InventorySlotInfo"), sizeof(FInventorySlotInfo), Get_Z_Construct_UScriptStruct_FInventorySlotInfo_Hash());
	}
	return Singleton;
}
template<> MODULESINVENTARY_API UScriptStruct* StaticStruct<FInventorySlotInfo>()
{
	return FInventorySlotInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInventorySlotInfo(FInventorySlotInfo::StaticStruct, TEXT("/Script/ModulesInventary"), TEXT("InventorySlotInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ModulesInventary_StaticRegisterNativesFInventorySlotInfo
{
	FScriptStruct_ModulesInventary_StaticRegisterNativesFInventorySlotInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InventorySlotInfo")),new UScriptStruct::TCppStructOps<FInventorySlotInfo>);
	}
} ScriptStruct_ModulesInventary_StaticRegisterNativesFInventorySlotInfo;
	struct Z_Construct_UScriptStruct_FInventorySlotInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventorySlotInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotInfo, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlotInfo, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::NewProp_Count,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModulesInventary,
		nullptr,
		&NewStructOps,
		"InventorySlotInfo",
		sizeof(FInventorySlotInfo),
		alignof(FInventorySlotInfo),
		Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInventorySlotInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ModulesInventary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InventorySlotInfo"), sizeof(FInventorySlotInfo), Get_Z_Construct_UScriptStruct_FInventorySlotInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInventorySlotInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInventorySlotInfo_Hash() { return 2635133043U; }

static_assert(std::is_polymorphic<FInventoryItemInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInventoryItemInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FInventoryItemInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MODULESINVENTARY_API uint32 Get_Z_Construct_UScriptStruct_FInventoryItemInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemInfo, Z_Construct_UPackage__Script_ModulesInventary(), TEXT("InventoryItemInfo"), sizeof(FInventoryItemInfo), Get_Z_Construct_UScriptStruct_FInventoryItemInfo_Hash());
	}
	return Singleton;
}
template<> MODULESINVENTARY_API UScriptStruct* StaticStruct<FInventoryItemInfo>()
{
	return FInventoryItemInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInventoryItemInfo(FInventoryItemInfo::StaticStruct, TEXT("/Script/ModulesInventary"), TEXT("InventoryItemInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ModulesInventary_StaticRegisterNativesFInventoryItemInfo
{
	FScriptStruct_ModulesInventary_StaticRegisterNativesFInventoryItemInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InventoryItemInfo")),new UScriptStruct::TCppStructOps<FInventoryItemInfo>);
	}
} ScriptStruct_ModulesInventary_StaticRegisterNativesFInventoryItemInfo;
	struct Z_Construct_UScriptStruct_FInventoryItemInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquipSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquipSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageStat_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DamageStat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorStat_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArmorStat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntelligenceStat_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntelligenceStat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// tech info\n" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
		{ "ToolTip", "tech info" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// text info\n" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
		{ "ToolTip", "text info" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Typing" },
		{ "Comment", "// enums\n" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
		{ "ToolTip", "enums" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Type), Z_Construct_UEnum_ModulesInventary_EItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "Typing" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Rarity), Z_Construct_UEnum_ModulesInventary_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSlot_MetaData[] = {
		{ "Category", "Typing" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSlot = { "EquipSlot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, EquipSlot), Z_Construct_UEnum_ModulesInventary_EEquipSlot, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Visual" },
		{ "Comment", "// visual representation\n" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
		{ "ToolTip", "visual representation" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_DamageStat_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// stats\n" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
		{ "ToolTip", "stats" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_DamageStat = { "DamageStat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, DamageStat), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_DamageStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_DamageStat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_ArmorStat_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_ArmorStat = { "ArmorStat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, ArmorStat), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_ArmorStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_ArmorStat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_IntelligenceStat_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_IntelligenceStat = { "IntelligenceStat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemInfo, IntelligenceStat), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_IntelligenceStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_IntelligenceStat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_EquipSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_DamageStat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_ArmorStat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::NewProp_IntelligenceStat,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModulesInventary,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"InventoryItemInfo",
		sizeof(FInventoryItemInfo),
		alignof(FInventoryItemInfo),
		Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInventoryItemInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ModulesInventary();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InventoryItemInfo"), sizeof(FInventoryItemInfo), Get_Z_Construct_UScriptStruct_FInventoryItemInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInventoryItemInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInventoryItemInfo_Hash() { return 2228459191U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
