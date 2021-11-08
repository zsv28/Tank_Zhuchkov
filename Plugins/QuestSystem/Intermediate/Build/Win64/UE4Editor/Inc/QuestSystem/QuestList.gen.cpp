// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/QuestList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestList() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestList_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestList();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestDescription_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestListEntry_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuest_NoRegister();
// End Cross Module References
	void UQuestList::StaticRegisterNativesUQuestList()
	{
	}
	UClass* Z_Construct_UClass_UQuestList_NoRegister()
	{
		return UQuestList::StaticClass();
	}
	struct Z_Construct_UClass_UQuestList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoryQuestsList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoryQuestsList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideQuestsList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideQuestsList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveQuestDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveQuestDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestEntryClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_QuestEntryClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestEntries_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestEntries_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_QuestEntries;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestList_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestList.h" },
		{ "ModuleRelativePath", "Public/QuestList.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestList_Statics::NewProp_StoryQuestsList_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestList_Statics::NewProp_StoryQuestsList = { "StoryQuestsList", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestList, StoryQuestsList), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestList_Statics::NewProp_StoryQuestsList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestList_Statics::NewProp_StoryQuestsList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestList_Statics::NewProp_SideQuestsList_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestList_Statics::NewProp_SideQuestsList = { "SideQuestsList", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestList, SideQuestsList), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestList_Statics::NewProp_SideQuestsList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestList_Statics::NewProp_SideQuestsList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestList_Statics::NewProp_ActiveQuestDescription_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestList_Statics::NewProp_ActiveQuestDescription = { "ActiveQuestDescription", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestList, ActiveQuestDescription), Z_Construct_UClass_UQuestDescription_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestList_Statics::NewProp_ActiveQuestDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestList_Statics::NewProp_ActiveQuestDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestList_Statics::NewProp_QuestEntryClass_MetaData[] = {
		{ "Category", "QuestList" },
		{ "ModuleRelativePath", "Public/QuestList.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQuestList_Statics::NewProp_QuestEntryClass = { "QuestEntryClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestList, QuestEntryClass), Z_Construct_UClass_UQuestListEntry_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UQuestList_Statics::NewProp_QuestEntryClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestList_Statics::NewProp_QuestEntryClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestList_Statics::NewProp_QuestEntries_ValueProp = { "QuestEntries", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UQuestListEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestList_Statics::NewProp_QuestEntries_Key_KeyProp = { "QuestEntries_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestList_Statics::NewProp_QuestEntries_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestList.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UQuestList_Statics::NewProp_QuestEntries = { "QuestEntries", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestList, QuestEntries), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestList_Statics::NewProp_QuestEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestList_Statics::NewProp_QuestEntries_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestList_Statics::NewProp_StoryQuestsList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestList_Statics::NewProp_SideQuestsList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestList_Statics::NewProp_ActiveQuestDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestList_Statics::NewProp_QuestEntryClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestList_Statics::NewProp_QuestEntries_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestList_Statics::NewProp_QuestEntries_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestList_Statics::NewProp_QuestEntries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestList_Statics::ClassParams = {
		&UQuestList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestList_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestList, 102785413);
	template<> QUESTSYSTEM_API UClass* StaticClass<UQuestList>()
	{
		return UQuestList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestList(Z_Construct_UClass_UQuestList, &UQuestList::StaticClass, TEXT("/Script/QuestSystem"), TEXT("UQuestList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
