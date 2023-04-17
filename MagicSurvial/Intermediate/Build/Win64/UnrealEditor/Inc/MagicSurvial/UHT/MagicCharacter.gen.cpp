// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicSurvial/MagicCharacter.h"
#include "Engine/Classes/Engine/HitResult.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AIceSpear_NoRegister();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AMagicCharacter();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_AMagicCharacter_NoRegister();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_ASparkleBall_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MagicSurvial();
// End Cross Module References
	DEFINE_FUNCTION(AMagicCharacter::execSkill_PunchHeavy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Skill_PunchHeavy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicCharacter::execSkill_MagicArrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Skill_MagicArrow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicCharacter::execSkill_LightningStrike)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Skill_LightningStrike();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicCharacter::execSkill_SparkleBall)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Skill_SparkleBall();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicCharacter::execSkill_IceSpear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Skill_IceSpear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicCharacter::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicCharacter::execMove)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	void AMagicCharacter::StaticRegisterNativesAMagicCharacter()
	{
		UClass* Class = AMagicCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Move", &AMagicCharacter::execMove },
			{ "OnOverlapBegin", &AMagicCharacter::execOnOverlapBegin },
			{ "Skill_IceSpear", &AMagicCharacter::execSkill_IceSpear },
			{ "Skill_LightningStrike", &AMagicCharacter::execSkill_LightningStrike },
			{ "Skill_MagicArrow", &AMagicCharacter::execSkill_MagicArrow },
			{ "Skill_PunchHeavy", &AMagicCharacter::execSkill_PunchHeavy },
			{ "Skill_SparkleBall", &AMagicCharacter::execSkill_SparkleBall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMagicCharacter_Move_Statics
	{
		struct MagicCharacter_eventMove_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicCharacter_Move_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMagicCharacter_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MagicCharacter_eventMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_AMagicCharacter_Move_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicCharacter_Move_Statics::NewProp_Value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicCharacter_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicCharacter_Move_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicCharacter_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicCharacter_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicCharacter, nullptr, "Move", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMagicCharacter_Move_Statics::MagicCharacter_eventMove_Parms), Z_Construct_UFunction_AMagicCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicCharacter_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicCharacter_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicCharacter_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicCharacter_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicCharacter_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics
	{
		struct MagicCharacter_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MagicCharacter_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MagicCharacter_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MagicCharacter_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MagicCharacter_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MagicCharacter_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MagicCharacter_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MagicCharacter_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicCharacter, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::MagicCharacter_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicCharacter_Skill_IceSpear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicCharacter_Skill_IceSpear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicCharacter_Skill_IceSpear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicCharacter, nullptr, "Skill_IceSpear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicCharacter_Skill_IceSpear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicCharacter_Skill_IceSpear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicCharacter_Skill_IceSpear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicCharacter_Skill_IceSpear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicCharacter_Skill_LightningStrike_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicCharacter_Skill_LightningStrike_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicCharacter_Skill_LightningStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicCharacter, nullptr, "Skill_LightningStrike", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicCharacter_Skill_LightningStrike_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicCharacter_Skill_LightningStrike_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicCharacter_Skill_LightningStrike()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicCharacter_Skill_LightningStrike_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicCharacter_Skill_MagicArrow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicCharacter_Skill_MagicArrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicCharacter_Skill_MagicArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicCharacter, nullptr, "Skill_MagicArrow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicCharacter_Skill_MagicArrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicCharacter_Skill_MagicArrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicCharacter_Skill_MagicArrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicCharacter_Skill_MagicArrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicCharacter_Skill_PunchHeavy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicCharacter_Skill_PunchHeavy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicCharacter_Skill_PunchHeavy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicCharacter, nullptr, "Skill_PunchHeavy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicCharacter_Skill_PunchHeavy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicCharacter_Skill_PunchHeavy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicCharacter_Skill_PunchHeavy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicCharacter_Skill_PunchHeavy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicCharacter_Skill_SparkleBall_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicCharacter_Skill_SparkleBall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicCharacter_Skill_SparkleBall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicCharacter, nullptr, "Skill_SparkleBall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicCharacter_Skill_SparkleBall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicCharacter_Skill_SparkleBall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicCharacter_Skill_SparkleBall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagicCharacter_Skill_SparkleBall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagicCharacter);
	UClass* Z_Construct_UClass_AMagicCharacter_NoRegister()
	{
		return AMagicCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMagicCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base_Skill_Point_A_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Base_Skill_Point_A;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skill_Point_A_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill_Point_A_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Skill_Point_A;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill_IceSpearClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Skill_IceSpearClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill_SparkleBallClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Skill_SparkleBallClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill_Level_IceSpear_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Skill_Level_IceSpear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill_Level_SparkleBall_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Skill_Level_SparkleBall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill_Level_LightningStrike_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Skill_Level_LightningStrike;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill_Level_MagicArrow_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Skill_Level_MagicArrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill_Level_PunchHeavy_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Skill_Level_PunchHeavy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicSurvial,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMagicCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagicCharacter_Move, "Move" }, // 1763999074
		{ &Z_Construct_UFunction_AMagicCharacter_OnOverlapBegin, "OnOverlapBegin" }, // 966705465
		{ &Z_Construct_UFunction_AMagicCharacter_Skill_IceSpear, "Skill_IceSpear" }, // 3832581313
		{ &Z_Construct_UFunction_AMagicCharacter_Skill_LightningStrike, "Skill_LightningStrike" }, // 1152583036
		{ &Z_Construct_UFunction_AMagicCharacter_Skill_MagicArrow, "Skill_MagicArrow" }, // 999211781
		{ &Z_Construct_UFunction_AMagicCharacter_Skill_PunchHeavy, "Skill_PunchHeavy" }, // 3977559871
		{ &Z_Construct_UFunction_AMagicCharacter_Skill_SparkleBall, "Skill_SparkleBall" }, // 2085054559
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MagicCharacter.h" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacter, WeaponMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_WeaponMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Base_Skill_Point_A_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Base_Skill_Point_A = { "Base_Skill_Point_A", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacter, Base_Skill_Point_A), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Base_Skill_Point_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Base_Skill_Point_A_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Point_A_Inner = { "Skill_Point_A", nullptr, (EPropertyFlags)0x00040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Point_A_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Point_A = { "Skill_Point_A", nullptr, (EPropertyFlags)0x004400800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacter, Skill_Point_A), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Point_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Point_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Base_Skill_Point_B_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Base_Skill_Point_B = { "Base_Skill_Point_B", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacter, Base_Skill_Point_B), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Base_Skill_Point_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Base_Skill_Point_B_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Point_B_Inner = { "Skill_Point_B", nullptr, (EPropertyFlags)0x00040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Point_B_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Point_B = { "Skill_Point_B", nullptr, (EPropertyFlags)0x004400800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacter, Skill_Point_B), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Point_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Point_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::NewProp_InputMapping_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacter, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_InputMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_InputMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_IceSpearClass_MetaData[] = {
		{ "Category", "Skills" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_IceSpearClass = { "Skill_IceSpearClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacter, Skill_IceSpearClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AIceSpear_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_IceSpearClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_IceSpearClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_SparkleBallClass_MetaData[] = {
		{ "Category", "Skills" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_SparkleBallClass = { "Skill_SparkleBallClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacter, Skill_SparkleBallClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASparkleBall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_SparkleBallClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_SparkleBallClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_IceSpear_MetaData[] = {
		{ "Category", "Skills" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_IceSpear = { "Skill_Level_IceSpear", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacter, Skill_Level_IceSpear), METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_IceSpear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_IceSpear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_SparkleBall_MetaData[] = {
		{ "Category", "Skills" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_SparkleBall = { "Skill_Level_SparkleBall", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacter, Skill_Level_SparkleBall), METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_SparkleBall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_SparkleBall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_LightningStrike_MetaData[] = {
		{ "Category", "Skills" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_LightningStrike = { "Skill_Level_LightningStrike", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacter, Skill_Level_LightningStrike), METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_LightningStrike_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_LightningStrike_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_MagicArrow_MetaData[] = {
		{ "Category", "Skills" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_MagicArrow = { "Skill_Level_MagicArrow", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacter, Skill_Level_MagicArrow), METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_MagicArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_MagicArrow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_PunchHeavy_MetaData[] = {
		{ "Category", "Skills" },
		{ "ModuleRelativePath", "MagicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_PunchHeavy = { "Skill_Level_PunchHeavy", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMagicCharacter, Skill_Level_PunchHeavy), METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_PunchHeavy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_PunchHeavy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_WeaponMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Base_Skill_Point_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Point_A_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Point_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Base_Skill_Point_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Point_B_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Point_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_IceSpearClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_SparkleBallClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_IceSpear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_SparkleBall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_LightningStrike,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_MagicArrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicCharacter_Statics::NewProp_Skill_Level_PunchHeavy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagicCharacter_Statics::ClassParams = {
		&AMagicCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMagicCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMagicCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagicCharacter()
	{
		if (!Z_Registration_Info_UClass_AMagicCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagicCharacter.OuterSingleton, Z_Construct_UClass_AMagicCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMagicCharacter.OuterSingleton;
	}
	template<> MAGICSURVIAL_API UClass* StaticClass<AMagicCharacter>()
	{
		return AMagicCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicCharacter);
	AMagicCharacter::~AMagicCharacter() {}
	struct Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMagicCharacter, AMagicCharacter::StaticClass, TEXT("AMagicCharacter"), &Z_Registration_Info_UClass_AMagicCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicCharacter), 3363898549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicCharacter_h_1152199837(TEXT("/Script/MagicSurvial"),
		Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_MagicCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
