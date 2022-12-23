// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRHMD/Private/PXR_Utils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_Utils() {}
// Cross Module References
	PICOXRHMD_API UClass* Z_Construct_UClass_UPICOContentResourceFinder_NoRegister();
	PICOXRHMD_API UClass* Z_Construct_UClass_UPICOContentResourceFinder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PICOXRHMD();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void UPICOContentResourceFinder::StaticRegisterNativesUPICOContentResourceFinder()
	{
	}
	UClass* Z_Construct_UClass_UPICOContentResourceFinder_NoRegister()
	{
		return UPICOContentResourceFinder::StaticClass();
	}
	struct Z_Construct_UClass_UPICOContentResourceFinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StereoLayerDepthMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StereoLayerDepthMat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOContentResourceFinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRHMD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOContentResourceFinder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PXR_Utils.h" },
		{ "ModuleRelativePath", "Private/PXR_Utils.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOContentResourceFinder_Statics::NewProp_StereoLayerDepthMat_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPICOContentResourceFinder_Statics::NewProp_StereoLayerDepthMat = { "StereoLayerDepthMat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOContentResourceFinder, StereoLayerDepthMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPICOContentResourceFinder_Statics::NewProp_StereoLayerDepthMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOContentResourceFinder_Statics::NewProp_StereoLayerDepthMat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPICOContentResourceFinder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOContentResourceFinder_Statics::NewProp_StereoLayerDepthMat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOContentResourceFinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOContentResourceFinder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPICOContentResourceFinder_Statics::ClassParams = {
		&UPICOContentResourceFinder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPICOContentResourceFinder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPICOContentResourceFinder_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOContentResourceFinder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOContentResourceFinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOContentResourceFinder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPICOContentResourceFinder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPICOContentResourceFinder, 95947677);
	template<> PICOXRHMD_API UClass* StaticClass<UPICOContentResourceFinder>()
	{
		return UPICOContentResourceFinder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPICOContentResourceFinder(Z_Construct_UClass_UPICOContentResourceFinder, &UPICOContentResourceFinder::StaticClass, TEXT("/Script/PICOXRHMD"), TEXT("UPICOContentResourceFinder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOContentResourceFinder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
