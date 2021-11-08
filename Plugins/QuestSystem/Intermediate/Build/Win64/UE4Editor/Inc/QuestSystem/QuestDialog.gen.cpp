// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/QuestDialog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestDialog() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestDialog_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestDialog();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestDescription_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuestDialog::execAcceptQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcceptQuest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestDialog::execRejectQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RejectQuest();
		P_NATIVE_END;
	}
	void UQuestDialog::StaticRegisterNativesUQuestDialog()
	{
		UClass* Class = UQuestDialog::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptQuest", &UQuestDialog::execAcceptQuest },
			{ "RejectQuest", &UQuestDialog::execRejectQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestDialog_AcceptQuest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestDialog_AcceptQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestDialog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestDialog_AcceptQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestDialog, nullptr, "AcceptQuest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestDialog_AcceptQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDialog_AcceptQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestDialog_AcceptQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestDialog_AcceptQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestDialog_RejectQuest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestDialog_RejectQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestDialog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestDialog_RejectQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestDialog, nullptr, "RejectQuest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestDialog_RejectQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDialog_RejectQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestDialog_RejectQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestDialog_RejectQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestDialog_NoRegister()
	{
		return UQuestDialog::StaticClass();
	}
	struct Z_Construct_UClass_UQuestDialog_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RejectButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RejectButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcceptButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestDialog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestDialog_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestDialog_AcceptQuest, "AcceptQuest" }, // 356634231
		{ &Z_Construct_UFunction_UQuestDialog_RejectQuest, "RejectQuest" }, // 6220360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestDialog_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestDialog.h" },
		{ "ModuleRelativePath", "Public/QuestDialog.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestDialog_Statics::NewProp_Description_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestDialog.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestDialog_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestDialog, Description), Z_Construct_UClass_UQuestDescription_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestDialog_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDialog_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestDialog_Statics::NewProp_RejectButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestDialog.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestDialog_Statics::NewProp_RejectButton = { "RejectButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestDialog, RejectButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestDialog_Statics::NewProp_RejectButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDialog_Statics::NewProp_RejectButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestDialog_Statics::NewProp_AcceptButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestDialog.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestDialog_Statics::NewProp_AcceptButton = { "AcceptButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestDialog, AcceptButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestDialog_Statics::NewProp_AcceptButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDialog_Statics::NewProp_AcceptButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestDialog_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestDialog_Statics::NewProp_RejectButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestDialog_Statics::NewProp_AcceptButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestDialog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestDialog>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestDialog_Statics::ClassParams = {
		&UQuestDialog::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestDialog_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDialog_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestDialog_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDialog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestDialog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestDialog_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestDialog, 2487407624);
	template<> QUESTSYSTEM_API UClass* StaticClass<UQuestDialog>()
	{
		return UQuestDialog::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestDialog(Z_Construct_UClass_UQuestDialog, &UQuestDialog::StaticClass, TEXT("/Script/QuestSystem"), TEXT("UQuestDialog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestDialog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
