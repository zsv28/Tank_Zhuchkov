// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/InteractableObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableObject() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UInteractableObject_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UInteractableObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IInteractableObject::execInteract_Implementation)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorInteractedWithObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_ActorInteractedWithObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractableObject::execInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorInteractedWithObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_ActorInteractedWithObject);
		P_NATIVE_END;
	}
	void IInteractableObject::Interact(AActor* ActorInteractedWithObject)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void UInteractableObject::StaticRegisterNativesUInteractableObject()
	{
		UClass* Class = UInteractableObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &IInteractableObject::execInteract },
			{ "Interact_Implementation", &IInteractableObject::execInteract_Implementation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractableObject_Interact_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorInteractedWithObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableObject_Interact_Statics::NewProp_ActorInteractedWithObject = { "ActorInteractedWithObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableObject_eventInteract_Parms, ActorInteractedWithObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableObject_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableObject_Interact_Statics::NewProp_ActorInteractedWithObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableObject_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableObject_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableObject, nullptr, "Interact", nullptr, nullptr, sizeof(InteractableObject_eventInteract_Parms), Z_Construct_UFunction_UInteractableObject_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableObject_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableObject_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableObject_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableObject_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableObject_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableObject_Interact_Implementation_Statics
	{
		struct InteractableObject_eventInteract_Implementation_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableObject_Interact_Implementation_Statics::NewProp_ActorInteractedWithObject = { "ActorInteractedWithObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableObject_eventInteract_Implementation_Parms, ActorInteractedWithObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableObject_Interact_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableObject_Interact_Implementation_Statics::NewProp_ActorInteractedWithObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableObject_Interact_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableObject_Interact_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableObject, nullptr, "Interact_Implementation", nullptr, nullptr, sizeof(InteractableObject_eventInteract_Implementation_Parms), Z_Construct_UFunction_UInteractableObject_Interact_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableObject_Interact_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableObject_Interact_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableObject_Interact_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableObject_Interact_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableObject_Interact_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractableObject_NoRegister()
	{
		return UInteractableObject::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractableObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractableObject_Interact, "Interact" }, // 1058397121
		{ &Z_Construct_UFunction_UInteractableObject_Interact_Implementation, "Interact_Implementation" }, // 153374840
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableObject_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractableObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractableObject_Statics::ClassParams = {
		&UInteractableObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractableObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractableObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractableObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractableObject, 144485339);
	template<> QUESTSYSTEM_API UClass* StaticClass<UInteractableObject>()
	{
		return UInteractableObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractableObject(Z_Construct_UClass_UInteractableObject, &UInteractableObject::StaticClass, TEXT("/Script/QuestSystem"), TEXT("UInteractableObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableObject);
	static FName NAME_UInteractableObject_Interact = FName(TEXT("Interact"));
	void IInteractableObject::Execute_Interact(UObject* O, AActor* ActorInteractedWithObject)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractableObject::StaticClass()));
		InteractableObject_eventInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractableObject_Interact);
		if (Func)
		{
			Parms.ActorInteractedWithObject=ActorInteractedWithObject;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractableObject*)(O->GetNativeInterfaceAddress(UInteractableObject::StaticClass())))
		{
			I->Interact_Implementation(ActorInteractedWithObject);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
