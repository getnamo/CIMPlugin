// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CIMPLUGIN_CIMBluePrintLibrary_generated_h
#error "CIMBluePrintLibrary.generated.h already included, missing '#pragma once' in CIMBluePrintLibrary.h"
#endif
#define CIMPLUGIN_CIMBluePrintLibrary_generated_h

#define CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_SPARSE_DATA
#define CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCustomSetAxisValue); \
	DECLARE_FUNCTION(execCustomReleaseButton); \
	DECLARE_FUNCTION(execCustomPressButton);


#define CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCustomSetAxisValue); \
	DECLARE_FUNCTION(execCustomReleaseButton); \
	DECLARE_FUNCTION(execCustomPressButton);


#define CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCIMBluePrintLibrary(); \
	friend struct Z_Construct_UClass_UCIMBluePrintLibrary_Statics; \
public: \
	DECLARE_CLASS(UCIMBluePrintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CIMPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCIMBluePrintLibrary)


#define CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUCIMBluePrintLibrary(); \
	friend struct Z_Construct_UClass_UCIMBluePrintLibrary_Statics; \
public: \
	DECLARE_CLASS(UCIMBluePrintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CIMPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCIMBluePrintLibrary)


#define CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCIMBluePrintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCIMBluePrintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCIMBluePrintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCIMBluePrintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCIMBluePrintLibrary(UCIMBluePrintLibrary&&); \
	NO_API UCIMBluePrintLibrary(const UCIMBluePrintLibrary&); \
public:


#define CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCIMBluePrintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCIMBluePrintLibrary(UCIMBluePrintLibrary&&); \
	NO_API UCIMBluePrintLibrary(const UCIMBluePrintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCIMBluePrintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCIMBluePrintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCIMBluePrintLibrary)


#define CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_PRIVATE_PROPERTY_OFFSET
#define CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_6_PROLOG
#define CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_PRIVATE_PROPERTY_OFFSET \
	CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_SPARSE_DATA \
	CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_RPC_WRAPPERS \
	CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_INCLASS \
	CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_PRIVATE_PROPERTY_OFFSET \
	CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_SPARSE_DATA \
	CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_INCLASS_NO_PURE_DECLS \
	CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h_9_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CIMBluePrintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CIMPLUGIN_API UClass* StaticClass<class UCIMBluePrintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombatSim_Plugins_CIMPlugin_Source_CIMPlugin_Classes_CIMBluePrintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
