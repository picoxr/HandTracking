// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRHMD/Public/PXR_Cubemap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_Cubemap() {}
// Cross Module References
	PICOXRHMD_API UClass* Z_Construct_UClass_APXR_Cubemap_NoRegister();
	PICOXRHMD_API UClass* Z_Construct_UClass_APXR_Cubemap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PICOXRHMD();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APXR_Cubemap::execPXR_CubemapHandler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PXR_CubemapHandler();
		P_NATIVE_END;
	}
	void APXR_Cubemap::StaticRegisterNativesAPXR_Cubemap()
	{
		UClass* Class = APXR_Cubemap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PXR_CubemapHandler", &APXR_Cubemap::execPXR_CubemapHandler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APXR_Cubemap_PXR_CubemapHandler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APXR_Cubemap_PXR_CubemapHandler_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/PXR_Cubemap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APXR_Cubemap_PXR_CubemapHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APXR_Cubemap, nullptr, "PXR_CubemapHandler", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APXR_Cubemap_PXR_CubemapHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APXR_Cubemap_PXR_CubemapHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APXR_Cubemap_PXR_CubemapHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APXR_Cubemap_PXR_CubemapHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APXR_Cubemap_NoRegister()
	{
		return APXR_Cubemap::StaticClass();
	}
	struct Z_Construct_UClass_APXR_Cubemap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CaptureComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APXR_Cubemap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRHMD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APXR_Cubemap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APXR_Cubemap_PXR_CubemapHandler, "PXR_CubemapHandler" }, // 1181089776
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_Cubemap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PXR_Cubemap.h" },
		{ "ModuleRelativePath", "Public/PXR_Cubemap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APXR_Cubemap_Statics::NewProp_CaptureComponents_Inner = { "CaptureComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_Cubemap_Statics::NewProp_CaptureComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PXR_Cubemap.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APXR_Cubemap_Statics::NewProp_CaptureComponents = { "CaptureComponents", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APXR_Cubemap, CaptureComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APXR_Cubemap_Statics::NewProp_CaptureComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_Cubemap_Statics::NewProp_CaptureComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APXR_Cubemap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_Cubemap_Statics::NewProp_CaptureComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APXR_Cubemap_Statics::NewProp_CaptureComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APXR_Cubemap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APXR_Cubemap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APXR_Cubemap_Statics::ClassParams = {
		&APXR_Cubemap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APXR_Cubemap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APXR_Cubemap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APXR_Cubemap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_Cubemap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APXR_Cubemap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APXR_Cubemap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APXR_Cubemap, 1194901953);
	template<> PICOXRHMD_API UClass* StaticClass<APXR_Cubemap>()
	{
		return APXR_Cubemap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APXR_Cubemap(Z_Construct_UClass_APXR_Cubemap, &APXR_Cubemap::StaticClass, TEXT("/Script/PICOXRHMD"), TEXT("APXR_Cubemap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APXR_Cubemap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
