// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicSurvial/MagicCharacterPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicCharacterPlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AMagicCharacterPlayerController();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AMagicCharacterPlayerController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MagicSurvial();
// End Cross Module References
	void AMagicCharacterPlayerController::StaticRegisterNativesAMagicCharacterPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagicCharacterPlayerController);
	UClass* Z_Construct_UClass_AMagicCharacterPlayerController_NoRegister()
	{
		return AMagicCharacterPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMagicCharacterPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyScreenClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LobbyScreenClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyCharacterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LobbyCharacterClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicCharacterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicSurvial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacterPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MagicCharacterPlayerController.h" },
		{ "ModuleRelativePath", "MagicCharacterPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_LobbyScreenClass_MetaData[] = {
		{ "Category", "MagicCharacterPlayerController" },
		{ "ModuleRelativePath", "MagicCharacterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_LobbyScreenClass = { "LobbyScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacterPlayerController, LobbyScreenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_LobbyScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_LobbyScreenClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_LobbyCharacterClass_MetaData[] = {
		{ "Category", "LobbyCharacter" },
		{ "ModuleRelativePath", "MagicCharacterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_LobbyCharacterClass = { "LobbyCharacterClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacterPlayerController, LobbyCharacterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_LobbyCharacterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_LobbyCharacterClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicCharacterPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_LobbyScreenClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_LobbyCharacterClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicCharacterPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicCharacterPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagicCharacterPlayerController_Statics::ClassParams = {
		&AMagicCharacterPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMagicCharacterPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacterPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMagicCharacterPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacterPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagicCharacterPlayerController()
	{
		if (!Z_Registration_Info_UClass_AMagicCharacterPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagicCharacterPlayerController.OuterSingleton, Z_Construct_UClass_AMagicCharacterPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMagicCharacterPlayerController.OuterSingleton;
	}
	template<> MAGICSURVIAL_API UClass* StaticClass<AMagicCharacterPlayerController>()
	{
		return AMagicCharacterPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicCharacterPlayerController);
	AMagicCharacterPlayerController::~AMagicCharacterPlayerController() {}
	struct Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicCharacterPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicCharacterPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMagicCharacterPlayerController, AMagicCharacterPlayerController::StaticClass, TEXT("AMagicCharacterPlayerController"), &Z_Registration_Info_UClass_AMagicCharacterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicCharacterPlayerController), 2889373507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicCharacterPlayerController_h_2224888348(TEXT("/Script/MagicSurvial"),
		Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicCharacterPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicCharacterPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
