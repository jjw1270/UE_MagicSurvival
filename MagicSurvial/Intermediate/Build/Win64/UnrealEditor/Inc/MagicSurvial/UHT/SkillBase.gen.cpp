// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicSurvial/SkillBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_ASkillBase();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_ASkillBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MagicSurvial();
// End Cross Module References
	DEFINE_FUNCTION(ASkillBase::execSetDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamage();
		P_NATIVE_END;
	}
	void ASkillBase::StaticRegisterNativesASkillBase()
	{
		UClass* Class = ASkillBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDamage", &ASkillBase::execSetDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASkillBase_SetDamage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkillBase_SetDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkillBase_SetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkillBase, nullptr, "SetDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkillBase_SetDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillBase_SetDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkillBase_SetDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASkillBase_SetDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASkillBase);
	UClass* Z_Construct_UClass_ASkillBase_NoRegister()
	{
		return ASkillBase::StaticClass();
	}
	struct Z_Construct_UClass_ASkillBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDamage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASkillBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicSurvial,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASkillBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASkillBase_SetDamage, "SetDamage" }, // 2439424417
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkillBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkillBase.h" },
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkillBase_Statics::NewProp_SkillMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkillBase_Statics::NewProp_SkillMesh = { "SkillMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASkillBase, SkillMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkillBase_Statics::NewProp_SkillMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkillBase_Statics::NewProp_SkillMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkillBase_Statics::NewProp_HitParticle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkillBase_Statics::NewProp_HitParticle = { "HitParticle", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASkillBase, HitParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkillBase_Statics::NewProp_HitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkillBase_Statics::NewProp_HitParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkillBase_Statics::NewProp_DefaultDamage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASkillBase_Statics::NewProp_DefaultDamage = { "DefaultDamage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASkillBase, DefaultDamage), METADATA_PARAMS(Z_Construct_UClass_ASkillBase_Statics::NewProp_DefaultDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkillBase_Statics::NewProp_DefaultDamage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkillBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkillBase_Statics::NewProp_SkillMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkillBase_Statics::NewProp_HitParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkillBase_Statics::NewProp_DefaultDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASkillBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkillBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASkillBase_Statics::ClassParams = {
		&ASkillBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASkillBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASkillBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASkillBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASkillBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASkillBase()
	{
		if (!Z_Registration_Info_UClass_ASkillBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASkillBase.OuterSingleton, Z_Construct_UClass_ASkillBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASkillBase.OuterSingleton;
	}
	template<> MAGICSURVIAL_API UClass* StaticClass<ASkillBase>()
	{
		return ASkillBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASkillBase);
	ASkillBase::~ASkillBase() {}
	struct Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_SkillBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_SkillBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASkillBase, ASkillBase::StaticClass, TEXT("ASkillBase"), &Z_Registration_Info_UClass_ASkillBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASkillBase), 3124348405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_SkillBase_h_3827542361(TEXT("/Script/MagicSurvial"),
		Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_SkillBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_SkillBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
