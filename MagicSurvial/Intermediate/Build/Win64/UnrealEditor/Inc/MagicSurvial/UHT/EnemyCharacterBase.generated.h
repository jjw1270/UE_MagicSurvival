// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyCharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MAGICSURVIAL_EnemyCharacterBase_generated_h
#error "EnemyCharacterBase.generated.h already included, missing '#pragma once' in EnemyCharacterBase.h"
#endif
#define MAGICSURVIAL_EnemyCharacterBase_generated_h

#define FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_SPARSE_DATA
#define FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execSetHP);


#define FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execSetHP);


#define FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_ACCESSORS
#define FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacterBase(); \
	friend struct Z_Construct_UClass_AEnemyCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicSurvial"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacterBase)


#define FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyCharacterBase(); \
	friend struct Z_Construct_UClass_AEnemyCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicSurvial"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacterBase)


#define FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacterBase(AEnemyCharacterBase&&); \
	NO_API AEnemyCharacterBase(const AEnemyCharacterBase&); \
public: \
	NO_API virtual ~AEnemyCharacterBase();


#define FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacterBase(AEnemyCharacterBase&&); \
	NO_API AEnemyCharacterBase(const AEnemyCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacterBase) \
	NO_API virtual ~AEnemyCharacterBase();


#define FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_9_PROLOG
#define FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_SPARSE_DATA \
	FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_RPC_WRAPPERS \
	FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_ACCESSORS \
	FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_INCLASS \
	FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_SPARSE_DATA \
	FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_ACCESSORS \
	FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICSURVIAL_API UClass* StaticClass<class AEnemyCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MagicSurvial_Source_MagicSurvial_EnemyCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
