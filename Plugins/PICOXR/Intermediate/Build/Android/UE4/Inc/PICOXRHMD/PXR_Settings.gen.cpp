// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRHMD/Private/PXR_Settings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_Settings() {}
// Cross Module References
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRHandTrackingSupport();
	UPackage* Z_Construct_UPackage__Script_PICOXRHMD();
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_ERefreshRate();
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EFoveationLevel();
	PICOXRHMD_API UClass* Z_Construct_UClass_UPICOXRSettings_NoRegister();
	PICOXRHMD_API UClass* Z_Construct_UClass_UPICOXRSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PICOXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FPXRSplashDesc();
// End Cross Module References
	static UEnum* EPICOXRHandTrackingSupport_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_EPICOXRHandTrackingSupport, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("EPICOXRHandTrackingSupport"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRHandTrackingSupport>()
	{
		return EPICOXRHandTrackingSupport_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRHandTrackingSupport(EPICOXRHandTrackingSupport_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("EPICOXRHandTrackingSupport"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRHandTrackingSupport_Hash() { return 1976407012U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRHandTrackingSupport()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRHandTrackingSupport"), 0, Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRHandTrackingSupport_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRHandTrackingSupport::ControllersOnly", (int64)EPICOXRHandTrackingSupport::ControllersOnly },
				{ "EPICOXRHandTrackingSupport::ControllersAndHands", (int64)EPICOXRHandTrackingSupport::ControllersAndHands },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ControllersAndHands.Name", "EPICOXRHandTrackingSupport::ControllersAndHands" },
				{ "ControllersOnly.Name", "EPICOXRHandTrackingSupport::ControllersOnly" },
				{ "ModuleRelativePath", "Private/PXR_Settings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"EPICOXRHandTrackingSupport",
				"EPICOXRHandTrackingSupport",
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
	static UEnum* ERefreshRate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_ERefreshRate, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("ERefreshRate"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<ERefreshRate::Type>()
	{
		return ERefreshRate_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERefreshRate(ERefreshRate_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("ERefreshRate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_ERefreshRate_Hash() { return 3964005304U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_ERefreshRate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERefreshRate"), 0, Get_Z_Construct_UEnum_PICOXRHMD_ERefreshRate_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERefreshRate::Default", (int64)ERefreshRate::Default },
				{ "ERefreshRate::RefreshRate72", (int64)ERefreshRate::RefreshRate72 },
				{ "ERefreshRate::RefreshRate90", (int64)ERefreshRate::RefreshRate90 },
				{ "ERefreshRate::RefreshRate120", (int64)ERefreshRate::RefreshRate120 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Default.Name", "ERefreshRate::Default" },
				{ "ModuleRelativePath", "Private/PXR_Settings.h" },
				{ "RefreshRate120.Name", "ERefreshRate::RefreshRate120" },
				{ "RefreshRate72.Name", "ERefreshRate::RefreshRate72" },
				{ "RefreshRate90.Name", "ERefreshRate::RefreshRate90" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"ERefreshRate",
				"ERefreshRate::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFoveationLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_EFoveationLevel, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("EFoveationLevel"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<EFoveationLevel::Type>()
	{
		return EFoveationLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFoveationLevel(EFoveationLevel_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("EFoveationLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_EFoveationLevel_Hash() { return 286547611U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_EFoveationLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFoveationLevel"), 0, Get_Z_Construct_UEnum_PICOXRHMD_EFoveationLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFoveationLevel::Low", (int64)EFoveationLevel::Low },
				{ "EFoveationLevel::Med", (int64)EFoveationLevel::Med },
				{ "EFoveationLevel::High", (int64)EFoveationLevel::High },
				{ "EFoveationLevel::TopHigh", (int64)EFoveationLevel::TopHigh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "High.Name", "EFoveationLevel::High" },
				{ "Low.Name", "EFoveationLevel::Low" },
				{ "Med.Name", "EFoveationLevel::Med" },
				{ "ModuleRelativePath", "Private/PXR_Settings.h" },
				{ "TopHigh.Name", "EFoveationLevel::TopHigh" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"EFoveationLevel",
				"EFoveationLevel::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UPICOXRSettings::StaticRegisterNativesUPICOXRSettings()
	{
	}
	UClass* Z_Construct_UClass_UPICOXRSettings_NoRegister()
	{
		return UPICOXRSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPICOXRSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePSensor_MetaData[];
#endif
		static void NewProp_bEnablePSensor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePSensor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHMD3Dof_MetaData[];
#endif
		static void NewProp_bIsHMD3Dof_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHMD3Dof;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableNeckModel_MetaData[];
#endif
		static void NewProp_bEnableNeckModel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableNeckModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomNeckParameter_MetaData[];
#endif
		static void NewProp_bUseCustomNeckParameter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomNeckParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeckOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeckOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHomeKey_MetaData[];
#endif
		static void NewProp_bEnableHomeKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHomeKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsController3Dof_MetaData[];
#endif
		static void NewProp_bIsController3Dof_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsController3Dof;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandTrackingSupport_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandTrackingSupport_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandTrackingSupport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLateLatching_MetaData[];
#endif
		static void NewProp_bEnableLateLatching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLateLatching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHWsRGBEncoding_MetaData[];
#endif
		static void NewProp_bUseHWsRGBEncoding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHWsRGBEncoding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRecommendedMSAA_MetaData[];
#endif
		static void NewProp_bUseRecommendedMSAA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRecommendedMSAA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFoveation_MetaData[];
#endif
		static void NewProp_bEnableFoveation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFoveation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoveationLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FoveationLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableEyeTracking_MetaData[];
#endif
		static void NewProp_bEnableEyeTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableEyeTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAdvanceInterface_MetaData[];
#endif
		static void NewProp_bUseAdvanceInterface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAdvanceInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseContentProtect_MetaData[];
#endif
		static void NewProp_bUseContentProtect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseContentProtect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSplashScreenAutoShow_MetaData[];
#endif
		static void NewProp_bSplashScreenAutoShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSplashScreenAutoShow;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplashDescs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplashDescs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplashDescs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_refreshRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_refreshRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOXRSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRHMD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PXR_Settings.h" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnablePSensor_MetaData[] = {
		{ "Category", "HMD" },
		{ "DisplayName", "Enable PSensor?" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
		{ "ToolTip", "If you want to get PSensor state,Please enable it!" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnablePSensor_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnablePSensor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnablePSensor = { "bEnablePSensor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnablePSensor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnablePSensor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnablePSensor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsHMD3Dof_MetaData[] = {
		{ "Category", "HMD" },
		{ "DisplayName", "HMD Only Tracking Rotation" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsHMD3Dof_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bIsHMD3Dof = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsHMD3Dof = { "bIsHMD3Dof", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsHMD3Dof_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsHMD3Dof_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsHMD3Dof_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableNeckModel_MetaData[] = {
		{ "Category", "HMD" },
		{ "DisplayName", "Enable Neck Model" },
		{ "EditCondition", "bIsHMD3Dof" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableNeckModel_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnableNeckModel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableNeckModel = { "bEnableNeckModel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableNeckModel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableNeckModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableNeckModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseCustomNeckParameter_MetaData[] = {
		{ "Category", "HMD" },
		{ "DisplayName", "Use Custom NeckParameter" },
		{ "EditCondition", "bEnableNeckModel" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseCustomNeckParameter_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bUseCustomNeckParameter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseCustomNeckParameter = { "bUseCustomNeckParameter", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseCustomNeckParameter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseCustomNeckParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseCustomNeckParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_NeckOffset_MetaData[] = {
		{ "Category", "HMD" },
		{ "DisplayName", "NeckOffset" },
		{ "EditCondition", "bUseCustomNeckParameter" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_NeckOffset = { "NeckOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRSettings, NeckOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_NeckOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_NeckOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableHomeKey_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "//Controller\n" },
		{ "DisplayName", "Receive HomeKey Event" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
		{ "ToolTip", "Controller" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableHomeKey_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnableHomeKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableHomeKey = { "bEnableHomeKey", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableHomeKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableHomeKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableHomeKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsController3Dof_MetaData[] = {
		{ "Category", "Controller" },
		{ "DisplayName", "Controller Only Tracking Rotation" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsController3Dof_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bIsController3Dof = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsController3Dof = { "bIsController3Dof", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsController3Dof_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsController3Dof_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsController3Dof_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_HandTrackingSupport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_HandTrackingSupport_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "/** Whether controllers and/or hands can be used with the app */" },
		{ "DisplayName", "HandTracking Support" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
		{ "ToolTip", "Whether controllers and/or hands can be used with the app" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_HandTrackingSupport = { "HandTrackingSupport", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRSettings, HandTrackingSupport), Z_Construct_UEnum_PICOXRHMD_EPICOXRHandTrackingSupport, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_HandTrackingSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_HandTrackingSupport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableLateLatching_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Enable LateLatching" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
		{ "ToolTip", "Only support UE4.27 + Vulkan + Multi-View + Disable Occlusion Culling." },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableLateLatching_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnableLateLatching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableLateLatching = { "bEnableLateLatching", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableLateLatching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableLateLatching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableLateLatching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseHWsRGBEncoding_MetaData[] = {
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseHWsRGBEncoding_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bUseHWsRGBEncoding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseHWsRGBEncoding = { "bUseHWsRGBEncoding", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseHWsRGBEncoding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseHWsRGBEncoding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseHWsRGBEncoding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseRecommendedMSAA_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Use Recommended MSAA Level" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseRecommendedMSAA_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bUseRecommendedMSAA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseRecommendedMSAA = { "bUseRecommendedMSAA", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseRecommendedMSAA_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseRecommendedMSAA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseRecommendedMSAA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableFoveation_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Enable Foveation Rendering" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableFoveation_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnableFoveation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableFoveation = { "bEnableFoveation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableFoveation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableFoveation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableFoveation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationLevel_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Foveation Level" },
		{ "EditCondition", "bEnableFoveation" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationLevel = { "FoveationLevel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRSettings, FoveationLevel), Z_Construct_UEnum_PICOXRHMD_EFoveationLevel, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTracking_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Enable Eye Tracking" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
		{ "ToolTip", "Enable Eye Tracking" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTracking_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnableEyeTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTracking = { "bEnableEyeTracking", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseAdvanceInterface_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Use PICO Advance Interface" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseAdvanceInterface_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bUseAdvanceInterface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseAdvanceInterface = { "bUseAdvanceInterface", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseAdvanceInterface_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseAdvanceInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseAdvanceInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseContentProtect_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Use Content Protect" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseContentProtect_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bUseContentProtect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseContentProtect = { "bUseContentProtect", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseContentProtect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseContentProtect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseContentProtect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bSplashScreenAutoShow_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Auto Show Splash Screen" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bSplashScreenAutoShow_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bSplashScreenAutoShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bSplashScreenAutoShow = { "bSplashScreenAutoShow", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bSplashScreenAutoShow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bSplashScreenAutoShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bSplashScreenAutoShow_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_SplashDescs_Inner = { "SplashDescs", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPXRSplashDesc, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_SplashDescs_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "SplashDescs" },
		{ "EditCondition", "bSplashScreenAutoShow" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_SplashDescs = { "SplashDescs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRSettings, SplashDescs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_SplashDescs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_SplashDescs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_refreshRate_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Display Refresh Rates" },
		{ "ModuleRelativePath", "Private/PXR_Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_refreshRate = { "refreshRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRSettings, refreshRate), Z_Construct_UEnum_PICOXRHMD_ERefreshRate, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_refreshRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_refreshRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPICOXRSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnablePSensor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsHMD3Dof,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableNeckModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseCustomNeckParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_NeckOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableHomeKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsController3Dof,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_HandTrackingSupport_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_HandTrackingSupport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableLateLatching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseHWsRGBEncoding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseRecommendedMSAA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableFoveation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseAdvanceInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseContentProtect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bSplashScreenAutoShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_SplashDescs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_SplashDescs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_refreshRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOXRSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOXRSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPICOXRSettings_Statics::ClassParams = {
		&UPICOXRSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPICOXRSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOXRSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPICOXRSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPICOXRSettings, 3702013309);
	template<> PICOXRHMD_API UClass* StaticClass<UPICOXRSettings>()
	{
		return UPICOXRSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPICOXRSettings(Z_Construct_UClass_UPICOXRSettings, &UPICOXRSettings::StaticClass, TEXT("/Script/PICOXRHMD"), TEXT("UPICOXRSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOXRSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
