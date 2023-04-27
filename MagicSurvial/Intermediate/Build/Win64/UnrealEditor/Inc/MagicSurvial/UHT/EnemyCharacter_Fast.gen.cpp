// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicSurvial/EnemyCharacter_Fast.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter_Fast() {}
// Cross Module References
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AEnemyCharacter_Fast();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AEnemyCharacter_Fast_NoRegister();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AEnemyCharacterBase();
	UPackage* Z_Construct_UPackage__Script_MagicSurvial();
// End Cross Module References
	void AEnemyCharacter_Fast::StaticRegisterNativesAEnemyCharacter_Fast()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyCharacter_Fast);
	UClass* Z_Construct_UClass_AEnemyCharacter_Fast_NoRegister()
	{
		return AEnemyCharacter_Fast::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyCharacter_Fast_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyCharacter_Fast_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicSurvial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Fast_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyCharacter_Fast.h" },
		{ "ModuleRelativePath", "EnemyCharacter_Fast.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyCharacter_Fast_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter_Fast>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Fast_Statics::ClassParams = {
		&AEnemyCharacter_Fast::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Fast_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Fast_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyCharacter_Fast()
	{
		if (!Z_Registration_Info_UClass_AEnemyCharacter_Fast.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacter_Fast.OuterSingleton, Z_Construct_UClass_AEnemyCharacter_Fast_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyCharacter_Fast.OuterSingleton;
	}
	template<> MAGICSURVIAL_API UClass* StaticClass<AEnemyCharacter_Fast>()
	{
		return AEnemyCharacter_Fast::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter_Fast);
	AEnemyCharacter_Fast::~AEnemyCharacter_Fast() {}
	struct Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_EnemyCharacter_Fast_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_EnemyCharacter_Fast_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacter_Fast, AEnemyCharacter_Fast::StaticClass, TEXT("AEnemyCharacter_Fast"), &Z_Registration_Info_UClass_AEnemyCharacter_Fast, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacter_Fast), 3301958471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_EnemyCharacter_Fast_h_2916361556(TEXT("/Script/MagicSurvial"),
		Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_EnemyCharacter_Fast_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_EnemyCharacter_Fast_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
