// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRHMD/Private/PXR_BoundarySystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_BoundarySystem() {}
// Cross Module References
	PICOXRHMD_API UClass* Z_Construct_UClass_UPICOXRBoundarySystem_NoRegister();
	PICOXRHMD_API UClass* Z_Construct_UClass_UPICOXRBoundarySystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PICOXRHMD();
// End Cross Module References
	void UPICOXRBoundarySystem::StaticRegisterNativesUPICOXRBoundarySystem()
	{
	}
	UClass* Z_Construct_UClass_UPICOXRBoundarySystem_NoRegister()
	{
		return UPICOXRBoundarySystem::StaticClass();
	}
	struct Z_Construct_UClass_UPICOXRBoundarySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOXRBoundarySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRHMD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRBoundarySystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PXR_BoundarySystem.h" },
		{ "ModuleRelativePath", "Private/PXR_BoundarySystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOXRBoundarySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOXRBoundarySystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPICOXRBoundarySystem_Statics::ClassParams = {
		&UPICOXRBoundarySystem::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOXRBoundarySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRBoundarySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOXRBoundarySystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPICOXRBoundarySystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPICOXRBoundarySystem, 3696163508);
	template<> PICOXRHMD_API UClass* StaticClass<UPICOXRBoundarySystem>()
	{
		return UPICOXRBoundarySystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPICOXRBoundarySystem(Z_Construct_UClass_UPICOXRBoundarySystem, &UPICOXRBoundarySystem::StaticClass, TEXT("/Script/PICOXRHMD"), TEXT("UPICOXRBoundarySystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOXRBoundarySystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
