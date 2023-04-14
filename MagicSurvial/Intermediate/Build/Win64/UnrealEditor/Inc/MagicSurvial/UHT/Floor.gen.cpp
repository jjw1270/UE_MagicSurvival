// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicSurvial/Floor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AFloor();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AFloor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MagicSurvial();
// End Cross Module References
	void AFloor::StaticRegisterNativesAFloor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloor);
	UClass* Z_Construct_UClass_AFloor_NoRegister()
	{
		return AFloor::StaticClass();
	}
	struct Z_Construct_UClass_AFloor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FloorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoxCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicSurvial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Floor.h" },
		{ "ModuleRelativePath", "Floor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloor_Statics::NewProp_Scale_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Floor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloor_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFloor, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloor_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloor_Statics::NewProp_FloorMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Floor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFloor_Statics::NewProp_FloorMesh = { "FloorMesh", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFloor, FloorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloor_Statics::NewProp_FloorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_Statics::NewProp_FloorMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloor_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Floor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFloor_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFloor, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloor_Statics::NewProp_BoxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_Statics::NewProp_BoxCollision_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_Statics::NewProp_FloorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloor_Statics::NewProp_BoxCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloor_Statics::ClassParams = {
		&AFloor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloor()
	{
		if (!Z_Registration_Info_UClass_AFloor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloor.OuterSingleton, Z_Construct_UClass_AFloor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloor.OuterSingleton;
	}
	template<> MAGICSURVIAL_API UClass* StaticClass<AFloor>()
	{
		return AFloor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloor);
	AFloor::~AFloor() {}
	struct Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_Floor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_Floor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloor, AFloor::StaticClass, TEXT("AFloor"), &Z_Registration_Info_UClass_AFloor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloor), 2570673666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_Floor_h_1778527807(TEXT("/Script/MagicSurvial"),
		Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_Floor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_Floor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
