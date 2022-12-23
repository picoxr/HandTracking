// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRInput/Public/PXR_InputFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_InputFunctionLibrary() {}
// Cross Module References
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPxrControllerKeyMap();
	UPackage* Z_Construct_UPackage__Script_PICOXRInput();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRCacheConfig();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRControllerDeviceType();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRGazeBehavior();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRArmModelJoint();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandType();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandFinger();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRActiveInputDevice();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandTrackingConfidence();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPHFData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPHFDataContent();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FAudioClipData();
	PICOXRINPUT_API UClass* Z_Construct_UClass_UPICOXRInputFunctionLibrary_NoRegister();
	PICOXRINPUT_API UClass* Z_Construct_UClass_UPICOXRInputFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	static UEnum* EPxrControllerKeyMap_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPxrControllerKeyMap, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPxrControllerKeyMap"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPxrControllerKeyMap>()
	{
		return EPxrControllerKeyMap_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPxrControllerKeyMap(EPxrControllerKeyMap_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPxrControllerKeyMap"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPxrControllerKeyMap_Hash() { return 3163073564U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPxrControllerKeyMap()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPxrControllerKeyMap"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPxrControllerKeyMap_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_HOME", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_HOME },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_AX", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_AX },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BY", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BY },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BACK", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BACK },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TRIGGER", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TRIGGER },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_UP", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_UP },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_DOWN", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_DOWN },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_ROCKER", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_ROCKER },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_GRIP", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_GRIP },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TOUCHPAD", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TOUCHPAD },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_LASTONE", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_LASTONE },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_AX", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_AX },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_BY", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_BY },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_ROCKER", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_ROCKER },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_TRIGGER", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_TRIGGER },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_THUMB", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_THUMB },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_LASTONE", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_LASTONE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "PXR_CONTROLLER_KEY_AX.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_AX" },
				{ "PXR_CONTROLLER_KEY_BACK.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BACK" },
				{ "PXR_CONTROLLER_KEY_BY.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BY" },
				{ "PXR_CONTROLLER_KEY_GRIP.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_GRIP" },
				{ "PXR_CONTROLLER_KEY_HOME.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_HOME" },
				{ "PXR_CONTROLLER_KEY_LASTONE.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_LASTONE" },
				{ "PXR_CONTROLLER_KEY_ROCKER.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_ROCKER" },
				{ "PXR_CONTROLLER_KEY_TOUCHPAD.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TOUCHPAD" },
				{ "PXR_CONTROLLER_KEY_TRIGGER.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TRIGGER" },
				{ "PXR_CONTROLLER_KEY_VOL_DOWN.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_DOWN" },
				{ "PXR_CONTROLLER_KEY_VOL_UP.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_UP" },
				{ "PXR_CONTROLLER_TOUCH_AX.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_AX" },
				{ "PXR_CONTROLLER_TOUCH_BY.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_BY" },
				{ "PXR_CONTROLLER_TOUCH_LASTONE.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_LASTONE" },
				{ "PXR_CONTROLLER_TOUCH_ROCKER.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_ROCKER" },
				{ "PXR_CONTROLLER_TOUCH_THUMB.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_THUMB" },
				{ "PXR_CONTROLLER_TOUCH_TRIGGER.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_TRIGGER" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPxrControllerKeyMap",
				"EPxrControllerKeyMap",
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
	static UEnum* EPICOXRCacheConfig_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRCacheConfig, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRCacheConfig"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRCacheConfig>()
	{
		return EPICOXRCacheConfig_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRCacheConfig(EPICOXRCacheConfig_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRCacheConfig"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRCacheConfig_Hash() { return 623052534U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRCacheConfig()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRCacheConfig"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRCacheConfig_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRCacheConfig::CacheAndVibrate", (int64)EPICOXRCacheConfig::CacheAndVibrate },
				{ "EPICOXRCacheConfig::CacheNoVibrate", (int64)EPICOXRCacheConfig::CacheNoVibrate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CacheAndVibrate.Name", "EPICOXRCacheConfig::CacheAndVibrate" },
				{ "CacheNoVibrate.Name", "EPICOXRCacheConfig::CacheNoVibrate" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRCacheConfig",
				"EPICOXRCacheConfig",
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
	static UEnum* EPICOXRChannelFlip_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRChannelFlip"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRChannelFlip>()
	{
		return EPICOXRChannelFlip_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRChannelFlip(EPICOXRChannelFlip_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRChannelFlip"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip_Hash() { return 3889352329U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRChannelFlip"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRChannelFlip::No", (int64)EPICOXRChannelFlip::No },
				{ "EPICOXRChannelFlip::Yes", (int64)EPICOXRChannelFlip::Yes },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "No.Name", "EPICOXRChannelFlip::No" },
				{ "Yes.Name", "EPICOXRChannelFlip::Yes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRChannelFlip",
				"EPICOXRChannelFlip",
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
	static UEnum* EPICOXRVibrateController_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRVibrateController"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRVibrateController>()
	{
		return EPICOXRVibrateController_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRVibrateController(EPICOXRVibrateController_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRVibrateController"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController_Hash() { return 2694829575U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRVibrateController"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRVibrateController::No", (int64)EPICOXRVibrateController::No },
				{ "EPICOXRVibrateController::Left", (int64)EPICOXRVibrateController::Left },
				{ "EPICOXRVibrateController::Right", (int64)EPICOXRVibrateController::Right },
				{ "EPICOXRVibrateController::LeftAndRight", (int64)EPICOXRVibrateController::LeftAndRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Left.Name", "EPICOXRVibrateController::Left" },
				{ "LeftAndRight.Name", "EPICOXRVibrateController::LeftAndRight" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "No.Name", "EPICOXRVibrateController::No" },
				{ "Right.Name", "EPICOXRVibrateController::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRVibrateController",
				"EPICOXRVibrateController",
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
	static UEnum* EPICOXRControllerDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRControllerDeviceType, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRControllerDeviceType"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRControllerDeviceType>()
	{
		return EPICOXRControllerDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRControllerDeviceType(EPICOXRControllerDeviceType_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRControllerDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRControllerDeviceType_Hash() { return 3142030365U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRControllerDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRControllerDeviceType"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRControllerDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRControllerDeviceType::UnKnown", (int64)EPICOXRControllerDeviceType::UnKnown },
				{ "EPICOXRControllerDeviceType::G2", (int64)EPICOXRControllerDeviceType::G2 },
				{ "EPICOXRControllerDeviceType::Neo2", (int64)EPICOXRControllerDeviceType::Neo2 },
				{ "EPICOXRControllerDeviceType::Neo3", (int64)EPICOXRControllerDeviceType::Neo3 },
				{ "EPICOXRControllerDeviceType::PICO_4", (int64)EPICOXRControllerDeviceType::PICO_4 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "G2.DisplayName", "PICO G2" },
				{ "G2.Name", "EPICOXRControllerDeviceType::G2" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "Neo2.DisplayName", "PICO Neo2" },
				{ "Neo2.Name", "EPICOXRControllerDeviceType::Neo2" },
				{ "Neo3.DisplayName", "PICO Neo3" },
				{ "Neo3.Name", "EPICOXRControllerDeviceType::Neo3" },
				{ "PICO_4.DisplayName", "PICO 4" },
				{ "PICO_4.Name", "EPICOXRControllerDeviceType::PICO_4" },
				{ "UnKnown.DisplayName", "UnKnown Controller" },
				{ "UnKnown.Name", "EPICOXRControllerDeviceType::UnKnown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRControllerDeviceType",
				"EPICOXRControllerDeviceType",
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
	static UEnum* EPICOXRGazeBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRGazeBehavior, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRGazeBehavior"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRGazeBehavior>()
	{
		return EPICOXRGazeBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRGazeBehavior(EPICOXRGazeBehavior_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRGazeBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRGazeBehavior_Hash() { return 3110315021U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRGazeBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRGazeBehavior"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRGazeBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRGazeBehavior::Never", (int64)EPICOXRGazeBehavior::Never },
				{ "EPICOXRGazeBehavior::DuringMotion", (int64)EPICOXRGazeBehavior::DuringMotion },
				{ "EPICOXRGazeBehavior::Always", (int64)EPICOXRGazeBehavior::Always },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.Name", "EPICOXRGazeBehavior::Always" },
				{ "BlueprintType", "true" },
				{ "DuringMotion.Name", "EPICOXRGazeBehavior::DuringMotion" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "Never.Name", "EPICOXRGazeBehavior::Never" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRGazeBehavior",
				"EPICOXRGazeBehavior",
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
	static UEnum* EPICOXRArmModelJoint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRArmModelJoint, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRArmModelJoint"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRArmModelJoint>()
	{
		return EPICOXRArmModelJoint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRArmModelJoint(EPICOXRArmModelJoint_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRArmModelJoint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRArmModelJoint_Hash() { return 3840924960U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRArmModelJoint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRArmModelJoint"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRArmModelJoint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRArmModelJoint::Controller", (int64)EPICOXRArmModelJoint::Controller },
				{ "EPICOXRArmModelJoint::Wrist", (int64)EPICOXRArmModelJoint::Wrist },
				{ "EPICOXRArmModelJoint::Elbow", (int64)EPICOXRArmModelJoint::Elbow },
				{ "EPICOXRArmModelJoint::Shoulder", (int64)EPICOXRArmModelJoint::Shoulder },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Controller.Name", "EPICOXRArmModelJoint::Controller" },
				{ "Elbow.Name", "EPICOXRArmModelJoint::Elbow" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "Shoulder.Name", "EPICOXRArmModelJoint::Shoulder" },
				{ "Wrist.Name", "EPICOXRArmModelJoint::Wrist" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRArmModelJoint",
				"EPICOXRArmModelJoint",
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
	static UEnum* EPICOXRControllerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRControllerType"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRControllerType>()
	{
		return EPICOXRControllerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRControllerType(EPICOXRControllerType_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRControllerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType_Hash() { return 2397668759U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRControllerType"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRControllerType::LeftHand", (int64)EPICOXRControllerType::LeftHand },
				{ "EPICOXRControllerType::RightHand", (int64)EPICOXRControllerType::RightHand },
				{ "EPICOXRControllerType::G2Hand", (int64)EPICOXRControllerType::G2Hand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "G2Hand.DisplayName", "PICO G2 Hand" },
				{ "G2Hand.Name", "EPICOXRControllerType::G2Hand" },
				{ "LeftHand.DisplayName", "PICO LeftHand" },
				{ "LeftHand.Name", "EPICOXRControllerType::LeftHand" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "RightHand.DisplayName", "PICO RightHand" },
				{ "RightHand.Name", "EPICOXRControllerType::RightHand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRControllerType",
				"EPICOXRControllerType",
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
	static UEnum* EPICOXRHandedness_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRHandedness"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRHandedness>()
	{
		return EPICOXRHandedness_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRHandedness(EPICOXRHandedness_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRHandedness"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness_Hash() { return 1317791765U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRHandedness"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRHandedness::LeftHand", (int64)EPICOXRHandedness::LeftHand },
				{ "EPICOXRHandedness::RightHand", (int64)EPICOXRHandedness::RightHand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LeftHand.Name", "EPICOXRHandedness::LeftHand" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "RightHand.Name", "EPICOXRHandedness::RightHand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRHandedness",
				"EPICOXRHandedness",
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
	static UEnum* EPICOXRHandType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRHandType"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRHandType>()
	{
		return EPICOXRHandType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRHandType(EPICOXRHandType_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRHandType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandType_Hash() { return 3678798382U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRHandType"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRHandType::None", (int64)EPICOXRHandType::None },
				{ "EPICOXRHandType::HandLeft", (int64)EPICOXRHandType::HandLeft },
				{ "EPICOXRHandType::HandRight", (int64)EPICOXRHandType::HandRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HandLeft.Name", "EPICOXRHandType::HandLeft" },
				{ "HandRight.Name", "EPICOXRHandType::HandRight" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "None.Name", "EPICOXRHandType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRHandType",
				"EPICOXRHandType",
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
	static UEnum* EPICOXRHandJoint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRHandJoint"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRHandJoint>()
	{
		return EPICOXRHandJoint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRHandJoint(EPICOXRHandJoint_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRHandJoint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint_Hash() { return 3279674004U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRHandJoint"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRHandJoint::Palm", (int64)EPICOXRHandJoint::Palm },
				{ "EPICOXRHandJoint::Wrist", (int64)EPICOXRHandJoint::Wrist },
				{ "EPICOXRHandJoint::ThumbMetacarpal", (int64)EPICOXRHandJoint::ThumbMetacarpal },
				{ "EPICOXRHandJoint::ThumbProximal", (int64)EPICOXRHandJoint::ThumbProximal },
				{ "EPICOXRHandJoint::ThumbDistal", (int64)EPICOXRHandJoint::ThumbDistal },
				{ "EPICOXRHandJoint::ThumbTip", (int64)EPICOXRHandJoint::ThumbTip },
				{ "EPICOXRHandJoint::IndexMetacarpal", (int64)EPICOXRHandJoint::IndexMetacarpal },
				{ "EPICOXRHandJoint::IndexProximal", (int64)EPICOXRHandJoint::IndexProximal },
				{ "EPICOXRHandJoint::IndexIntermediate", (int64)EPICOXRHandJoint::IndexIntermediate },
				{ "EPICOXRHandJoint::IndexDistal", (int64)EPICOXRHandJoint::IndexDistal },
				{ "EPICOXRHandJoint::IndexTip", (int64)EPICOXRHandJoint::IndexTip },
				{ "EPICOXRHandJoint::MiddleMetacarpal", (int64)EPICOXRHandJoint::MiddleMetacarpal },
				{ "EPICOXRHandJoint::MiddleProximal", (int64)EPICOXRHandJoint::MiddleProximal },
				{ "EPICOXRHandJoint::MiddleIntermediate", (int64)EPICOXRHandJoint::MiddleIntermediate },
				{ "EPICOXRHandJoint::MiddleDistal", (int64)EPICOXRHandJoint::MiddleDistal },
				{ "EPICOXRHandJoint::MiddleTip", (int64)EPICOXRHandJoint::MiddleTip },
				{ "EPICOXRHandJoint::RingMetacarpal", (int64)EPICOXRHandJoint::RingMetacarpal },
				{ "EPICOXRHandJoint::RingProximal", (int64)EPICOXRHandJoint::RingProximal },
				{ "EPICOXRHandJoint::RingIntermediate", (int64)EPICOXRHandJoint::RingIntermediate },
				{ "EPICOXRHandJoint::RingDistal", (int64)EPICOXRHandJoint::RingDistal },
				{ "EPICOXRHandJoint::RingTip", (int64)EPICOXRHandJoint::RingTip },
				{ "EPICOXRHandJoint::LittleMetacarpal", (int64)EPICOXRHandJoint::LittleMetacarpal },
				{ "EPICOXRHandJoint::LittleProximal", (int64)EPICOXRHandJoint::LittleProximal },
				{ "EPICOXRHandJoint::LittleIntermediate", (int64)EPICOXRHandJoint::LittleIntermediate },
				{ "EPICOXRHandJoint::LittleDistal", (int64)EPICOXRHandJoint::LittleDistal },
				{ "EPICOXRHandJoint::LittleTip", (int64)EPICOXRHandJoint::LittleTip },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IndexDistal.Name", "EPICOXRHandJoint::IndexDistal" },
				{ "IndexIntermediate.Name", "EPICOXRHandJoint::IndexIntermediate" },
				{ "IndexMetacarpal.Name", "EPICOXRHandJoint::IndexMetacarpal" },
				{ "IndexProximal.Name", "EPICOXRHandJoint::IndexProximal" },
				{ "IndexTip.Name", "EPICOXRHandJoint::IndexTip" },
				{ "LittleDistal.Name", "EPICOXRHandJoint::LittleDistal" },
				{ "LittleIntermediate.Name", "EPICOXRHandJoint::LittleIntermediate" },
				{ "LittleMetacarpal.Name", "EPICOXRHandJoint::LittleMetacarpal" },
				{ "LittleProximal.Name", "EPICOXRHandJoint::LittleProximal" },
				{ "LittleTip.Name", "EPICOXRHandJoint::LittleTip" },
				{ "MiddleDistal.Name", "EPICOXRHandJoint::MiddleDistal" },
				{ "MiddleIntermediate.Name", "EPICOXRHandJoint::MiddleIntermediate" },
				{ "MiddleMetacarpal.Name", "EPICOXRHandJoint::MiddleMetacarpal" },
				{ "MiddleProximal.Name", "EPICOXRHandJoint::MiddleProximal" },
				{ "MiddleTip.Name", "EPICOXRHandJoint::MiddleTip" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "Palm.Name", "EPICOXRHandJoint::Palm" },
				{ "RingDistal.Name", "EPICOXRHandJoint::RingDistal" },
				{ "RingIntermediate.Name", "EPICOXRHandJoint::RingIntermediate" },
				{ "RingMetacarpal.Name", "EPICOXRHandJoint::RingMetacarpal" },
				{ "RingProximal.Name", "EPICOXRHandJoint::RingProximal" },
				{ "RingTip.Name", "EPICOXRHandJoint::RingTip" },
				{ "ThumbDistal.Name", "EPICOXRHandJoint::ThumbDistal" },
				{ "ThumbMetacarpal.Name", "EPICOXRHandJoint::ThumbMetacarpal" },
				{ "ThumbProximal.Name", "EPICOXRHandJoint::ThumbProximal" },
				{ "ThumbTip.Name", "EPICOXRHandJoint::ThumbTip" },
				{ "Wrist.Name", "EPICOXRHandJoint::Wrist" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRHandJoint",
				"EPICOXRHandJoint",
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
	static UEnum* EPICOXRHandFinger_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRHandFinger, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRHandFinger"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRHandFinger>()
	{
		return EPICOXRHandFinger_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRHandFinger(EPICOXRHandFinger_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRHandFinger"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandFinger_Hash() { return 1359106234U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandFinger()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRHandFinger"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandFinger_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRHandFinger::None", (int64)EPICOXRHandFinger::None },
				{ "EPICOXRHandFinger::Index", (int64)EPICOXRHandFinger::Index },
				{ "EPICOXRHandFinger::Middle", (int64)EPICOXRHandFinger::Middle },
				{ "EPICOXRHandFinger::Ring", (int64)EPICOXRHandFinger::Ring },
				{ "EPICOXRHandFinger::Pinky", (int64)EPICOXRHandFinger::Pinky },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Index.Name", "EPICOXRHandFinger::Index" },
				{ "Middle.Name", "EPICOXRHandFinger::Middle" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "None.Name", "EPICOXRHandFinger::None" },
				{ "Pinky.Name", "EPICOXRHandFinger::Pinky" },
				{ "Ring.Name", "EPICOXRHandFinger::Ring" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRHandFinger",
				"EPICOXRHandFinger",
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
	static UEnum* EPICOXRActiveInputDevice_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRActiveInputDevice, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRActiveInputDevice"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRActiveInputDevice>()
	{
		return EPICOXRActiveInputDevice_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRActiveInputDevice(EPICOXRActiveInputDevice_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRActiveInputDevice"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRActiveInputDevice_Hash() { return 342907113U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRActiveInputDevice()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRActiveInputDevice"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRActiveInputDevice_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRActiveInputDevice::NoneActive", (int64)EPICOXRActiveInputDevice::NoneActive },
				{ "EPICOXRActiveInputDevice::ControllerActive", (int64)EPICOXRActiveInputDevice::ControllerActive },
				{ "EPICOXRActiveInputDevice::HandTrackingActive", (int64)EPICOXRActiveInputDevice::HandTrackingActive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ControllerActive.Name", "EPICOXRActiveInputDevice::ControllerActive" },
				{ "HandTrackingActive.Name", "EPICOXRActiveInputDevice::HandTrackingActive" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "NoneActive.Name", "EPICOXRActiveInputDevice::NoneActive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRActiveInputDevice",
				"EPICOXRActiveInputDevice",
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
	static UEnum* EPICOXRHandTrackingConfidence_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRHandTrackingConfidence, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRHandTrackingConfidence"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRHandTrackingConfidence>()
	{
		return EPICOXRHandTrackingConfidence_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRHandTrackingConfidence(EPICOXRHandTrackingConfidence_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRHandTrackingConfidence"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandTrackingConfidence_Hash() { return 2861642777U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandTrackingConfidence()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRHandTrackingConfidence"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandTrackingConfidence_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRHandTrackingConfidence::Low", (int64)EPICOXRHandTrackingConfidence::Low },
				{ "EPICOXRHandTrackingConfidence::High", (int64)EPICOXRHandTrackingConfidence::High },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "High.Name", "EPICOXRHandTrackingConfidence::High" },
				{ "Low.Name", "EPICOXRHandTrackingConfidence::Low" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRHandTrackingConfidence",
				"EPICOXRHandTrackingConfidence",
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

static_assert(std::is_polymorphic<FPHFData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPHFData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPHFData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FPHFData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPHFData, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("PHFData"), sizeof(FPHFData), Get_Z_Construct_UScriptStruct_FPHFData_Hash());
	}
	return Singleton;
}
template<> PICOXRINPUT_API UScriptStruct* StaticStruct<FPHFData>()
{
	return FPHFData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPHFData(FPHFData::StaticStruct, TEXT("/Script/PICOXRInput"), TEXT("PHFData"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRInput_StaticRegisterNativesFPHFData
{
	FScriptStruct_PICOXRInput_StaticRegisterNativesFPHFData()
	{
		UScriptStruct::DeferCppStructOps<FPHFData>(FName(TEXT("PHFData")));
	}
} ScriptStruct_PICOXRInput_StaticRegisterNativesFPHFData;
	struct Z_Construct_UScriptStruct_FPHFData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PHFDataContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PHFDataContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPHFData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPHFData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFData_Statics::NewProp_PHFDataContent_MetaData[] = {
		{ "Category", "PXR|FPHFData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPHFData_Statics::NewProp_PHFDataContent = { "PHFDataContent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPHFData, PHFDataContent), Z_Construct_UScriptStruct_FPHFDataContent, METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFData_Statics::NewProp_PHFDataContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFData_Statics::NewProp_PHFDataContent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPHFData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFData_Statics::NewProp_PHFDataContent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPHFData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PHFData",
		sizeof(FPHFData),
		alignof(FPHFData),
		Z_Construct_UScriptStruct_FPHFData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPHFData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPHFData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PHFData"), sizeof(FPHFData), Get_Z_Construct_UScriptStruct_FPHFData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPHFData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPHFData_Hash() { return 1479117801U; }
class UScriptStruct* FPHFDataContent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FPHFDataContent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPHFDataContent, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("PHFDataContent"), sizeof(FPHFDataContent), Get_Z_Construct_UScriptStruct_FPHFDataContent_Hash());
	}
	return Singleton;
}
template<> PICOXRINPUT_API UScriptStruct* StaticStruct<FPHFDataContent>()
{
	return FPHFDataContent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPHFDataContent(FPHFDataContent::StaticStruct, TEXT("/Script/PICOXRInput"), TEXT("PHFDataContent"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRInput_StaticRegisterNativesFPHFDataContent
{
	FScriptStruct_PICOXRInput_StaticRegisterNativesFPHFDataContent()
	{
		UScriptStruct::DeferCppStructOps<FPHFDataContent>(FName(TEXT("PHFDataContent")));
	}
} ScriptStruct_PICOXRInput_StaticRegisterNativesFPHFDataContent;
	struct Z_Construct_UScriptStruct_FPHFDataContent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFDataContent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPHFDataContent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_data_MetaData[] = {
		{ "Category", "PXR|FPHFDataContent" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPHFDataContent, data), METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_size_MetaData[] = {
		{ "Category", "PXR|FPHFDataContent" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPHFDataContent, size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPHFDataContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_size,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPHFDataContent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
		nullptr,
		&NewStructOps,
		"PHFDataContent",
		sizeof(FPHFDataContent),
		alignof(FPHFDataContent),
		Z_Construct_UScriptStruct_FPHFDataContent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFDataContent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFDataContent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFDataContent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPHFDataContent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPHFDataContent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PHFDataContent"), sizeof(FPHFDataContent), Get_Z_Construct_UScriptStruct_FPHFDataContent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPHFDataContent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPHFDataContent_Hash() { return 2260452805U; }
class UScriptStruct* FAudioClipData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FAudioClipData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioClipData, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("AudioClipData"), sizeof(FAudioClipData), Get_Z_Construct_UScriptStruct_FAudioClipData_Hash());
	}
	return Singleton;
}
template<> PICOXRINPUT_API UScriptStruct* StaticStruct<FAudioClipData>()
{
	return FAudioClipData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioClipData(FAudioClipData::StaticStruct, TEXT("/Script/PICOXRInput"), TEXT("AudioClipData"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRInput_StaticRegisterNativesFAudioClipData
{
	FScriptStruct_PICOXRInput_StaticRegisterNativesFAudioClipData()
	{
		UScriptStruct::DeferCppStructOps<FAudioClipData>(FName(TEXT("AudioClipData")));
	}
} ScriptStruct_PICOXRInput_StaticRegisterNativesFAudioClipData;
	struct Z_Construct_UScriptStruct_FAudioClipData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delaytag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_delaytag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buffersize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buffersize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_channelMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bitrate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bitrate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioClipData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioClipData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_delaytag_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_delaytag = { "delaytag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, delaytag), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_delaytag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_delaytag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_slot_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, slot), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_buffersize_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_buffersize = { "buffersize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, buffersize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_buffersize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_buffersize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_sampleRate_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_sampleRate = { "sampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, sampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_sampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_sampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_channelMask_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_channelMask = { "channelMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, channelMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_channelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_channelMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_bitrate_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_bitrate = { "bitrate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, bitrate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_bitrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_bitrate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioClipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_delaytag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_buffersize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_sampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_channelMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_bitrate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioClipData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
		nullptr,
		&NewStructOps,
		"AudioClipData",
		sizeof(FAudioClipData),
		alignof(FAudioClipData),
		Z_Construct_UScriptStruct_FAudioClipData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioClipData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioClipData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioClipData"), sizeof(FAudioClipData), Get_Z_Construct_UScriptStruct_FAudioClipData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAudioClipData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioClipData_Hash() { return 2679371988U; }
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_UpdateVibrateParams)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceID);
		P_GET_ENUM(EPICOXRVibrateController,Z_Param_slot);
		P_GET_ENUM(EPICOXRChannelFlip,Z_Param_slotConfig);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AmpValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_UpdateVibrateParams(Z_Param_SourceID,EPICOXRVibrateController(Z_Param_slot),EPICOXRChannelFlip(Z_Param_slotConfig),Z_Param_AmpValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_ResumeVibrate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_ResumeVibrate(Z_Param_SourceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_PauseVibrate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_PauseVibrate(Z_Param_SourceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_StartVibrateByPHF)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_DataName);
		P_GET_ENUM(EPICOXRVibrateController,Z_Param_slot);
		P_GET_ENUM(EPICOXRChannelFlip,Z_Param_slotConfig);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ampValue);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SourceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_StartVibrateByPHF(Z_Param_DataName,EPICOXRVibrateController(Z_Param_slot),EPICOXRChannelFlip(Z_Param_slotConfig),Z_Param_ampValue,Z_Param_Out_SourceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetActiveInputDevice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPICOXRActiveInputDevice*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetActiveInputDevice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetFingerPinchStrength)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EPICOXRHandFinger,Z_Param_Finger);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetFingerPinchStrength(EPICOXRHandType(Z_Param_DeviceHand),EPICOXRHandFinger(Z_Param_Finger));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetFingerIsPinching)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EPICOXRHandFinger,Z_Param_Finger);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetFingerIsPinching(EPICOXRHandType(Z_Param_DeviceHand),EPICOXRHandFinger(Z_Param_Finger));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetDominantHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPICOXRHandType*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetDominantHand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsHandTrackingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsHandTrackingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetClickStrength)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetClickStrength(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetHandScale)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetHandScale(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetTrackingConfidence)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPICOXRHandTrackingConfidence*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetTrackingConfidence(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsMenuPressed)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsMenuPressed(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsDominantHand)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsDominantHand(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsSystemGestureInProgress)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsSystemGestureInProgress(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsAimRayTouchedValid)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsAimRayTouchedValid(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsAimValid)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsAimValid(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsHandTracked)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsHandTracked(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetPointerPose)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetPointerPose(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetHandRootPose)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetHandRootPose(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsBonePositionTracked)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EPICOXRHandJoint,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsBonePositionTracked(EPICOXRHandType(Z_Param_DeviceHand),EPICOXRHandJoint(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsBoneOrientationTracked)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EPICOXRHandJoint,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsBoneOrientationTracked(EPICOXRHandType(Z_Param_DeviceHand),EPICOXRHandJoint(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsBonePositionValid)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EPICOXRHandJoint,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsBonePositionValid(EPICOXRHandType(Z_Param_DeviceHand),EPICOXRHandJoint(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsBoneOrientationValid)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EPICOXRHandJoint,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsBoneOrientationValid(EPICOXRHandType(Z_Param_DeviceHand),EPICOXRHandJoint(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetBoneRadii)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EPICOXRHandJoint,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetBoneRadii(EPICOXRHandType(Z_Param_DeviceHand),EPICOXRHandJoint(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetBoneLocation)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EPICOXRHandJoint,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetBoneLocation(EPICOXRHandType(Z_Param_DeviceHand),EPICOXRHandJoint(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetBoneRotation)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EPICOXRHandJoint,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetBoneRotation(EPICOXRHandType(Z_Param_DeviceHand),EPICOXRHandJoint(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_ClearVibrateByCache)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_ClearVibrateByCache(Z_Param_SourceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_StartVibrateByCache)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_StartVibrateByCache(Z_Param_SourceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SaveVibrateByCache)
	{
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWave);
		P_GET_ENUM(EPICOXRVibrateController,Z_Param_slot);
		P_GET_ENUM(EPICOXRChannelFlip,Z_Param_slotConfig);
		P_GET_ENUM(EPICOXRCacheConfig,Z_Param_enableV);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SourceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_SaveVibrateByCache(Z_Param_InSoundWave,EPICOXRVibrateController(Z_Param_slot),EPICOXRChannelFlip(Z_Param_slotConfig),EPICOXRCacheConfig(Z_Param_enableV),Z_Param_Out_SourceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetControllerEnableKey)
	{
		P_GET_UBOOL(Z_Param_isEnable);
		P_GET_ENUM(EPxrControllerKeyMap,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_SetControllerEnableKey(Z_Param_isEnable,EPxrControllerKeyMap(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_StartVibrateBySharem)
	{
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWave);
		P_GET_ENUM(EPICOXRVibrateController,Z_Param_slot);
		P_GET_ENUM(EPICOXRChannelFlip,Z_Param_slotConfig);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SourceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_StartVibrateBySharem(Z_Param_InSoundWave,EPICOXRVibrateController(Z_Param_slot),EPICOXRChannelFlip(Z_Param_slotConfig),Z_Param_Out_SourceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetControllerVibrationEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_frequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_strength);
		P_GET_PROPERTY(FIntProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_SetControllerVibrationEvent(Z_Param_deviceID,Z_Param_frequency,Z_Param_strength,Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_StopControllerVCMotor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_clientId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_StopControllerVCMotor(Z_Param_clientId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetControllerAmp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_SetControllerAmp(Z_Param_mode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_StartControllerVCMotor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_GET_ENUM(EPICOXRVibrateController,Z_Param_slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_StartControllerVCMotor(Z_Param_file,EPICOXRVibrateController(Z_Param_slot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerPredictedLocationAndRotation)
	{
		P_GET_ENUM(EControllerHand,Z_Param_DeviceHand);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PredictedTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetControllerPredictedLocationAndRotation(EControllerHand(Z_Param_DeviceHand),Z_Param_PredictedTime,Z_Param_Out_OutLocation,Z_Param_Out_OutRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetControllerOriginOffset)
	{
		P_GET_ENUM(EPICOXRControllerType,Z_Param_Controller);
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRInputFunctionLibrary::PXR_SetControllerOriginOffset(EPICOXRControllerType(Z_Param_Controller),Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerEnableHomekey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetControllerEnableHomekey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetHandedness)
	{
		P_GET_ENUM_REF(EPICOXRHandedness,Z_Param_Out_Handedness);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetHandedness((EPICOXRHandedness&)(Z_Param_Out_Handedness));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerArmModelParam)
	{
		P_GET_ENUM(EPICOXRControllerType,Z_Param_Controller);
		P_GET_ENUM_REF(EPICOXRHandedness,Z_Param_Out_Handness);
		P_GET_ENUM_REF(EPICOXRArmModelJoint,Z_Param_Out_ArmJoint);
		P_GET_ENUM_REF(EPICOXRGazeBehavior,Z_Param_Out_GazeType);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ElbowHeight);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ElbowDepth);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PointerTiltAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRInputFunctionLibrary::PXR_GetControllerArmModelParam(EPICOXRControllerType(Z_Param_Controller),(EPICOXRHandedness&)(Z_Param_Out_Handness),(EPICOXRArmModelJoint&)(Z_Param_Out_ArmJoint),(EPICOXRGazeBehavior&)(Z_Param_Out_GazeType),Z_Param_Out_ElbowHeight,Z_Param_Out_ElbowDepth,Z_Param_Out_PointerTiltAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetControllerArmModelParam)
	{
		P_GET_ENUM(EPICOXRControllerType,Z_Param_Controller);
		P_GET_ENUM(EPICOXRHandedness,Z_Param_Handness);
		P_GET_ENUM(EPICOXRArmModelJoint,Z_Param_ArmJoint);
		P_GET_ENUM(EPICOXRGazeBehavior,Z_Param_GazeType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ElbowHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ElbowDepth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PointerTiltAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRInputFunctionLibrary::PXR_SetControllerArmModelParam(EPICOXRControllerType(Z_Param_Controller),EPICOXRHandedness(Z_Param_Handness),EPICOXRArmModelJoint(Z_Param_ArmJoint),EPICOXRGazeBehavior(Z_Param_GazeType),Z_Param_ElbowHeight,Z_Param_ElbowDepth,Z_Param_PointerTiltAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerDeviceType)
	{
		P_GET_ENUM_REF(EPICOXRControllerDeviceType,Z_Param_Out_ControllerType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRInputFunctionLibrary::PXR_GetControllerDeviceType((EPICOXRControllerDeviceType&)(Z_Param_Out_ControllerType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_VibrateController)
	{
		P_GET_ENUM(EPICOXRControllerType,Z_Param_ControllerType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_PROPERTY(FIntProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_VibrateController(EPICOXRControllerType(Z_Param_ControllerType),Z_Param_Strength,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerLinearVelocity)
	{
		P_GET_ENUM(EPICOXRControllerType,Z_Param_ControllerType);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetControllerLinearVelocity(EPICOXRControllerType(Z_Param_ControllerType),Z_Param_Out_LinearVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerAcceleration)
	{
		P_GET_ENUM(EPICOXRControllerType,Z_Param_ControllerType);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Acceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetControllerAcceleration(EPICOXRControllerType(Z_Param_ControllerType),Z_Param_Out_Acceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerAngularVelocity)
	{
		P_GET_ENUM(EPICOXRControllerType,Z_Param_ControllerType);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetControllerAngularVelocity(EPICOXRControllerType(Z_Param_ControllerType),Z_Param_Out_AngularVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetMainControllerHandle)
	{
		P_GET_ENUM(EPICOXRHandedness,Z_Param_Handedness);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_SetMainControllerHandle(EPICOXRHandedness(Z_Param_Handedness));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetMainControllerHandle)
	{
		P_GET_ENUM_REF(EPICOXRHandedness,Z_Param_Out_Handedness);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetMainControllerHandle((EPICOXRHandedness&)(Z_Param_Out_Handedness));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerConnectionState)
	{
		P_GET_ENUM(EPICOXRControllerType,Z_Param_ControllerType);
		P_GET_UBOOL_REF(Z_Param_Out_Status);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetControllerConnectionState(EPICOXRControllerType(Z_Param_ControllerType),Z_Param_Out_Status);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerPower)
	{
		P_GET_ENUM(EPICOXRControllerType,Z_Param_ControllerType);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Power);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetControllerPower(EPICOXRControllerType(Z_Param_ControllerType),Z_Param_Out_Power);
		P_NATIVE_END;
	}
	void UPICOXRInputFunctionLibrary::StaticRegisterNativesUPICOXRInputFunctionLibrary()
	{
		UClass* Class = UPICOXRInputFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveInputDevice", &UPICOXRInputFunctionLibrary::execGetActiveInputDevice },
			{ "GetBoneLocation", &UPICOXRInputFunctionLibrary::execGetBoneLocation },
			{ "GetBoneRadii", &UPICOXRInputFunctionLibrary::execGetBoneRadii },
			{ "GetBoneRotation", &UPICOXRInputFunctionLibrary::execGetBoneRotation },
			{ "GetClickStrength", &UPICOXRInputFunctionLibrary::execGetClickStrength },
			{ "GetDominantHand", &UPICOXRInputFunctionLibrary::execGetDominantHand },
			{ "GetFingerIsPinching", &UPICOXRInputFunctionLibrary::execGetFingerIsPinching },
			{ "GetFingerPinchStrength", &UPICOXRInputFunctionLibrary::execGetFingerPinchStrength },
			{ "GetHandRootPose", &UPICOXRInputFunctionLibrary::execGetHandRootPose },
			{ "GetHandScale", &UPICOXRInputFunctionLibrary::execGetHandScale },
			{ "GetPointerPose", &UPICOXRInputFunctionLibrary::execGetPointerPose },
			{ "GetTrackingConfidence", &UPICOXRInputFunctionLibrary::execGetTrackingConfidence },
			{ "IsAimRayTouchedValid", &UPICOXRInputFunctionLibrary::execIsAimRayTouchedValid },
			{ "IsAimValid", &UPICOXRInputFunctionLibrary::execIsAimValid },
			{ "IsBoneOrientationTracked", &UPICOXRInputFunctionLibrary::execIsBoneOrientationTracked },
			{ "IsBoneOrientationValid", &UPICOXRInputFunctionLibrary::execIsBoneOrientationValid },
			{ "IsBonePositionTracked", &UPICOXRInputFunctionLibrary::execIsBonePositionTracked },
			{ "IsBonePositionValid", &UPICOXRInputFunctionLibrary::execIsBonePositionValid },
			{ "IsDominantHand", &UPICOXRInputFunctionLibrary::execIsDominantHand },
			{ "IsHandTracked", &UPICOXRInputFunctionLibrary::execIsHandTracked },
			{ "IsHandTrackingEnabled", &UPICOXRInputFunctionLibrary::execIsHandTrackingEnabled },
			{ "IsMenuPressed", &UPICOXRInputFunctionLibrary::execIsMenuPressed },
			{ "IsSystemGestureInProgress", &UPICOXRInputFunctionLibrary::execIsSystemGestureInProgress },
			{ "PXR_ClearVibrateByCache", &UPICOXRInputFunctionLibrary::execPXR_ClearVibrateByCache },
			{ "PXR_GetControllerAcceleration", &UPICOXRInputFunctionLibrary::execPXR_GetControllerAcceleration },
			{ "PXR_GetControllerAngularVelocity", &UPICOXRInputFunctionLibrary::execPXR_GetControllerAngularVelocity },
			{ "PXR_GetControllerArmModelParam", &UPICOXRInputFunctionLibrary::execPXR_GetControllerArmModelParam },
			{ "PXR_GetControllerConnectionState", &UPICOXRInputFunctionLibrary::execPXR_GetControllerConnectionState },
			{ "PXR_GetControllerDeviceType", &UPICOXRInputFunctionLibrary::execPXR_GetControllerDeviceType },
			{ "PXR_GetControllerEnableHomekey", &UPICOXRInputFunctionLibrary::execPXR_GetControllerEnableHomekey },
			{ "PXR_GetControllerLinearVelocity", &UPICOXRInputFunctionLibrary::execPXR_GetControllerLinearVelocity },
			{ "PXR_GetControllerPower", &UPICOXRInputFunctionLibrary::execPXR_GetControllerPower },
			{ "PXR_GetControllerPredictedLocationAndRotation", &UPICOXRInputFunctionLibrary::execPXR_GetControllerPredictedLocationAndRotation },
			{ "PXR_GetHandedness", &UPICOXRInputFunctionLibrary::execPXR_GetHandedness },
			{ "PXR_GetMainControllerHandle", &UPICOXRInputFunctionLibrary::execPXR_GetMainControllerHandle },
			{ "PXR_PauseVibrate", &UPICOXRInputFunctionLibrary::execPXR_PauseVibrate },
			{ "PXR_ResumeVibrate", &UPICOXRInputFunctionLibrary::execPXR_ResumeVibrate },
			{ "PXR_SaveVibrateByCache", &UPICOXRInputFunctionLibrary::execPXR_SaveVibrateByCache },
			{ "PXR_SetControllerAmp", &UPICOXRInputFunctionLibrary::execPXR_SetControllerAmp },
			{ "PXR_SetControllerArmModelParam", &UPICOXRInputFunctionLibrary::execPXR_SetControllerArmModelParam },
			{ "PXR_SetControllerEnableKey", &UPICOXRInputFunctionLibrary::execPXR_SetControllerEnableKey },
			{ "PXR_SetControllerOriginOffset", &UPICOXRInputFunctionLibrary::execPXR_SetControllerOriginOffset },
			{ "PXR_SetControllerVibrationEvent", &UPICOXRInputFunctionLibrary::execPXR_SetControllerVibrationEvent },
			{ "PXR_SetMainControllerHandle", &UPICOXRInputFunctionLibrary::execPXR_SetMainControllerHandle },
			{ "PXR_StartControllerVCMotor", &UPICOXRInputFunctionLibrary::execPXR_StartControllerVCMotor },
			{ "PXR_StartVibrateByCache", &UPICOXRInputFunctionLibrary::execPXR_StartVibrateByCache },
			{ "PXR_StartVibrateByPHF", &UPICOXRInputFunctionLibrary::execPXR_StartVibrateByPHF },
			{ "PXR_StartVibrateBySharem", &UPICOXRInputFunctionLibrary::execPXR_StartVibrateBySharem },
			{ "PXR_StopControllerVCMotor", &UPICOXRInputFunctionLibrary::execPXR_StopControllerVCMotor },
			{ "PXR_UpdateVibrateParams", &UPICOXRInputFunctionLibrary::execPXR_UpdateVibrateParams },
			{ "PXR_VibrateController", &UPICOXRInputFunctionLibrary::execPXR_VibrateController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetActiveInputDevice_Parms
		{
			EPICOXRActiveInputDevice ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetActiveInputDevice_Parms, ReturnValue), Z_Construct_UEnum_PICOXRInput_EPICOXRActiveInputDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n     * Get the active input device\n     */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the active input device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetActiveInputDevice", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetActiveInputDevice_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetBoneLocation_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandJoint Key;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneLocation_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneLocation_Parms, Key), Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the BoneLocation\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the Bone Location from\n\x09 * @param Key                       (in) The HandJoint to get the Bone Location from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the BoneLocation\n\n@param DeviceHand                            (in) The hand to get the Bone Location from\n@param Key                       (in) The HandJoint to get the Bone Location from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetBoneLocation", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetBoneLocation_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetBoneRadii_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandJoint Key;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneRadii_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneRadii_Parms, Key), Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneRadii_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the BoneRadii\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the Bone Radii from\n\x09 * @param Key                       (in) The HandJoint to get the Bone Radii from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the BoneRadii\n\n@param DeviceHand                            (in) The hand to get the Bone Radii from\n@param Key                       (in) The HandJoint to get the Bone Radii from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetBoneRadii", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetBoneRadii_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetBoneRotation_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandJoint Key;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneRotation_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneRotation_Parms, Key), Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the BoneRotation\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the Bone Rotation from\n\x09 * @param Key                       (in) The HandJoint to get the Bone Rotation from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the BoneRotation\n\n@param DeviceHand                            (in) The hand to get the Bone Rotation from\n@param Key                       (in) The HandJoint to get the Bone Rotation from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetBoneRotation", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetBoneRotation_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetClickStrength_Parms
		{
			EPICOXRHandType DeviceHand;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetClickStrength_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetClickStrength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the click strength of the hand\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get click strength of\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the click strength of the hand\n\n@param DeviceHand                            (in) The hand to get click strength of" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetClickStrength", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetClickStrength_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetDominantHand_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetDominantHand_Parms
		{
			EPICOXRHandType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetDominantHand_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetDominantHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetDominantHand_Parms, ReturnValue), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetDominantHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetDominantHand_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetDominantHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetDominantHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n     * Get the user's dominant hand\n     *\n    */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the user's dominant hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetDominantHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetDominantHand", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetDominantHand_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetDominantHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetDominantHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetDominantHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetDominantHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetDominantHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetDominantHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetFingerIsPinching_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandFinger Finger;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Finger_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finger_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Finger;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetFingerIsPinching_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_Finger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_Finger_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetFingerIsPinching_Parms, Finger), Z_Construct_UEnum_PICOXRInput_EPICOXRHandFinger, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_Finger_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_Finger_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventGetFingerIsPinching_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventGetFingerIsPinching_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_Finger_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_Finger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the specific finger is pinching\n\x09 *\n\x09 * @param DeviceHand          (in) The hand to get the IsPinching status from\n\x09 * @param Finger              (in) The Finger to get the IsPinching status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the specific finger is pinching\n\n@param DeviceHand          (in) The hand to get the IsPinching status from\n@param Finger              (in) The Finger to get the IsPinching status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetFingerIsPinching", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetFingerIsPinching_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetFingerPinchStrength_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandFinger Finger;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Finger_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finger_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Finger;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetFingerPinchStrength_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_Finger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_Finger_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetFingerPinchStrength_Parms, Finger), Z_Construct_UEnum_PICOXRInput_EPICOXRHandFinger, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_Finger_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_Finger_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetFingerPinchStrength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_Finger_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_Finger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get finger pinch strength of the specific finger\n\x09 *\n\x09 * @param DeviceHand          (in) The hand to get the IsPinching Strength from\n\x09 * @param Finger              (in) The Finger to get the IsPinching Strength from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get finger pinch strength of the specific finger\n\n@param DeviceHand          (in) The hand to get the IsPinching Strength from\n@param Finger              (in) The Finger to get the IsPinching Strength from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetFingerPinchStrength", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetFingerPinchStrength_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetHandRootPose_Parms
		{
			EPICOXRHandType DeviceHand;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetHandRootPose_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetHandRootPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the RootPose\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the RootPose from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the RootPose\n\n@param DeviceHand                            (in) The hand to get the RootPose from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetHandRootPose", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetHandRootPose_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetHandScale_Parms
		{
			EPICOXRHandType DeviceHand;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetHandScale_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetHandScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the scale of the hand\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get scale of\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the scale of the hand\n\n@param DeviceHand                            (in) The hand to get scale of" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetHandScale", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetHandScale_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetPointerPose_Parms
		{
			EPICOXRHandType DeviceHand;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetPointerPose_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetPointerPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the pointer pose\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the pointer pose from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the pointer pose\n\n@param DeviceHand                            (in) The hand to get the pointer pose from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetPointerPose", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetPointerPose_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetTrackingConfidence_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandTrackingConfidence ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetTrackingConfidence_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetTrackingConfidence_Parms, ReturnValue), Z_Construct_UEnum_PICOXRInput_EPICOXRHandTrackingConfidence, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the tracking confidence of the hand\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get tracking confidence of\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the tracking confidence of the hand\n\n@param DeviceHand                            (in) The hand to get tracking confidence of" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetTrackingConfidence", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetTrackingConfidence_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsAimRayTouchedValid_Parms
		{
			EPICOXRHandType DeviceHand;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsAimRayTouchedValid_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::NewProp_DeviceHand_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsAimRayTouchedValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsAimRayTouchedValid_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the AimRayTouched is valid\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the ray status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the AimRayTouched is valid\n\n@param DeviceHand                            (in) The hand to get the ray status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsAimRayTouchedValid", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsAimRayTouchedValid_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsAimValid_Parms
		{
			EPICOXRHandType DeviceHand;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsAimValid_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::NewProp_DeviceHand_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsAimValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsAimValid_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the Aim state is valid\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the Aim state from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the Aim state is valid\n\n@param DeviceHand                            (in) The hand to get the Aim state from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsAimValid", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsAimValid_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandJoint Key;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms, Key), Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the specific HandJoint is Bone Orientation Tracked\n\x09 *\n\x09 * @param DeviceHand          (in) The hand to get the Orientation Tracked status from\n\x09 * @param Key              (in) The HandJoint to get the Orientation Tracked status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the specific HandJoint is Bone Orientation Tracked\n\n@param DeviceHand          (in) The hand to get the Orientation Tracked status from\n@param Key              (in) The HandJoint to get the Orientation Tracked status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsBoneOrientationTracked", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandJoint Key;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms, Key), Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the specific HandJoint is Bone Orientation Valid\n\x09 *\n\x09 * @param DeviceHand          (in) The hand to get the Orientation Valid status from\n\x09 * @param Key              (in) The HandJoint to get the Orientation Valid status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the specific HandJoint is Bone Orientation Valid\n\n@param DeviceHand          (in) The hand to get the Orientation Valid status from\n@param Key              (in) The HandJoint to get the Orientation Valid status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsBoneOrientationValid", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsBonePositionTracked_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandJoint Key;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsBonePositionTracked_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsBonePositionTracked_Parms, Key), Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsBonePositionTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsBonePositionTracked_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the specific HandJoint is Bone Position Tracked\n\x09 *\n\x09 * @param DeviceHand          (in) The hand to get the Position Tracked status from\n\x09 * @param Key              (in) The HandJoint to get the Position Tracked status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the specific HandJoint is Bone Position Tracked\n\n@param DeviceHand          (in) The hand to get the Position Tracked status from\n@param Key              (in) The HandJoint to get the Position Tracked status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsBonePositionTracked", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsBonePositionTracked_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsBonePositionValid_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandJoint Key;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsBonePositionValid_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsBonePositionValid_Parms, Key), Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsBonePositionValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsBonePositionValid_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the specific HandJoint is Bone Position Valid\n\x09 *\n\x09 * @param DeviceHand          (in) The hand to get the Position Valid status from\n\x09 * @param Key              (in) The HandJoint to get the Position Valid status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the specific HandJoint is Bone Position Valid\n\n@param DeviceHand          (in) The hand to get the Position Valid status from\n@param Key              (in) The HandJoint to get the Position Valid status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsBonePositionValid", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsBonePositionValid_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsDominantHand_Parms
		{
			EPICOXRHandType DeviceHand;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsDominantHand_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsDominantHand_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsDominantHand_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the hand is dominant\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the hand status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the hand is dominant\n\n@param DeviceHand                            (in) The hand to get the hand status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsDominantHand", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsDominantHand_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsHandTracked_Parms
		{
			EPICOXRHandType DeviceHand;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsHandTracked_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_DeviceHand_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsHandTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsHandTracked_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the hand is tracked\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the hand status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the hand is tracked\n\n@param DeviceHand                            (in) The hand to get the hand status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsHandTracked", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsHandTracked_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms
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
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if hand tracking is enabled currently\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if hand tracking is enabled currently" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsHandTrackingEnabled", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsMenuPressed_Parms
		{
			EPICOXRHandType DeviceHand;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsMenuPressed_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsMenuPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsMenuPressed_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the menu pressed\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the menu status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the menu pressed\n\n@param DeviceHand                            (in) The hand to get the menu status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsMenuPressed", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsMenuPressed_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsSystemGestureInProgress_Parms
		{
			EPICOXRHandType DeviceHand;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsSystemGestureInProgress_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_DeviceHand_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsSystemGestureInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsSystemGestureInProgress_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the system gesture is in progress\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the SystemGesture status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the system gesture is in progress\n\n@param DeviceHand                            (in) The hand to get the SystemGesture status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsSystemGestureInProgress", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsSystemGestureInProgress_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_ClearVibrateByCache_Parms
		{
			int32 SourceId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::NewProp_SourceId = { "SourceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_ClearVibrateByCache_Parms, SourceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_ClearVibrateByCache_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::NewProp_SourceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_ClearVibrateByCache", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_ClearVibrateByCache_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms
		{
			EPICOXRControllerType ControllerType;
			FVector Acceleration;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Acceleration;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms, ControllerType), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_Acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get controller acceleration.\n\x09* @param ControllerType    (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param Acceleration     (Out) Controller acceleration.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get controller acceleration.\n@param ControllerType    (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param Acceleration     (Out) Controller acceleration." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerAcceleration", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms
		{
			EPICOXRControllerType ControllerType;
			FVector AngularVelocity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms, ControllerType), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get controller angular velocity.\n\x09* @param ControllerType     (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param AngularVelocity   (Out) Controller angular velocity.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get controller angular velocity.\n@param ControllerType     (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param AngularVelocity   (Out) Controller angular velocity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerAngularVelocity", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms
		{
			EPICOXRControllerType Controller;
			EPICOXRHandedness Handness;
			EPICOXRArmModelJoint ArmJoint;
			EPICOXRGazeBehavior GazeType;
			float ElbowHeight;
			float ElbowDepth;
			float PointerTiltAngle;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Controller_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Handness_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Handness;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ArmJoint_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ArmJoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GazeType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GazeType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElbowHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElbowDepth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointerTiltAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_Controller_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms, Controller), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_Handness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_Handness = { "Handness", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms, Handness), Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_ArmJoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_ArmJoint = { "ArmJoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms, ArmJoint), Z_Construct_UEnum_PICOXRInput_EPICOXRArmModelJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_GazeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_GazeType = { "GazeType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms, GazeType), Z_Construct_UEnum_PICOXRInput_EPICOXRGazeBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_ElbowHeight = { "ElbowHeight", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms, ElbowHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_ElbowDepth = { "ElbowDepth", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms, ElbowDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_PointerTiltAngle = { "PointerTiltAngle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms, PointerTiltAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_Controller_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_Handness_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_Handness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_ArmJoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_ArmJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_GazeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_GazeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_ElbowHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_ElbowDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_PointerTiltAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Set controller arm model parameter.\n\x09* @param Controller         (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param Handness          (Out) Determines if the controller is in the left hand or right hand.\n\x09* @param ArmJoint          (Out) The arm joint(Controller/Wrist/Elbow/Shoulder).\n\x09* @param GazeType          (Out) The gaze type(Never/DuringMotion/Always).\n\x09* @param ElbowHeight       (Out) The Height of the elbow..\n\x09* @param ElbowDepth        (Out) The Depth of the elbow.\n\x09* @param PointerTiltAngle  (Out) The Downward tilt or pitch of the laser pointer relative to the controller (degrees).\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Set controller arm model parameter.\n@param Controller         (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param Handness          (Out) Determines if the controller is in the left hand or right hand.\n@param ArmJoint          (Out) The arm joint(Controller/Wrist/Elbow/Shoulder).\n@param GazeType          (Out) The gaze type(Never/DuringMotion/Always).\n@param ElbowHeight       (Out) The Height of the elbow..\n@param ElbowDepth        (Out) The Depth of the elbow.\n@param PointerTiltAngle  (Out) The Downward tilt or pitch of the laser pointer relative to the controller (degrees)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerArmModelParam", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms
		{
			EPICOXRControllerType ControllerType;
			bool Status;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static void NewProp_Status_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Status;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms, ControllerType), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_Status_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms*)Obj)->Status = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_Status_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get controller connect state.\n\x09* @param ControllerType   (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param Status          (Out) Connect state,true:Connected,false:DisConnected.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get controller connect state.\n@param ControllerType   (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param Status          (Out) Connect state,true:Connected,false:DisConnected." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerConnectionState", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerDeviceType_Parms
		{
			EPICOXRControllerDeviceType ControllerType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerDeviceType_Parms, ControllerType), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::NewProp_ControllerType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get the controller type.\n\x09* @param ControllerType    (Out) The controller type(G2 /Neo).\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the controller type.\n@param ControllerType    (Out) The controller type(G2 /Neo)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerDeviceType", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerDeviceType_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerEnableHomekey_Parms
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
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetControllerEnableHomekey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerEnableHomekey_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get controller enable homeKey.\n\x09* @return True if home key enable.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get controller enable homeKey.\n@return True if home key enable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerEnableHomekey", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerEnableHomekey_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms
		{
			EPICOXRControllerType ControllerType;
			FVector LinearVelocity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms, ControllerType), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_LinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get controller linear velocity.\n\x09* @param ControllerType     (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param LinearVelocity    (Out) Controller linear velocity.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get controller linear velocity.\n@param ControllerType     (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param LinearVelocity    (Out) Controller linear velocity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerLinearVelocity", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms
		{
			EPICOXRControllerType ControllerType;
			int32 Power;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Power;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms, ControllerType), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms, Power), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_Power,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get controller power.\n\x09* @param ControllerType   (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param Power           (Out) The power of controller.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get controller power.\n@param ControllerType   (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param Power           (Out) The power of controller." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerPower", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms
		{
			EControllerHand DeviceHand;
			float PredictedTime;
			FVector OutLocation;
			FRotator OutRotation;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PredictedTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRotation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms, DeviceHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_PredictedTime = { "PredictedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms, PredictedTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_OutLocation = { "OutLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms, OutLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_PredictedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_OutLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_OutRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get controller location and rotation with predicted time.\n\x09* @param DeviceHand      (In) Select the left or right handle.\n\x09* @param PredictedTime   (In) Prediction time (ms).\n\x09* @param OutLocation    (Out) Location with predicted time.\n\x09* @param OutRotation    (Out) Rotation with predicted time.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get controller location and rotation with predicted time.\n@param DeviceHand      (In) Select the left or right handle.\n@param PredictedTime   (In) Prediction time (ms).\n@param OutLocation    (Out) Location with predicted time.\n@param OutRotation    (Out) Rotation with predicted time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerPredictedLocationAndRotation", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetHandedness_Parms
		{
			EPICOXRHandedness Handedness;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Handedness;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetHandedness_Parms, Handedness), Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetHandedness_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetHandedness_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_Handedness_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_Handedness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get handedness.\n\x09* @param  Handedness        (Out) Handedness.\n\x09* @return True if get succeed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get handedness.\n@param  Handedness        (Out) Handedness.\n@return True if get succeed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetHandedness", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetHandedness_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetMainControllerHandle_Parms
		{
			EPICOXRHandedness Handedness;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Handedness;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetMainControllerHandle_Parms, Handedness), Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetMainControllerHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetMainControllerHandle_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_Handedness_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_Handedness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get the main controller.\n\x09* @param Handedness     (Out) Main handedness(Neo LeftController/Neo RightController).\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the main controller.\n@param Handedness     (Out) Main handedness(Neo LeftController/Neo RightController)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetMainControllerHandle", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetMainControllerHandle_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_PauseVibrate_Parms
		{
			int32 SourceID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_PauseVibrate_Parms, SourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_PauseVibrate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::NewProp_SourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Pause vibrate.\n\x09* @param SourceID\x09\x09(In)  SourceID got by PXR_StartVibrateByPHF.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Pause vibrate.\n@param SourceID               (In)  SourceID got by PXR_StartVibrateByPHF." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_PauseVibrate", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_PauseVibrate_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_ResumeVibrate_Parms
		{
			int32 SourceID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_ResumeVibrate_Parms, SourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_ResumeVibrate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::NewProp_SourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Resume vibrate.\n\x09* @param SourceID\x09\x09(In)  SourceID got by PXR_StartVibrateByPHF.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Resume vibrate.\n@param SourceID               (In)  SourceID got by PXR_StartVibrateByPHF." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_ResumeVibrate", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_ResumeVibrate_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SaveVibrateByCache_Parms
		{
			USoundWave* InSoundWave;
			EPICOXRVibrateController slot;
			EPICOXRChannelFlip slotConfig;
			EPICOXRCacheConfig enableV;
			int32 SourceId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundWave;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotConfig_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slotConfig;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_enableV_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_enableV;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_InSoundWave = { "InSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SaveVibrateByCache_Parms, InSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SaveVibrateByCache_Parms, slot), Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_slotConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_slotConfig = { "slotConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SaveVibrateByCache_Parms, slotConfig), Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_enableV_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_enableV = { "enableV", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SaveVibrateByCache_Parms, enableV), Z_Construct_UEnum_PICOXRInput_EPICOXRCacheConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_SourceId = { "SourceId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SaveVibrateByCache_Parms, SourceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SaveVibrateByCache_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_InSoundWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_slotConfig_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_slotConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_enableV_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_enableV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_SourceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SaveVibrateByCache", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SaveVibrateByCache_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetControllerAmp_Parms
		{
			float mode;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mode;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerAmp_Parms, mode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerAmp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::NewProp_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetControllerAmp", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetControllerAmp_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms
		{
			EPICOXRControllerType Controller;
			EPICOXRHandedness Handness;
			EPICOXRArmModelJoint ArmJoint;
			EPICOXRGazeBehavior GazeType;
			float ElbowHeight;
			float ElbowDepth;
			float PointerTiltAngle;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Controller_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Handness_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Handness;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ArmJoint_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ArmJoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GazeType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GazeType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElbowHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElbowDepth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointerTiltAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_Controller_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms, Controller), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_Handness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_Handness = { "Handness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms, Handness), Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_ArmJoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_ArmJoint = { "ArmJoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms, ArmJoint), Z_Construct_UEnum_PICOXRInput_EPICOXRArmModelJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_GazeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_GazeType = { "GazeType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms, GazeType), Z_Construct_UEnum_PICOXRInput_EPICOXRGazeBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_ElbowHeight = { "ElbowHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms, ElbowHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_ElbowDepth = { "ElbowDepth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms, ElbowDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_PointerTiltAngle = { "PointerTiltAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms, PointerTiltAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_Controller_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_Handness_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_Handness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_ArmJoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_ArmJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_GazeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_GazeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_ElbowHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_ElbowDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_PointerTiltAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::Function_MetaDataParams[] = {
		{ "ArmJoint", "Controller" },
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Set controller arm model parameter.\n\x09* @param Controller        (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param Handness          (In) Determines if the controller is in the left hand or right hand.\n\x09* @param ArmJoint          (In) The arm joint(Controller/Wrist/Elbow/Shoulder).\n\x09* @param GazeType          (In) The gaze type(Never/DuringMotion/Always).\n\x09* @param ElbowHeight       (In) The Height of the elbow..\n\x09* @param ElbowDepth        (In) The Depth of the elbow.\n\x09* @param PointerTiltAngle  (In) The Downward tilt or pitch of the laser pointer relative to the controller (degrees).\n\x09*/" },
		{ "ElbowDepth", "0.0" },
		{ "ElbowHeight", "0.0" },
		{ "GazeType", "DuringMotion" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "PointerTiltAngle", "15.0" },
		{ "ToolTip", "Set controller arm model parameter.\n@param Controller        (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param Handness          (In) Determines if the controller is in the left hand or right hand.\n@param ArmJoint          (In) The arm joint(Controller/Wrist/Elbow/Shoulder).\n@param GazeType          (In) The gaze type(Never/DuringMotion/Always).\n@param ElbowHeight       (In) The Height of the elbow..\n@param ElbowDepth        (In) The Depth of the elbow.\n@param PointerTiltAngle  (In) The Downward tilt or pitch of the laser pointer relative to the controller (degrees)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetControllerArmModelParam", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms
		{
			bool isEnable;
			EPxrControllerKeyMap Key;
			int32 ReturnValue;
		};
		static void NewProp_isEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_isEnable_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms*)Obj)->isEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_isEnable = { "isEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_isEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms, Key), Z_Construct_UEnum_PICOXRInput_EPxrControllerKeyMap, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_isEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetControllerEnableKey", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetControllerOriginOffset_Parms
		{
			EPICOXRControllerType Controller;
			FVector Offset;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Controller_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Controller_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerOriginOffset_Parms, Controller), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerOriginOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Controller_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Set controller origin offset.\n\x09* @param Controller      (In) Controller type.\n\x09* @param Offset          (In) Origin offset.   \n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Set controller origin offset.\n@param Controller      (In) Controller type.\n@param Offset          (In) Origin offset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetControllerOriginOffset", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetControllerOriginOffset_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms
		{
			int32 deviceID;
			int32 frequency;
			float strength;
			int32 time;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_deviceID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_frequency;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_strength;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms, deviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms, frequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_strength = { "strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms, strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_deviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetControllerVibrationEvent", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetMainControllerHandle_Parms
		{
			EPICOXRHandedness Handedness;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Handedness;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetMainControllerHandle_Parms, Handedness), Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_SetMainControllerHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_SetMainControllerHandle_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_Handedness_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_Handedness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Set the main controller.\n\x09* @param Handedness     (In) Main handedness(Neo LeftController/Neo RightController).\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Set the main controller.\n@param Handedness     (In) Main handedness(Neo LeftController/Neo RightController)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetMainControllerHandle", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetMainControllerHandle_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_StartControllerVCMotor_Parms
		{
			FString file;
			EPICOXRVibrateController slot;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartControllerVCMotor_Parms, file), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartControllerVCMotor_Parms, slot), Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartControllerVCMotor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_file,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_StartControllerVCMotor", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_StartControllerVCMotor_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_StartVibrateByCache_Parms
		{
			int32 SourceId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::NewProp_SourceId = { "SourceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByCache_Parms, SourceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByCache_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::NewProp_SourceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_StartVibrateByCache", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByCache_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_StartVibrateByPHF_Parms
		{
			FName DataName;
			EPICOXRVibrateController slot;
			EPICOXRChannelFlip slotConfig;
			float ampValue;
			int32 SourceID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DataName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotConfig_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slotConfig;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ampValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByPHF_Parms, DataName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByPHF_Parms, slot), Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_slotConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_slotConfig = { "slotConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByPHF_Parms, slotConfig), Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_ampValue = { "ampValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByPHF_Parms, ampValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByPHF_Parms, SourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByPHF_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_DataName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_slotConfig_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_slotConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_ampValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_SourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Start vibrate by data name at \"/Plugins/PICOXR/Content/Blueprint/PHFDataTable.uasset\".\n\x09* You need put your *.phf files on \"/Plugins/PICOXR/Content/Phf/\" folder.\n\x09* @param DataName\x09\x09(In)  DataName on PHFDataTable.\n\x09* @param SourceID       (Out) SourceID can be used to pause or resume vibrate.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Start vibrate by data name at \"/Plugins/PICOXR/Content/Blueprint/PHFDataTable.uasset\".\nYou need put your *.phf files on \"/Plugins/PICOXR/Content/Phf/\" folder.\n@param DataName               (In)  DataName on PHFDataTable.\n@param SourceID       (Out) SourceID can be used to pause or resume vibrate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_StartVibrateByPHF", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByPHF_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms
		{
			USoundWave* InSoundWave;
			EPICOXRVibrateController slot;
			EPICOXRChannelFlip slotConfig;
			int32 SourceId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundWave;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotConfig_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slotConfig;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_InSoundWave = { "InSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms, InSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms, slot), Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slotConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slotConfig = { "slotConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms, slotConfig), Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_SourceId = { "SourceId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms, SourceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_InSoundWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slotConfig_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slotConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_SourceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_StartVibrateBySharem", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_StopControllerVCMotor_Parms
		{
			int32 clientId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_clientId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::NewProp_clientId = { "clientId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StopControllerVCMotor_Parms, clientId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StopControllerVCMotor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::NewProp_clientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_StopControllerVCMotor", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_StopControllerVCMotor_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_UpdateVibrateParams_Parms
		{
			int32 SourceID;
			EPICOXRVibrateController slot;
			EPICOXRChannelFlip slotConfig;
			float AmpValue;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotConfig_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slotConfig;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmpValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_UpdateVibrateParams_Parms, SourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_UpdateVibrateParams_Parms, slot), Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_slotConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_slotConfig = { "slotConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_UpdateVibrateParams_Parms, slotConfig), Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_AmpValue = { "AmpValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_UpdateVibrateParams_Parms, AmpValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_UpdateVibrateParams_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_SourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_slotConfig_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_slotConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_AmpValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Update Vibrate Params\n\x09* @param SourceID\x09\x09(In)  SourceID got by PXR_StartVibrateByPHF.\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Update Vibrate Params\n@param SourceID               (In)  SourceID got by PXR_StartVibrateByPHF." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_UpdateVibrateParams", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_UpdateVibrateParams_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_VibrateController_Parms
		{
			EPICOXRControllerType ControllerType;
			float Strength;
			int32 Time;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Time;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_VibrateController_Parms, ControllerType), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_VibrateController_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_VibrateController_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_VibrateController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_VibrateController_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Vibration the controller.\n\x09* @param ControllerType    (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param Strength          (In) Vibration strength.\n\x09* @param Time              (In) Vibration time.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Vibration the controller.\n@param ControllerType    (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param Strength          (In) Vibration strength.\n@param Time              (In) Vibration time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_VibrateController", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_VibrateController_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPICOXRInputFunctionLibrary_NoRegister()
	{
		return UPICOXRInputFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice, "GetActiveInputDevice" }, // 198207076
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation, "GetBoneLocation" }, // 3926271602
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii, "GetBoneRadii" }, // 469532518
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation, "GetBoneRotation" }, // 4122674468
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetClickStrength, "GetClickStrength" }, // 4179556437
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetDominantHand, "GetDominantHand" }, // 2817243230
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerIsPinching, "GetFingerIsPinching" }, // 2504933759
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetFingerPinchStrength, "GetFingerPinchStrength" }, // 1656146032
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose, "GetHandRootPose" }, // 2628487187
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale, "GetHandScale" }, // 4128094690
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPointerPose, "GetPointerPose" }, // 2787007711
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence, "GetTrackingConfidence" }, // 4040216131
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimRayTouchedValid, "IsAimRayTouchedValid" }, // 2243307112
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsAimValid, "IsAimValid" }, // 309307094
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked, "IsBoneOrientationTracked" }, // 486707693
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid, "IsBoneOrientationValid" }, // 422298103
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked, "IsBonePositionTracked" }, // 3951917929
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid, "IsBonePositionValid" }, // 1179452783
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsDominantHand, "IsDominantHand" }, // 341773255
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTracked, "IsHandTracked" }, // 2846253332
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled, "IsHandTrackingEnabled" }, // 2377425372
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsMenuPressed, "IsMenuPressed" }, // 272693768
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsSystemGestureInProgress, "IsSystemGestureInProgress" }, // 3415253608
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache, "PXR_ClearVibrateByCache" }, // 1458771251
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration, "PXR_GetControllerAcceleration" }, // 998372125
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity, "PXR_GetControllerAngularVelocity" }, // 1426042290
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerArmModelParam, "PXR_GetControllerArmModelParam" }, // 4166336710
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState, "PXR_GetControllerConnectionState" }, // 1201563542
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType, "PXR_GetControllerDeviceType" }, // 1817666786
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey, "PXR_GetControllerEnableHomekey" }, // 3541565734
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity, "PXR_GetControllerLinearVelocity" }, // 47011219
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower, "PXR_GetControllerPower" }, // 2509829461
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation, "PXR_GetControllerPredictedLocationAndRotation" }, // 2595318432
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness, "PXR_GetHandedness" }, // 2864256588
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle, "PXR_GetMainControllerHandle" }, // 3246645903
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate, "PXR_PauseVibrate" }, // 2823198188
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate, "PXR_ResumeVibrate" }, // 3529243414
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache, "PXR_SaveVibrateByCache" }, // 1043722049
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp, "PXR_SetControllerAmp" }, // 144114620
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerArmModelParam, "PXR_SetControllerArmModelParam" }, // 1533637428
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey, "PXR_SetControllerEnableKey" }, // 3636380736
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset, "PXR_SetControllerOriginOffset" }, // 970605410
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent, "PXR_SetControllerVibrationEvent" }, // 3130085145
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle, "PXR_SetMainControllerHandle" }, // 2569128366
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor, "PXR_StartControllerVCMotor" }, // 2544199117
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache, "PXR_StartVibrateByCache" }, // 368563714
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF, "PXR_StartVibrateByPHF" }, // 2918757076
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem, "PXR_StartVibrateBySharem" }, // 1768375386
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor, "PXR_StopControllerVCMotor" }, // 508275097
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams, "PXR_UpdateVibrateParams" }, // 3817701935
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController, "PXR_VibrateController" }, // 3642148841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PXR_InputFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOXRInputFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics::ClassParams = {
		&UPICOXRInputFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOXRInputFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPICOXRInputFunctionLibrary, 3277140948);
	template<> PICOXRINPUT_API UClass* StaticClass<UPICOXRInputFunctionLibrary>()
	{
		return UPICOXRInputFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPICOXRInputFunctionLibrary(Z_Construct_UClass_UPICOXRInputFunctionLibrary, &UPICOXRInputFunctionLibrary::StaticClass, TEXT("/Script/PICOXRInput"), TEXT("UPICOXRInputFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOXRInputFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
