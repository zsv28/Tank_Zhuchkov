// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTSYSTEM_QuestList_generated_h
#error "QuestList.generated.h already included, missing '#pragma once' in QuestList.h"
#endif
#define QUESTSYSTEM_QuestList_generated_h

#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_SPARSE_DATA
#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_RPC_WRAPPERS
#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestList(); \
	friend struct Z_Construct_UClass_UQuestList_Statics; \
public: \
	DECLARE_CLASS(UQuestList, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UQuestList)


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUQuestList(); \
	friend struct Z_Construct_UClass_UQuestList_Statics; \
public: \
	DECLARE_CLASS(UQuestList, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UQuestList)


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestList(UQuestList&&); \
	NO_API UQuestList(const UQuestList&); \
public:


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestList(UQuestList&&); \
	NO_API UQuestList(const UQuestList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestList)


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StoryQuestsList() { return STRUCT_OFFSET(UQuestList, StoryQuestsList); } \
	FORCEINLINE static uint32 __PPO__SideQuestsList() { return STRUCT_OFFSET(UQuestList, SideQuestsList); } \
	FORCEINLINE static uint32 __PPO__ActiveQuestDescription() { return STRUCT_OFFSET(UQuestList, ActiveQuestDescription); } \
	FORCEINLINE static uint32 __PPO__QuestEntryClass() { return STRUCT_OFFSET(UQuestList, QuestEntryClass); } \
	FORCEINLINE static uint32 __PPO__QuestEntries() { return STRUCT_OFFSET(UQuestList, QuestEntries); }


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_18_PROLOG
#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_PRIVATE_PROPERTY_OFFSET \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_SPARSE_DATA \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_RPC_WRAPPERS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_INCLASS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_PRIVATE_PROPERTY_OFFSET \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_SPARSE_DATA \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_INCLASS_NO_PURE_DECLS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class UQuestList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
