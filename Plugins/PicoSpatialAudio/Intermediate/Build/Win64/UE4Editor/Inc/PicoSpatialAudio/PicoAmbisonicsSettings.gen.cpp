// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoSpatialAudio/Public/PicoAmbisonicsSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoAmbisonicsSettings() {}
// Cross Module References
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPicoAmbisonicsSettings_NoRegister();
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPicoAmbisonicsSettings();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase();
	UPackage* Z_Construct_UPackage__Script_PicoSpatialAudio();
// End Cross Module References
	void UPicoAmbisonicsSettings::StaticRegisterNativesUPicoAmbisonicsSettings()
	{
	}
	UClass* Z_Construct_UClass_UPicoAmbisonicsSettings_NoRegister()
	{
		return UPicoAmbisonicsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPicoAmbisonicsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundfieldEncodingSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PicoSpatialAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PicoAmbisonicsSettings.h" },
		{ "ModuleRelativePath", "Public/PicoAmbisonicsSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::NewProp_Order_MetaData[] = {
		{ "Category", "AmbisonicsSettings" },
		{ "ClampMax", "7" },
		{ "ClampMin", "1" },
		{ "Comment", "//Which order of ambisonics to use for this submix.\n" },
		{ "ModuleRelativePath", "Public/PicoAmbisonicsSettings.h" },
		{ "ToolTip", "Which order of ambisonics to use for this submix." },
		{ "UIMax", "7" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoAmbisonicsSettings, Order), METADATA_PARAMS(Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::NewProp_Order_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::NewProp_Order_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::NewProp_Order,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoAmbisonicsSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::ClassParams = {
		&UPicoAmbisonicsSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoAmbisonicsSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPicoAmbisonicsSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPicoAmbisonicsSettings, 2561817645);
	template<> PICOSPATIALAUDIO_API UClass* StaticClass<UPicoAmbisonicsSettings>()
	{
		return UPicoAmbisonicsSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPicoAmbisonicsSettings(Z_Construct_UClass_UPicoAmbisonicsSettings, &UPicoAmbisonicsSettings::StaticClass, TEXT("/Script/PicoSpatialAudio"), TEXT("UPicoAmbisonicsSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoAmbisonicsSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
