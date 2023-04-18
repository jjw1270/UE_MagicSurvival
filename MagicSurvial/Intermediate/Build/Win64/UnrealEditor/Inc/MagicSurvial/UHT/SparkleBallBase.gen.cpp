// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicSurvial/SparkleBallBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSparkleBallBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_ASparkleBall_NoRegister();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_ASparkleBallBase();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_ASparkleBallBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MagicSurvial();
// End Cross Module References
	void ASparkleBallBase::StaticRegisterNativesASparkleBallBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASparkleBallBase);
	UClass* Z_Construct_UClass_ASparkleBallBase_NoRegister()
	{
		return ASparkleBallBase::StaticClass();
	}
	struct Z_Construct_UClass_ASparkleBallBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base_Skill_Point_B_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Base_Skill_Point_B;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skill_Point_B_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill_Point_B_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Skill_Point_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill_SparkleBallClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Skill_SparkleBallClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASparkleBallBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicSurvial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASparkleBallBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SparkleBallBase.h" },
		{ "ModuleRelativePath", "SparkleBallBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Base_Skill_Point_B_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SparkleBallBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Base_Skill_Point_B = { "Base_Skill_Point_B", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASparkleBallBase, Base_Skill_Point_B), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Base_Skill_Point_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Base_Skill_Point_B_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Skill_Point_B_Inner = { "Skill_Point_B", nullptr, (EPropertyFlags)0x00040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Skill_Point_B_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SparkleBallBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Skill_Point_B = { "Skill_Point_B", nullptr, (EPropertyFlags)0x004400800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASparkleBallBase, Skill_Point_B), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Skill_Point_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Skill_Point_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Skill_SparkleBallClass_MetaData[] = {
		{ "Category", "Skills" },
		{ "ModuleRelativePath", "SparkleBallBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Skill_SparkleBallClass = { "Skill_SparkleBallClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASparkleBallBase, Skill_SparkleBallClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASparkleBall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Skill_SparkleBallClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Skill_SparkleBallClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASparkleBallBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Base_Skill_Point_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Skill_Point_B_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Skill_Point_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASparkleBallBase_Statics::NewProp_Skill_SparkleBallClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASparkleBallBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASparkleBallBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASparkleBallBase_Statics::ClassParams = {
		&ASparkleBallBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASparkleBallBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASparkleBallBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASparkleBallBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASparkleBallBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASparkleBallBase()
	{
		if (!Z_Registration_Info_UClass_ASparkleBallBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASparkleBallBase.OuterSingleton, Z_Construct_UClass_ASparkleBallBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASparkleBallBase.OuterSingleton;
	}
	template<> MAGICSURVIAL_API UClass* StaticClass<ASparkleBallBase>()
	{
		return ASparkleBallBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASparkleBallBase);
	ASparkleBallBase::~ASparkleBallBase() {}
	struct Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_SparkleBallBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_SparkleBallBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASparkleBallBase, ASparkleBallBase::StaticClass, TEXT("ASparkleBallBase"), &Z_Registration_Info_UClass_ASparkleBallBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASparkleBallBase), 3428404039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_SparkleBallBase_h_1744752870(TEXT("/Script/MagicSurvial"),
		Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_SparkleBallBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_SparkleBallBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
