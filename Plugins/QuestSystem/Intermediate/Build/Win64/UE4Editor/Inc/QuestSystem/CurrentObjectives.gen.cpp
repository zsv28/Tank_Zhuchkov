// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/CurrentObjectives.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrentObjectives() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UCurrentObjectives_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UCurrentObjectives();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuest_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UObjectiveWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCurrentObjectives::execSetCurrentObjectives)
	{
		P_GET_OBJECT(AQuest,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentObjectives(Z_Param_Quest);
		P_NATIVE_END;
	}
	void UCurrentObjectives::StaticRegisterNativesUCurrentObjectives()
	{
		UClass* Class = UCurrentObjectives::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCurrentObjectives", &UCurrentObjectives::execSetCurrentObjectives },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurrentObjectives_SetCurrentObjectives_Statics
	{
		struct CurrentObjectives_eventSetCurrentObjectives_Parms
		{
			AQuest* Quest;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCurrentObjectives_SetCurrentObjectives_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurrentObjectives_eventSetCurrentObjectives_Parms, Quest), Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurrentObjectives_SetCurrentObjectives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrentObjectives_SetCurrentObjectives_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurrentObjectives_SetCurrentObjectives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CurrentObjectives.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurrentObjectives_SetCurrentObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurrentObjectives, nullptr, "SetCurrentObjectives", nullptr, nullptr, sizeof(CurrentObjectives_eventSetCurrentObjectives_Parms), Z_Construct_UFunction_UCurrentObjectives_SetCurrentObjectives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrentObjectives_SetCurrentObjectives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurrentObjectives_SetCurrentObjectives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrentObjectives_SetCurrentObjectives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurrentObjectives_SetCurrentObjectives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCurrentObjectives_SetCurrentObjectives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCurrentObjectives_NoRegister()
	{
		return UCurrentObjectives::StaticClass();
	}
	struct Z_Construct_UClass_UCurrentObjectives_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectiveWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectivesList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectivesList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurrentObjectives_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurrentObjectives_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurrentObjectives_SetCurrentObjectives, "SetCurrentObjectives" }, // 3654407339
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrentObjectives_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CurrentObjectives.h" },
		{ "ModuleRelativePath", "Public/CurrentObjectives.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrentObjectives_Statics::NewProp_ObjectiveWidgetClass_MetaData[] = {
		{ "Category", "CurrentObjectives" },
		{ "ModuleRelativePath", "Public/CurrentObjectives.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCurrentObjectives_Statics::NewProp_ObjectiveWidgetClass = { "ObjectiveWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrentObjectives, ObjectiveWidgetClass), Z_Construct_UClass_UObjectiveWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCurrentObjectives_Statics::NewProp_ObjectiveWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrentObjectives_Statics::NewProp_ObjectiveWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrentObjectives_Statics::NewProp_ObjectivesList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CurrentObjectives" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrentObjectives.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurrentObjectives_Statics::NewProp_ObjectivesList = { "ObjectivesList", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrentObjectives, ObjectivesList), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurrentObjectives_Statics::NewProp_ObjectivesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrentObjectives_Statics::NewProp_ObjectivesList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurrentObjectives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrentObjectives_Statics::NewProp_ObjectiveWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrentObjectives_Statics::NewProp_ObjectivesList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurrentObjectives_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurrentObjectives>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurrentObjectives_Statics::ClassParams = {
		&UCurrentObjectives::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCurrentObjectives_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurrentObjectives_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurrentObjectives_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrentObjectives_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurrentObjectives()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurrentObjectives_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurrentObjectives, 2795238509);
	template<> QUESTSYSTEM_API UClass* StaticClass<UCurrentObjectives>()
	{
		return UCurrentObjectives::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurrentObjectives(Z_Construct_UClass_UCurrentObjectives, &UCurrentObjectives::StaticClass, TEXT("/Script/QuestSystem"), TEXT("UCurrentObjectives"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurrentObjectives);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
