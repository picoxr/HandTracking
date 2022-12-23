// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoSpatialAudio/Public/PicoSpatialAudioSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoSpatialAudioSettings() {}
// Cross Module References
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPicoSpatialAudioSettings_NoRegister();
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPicoSpatialAudioSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PicoSpatialAudio();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	PICOSPATIALAUDIO_API UEnum* Z_Construct_UEnum_PicoSpatialAudio_EPxrAudioSpatializer_RenderingMode();
// End Cross Module References
	void UPicoSpatialAudioSettings::StaticRegisterNativesUPicoSpatialAudioSettings()
	{
	}
	UClass* Z_Construct_UClass_UPicoSpatialAudioSettings_NoRegister()
	{
		return UPicoSpatialAudioSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPicoSpatialAudioSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputSubmix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputSubmix;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RenderingMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RenderingMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PicoSpatialAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PicoSpatialAudioSettings.h" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::NewProp_OutputSubmix_MetaData[] = {
		{ "AllowedClasses", "SoundSubmix" },
		{ "Category", "Audio Routing" },
		{ "Comment", "// Reference to submix where reverb plugin audio is routed.\n" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSettings.h" },
		{ "ToolTip", "Reference to submix where reverb plugin audio is routed." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::NewProp_OutputSubmix = { "OutputSubmix", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoSpatialAudioSettings, OutputSubmix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::NewProp_OutputSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::NewProp_OutputSubmix_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::NewProp_RenderingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::NewProp_RenderingMode_MetaData[] = {
		{ "Category", "Rendering Quality" },
		{ "Comment", "// Global Rendering Quality for Pico Spatial Audio\n" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSettings.h" },
		{ "ToolTip", "Global Rendering Quality for Pico Spatial Audio" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::NewProp_RenderingMode = { "RenderingMode", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoSpatialAudioSettings, RenderingMode), Z_Construct_UEnum_PicoSpatialAudio_EPxrAudioSpatializer_RenderingMode, METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::NewProp_RenderingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::NewProp_RenderingMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::NewProp_OutputSubmix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::NewProp_RenderingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::NewProp_RenderingMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoSpatialAudioSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::ClassParams = {
		&UPicoSpatialAudioSettings::StaticClass,
		"Plugin",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoSpatialAudioSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPicoSpatialAudioSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPicoSpatialAudioSettings, 366205460);
	template<> PICOSPATIALAUDIO_API UClass* StaticClass<UPicoSpatialAudioSettings>()
	{
		return UPicoSpatialAudioSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPicoSpatialAudioSettings(Z_Construct_UClass_UPicoSpatialAudioSettings, &UPicoSpatialAudioSettings::StaticClass, TEXT("/Script/PicoSpatialAudio"), TEXT("UPicoSpatialAudioSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoSpatialAudioSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
