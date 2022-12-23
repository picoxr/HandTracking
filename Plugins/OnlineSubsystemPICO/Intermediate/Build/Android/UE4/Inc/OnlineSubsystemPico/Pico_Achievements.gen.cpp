// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Public/Pico_Achievements.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePico_Achievements() {}
// Cross Module References
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AchievementProgressArray_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AchievementDefinitionArray_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AchievementUpdate_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoAchievementsFunction_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoAchievementsFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AchievementUpdate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AchievementProgress_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AchievementProgress();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AchievementDefinition_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AchievementDefinition();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EAchievementType();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EAchievementWritePolicy();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AchievementProgressArray();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AchievementDefinitionArray();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetProgressByName_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_AchievementProgressArray* AchievementProgressArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AchievementProgressArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetProgressByName_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetProgressByName_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetProgressByName_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::NewProp_AchievementProgressArray = { "AchievementProgressArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetProgressByName_Parms, AchievementProgressArray), Z_Construct_UClass_UPico_AchievementProgressArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::NewProp_AchievementProgressArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetProgressByName__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetProgressByName_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetDefinitionsByName_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_AchievementDefinitionArray* AchievementDefinitionArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AchievementDefinitionArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetDefinitionsByName_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetDefinitionsByName_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetDefinitionsByName_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::NewProp_AchievementDefinitionArray = { "AchievementDefinitionArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetDefinitionsByName_Parms, AchievementDefinitionArray), Z_Construct_UClass_UPico_AchievementDefinitionArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::NewProp_AchievementDefinitionArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetDefinitionsByName__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetDefinitionsByName_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetAllProgress_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_AchievementProgressArray* AchievementProgressArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AchievementProgressArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetAllProgress_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetAllProgress_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetAllProgress_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::NewProp_AchievementProgressArray = { "AchievementProgressArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetAllProgress_Parms, AchievementProgressArray), Z_Construct_UClass_UPico_AchievementProgressArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::NewProp_AchievementProgressArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetAllProgress__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetAllProgress_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetAllDefinitions_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_AchievementDefinitionArray* AchievementDefinitionArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AchievementDefinitionArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetAllDefinitions_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetAllDefinitions_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetAllDefinitions_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::NewProp_AchievementDefinitionArray = { "AchievementDefinitionArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetAllDefinitions_Parms, AchievementDefinitionArray), Z_Construct_UClass_UPico_AchievementDefinitionArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::NewProp_AchievementDefinitionArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetAllDefinitions__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetAllDefinitions_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventUnlock_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_AchievementUpdate* AchievementUpdate;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AchievementUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventUnlock_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventUnlock_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventUnlock_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::NewProp_AchievementUpdate = { "AchievementUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventUnlock_Parms, AchievementUpdate), Z_Construct_UClass_UPico_AchievementUpdate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::NewProp_AchievementUpdate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "Unlock__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventUnlock_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventAddFields_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_AchievementUpdate* AchievementUpdate;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AchievementUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventAddFields_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventAddFields_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventAddFields_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::NewProp_AchievementUpdate = { "AchievementUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventAddFields_Parms, AchievementUpdate), Z_Construct_UClass_UPico_AchievementUpdate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::NewProp_AchievementUpdate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "AddFields__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventAddFields_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventAddCount_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_AchievementUpdate* AchievementUpdate;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AchievementUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventAddCount_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventAddCount_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventAddCount_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::NewProp_AchievementUpdate = { "AchievementUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventAddCount_Parms, AchievementUpdate), Z_Construct_UClass_UPico_AchievementUpdate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::NewProp_AchievementUpdate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "AddCount__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventAddCount_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePicoAchievementsFunction::execPicoGetProgressByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FString,Z_Param_Out_NameArray);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetProgressByNameCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoAchievementsFunction::PicoGetProgressByName(Z_Param_WorldContextObject,Z_Param_Out_NameArray,FGetProgressByName(Z_Param_InGetProgressByNameCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoAchievementsFunction::execPicoGetDefinitionsByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FString,Z_Param_Out_NameArray);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetDefinitionsByNameCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoAchievementsFunction::PicoGetDefinitionsByName(Z_Param_WorldContextObject,Z_Param_Out_NameArray,FGetDefinitionsByName(Z_Param_InGetDefinitionsByNameCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoAchievementsFunction::execPicoGetAllProgress)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageSize);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetAllProgressCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoAchievementsFunction::PicoGetAllProgress(Z_Param_WorldContextObject,Z_Param_PageIndex,Z_Param_PageSize,FGetAllProgress(Z_Param_InGetAllProgressCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoAchievementsFunction::execPicoGetAllDefinitions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageSize);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetAllDefinitionsCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoAchievementsFunction::PicoGetAllDefinitions(Z_Param_WorldContextObject,Z_Param_PageIndex,Z_Param_PageSize,FGetAllDefinitions(Z_Param_InGetAllDefinitionsCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoAchievementsFunction::execPicoUnlock)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExtraData);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InUnlockCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoAchievementsFunction::PicoUnlock(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_ExtraData,FUnlock(Z_Param_InUnlockCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoAchievementsFunction::execPicoAddFields)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Fields);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExtraData);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InAddFieldsCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoAchievementsFunction::PicoAddFields(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Fields,Z_Param_ExtraData,FAddFields(Z_Param_InAddFieldsCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoAchievementsFunction::execPicoAddCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Count);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExtraData);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InAddCountCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoAchievementsFunction::PicoAddCount(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Count,Z_Param_ExtraData,FAddCount(Z_Param_InAddCountCallback));
		P_NATIVE_END;
	}
	void UOnlinePicoAchievementsFunction::StaticRegisterNativesUOnlinePicoAchievementsFunction()
	{
		UClass* Class = UOnlinePicoAchievementsFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PicoAddCount", &UOnlinePicoAchievementsFunction::execPicoAddCount },
			{ "PicoAddFields", &UOnlinePicoAchievementsFunction::execPicoAddFields },
			{ "PicoGetAllDefinitions", &UOnlinePicoAchievementsFunction::execPicoGetAllDefinitions },
			{ "PicoGetAllProgress", &UOnlinePicoAchievementsFunction::execPicoGetAllProgress },
			{ "PicoGetDefinitionsByName", &UOnlinePicoAchievementsFunction::execPicoGetDefinitionsByName },
			{ "PicoGetProgressByName", &UOnlinePicoAchievementsFunction::execPicoGetProgressByName },
			{ "PicoUnlock", &UOnlinePicoAchievementsFunction::execPicoUnlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics
	{
		struct OnlinePicoAchievementsFunction_eventPicoAddCount_Parms
		{
			UObject* WorldContextObject;
			FString Name;
			FString Count;
			FString ExtraData;
			FScriptDelegate InAddCountCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraData;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InAddCountCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoAddCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoAddCount_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_Count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoAddCount_Parms, Count), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_ExtraData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_ExtraData = { "ExtraData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoAddCount_Parms, ExtraData), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_ExtraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_ExtraData_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_InAddCountCallback = { "InAddCountCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoAddCount_Parms, InAddCountCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddCount__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_ExtraData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::NewProp_InAddCountCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Achievements" },
		{ "Comment", "/// <summary>Adds a count to a specified count achievement. The count will be added to the current count,\n/// for example, if the current count is 1 and the count you would like to add is 7, the final count will be 8 if the request succeeds.\n/// @note Available to count achievements only.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"Name\">The API name of the achievement.</param>\n/// <param name=\"Count\">The count you want to add. The largest count supported by this function is the maximum value of a signed 64-bit integer.\n/// If the count is larger than that, it is clamped to that maximum value before being passed to the servers.\n/// </param>\n/// <param name=\"ExtraData\">Custom extension fields that can be used to record key information when unlocking achievements.</param>\n/// <param name=\"InAddCountCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
		{ "ToolTip", "<summary>Adds a count to a specified count achievement. The count will be added to the current count,\nfor example, if the current count is 1 and the count you would like to add is 7, the final count will be 8 if the request succeeds.\n@note Available to count achievements only.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"Name\">The API name of the achievement.</param>\n<param name=\"Count\">The count you want to add. The largest count supported by this function is the maximum value of a signed 64-bit integer.\nIf the count is larger than that, it is clamped to that maximum value before being passed to the servers.\n</param>\n<param name=\"ExtraData\">Custom extension fields that can be used to record key information when unlocking achievements.</param>\n<param name=\"InAddCountCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAchievementsFunction, nullptr, "PicoAddCount", nullptr, nullptr, sizeof(OnlinePicoAchievementsFunction_eventPicoAddCount_Parms), Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics
	{
		struct OnlinePicoAchievementsFunction_eventPicoAddFields_Parms
		{
			UObject* WorldContextObject;
			FString Name;
			FString Fields;
			FString ExtraData;
			FScriptDelegate InAddFieldsCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Fields;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraData;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InAddFieldsCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoAddFields_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoAddFields_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_Fields_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoAddFields_Parms, Fields), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_Fields_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_ExtraData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_ExtraData = { "ExtraData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoAddFields_Parms, ExtraData), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_ExtraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_ExtraData_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_InAddFieldsCallback = { "InAddFieldsCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoAddFields_Parms, InAddFieldsCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_AddFields__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_Fields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_ExtraData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::NewProp_InAddFieldsCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Achievements" },
		{ "Comment", "/// <summary>Unlocks the bit(s) of a specified bitfield achievement. The status of the bit(s) is then unchangeable.\n/// @note Available to bitfield achievements only.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"Name\">The API name of the achievement to unlock bit(s) for.</param>\n/// <param name=\"Fields\">A string containing either '0' or '1' characters, for example '100011'.\n/// Every '1' will unlock a bit in the corresponding position of a bitfield.\n/// </param>\n/// <param name=\"ExtraData\">Custom extension fields that can be used to record key information when unlocking achievements.</param>\n/// <param name=\"InAddFieldsCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
		{ "ToolTip", "<summary>Unlocks the bit(s) of a specified bitfield achievement. The status of the bit(s) is then unchangeable.\n@note Available to bitfield achievements only.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"Name\">The API name of the achievement to unlock bit(s) for.</param>\n<param name=\"Fields\">A string containing either '0' or '1' characters, for example '100011'.\nEvery '1' will unlock a bit in the corresponding position of a bitfield.\n</param>\n<param name=\"ExtraData\">Custom extension fields that can be used to record key information when unlocking achievements.</param>\n<param name=\"InAddFieldsCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAchievementsFunction, nullptr, "PicoAddFields", nullptr, nullptr, sizeof(OnlinePicoAchievementsFunction_eventPicoAddFields_Parms), Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics
	{
		struct OnlinePicoAchievementsFunction_eventPicoGetAllDefinitions_Parms
		{
			UObject* WorldContextObject;
			int32 PageIndex;
			int32 PageSize;
			FScriptDelegate InGetAllDefinitionsCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageSize;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetAllDefinitionsCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoGetAllDefinitions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoGetAllDefinitions_Parms, PageIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoGetAllDefinitions_Parms, PageSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics::NewProp_InGetAllDefinitionsCallback = { "InGetAllDefinitionsCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoGetAllDefinitions_Parms, InGetAllDefinitionsCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllDefinitions__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics::NewProp_PageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics::NewProp_PageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics::NewProp_InGetAllDefinitionsCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Achievements" },
		{ "Comment", "/// <summary>Gets the information about all achievements,\n/// including API names, descriptions, types, the targets which must be reached to unlock those achievements, and more.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"PageIndex\">The start index of the pages.</param>\n/// <param name=\"PageSize\">The size of the page.</param>\n/// <param name=\"InGetAllDefinitionsCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
		{ "ToolTip", "<summary>Gets the information about all achievements,\nincluding API names, descriptions, types, the targets which must be reached to unlock those achievements, and more.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"PageIndex\">The start index of the pages.</param>\n<param name=\"PageSize\">The size of the page.</param>\n<param name=\"InGetAllDefinitionsCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAchievementsFunction, nullptr, "PicoGetAllDefinitions", nullptr, nullptr, sizeof(OnlinePicoAchievementsFunction_eventPicoGetAllDefinitions_Parms), Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics
	{
		struct OnlinePicoAchievementsFunction_eventPicoGetAllProgress_Parms
		{
			UObject* WorldContextObject;
			int32 PageIndex;
			int32 PageSize;
			FScriptDelegate InGetAllProgressCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageSize;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetAllProgressCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoGetAllProgress_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoGetAllProgress_Parms, PageIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoGetAllProgress_Parms, PageSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics::NewProp_InGetAllProgressCallback = { "InGetAllProgressCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoGetAllProgress_Parms, InGetAllProgressCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAllProgress__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics::NewProp_PageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics::NewProp_PageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics::NewProp_InGetAllProgressCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Achievements" },
		{ "Comment", "/// <summary>Gets the user's progress on all achievements,\n/// including API names, whether or not the achievements are unlocked, the time at which they were unlocked, achievement types and,\n/// depending on the type, the progress made towards unlocking them, and more.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"PageIndex\">The start index of the pages.</param>\n/// <param name=\"PageSize\">The size of the page.</param>\n/// <param name=\"InGetAllProgressCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
		{ "ToolTip", "<summary>Gets the user's progress on all achievements,\nincluding API names, whether or not the achievements are unlocked, the time at which they were unlocked, achievement types and,\ndepending on the type, the progress made towards unlocking them, and more.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"PageIndex\">The start index of the pages.</param>\n<param name=\"PageSize\">The size of the page.</param>\n<param name=\"InGetAllProgressCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAchievementsFunction, nullptr, "PicoGetAllProgress", nullptr, nullptr, sizeof(OnlinePicoAchievementsFunction_eventPicoGetAllProgress_Parms), Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics
	{
		struct OnlinePicoAchievementsFunction_eventPicoGetDefinitionsByName_Parms
		{
			UObject* WorldContextObject;
			TArray<FString> NameArray;
			FScriptDelegate InGetDefinitionsByNameCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NameArray;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetDefinitionsByNameCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoGetDefinitionsByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::NewProp_NameArray_Inner = { "NameArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::NewProp_NameArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::NewProp_NameArray = { "NameArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoGetDefinitionsByName_Parms, NameArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::NewProp_NameArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::NewProp_NameArray_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::NewProp_InGetDefinitionsByNameCallback = { "InGetDefinitionsByNameCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoGetDefinitionsByName_Parms, InGetDefinitionsByNameCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDefinitionsByName__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::NewProp_NameArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::NewProp_NameArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::NewProp_InGetDefinitionsByNameCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Achievements" },
		{ "Comment", "/// <summary>Gets the information about specified achievements,\n/// including API names, descriptions, types, the targets which must be reached to unlock those achievements, and more.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"NameArray\">The API names of the achievements.</param>\n/// <param name=\"InGetDefinitionsByNameCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
		{ "ToolTip", "<summary>Gets the information about specified achievements,\nincluding API names, descriptions, types, the targets which must be reached to unlock those achievements, and more.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"NameArray\">The API names of the achievements.</param>\n<param name=\"InGetDefinitionsByNameCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAchievementsFunction, nullptr, "PicoGetDefinitionsByName", nullptr, nullptr, sizeof(OnlinePicoAchievementsFunction_eventPicoGetDefinitionsByName_Parms), Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics
	{
		struct OnlinePicoAchievementsFunction_eventPicoGetProgressByName_Parms
		{
			UObject* WorldContextObject;
			TArray<FString> NameArray;
			FScriptDelegate InGetProgressByNameCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NameArray;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetProgressByNameCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoGetProgressByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::NewProp_NameArray_Inner = { "NameArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::NewProp_NameArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::NewProp_NameArray = { "NameArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoGetProgressByName_Parms, NameArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::NewProp_NameArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::NewProp_NameArray_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::NewProp_InGetProgressByNameCallback = { "InGetProgressByNameCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoGetProgressByName_Parms, InGetProgressByNameCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProgressByName__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::NewProp_NameArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::NewProp_NameArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::NewProp_InGetProgressByNameCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Achievements" },
		{ "Comment", "/// <summary>Gets the user's progress on specified achievements,\n/// including API names, whether or not the achievements are unlocked, the time at which they were unlocked, achievement types and,\n/// depending on the type, the progress made towards unlocking them, and more.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"NameArray\">The API names of the achievements.</param>\n/// <param name=\"InGetProgressByNameCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
		{ "ToolTip", "<summary>Gets the user's progress on specified achievements,\nincluding API names, whether or not the achievements are unlocked, the time at which they were unlocked, achievement types and,\ndepending on the type, the progress made towards unlocking them, and more.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"NameArray\">The API names of the achievements.</param>\n<param name=\"InGetProgressByNameCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAchievementsFunction, nullptr, "PicoGetProgressByName", nullptr, nullptr, sizeof(OnlinePicoAchievementsFunction_eventPicoGetProgressByName_Parms), Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics
	{
		struct OnlinePicoAchievementsFunction_eventPicoUnlock_Parms
		{
			UObject* WorldContextObject;
			FString Name;
			FString ExtraData;
			FScriptDelegate InUnlockCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraData;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InUnlockCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoUnlock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoUnlock_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::NewProp_ExtraData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::NewProp_ExtraData = { "ExtraData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoUnlock_Parms, ExtraData), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::NewProp_ExtraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::NewProp_ExtraData_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::NewProp_InUnlockCallback = { "InUnlockCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAchievementsFunction_eventPicoUnlock_Parms, InUnlockCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_Unlock__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::NewProp_ExtraData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::NewProp_InUnlockCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Achievements" },
		{ "Comment", "/// <summary>Unlocks a specified achievement of any type even if the target for unlocking this achievement is not reached.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"Name\">The API name of the achievement to unlock.</param>\n/// <param name=\"ExtraData\">Custom extension fields that can be used to record key information when unlocking achievements.</param>\n/// <param name=\"InUnlockCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
		{ "ToolTip", "<summary>Unlocks a specified achievement of any type even if the target for unlocking this achievement is not reached.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"Name\">The API name of the achievement to unlock.</param>\n<param name=\"ExtraData\">Custom extension fields that can be used to record key information when unlocking achievements.</param>\n<param name=\"InUnlockCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAchievementsFunction, nullptr, "PicoUnlock", nullptr, nullptr, sizeof(OnlinePicoAchievementsFunction_eventPicoUnlock_Parms), Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlinePicoAchievementsFunction_NoRegister()
	{
		return UOnlinePicoAchievementsFunction::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePicoAchievementsFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePicoAchievementsFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePicoAchievementsFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddCount, "PicoAddCount" }, // 1388571416
		{ &Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoAddFields, "PicoAddFields" }, // 2164325952
		{ &Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllDefinitions, "PicoGetAllDefinitions" }, // 174663717
		{ &Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetAllProgress, "PicoGetAllProgress" }, // 3850322636
		{ &Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetDefinitionsByName, "PicoGetDefinitionsByName" }, // 2827644186
		{ &Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoGetProgressByName, "PicoGetProgressByName" }, // 2020910614
		{ &Z_Construct_UFunction_UOnlinePicoAchievementsFunction_PicoUnlock, "PicoUnlock" }, // 2804550203
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoAchievementsFunction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** @defgroup BP_Achievements BP_Achievements\n *  This is the BP_Achievements group\n *  @{\n *//// @brief OnlinePicoAchievements Blueprint Function class.\n" },
		{ "IncludePath", "Pico_Achievements.h" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
		{ "ToolTip", "@defgroup BP_Achievements BP_Achievements\nThis is the BP_Achievements group\n@{\n/// @brief OnlinePicoAchievements Blueprint Function class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePicoAchievementsFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePicoAchievementsFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePicoAchievementsFunction_Statics::ClassParams = {
		&UOnlinePicoAchievementsFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoAchievementsFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoAchievementsFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePicoAchievementsFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlinePicoAchievementsFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlinePicoAchievementsFunction, 1809559553);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UOnlinePicoAchievementsFunction>()
	{
		return UOnlinePicoAchievementsFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlinePicoAchievementsFunction(Z_Construct_UClass_UOnlinePicoAchievementsFunction, &UOnlinePicoAchievementsFunction::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UOnlinePicoAchievementsFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePicoAchievementsFunction);
	DEFINE_FUNCTION(UPico_AchievementUpdate::execGetJustUnlocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetJustUnlocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementUpdate::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	void UPico_AchievementUpdate::StaticRegisterNativesUPico_AchievementUpdate()
	{
		UClass* Class = UPico_AchievementUpdate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetJustUnlocked", &UPico_AchievementUpdate::execGetJustUnlocked },
			{ "GetName", &UPico_AchievementUpdate::execGetName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_AchievementUpdate_GetJustUnlocked_Statics
	{
		struct Pico_AchievementUpdate_eventGetJustUnlocked_Parms
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
	void Z_Construct_UFunction_UPico_AchievementUpdate_GetJustUnlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_AchievementUpdate_eventGetJustUnlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_AchievementUpdate_GetJustUnlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_AchievementUpdate_eventGetJustUnlocked_Parms), &Z_Construct_UFunction_UPico_AchievementUpdate_GetJustUnlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementUpdate_GetJustUnlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementUpdate_GetJustUnlocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementUpdate_GetJustUnlocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Update" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementUpdate_GetJustUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementUpdate, nullptr, "GetJustUnlocked", nullptr, nullptr, sizeof(Pico_AchievementUpdate_eventGetJustUnlocked_Parms), Z_Construct_UFunction_UPico_AchievementUpdate_GetJustUnlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementUpdate_GetJustUnlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementUpdate_GetJustUnlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementUpdate_GetJustUnlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementUpdate_GetJustUnlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementUpdate_GetJustUnlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementUpdate_GetName_Statics
	{
		struct Pico_AchievementUpdate_eventGetName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AchievementUpdate_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementUpdate_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementUpdate_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementUpdate_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementUpdate_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Update" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementUpdate_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementUpdate, nullptr, "GetName", nullptr, nullptr, sizeof(Pico_AchievementUpdate_eventGetName_Parms), Z_Construct_UFunction_UPico_AchievementUpdate_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementUpdate_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementUpdate_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementUpdate_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementUpdate_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementUpdate_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_AchievementUpdate_NoRegister()
	{
		return UPico_AchievementUpdate::StaticClass();
	}
	struct Z_Construct_UClass_UPico_AchievementUpdate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_AchievementUpdate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_AchievementUpdate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_AchievementUpdate_GetJustUnlocked, "GetJustUnlocked" }, // 670673507
		{ &Z_Construct_UFunction_UPico_AchievementUpdate_GetName, "GetName" }, // 3716022484
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_AchievementUpdate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "IncludePath", "Pico_Achievements.h" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_AchievementUpdate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_AchievementUpdate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_AchievementUpdate_Statics::ClassParams = {
		&UPico_AchievementUpdate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_AchievementUpdate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AchievementUpdate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_AchievementUpdate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_AchievementUpdate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_AchievementUpdate, 1041787112);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_AchievementUpdate>()
	{
		return UPico_AchievementUpdate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_AchievementUpdate(Z_Construct_UClass_UPico_AchievementUpdate, &UPico_AchievementUpdate::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_AchievementUpdate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_AchievementUpdate);
	DEFINE_FUNCTION(UPico_AchievementProgress::execGetExtraDataString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetExtraDataString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementProgress::execGetExtraData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetExtraData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementProgress::execGetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementProgress::execGetUnlockDateTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetUnlockDateTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementProgress::execGetUnlockTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUnlockTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementProgress::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementProgress::execGetIsUnlocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsUnlocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementProgress::execGetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementProgress::execGetBitfield)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBitfield();
		P_NATIVE_END;
	}
	void UPico_AchievementProgress::StaticRegisterNativesUPico_AchievementProgress()
	{
		UClass* Class = UPico_AchievementProgress::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBitfield", &UPico_AchievementProgress::execGetBitfield },
			{ "GetCount", &UPico_AchievementProgress::execGetCount },
			{ "GetExtraData", &UPico_AchievementProgress::execGetExtraData },
			{ "GetExtraDataString", &UPico_AchievementProgress::execGetExtraDataString },
			{ "GetID", &UPico_AchievementProgress::execGetID },
			{ "GetIsUnlocked", &UPico_AchievementProgress::execGetIsUnlocked },
			{ "GetName", &UPico_AchievementProgress::execGetName },
			{ "GetUnlockDateTime", &UPico_AchievementProgress::execGetUnlockDateTime },
			{ "GetUnlockTime", &UPico_AchievementProgress::execGetUnlockTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_AchievementProgress_GetBitfield_Statics
	{
		struct Pico_AchievementProgress_eventGetBitfield_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AchievementProgress_GetBitfield_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementProgress_eventGetBitfield_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementProgress_GetBitfield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementProgress_GetBitfield_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementProgress_GetBitfield_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Progress" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementProgress_GetBitfield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementProgress, nullptr, "GetBitfield", nullptr, nullptr, sizeof(Pico_AchievementProgress_eventGetBitfield_Parms), Z_Construct_UFunction_UPico_AchievementProgress_GetBitfield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetBitfield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementProgress_GetBitfield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetBitfield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementProgress_GetBitfield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementProgress_GetBitfield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementProgress_GetCount_Statics
	{
		struct Pico_AchievementProgress_eventGetCount_Parms
		{
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPico_AchievementProgress_GetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementProgress_eventGetCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementProgress_GetCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementProgress_GetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementProgress_GetCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Progress" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementProgress_GetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementProgress, nullptr, "GetCount", nullptr, nullptr, sizeof(Pico_AchievementProgress_eventGetCount_Parms), Z_Construct_UFunction_UPico_AchievementProgress_GetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementProgress_GetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementProgress_GetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementProgress_GetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementProgress_GetExtraData_Statics
	{
		struct Pico_AchievementProgress_eventGetExtraData_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPico_AchievementProgress_GetExtraData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPico_AchievementProgress_GetExtraData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementProgress_eventGetExtraData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementProgress_GetExtraData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementProgress_GetExtraData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementProgress_GetExtraData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementProgress_GetExtraData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Progress" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementProgress_GetExtraData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementProgress, nullptr, "GetExtraData", nullptr, nullptr, sizeof(Pico_AchievementProgress_eventGetExtraData_Parms), Z_Construct_UFunction_UPico_AchievementProgress_GetExtraData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetExtraData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementProgress_GetExtraData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetExtraData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementProgress_GetExtraData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementProgress_GetExtraData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementProgress_GetExtraDataString_Statics
	{
		struct Pico_AchievementProgress_eventGetExtraDataString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AchievementProgress_GetExtraDataString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementProgress_eventGetExtraDataString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementProgress_GetExtraDataString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementProgress_GetExtraDataString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementProgress_GetExtraDataString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Progress" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementProgress_GetExtraDataString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementProgress, nullptr, "GetExtraDataString", nullptr, nullptr, sizeof(Pico_AchievementProgress_eventGetExtraDataString_Parms), Z_Construct_UFunction_UPico_AchievementProgress_GetExtraDataString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetExtraDataString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementProgress_GetExtraDataString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetExtraDataString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementProgress_GetExtraDataString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementProgress_GetExtraDataString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementProgress_GetID_Statics
	{
		struct Pico_AchievementProgress_eventGetID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AchievementProgress_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementProgress_eventGetID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementProgress_GetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementProgress_GetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementProgress_GetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Progress" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementProgress_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementProgress, nullptr, "GetID", nullptr, nullptr, sizeof(Pico_AchievementProgress_eventGetID_Parms), Z_Construct_UFunction_UPico_AchievementProgress_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementProgress_GetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementProgress_GetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementProgress_GetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementProgress_GetIsUnlocked_Statics
	{
		struct Pico_AchievementProgress_eventGetIsUnlocked_Parms
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
	void Z_Construct_UFunction_UPico_AchievementProgress_GetIsUnlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_AchievementProgress_eventGetIsUnlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_AchievementProgress_GetIsUnlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_AchievementProgress_eventGetIsUnlocked_Parms), &Z_Construct_UFunction_UPico_AchievementProgress_GetIsUnlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementProgress_GetIsUnlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementProgress_GetIsUnlocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementProgress_GetIsUnlocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Progress" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementProgress_GetIsUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementProgress, nullptr, "GetIsUnlocked", nullptr, nullptr, sizeof(Pico_AchievementProgress_eventGetIsUnlocked_Parms), Z_Construct_UFunction_UPico_AchievementProgress_GetIsUnlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetIsUnlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementProgress_GetIsUnlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetIsUnlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementProgress_GetIsUnlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementProgress_GetIsUnlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementProgress_GetName_Statics
	{
		struct Pico_AchievementProgress_eventGetName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AchievementProgress_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementProgress_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementProgress_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementProgress_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementProgress_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Progress" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementProgress_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementProgress, nullptr, "GetName", nullptr, nullptr, sizeof(Pico_AchievementProgress_eventGetName_Parms), Z_Construct_UFunction_UPico_AchievementProgress_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementProgress_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementProgress_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementProgress_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockDateTime_Statics
	{
		struct Pico_AchievementProgress_eventGetUnlockDateTime_Parms
		{
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementProgress_eventGetUnlockDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockDateTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Progress" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementProgress, nullptr, "GetUnlockDateTime", nullptr, nullptr, sizeof(Pico_AchievementProgress_eventGetUnlockDateTime_Parms), Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockTime_Statics
	{
		struct Pico_AchievementProgress_eventGetUnlockTime_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementProgress_eventGetUnlockTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Progress" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementProgress, nullptr, "GetUnlockTime", nullptr, nullptr, sizeof(Pico_AchievementProgress_eventGetUnlockTime_Parms), Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_AchievementProgress_NoRegister()
	{
		return UPico_AchievementProgress::StaticClass();
	}
	struct Z_Construct_UClass_UPico_AchievementProgress_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_AchievementProgress_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_AchievementProgress_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_AchievementProgress_GetBitfield, "GetBitfield" }, // 174695413
		{ &Z_Construct_UFunction_UPico_AchievementProgress_GetCount, "GetCount" }, // 3959823424
		{ &Z_Construct_UFunction_UPico_AchievementProgress_GetExtraData, "GetExtraData" }, // 1786092651
		{ &Z_Construct_UFunction_UPico_AchievementProgress_GetExtraDataString, "GetExtraDataString" }, // 1667879399
		{ &Z_Construct_UFunction_UPico_AchievementProgress_GetID, "GetID" }, // 800098470
		{ &Z_Construct_UFunction_UPico_AchievementProgress_GetIsUnlocked, "GetIsUnlocked" }, // 3148780026
		{ &Z_Construct_UFunction_UPico_AchievementProgress_GetName, "GetName" }, // 1409382896
		{ &Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockDateTime, "GetUnlockDateTime" }, // 3450074397
		{ &Z_Construct_UFunction_UPico_AchievementProgress_GetUnlockTime, "GetUnlockTime" }, // 2362848354
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_AchievementProgress_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_Achievements.h" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_AchievementProgress_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_AchievementProgress>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_AchievementProgress_Statics::ClassParams = {
		&UPico_AchievementProgress::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_AchievementProgress_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AchievementProgress_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_AchievementProgress()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_AchievementProgress_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_AchievementProgress, 1836619368);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_AchievementProgress>()
	{
		return UPico_AchievementProgress::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_AchievementProgress(Z_Construct_UClass_UPico_AchievementProgress, &UPico_AchievementProgress::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_AchievementProgress"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_AchievementProgress);
	DEFINE_FUNCTION(UPico_AchievementDefinition::execGetUnlockedImageURL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUnlockedImageURL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementDefinition::execGetLockedImageURL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLockedImageURL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementDefinition::execGetWritePolicy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAchievementWritePolicy*)Z_Param__Result=P_THIS->GetWritePolicy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementDefinition::execGetUnlockedDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUnlockedDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementDefinition::execGetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementDefinition::execGetIsSecret)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsSecret();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementDefinition::execGetIsArchived)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsArchived();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementDefinition::execGetTitle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTitle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementDefinition::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementDefinition::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAchievementType*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementDefinition::execGetTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementDefinition::execGetBitfieldLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBitfieldLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementDefinition::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	void UPico_AchievementDefinition::StaticRegisterNativesUPico_AchievementDefinition()
	{
		UClass* Class = UPico_AchievementDefinition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBitfieldLength", &UPico_AchievementDefinition::execGetBitfieldLength },
			{ "GetDescription", &UPico_AchievementDefinition::execGetDescription },
			{ "GetID", &UPico_AchievementDefinition::execGetID },
			{ "GetIsArchived", &UPico_AchievementDefinition::execGetIsArchived },
			{ "GetIsSecret", &UPico_AchievementDefinition::execGetIsSecret },
			{ "GetLockedImageURL", &UPico_AchievementDefinition::execGetLockedImageURL },
			{ "GetName", &UPico_AchievementDefinition::execGetName },
			{ "GetTarget", &UPico_AchievementDefinition::execGetTarget },
			{ "GetTitle", &UPico_AchievementDefinition::execGetTitle },
			{ "GetType", &UPico_AchievementDefinition::execGetType },
			{ "GetUnlockedDescription", &UPico_AchievementDefinition::execGetUnlockedDescription },
			{ "GetUnlockedImageURL", &UPico_AchievementDefinition::execGetUnlockedImageURL },
			{ "GetWritePolicy", &UPico_AchievementDefinition::execGetWritePolicy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinition_GetBitfieldLength_Statics
	{
		struct Pico_AchievementDefinition_eventGetBitfieldLength_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AchievementDefinition_GetBitfieldLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementDefinition_eventGetBitfieldLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinition_GetBitfieldLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinition_GetBitfieldLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinition_GetBitfieldLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinition_GetBitfieldLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinition, nullptr, "GetBitfieldLength", nullptr, nullptr, sizeof(Pico_AchievementDefinition_eventGetBitfieldLength_Parms), Z_Construct_UFunction_UPico_AchievementDefinition_GetBitfieldLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetBitfieldLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinition_GetBitfieldLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetBitfieldLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinition_GetBitfieldLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinition_GetBitfieldLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinition_GetDescription_Statics
	{
		struct Pico_AchievementDefinition_eventGetDescription_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AchievementDefinition_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementDefinition_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinition_GetDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinition_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinition_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinition_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinition, nullptr, "GetDescription", nullptr, nullptr, sizeof(Pico_AchievementDefinition_eventGetDescription_Parms), Z_Construct_UFunction_UPico_AchievementDefinition_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinition_GetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinition_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinition_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinition_GetID_Statics
	{
		struct Pico_AchievementDefinition_eventGetID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AchievementDefinition_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementDefinition_eventGetID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinition_GetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinition_GetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinition_GetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinition_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinition, nullptr, "GetID", nullptr, nullptr, sizeof(Pico_AchievementDefinition_eventGetID_Parms), Z_Construct_UFunction_UPico_AchievementDefinition_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinition_GetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinition_GetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinition_GetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinition_GetIsArchived_Statics
	{
		struct Pico_AchievementDefinition_eventGetIsArchived_Parms
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
	void Z_Construct_UFunction_UPico_AchievementDefinition_GetIsArchived_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_AchievementDefinition_eventGetIsArchived_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_AchievementDefinition_GetIsArchived_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_AchievementDefinition_eventGetIsArchived_Parms), &Z_Construct_UFunction_UPico_AchievementDefinition_GetIsArchived_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinition_GetIsArchived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinition_GetIsArchived_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinition_GetIsArchived_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinition_GetIsArchived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinition, nullptr, "GetIsArchived", nullptr, nullptr, sizeof(Pico_AchievementDefinition_eventGetIsArchived_Parms), Z_Construct_UFunction_UPico_AchievementDefinition_GetIsArchived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetIsArchived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinition_GetIsArchived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetIsArchived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinition_GetIsArchived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinition_GetIsArchived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinition_GetIsSecret_Statics
	{
		struct Pico_AchievementDefinition_eventGetIsSecret_Parms
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
	void Z_Construct_UFunction_UPico_AchievementDefinition_GetIsSecret_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_AchievementDefinition_eventGetIsSecret_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_AchievementDefinition_GetIsSecret_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_AchievementDefinition_eventGetIsSecret_Parms), &Z_Construct_UFunction_UPico_AchievementDefinition_GetIsSecret_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinition_GetIsSecret_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinition_GetIsSecret_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinition_GetIsSecret_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinition_GetIsSecret_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinition, nullptr, "GetIsSecret", nullptr, nullptr, sizeof(Pico_AchievementDefinition_eventGetIsSecret_Parms), Z_Construct_UFunction_UPico_AchievementDefinition_GetIsSecret_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetIsSecret_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinition_GetIsSecret_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetIsSecret_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinition_GetIsSecret()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinition_GetIsSecret_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinition_GetLockedImageURL_Statics
	{
		struct Pico_AchievementDefinition_eventGetLockedImageURL_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AchievementDefinition_GetLockedImageURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementDefinition_eventGetLockedImageURL_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinition_GetLockedImageURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinition_GetLockedImageURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinition_GetLockedImageURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinition_GetLockedImageURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinition, nullptr, "GetLockedImageURL", nullptr, nullptr, sizeof(Pico_AchievementDefinition_eventGetLockedImageURL_Parms), Z_Construct_UFunction_UPico_AchievementDefinition_GetLockedImageURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetLockedImageURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinition_GetLockedImageURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetLockedImageURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinition_GetLockedImageURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinition_GetLockedImageURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinition_GetName_Statics
	{
		struct Pico_AchievementDefinition_eventGetName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AchievementDefinition_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementDefinition_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinition_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinition_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinition_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinition_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinition, nullptr, "GetName", nullptr, nullptr, sizeof(Pico_AchievementDefinition_eventGetName_Parms), Z_Construct_UFunction_UPico_AchievementDefinition_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinition_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinition_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinition_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinition_GetTarget_Statics
	{
		struct Pico_AchievementDefinition_eventGetTarget_Parms
		{
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPico_AchievementDefinition_GetTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementDefinition_eventGetTarget_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinition_GetTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinition_GetTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinition_GetTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinition_GetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinition, nullptr, "GetTarget", nullptr, nullptr, sizeof(Pico_AchievementDefinition_eventGetTarget_Parms), Z_Construct_UFunction_UPico_AchievementDefinition_GetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinition_GetTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinition_GetTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinition_GetTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinition_GetTitle_Statics
	{
		struct Pico_AchievementDefinition_eventGetTitle_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AchievementDefinition_GetTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementDefinition_eventGetTitle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinition_GetTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinition_GetTitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinition_GetTitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinition_GetTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinition, nullptr, "GetTitle", nullptr, nullptr, sizeof(Pico_AchievementDefinition_eventGetTitle_Parms), Z_Construct_UFunction_UPico_AchievementDefinition_GetTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinition_GetTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinition_GetTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinition_GetTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinition_GetType_Statics
	{
		struct Pico_AchievementDefinition_eventGetType_Parms
		{
			EAchievementType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPico_AchievementDefinition_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPico_AchievementDefinition_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementDefinition_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemPico_EAchievementType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinition_GetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinition_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinition_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinition_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinition_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinition, nullptr, "GetType", nullptr, nullptr, sizeof(Pico_AchievementDefinition_eventGetType_Parms), Z_Construct_UFunction_UPico_AchievementDefinition_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinition_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinition_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinition_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedDescription_Statics
	{
		struct Pico_AchievementDefinition_eventGetUnlockedDescription_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementDefinition_eventGetUnlockedDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinition, nullptr, "GetUnlockedDescription", nullptr, nullptr, sizeof(Pico_AchievementDefinition_eventGetUnlockedDescription_Parms), Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedImageURL_Statics
	{
		struct Pico_AchievementDefinition_eventGetUnlockedImageURL_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedImageURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementDefinition_eventGetUnlockedImageURL_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedImageURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedImageURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedImageURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedImageURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinition, nullptr, "GetUnlockedImageURL", nullptr, nullptr, sizeof(Pico_AchievementDefinition_eventGetUnlockedImageURL_Parms), Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedImageURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedImageURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedImageURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedImageURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedImageURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedImageURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinition_GetWritePolicy_Statics
	{
		struct Pico_AchievementDefinition_eventGetWritePolicy_Parms
		{
			EAchievementWritePolicy ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPico_AchievementDefinition_GetWritePolicy_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPico_AchievementDefinition_GetWritePolicy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementDefinition_eventGetWritePolicy_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemPico_EAchievementWritePolicy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinition_GetWritePolicy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinition_GetWritePolicy_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinition_GetWritePolicy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinition_GetWritePolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinition_GetWritePolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinition, nullptr, "GetWritePolicy", nullptr, nullptr, sizeof(Pico_AchievementDefinition_eventGetWritePolicy_Parms), Z_Construct_UFunction_UPico_AchievementDefinition_GetWritePolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetWritePolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinition_GetWritePolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinition_GetWritePolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinition_GetWritePolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinition_GetWritePolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_AchievementDefinition_NoRegister()
	{
		return UPico_AchievementDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UPico_AchievementDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_AchievementDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_AchievementDefinition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_AchievementDefinition_GetBitfieldLength, "GetBitfieldLength" }, // 692217569
		{ &Z_Construct_UFunction_UPico_AchievementDefinition_GetDescription, "GetDescription" }, // 591504165
		{ &Z_Construct_UFunction_UPico_AchievementDefinition_GetID, "GetID" }, // 1801613492
		{ &Z_Construct_UFunction_UPico_AchievementDefinition_GetIsArchived, "GetIsArchived" }, // 2220534332
		{ &Z_Construct_UFunction_UPico_AchievementDefinition_GetIsSecret, "GetIsSecret" }, // 4001112956
		{ &Z_Construct_UFunction_UPico_AchievementDefinition_GetLockedImageURL, "GetLockedImageURL" }, // 3841818124
		{ &Z_Construct_UFunction_UPico_AchievementDefinition_GetName, "GetName" }, // 2240166744
		{ &Z_Construct_UFunction_UPico_AchievementDefinition_GetTarget, "GetTarget" }, // 4066576698
		{ &Z_Construct_UFunction_UPico_AchievementDefinition_GetTitle, "GetTitle" }, // 1471824333
		{ &Z_Construct_UFunction_UPico_AchievementDefinition_GetType, "GetType" }, // 1530355033
		{ &Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedDescription, "GetUnlockedDescription" }, // 4092275578
		{ &Z_Construct_UFunction_UPico_AchievementDefinition_GetUnlockedImageURL, "GetUnlockedImageURL" }, // 4047569051
		{ &Z_Construct_UFunction_UPico_AchievementDefinition_GetWritePolicy, "GetWritePolicy" }, // 111941294
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_AchievementDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_Achievements.h" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_AchievementDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_AchievementDefinition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_AchievementDefinition_Statics::ClassParams = {
		&UPico_AchievementDefinition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_AchievementDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AchievementDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_AchievementDefinition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_AchievementDefinition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_AchievementDefinition, 27042240);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_AchievementDefinition>()
	{
		return UPico_AchievementDefinition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_AchievementDefinition(Z_Construct_UClass_UPico_AchievementDefinition, &UPico_AchievementDefinition::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_AchievementDefinition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_AchievementDefinition);
	DEFINE_FUNCTION(UPico_AchievementProgressArray::execHasNextPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasNextPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementProgressArray::execGetTotalSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementProgressArray::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementProgressArray::execGetNextPageParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNextPageParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementProgressArray::execGetElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_AchievementProgress**)Z_Param__Result=P_THIS->GetElement(Z_Param_Index);
		P_NATIVE_END;
	}
	void UPico_AchievementProgressArray::StaticRegisterNativesUPico_AchievementProgressArray()
	{
		UClass* Class = UPico_AchievementProgressArray::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetElement", &UPico_AchievementProgressArray::execGetElement },
			{ "GetNextPageParam", &UPico_AchievementProgressArray::execGetNextPageParam },
			{ "GetSize", &UPico_AchievementProgressArray::execGetSize },
			{ "GetTotalSize", &UPico_AchievementProgressArray::execGetTotalSize },
			{ "HasNextPage", &UPico_AchievementProgressArray::execHasNextPage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_AchievementProgressArray_GetElement_Statics
	{
		struct Pico_AchievementProgressArray_eventGetElement_Parms
		{
			int32 Index;
			UPico_AchievementProgress* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_AchievementProgressArray_GetElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementProgressArray_eventGetElement_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_AchievementProgressArray_GetElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementProgressArray_eventGetElement_Parms, ReturnValue), Z_Construct_UClass_UPico_AchievementProgress_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementProgressArray_GetElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementProgressArray_GetElement_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementProgressArray_GetElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementProgressArray_GetElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Progress Array" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementProgressArray_GetElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementProgressArray, nullptr, "GetElement", nullptr, nullptr, sizeof(Pico_AchievementProgressArray_eventGetElement_Parms), Z_Construct_UFunction_UPico_AchievementProgressArray_GetElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgressArray_GetElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementProgressArray_GetElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgressArray_GetElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementProgressArray_GetElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementProgressArray_GetElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementProgressArray_GetNextPageParam_Statics
	{
		struct Pico_AchievementProgressArray_eventGetNextPageParam_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AchievementProgressArray_GetNextPageParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementProgressArray_eventGetNextPageParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementProgressArray_GetNextPageParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementProgressArray_GetNextPageParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementProgressArray_GetNextPageParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Progress Array" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementProgressArray_GetNextPageParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementProgressArray, nullptr, "GetNextPageParam", nullptr, nullptr, sizeof(Pico_AchievementProgressArray_eventGetNextPageParam_Parms), Z_Construct_UFunction_UPico_AchievementProgressArray_GetNextPageParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgressArray_GetNextPageParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementProgressArray_GetNextPageParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgressArray_GetNextPageParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementProgressArray_GetNextPageParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementProgressArray_GetNextPageParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementProgressArray_GetSize_Statics
	{
		struct Pico_AchievementProgressArray_eventGetSize_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_AchievementProgressArray_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementProgressArray_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementProgressArray_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementProgressArray_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementProgressArray_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Progress Array" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementProgressArray_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementProgressArray, nullptr, "GetSize", nullptr, nullptr, sizeof(Pico_AchievementProgressArray_eventGetSize_Parms), Z_Construct_UFunction_UPico_AchievementProgressArray_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgressArray_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementProgressArray_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgressArray_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementProgressArray_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementProgressArray_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementProgressArray_GetTotalSize_Statics
	{
		struct Pico_AchievementProgressArray_eventGetTotalSize_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_AchievementProgressArray_GetTotalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementProgressArray_eventGetTotalSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementProgressArray_GetTotalSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementProgressArray_GetTotalSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementProgressArray_GetTotalSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Progress Array" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementProgressArray_GetTotalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementProgressArray, nullptr, "GetTotalSize", nullptr, nullptr, sizeof(Pico_AchievementProgressArray_eventGetTotalSize_Parms), Z_Construct_UFunction_UPico_AchievementProgressArray_GetTotalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgressArray_GetTotalSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementProgressArray_GetTotalSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgressArray_GetTotalSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementProgressArray_GetTotalSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementProgressArray_GetTotalSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementProgressArray_HasNextPage_Statics
	{
		struct Pico_AchievementProgressArray_eventHasNextPage_Parms
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
	void Z_Construct_UFunction_UPico_AchievementProgressArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_AchievementProgressArray_eventHasNextPage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_AchievementProgressArray_HasNextPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_AchievementProgressArray_eventHasNextPage_Parms), &Z_Construct_UFunction_UPico_AchievementProgressArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementProgressArray_HasNextPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementProgressArray_HasNextPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementProgressArray_HasNextPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Progress Array" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementProgressArray_HasNextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementProgressArray, nullptr, "HasNextPage", nullptr, nullptr, sizeof(Pico_AchievementProgressArray_eventHasNextPage_Parms), Z_Construct_UFunction_UPico_AchievementProgressArray_HasNextPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgressArray_HasNextPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementProgressArray_HasNextPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementProgressArray_HasNextPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementProgressArray_HasNextPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementProgressArray_HasNextPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_AchievementProgressArray_NoRegister()
	{
		return UPico_AchievementProgressArray::StaticClass();
	}
	struct Z_Construct_UClass_UPico_AchievementProgressArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AchievementProgressArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementProgressArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AchievementProgressArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_AchievementProgressArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_AchievementProgressArray_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_AchievementProgressArray_GetElement, "GetElement" }, // 1861793055
		{ &Z_Construct_UFunction_UPico_AchievementProgressArray_GetNextPageParam, "GetNextPageParam" }, // 281721355
		{ &Z_Construct_UFunction_UPico_AchievementProgressArray_GetSize, "GetSize" }, // 1211929432
		{ &Z_Construct_UFunction_UPico_AchievementProgressArray_GetTotalSize, "GetTotalSize" }, // 338277375
		{ &Z_Construct_UFunction_UPico_AchievementProgressArray_HasNextPage, "HasNextPage" }, // 1306571560
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_AchievementProgressArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_Achievements.h" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_AchievementProgressArray_Statics::NewProp_AchievementProgressArray_Inner = { "AchievementProgressArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPico_AchievementProgress_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_AchievementProgressArray_Statics::NewProp_AchievementProgressArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPico_AchievementProgressArray_Statics::NewProp_AchievementProgressArray = { "AchievementProgressArray", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_AchievementProgressArray, AchievementProgressArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPico_AchievementProgressArray_Statics::NewProp_AchievementProgressArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AchievementProgressArray_Statics::NewProp_AchievementProgressArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_AchievementProgressArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_AchievementProgressArray_Statics::NewProp_AchievementProgressArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_AchievementProgressArray_Statics::NewProp_AchievementProgressArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_AchievementProgressArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_AchievementProgressArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_AchievementProgressArray_Statics::ClassParams = {
		&UPico_AchievementProgressArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_AchievementProgressArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AchievementProgressArray_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_AchievementProgressArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AchievementProgressArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_AchievementProgressArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_AchievementProgressArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_AchievementProgressArray, 2725163636);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_AchievementProgressArray>()
	{
		return UPico_AchievementProgressArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_AchievementProgressArray(Z_Construct_UClass_UPico_AchievementProgressArray, &UPico_AchievementProgressArray::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_AchievementProgressArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_AchievementProgressArray);
	DEFINE_FUNCTION(UPico_AchievementDefinitionArray::execHasNextPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasNextPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementDefinitionArray::execGetTotalSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementDefinitionArray::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementDefinitionArray::execGetNextPageParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNextPageParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AchievementDefinitionArray::execGetElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_AchievementDefinition**)Z_Param__Result=P_THIS->GetElement(Z_Param_Index);
		P_NATIVE_END;
	}
	void UPico_AchievementDefinitionArray::StaticRegisterNativesUPico_AchievementDefinitionArray()
	{
		UClass* Class = UPico_AchievementDefinitionArray::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetElement", &UPico_AchievementDefinitionArray::execGetElement },
			{ "GetNextPageParam", &UPico_AchievementDefinitionArray::execGetNextPageParam },
			{ "GetSize", &UPico_AchievementDefinitionArray::execGetSize },
			{ "GetTotalSize", &UPico_AchievementDefinitionArray::execGetTotalSize },
			{ "HasNextPage", &UPico_AchievementDefinitionArray::execHasNextPage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetElement_Statics
	{
		struct Pico_AchievementDefinitionArray_eventGetElement_Parms
		{
			int32 Index;
			UPico_AchievementDefinition* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementDefinitionArray_eventGetElement_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementDefinitionArray_eventGetElement_Parms, ReturnValue), Z_Construct_UClass_UPico_AchievementDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetElement_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition Array" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinitionArray, nullptr, "GetElement", nullptr, nullptr, sizeof(Pico_AchievementDefinitionArray_eventGetElement_Parms), Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetNextPageParam_Statics
	{
		struct Pico_AchievementDefinitionArray_eventGetNextPageParam_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetNextPageParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementDefinitionArray_eventGetNextPageParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetNextPageParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetNextPageParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetNextPageParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition Array" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetNextPageParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinitionArray, nullptr, "GetNextPageParam", nullptr, nullptr, sizeof(Pico_AchievementDefinitionArray_eventGetNextPageParam_Parms), Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetNextPageParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetNextPageParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetNextPageParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetNextPageParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetNextPageParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetNextPageParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetSize_Statics
	{
		struct Pico_AchievementDefinitionArray_eventGetSize_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementDefinitionArray_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition Array" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinitionArray, nullptr, "GetSize", nullptr, nullptr, sizeof(Pico_AchievementDefinitionArray_eventGetSize_Parms), Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetTotalSize_Statics
	{
		struct Pico_AchievementDefinitionArray_eventGetTotalSize_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetTotalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AchievementDefinitionArray_eventGetTotalSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetTotalSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetTotalSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetTotalSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition Array" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetTotalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinitionArray, nullptr, "GetTotalSize", nullptr, nullptr, sizeof(Pico_AchievementDefinitionArray_eventGetTotalSize_Parms), Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetTotalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetTotalSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetTotalSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetTotalSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetTotalSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetTotalSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AchievementDefinitionArray_HasNextPage_Statics
	{
		struct Pico_AchievementDefinitionArray_eventHasNextPage_Parms
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
	void Z_Construct_UFunction_UPico_AchievementDefinitionArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_AchievementDefinitionArray_eventHasNextPage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_AchievementDefinitionArray_HasNextPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_AchievementDefinitionArray_eventHasNextPage_Parms), &Z_Construct_UFunction_UPico_AchievementDefinitionArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AchievementDefinitionArray_HasNextPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AchievementDefinitionArray_HasNextPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AchievementDefinitionArray_HasNextPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Achievements|Achievement Definition Array" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AchievementDefinitionArray_HasNextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AchievementDefinitionArray, nullptr, "HasNextPage", nullptr, nullptr, sizeof(Pico_AchievementDefinitionArray_eventHasNextPage_Parms), Z_Construct_UFunction_UPico_AchievementDefinitionArray_HasNextPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinitionArray_HasNextPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AchievementDefinitionArray_HasNextPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AchievementDefinitionArray_HasNextPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AchievementDefinitionArray_HasNextPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AchievementDefinitionArray_HasNextPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_AchievementDefinitionArray_NoRegister()
	{
		return UPico_AchievementDefinitionArray::StaticClass();
	}
	struct Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AchievementDefinitionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementDefinitionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AchievementDefinitionArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetElement, "GetElement" }, // 870406534
		{ &Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetNextPageParam, "GetNextPageParam" }, // 3377486282
		{ &Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetSize, "GetSize" }, // 3238995718
		{ &Z_Construct_UFunction_UPico_AchievementDefinitionArray_GetTotalSize, "GetTotalSize" }, // 2145781922
		{ &Z_Construct_UFunction_UPico_AchievementDefinitionArray_HasNextPage, "HasNextPage" }, // 2959623585
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_Achievements.h" },
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::NewProp_AchievementDefinitionArray_Inner = { "AchievementDefinitionArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPico_AchievementDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::NewProp_AchievementDefinitionArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Achievements.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::NewProp_AchievementDefinitionArray = { "AchievementDefinitionArray", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_AchievementDefinitionArray, AchievementDefinitionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::NewProp_AchievementDefinitionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::NewProp_AchievementDefinitionArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::NewProp_AchievementDefinitionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::NewProp_AchievementDefinitionArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_AchievementDefinitionArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::ClassParams = {
		&UPico_AchievementDefinitionArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_AchievementDefinitionArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_AchievementDefinitionArray, 964885075);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_AchievementDefinitionArray>()
	{
		return UPico_AchievementDefinitionArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_AchievementDefinitionArray(Z_Construct_UClass_UPico_AchievementDefinitionArray, &UPico_AchievementDefinitionArray::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_AchievementDefinitionArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_AchievementDefinitionArray);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
