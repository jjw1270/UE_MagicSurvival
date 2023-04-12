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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor_NoRegister();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AMagicSurvivalGameMode();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AMagicSurvivalGameMode_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyScreenClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LobbyScreenClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyCharacterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LobbyCharacterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGameStart_MetaData[];
#endif
		static void NewProp_bGameStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicSurvivalGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicSurvial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicSurvivalGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MagicSurvivalGameMode.h" },
		{ "ModuleRelativePath", "MagicSurvivalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_LobbyScreenClass_MetaData[] = {
		{ "Category", "LobbyUI" },
		{ "ModuleRelativePath", "MagicSurvivalGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_LobbyScreenClass = { "LobbyScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicSurvivalGameMode, LobbyScreenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_LobbyScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_LobbyScreenClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_LobbyCharacterClass_MetaData[] = {
		{ "Category", "LobbyUI" },
		{ "ModuleRelativePath", "MagicSurvivalGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_LobbyCharacterClass = { "LobbyCharacterClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicSurvivalGameMode, LobbyCharacterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASkeletalMeshActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_LobbyCharacterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_LobbyCharacterClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_bGameStart_MetaData[] = {
		{ "Category", "MagicSurvivalGameMode" },
		{ "ModuleRelativePath", "MagicSurvivalGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_bGameStart_SetBit(void* Obj)
	{
		((AMagicSurvivalGameMode*)Obj)->bGameStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_bGameStart = { "bGameStart", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AMagicSurvivalGameMode), &Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_bGameStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_bGameStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_bGameStart_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicSurvivalGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_LobbyScreenClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_LobbyCharacterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicSurvivalGameMode_Statics::NewProp_bGameStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicSurvivalGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicSurvivalGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagicSurvivalGameMode_Statics::ClassParams = {
		&AMagicSurvivalGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMagicSurvivalGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagicSurvivalGameMode_Statics::PropPointers),
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
		{ Z_Construct_UClass_AMagicSurvivalGameMode, AMagicSurvivalGameMode::StaticClass, TEXT("AMagicSurvivalGameMode"), &Z_Registration_Info_UClass_AMagicSurvivalGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicSurvivalGameMode), 4065647410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicSurvivalGameMode_h_688546835(TEXT("/Script/MagicSurvial"),
		Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicSurvivalGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicSurvivalGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
