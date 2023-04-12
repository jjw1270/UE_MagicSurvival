// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LobbyWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGICSURVIAL_LobbyWidget_generated_h
#error "LobbyWidget.generated.h already included, missing '#pragma once' in LobbyWidget.h"
#endif
#define MAGICSURVIAL_LobbyWidget_generated_h

#define FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_SPARSE_DATA
#define FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBtn_QuitGame_Callback); \
	DECLARE_FUNCTION(execBtn_GameStart_Callback);


#define FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBtn_QuitGame_Callback); \
	DECLARE_FUNCTION(execBtn_GameStart_Callback);


#define FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_ACCESSORS
#define FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULobbyWidget(); \
	friend struct Z_Construct_UClass_ULobbyWidget_Statics; \
public: \
	DECLARE_CLASS(ULobbyWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicSurvial"), NO_API) \
	DECLARE_SERIALIZER(ULobbyWidget)


#define FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesULobbyWidget(); \
	friend struct Z_Construct_UClass_ULobbyWidget_Statics; \
public: \
	DECLARE_CLASS(ULobbyWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicSurvial"), NO_API) \
	DECLARE_SERIALIZER(ULobbyWidget)


#define FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULobbyWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULobbyWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULobbyWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULobbyWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULobbyWidget(ULobbyWidget&&); \
	NO_API ULobbyWidget(const ULobbyWidget&); \
public: \
	NO_API virtual ~ULobbyWidget();


#define FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULobbyWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULobbyWidget(ULobbyWidget&&); \
	NO_API ULobbyWidget(const ULobbyWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULobbyWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULobbyWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULobbyWidget) \
	NO_API virtual ~ULobbyWidget();


#define FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_11_PROLOG
#define FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_SPARSE_DATA \
	FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_RPC_WRAPPERS \
	FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_ACCESSORS \
	FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_INCLASS \
	FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_SPARSE_DATA \
	FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_ACCESSORS \
	FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_INCLASS_NO_PURE_DECLS \
	FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICSURVIAL_API UClass* StaticClass<class ULobbyWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
