// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicSurvial/EnemyObjectPooler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyObjectPooler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AEnemyCharacterBase_NoRegister();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AEnemyObjectPooler();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AEnemyObjectPooler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MagicSurvial();
// End Cross Module References
	DEFINE_FUNCTION(AEnemyObjectPooler::execSpawnObjectFromPool)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_EnemyTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnObjectFromPool(Z_Param_Out_EnemyTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyObjectPooler::execAddObjectToPool)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_EnemyTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddObjectToPool(Z_Param_Out_EnemyTag);
		P_NATIVE_END;
	}
	void AEnemyObjectPooler::StaticRegisterNativesAEnemyObjectPooler()
	{
		UClass* Class = AEnemyObjectPooler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddObjectToPool", &AEnemyObjectPooler::execAddObjectToPool },
			{ "SpawnObjectFromPool", &AEnemyObjectPooler::execSpawnObjectFromPool },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool_Statics
	{
		struct EnemyObjectPooler_eventAddObjectToPool_Parms
		{
			FName EnemyTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EnemyTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool_Statics::NewProp_EnemyTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool_Statics::NewProp_EnemyTag = { "EnemyTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnemyObjectPooler_eventAddObjectToPool_Parms, EnemyTag), METADATA_PARAMS(Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool_Statics::NewProp_EnemyTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool_Statics::NewProp_EnemyTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool_Statics::NewProp_EnemyTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// EnemyCharacterBase\xeb\xa5\xbc \xec\x83\x81\xec\x86\x8d\xeb\xb0\x9b\xeb\x8a\x94 Enemy\xeb\xa5\xbc \xeb\xa7\xa4\xea\xb0\x9c\xeb\xb3\x80\xec\x88\x98\xeb\xa1\x9c \xeb\xb0\x9b\xec\x95\x84 \xed\x95\xb4\xeb\x8b\xb9 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xec\x9d\x98 \xed\x83\x80\xec\x9e\x85\xeb\x8c\x80\xeb\xa1\x9c \xeb\xb6\x84\xeb\xa5\x98\xed\x95\x98\xec\x97\xac Array\xec\x97\x90 ADD\n" },
		{ "ModuleRelativePath", "EnemyObjectPooler.h" },
		{ "ToolTip", "EnemyCharacterBase\xeb\xa5\xbc \xec\x83\x81\xec\x86\x8d\xeb\xb0\x9b\xeb\x8a\x94 Enemy\xeb\xa5\xbc \xeb\xa7\xa4\xea\xb0\x9c\xeb\xb3\x80\xec\x88\x98\xeb\xa1\x9c \xeb\xb0\x9b\xec\x95\x84 \xed\x95\xb4\xeb\x8b\xb9 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xec\x9d\x98 \xed\x83\x80\xec\x9e\x85\xeb\x8c\x80\xeb\xa1\x9c \xeb\xb6\x84\xeb\xa5\x98\xed\x95\x98\xec\x97\xac Array\xec\x97\x90 ADD" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyObjectPooler, nullptr, "AddObjectToPool", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool_Statics::EnemyObjectPooler_eventAddObjectToPool_Parms), Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool_Statics
	{
		struct EnemyObjectPooler_eventSpawnObjectFromPool_Parms
		{
			FName EnemyTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EnemyTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool_Statics::NewProp_EnemyTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool_Statics::NewProp_EnemyTag = { "EnemyTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnemyObjectPooler_eventSpawnObjectFromPool_Parms, EnemyTag), METADATA_PARAMS(Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool_Statics::NewProp_EnemyTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool_Statics::NewProp_EnemyTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool_Statics::NewProp_EnemyTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Enemy\xec\x9d\x98 2\xeb\xb2\x88\xec\xa7\xb8 \xed\x83\x9c\xea\xb7\xb8\xeb\xa5\xbc \xeb\xa7\xa4\xea\xb0\x9c\xeb\xb3\x80\xec\x88\x98\xeb\xa1\x9c \xeb\xb0\x9b\xec\x95\x84 \xed\x95\xb4\xeb\x8b\xb9 \xec\x98\xa4\xeb\xb8\x8c\xec\xa0\x9d\xed\x8a\xb8\xeb\xa5\xbc Array\xec\x97\x90\xec\x84\x9c \xea\xba\xbc\xeb\x84\xa4\xec\x98\xb4\n" },
		{ "ModuleRelativePath", "EnemyObjectPooler.h" },
		{ "ToolTip", "Enemy\xec\x9d\x98 2\xeb\xb2\x88\xec\xa7\xb8 \xed\x83\x9c\xea\xb7\xb8\xeb\xa5\xbc \xeb\xa7\xa4\xea\xb0\x9c\xeb\xb3\x80\xec\x88\x98\xeb\xa1\x9c \xeb\xb0\x9b\xec\x95\x84 \xed\x95\xb4\xeb\x8b\xb9 \xec\x98\xa4\xeb\xb8\x8c\xec\xa0\x9d\xed\x8a\xb8\xeb\xa5\xbc Array\xec\x97\x90\xec\x84\x9c \xea\xba\xbc\xeb\x84\xa4\xec\x98\xb4" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyObjectPooler, nullptr, "SpawnObjectFromPool", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool_Statics::EnemyObjectPooler_eventSpawnObjectFromPool_Parms), Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyObjectPooler);
	UClass* Z_Construct_UClass_AEnemyObjectPooler_NoRegister()
	{
		return AEnemyObjectPooler::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyObjectPooler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZombieClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ZombieClass;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Pool_Zombie_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pool_Zombie_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pool_Zombie;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyObjectPooler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicSurvial,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyObjectPooler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyObjectPooler_AddObjectToPool, "AddObjectToPool" }, // 1321209556
		{ &Z_Construct_UFunction_AEnemyObjectPooler_SpawnObjectFromPool, "SpawnObjectFromPool" }, // 2211883015
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyObjectPooler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyObjectPooler.h" },
		{ "ModuleRelativePath", "EnemyObjectPooler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyObjectPooler_Statics::NewProp_ZombieClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyClass" },
		{ "ModuleRelativePath", "EnemyObjectPooler.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyObjectPooler_Statics::NewProp_ZombieClass = { "ZombieClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyObjectPooler, ZombieClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemyCharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyObjectPooler_Statics::NewProp_ZombieClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyObjectPooler_Statics::NewProp_ZombieClass_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEnemyObjectPooler_Statics::NewProp_Pool_Zombie_Inner = { "Pool_Zombie", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AEnemyCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyObjectPooler_Statics::NewProp_Pool_Zombie_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Object Pool" },
		{ "ModuleRelativePath", "EnemyObjectPooler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyObjectPooler_Statics::NewProp_Pool_Zombie = { "Pool_Zombie", nullptr, (EPropertyFlags)0x0044000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyObjectPooler, Pool_Zombie), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemyObjectPooler_Statics::NewProp_Pool_Zombie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyObjectPooler_Statics::NewProp_Pool_Zombie_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyObjectPooler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyObjectPooler_Statics::NewProp_ZombieClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyObjectPooler_Statics::NewProp_Pool_Zombie_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyObjectPooler_Statics::NewProp_Pool_Zombie,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyObjectPooler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyObjectPooler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyObjectPooler_Statics::ClassParams = {
		&AEnemyObjectPooler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyObjectPooler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyObjectPooler_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyObjectPooler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyObjectPooler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyObjectPooler()
	{
		if (!Z_Registration_Info_UClass_AEnemyObjectPooler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyObjectPooler.OuterSingleton, Z_Construct_UClass_AEnemyObjectPooler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyObjectPooler.OuterSingleton;
	}
	template<> MAGICSURVIAL_API UClass* StaticClass<AEnemyObjectPooler>()
	{
		return AEnemyObjectPooler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyObjectPooler);
	AEnemyObjectPooler::~AEnemyObjectPooler() {}
	struct Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyObjectPooler, AEnemyObjectPooler::StaticClass, TEXT("AEnemyObjectPooler"), &Z_Registration_Info_UClass_AEnemyObjectPooler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyObjectPooler), 1890822541U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_481708155(TEXT("/Script/MagicSurvial"),
		Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_EnemyObjectPooler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
