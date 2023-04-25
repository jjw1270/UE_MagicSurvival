// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicSurvial/EnemyCharacter_Default.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter_Default() {}
// Cross Module References
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AEnemyCharacter_Default();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AEnemyCharacter_Default_NoRegister();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AEnemyCharacterBase();
	UPackage* Z_Construct_UPackage__Script_MagicSurvial();
// End Cross Module References
	void AEnemyCharacter_Default::StaticRegisterNativesAEnemyCharacter_Default()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyCharacter_Default);
	UClass* Z_Construct_UClass_AEnemyCharacter_Default_NoRegister()
	{
		return AEnemyCharacter_Default::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyCharacter_Default_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyCharacter_Default_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicSurvial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Default_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xea\xb8\xb0\xeb\xb3\xb8\xec\xa0\x81\xec\x9d\xb8 \xec\xa0\x81\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyCharacter_Default.h" },
		{ "ModuleRelativePath", "EnemyCharacter_Default.h" },
		{ "ToolTip", "\xea\xb8\xb0\xeb\xb3\xb8\xec\xa0\x81\xec\x9d\xb8 \xec\xa0\x81" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyCharacter_Default_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter_Default>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Default_Statics::ClassParams = {
		&AEnemyCharacter_Default::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Default_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Default_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyCharacter_Default()
	{
		if (!Z_Registration_Info_UClass_AEnemyCharacter_Default.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacter_Default.OuterSingleton, Z_Construct_UClass_AEnemyCharacter_Default_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyCharacter_Default.OuterSingleton;
	}
	template<> MAGICSURVIAL_API UClass* StaticClass<AEnemyCharacter_Default>()
	{
		return AEnemyCharacter_Default::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter_Default);
	AEnemyCharacter_Default::~AEnemyCharacter_Default() {}
	struct Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_EnemyCharacter_Default_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_EnemyCharacter_Default_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacter_Default, AEnemyCharacter_Default::StaticClass, TEXT("AEnemyCharacter_Default"), &Z_Registration_Info_UClass_AEnemyCharacter_Default, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacter_Default), 2364712250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_EnemyCharacter_Default_h_2750620613(TEXT("/Script/MagicSurvial"),
		Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_EnemyCharacter_Default_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_EnemyCharacter_Default_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
