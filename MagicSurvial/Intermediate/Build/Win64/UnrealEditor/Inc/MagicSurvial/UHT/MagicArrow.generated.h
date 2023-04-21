// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MagicArrow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MAGICSURVIAL_MagicArrow_generated_h
#error "MagicArrow.generated.h already included, missing '#pragma once' in MagicArrow.h"
#endif
#define MAGICSURVIAL_MagicArrow_generated_h

#define FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_SPARSE_DATA
#define FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_ACCESSORS
#define FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMagicArrow(); \
	friend struct Z_Construct_UClass_AMagicArrow_Statics; \
public: \
	DECLARE_CLASS(AMagicArrow, ASkillBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicSurvial"), NO_API) \
	DECLARE_SERIALIZER(AMagicArrow)


#define FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMagicArrow(); \
	friend struct Z_Construct_UClass_AMagicArrow_Statics; \
public: \
	DECLARE_CLASS(AMagicArrow, ASkillBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicSurvial"), NO_API) \
	DECLARE_SERIALIZER(AMagicArrow)


#define FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagicArrow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagicArrow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicArrow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicArrow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagicArrow(AMagicArrow&&); \
	NO_API AMagicArrow(const AMagicArrow&); \
public: \
	NO_API virtual ~AMagicArrow();


#define FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagicArrow(AMagicArrow&&); \
	NO_API AMagicArrow(const AMagicArrow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicArrow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicArrow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMagicArrow) \
	NO_API virtual ~AMagicArrow();


#define FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_12_PROLOG
#define FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_SPARSE_DATA \
	FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_RPC_WRAPPERS \
	FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_ACCESSORS \
	FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_INCLASS \
	FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_SPARSE_DATA \
	FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_ACCESSORS \
	FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_INCLASS_NO_PURE_DECLS \
	FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICSURVIAL_API UClass* StaticClass<class AMagicArrow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MagicSurvial_Source_MagicSurvial_MagicArrow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
