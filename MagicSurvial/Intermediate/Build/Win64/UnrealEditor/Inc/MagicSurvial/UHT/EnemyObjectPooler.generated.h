// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyObjectPooler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGICSURVIAL_EnemyObjectPooler_generated_h
#error "EnemyObjectPooler.generated.h already included, missing '#pragma once' in EnemyObjectPooler.h"
#endif
#define MAGICSURVIAL_EnemyObjectPooler_generated_h

#define FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_SPARSE_DATA
#define FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnObjectFromPool); \
	DECLARE_FUNCTION(execAddObjectToPool);


#define FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnObjectFromPool); \
	DECLARE_FUNCTION(execAddObjectToPool);


#define FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_ACCESSORS
#define FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyObjectPooler(); \
	friend struct Z_Construct_UClass_AEnemyObjectPooler_Statics; \
public: \
	DECLARE_CLASS(AEnemyObjectPooler, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicSurvial"), NO_API) \
	DECLARE_SERIALIZER(AEnemyObjectPooler)


#define FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyObjectPooler(); \
	friend struct Z_Construct_UClass_AEnemyObjectPooler_Statics; \
public: \
	DECLARE_CLASS(AEnemyObjectPooler, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicSurvial"), NO_API) \
	DECLARE_SERIALIZER(AEnemyObjectPooler)


#define FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyObjectPooler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyObjectPooler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyObjectPooler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyObjectPooler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyObjectPooler(AEnemyObjectPooler&&); \
	NO_API AEnemyObjectPooler(const AEnemyObjectPooler&); \
public: \
	NO_API virtual ~AEnemyObjectPooler();


#define FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyObjectPooler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyObjectPooler(AEnemyObjectPooler&&); \
	NO_API AEnemyObjectPooler(const AEnemyObjectPooler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyObjectPooler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyObjectPooler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyObjectPooler) \
	NO_API virtual ~AEnemyObjectPooler();


#define FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_11_PROLOG
#define FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_SPARSE_DATA \
	FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_RPC_WRAPPERS \
	FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_ACCESSORS \
	FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_INCLASS \
	FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_SPARSE_DATA \
	FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_ACCESSORS \
	FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_INCLASS_NO_PURE_DECLS \
	FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICSURVIAL_API UClass* StaticClass<class AEnemyObjectPooler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
