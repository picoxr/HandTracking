// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoSpatialAudio/Public/PicoSpatialAudioSceneMaterialSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoSpatialAudioSceneMaterialSettings() {}
// Cross Module References
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_NoRegister();
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PicoSpatialAudio();
	PICOSPATIALAUDIO_API UEnum* Z_Construct_UEnum_PicoSpatialAudio_EPxrAudioSpatializer_SceneMaterialPreset();
// End Cross Module References
	void UPicoSpatialAudioSceneMaterialSettings::StaticRegisterNativesUPicoSpatialAudioSceneMaterialSettings()
	{
	}
	UClass* Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_NoRegister()
	{
		return UPicoSpatialAudioSceneMaterialSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialPreset_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialPreset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorptionBand0_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsorptionBand0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorptionBand1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsorptionBand1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorptionBand2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsorptionBand2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorptionBand3_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsorptionBand3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scattering_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scattering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transmission_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Transmission;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PicoSpatialAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PicoSpatialAudioSceneMaterialSettings.h" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_MaterialPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_MaterialPreset_MetaData[] = {
		{ "Category", "Presets" },
		{ "Comment", "//\x09Material setups\n" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettings.h" },
		{ "ToolTip", "Material setups" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_MaterialPreset = { "MaterialPreset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoSpatialAudioSceneMaterialSettings, MaterialPreset), Z_Construct_UEnum_PicoSpatialAudio_EPxrAudioSpatializer_SceneMaterialPreset, METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_MaterialPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_MaterialPreset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand0_MetaData[] = {
		{ "Category", "Acoustic Properties | Absorption" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand0 = { "AbsorptionBand0", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoSpatialAudioSceneMaterialSettings, AbsorptionBand0), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand1_MetaData[] = {
		{ "Category", "Acoustic Properties | Absorption" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand1 = { "AbsorptionBand1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoSpatialAudioSceneMaterialSettings, AbsorptionBand1), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand2_MetaData[] = {
		{ "Category", "Acoustic Properties | Absorption" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand2 = { "AbsorptionBand2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoSpatialAudioSceneMaterialSettings, AbsorptionBand2), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand3_MetaData[] = {
		{ "Category", "Acoustic Properties | Absorption" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand3 = { "AbsorptionBand3", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoSpatialAudioSceneMaterialSettings, AbsorptionBand3), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Scattering_MetaData[] = {
		{ "Category", "Acoustic Properties" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Scattering = { "Scattering", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoSpatialAudioSceneMaterialSettings, Scattering), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Scattering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Scattering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Transmission_MetaData[] = {
		{ "Category", "Acoustic Properties" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Transmission = { "Transmission", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoSpatialAudioSceneMaterialSettings, Transmission), METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Transmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Transmission_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_MaterialPreset_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_MaterialPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_AbsorptionBand3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Scattering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::NewProp_Transmission,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoSpatialAudioSceneMaterialSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::ClassParams = {
		&UPicoSpatialAudioSceneMaterialSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPicoSpatialAudioSceneMaterialSettings, 444836849);
	template<> PICOSPATIALAUDIO_API UClass* StaticClass<UPicoSpatialAudioSceneMaterialSettings>()
	{
		return UPicoSpatialAudioSceneMaterialSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPicoSpatialAudioSceneMaterialSettings(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings, &UPicoSpatialAudioSceneMaterialSettings::StaticClass, TEXT("/Script/PicoSpatialAudio"), TEXT("UPicoSpatialAudioSceneMaterialSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoSpatialAudioSceneMaterialSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
