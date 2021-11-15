// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTSYSTEM_QuestDialog_generated_h
#error "QuestDialog.generated.h already included, missing '#pragma once' in QuestDialog.h"
#endif
#define QUESTSYSTEM_QuestDialog_generated_h

#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_SPARSE_DATA
#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAcceptQuest); \
	DECLARE_FUNCTION(execRejectQuest);


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAcceptQuest); \
	DECLARE_FUNCTION(execRejectQuest);


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestDialog(); \
	friend struct Z_Construct_UClass_UQuestDialog_Statics; \
public: \
	DECLARE_CLASS(UQuestDialog, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UQuestDialog)


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUQuestDialog(); \
	friend struct Z_Construct_UClass_UQuestDialog_Statics; \
public: \
	DECLARE_CLASS(UQuestDialog, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UQuestDialog)


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestDialog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestDialog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestDialog); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestDialog); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestDialog(UQuestDialog&&); \
	NO_API UQuestDialog(const UQuestDialog&); \
public:


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestDialog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestDialog(UQuestDialog&&); \
	NO_API UQuestDialog(const UQuestDialog&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestDialog); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestDialog); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestDialog)


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Description() { return STRUCT_OFFSET(UQuestDialog, Description); } \
	FORCEINLINE static uint32 __PPO__RejectButton() { return STRUCT_OFFSET(UQuestDialog, RejectButton); } \
	FORCEINLINE static uint32 __PPO__AcceptButton() { return STRUCT_OFFSET(UQuestDialog, AcceptButton); }


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_15_PROLOG
#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_PRIVATE_PROPERTY_OFFSET \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_SPARSE_DATA \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_RPC_WRAPPERS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_INCLASS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_PRIVATE_PROPERTY_OFFSET \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_SPARSE_DATA \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_INCLASS_NO_PURE_DECLS \
	TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class UQuestDialog>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankZhuchkov_Plugins_QuestSystem_Source_QuestSystem_Public_QuestDialog_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
