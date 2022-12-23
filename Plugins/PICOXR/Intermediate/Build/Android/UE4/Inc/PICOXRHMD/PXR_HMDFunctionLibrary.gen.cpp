// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRHMD/Public/PXR_HMDFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_HMDFunctionLibrary() {}
// Cross Module References
	PICOXRHMD_API UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PICOXRIPDChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PICOXRHMD();
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRDeviceAbilities();
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRFoveationLevel();
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRCameraType();
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRNodeType();
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRTrackedDeviceType();
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRBoundaryState();
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRBoundaryType();
	PICOXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FPICOXREyeTrackingData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PICOXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FPxrSensorState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	PICOXRHMD_API UClass* Z_Construct_UClass_UPICOXRHMDFunctionLibrary_NoRegister();
	PICOXRHMD_API UClass* Z_Construct_UClass_UPICOXRHMDFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PICOXRHMD_API UClass* Z_Construct_UClass_UPICOXREventManager_NoRegister();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PICOXRHMD_PICOXRIPDChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_PICOXRHMD_eventPICOXRIPDChangedDelegate_Parms
		{
			float Ipd;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ipd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_PICOXRHMD_PICOXRIPDChangedDelegate__DelegateSignature_Statics::NewProp_Ipd = { "Ipd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PICOXRHMD_eventPICOXRIPDChangedDelegate_Parms, Ipd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PICOXRHMD_PICOXRIPDChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PICOXRHMD_PICOXRIPDChangedDelegate__DelegateSignature_Statics::NewProp_Ipd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PICOXRHMD_PICOXRIPDChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PICOXRHMD_PICOXRIPDChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD, nullptr, "PICOXRIPDChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_PICOXRHMD_eventPICOXRIPDChangedDelegate_Parms), Z_Construct_UDelegateFunction_PICOXRHMD_PICOXRIPDChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PICOXRIPDChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PICOXRHMD_PICOXRIPDChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PICOXRHMD_PICOXRIPDChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PICOXRHMD_PICOXRIPDChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PICOXRHMD_PICOXRIPDChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EPICOXRDeviceAbilities_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_EPICOXRDeviceAbilities, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("EPICOXRDeviceAbilities"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRDeviceAbilities>()
	{
		return EPICOXRDeviceAbilities_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRDeviceAbilities(EPICOXRDeviceAbilities_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("EPICOXRDeviceAbilities"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRDeviceAbilities_Hash() { return 1913789414U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRDeviceAbilities()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRDeviceAbilities"), 0, Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRDeviceAbilities_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRDeviceAbilities::TRACKING_MODE_ROTATION_BIT", (int64)EPICOXRDeviceAbilities::TRACKING_MODE_ROTATION_BIT },
				{ "EPICOXRDeviceAbilities::TRACKING_MODE_POSITION_BIT", (int64)EPICOXRDeviceAbilities::TRACKING_MODE_POSITION_BIT },
				{ "EPICOXRDeviceAbilities::TRACKING_MODE_EYE_BIT", (int64)EPICOXRDeviceAbilities::TRACKING_MODE_EYE_BIT },
				{ "EPICOXRDeviceAbilities::TRACKING_MODE_FACE_BIT", (int64)EPICOXRDeviceAbilities::TRACKING_MODE_FACE_BIT },
				{ "EPICOXRDeviceAbilities::TRACKING_MODE_VCMOTOR_BIT", (int64)EPICOXRDeviceAbilities::TRACKING_MODE_VCMOTOR_BIT },
				{ "EPICOXRDeviceAbilities::TRACKING_MODE_HAND_BIT", (int64)EPICOXRDeviceAbilities::TRACKING_MODE_HAND_BIT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
				{ "TRACKING_MODE_EYE_BIT.DisplayName", "SupportEyeTracking" },
				{ "TRACKING_MODE_EYE_BIT.Name", "EPICOXRDeviceAbilities::TRACKING_MODE_EYE_BIT" },
				{ "TRACKING_MODE_FACE_BIT.DisplayName", "SupportFaceTracking" },
				{ "TRACKING_MODE_FACE_BIT.Name", "EPICOXRDeviceAbilities::TRACKING_MODE_FACE_BIT" },
				{ "TRACKING_MODE_HAND_BIT.DisplayName", "SupportHandTracking" },
				{ "TRACKING_MODE_HAND_BIT.Name", "EPICOXRDeviceAbilities::TRACKING_MODE_HAND_BIT" },
				{ "TRACKING_MODE_POSITION_BIT.DisplayName", "SupportPositionTracking" },
				{ "TRACKING_MODE_POSITION_BIT.Name", "EPICOXRDeviceAbilities::TRACKING_MODE_POSITION_BIT" },
				{ "TRACKING_MODE_ROTATION_BIT.DisplayName", "SupportRotationTracking" },
				{ "TRACKING_MODE_ROTATION_BIT.Name", "EPICOXRDeviceAbilities::TRACKING_MODE_ROTATION_BIT" },
				{ "TRACKING_MODE_VCMOTOR_BIT.DisplayName", "SupportBroadBandMotor" },
				{ "TRACKING_MODE_VCMOTOR_BIT.Name", "EPICOXRDeviceAbilities::TRACKING_MODE_VCMOTOR_BIT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"EPICOXRDeviceAbilities",
				"EPICOXRDeviceAbilities",
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
	static UEnum* EPICOXRFoveationLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_EPICOXRFoveationLevel, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("EPICOXRFoveationLevel"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRFoveationLevel>()
	{
		return EPICOXRFoveationLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRFoveationLevel(EPICOXRFoveationLevel_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("EPICOXRFoveationLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRFoveationLevel_Hash() { return 4191196745U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRFoveationLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRFoveationLevel"), 0, Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRFoveationLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRFoveationLevel::Low", (int64)EPICOXRFoveationLevel::Low },
				{ "EPICOXRFoveationLevel::Medium", (int64)EPICOXRFoveationLevel::Medium },
				{ "EPICOXRFoveationLevel::High", (int64)EPICOXRFoveationLevel::High },
				{ "EPICOXRFoveationLevel::TopHigh", (int64)EPICOXRFoveationLevel::TopHigh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "High.Name", "EPICOXRFoveationLevel::High" },
				{ "Low.Name", "EPICOXRFoveationLevel::Low" },
				{ "Medium.Name", "EPICOXRFoveationLevel::Medium" },
				{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
				{ "TopHigh.Name", "EPICOXRFoveationLevel::TopHigh" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"EPICOXRFoveationLevel",
				"EPICOXRFoveationLevel",
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
	static UEnum* EPICOXRCameraType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_EPICOXRCameraType, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("EPICOXRCameraType"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRCameraType>()
	{
		return EPICOXRCameraType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRCameraType(EPICOXRCameraType_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("EPICOXRCameraType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRCameraType_Hash() { return 1600801817U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRCameraType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRCameraType"), 0, Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRCameraType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRCameraType::Left", (int64)EPICOXRCameraType::Left },
				{ "EPICOXRCameraType::Right", (int64)EPICOXRCameraType::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Left.DisplayName", "Left Camera" },
				{ "Left.Name", "EPICOXRCameraType::Left" },
				{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
				{ "Right.DisplayName", "Right Camera" },
				{ "Right.Name", "EPICOXRCameraType::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"EPICOXRCameraType",
				"EPICOXRCameraType",
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
	static UEnum* EPICOXRNodeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_EPICOXRNodeType, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("EPICOXRNodeType"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRNodeType>()
	{
		return EPICOXRNodeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRNodeType(EPICOXRNodeType_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("EPICOXRNodeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRNodeType_Hash() { return 1878532993U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRNodeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRNodeType"), 0, Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRNodeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRNodeType::LeftHand", (int64)EPICOXRNodeType::LeftHand },
				{ "EPICOXRNodeType::RightHand", (int64)EPICOXRNodeType::RightHand },
				{ "EPICOXRNodeType::Head", (int64)EPICOXRNodeType::Head },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Head.Name", "EPICOXRNodeType::Head" },
				{ "LeftHand.Name", "EPICOXRNodeType::LeftHand" },
				{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
				{ "RightHand.Name", "EPICOXRNodeType::RightHand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"EPICOXRNodeType",
				"EPICOXRNodeType",
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
	static UEnum* EPICOXRTrackedDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_EPICOXRTrackedDeviceType, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("EPICOXRTrackedDeviceType"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRTrackedDeviceType>()
	{
		return EPICOXRTrackedDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRTrackedDeviceType(EPICOXRTrackedDeviceType_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("EPICOXRTrackedDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRTrackedDeviceType_Hash() { return 1490382509U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRTrackedDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRTrackedDeviceType"), 0, Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRTrackedDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRTrackedDeviceType::None", (int64)EPICOXRTrackedDeviceType::None },
				{ "EPICOXRTrackedDeviceType::HMD", (int64)EPICOXRTrackedDeviceType::HMD },
				{ "EPICOXRTrackedDeviceType::LTouch", (int64)EPICOXRTrackedDeviceType::LTouch },
				{ "EPICOXRTrackedDeviceType::RTouch", (int64)EPICOXRTrackedDeviceType::RTouch },
				{ "EPICOXRTrackedDeviceType::Touch", (int64)EPICOXRTrackedDeviceType::Touch },
				{ "EPICOXRTrackedDeviceType::All", (int64)EPICOXRTrackedDeviceType::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.DisplayName", "All Devices" },
				{ "All.Name", "EPICOXRTrackedDeviceType::All" },
				{ "BlueprintType", "true" },
				{ "HMD.DisplayName", "HMD" },
				{ "HMD.Name", "EPICOXRTrackedDeviceType::HMD" },
				{ "LTouch.DisplayName", "Left Hand" },
				{ "LTouch.Name", "EPICOXRTrackedDeviceType::LTouch" },
				{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
				{ "None.DisplayName", "No Devices" },
				{ "None.Name", "EPICOXRTrackedDeviceType::None" },
				{ "RTouch.DisplayName", "Right Hand" },
				{ "RTouch.Name", "EPICOXRTrackedDeviceType::RTouch" },
				{ "Touch.DisplayName", "All Hands" },
				{ "Touch.Name", "EPICOXRTrackedDeviceType::Touch" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"EPICOXRTrackedDeviceType",
				"EPICOXRTrackedDeviceType",
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
	static UEnum* EPICOXRBoundaryState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_EPICOXRBoundaryState, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("EPICOXRBoundaryState"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRBoundaryState>()
	{
		return EPICOXRBoundaryState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRBoundaryState(EPICOXRBoundaryState_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("EPICOXRBoundaryState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRBoundaryState_Hash() { return 3543748587U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRBoundaryState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRBoundaryState"), 0, Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRBoundaryState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRBoundaryState::GobackDialog", (int64)EPICOXRBoundaryState::GobackDialog },
				{ "EPICOXRBoundaryState::ToofarDialog", (int64)EPICOXRBoundaryState::ToofarDialog },
				{ "EPICOXRBoundaryState::LostDialog", (int64)EPICOXRBoundaryState::LostDialog },
				{ "EPICOXRBoundaryState::LostNoReason", (int64)EPICOXRBoundaryState::LostNoReason },
				{ "EPICOXRBoundaryState::LostCamera", (int64)EPICOXRBoundaryState::LostCamera },
				{ "EPICOXRBoundaryState::LostHighLight", (int64)EPICOXRBoundaryState::LostHighLight },
				{ "EPICOXRBoundaryState::LostLowLight", (int64)EPICOXRBoundaryState::LostLowLight },
				{ "EPICOXRBoundaryState::LostLowFeatureCount", (int64)EPICOXRBoundaryState::LostLowFeatureCount },
				{ "EPICOXRBoundaryState::LostReLocation", (int64)EPICOXRBoundaryState::LostReLocation },
				{ "EPICOXRBoundaryState::LostInitialization", (int64)EPICOXRBoundaryState::LostInitialization },
				{ "EPICOXRBoundaryState::LostNoCamera", (int64)EPICOXRBoundaryState::LostNoCamera },
				{ "EPICOXRBoundaryState::LostNoIMU", (int64)EPICOXRBoundaryState::LostNoIMU },
				{ "EPICOXRBoundaryState::LostIMUJitter", (int64)EPICOXRBoundaryState::LostIMUJitter },
				{ "EPICOXRBoundaryState::LostUnknown", (int64)EPICOXRBoundaryState::LostUnknown },
				{ "EPICOXRBoundaryState::NothingDialog", (int64)EPICOXRBoundaryState::NothingDialog },
				{ "EPICOXRBoundaryState::LostNoDialog", (int64)EPICOXRBoundaryState::LostNoDialog },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GobackDialog.Name", "EPICOXRBoundaryState::GobackDialog" },
				{ "LostCamera.Name", "EPICOXRBoundaryState::LostCamera" },
				{ "LostDialog.Name", "EPICOXRBoundaryState::LostDialog" },
				{ "LostHighLight.Name", "EPICOXRBoundaryState::LostHighLight" },
				{ "LostIMUJitter.Name", "EPICOXRBoundaryState::LostIMUJitter" },
				{ "LostInitialization.Name", "EPICOXRBoundaryState::LostInitialization" },
				{ "LostLowFeatureCount.Name", "EPICOXRBoundaryState::LostLowFeatureCount" },
				{ "LostLowLight.Name", "EPICOXRBoundaryState::LostLowLight" },
				{ "LostNoCamera.Name", "EPICOXRBoundaryState::LostNoCamera" },
				{ "LostNoDialog.Name", "EPICOXRBoundaryState::LostNoDialog" },
				{ "LostNoIMU.Name", "EPICOXRBoundaryState::LostNoIMU" },
				{ "LostNoReason.Name", "EPICOXRBoundaryState::LostNoReason" },
				{ "LostReLocation.Name", "EPICOXRBoundaryState::LostReLocation" },
				{ "LostUnknown.Name", "EPICOXRBoundaryState::LostUnknown" },
				{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
				{ "NothingDialog.Name", "EPICOXRBoundaryState::NothingDialog" },
				{ "ToofarDialog.Name", "EPICOXRBoundaryState::ToofarDialog" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"EPICOXRBoundaryState",
				"EPICOXRBoundaryState",
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
	static UEnum* EPICOXRBoundaryType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_EPICOXRBoundaryType, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("EPICOXRBoundaryType"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRBoundaryType>()
	{
		return EPICOXRBoundaryType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRBoundaryType(EPICOXRBoundaryType_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("EPICOXRBoundaryType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRBoundaryType_Hash() { return 742162155U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRBoundaryType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRBoundaryType"), 0, Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRBoundaryType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRBoundaryType::Outer", (int64)EPICOXRBoundaryType::Outer },
				{ "EPICOXRBoundaryType::PlayArea", (int64)EPICOXRBoundaryType::PlayArea },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/* Boundary boundary types*/" },
				{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
				{ "Outer.DisplayName", "The Outer Boundary" },
				{ "Outer.Name", "EPICOXRBoundaryType::Outer" },
				{ "PlayArea.DisplayName", "The Play Area Boundary" },
				{ "PlayArea.Name", "EPICOXRBoundaryType::PlayArea" },
				{ "ToolTip", "Boundary boundary types" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"EPICOXRBoundaryType",
				"EPICOXRBoundaryType",
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
class UScriptStruct* FPICOXREyeTrackingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRHMD_API uint32 Get_Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPICOXREyeTrackingData, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("PICOXREyeTrackingData"), sizeof(FPICOXREyeTrackingData), Get_Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Hash());
	}
	return Singleton;
}
template<> PICOXRHMD_API UScriptStruct* StaticStruct<FPICOXREyeTrackingData>()
{
	return FPICOXREyeTrackingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPICOXREyeTrackingData(FPICOXREyeTrackingData::StaticStruct, TEXT("/Script/PICOXRHMD"), TEXT("PICOXREyeTrackingData"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRHMD_StaticRegisterNativesFPICOXREyeTrackingData
{
	FScriptStruct_PICOXRHMD_StaticRegisterNativesFPICOXREyeTrackingData()
	{
		UScriptStruct::DeferCppStructOps<FPICOXREyeTrackingData>(FName(TEXT("PICOXREyeTrackingData")));
	}
} ScriptStruct_PICOXRHMD_StaticRegisterNativesFPICOXREyeTrackingData;
	struct Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEyePoseStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LeftEyePoseStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightEyePoseStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RightEyePoseStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedEyePoseStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CombinedEyePoseStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedEyeGazePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CombinedEyeGazePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedEyeGazeVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CombinedEyeGazeVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEyeOpenness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftEyeOpenness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightEyeOpenness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightEyeOpenness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEyePositionGuide_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftEyePositionGuide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightEyePositionGuide_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightEyePositionGuide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoveatedGazeDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoveatedGazeDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoveatedGazeTrackingState_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FoveatedGazeTrackingState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "PICOXREyeTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPICOXREyeTrackingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_LeftEyePoseStatus_MetaData[] = {
		{ "Category", "PICOXREyeTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_LeftEyePoseStatus = { "LeftEyePoseStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOXREyeTrackingData, LeftEyePoseStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_LeftEyePoseStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_LeftEyePoseStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_RightEyePoseStatus_MetaData[] = {
		{ "Category", "PICOXREyeTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_RightEyePoseStatus = { "RightEyePoseStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOXREyeTrackingData, RightEyePoseStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_RightEyePoseStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_RightEyePoseStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_CombinedEyePoseStatus_MetaData[] = {
		{ "Category", "PICOXREyeTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_CombinedEyePoseStatus = { "CombinedEyePoseStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOXREyeTrackingData, CombinedEyePoseStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_CombinedEyePoseStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_CombinedEyePoseStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_CombinedEyeGazePoint_MetaData[] = {
		{ "Category", "PICOXREyeTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_CombinedEyeGazePoint = { "CombinedEyeGazePoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOXREyeTrackingData, CombinedEyeGazePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_CombinedEyeGazePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_CombinedEyeGazePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_CombinedEyeGazeVector_MetaData[] = {
		{ "Category", "PICOXREyeTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_CombinedEyeGazeVector = { "CombinedEyeGazeVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOXREyeTrackingData, CombinedEyeGazeVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_CombinedEyeGazeVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_CombinedEyeGazeVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_LeftEyeOpenness_MetaData[] = {
		{ "Category", "PICOXREyeTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_LeftEyeOpenness = { "LeftEyeOpenness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOXREyeTrackingData, LeftEyeOpenness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_LeftEyeOpenness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_LeftEyeOpenness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_RightEyeOpenness_MetaData[] = {
		{ "Category", "PICOXREyeTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_RightEyeOpenness = { "RightEyeOpenness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOXREyeTrackingData, RightEyeOpenness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_RightEyeOpenness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_RightEyeOpenness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_LeftEyePositionGuide_MetaData[] = {
		{ "Category", "PICOXREyeTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_LeftEyePositionGuide = { "LeftEyePositionGuide", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOXREyeTrackingData, LeftEyePositionGuide), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_LeftEyePositionGuide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_LeftEyePositionGuide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_RightEyePositionGuide_MetaData[] = {
		{ "Category", "PICOXREyeTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_RightEyePositionGuide = { "RightEyePositionGuide", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOXREyeTrackingData, RightEyePositionGuide), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_RightEyePositionGuide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_RightEyePositionGuide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_FoveatedGazeDirection_MetaData[] = {
		{ "Category", "PICOXREyeTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_FoveatedGazeDirection = { "FoveatedGazeDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOXREyeTrackingData, FoveatedGazeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_FoveatedGazeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_FoveatedGazeDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_FoveatedGazeTrackingState_MetaData[] = {
		{ "Category", "PICOXREyeTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_FoveatedGazeTrackingState = { "FoveatedGazeTrackingState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOXREyeTrackingData, FoveatedGazeTrackingState), METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_FoveatedGazeTrackingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_FoveatedGazeTrackingState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_LeftEyePoseStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_RightEyePoseStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_CombinedEyePoseStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_CombinedEyeGazePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_CombinedEyeGazeVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_LeftEyeOpenness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_RightEyeOpenness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_LeftEyePositionGuide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_RightEyePositionGuide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_FoveatedGazeDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::NewProp_FoveatedGazeTrackingState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRHMD,
		nullptr,
		&NewStructOps,
		"PICOXREyeTrackingData",
		sizeof(FPICOXREyeTrackingData),
		alignof(FPICOXREyeTrackingData),
		Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPICOXREyeTrackingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PICOXREyeTrackingData"), sizeof(FPICOXREyeTrackingData), Get_Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Hash() { return 1231442476U; }
class UScriptStruct* FPxrSensorState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRHMD_API uint32 Get_Z_Construct_UScriptStruct_FPxrSensorState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPxrSensorState, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("PxrSensorState"), sizeof(FPxrSensorState), Get_Z_Construct_UScriptStruct_FPxrSensorState_Hash());
	}
	return Singleton;
}
template<> PICOXRHMD_API UScriptStruct* StaticStruct<FPxrSensorState>()
{
	return FPxrSensorState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPxrSensorState(FPxrSensorState::StaticStruct, TEXT("/Script/PICOXRHMD"), TEXT("PxrSensorState"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRHMD_StaticRegisterNativesFPxrSensorState
{
	FScriptStruct_PICOXRHMD_StaticRegisterNativesFPxrSensorState()
	{
		UScriptStruct::DeferCppStructOps<FPxrSensorState>(FName(TEXT("PxrSensorState")));
	}
} ScriptStruct_PICOXRHMD_StaticRegisterNativesFPxrSensorState;
	struct Z_Construct_UScriptStruct_FPxrSensorState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_poseQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_poseQuat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_poseVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_poseVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_globalPoseQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_globalPoseQuat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_globalPoseVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_globalPoseVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_angularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_angularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_linearVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_linearVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_angularAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_angularAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_linearAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_linearAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_poseTimeStampNs_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_poseTimeStampNs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrSensorState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPxrSensorState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_status_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrSensorState, status), METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_poseQuat_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_poseQuat = { "poseQuat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrSensorState, poseQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_poseQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_poseQuat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_poseVector_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_poseVector = { "poseVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrSensorState, poseVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_poseVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_poseVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_globalPoseQuat_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_globalPoseQuat = { "globalPoseQuat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrSensorState, globalPoseQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_globalPoseQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_globalPoseQuat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_globalPoseVector_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_globalPoseVector = { "globalPoseVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrSensorState, globalPoseVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_globalPoseVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_globalPoseVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_angularVelocity_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_angularVelocity = { "angularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrSensorState, angularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_angularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_angularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_linearVelocity_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_linearVelocity = { "linearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrSensorState, linearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_linearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_linearVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_angularAcceleration_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_angularAcceleration = { "angularAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrSensorState, angularAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_angularAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_angularAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_linearAcceleration_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_linearAcceleration = { "linearAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrSensorState, linearAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_linearAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_linearAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_poseTimeStampNs_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_poseTimeStampNs = { "poseTimeStampNs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrSensorState, poseTimeStampNs), METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_poseTimeStampNs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_poseTimeStampNs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPxrSensorState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_poseQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_poseVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_globalPoseQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_globalPoseVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_angularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_linearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_angularAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_linearAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrSensorState_Statics::NewProp_poseTimeStampNs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPxrSensorState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRHMD,
		nullptr,
		&NewStructOps,
		"PxrSensorState",
		sizeof(FPxrSensorState),
		alignof(FPxrSensorState),
		Z_Construct_UScriptStruct_FPxrSensorState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrSensorState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrSensorState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrSensorState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPxrSensorState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPxrSensorState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PxrSensorState"), sizeof(FPxrSensorState), Get_Z_Construct_UScriptStruct_FPxrSensorState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPxrSensorState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPxrSensorState_Hash() { return 246809925U; }
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_SetLateLatchingEnable)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRHMDFunctionLibrary::PXR_SetLateLatchingEnable(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_QueryDeviceAbilities)
	{
		P_GET_ENUM(EPICOXRDeviceAbilities,Z_Param_DeviceAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_QueryDeviceAbilities(EPICOXRDeviceAbilities(Z_Param_DeviceAbility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetPredictedMainSensorState)
	{
		P_GET_STRUCT_REF(FPxrSensorState,Z_Param_Out_sensorState);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sensorFrameIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRHMDFunctionLibrary::PXR_GetPredictedMainSensorState(Z_Param_Out_sensorState,Z_Param_Out_sensorFrameIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_SetExtraLatencyMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_SetExtraLatencyMode(Z_Param_Mode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetDisplayFrequenciesAvailable)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Count);
		P_GET_TARRAY_REF(float,Z_Param_Out_AvailableRates);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetDisplayFrequenciesAvailable(Z_Param_Out_Count,Z_Param_Out_AvailableRates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_SetSensorLostCMST)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_SetSensorLostCMST(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_SetSensorLostCustomMode)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_SetSensorLostCustomMode(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_EnableEyeTracking)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_EnableEyeTracking(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetEyeTrackingPos)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EyeTrackingPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetEyeTrackingPos(Z_Param_Out_EyeTrackingPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetEyeTrackingData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPICOXREyeTrackingData*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetEyeTrackingData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetEyeTrackingGazeRay)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetEyeTrackingGazeRay(Z_Param_Out_Origin,Z_Param_Out_Direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_SetFoveationParameter)
	{
		P_GET_STRUCT(FVector2D,Z_Param_FoveationGainValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FoveationAreaValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FoveationMinimumValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_SetFoveationParameter(Z_Param_FoveationGainValue,Z_Param_FoveationAreaValue,Z_Param_FoveationMinimumValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_SetFoveationLevel)
	{
		P_GET_ENUM(EPICOXRFoveationLevel,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_SetFoveationLevel(EPICOXRFoveationLevel(Z_Param_Level));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetFoveationLevel)
	{
		P_GET_ENUM_REF(EPICOXRFoveationLevel,Z_Param_Out_FoveationLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetFoveationLevel((EPICOXRFoveationLevel&)(Z_Param_Out_FoveationLevel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_EnableFoveation)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRHMDFunctionLibrary::PXR_EnableFoveation(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetDialogState)
	{
		P_GET_ENUM_REF(EPICOXRBoundaryState,Z_Param_Out_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRHMDFunctionLibrary::PXR_GetDialogState((EPICOXRBoundaryState&)(Z_Param_Out_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_SetSeeThroughBackground)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_SetSeeThroughBackground(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_SetBoundaryCameraImageSize)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_ImageSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_SetBoundaryCameraImageSize(Z_Param_ImageSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetBoundarySeeThroughData)
	{
		P_GET_ENUM(EPICOXRCameraType,Z_Param_CameraType);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_CameraImage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetBoundarySeeThroughData(EPICOXRCameraType(Z_Param_CameraType),Z_Param_Out_CameraImage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetBoundaryDimensions)
	{
		P_GET_ENUM(EPICOXRBoundaryType,Z_Param_BoundaryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetBoundaryDimensions(EPICOXRBoundaryType(Z_Param_BoundaryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetBoundaryGeometry)
	{
		P_GET_ENUM(EPICOXRBoundaryType,Z_Param_BoundaryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetBoundaryGeometry(EPICOXRBoundaryType(Z_Param_BoundaryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_BoundaryTestPoint)
	{
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_GET_ENUM(EPICOXRBoundaryType,Z_Param_BoundaryType);
		P_GET_UBOOL_REF(Z_Param_Out_IsTriggering);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ClosestDistance);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestPointNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_BoundaryTestPoint(Z_Param_Point,EPICOXRBoundaryType(Z_Param_BoundaryType),Z_Param_Out_IsTriggering,Z_Param_Out_ClosestDistance,Z_Param_Out_ClosestPoint,Z_Param_Out_ClosestPointNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_BoundaryTestNode)
	{
		P_GET_ENUM(EPICOXRNodeType,Z_Param_DeviceType);
		P_GET_ENUM(EPICOXRBoundaryType,Z_Param_BoundaryType);
		P_GET_UBOOL_REF(Z_Param_Out_IsTriggering);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ClosestDistance);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestPointNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_BoundaryTestNode(EPICOXRNodeType(Z_Param_DeviceType),EPICOXRBoundaryType(Z_Param_BoundaryType),Z_Param_Out_IsTriggering,Z_Param_Out_ClosestDistance,Z_Param_Out_ClosestPoint,Z_Param_Out_ClosestPointNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetBoundaryVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetBoundaryVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_SetBoundaryVisible)
	{
		P_GET_UBOOL(Z_Param_NewVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRHMDFunctionLibrary::PXR_SetBoundaryVisible(Z_Param_NewVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetBoundaryEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetBoundaryEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetBoundaryConfigured)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetBoundaryConfigured();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execGetFocusState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::GetFocusState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_SetColorScaleAndOffset)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_ColorScale);
		P_GET_STRUCT(FLinearColor,Z_Param_ColorOffset);
		P_GET_UBOOL(Z_Param_bApplyToAllLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRHMDFunctionLibrary::PXR_SetColorScaleAndOffset(Z_Param_ColorScale,Z_Param_ColorOffset,Z_Param_bApplyToAllLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_SetSystemDisplayFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRHMDFunctionLibrary::PXR_SetSystemDisplayFrequency(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetSystemDisplayFrequency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetSystemDisplayFrequency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetCPUAndGPULevels)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CPULevel);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_GPULevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRHMDFunctionLibrary::PXR_GetCPUAndGPULevels(Z_Param_Out_CPULevel,Z_Param_Out_GPULevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_SetCPUAndGPULevels)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CPULevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_GPULevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRHMDFunctionLibrary::PXR_SetCPUAndGPULevels(Z_Param_CPULevel,Z_Param_GPULevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetCurrentDisplayFrequency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetCurrentDisplayFrequency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetDeviceModel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetDeviceModel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetEventManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPICOXREventManager**)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetEventManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_IPDChangedDelegates)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnPICOXRIPDChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRHMDFunctionLibrary::PXR_IPDChangedDelegates(FPICOXRIPDChangedDelegate(Z_Param_OnPICOXRIPDChanged));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetIPD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetIPD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetHFov)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_HFOVInDegrees);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRHMDFunctionLibrary::PXR_GetHFov(Z_Param_Out_HFOVInDegrees);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetVFov)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_VFOVInDegrees);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRHMDFunctionLibrary::PXR_GetVFov(Z_Param_Out_VFOVInDegrees);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetFieldOfView)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_HFOVInDegrees);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_VFOVInDegrees);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetFieldOfView(Z_Param_Out_HFOVInDegrees,Z_Param_Out_VFOVInDegrees);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_ResetHMDSensor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_ResetHMDSensor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetHMDWornState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EHMDWornState::Type>*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetHMDWornState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetAngularAcceleration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetAngularAcceleration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetAcceleration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetAcceleration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetAngularVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetAngularVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_DoesSupportPositionalTracking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_DoesSupportPositionalTracking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetCurrentPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetCurrentPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRHMDFunctionLibrary::execPXR_GetCurrentOrientation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UPICOXRHMDFunctionLibrary::PXR_GetCurrentOrientation();
		P_NATIVE_END;
	}
	void UPICOXRHMDFunctionLibrary::StaticRegisterNativesUPICOXRHMDFunctionLibrary()
	{
		UClass* Class = UPICOXRHMDFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFocusState", &UPICOXRHMDFunctionLibrary::execGetFocusState },
			{ "PXR_BoundaryTestNode", &UPICOXRHMDFunctionLibrary::execPXR_BoundaryTestNode },
			{ "PXR_BoundaryTestPoint", &UPICOXRHMDFunctionLibrary::execPXR_BoundaryTestPoint },
			{ "PXR_DoesSupportPositionalTracking", &UPICOXRHMDFunctionLibrary::execPXR_DoesSupportPositionalTracking },
			{ "PXR_EnableEyeTracking", &UPICOXRHMDFunctionLibrary::execPXR_EnableEyeTracking },
			{ "PXR_EnableFoveation", &UPICOXRHMDFunctionLibrary::execPXR_EnableFoveation },
			{ "PXR_GetAcceleration", &UPICOXRHMDFunctionLibrary::execPXR_GetAcceleration },
			{ "PXR_GetAngularAcceleration", &UPICOXRHMDFunctionLibrary::execPXR_GetAngularAcceleration },
			{ "PXR_GetAngularVelocity", &UPICOXRHMDFunctionLibrary::execPXR_GetAngularVelocity },
			{ "PXR_GetBoundaryConfigured", &UPICOXRHMDFunctionLibrary::execPXR_GetBoundaryConfigured },
			{ "PXR_GetBoundaryDimensions", &UPICOXRHMDFunctionLibrary::execPXR_GetBoundaryDimensions },
			{ "PXR_GetBoundaryEnabled", &UPICOXRHMDFunctionLibrary::execPXR_GetBoundaryEnabled },
			{ "PXR_GetBoundaryGeometry", &UPICOXRHMDFunctionLibrary::execPXR_GetBoundaryGeometry },
			{ "PXR_GetBoundarySeeThroughData", &UPICOXRHMDFunctionLibrary::execPXR_GetBoundarySeeThroughData },
			{ "PXR_GetBoundaryVisible", &UPICOXRHMDFunctionLibrary::execPXR_GetBoundaryVisible },
			{ "PXR_GetCPUAndGPULevels", &UPICOXRHMDFunctionLibrary::execPXR_GetCPUAndGPULevels },
			{ "PXR_GetCurrentDisplayFrequency", &UPICOXRHMDFunctionLibrary::execPXR_GetCurrentDisplayFrequency },
			{ "PXR_GetCurrentOrientation", &UPICOXRHMDFunctionLibrary::execPXR_GetCurrentOrientation },
			{ "PXR_GetCurrentPosition", &UPICOXRHMDFunctionLibrary::execPXR_GetCurrentPosition },
			{ "PXR_GetDeviceModel", &UPICOXRHMDFunctionLibrary::execPXR_GetDeviceModel },
			{ "PXR_GetDialogState", &UPICOXRHMDFunctionLibrary::execPXR_GetDialogState },
			{ "PXR_GetDisplayFrequenciesAvailable", &UPICOXRHMDFunctionLibrary::execPXR_GetDisplayFrequenciesAvailable },
			{ "PXR_GetEventManager", &UPICOXRHMDFunctionLibrary::execPXR_GetEventManager },
			{ "PXR_GetEyeTrackingData", &UPICOXRHMDFunctionLibrary::execPXR_GetEyeTrackingData },
			{ "PXR_GetEyeTrackingGazeRay", &UPICOXRHMDFunctionLibrary::execPXR_GetEyeTrackingGazeRay },
			{ "PXR_GetEyeTrackingPos", &UPICOXRHMDFunctionLibrary::execPXR_GetEyeTrackingPos },
			{ "PXR_GetFieldOfView", &UPICOXRHMDFunctionLibrary::execPXR_GetFieldOfView },
			{ "PXR_GetFoveationLevel", &UPICOXRHMDFunctionLibrary::execPXR_GetFoveationLevel },
			{ "PXR_GetHFov", &UPICOXRHMDFunctionLibrary::execPXR_GetHFov },
			{ "PXR_GetHMDWornState", &UPICOXRHMDFunctionLibrary::execPXR_GetHMDWornState },
			{ "PXR_GetIPD", &UPICOXRHMDFunctionLibrary::execPXR_GetIPD },
			{ "PXR_GetPredictedMainSensorState", &UPICOXRHMDFunctionLibrary::execPXR_GetPredictedMainSensorState },
			{ "PXR_GetSystemDisplayFrequency", &UPICOXRHMDFunctionLibrary::execPXR_GetSystemDisplayFrequency },
			{ "PXR_GetVelocity", &UPICOXRHMDFunctionLibrary::execPXR_GetVelocity },
			{ "PXR_GetVFov", &UPICOXRHMDFunctionLibrary::execPXR_GetVFov },
			{ "PXR_IPDChangedDelegates", &UPICOXRHMDFunctionLibrary::execPXR_IPDChangedDelegates },
			{ "PXR_QueryDeviceAbilities", &UPICOXRHMDFunctionLibrary::execPXR_QueryDeviceAbilities },
			{ "PXR_ResetHMDSensor", &UPICOXRHMDFunctionLibrary::execPXR_ResetHMDSensor },
			{ "PXR_SetBoundaryCameraImageSize", &UPICOXRHMDFunctionLibrary::execPXR_SetBoundaryCameraImageSize },
			{ "PXR_SetBoundaryVisible", &UPICOXRHMDFunctionLibrary::execPXR_SetBoundaryVisible },
			{ "PXR_SetColorScaleAndOffset", &UPICOXRHMDFunctionLibrary::execPXR_SetColorScaleAndOffset },
			{ "PXR_SetCPUAndGPULevels", &UPICOXRHMDFunctionLibrary::execPXR_SetCPUAndGPULevels },
			{ "PXR_SetExtraLatencyMode", &UPICOXRHMDFunctionLibrary::execPXR_SetExtraLatencyMode },
			{ "PXR_SetFoveationLevel", &UPICOXRHMDFunctionLibrary::execPXR_SetFoveationLevel },
			{ "PXR_SetFoveationParameter", &UPICOXRHMDFunctionLibrary::execPXR_SetFoveationParameter },
			{ "PXR_SetLateLatchingEnable", &UPICOXRHMDFunctionLibrary::execPXR_SetLateLatchingEnable },
			{ "PXR_SetSeeThroughBackground", &UPICOXRHMDFunctionLibrary::execPXR_SetSeeThroughBackground },
			{ "PXR_SetSensorLostCMST", &UPICOXRHMDFunctionLibrary::execPXR_SetSensorLostCMST },
			{ "PXR_SetSensorLostCustomMode", &UPICOXRHMDFunctionLibrary::execPXR_SetSensorLostCustomMode },
			{ "PXR_SetSystemDisplayFrequency", &UPICOXRHMDFunctionLibrary::execPXR_SetSystemDisplayFrequency },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_GetFocusState_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventGetFocusState_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_GetFocusState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventGetFocusState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_GetFocusState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventGetFocusState_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_GetFocusState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_GetFocusState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_GetFocusState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_GetFocusState_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Returns true, if the app has focus.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Returns true, if the app has focus." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_GetFocusState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "GetFocusState", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventGetFocusState_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_GetFocusState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_GetFocusState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_GetFocusState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_GetFocusState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_GetFocusState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_GetFocusState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestNode_Parms
		{
			EPICOXRNodeType DeviceType;
			EPICOXRBoundaryType BoundaryType;
			bool IsTriggering;
			float ClosestDistance;
			FVector ClosestPoint;
			FVector ClosestPointNormal;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static void NewProp_IsTriggering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTriggering;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClosestDistance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClosestPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClosestPointNormal;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestNode_Parms, DeviceType), Z_Construct_UEnum_PICOXRHMD_EPICOXRNodeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestNode_Parms, BoundaryType), Z_Construct_UEnum_PICOXRHMD_EPICOXRBoundaryType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_IsTriggering_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestNode_Parms*)Obj)->IsTriggering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_IsTriggering = { "IsTriggering", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestNode_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_IsTriggering_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_ClosestDistance = { "ClosestDistance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestNode_Parms, ClosestDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_ClosestPoint = { "ClosestPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestNode_Parms, ClosestPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_ClosestPointNormal = { "ClosestPointNormal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestNode_Parms, ClosestPointNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestNode_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_DeviceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_DeviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_BoundaryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_BoundaryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_IsTriggering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_ClosestDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_ClosestPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_ClosestPointNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get the intersection result between a tracked device (HMD or controllers) and a Boundary boundary\n\x09* @param DeviceType             (in) Tracked Device type to test against Boundary \n\x09* @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact Boundary bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09* @param IsTriggering           (out) The intersection result between a tracked device (HMD or controllers) and a Boundary \n\x09* @param ClosestDistance        (out) The closest distance between a tracked device (HMD or controllers) and a Boundary\n\x09* @param ClosestPoint           (out) The closest point on surface corresponding to specified boundary \n\x09* @param ClosestPointNormal     (out) Normal of closest point\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get the intersection result between a tracked device (HMD or controllers) and a Boundary boundary\n@param DeviceType             (in) Tracked Device type to test against Boundary\n@param BoundaryType                   (in) An enum representing the boundary type requested, either Outer Boundary (exact Boundary bounds) or PlayArea (rectangle inside the Outer Boundary)\n@param IsTriggering           (out) The intersection result between a tracked device (HMD or controllers) and a Boundary\n@param ClosestDistance        (out) The closest distance between a tracked device (HMD or controllers) and a Boundary\n@param ClosestPoint           (out) The closest point on surface corresponding to specified boundary\n@param ClosestPointNormal     (out) Normal of closest point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_BoundaryTestNode", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestNode_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestPoint_Parms
		{
			FVector Point;
			EPICOXRBoundaryType BoundaryType;
			bool IsTriggering;
			float ClosestDistance;
			FVector ClosestPoint;
			FVector ClosestPointNormal;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static void NewProp_IsTriggering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTriggering;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClosestDistance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClosestPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClosestPointNormal;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestPoint_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestPoint_Parms, BoundaryType), Z_Construct_UEnum_PICOXRHMD_EPICOXRBoundaryType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_IsTriggering_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestPoint_Parms*)Obj)->IsTriggering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_IsTriggering = { "IsTriggering", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestPoint_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_IsTriggering_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_ClosestDistance = { "ClosestDistance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestPoint_Parms, ClosestDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_ClosestPoint = { "ClosestPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestPoint_Parms, ClosestPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_ClosestPointNormal = { "ClosestPointNormal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestPoint_Parms, ClosestPointNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestPoint_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_BoundaryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_BoundaryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_IsTriggering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_ClosestDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_ClosestPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_ClosestPointNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get the intersection result between a UE4 coordinate and a Boundary boundary\n\x09* @param Point\x09\x09\x09\x09\x09(in) Point in UE space to test against Boundary boundaries\n\x09* @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact Boundary bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09* @param IsTriggering           (out) The intersection result between a tracked device (HMD or controllers) and a Boundary \n\x09* @param ClosestDistance        (out) The closest distance between a tracked device (HMD or controllers) and a Boundary\n\x09* @param ClosestPoint           (out) The closest point on surface corresponding to specified boundary \n\x09* @param ClosestPointNormal     (out) Normal of closest point\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get the intersection result between a UE4 coordinate and a Boundary boundary\n@param Point                                  (in) Point in UE space to test against Boundary boundaries\n@param BoundaryType                   (in) An enum representing the boundary type requested, either Outer Boundary (exact Boundary bounds) or PlayArea (rectangle inside the Outer Boundary)\n@param IsTriggering           (out) The intersection result between a tracked device (HMD or controllers) and a Boundary\n@param ClosestDistance        (out) The closest distance between a tracked device (HMD or controllers) and a Boundary\n@param ClosestPoint           (out) The closest point on surface corresponding to specified boundary\n@param ClosestPointNormal     (out) Normal of closest point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_BoundaryTestPoint", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_BoundaryTestPoint_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_DoesSupportPositionalTracking_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_DoesSupportPositionalTracking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_DoesSupportPositionalTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_DoesSupportPositionalTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_DoesSupportPositionalTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_DoesSupportPositionalTracking_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_DoesSupportPositionalTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_DoesSupportPositionalTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_DoesSupportPositionalTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_DoesSupportPositionalTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Gets whether the device supports position tracking\n\x09* @return  true: Tracking position(6Dof),false: Can not tracking position(3Dof).\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Gets whether the device supports position tracking\n@return  true: Tracking position(6Dof),false: Can not tracking position(3Dof)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_DoesSupportPositionalTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_DoesSupportPositionalTracking", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_DoesSupportPositionalTracking_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_DoesSupportPositionalTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_DoesSupportPositionalTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_DoesSupportPositionalTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_DoesSupportPositionalTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_DoesSupportPositionalTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_DoesSupportPositionalTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_EnableEyeTracking_Parms
		{
			bool enable;
			bool ReturnValue;
		};
		static void NewProp_enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_EnableEyeTracking_Parms*)Obj)->enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_EnableEyeTracking_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics::NewProp_enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_EnableEyeTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_EnableEyeTracking_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics::NewProp_enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_EnableEyeTracking", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_EnableEyeTracking_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableFoveation_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_EnableFoveation_Parms
		{
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableFoveation_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_EnableFoveation_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableFoveation_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_EnableFoveation_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableFoveation_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableFoveation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableFoveation_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableFoveation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Enable or disable Foveation rendering.\n\x09* @param Enable\x09\x09\x09(in) Target state.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Enable or disable Foveation rendering.\n@param Enable                 (in) Target state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableFoveation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_EnableFoveation", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_EnableFoveation_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableFoveation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableFoveation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableFoveation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableFoveation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableFoveation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableFoveation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAcceleration_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetAcceleration_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetAcceleration_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAcceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAcceleration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get HMD devices acceleration.\n\x09* @return  devices acceleration.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get HMD devices acceleration.\n@return  devices acceleration." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetAcceleration", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetAcceleration_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularAcceleration_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetAngularAcceleration_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetAngularAcceleration_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularAcceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularAcceleration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get HMD devices angular acceleration.\n\x09* @return  devices angular acceleration.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get HMD devices angular acceleration.\n@return  devices angular acceleration." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetAngularAcceleration", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetAngularAcceleration_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularVelocity_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetAngularVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetAngularVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get HMD devices angular velocity.\n\x09* @return  devices angular velocity.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get HMD devices angular velocity.\n@return  devices angular velocity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetAngularVelocity", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetAngularVelocity_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryConfigured_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryConfigured_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryConfigured_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryConfigured_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryConfigured_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryConfigured_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryConfigured_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryConfigured_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryConfigured_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryConfigured_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Whether an effective Boundary exists\n\x09* @return true:Exist,false: No exit.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Whether an effective Boundary exists\n@return true:Exist,false: No exit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryConfigured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetBoundaryConfigured", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryConfigured_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryConfigured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryConfigured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryConfigured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryConfigured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryConfigured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryConfigured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryDimensions_Parms
		{
			EPICOXRBoundaryType BoundaryType;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryDimensions_Parms, BoundaryType), Z_Construct_UEnum_PICOXRHMD_EPICOXRBoundaryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryDimensions_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions_Statics::NewProp_BoundaryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions_Statics::NewProp_BoundaryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Returns the dimensions in UE world space of the requested Boundary Type\n\x09* @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact Boundary bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Returns the dimensions in UE world space of the requested Boundary Type\n@param BoundaryType                   (in) An enum representing the boundary type requested, either Outer Boundary (exact Boundary bounds) or PlayArea (rectangle inside the Outer Boundary)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetBoundaryDimensions", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryDimensions_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryEnabled_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryEnabled_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Gets whether Boundary is enabled or not\n\x09* @return true:Boundary is enabled,false: Boundary is not enabled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Gets whether Boundary is enabled or not\n@return true:Boundary is enabled,false: Boundary is not enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetBoundaryEnabled", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryEnabled_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryGeometry_Parms
		{
			EPICOXRBoundaryType BoundaryType;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryGeometry_Parms, BoundaryType), Z_Construct_UEnum_PICOXRHMD_EPICOXRBoundaryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryGeometry_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics::NewProp_BoundaryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics::NewProp_BoundaryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Returns the list of points in UE world space of the requested Boundary Type \n\x09* @param BoundaryType\x09\x09\x09(in) An enum representing the boundary type requested, either Outer Boundary (exact Boundary bounds) or PlayArea (rectangle inside the Outer Boundary)\n\x09* @return The array of points in UE world space of the requested Boundary Type .\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Returns the list of points in UE world space of the requested Boundary Type\n@param BoundaryType                   (in) An enum representing the boundary type requested, either Outer Boundary (exact Boundary bounds) or PlayArea (rectangle inside the Outer Boundary)\n@return The array of points in UE world space of the requested Boundary Type ." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetBoundaryGeometry", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryGeometry_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetBoundarySeeThroughData_Parms
		{
			EPICOXRCameraType CameraType;
			UTexture2D* CameraImage;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CameraType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraImage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::NewProp_CameraType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::NewProp_CameraType = { "CameraType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetBoundarySeeThroughData_Parms, CameraType), Z_Construct_UEnum_PICOXRHMD_EPICOXRCameraType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::NewProp_CameraImage = { "CameraImage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetBoundarySeeThroughData_Parms, CameraImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_GetBoundarySeeThroughData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetBoundarySeeThroughData_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::NewProp_CameraType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::NewProp_CameraType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::NewProp_CameraImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get an image of the device's camera.\n\x09* @param CameraType\x09\x09\x09(in) Left or right camera.\n\x09* @param CameraImage        (out) The image of the device's camera.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get an image of the device's camera.\n@param CameraType                     (in) Left or right camera.\n@param CameraImage        (out) The image of the device's camera." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetBoundarySeeThroughData", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetBoundarySeeThroughData_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryVisible_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryVisible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryVisible_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Gets whether Boundary is resident.\n\x09* @return true:Boundary is resident,false: Boundary is not resident.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Gets whether Boundary is resident.\n@return true:Boundary is resident,false: Boundary is not resident." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetBoundaryVisible", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetBoundaryVisible_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCPUAndGPULevels_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetCPUAndGPULevels_Parms
		{
			int32 CPULevel;
			int32 GPULevel;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CPULevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GPULevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCPUAndGPULevels_Statics::NewProp_CPULevel = { "CPULevel", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetCPUAndGPULevels_Parms, CPULevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCPUAndGPULevels_Statics::NewProp_GPULevel = { "GPULevel", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetCPUAndGPULevels_Parms, GPULevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCPUAndGPULevels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCPUAndGPULevels_Statics::NewProp_CPULevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCPUAndGPULevels_Statics::NewProp_GPULevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCPUAndGPULevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get CPU GPU level.\n\x09* @param CPULevel   (out) Target CPU level.\n\x09* @param GPULevel   (out) Target GPU level.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get CPU GPU level.\n@param CPULevel   (out) Target CPU level.\n@param GPULevel   (out) Target GPU level." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCPUAndGPULevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetCPUAndGPULevels", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetCPUAndGPULevels_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCPUAndGPULevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCPUAndGPULevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCPUAndGPULevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCPUAndGPULevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCPUAndGPULevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCPUAndGPULevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentDisplayFrequency_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetCurrentDisplayFrequency_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentDisplayFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetCurrentDisplayFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentDisplayFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentDisplayFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get device display frequency.\n\x09* @return device display frequency.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get device display frequency.\n@return device display frequency." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentDisplayFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetCurrentDisplayFrequency", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetCurrentDisplayFrequency_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentDisplayFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentDisplayFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentDisplayFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentDisplayFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentOrientation_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetCurrentOrientation_Parms
		{
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetCurrentOrientation_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentOrientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get HMD devices current orientation.\n\x09* @return  devices current orientation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get HMD devices current orientation.\n@return  devices current orientation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetCurrentOrientation", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetCurrentOrientation_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentPosition_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetCurrentPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetCurrentPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get HMD devices current position.\n\x09* @return  devices current position.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get HMD devices current position.\n@return  devices current position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetCurrentPosition", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetCurrentPosition_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDeviceModel_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetDeviceModel_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDeviceModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetDeviceModel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDeviceModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDeviceModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDeviceModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n    * Get device series number.\n    * @return device series number.\n    */" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get device series number.\n@return device series number." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDeviceModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetDeviceModel", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetDeviceModel_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDeviceModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDeviceModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDeviceModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDeviceModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDeviceModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDeviceModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDialogState_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetDialogState_Parms
		{
			EPICOXRBoundaryState State;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDialogState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDialogState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetDialogState_Parms, State), Z_Construct_UEnum_PICOXRHMD_EPICOXRBoundaryState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDialogState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDialogState_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDialogState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDialogState_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get dialog state.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get dialog state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDialogState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetDialogState", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetDialogState_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDialogState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDialogState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDialogState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDialogState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDialogState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDialogState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetDisplayFrequenciesAvailable_Parms
		{
			int32 Count;
			TArray<float> AvailableRates;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvailableRates_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableRates;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetDisplayFrequenciesAvailable_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::NewProp_AvailableRates_Inner = { "AvailableRates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::NewProp_AvailableRates = { "AvailableRates", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetDisplayFrequenciesAvailable_Parms, AvailableRates), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_GetDisplayFrequenciesAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetDisplayFrequenciesAvailable_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::NewProp_AvailableRates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::NewProp_AvailableRates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get display frequencies available.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get display frequencies available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetDisplayFrequenciesAvailable", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetDisplayFrequenciesAvailable_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEventManager_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetEventManager_Parms
		{
			UPICOXREventManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEventManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetEventManager_Parms, ReturnValue), Z_Construct_UClass_UPICOXREventManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEventManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEventManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEventManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get event manager.\n\x09* @return UPICOXREventManager class reference.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get event manager.\n@return UPICOXREventManager class reference." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEventManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetEventManager", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetEventManager_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEventManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEventManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEventManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEventManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEventManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEventManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingData_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetEyeTrackingData_Parms
		{
			FPICOXREyeTrackingData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetEyeTrackingData_Parms, ReturnValue), Z_Construct_UScriptStruct_FPICOXREyeTrackingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingData_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get EyeTracking data.\n\x09* @return  EyeTracking data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get EyeTracking data.\n@return  EyeTracking data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetEyeTrackingData", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetEyeTrackingData_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetEyeTrackingGazeRay_Parms
		{
			FVector Origin;
			FVector Direction;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetEyeTrackingGazeRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetEyeTrackingGazeRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_GetEyeTrackingGazeRay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetEyeTrackingGazeRay_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get EyeTracking gaze ray.\n\x09* @param Origin     The starting point of an eye-tracking ray.\n\x09* @param Direction  A unit vector in the direction of an eye-tracking ray.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get EyeTracking gaze ray.\n@param Origin     The starting point of an eye-tracking ray.\n@param Direction  A unit vector in the direction of an eye-tracking ray." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetEyeTrackingGazeRay", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetEyeTrackingGazeRay_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetEyeTrackingPos_Parms
		{
			FVector EyeTrackingPos;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EyeTrackingPos;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos_Statics::NewProp_EyeTrackingPos = { "EyeTrackingPos", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetEyeTrackingPos_Parms, EyeTrackingPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_GetEyeTrackingPos_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetEyeTrackingPos_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos_Statics::NewProp_EyeTrackingPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetEyeTrackingPos", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetEyeTrackingPos_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetFieldOfView_Parms
		{
			float HFOVInDegrees;
			float VFOVInDegrees;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HFOVInDegrees;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VFOVInDegrees;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics::NewProp_HFOVInDegrees = { "HFOVInDegrees", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetFieldOfView_Parms, HFOVInDegrees), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics::NewProp_VFOVInDegrees = { "VFOVInDegrees", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetFieldOfView_Parms, VFOVInDegrees), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_GetFieldOfView_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetFieldOfView_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics::NewProp_HFOVInDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics::NewProp_VFOVInDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get device FieldOfView(Fov).\n\x09* @param HFOVInDegrees    (out) Horizontal FOV.\n\x09* @param VFOVInDegrees    (out) Vertical FOV.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get device FieldOfView(Fov).\n@param HFOVInDegrees    (out) Horizontal FOV.\n@param VFOVInDegrees    (out) Vertical FOV." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetFieldOfView", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetFieldOfView_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetFoveationLevel_Parms
		{
			EPICOXRFoveationLevel FoveationLevel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FoveationLevel_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FoveationLevel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics::NewProp_FoveationLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics::NewProp_FoveationLevel = { "FoveationLevel", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetFoveationLevel_Parms, FoveationLevel), Z_Construct_UEnum_PICOXRHMD_EPICOXRFoveationLevel, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_GetFoveationLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetFoveationLevel_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics::NewProp_FoveationLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics::NewProp_FoveationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get current Foveation rendering level.\n\x09* @return  Foveation rendering level.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get current Foveation rendering level.\n@return  Foveation rendering level." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetFoveationLevel", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetFoveationLevel_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHFov_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetHFov_Parms
		{
			float HFOVInDegrees;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HFOVInDegrees;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHFov_Statics::NewProp_HFOVInDegrees = { "HFOVInDegrees", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetHFov_Parms, HFOVInDegrees), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHFov_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHFov_Statics::NewProp_HFOVInDegrees,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHFov_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get device horizontal Fov.\n\x09* @param HFOVInDegrees    (out) Horizontal FOV.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get device horizontal Fov.\n@param HFOVInDegrees    (out) Horizontal FOV." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHFov_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetHFov", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetHFov_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHFov_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHFov_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHFov_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHFov_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHFov()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHFov_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHMDWornState_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetHMDWornState_Parms
		{
			TEnumAsByte<EHMDWornState::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHMDWornState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetHMDWornState_Parms, ReturnValue), Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHMDWornState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHMDWornState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHMDWornState_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Detect whether the user is wearing the HMD\n\x09* @return\n\x09* EHMDWornState::Worn if we detect that the user is wearing the HMD,\n\x09* EHMDWornState::NotWorn if we detect the user is not wearing the HMD,\n\x09* EHMDWornState::Unknown if we cannot detect the state.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Detect whether the user is wearing the HMD\n@return\nEHMDWornState::Worn if we detect that the user is wearing the HMD,\nEHMDWornState::NotWorn if we detect the user is not wearing the HMD,\nEHMDWornState::Unknown if we cannot detect the state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHMDWornState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetHMDWornState", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetHMDWornState_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHMDWornState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHMDWornState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHMDWornState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHMDWornState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHMDWornState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHMDWornState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetIPD_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetIPD_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetIPD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetIPD_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetIPD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetIPD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetIPD_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get pupil distance of the current device.\n\x09* @return Current devices IPD.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get pupil distance of the current device.\n@return Current devices IPD." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetIPD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetIPD", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetIPD_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetIPD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetIPD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetIPD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetIPD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetIPD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetIPD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetPredictedMainSensorState_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetPredictedMainSensorState_Parms
		{
			FPxrSensorState sensorState;
			int32 sensorFrameIndex;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sensorState;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_sensorFrameIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetPredictedMainSensorState_Statics::NewProp_sensorState = { "sensorState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetPredictedMainSensorState_Parms, sensorState), Z_Construct_UScriptStruct_FPxrSensorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetPredictedMainSensorState_Statics::NewProp_sensorFrameIndex = { "sensorFrameIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetPredictedMainSensorState_Parms, sensorFrameIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetPredictedMainSensorState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetPredictedMainSensorState_Statics::NewProp_sensorState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetPredictedMainSensorState_Statics::NewProp_sensorFrameIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetPredictedMainSensorState_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetPredictedMainSensorState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetPredictedMainSensorState", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetPredictedMainSensorState_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetPredictedMainSensorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetPredictedMainSensorState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetPredictedMainSensorState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetPredictedMainSensorState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetPredictedMainSensorState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetPredictedMainSensorState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetSystemDisplayFrequency_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetSystemDisplayFrequency_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetSystemDisplayFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetSystemDisplayFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetSystemDisplayFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetSystemDisplayFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetSystemDisplayFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get system display frequency.\n\x09* @return system display frequency.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get system display frequency.\n@return system display frequency." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetSystemDisplayFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetSystemDisplayFrequency", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetSystemDisplayFrequency_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetSystemDisplayFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetSystemDisplayFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetSystemDisplayFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetSystemDisplayFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetSystemDisplayFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetSystemDisplayFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVelocity_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get HMD devices velocity.\n\x09* @return  devices velocity.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get HMD devices velocity.\n@return  devices velocity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetVelocity", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetVelocity_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVFov_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_GetVFov_Parms
		{
			float VFOVInDegrees;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VFOVInDegrees;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVFov_Statics::NewProp_VFOVInDegrees = { "VFOVInDegrees", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_GetVFov_Parms, VFOVInDegrees), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVFov_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVFov_Statics::NewProp_VFOVInDegrees,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVFov_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Get device vertical Fov.\n\x09* @param VFOVInDegrees    (out) Vertical FOV.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Get device vertical Fov.\n@param VFOVInDegrees    (out) Vertical FOV." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVFov_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_GetVFov", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_GetVFov_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVFov_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVFov_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVFov_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVFov_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVFov()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVFov_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_IPDChangedDelegates_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_IPDChangedDelegates_Parms
		{
			FScriptDelegate OnPICOXRIPDChanged;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnPICOXRIPDChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_IPDChangedDelegates_Statics::NewProp_OnPICOXRIPDChanged = { "OnPICOXRIPDChanged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_IPDChangedDelegates_Parms, OnPICOXRIPDChanged), Z_Construct_UDelegateFunction_PICOXRHMD_PICOXRIPDChangedDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_IPDChangedDelegates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_IPDChangedDelegates_Statics::NewProp_OnPICOXRIPDChanged,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_IPDChangedDelegates_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Set IPD changed delegate.\n\x09* @param OnPICOXRIPDChanged  (In) FPICOXRIPDChangedDelegate.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Set IPD changed delegate.\n@param OnPICOXRIPDChanged  (In) FPICOXRIPDChangedDelegate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_IPDChangedDelegates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_IPDChangedDelegates", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_IPDChangedDelegates_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_IPDChangedDelegates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_IPDChangedDelegates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_IPDChangedDelegates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_IPDChangedDelegates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_IPDChangedDelegates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_IPDChangedDelegates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_QueryDeviceAbilities_Parms
		{
			EPICOXRDeviceAbilities DeviceAbility;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceAbility_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceAbility;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics::NewProp_DeviceAbility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics::NewProp_DeviceAbility = { "DeviceAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_QueryDeviceAbilities_Parms, DeviceAbility), Z_Construct_UEnum_PICOXRHMD_EPICOXRDeviceAbilities, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_QueryDeviceAbilities_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_QueryDeviceAbilities_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics::NewProp_DeviceAbility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics::NewProp_DeviceAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Query Abilities of Device.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Query Abilities of Device." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_QueryDeviceAbilities", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_QueryDeviceAbilities_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_ResetHMDSensor_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_ResetHMDSensor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_ResetHMDSensor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_ResetHMDSensor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_ResetHMDSensor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_ResetHMDSensor_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_ResetHMDSensor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_ResetHMDSensor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_ResetHMDSensor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_ResetHMDSensor_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Reset HMD Position and Orientation.\n\x09* @return true: reset HMD sensor Succeed, false :reset HMD sensor Failed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Reset HMD Position and Orientation.\n@return true: reset HMD sensor Succeed, false :reset HMD sensor Failed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_ResetHMDSensor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_ResetHMDSensor", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_ResetHMDSensor_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_ResetHMDSensor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_ResetHMDSensor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_ResetHMDSensor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_ResetHMDSensor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_ResetHMDSensor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_ResetHMDSensor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_SetBoundaryCameraImageSize_Parms
		{
			FIntPoint ImageSize;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImageSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize_Statics::NewProp_ImageSize = { "ImageSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_SetBoundaryCameraImageSize_Parms, ImageSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_SetBoundaryCameraImageSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetBoundaryCameraImageSize_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize_Statics::NewProp_ImageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Set the size of the image of the device's camera.\n\x09* @param ImageSize\x09\x09\x09(in) Target image size.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Set the size of the image of the device's camera.\n@param ImageSize                      (in) Target image size." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_SetBoundaryCameraImageSize", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetBoundaryCameraImageSize_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryVisible_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_SetBoundaryVisible_Parms
		{
			bool NewVisible;
		};
		static void NewProp_NewVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryVisible_Statics::NewProp_NewVisible_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_SetBoundaryVisible_Parms*)Obj)->NewVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryVisible_Statics::NewProp_NewVisible = { "NewVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetBoundaryVisible_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryVisible_Statics::NewProp_NewVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryVisible_Statics::NewProp_NewVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Gets whether Boundary is resident.\n\x09* @param NewVisible:Target visible state.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Gets whether Boundary is resident.\n@param NewVisible:Target visible state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_SetBoundaryVisible", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetBoundaryVisible_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_SetColorScaleAndOffset_Parms
		{
			FLinearColor ColorScale;
			FLinearColor ColorOffset;
			bool bApplyToAllLayers;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOffset;
		static void NewProp_bApplyToAllLayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyToAllLayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics::NewProp_ColorScale = { "ColorScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_SetColorScaleAndOffset_Parms, ColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics::NewProp_ColorOffset = { "ColorOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_SetColorScaleAndOffset_Parms, ColorOffset), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_SetColorScaleAndOffset_Parms*)Obj)->bApplyToAllLayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers = { "bApplyToAllLayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetColorScaleAndOffset_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics::NewProp_ColorScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics::NewProp_ColorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Set eye buffer and overlay color space.\n\x09* @param ColorScale         (In) Color scale.\n\x09* @param ColorOffset        (In) Color offset.\n\x09* @param bApplyToAllLayers  (In) If apply to all Layers,default false.\n\x09*/" },
		{ "CPP_Default_bApplyToAllLayers", "false" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Set eye buffer and overlay color space.\n@param ColorScale         (In) Color scale.\n@param ColorOffset        (In) Color offset.\n@param bApplyToAllLayers  (In) If apply to all Layers,default false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_SetColorScaleAndOffset", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetColorScaleAndOffset_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetCPUAndGPULevels_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_SetCPUAndGPULevels_Parms
		{
			int32 CPULevel;
			int32 GPULevel;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CPULevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GPULevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetCPUAndGPULevels_Statics::NewProp_CPULevel = { "CPULevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_SetCPUAndGPULevels_Parms, CPULevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetCPUAndGPULevels_Statics::NewProp_GPULevel = { "GPULevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_SetCPUAndGPULevels_Parms, GPULevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetCPUAndGPULevels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetCPUAndGPULevels_Statics::NewProp_CPULevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetCPUAndGPULevels_Statics::NewProp_GPULevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetCPUAndGPULevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Set CPU GPU level.\n\x09* @param CPULevel   (in) Target CPU level.\n\x09* @param GPULevel   (in) Target GPU level.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Set CPU GPU level.\n@param CPULevel   (in) Target CPU level.\n@param GPULevel   (in) Target GPU level." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetCPUAndGPULevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_SetCPUAndGPULevels", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetCPUAndGPULevels_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetCPUAndGPULevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetCPUAndGPULevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetCPUAndGPULevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetCPUAndGPULevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetCPUAndGPULevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetCPUAndGPULevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_SetExtraLatencyMode_Parms
		{
			int32 Mode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Mode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_SetExtraLatencyMode_Parms, Mode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_SetExtraLatencyMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetExtraLatencyMode_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Set extra latency mode.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Set extra latency mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_SetExtraLatencyMode", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetExtraLatencyMode_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_SetFoveationLevel_Parms
		{
			EPICOXRFoveationLevel Level;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Level_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Level;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics::NewProp_Level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_SetFoveationLevel_Parms, Level), Z_Construct_UEnum_PICOXRHMD_EPICOXRFoveationLevel, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_SetFoveationLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetFoveationLevel_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics::NewProp_Level_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Set  Foveation rendering level.\n\x09* @param Level   rendering level.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Set  Foveation rendering level.\n@param Level   rendering level." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_SetFoveationLevel", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetFoveationLevel_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_SetFoveationParameter_Parms
		{
			FVector2D FoveationGainValue;
			float FoveationAreaValue;
			float FoveationMinimumValue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoveationGainValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FoveationAreaValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FoveationMinimumValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::NewProp_FoveationGainValue = { "FoveationGainValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_SetFoveationParameter_Parms, FoveationGainValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::NewProp_FoveationAreaValue = { "FoveationAreaValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_SetFoveationParameter_Parms, FoveationAreaValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::NewProp_FoveationMinimumValue = { "FoveationMinimumValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_SetFoveationParameter_Parms, FoveationMinimumValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_SetFoveationParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetFoveationParameter_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::NewProp_FoveationGainValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::NewProp_FoveationAreaValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::NewProp_FoveationMinimumValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Set  Foveation rendering parameter.\n\x09* @param FoveationGainValue     The reduction rate of peripheral pixels in the X/Y direction, the higher the value, the more the reduction.\n\x09* @param FoveationAreaValue     Take the fixation point as the center and the value of Foveation Area as the radius to maintain the full resolution.\n\x09* @param FoveationMinimumValue  Minimum pixel density limit.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Set  Foveation rendering parameter.\n@param FoveationGainValue     The reduction rate of peripheral pixels in the X/Y direction, the higher the value, the more the reduction.\n@param FoveationAreaValue     Take the fixation point as the center and the value of Foveation Area as the radius to maintain the full resolution.\n@param FoveationMinimumValue  Minimum pixel density limit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_SetFoveationParameter", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetFoveationParameter_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetLateLatchingEnable_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_SetLateLatchingEnable_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetLateLatchingEnable_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_SetLateLatchingEnable_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetLateLatchingEnable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetLateLatchingEnable_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetLateLatchingEnable_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetLateLatchingEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetLateLatchingEnable_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetLateLatchingEnable_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetLateLatchingEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_SetLateLatchingEnable", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetLateLatchingEnable_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetLateLatchingEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetLateLatchingEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetLateLatchingEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetLateLatchingEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetLateLatchingEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetLateLatchingEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_SetSeeThroughBackground_Parms
		{
			bool Value;
			int32 ReturnValue;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_SetSeeThroughBackground_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetSeeThroughBackground_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_SetSeeThroughBackground_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Set see through background.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Set see through background." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_SetSeeThroughBackground", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetSeeThroughBackground_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_SetSensorLostCMST_Parms
		{
			bool Value;
			int32 ReturnValue;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_SetSensorLostCMST_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetSensorLostCMST_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_SetSensorLostCMST_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Set sensor lost CMST.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Set sensor lost CMST." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_SetSensorLostCMST", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetSensorLostCMST_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_SetSensorLostCustomMode_Parms
		{
			bool Value;
			int32 ReturnValue;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((PICOXRHMDFunctionLibrary_eventPXR_SetSensorLostCustomMode_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetSensorLostCustomMode_Parms), &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_SetSensorLostCustomMode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Set sensor lost custom mode.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Set sensor lost custom mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_SetSensorLostCustomMode", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetSensorLostCustomMode_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSystemDisplayFrequency_Statics
	{
		struct PICOXRHMDFunctionLibrary_eventPXR_SetSystemDisplayFrequency_Parms
		{
			float Rate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSystemDisplayFrequency_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRHMDFunctionLibrary_eventPXR_SetSystemDisplayFrequency_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSystemDisplayFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSystemDisplayFrequency_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSystemDisplayFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHMD" },
		{ "Comment", "/**\n\x09* Set system display frequency.\n\x09* @param Rate    (In) Display frequency 72/90/120.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
		{ "ToolTip", "Set system display frequency.\n@param Rate    (In) Display frequency 72/90/120." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSystemDisplayFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRHMDFunctionLibrary, nullptr, "PXR_SetSystemDisplayFrequency", nullptr, nullptr, sizeof(PICOXRHMDFunctionLibrary_eventPXR_SetSystemDisplayFrequency_Parms), Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSystemDisplayFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSystemDisplayFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSystemDisplayFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSystemDisplayFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSystemDisplayFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSystemDisplayFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPICOXRHMDFunctionLibrary_NoRegister()
	{
		return UPICOXRHMDFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPICOXRHMDFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOXRHMDFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRHMD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICOXRHMDFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_GetFocusState, "GetFocusState" }, // 1411655021
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestNode, "PXR_BoundaryTestNode" }, // 719034954
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_BoundaryTestPoint, "PXR_BoundaryTestPoint" }, // 1157235508
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_DoesSupportPositionalTracking, "PXR_DoesSupportPositionalTracking" }, // 4056615034
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableEyeTracking, "PXR_EnableEyeTracking" }, // 1148263705
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_EnableFoveation, "PXR_EnableFoveation" }, // 3255254209
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAcceleration, "PXR_GetAcceleration" }, // 141089885
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularAcceleration, "PXR_GetAngularAcceleration" }, // 3930124185
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetAngularVelocity, "PXR_GetAngularVelocity" }, // 278073977
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryConfigured, "PXR_GetBoundaryConfigured" }, // 1310248625
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryDimensions, "PXR_GetBoundaryDimensions" }, // 3315334378
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryEnabled, "PXR_GetBoundaryEnabled" }, // 1452798903
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryGeometry, "PXR_GetBoundaryGeometry" }, // 986957132
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundarySeeThroughData, "PXR_GetBoundarySeeThroughData" }, // 1746988996
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetBoundaryVisible, "PXR_GetBoundaryVisible" }, // 574498293
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCPUAndGPULevels, "PXR_GetCPUAndGPULevels" }, // 686739472
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentDisplayFrequency, "PXR_GetCurrentDisplayFrequency" }, // 1547281920
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentOrientation, "PXR_GetCurrentOrientation" }, // 2215005910
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetCurrentPosition, "PXR_GetCurrentPosition" }, // 2256388258
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDeviceModel, "PXR_GetDeviceModel" }, // 4053019361
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDialogState, "PXR_GetDialogState" }, // 549665529
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetDisplayFrequenciesAvailable, "PXR_GetDisplayFrequenciesAvailable" }, // 3529624070
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEventManager, "PXR_GetEventManager" }, // 2450176361
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingData, "PXR_GetEyeTrackingData" }, // 1176408860
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingGazeRay, "PXR_GetEyeTrackingGazeRay" }, // 406814535
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetEyeTrackingPos, "PXR_GetEyeTrackingPos" }, // 2388286991
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFieldOfView, "PXR_GetFieldOfView" }, // 3707678090
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetFoveationLevel, "PXR_GetFoveationLevel" }, // 1892882894
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHFov, "PXR_GetHFov" }, // 3167993641
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetHMDWornState, "PXR_GetHMDWornState" }, // 2128181537
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetIPD, "PXR_GetIPD" }, // 590510397
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetPredictedMainSensorState, "PXR_GetPredictedMainSensorState" }, // 3392462531
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetSystemDisplayFrequency, "PXR_GetSystemDisplayFrequency" }, // 3822784816
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVelocity, "PXR_GetVelocity" }, // 3428120969
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_GetVFov, "PXR_GetVFov" }, // 3512351426
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_IPDChangedDelegates, "PXR_IPDChangedDelegates" }, // 1249304330
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_QueryDeviceAbilities, "PXR_QueryDeviceAbilities" }, // 3318361052
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_ResetHMDSensor, "PXR_ResetHMDSensor" }, // 1506431380
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryCameraImageSize, "PXR_SetBoundaryCameraImageSize" }, // 2926351703
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetBoundaryVisible, "PXR_SetBoundaryVisible" }, // 402178488
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetColorScaleAndOffset, "PXR_SetColorScaleAndOffset" }, // 2080998043
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetCPUAndGPULevels, "PXR_SetCPUAndGPULevels" }, // 2353481746
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetExtraLatencyMode, "PXR_SetExtraLatencyMode" }, // 4146263787
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationLevel, "PXR_SetFoveationLevel" }, // 3488901322
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetFoveationParameter, "PXR_SetFoveationParameter" }, // 3497216143
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetLateLatchingEnable, "PXR_SetLateLatchingEnable" }, // 651547941
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSeeThroughBackground, "PXR_SetSeeThroughBackground" }, // 1273258363
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCMST, "PXR_SetSensorLostCMST" }, // 2678222208
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSensorLostCustomMode, "PXR_SetSensorLostCustomMode" }, // 3139174885
		{ &Z_Construct_UFunction_UPICOXRHMDFunctionLibrary_PXR_SetSystemDisplayFrequency, "PXR_SetSystemDisplayFrequency" }, // 2837406923
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRHMDFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PXR_HMDFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/PXR_HMDFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOXRHMDFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOXRHMDFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPICOXRHMDFunctionLibrary_Statics::ClassParams = {
		&UPICOXRHMDFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOXRHMDFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRHMDFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOXRHMDFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPICOXRHMDFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPICOXRHMDFunctionLibrary, 2880243353);
	template<> PICOXRHMD_API UClass* StaticClass<UPICOXRHMDFunctionLibrary>()
	{
		return UPICOXRHMDFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPICOXRHMDFunctionLibrary(Z_Construct_UClass_UPICOXRHMDFunctionLibrary, &UPICOXRHMDFunctionLibrary::StaticClass, TEXT("/Script/PICOXRHMD"), TEXT("UPICOXRHMDFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOXRHMDFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
