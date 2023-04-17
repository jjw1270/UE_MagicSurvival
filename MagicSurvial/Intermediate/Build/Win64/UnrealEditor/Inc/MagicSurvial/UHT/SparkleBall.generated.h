// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SparkleBall.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MAGICSURVIAL_SparkleBall_generated_h
#error "SparkleBall.generated.h already included, missing '#pragma once' in SparkleBall.h"
#endif
#define MAGICSURVIAL_SparkleBall_generated_h

#define FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_SPARSE_DATA
#define FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_ACCESSORS
#define FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASparkleBall(); \
	friend struct Z_Construct_UClass_ASparkleBall_Statics; \
public: \
	DECLARE_CLASS(ASparkleBall, ASkillBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicSurvial"), NO_API) \
	DECLARE_SERIALIZER(ASparkleBall)


#define FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASparkleBall(); \
	friend struct Z_Construct_UClass_ASparkleBall_Statics; \
public: \
	DECLARE_CLASS(ASparkleBall, ASkillBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicSurvial"), NO_API) \
	DECLARE_SERIALIZER(ASparkleBall)


#define FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASparkleBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASparkleBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASparkleBall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASparkleBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASparkleBall(ASparkleBall&&); \
	NO_API ASparkleBall(const ASparkleBall&); \
public: \
	NO_API virtual ~ASparkleBall();


#define FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASparkleBall(ASparkleBall&&); \
	NO_API ASparkleBall(const ASparkleBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASparkleBall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASparkleBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASparkleBall) \
	NO_API virtual ~ASparkleBall();


#define FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_12_PROLOG
#define FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_SPARSE_DATA \
	FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_RPC_WRAPPERS \
	FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_ACCESSORS \
	FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_INCLASS \
	FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_SPARSE_DATA \
	FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_ACCESSORS \
	FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_INCLASS_NO_PURE_DECLS \
	FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICSURVIAL_API UClass* StaticClass<class ASparkleBall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MagicSurvial_Source_MagicSurvial_SparkleBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
