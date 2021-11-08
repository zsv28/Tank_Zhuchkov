// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModulesInventary/Public/InventoryOwner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryOwner() {}
// Cross Module References
	MODULESINVENTARY_API UClass* Z_Construct_UClass_UInventoryOwner_NoRegister();
	MODULESINVENTARY_API UClass* Z_Construct_UClass_UInventoryOwner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ModulesInventary();
// End Cross Module References
	void UInventoryOwner::StaticRegisterNativesUInventoryOwner()
	{
	}
	UClass* Z_Construct_UClass_UInventoryOwner_NoRegister()
	{
		return UInventoryOwner::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryOwner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryOwner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ModulesInventary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryOwner_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryOwner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryOwner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInventoryOwner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryOwner_Statics::ClassParams = {
		&UInventoryOwner::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryOwner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryOwner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryOwner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryOwner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryOwner, 2246745993);
	template<> MODULESINVENTARY_API UClass* StaticClass<UInventoryOwner>()
	{
		return UInventoryOwner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryOwner(Z_Construct_UClass_UInventoryOwner, &UInventoryOwner::StaticClass, TEXT("/Script/ModulesInventary"), TEXT("UInventoryOwner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryOwner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
