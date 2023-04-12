// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicSurvial/LobbyWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyWidget() {}
// Cross Module References
	MAGICSURVIAL_API UClass* Z_Construct_UClass_ULobbyWidget();
	MAGICSURVIAL_API UClass* Z_Construct_UClass_ULobbyWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MagicSurvial();
// End Cross Module References
	DEFINE_FUNCTION(ULobbyWidget::execBtn_QuitGame_Callback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Btn_QuitGame_Callback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULobbyWidget::execBtn_GameStart_Callback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Btn_GameStart_Callback();
		P_NATIVE_END;
	}
	void ULobbyWidget::StaticRegisterNativesULobbyWidget()
	{
		UClass* Class = ULobbyWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Btn_GameStart_Callback", &ULobbyWidget::execBtn_GameStart_Callback },
			{ "Btn_QuitGame_Callback", &ULobbyWidget::execBtn_QuitGame_Callback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULobbyWidget_Btn_GameStart_Callback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyWidget_Btn_GameStart_Callback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xeb\xb2\x84\xed\x8a\xbc\xec\x9d\x84 \xeb\x88\x8c\xeb\xa0\x80\xec\x9d\x84 \xeb\x95\x8c, \xed\x98\xb8\xec\xb6\x9c\xeb\x90\xa0 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\xec\x97\x90 \xeb\x93\xb1\xeb\xa1\x9d\xed\x95\xa0 \xed\x95\xa8\xec\x88\x98\n" },
		{ "ModuleRelativePath", "LobbyWidget.h" },
		{ "ToolTip", "\xeb\xb2\x84\xed\x8a\xbc\xec\x9d\x84 \xeb\x88\x8c\xeb\xa0\x80\xec\x9d\x84 \xeb\x95\x8c, \xed\x98\xb8\xec\xb6\x9c\xeb\x90\xa0 \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8\xec\x97\x90 \xeb\x93\xb1\xeb\xa1\x9d\xed\x95\xa0 \xed\x95\xa8\xec\x88\x98" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyWidget_Btn_GameStart_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyWidget, nullptr, "Btn_GameStart_Callback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyWidget_Btn_GameStart_Callback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyWidget_Btn_GameStart_Callback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyWidget_Btn_GameStart_Callback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULobbyWidget_Btn_GameStart_Callback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULobbyWidget_Btn_QuitGame_Callback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyWidget_Btn_QuitGame_Callback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LobbyWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyWidget_Btn_QuitGame_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyWidget, nullptr, "Btn_QuitGame_Callback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyWidget_Btn_QuitGame_Callback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyWidget_Btn_QuitGame_Callback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyWidget_Btn_QuitGame_Callback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULobbyWidget_Btn_QuitGame_Callback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULobbyWidget);
	UClass* Z_Construct_UClass_ULobbyWidget_NoRegister()
	{
		return ULobbyWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULobbyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Btn_GameStart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Btn_GameStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Btn_QuitGame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Btn_QuitGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobbyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicSurvial,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULobbyWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULobbyWidget_Btn_GameStart_Callback, "Btn_GameStart_Callback" }, // 1322128319
		{ &Z_Construct_UFunction_ULobbyWidget_Btn_QuitGame_Callback, "Btn_QuitGame_Callback" }, // 3496154869
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LobbyWidget.h" },
		{ "ModuleRelativePath", "LobbyWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyWidget_Statics::NewProp_Btn_GameStart_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LobbyWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyWidget_Statics::NewProp_Btn_GameStart = { "Btn_GameStart", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULobbyWidget, Btn_GameStart), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULobbyWidget_Statics::NewProp_Btn_GameStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidget_Statics::NewProp_Btn_GameStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyWidget_Statics::NewProp_Btn_QuitGame_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LobbyWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyWidget_Statics::NewProp_Btn_QuitGame = { "Btn_QuitGame", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULobbyWidget, Btn_QuitGame), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULobbyWidget_Statics::NewProp_Btn_QuitGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidget_Statics::NewProp_Btn_QuitGame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULobbyWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyWidget_Statics::NewProp_Btn_GameStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyWidget_Statics::NewProp_Btn_QuitGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobbyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULobbyWidget_Statics::ClassParams = {
		&ULobbyWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULobbyWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULobbyWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULobbyWidget()
	{
		if (!Z_Registration_Info_UClass_ULobbyWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULobbyWidget.OuterSingleton, Z_Construct_UClass_ULobbyWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULobbyWidget.OuterSingleton;
	}
	template<> MAGICSURVIAL_API UClass* StaticClass<ULobbyWidget>()
	{
		return ULobbyWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyWidget);
	ULobbyWidget::~ULobbyWidget() {}
	struct Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULobbyWidget, ULobbyWidget::StaticClass, TEXT("ULobbyWidget"), &Z_Registration_Info_UClass_ULobbyWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULobbyWidget), 3599187981U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_3636157959(TEXT("/Script/MagicSurvial"),
		Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MagicSurvial_Source_MagicSurvial_LobbyWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
