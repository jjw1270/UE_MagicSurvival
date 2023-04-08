// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicSurvial/MagicSurvialGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicSurvialGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AMagicSurvialGameModeBase();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AMagicSurvialGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MagicSurvial();
// End Cross Module References
	void AMagicSurvialGameModeBase::StaticRegisterNativesAMagicSurvialGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagicSurvialGameModeBase);
	UClass* Z_Construct_UClass_AMagicSurvialGameModeBase_NoRegister()
	{
		return AMagicSurvialGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMagicSurvialGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicSurvialGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicSurvial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicSurvialGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MagicSurvialGameModeBase.h" },
		{ "ModuleRelativePath", "MagicSurvialGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicSurvialGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicSurvialGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagicSurvialGameModeBase_Statics::ClassParams = {
		&AMagicSurvialGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMagicSurvialGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicSurvialGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagicSurvialGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMagicSurvialGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagicSurvialGameModeBase.OuterSingleton, Z_Construct_UClass_AMagicSurvialGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMagicSurvialGameModeBase.OuterSingleton;
	}
	template<> MAGICSURVIAL_API UClass* StaticClass<AMagicSurvialGameModeBase>()
	{
		return AMagicSurvialGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicSurvialGameModeBase);
	AMagicSurvialGameModeBase::~AMagicSurvialGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicSurvialGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicSurvialGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMagicSurvialGameModeBase, AMagicSurvialGameModeBase::StaticClass, TEXT("AMagicSurvialGameModeBase"), &Z_Registration_Info_UClass_AMagicSurvialGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicSurvialGameModeBase), 942504377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicSurvialGameModeBase_h_2998370736(TEXT("/Script/MagicSurvial"),
		Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicSurvialGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicSurvialGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
