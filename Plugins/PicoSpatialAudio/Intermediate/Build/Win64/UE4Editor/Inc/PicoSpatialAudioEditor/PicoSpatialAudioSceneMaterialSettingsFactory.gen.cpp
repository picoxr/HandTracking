// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoSpatialAudioEditor/Public/PicoSpatialAudioSceneMaterialSettingsFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoSpatialAudioSceneMaterialSettingsFactory() {}
// Cross Module References
	PICOSPATIALAUDIOEDITOR_API UClass* Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettingsFactory_NoRegister();
	PICOSPATIALAUDIOEDITOR_API UClass* Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettingsFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PicoSpatialAudioEditor();
// End Cross Module References
	void UPicoSpatialAudioSceneMaterialSettingsFactory::StaticRegisterNativesUPicoSpatialAudioSceneMaterialSettingsFactory()
	{
	}
	UClass* Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettingsFactory_NoRegister()
	{
		return UPicoSpatialAudioSceneMaterialSettingsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettingsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettingsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PicoSpatialAudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettingsFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PicoSpatialAudioSceneMaterialSettingsFactory.h" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneMaterialSettingsFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettingsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoSpatialAudioSceneMaterialSettingsFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettingsFactory_Statics::ClassParams = {
		&UPicoSpatialAudioSceneMaterialSettingsFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettingsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettingsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettingsFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettingsFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPicoSpatialAudioSceneMaterialSettingsFactory, 2241431011);
	template<> PICOSPATIALAUDIOEDITOR_API UClass* StaticClass<UPicoSpatialAudioSceneMaterialSettingsFactory>()
	{
		return UPicoSpatialAudioSceneMaterialSettingsFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPicoSpatialAudioSceneMaterialSettingsFactory(Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettingsFactory, &UPicoSpatialAudioSceneMaterialSettingsFactory::StaticClass, TEXT("/Script/PicoSpatialAudioEditor"), TEXT("UPicoSpatialAudioSceneMaterialSettingsFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoSpatialAudioSceneMaterialSettingsFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
