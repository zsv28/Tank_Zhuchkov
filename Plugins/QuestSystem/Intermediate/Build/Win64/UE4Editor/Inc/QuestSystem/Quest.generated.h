// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AQuest;
class UObjective;
#ifdef QUESTSYSTEM_Quest_generated_h
#error "Quest.generated.h already included, missing '#pragma once' in Quest.h"
#endif
#define QUESTSYSTEM_Quest_generated_h

#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_SPARSE_DATA
#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetPrerquisedQuest); \
	DECLARE_FUNCTION(execUpdateLocation); \
	DECLARE_FUNCTION(execKeepObjectivesOrder); \
	DECLARE_FUNCTION(execGetObjectives); \
	DECLARE_FUNCTION(execAddInteractObjective); \
	DECLARE_FUNCTION(execAddLocationObjective);


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetPrerquisedQuest); \
	DECLARE_FUNCTION(execUpdateLocation); \
	DECLARE_FUNCTION(execKeepObjectivesOrder); \
	DECLARE_FUNCTION(execGetObjectives); \
	DECLARE_FUNCTION(execAddInteractObjective); \
	DECLARE_FUNCTION(execAddLocationObjective);


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuest(); \
	friend struct Z_Construct_UClass_AQuest_Statics; \
public: \
	DECLARE_CLASS(AQuest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(AQuest)


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAQuest(); \
	friend struct Z_Construct_UClass_AQuest_Statics; \
public: \
	DECLARE_CLASS(AQuest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(AQuest)


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuest(AQuest&&); \
	NO_API AQuest(const AQuest&); \
public:


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuest(AQuest&&); \
	NO_API AQuest(const AQuest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQuest)


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_PRIVATE_PROPERTY_OFFSET
#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_20_PROLOG
#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_PRIVATE_PROPERTY_OFFSET \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_SPARSE_DATA \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_RPC_WRAPPERS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_INCLASS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_PRIVATE_PROPERTY_OFFSET \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_SPARSE_DATA \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_INCLASS_NO_PURE_DECLS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class AQuest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
