// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULESINVENTARY_InventoryWidget_generated_h
#error "InventoryWidget.generated.h already included, missing '#pragma once' in InventoryWidget.h"
#endif
#define MODULESINVENTARY_InventoryWidget_generated_h

#define TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_SPARSE_DATA
#define TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_RPC_WRAPPERS
#define TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryWidget(); \
	friend struct Z_Construct_UClass_UInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(UInventoryWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModulesInventary"), NO_API) \
	DECLARE_SERIALIZER(UInventoryWidget)


#define TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryWidget(); \
	friend struct Z_Construct_UClass_UInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(UInventoryWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModulesInventary"), NO_API) \
	DECLARE_SERIALIZER(UInventoryWidget)


#define TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryWidget(UInventoryWidget&&); \
	NO_API UInventoryWidget(const UInventoryWidget&); \
public:


#define TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryWidget(UInventoryWidget&&); \
	NO_API UInventoryWidget(const UInventoryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryWidget)


#define TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemCellsGrid() { return STRUCT_OFFSET(UInventoryWidget, ItemCellsGrid); } \
	FORCEINLINE static uint32 __PPO__ItemsInRow() { return STRUCT_OFFSET(UInventoryWidget, ItemsInRow); } \
	FORCEINLINE static uint32 __PPO__CellWidgetClass() { return STRUCT_OFFSET(UInventoryWidget, CellWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CellWidgets() { return STRUCT_OFFSET(UInventoryWidget, CellWidgets); } \
	FORCEINLINE static uint32 __PPO__GoldCell() { return STRUCT_OFFSET(UInventoryWidget, GoldCell); }


#define TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_19_PROLOG
#define TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_SPARSE_DATA \
	TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_RPC_WRAPPERS \
	TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_INCLASS \
	TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_SPARSE_DATA \
	TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_INCLASS_NO_PURE_DECLS \
	TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULESINVENTARY_API UClass* StaticClass<class UInventoryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankZhuchkov_Plugins_ModulesInventary_Source_ModulesInventary_Public_InventoryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
