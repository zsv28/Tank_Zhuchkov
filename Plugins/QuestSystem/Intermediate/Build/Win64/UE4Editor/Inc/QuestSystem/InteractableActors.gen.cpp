// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/InteractableActors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableActors() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AInteractableActors_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AInteractableActors();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UInteractableObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInteractableActors::execOnInteractionFinished)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorInteractedWithObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractionFinished(Z_Param_ActorInteractedWithObject);
		P_NATIVE_END;
	}
	void AInteractableActors::StaticRegisterNativesAInteractableActors()
	{
		UClass* Class = AInteractableActors::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteractionFinished", &AInteractableActors::execOnInteractionFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractableActors_OnInteractionFinished_Statics
	{
		struct InteractableActors_eventOnInteractionFinished_Parms
		{
			AActor* ActorInteractedWithObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorInteractedWithObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableActors_OnInteractionFinished_Statics::NewProp_ActorInteractedWithObject = { "ActorInteractedWithObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableActors_eventOnInteractionFinished_Parms, ActorInteractedWithObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableActors_OnInteractionFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableActors_OnInteractionFinished_Statics::NewProp_ActorInteractedWithObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractableActors_OnInteractionFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableActors.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableActors_OnInteractionFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableActors, nullptr, "OnInteractionFinished", nullptr, nullptr, sizeof(InteractableActors_eventOnInteractionFinished_Parms), Z_Construct_UFunction_AInteractableActors_OnInteractionFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableActors_OnInteractionFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractableActors_OnInteractionFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableActors_OnInteractionFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractableActors_OnInteractionFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractableActors_OnInteractionFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractableActors_NoRegister()
	{
		return AInteractableActors::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableActors_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractableActors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractableActors_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractableActors_OnInteractionFinished, "OnInteractionFinished" }, // 2692726662
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableActors_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableActors.h" },
		{ "ModuleRelativePath", "Public/InteractableActors.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractableActors_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractableObject_NoRegister, (int32)VTABLE_OFFSET(AInteractableActors, IInteractableObject), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableActors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableActors>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractableActors_Statics::ClassParams = {
		&AInteractableActors::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractableActors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableActors()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractableActors_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractableActors, 2608641299);
	template<> QUESTSYSTEM_API UClass* StaticClass<AInteractableActors>()
	{
		return AInteractableActors::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractableActors(Z_Construct_UClass_AInteractableActors, &AInteractableActors::StaticClass, TEXT("/Script/QuestSystem"), TEXT("AInteractableActors"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableActors);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
