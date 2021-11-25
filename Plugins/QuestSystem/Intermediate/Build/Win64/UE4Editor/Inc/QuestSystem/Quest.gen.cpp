// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/Quest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuest() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuest_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UObjective_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AQuest::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuest::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuest::execGetPrerquisedQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AQuest**)Z_Param__Result=P_THIS->GetPrerquisedQuest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuest::execUpdateLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuest::execKeepObjectivesOrder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->KeepObjectivesOrder();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuest::execGetObjectives)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObjective*>*)Z_Param__Result=P_THIS->GetObjectives();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuest::execAddInteractObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInteractObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuest::execAddLocationObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLocationObjective();
		P_NATIVE_END;
	}
	void AQuest::StaticRegisterNativesAQuest()
	{
		UClass* Class = AQuest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInteractObjective", &AQuest::execAddInteractObjective },
			{ "AddLocationObjective", &AQuest::execAddLocationObjective },
			{ "GetDescription", &AQuest::execGetDescription },
			{ "GetName", &AQuest::execGetName },
			{ "GetObjectives", &AQuest::execGetObjectives },
			{ "GetPrerquisedQuest", &AQuest::execGetPrerquisedQuest },
			{ "KeepObjectivesOrder", &AQuest::execKeepObjectivesOrder },
			{ "UpdateLocation", &AQuest::execUpdateLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AQuest_AddInteractObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuest_AddInteractObjective_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuest_AddInteractObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuest, nullptr, "AddInteractObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuest_AddInteractObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_AddInteractObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuest_AddInteractObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuest_AddInteractObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuest_AddLocationObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuest_AddLocationObjective_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuest_AddLocationObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuest, nullptr, "AddLocationObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuest_AddLocationObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_AddLocationObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuest_AddLocationObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuest_AddLocationObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuest_GetDescription_Statics
	{
		struct Quest_eventGetDescription_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AQuest_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuest_GetDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuest_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuest_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuest_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuest, nullptr, "GetDescription", nullptr, nullptr, sizeof(Quest_eventGetDescription_Parms), Z_Construct_UFunction_AQuest_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_GetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuest_GetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_GetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuest_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuest_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuest_GetName_Statics
	{
		struct Quest_eventGetName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AQuest_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuest_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuest_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuest_GetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuest_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuest, nullptr, "GetName", nullptr, nullptr, sizeof(Quest_eventGetName_Parms), Z_Construct_UFunction_AQuest_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuest_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuest_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuest_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuest_GetObjectives_Statics
	{
		struct Quest_eventGetObjectives_Parms
		{
			TArray<UObjective*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQuest_GetObjectives_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuest_GetObjectives_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AQuest_GetObjectives_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventGetObjectives_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AQuest_GetObjectives_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_GetObjectives_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuest_GetObjectives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuest_GetObjectives_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuest_GetObjectives_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuest_GetObjectives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuest_GetObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuest, nullptr, "GetObjectives", nullptr, nullptr, sizeof(Quest_eventGetObjectives_Parms), Z_Construct_UFunction_AQuest_GetObjectives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_GetObjectives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuest_GetObjectives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_GetObjectives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuest_GetObjectives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuest_GetObjectives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuest_GetPrerquisedQuest_Statics
	{
		struct Quest_eventGetPrerquisedQuest_Parms
		{
			AQuest* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQuest_GetPrerquisedQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventGetPrerquisedQuest_Parms, ReturnValue), Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuest_GetPrerquisedQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuest_GetPrerquisedQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuest_GetPrerquisedQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuest_GetPrerquisedQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuest, nullptr, "GetPrerquisedQuest", nullptr, nullptr, sizeof(Quest_eventGetPrerquisedQuest_Parms), Z_Construct_UFunction_AQuest_GetPrerquisedQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_GetPrerquisedQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuest_GetPrerquisedQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_GetPrerquisedQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuest_GetPrerquisedQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuest_GetPrerquisedQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuest_KeepObjectivesOrder_Statics
	{
		struct Quest_eventKeepObjectivesOrder_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AQuest_KeepObjectivesOrder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Quest_eventKeepObjectivesOrder_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AQuest_KeepObjectivesOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Quest_eventKeepObjectivesOrder_Parms), &Z_Construct_UFunction_AQuest_KeepObjectivesOrder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuest_KeepObjectivesOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuest_KeepObjectivesOrder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuest_KeepObjectivesOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuest_KeepObjectivesOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuest, nullptr, "KeepObjectivesOrder", nullptr, nullptr, sizeof(Quest_eventKeepObjectivesOrder_Parms), Z_Construct_UFunction_AQuest_KeepObjectivesOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_KeepObjectivesOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuest_KeepObjectivesOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_KeepObjectivesOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuest_KeepObjectivesOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuest_KeepObjectivesOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuest_UpdateLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuest_UpdateLocation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuest_UpdateLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuest, nullptr, "UpdateLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuest_UpdateLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_UpdateLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuest_UpdateLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuest_UpdateLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AQuest_NoRegister()
	{
		return AQuest::StaticClass();
	}
	struct Z_Construct_UClass_AQuest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objectives_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objectives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objectives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStoryQuest_MetaData[];
#endif
		static void NewProp_bIsStoryQuest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStoryQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepObjectivesOrder_MetaData[];
#endif
		static void NewProp_bKeepObjectivesOrder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepObjectivesOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrerquisedQuest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrerquisedQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTaken_MetaData[];
#endif
		static void NewProp_bIsTaken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTaken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Descrition_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Descrition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AQuest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AQuest_AddInteractObjective, "AddInteractObjective" }, // 2437665921
		{ &Z_Construct_UFunction_AQuest_AddLocationObjective, "AddLocationObjective" }, // 274668245
		{ &Z_Construct_UFunction_AQuest_GetDescription, "GetDescription" }, // 2301533784
		{ &Z_Construct_UFunction_AQuest_GetName, "GetName" }, // 599107402
		{ &Z_Construct_UFunction_AQuest_GetObjectives, "GetObjectives" }, // 1263733054
		{ &Z_Construct_UFunction_AQuest_GetPrerquisedQuest, "GetPrerquisedQuest" }, // 4145622235
		{ &Z_Construct_UFunction_AQuest_KeepObjectivesOrder, "KeepObjectivesOrder" }, // 33260154
		{ &Z_Construct_UFunction_AQuest_UpdateLocation, "UpdateLocation" }, // 2210833095
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Quest.h" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_Objectives_Inner = { "Objectives", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_Objectives_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_Objectives = { "Objectives", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuest, Objectives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_Objectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_Objectives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_bIsStoryQuest_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	void Z_Construct_UClass_AQuest_Statics::NewProp_bIsStoryQuest_SetBit(void* Obj)
	{
		((AQuest*)Obj)->bIsStoryQuest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_bIsStoryQuest = { "bIsStoryQuest", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AQuest), &Z_Construct_UClass_AQuest_Statics::NewProp_bIsStoryQuest_SetBit, METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_bIsStoryQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_bIsStoryQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_bKeepObjectivesOrder_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	void Z_Construct_UClass_AQuest_Statics::NewProp_bKeepObjectivesOrder_SetBit(void* Obj)
	{
		((AQuest*)Obj)->bKeepObjectivesOrder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_bKeepObjectivesOrder = { "bKeepObjectivesOrder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AQuest), &Z_Construct_UClass_AQuest_Statics::NewProp_bKeepObjectivesOrder_SetBit, METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_bKeepObjectivesOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_bKeepObjectivesOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_PrerquisedQuest_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_PrerquisedQuest = { "PrerquisedQuest", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuest, PrerquisedQuest), Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_PrerquisedQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_PrerquisedQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_bIsTaken_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	void Z_Construct_UClass_AQuest_Statics::NewProp_bIsTaken_SetBit(void* Obj)
	{
		((AQuest*)Obj)->bIsTaken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_bIsTaken = { "bIsTaken", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AQuest), &Z_Construct_UClass_AQuest_Statics::NewProp_bIsTaken_SetBit, METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_bIsTaken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_bIsTaken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_RootSceneComponent_MetaData[] = {
		{ "Category", "Quest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuest, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_RootSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_RootSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_InfoComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_InfoComponent = { "InfoComponent", nullptr, (EPropertyFlags)0x00100000000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuest, InfoComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_InfoComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_InfoComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuest, Name), METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_Descrition_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_Descrition = { "Descrition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuest, Descrition), METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_Descrition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_Descrition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_Objectives_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_Objectives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_bIsStoryQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_bKeepObjectivesOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_PrerquisedQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_bIsTaken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_RootSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_InfoComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_Descrition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQuest_Statics::ClassParams = {
		&AQuest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AQuest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQuest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuest, 2406636249);
	template<> QUESTSYSTEM_API UClass* StaticClass<AQuest>()
	{
		return AQuest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuest(Z_Construct_UClass_AQuest, &AQuest::StaticClass, TEXT("/Script/QuestSystem"), TEXT("AQuest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
