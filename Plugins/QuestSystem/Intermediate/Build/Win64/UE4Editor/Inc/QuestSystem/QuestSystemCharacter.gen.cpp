// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/QuestSystemCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestSystemCharacter() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuestSystemCharacter_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuestSystemCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestDialog_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UInteractableObject_NoRegister();
// End Cross Module References
	void AQuestSystemCharacter::StaticRegisterNativesAQuestSystemCharacter()
	{
	}
	UClass* Z_Construct_UClass_AQuestSystemCharacter_NoRegister()
	{
		return AQuestSystemCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AQuestSystemCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestDialogClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_QuestDialogClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuestSystemCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestSystemCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "QuestSystemCharacter.h" },
		{ "ModuleRelativePath", "Public/QuestSystemCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestSystemCharacter_Statics::NewProp_QuestDialogClass_MetaData[] = {
		{ "Category", "QuestSystemCharacter" },
		{ "ModuleRelativePath", "Public/QuestSystemCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AQuestSystemCharacter_Statics::NewProp_QuestDialogClass = { "QuestDialogClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestSystemCharacter, QuestDialogClass), Z_Construct_UClass_UQuestDialog_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AQuestSystemCharacter_Statics::NewProp_QuestDialogClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestSystemCharacter_Statics::NewProp_QuestDialogClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuestSystemCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestSystemCharacter_Statics::NewProp_QuestDialogClass,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AQuestSystemCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractableObject_NoRegister, (int32)VTABLE_OFFSET(AQuestSystemCharacter, IInteractableObject), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuestSystemCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuestSystemCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQuestSystemCharacter_Statics::ClassParams = {
		&AQuestSystemCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AQuestSystemCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AQuestSystemCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AQuestSystemCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestSystemCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuestSystemCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQuestSystemCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuestSystemCharacter, 107195902);
	template<> QUESTSYSTEM_API UClass* StaticClass<AQuestSystemCharacter>()
	{
		return AQuestSystemCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuestSystemCharacter(Z_Construct_UClass_AQuestSystemCharacter, &AQuestSystemCharacter::StaticClass, TEXT("/Script/QuestSystem"), TEXT("AQuestSystemCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuestSystemCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
