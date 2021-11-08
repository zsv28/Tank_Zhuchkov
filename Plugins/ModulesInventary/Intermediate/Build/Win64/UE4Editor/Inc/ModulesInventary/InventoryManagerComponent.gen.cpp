// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModulesInventary/Public/InventoryManagerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryManagerComponent() {}
// Cross Module References
	MODULESINVENTARY_API UClass* Z_Construct_UClass_UInventoryManagerComponent_NoRegister();
	MODULESINVENTARY_API UClass* Z_Construct_UClass_UInventoryManagerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ModulesInventary();
	MODULESINVENTARY_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	MODULESINVENTARY_API UClass* Z_Construct_UClass_UInventoryWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MODULESINVENTARY_API UClass* Z_Construct_UClass_UEquipInventoryWidget_NoRegister();
// End Cross Module References
	void UInventoryManagerComponent::StaticRegisterNativesUInventoryManagerComponent()
	{
	}
	UClass* Z_Construct_UClass_UInventoryManagerComponent_NoRegister()
	{
		return UInventoryManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalInventoryComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalInventoryComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryItemsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryItemsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InventoryWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipInventoryWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipInventoryWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipInventoryWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EquipInventoryWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInventorySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinInventorySize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ModulesInventary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryManagerComponent.h" },
		{ "ModuleRelativePath", "Public/InventoryManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_LocalInventoryComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_LocalInventoryComponent = { "LocalInventoryComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryManagerComponent, LocalInventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_LocalInventoryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_LocalInventoryComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryItemsData_MetaData[] = {
		{ "Category", "InventoryManagerComponent" },
		{ "ModuleRelativePath", "Public/InventoryManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryItemsData = { "InventoryItemsData", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryManagerComponent, InventoryItemsData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryItemsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryItemsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidget = { "InventoryWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryManagerComponent, InventoryWidget), Z_Construct_UClass_UInventoryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidgetClass_MetaData[] = {
		{ "Category", "InventoryManagerComponent" },
		{ "ModuleRelativePath", "Public/InventoryManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidgetClass = { "InventoryWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryManagerComponent, InventoryWidgetClass), Z_Construct_UClass_UInventoryWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipInventoryWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipInventoryWidget = { "EquipInventoryWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryManagerComponent, EquipInventoryWidget), Z_Construct_UClass_UEquipInventoryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipInventoryWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipInventoryWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipInventoryWidgetClass_MetaData[] = {
		{ "Category", "InventoryManagerComponent" },
		{ "ModuleRelativePath", "Public/InventoryManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipInventoryWidgetClass = { "EquipInventoryWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryManagerComponent, EquipInventoryWidgetClass), Z_Construct_UClass_UEquipInventoryWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipInventoryWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipInventoryWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_MinInventorySize_MetaData[] = {
		{ "Category", "InventoryManagerComponent" },
		{ "ModuleRelativePath", "Public/InventoryManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_MinInventorySize = { "MinInventorySize", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryManagerComponent, MinInventorySize), METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_MinInventorySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_MinInventorySize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryManagerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_LocalInventoryComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryItemsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_InventoryWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipInventoryWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_EquipInventoryWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManagerComponent_Statics::NewProp_MinInventorySize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryManagerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryManagerComponent_Statics::ClassParams = {
		&UInventoryManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryManagerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryManagerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryManagerComponent, 3240312129);
	template<> MODULESINVENTARY_API UClass* StaticClass<UInventoryManagerComponent>()
	{
		return UInventoryManagerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryManagerComponent(Z_Construct_UClass_UInventoryManagerComponent, &UInventoryManagerComponent::StaticClass, TEXT("/Script/ModulesInventary"), TEXT("UInventoryManagerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryManagerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
