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
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AMagicCharacterPlayerController();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AMagicCharacterPlayerController_NoRegister();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
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
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MagicCharacterPlayerController.h" },
		{ "ModuleRelativePath", "MagicCharacterPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_InputMapping_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "MagicCharacterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacterPlayerController, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_InputMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_InputMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "MagicCharacterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacterPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_MoveAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicCharacterPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacterPlayerController_Statics::NewProp_MoveAction,
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
		{ Z_Construct_UClass_AMagicCharacterPlayerController, AMagicCharacterPlayerController::StaticClass, TEXT("AMagicCharacterPlayerController"), &Z_Registration_Info_UClass_AMagicCharacterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicCharacterPlayerController), 930683252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicCharacterPlayerController_h_3381898073(TEXT("/Script/MagicSurvial"),
		Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicCharacterPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicCharacterPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
