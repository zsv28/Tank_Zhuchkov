// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModulesInventary/Public/EquipInventoryWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipInventoryWidget() {}
// Cross Module References
	MODULESINVENTARY_API UClass* Z_Construct_UClass_UEquipInventoryWidget_NoRegister();
	MODULESINVENTARY_API UClass* Z_Construct_UClass_UEquipInventoryWidget();
	MODULESINVENTARY_API UClass* Z_Construct_UClass_UInventoryWidget();
	UPackage* Z_Construct_UPackage__Script_ModulesInventary();
// End Cross Module References
	void UEquipInventoryWidget::StaticRegisterNativesUEquipInventoryWidget()
	{
	}
	UClass* Z_Construct_UClass_UEquipInventoryWidget_NoRegister()
	{
		return UEquipInventoryWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEquipInventoryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipInventoryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInventoryWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ModulesInventary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipInventoryWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "EquipInventoryWidget.h" },
		{ "ModuleRelativePath", "Public/EquipInventoryWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipInventoryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipInventoryWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquipInventoryWidget_Statics::ClassParams = {
		&UEquipInventoryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipInventoryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipInventoryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipInventoryWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquipInventoryWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquipInventoryWidget, 3435006691);
	template<> MODULESINVENTARY_API UClass* StaticClass<UEquipInventoryWidget>()
	{
		return UEquipInventoryWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquipInventoryWidget(Z_Construct_UClass_UEquipInventoryWidget, &UEquipInventoryWidget::StaticClass, TEXT("/Script/ModulesInventary"), TEXT("UEquipInventoryWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipInventoryWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
