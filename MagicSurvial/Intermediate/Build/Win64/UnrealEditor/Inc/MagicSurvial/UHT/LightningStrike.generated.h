// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LightningStrike.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MAGICSURVIAL_LightningStrike_generated_h
#error "LightningStrike.generated.h already included, missing '#pragma once' in LightningStrike.h"
#endif
#define MAGICSURVIAL_LightningStrike_generated_h

#define FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_SPARSE_DATA
#define FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_ACCESSORS
#define FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightningStrike(); \
	friend struct Z_Construct_UClass_ALightningStrike_Statics; \
public: \
	DECLARE_CLASS(ALightningStrike, ASkillBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicSurvial"), NO_API) \
	DECLARE_SERIALIZER(ALightningStrike)


#define FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALightningStrike(); \
	friend struct Z_Construct_UClass_ALightningStrike_Statics; \
public: \
	DECLARE_CLASS(ALightningStrike, ASkillBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicSurvial"), NO_API) \
	DECLARE_SERIALIZER(ALightningStrike)


#define FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightningStrike(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightningStrike) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightningStrike); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightningStrike); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightningStrike(ALightningStrike&&); \
	NO_API ALightningStrike(const ALightningStrike&); \
public: \
	NO_API virtual ~ALightningStrike();


#define FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightningStrike(ALightningStrike&&); \
	NO_API ALightningStrike(const ALightningStrike&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightningStrike); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightningStrike); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightningStrike) \
	NO_API virtual ~ALightningStrike();


#define FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_12_PROLOG
#define FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_SPARSE_DATA \
	FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_RPC_WRAPPERS \
	FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_ACCESSORS \
	FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_INCLASS \
	FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_SPARSE_DATA \
	FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_ACCESSORS \
	FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_INCLASS_NO_PURE_DECLS \
	FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICSURVIAL_API UClass* StaticClass<class ALightningStrike>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MagicSurvial_Source_MagicSurvial_LightningStrike_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
