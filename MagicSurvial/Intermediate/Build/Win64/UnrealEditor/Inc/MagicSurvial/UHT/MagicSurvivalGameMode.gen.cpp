// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicSurvial/MagicSurvivalGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicSurvivalGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AMagicSurvivalGameMode();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AMagicSurvivalGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MagicSurvial();
// End Cross Module References
	void AMagicSurvivalGameMode::StaticRegisterNativesAMagicSurvivalGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagicSurvivalGameMode);
	UClass* Z_Construct_UClass_AMagicSurvivalGameMode_NoRegister()
	{
		return AMagicSurvivalGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMagicSurvivalGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicSurvivalGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicSurvial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicSurvivalGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MagicSurvivalGameMode.h" },
		{ "ModuleRelativePath", "MagicSurvivalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicSurvivalGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicSurvivalGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagicSurvivalGameMode_Statics::ClassParams = {
		&AMagicSurvivalGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMagicSurvivalGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicSurvivalGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagicSurvivalGameMode()
	{
		if (!Z_Registration_Info_UClass_AMagicSurvivalGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagicSurvivalGameMode.OuterSingleton, Z_Construct_UClass_AMagicSurvivalGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMagicSurvivalGameMode.OuterSingleton;
	}
	template<> MAGICSURVIAL_API UClass* StaticClass<AMagicSurvivalGameMode>()
	{
		return AMagicSurvivalGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicSurvivalGameMode);
	AMagicSurvivalGameMode::~AMagicSurvivalGameMode() {}
	struct Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicSurvivalGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicSurvivalGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMagicSurvivalGameMode, AMagicSurvivalGameMode::StaticClass, TEXT("AMagicSurvivalGameMode"), &Z_Registration_Info_UClass_AMagicSurvivalGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicSurvivalGameMode), 429328805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicSurvivalGameMode_h_962208458(TEXT("/Script/MagicSurvial"),
		Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicSurvivalGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicSurvivalGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
