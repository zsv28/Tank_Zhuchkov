// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTSYSTEM_LocationMarker_generated_h
#error "LocationMarker.generated.h already included, missing '#pragma once' in LocationMarker.h"
#endif
#define QUESTSYSTEM_LocationMarker_generated_h

#define Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_SPARSE_DATA
#define Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_RPC_WRAPPERS
#define Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUESTSYSTEM_API ULocationMarker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocationMarker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUESTSYSTEM_API, ULocationMarker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocationMarker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUESTSYSTEM_API ULocationMarker(ULocationMarker&&); \
	QUESTSYSTEM_API ULocationMarker(const ULocationMarker&); \
public:


#define Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUESTSYSTEM_API ULocationMarker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUESTSYSTEM_API ULocationMarker(ULocationMarker&&); \
	QUESTSYSTEM_API ULocationMarker(const ULocationMarker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUESTSYSTEM_API, ULocationMarker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocationMarker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocationMarker)


#define Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULocationMarker(); \
	friend struct Z_Construct_UClass_ULocationMarker_Statics; \
public: \
	DECLARE_CLASS(ULocationMarker, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/QuestSystem"), QUESTSYSTEM_API) \
	DECLARE_SERIALIZER(ULocationMarker)


#define Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_GENERATED_UINTERFACE_BODY() \
	Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_GENERATED_UINTERFACE_BODY() \
	Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILocationMarker() {} \
public: \
	typedef ULocationMarker UClassType; \
	typedef ILocationMarker ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~ILocationMarker() {} \
public: \
	typedef ULocationMarker UClassType; \
	typedef ILocationMarker ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_13_PROLOG
#define Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_SPARSE_DATA \
	Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_RPC_WRAPPERS \
	Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_SPARSE_DATA \
	Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class ULocationMarker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tank_Zhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_LocationMarker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
