// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRHMD/Public/PXR_HMDTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_HMDTypes() {}
// Cross Module References
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRFaceTrackingMode();
	UPackage* Z_Construct_UPackage__Script_PICOXRHMD();
	PICOXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FPXRSplashDesc();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static UEnum* EPICOXRFaceTrackingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_EPICOXRFaceTrackingMode, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("EPICOXRFaceTrackingMode"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRFaceTrackingMode>()
	{
		return EPICOXRFaceTrackingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRFaceTrackingMode(EPICOXRFaceTrackingMode_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("EPICOXRFaceTrackingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRFaceTrackingMode_Hash() { return 2757610650U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRFaceTrackingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRFaceTrackingMode"), 0, Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRFaceTrackingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRFaceTrackingMode::Disable", (int64)EPICOXRFaceTrackingMode::Disable },
				{ "EPICOXRFaceTrackingMode::FaceOnly", (int64)EPICOXRFaceTrackingMode::FaceOnly },
				{ "EPICOXRFaceTrackingMode::LipsOnly", (int64)EPICOXRFaceTrackingMode::LipsOnly },
				{ "EPICOXRFaceTrackingMode::FaceAndLips", (int64)EPICOXRFaceTrackingMode::FaceAndLips },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Disable.Name", "EPICOXRFaceTrackingMode::Disable" },
				{ "FaceAndLips.Name", "EPICOXRFaceTrackingMode::FaceAndLips" },
				{ "FaceOnly.Name", "EPICOXRFaceTrackingMode::FaceOnly" },
				{ "LipsOnly.Name", "EPICOXRFaceTrackingMode::LipsOnly" },
				{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"EPICOXRFaceTrackingMode",
				"EPICOXRFaceTrackingMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPXRSplashDesc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRHMD_API uint32 Get_Z_Construct_UScriptStruct_FPXRSplashDesc_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXRSplashDesc, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("PXRSplashDesc"), sizeof(FPXRSplashDesc), Get_Z_Construct_UScriptStruct_FPXRSplashDesc_Hash());
	}
	return Singleton;
}
template<> PICOXRHMD_API UScriptStruct* StaticStruct<FPXRSplashDesc>()
{
	return FPXRSplashDesc::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPXRSplashDesc(FPXRSplashDesc::StaticStruct, TEXT("/Script/PICOXRHMD"), TEXT("PXRSplashDesc"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRHMD_StaticRegisterNativesFPXRSplashDesc
{
	FScriptStruct_PICOXRHMD_StaticRegisterNativesFPXRSplashDesc()
	{
		UScriptStruct::DeferCppStructOps<FPXRSplashDesc>(FName(TEXT("PXRSplashDesc")));
	}
} ScriptStruct_PICOXRHMD_StaticRegisterNativesFPXRSplashDesc;
	struct Z_Construct_UScriptStruct_FPXRSplashDesc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplashTexturePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplashTexturePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplashTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplashTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplashQuadSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplashQuadSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplashTextureOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplashTextureOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplashTextureScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplashTextureScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoAlpha_MetaData[];
#endif
		static void NewProp_bNoAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXRSplashDesc>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTexturePath_MetaData[] = {
		{ "AllowedClasses", "Texture" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
		{ "ToolTip", "Splash texture to show" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTexturePath = { "SplashTexturePath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXRSplashDesc, SplashTexturePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTexturePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTexturePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTransform_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
		{ "ToolTip", "The center transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTransform = { "SplashTransform", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXRSplashDesc, SplashTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashQuadSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
		{ "ToolTip", "The splash layer quad size" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashQuadSize = { "SplashQuadSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXRSplashDesc, SplashQuadSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashQuadSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashQuadSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
		{ "ToolTip", "Splash texture offset relative to the upper left corner" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureOffset = { "SplashTextureOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXRSplashDesc, SplashTextureOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
		{ "ToolTip", "Splash texture scale (default=1.0f)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureScale = { "SplashTextureScale", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXRSplashDesc, SplashTextureScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_bNoAlpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PXR_HMDTypes.h" },
		{ "ToolTip", "Ignore the splash texture alpha channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_bNoAlpha_SetBit(void* Obj)
	{
		((FPXRSplashDesc*)Obj)->bNoAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_bNoAlpha = { "bNoAlpha", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPXRSplashDesc), &Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_bNoAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_bNoAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_bNoAlpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTexturePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashQuadSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_SplashTextureScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::NewProp_bNoAlpha,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRHMD,
		nullptr,
		&NewStructOps,
		"PXRSplashDesc",
		sizeof(FPXRSplashDesc),
		alignof(FPXRSplashDesc),
		Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXRSplashDesc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPXRSplashDesc_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PXRSplashDesc"), sizeof(FPXRSplashDesc), Get_Z_Construct_UScriptStruct_FPXRSplashDesc_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPXRSplashDesc_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPXRSplashDesc_Hash() { return 2619457430U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
