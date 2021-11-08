// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/QuestListComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestListComponent() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestListComponent_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestListComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuest_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UCurrentObjectives_NoRegister();
// End Cross Module References
	void UQuestListComponent::StaticRegisterNativesUQuestListComponent()
	{
	}
	UClass* Z_Construct_UClass_UQuestListComponent_NoRegister()
	{
		return UQuestListComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQuestListComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcceptedQuests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptedQuests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AcceptedQuests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveQuest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentObjectivesWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurrentObjectivesWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestListComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestListComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "QuestListComponent.h" },
		{ "ModuleRelativePath", "Public/QuestListComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestListComponent_Statics::NewProp_AcceptedQuests_Inner = { "AcceptedQuests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestListComponent_Statics::NewProp_AcceptedQuests_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestListComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestListComponent_Statics::NewProp_AcceptedQuests = { "AcceptedQuests", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestListComponent, AcceptedQuests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestListComponent_Statics::NewProp_AcceptedQuests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListComponent_Statics::NewProp_AcceptedQuests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestListComponent_Statics::NewProp_ActiveQuest_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestListComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestListComponent_Statics::NewProp_ActiveQuest = { "ActiveQuest", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestListComponent, ActiveQuest), Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestListComponent_Statics::NewProp_ActiveQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListComponent_Statics::NewProp_ActiveQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestListComponent_Statics::NewProp_CurrentObjectivesWidgetClass_MetaData[] = {
		{ "Category", "QuestListComponent" },
		{ "ModuleRelativePath", "Public/QuestListComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQuestListComponent_Statics::NewProp_CurrentObjectivesWidgetClass = { "CurrentObjectivesWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestListComponent, CurrentObjectivesWidgetClass), Z_Construct_UClass_UCurrentObjectives_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UQuestListComponent_Statics::NewProp_CurrentObjectivesWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListComponent_Statics::NewProp_CurrentObjectivesWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestListComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestListComponent_Statics::NewProp_AcceptedQuests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestListComponent_Statics::NewProp_AcceptedQuests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestListComponent_Statics::NewProp_ActiveQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestListComponent_Statics::NewProp_CurrentObjectivesWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestListComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestListComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestListComponent_Statics::ClassParams = {
		&UQuestListComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestListComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestListComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestListComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestListComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestListComponent, 3397883494);
	template<> QUESTSYSTEM_API UClass* StaticClass<UQuestListComponent>()
	{
		return UQuestListComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestListComponent(Z_Construct_UClass_UQuestListComponent, &UQuestListComponent::StaticClass, TEXT("/Script/QuestSystem"), TEXT("UQuestListComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestListComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
