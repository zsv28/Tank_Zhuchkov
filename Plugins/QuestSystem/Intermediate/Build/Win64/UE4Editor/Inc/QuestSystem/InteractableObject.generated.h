// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef QUESTSYSTEM_InteractableObject_generated_h
#error "InteractableObject.generated.h already included, missing '#pragma once' in InteractableObject.h"
#endif
#define QUESTSYSTEM_InteractableObject_generated_h

#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_SPARSE_DATA
#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_RPC_WRAPPERS \
	virtual void Interact_Implementation(AActor* ActorInteractedWithObject) {}; \
 \
	DECLARE_FUNCTION(execInteract_Implementation); \
	DECLARE_FUNCTION(execInteract);


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteract_Implementation); \
	DECLARE_FUNCTION(execInteract);


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_EVENT_PARMS \
	struct InteractableObject_eventInteract_Parms \
	{ \
		AActor* ActorInteractedWithObject; \
	};


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_CALLBACK_WRAPPERS
#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUESTSYSTEM_API UInteractableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUESTSYSTEM_API, UInteractableObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUESTSYSTEM_API UInteractableObject(UInteractableObject&&); \
	QUESTSYSTEM_API UInteractableObject(const UInteractableObject&); \
public:


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUESTSYSTEM_API UInteractableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUESTSYSTEM_API UInteractableObject(UInteractableObject&&); \
	QUESTSYSTEM_API UInteractableObject(const UInteractableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUESTSYSTEM_API, UInteractableObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableObject)


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractableObject(); \
	friend struct Z_Construct_UClass_UInteractableObject_Statics; \
public: \
	DECLARE_CLASS(UInteractableObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/QuestSystem"), QUESTSYSTEM_API) \
	DECLARE_SERIALIZER(UInteractableObject)


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_GENERATED_UINTERFACE_BODY() \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_GENERATED_UINTERFACE_BODY() \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractableObject() {} \
public: \
	typedef UInteractableObject UClassType; \
	typedef IInteractableObject ThisClass; \
	static void Execute_Interact(UObject* O, AActor* ActorInteractedWithObject); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractableObject() {} \
public: \
	typedef UInteractableObject UClassType; \
	typedef IInteractableObject ThisClass; \
	static void Execute_Interact(UObject* O, AActor* ActorInteractedWithObject); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_14_PROLOG \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_EVENT_PARMS


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_SPARSE_DATA \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_RPC_WRAPPERS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_CALLBACK_WRAPPERS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_SPARSE_DATA \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_CALLBACK_WRAPPERS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class UInteractableObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_InteractableObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
