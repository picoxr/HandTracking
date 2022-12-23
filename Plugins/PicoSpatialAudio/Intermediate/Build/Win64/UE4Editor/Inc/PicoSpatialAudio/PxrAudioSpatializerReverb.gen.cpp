// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoSpatialAudio/Private/PxrAudioSpatializerReverb.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePxrAudioSpatializerReverb() {}
// Cross Module References
	PICOSPATIALAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings();
	UPackage* Z_Construct_UPackage__Script_PicoSpatialAudio();
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_NoRegister();
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
// End Cross Module References
class UScriptStruct* FPxrAudioSpatializerReverbPluginSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOSPATIALAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings, Z_Construct_UPackage__Script_PicoSpatialAudio(), TEXT("PxrAudioSpatializerReverbPluginSettings"), sizeof(FPxrAudioSpatializerReverbPluginSettings), Get_Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings_Hash());
	}
	return Singleton;
}
template<> PICOSPATIALAUDIO_API UScriptStruct* StaticStruct<FPxrAudioSpatializerReverbPluginSettings>()
{
	return FPxrAudioSpatializerReverbPluginSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings(FPxrAudioSpatializerReverbPluginSettings::StaticStruct, TEXT("/Script/PicoSpatialAudio"), TEXT("PxrAudioSpatializerReverbPluginSettings"), false, nullptr, nullptr);
static struct FScriptStruct_PicoSpatialAudio_StaticRegisterNativesFPxrAudioSpatializerReverbPluginSettings
{
	FScriptStruct_PicoSpatialAudio_StaticRegisterNativesFPxrAudioSpatializerReverbPluginSettings()
	{
		UScriptStruct::DeferCppStructOps<FPxrAudioSpatializerReverbPluginSettings>(FName(TEXT("PxrAudioSpatializerReverbPluginSettings")));
	}
} ScriptStruct_PicoSpatialAudio_StaticRegisterNativesFPxrAudioSpatializerReverbPluginSettings;
	struct Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PxrAudioSpatializerReverb.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPxrAudioSpatializerReverbPluginSettings>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PicoSpatialAudio,
		nullptr,
		&NewStructOps,
		"PxrAudioSpatializerReverbPluginSettings",
		sizeof(FPxrAudioSpatializerReverbPluginSettings),
		alignof(FPxrAudioSpatializerReverbPluginSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PicoSpatialAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PxrAudioSpatializerReverbPluginSettings"), sizeof(FPxrAudioSpatializerReverbPluginSettings), Get_Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings_Hash() { return 1801153080U; }
	DEFINE_FUNCTION(UPxrAudioSpatializerReverbPluginPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FPxrAudioSpatializerReverbPluginSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void UPxrAudioSpatializerReverbPluginPreset::StaticRegisterNativesUPxrAudioSpatializerReverbPluginPreset()
	{
		UClass* Class = UPxrAudioSpatializerReverbPluginPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &UPxrAudioSpatializerReverbPluginPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPxrAudioSpatializerReverbPluginPreset_SetSettings_Statics
	{
		struct PxrAudioSpatializerReverbPluginPreset_eventSetSettings_Parms
		{
			FPxrAudioSpatializerReverbPluginSettings InSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPxrAudioSpatializerReverbPluginPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPxrAudioSpatializerReverbPluginPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PxrAudioSpatializerReverbPluginPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings, METADATA_PARAMS(Z_Construct_UFunction_UPxrAudioSpatializerReverbPluginPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPxrAudioSpatializerReverbPluginPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPxrAudioSpatializerReverbPluginPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPxrAudioSpatializerReverbPluginPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPxrAudioSpatializerReverbPluginPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PxrAudioSpatializerReverb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPxrAudioSpatializerReverbPluginPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(PxrAudioSpatializerReverbPluginPreset_eventSetSettings_Parms), Z_Construct_UFunction_UPxrAudioSpatializerReverbPluginPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPxrAudioSpatializerReverbPluginPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPxrAudioSpatializerReverbPluginPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPxrAudioSpatializerReverbPluginPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPxrAudioSpatializerReverbPluginPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPxrAudioSpatializerReverbPluginPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_NoRegister()
	{
		return UPxrAudioSpatializerReverbPluginPreset::StaticClass();
	}
	struct Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_PicoSpatialAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPxrAudioSpatializerReverbPluginPreset_SetSettings, "SetSettings" }, // 3850361486
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PxrAudioSpatializerReverb.h" },
		{ "ModuleRelativePath", "Private/PxrAudioSpatializerReverb.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Private/PxrAudioSpatializerReverb.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPxrAudioSpatializerReverbPluginPreset, Settings), Z_Construct_UScriptStruct_FPxrAudioSpatializerReverbPluginSettings, METADATA_PARAMS(Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPxrAudioSpatializerReverbPluginPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics::ClassParams = {
		&UPxrAudioSpatializerReverbPluginPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPxrAudioSpatializerReverbPluginPreset, 2910479878);
	template<> PICOSPATIALAUDIO_API UClass* StaticClass<UPxrAudioSpatializerReverbPluginPreset>()
	{
		return UPxrAudioSpatializerReverbPluginPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPxrAudioSpatializerReverbPluginPreset(Z_Construct_UClass_UPxrAudioSpatializerReverbPluginPreset, &UPxrAudioSpatializerReverbPluginPreset::StaticClass, TEXT("/Script/PicoSpatialAudio"), TEXT("UPxrAudioSpatializerReverbPluginPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPxrAudioSpatializerReverbPluginPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
