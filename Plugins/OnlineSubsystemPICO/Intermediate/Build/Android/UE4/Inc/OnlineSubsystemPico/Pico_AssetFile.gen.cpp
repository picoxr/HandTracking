// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Public/Pico_AssetFile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePico_AssetFile() {}
// Cross Module References
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AssetDetailsArray_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AssetStatus_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AssetFileDownloadCancelResult_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AssetFileDownloadResult_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AssetFileDeleteResult_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoAssetFileFunction_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoAssetFileFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AssetFileDeleteResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AssetDetails_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AssetDetails();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AssetDetailsArray();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AssetFileDownloadCancelResult();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AssetFileDownloadUpdate_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AssetFileDownloadUpdate();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EAssetFileDownloadCompleteStatus();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AssetFileDownloadResult();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AssetStatus();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AssetFileDeleteForSafety_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_AssetFileDeleteForSafety();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetAssetFileList_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_AssetDetailsArray* AssetDetailsArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetDetailsArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetAssetFileList_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetAssetFileList_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetAssetFileList_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::NewProp_AssetDetailsArray = { "AssetDetailsArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetAssetFileList_Parms, AssetDetailsArray), Z_Construct_UClass_UPico_AssetDetailsArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::NewProp_AssetDetailsArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetAssetFileList__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetAssetFileList_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetAssetFileStatus_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_AssetStatus* AssetFileStatus;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetFileStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetAssetFileStatus_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetAssetFileStatus_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetAssetFileStatus_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::NewProp_AssetFileStatus = { "AssetFileStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetAssetFileStatus_Parms, AssetFileStatus), Z_Construct_UClass_UPico_AssetStatus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::NewProp_AssetFileStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetAssetFileStatus__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetAssetFileStatus_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventAssetFileDownloadCancelResult_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_AssetFileDownloadCancelResult* DownloadCancelResult;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownloadCancelResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventAssetFileDownloadCancelResult_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventAssetFileDownloadCancelResult_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventAssetFileDownloadCancelResult_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::NewProp_DownloadCancelResult = { "DownloadCancelResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventAssetFileDownloadCancelResult_Parms, DownloadCancelResult), Z_Construct_UClass_UPico_AssetFileDownloadCancelResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::NewProp_DownloadCancelResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "AssetFileDownloadCancelResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventAssetFileDownloadCancelResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventAssetFileDownloadResult_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_AssetFileDownloadResult* DownloadResult;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownloadResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventAssetFileDownloadResult_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventAssetFileDownloadResult_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventAssetFileDownloadResult_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::NewProp_DownloadResult = { "DownloadResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventAssetFileDownloadResult_Parms, DownloadResult), Z_Construct_UClass_UPico_AssetFileDownloadResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::NewProp_DownloadResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "AssetFileDownloadResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventAssetFileDownloadResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventAssetFileDeleteResult_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_AssetFileDeleteResult* DeleteResult;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeleteResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventAssetFileDeleteResult_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventAssetFileDeleteResult_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventAssetFileDeleteResult_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::NewProp_DeleteResult = { "DeleteResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventAssetFileDeleteResult_Parms, DeleteResult), Z_Construct_UClass_UPico_AssetFileDeleteResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::NewProp_DeleteResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "AssetFileDeleteResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventAssetFileDeleteResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePicoAssetFileFunction::execGetAssetFileStatusByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetFileName);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetAssetFileStatusByNameDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoAssetFileFunction::GetAssetFileStatusByName(Z_Param_WorldContextObject,Z_Param_AssetFileName,FGetAssetFileStatus(Z_Param_InGetAssetFileStatusByNameDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoAssetFileFunction::execGetAssetFileStatusById)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetFileID);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetAssetFileStatusByIdDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoAssetFileFunction::GetAssetFileStatusById(Z_Param_WorldContextObject,Z_Param_AssetFileID,FGetAssetFileStatus(Z_Param_InGetAssetFileStatusByIdDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoAssetFileFunction::execGetNextAssetDetailsArrayPage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UPico_AssetDetailsArray,Z_Param_InAssetDetailsArray);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetNextAssetDetailsArrayPageDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoAssetFileFunction::GetNextAssetDetailsArrayPage(Z_Param_WorldContextObject,Z_Param_InAssetDetailsArray,FGetAssetFileList(Z_Param_InGetNextAssetDetailsArrayPageDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoAssetFileFunction::execGetAssetFileList)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetAssetFileListDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoAssetFileFunction::GetAssetFileList(Z_Param_WorldContextObject,FGetAssetFileList(Z_Param_InGetAssetFileListDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoAssetFileFunction::execDownloadCancelByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetFileName);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InDownloadCancelByNameDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoAssetFileFunction::DownloadCancelByName(Z_Param_WorldContextObject,Z_Param_AssetFileName,FAssetFileDownloadCancelResult(Z_Param_InDownloadCancelByNameDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoAssetFileFunction::execDownloadCancelById)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetFileID);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InDownloadCancelByIDDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoAssetFileFunction::DownloadCancelById(Z_Param_WorldContextObject,Z_Param_AssetFileID,FAssetFileDownloadCancelResult(Z_Param_InDownloadCancelByIDDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoAssetFileFunction::execDownloadByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetFileName);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InDownloadByNameDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoAssetFileFunction::DownloadByName(Z_Param_WorldContextObject,Z_Param_AssetFileName,FAssetFileDownloadResult(Z_Param_InDownloadByNameDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoAssetFileFunction::execDownloadById)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetFileID);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InDownloadByIDDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoAssetFileFunction::DownloadById(Z_Param_WorldContextObject,Z_Param_AssetFileID,FAssetFileDownloadResult(Z_Param_InDownloadByIDDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoAssetFileFunction::execDeleteByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetFileName);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InDeleteByNameDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoAssetFileFunction::DeleteByName(Z_Param_WorldContextObject,Z_Param_AssetFileName,FAssetFileDeleteResult(Z_Param_InDeleteByNameDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoAssetFileFunction::execDeleteByID)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetFileID);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InDeleteByIDDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoAssetFileFunction::DeleteByID(Z_Param_WorldContextObject,Z_Param_AssetFileID,FAssetFileDeleteResult(Z_Param_InDeleteByIDDelegate));
		P_NATIVE_END;
	}
	void UOnlinePicoAssetFileFunction::StaticRegisterNativesUOnlinePicoAssetFileFunction()
	{
		UClass* Class = UOnlinePicoAssetFileFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteByID", &UOnlinePicoAssetFileFunction::execDeleteByID },
			{ "DeleteByName", &UOnlinePicoAssetFileFunction::execDeleteByName },
			{ "DownloadById", &UOnlinePicoAssetFileFunction::execDownloadById },
			{ "DownloadByName", &UOnlinePicoAssetFileFunction::execDownloadByName },
			{ "DownloadCancelById", &UOnlinePicoAssetFileFunction::execDownloadCancelById },
			{ "DownloadCancelByName", &UOnlinePicoAssetFileFunction::execDownloadCancelByName },
			{ "GetAssetFileList", &UOnlinePicoAssetFileFunction::execGetAssetFileList },
			{ "GetAssetFileStatusById", &UOnlinePicoAssetFileFunction::execGetAssetFileStatusById },
			{ "GetAssetFileStatusByName", &UOnlinePicoAssetFileFunction::execGetAssetFileStatusByName },
			{ "GetNextAssetDetailsArrayPage", &UOnlinePicoAssetFileFunction::execGetNextAssetDetailsArrayPage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics
	{
		struct OnlinePicoAssetFileFunction_eventDeleteByID_Parms
		{
			UObject* WorldContextObject;
			FString AssetFileID;
			FScriptDelegate InDeleteByIDDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetFileID;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InDeleteByIDDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDeleteByID_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::NewProp_AssetFileID = { "AssetFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDeleteByID_Parms, AssetFileID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::NewProp_InDeleteByIDDelegate = { "InDeleteByIDDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDeleteByID_Parms, InDeleteByIDDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoAssetFileFunction_eventDeleteByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoAssetFileFunction_eventDeleteByID_Parms), &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::NewProp_AssetFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::NewProp_InDeleteByIDDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|AssetFile" },
		{ "Comment", "/// <summary>\n/// Deletes an installed asset file by asset file ID. The corresponding\n/// asset file will be removed from the device. \n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"AssetFileID\">The ID of the installed asset file to delete.</param>\n/// <param name=\"InDeleteByIDDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
		{ "ToolTip", "<summary>\nDeletes an installed asset file by asset file ID. The corresponding\nasset file will be removed from the device.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"AssetFileID\">The ID of the installed asset file to delete.</param>\n<param name=\"InDeleteByIDDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAssetFileFunction, nullptr, "DeleteByID", nullptr, nullptr, sizeof(OnlinePicoAssetFileFunction_eventDeleteByID_Parms), Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics
	{
		struct OnlinePicoAssetFileFunction_eventDeleteByName_Parms
		{
			UObject* WorldContextObject;
			FString AssetFileName;
			FScriptDelegate InDeleteByNameDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetFileName;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InDeleteByNameDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDeleteByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::NewProp_AssetFileName = { "AssetFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDeleteByName_Parms, AssetFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::NewProp_InDeleteByNameDelegate = { "InDeleteByNameDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDeleteByName_Parms, InDeleteByNameDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDeleteResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoAssetFileFunction_eventDeleteByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoAssetFileFunction_eventDeleteByName_Parms), &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::NewProp_AssetFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::NewProp_InDeleteByNameDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|AssetFile" },
		{ "Comment", "/// <summary>\n/// Deletes an installed asset file by asset file name. The corresponding\n/// asset file will be removed from the device. \n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"AssetFileName\">The name of the installed asset file to delete.</param>\n/// <param name=\"InDeleteByNameDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
		{ "ToolTip", "<summary>\nDeletes an installed asset file by asset file name. The corresponding\nasset file will be removed from the device.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"AssetFileName\">The name of the installed asset file to delete.</param>\n<param name=\"InDeleteByNameDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAssetFileFunction, nullptr, "DeleteByName", nullptr, nullptr, sizeof(OnlinePicoAssetFileFunction_eventDeleteByName_Parms), Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics
	{
		struct OnlinePicoAssetFileFunction_eventDownloadById_Parms
		{
			UObject* WorldContextObject;
			FString AssetFileID;
			FScriptDelegate InDownloadByIDDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetFileID;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InDownloadByIDDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDownloadById_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::NewProp_AssetFileID = { "AssetFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDownloadById_Parms, AssetFileID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::NewProp_InDownloadByIDDelegate = { "InDownloadByIDDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDownloadById_Parms, InDownloadByIDDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoAssetFileFunction_eventDownloadById_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoAssetFileFunction_eventDownloadById_Parms), &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::NewProp_AssetFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::NewProp_InDownloadByIDDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|AssetFile" },
		{ "Comment", "/// <summary>\n/// Downloads an asset file by asset file ID.\n/// </summary>\n/// <param name =\"WorldContextObject\">The ID of the asset file to download.</param>\n/// <param name=\"AssetFileID\">The asset file ID.</param>\n/// <param name=\"InDownloadByIDDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
		{ "ToolTip", "<summary>\nDownloads an asset file by asset file ID.\n</summary>\n<param name =\"WorldContextObject\">The ID of the asset file to download.</param>\n<param name=\"AssetFileID\">The asset file ID.</param>\n<param name=\"InDownloadByIDDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAssetFileFunction, nullptr, "DownloadById", nullptr, nullptr, sizeof(OnlinePicoAssetFileFunction_eventDownloadById_Parms), Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics
	{
		struct OnlinePicoAssetFileFunction_eventDownloadByName_Parms
		{
			UObject* WorldContextObject;
			FString AssetFileName;
			FScriptDelegate InDownloadByNameDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetFileName;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InDownloadByNameDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDownloadByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::NewProp_AssetFileName = { "AssetFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDownloadByName_Parms, AssetFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::NewProp_InDownloadByNameDelegate = { "InDownloadByNameDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDownloadByName_Parms, InDownloadByNameDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoAssetFileFunction_eventDownloadByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoAssetFileFunction_eventDownloadByName_Parms), &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::NewProp_AssetFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::NewProp_InDownloadByNameDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|AssetFile" },
		{ "Comment", "/// <summary>\n/// Downloads an asset file by asset file name.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"AssetFileName\">The name of the asset file to download.</param>\n/// <param name=\"InDownloadByNameDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
		{ "ToolTip", "<summary>\nDownloads an asset file by asset file name.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"AssetFileName\">The name of the asset file to download.</param>\n<param name=\"InDownloadByNameDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAssetFileFunction, nullptr, "DownloadByName", nullptr, nullptr, sizeof(OnlinePicoAssetFileFunction_eventDownloadByName_Parms), Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics
	{
		struct OnlinePicoAssetFileFunction_eventDownloadCancelById_Parms
		{
			UObject* WorldContextObject;
			FString AssetFileID;
			FScriptDelegate InDownloadCancelByIDDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetFileID;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InDownloadCancelByIDDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDownloadCancelById_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::NewProp_AssetFileID = { "AssetFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDownloadCancelById_Parms, AssetFileID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::NewProp_InDownloadCancelByIDDelegate = { "InDownloadCancelByIDDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDownloadCancelById_Parms, InDownloadCancelByIDDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoAssetFileFunction_eventDownloadCancelById_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoAssetFileFunction_eventDownloadCancelById_Parms), &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::NewProp_AssetFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::NewProp_InDownloadCancelByIDDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|AssetFile" },
		{ "Comment", "/// <summary>\n/// Cancels the download of an asset file by asset file ID.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"AssetFileID\">The ID of the asset file to cancel download for.</param>\n/// <param name=\"InDownloadCancelByIDDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
		{ "ToolTip", "<summary>\nCancels the download of an asset file by asset file ID.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"AssetFileID\">The ID of the asset file to cancel download for.</param>\n<param name=\"InDownloadCancelByIDDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAssetFileFunction, nullptr, "DownloadCancelById", nullptr, nullptr, sizeof(OnlinePicoAssetFileFunction_eventDownloadCancelById_Parms), Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics
	{
		struct OnlinePicoAssetFileFunction_eventDownloadCancelByName_Parms
		{
			UObject* WorldContextObject;
			FString AssetFileName;
			FScriptDelegate InDownloadCancelByNameDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetFileName;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InDownloadCancelByNameDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDownloadCancelByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::NewProp_AssetFileName = { "AssetFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDownloadCancelByName_Parms, AssetFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::NewProp_InDownloadCancelByNameDelegate = { "InDownloadCancelByNameDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventDownloadCancelByName_Parms, InDownloadCancelByNameDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_AssetFileDownloadCancelResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoAssetFileFunction_eventDownloadCancelByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoAssetFileFunction_eventDownloadCancelByName_Parms), &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::NewProp_AssetFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::NewProp_InDownloadCancelByNameDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|AssetFile" },
		{ "Comment", "/// <summary>\n/// Cancels the download of an asset file by asset file name.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"AssetFileName\">The name of the asset file to cancel download for.</param>\n/// <param name=\"InDownloadCancelByNameDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
		{ "ToolTip", "<summary>\nCancels the download of an asset file by asset file name.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"AssetFileName\">The name of the asset file to cancel download for.</param>\n<param name=\"InDownloadCancelByNameDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAssetFileFunction, nullptr, "DownloadCancelByName", nullptr, nullptr, sizeof(OnlinePicoAssetFileFunction_eventDownloadCancelByName_Parms), Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics
	{
		struct OnlinePicoAssetFileFunction_eventGetAssetFileList_Parms
		{
			UObject* WorldContextObject;
			FScriptDelegate InGetAssetFileListDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetAssetFileListDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventGetAssetFileList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics::NewProp_InGetAssetFileListDelegate = { "InGetAssetFileListDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventGetAssetFileList_Parms, InGetAssetFileListDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoAssetFileFunction_eventGetAssetFileList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoAssetFileFunction_eventGetAssetFileList_Parms), &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics::NewProp_InGetAssetFileListDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|AssetFile" },
		{ "Comment", "/// <summary>\n/// Gets the asset file list.  \n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"InGetAssetFileListDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
		{ "ToolTip", "<summary>\nGets the asset file list.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"InGetAssetFileListDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAssetFileFunction, nullptr, "GetAssetFileList", nullptr, nullptr, sizeof(OnlinePicoAssetFileFunction_eventGetAssetFileList_Parms), Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics
	{
		struct OnlinePicoAssetFileFunction_eventGetAssetFileStatusById_Parms
		{
			UObject* WorldContextObject;
			FString AssetFileID;
			FScriptDelegate InGetAssetFileStatusByIdDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetFileID;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetAssetFileStatusByIdDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventGetAssetFileStatusById_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::NewProp_AssetFileID = { "AssetFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventGetAssetFileStatusById_Parms, AssetFileID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::NewProp_InGetAssetFileStatusByIdDelegate = { "InGetAssetFileStatusByIdDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventGetAssetFileStatusById_Parms, InGetAssetFileStatusByIdDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoAssetFileFunction_eventGetAssetFileStatusById_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoAssetFileFunction_eventGetAssetFileStatusById_Parms), &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::NewProp_AssetFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::NewProp_InGetAssetFileStatusByIdDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|AssetFile" },
		{ "Comment", "/// <summary>\n/// Gets the download status of an asset file by asset file ID.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"AssetFileID\">The ID of the asset file to get the download status for.</param>\n/// <param name=\"InGetAssetFileStatusByIdDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>     \n" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
		{ "ToolTip", "<summary>\nGets the download status of an asset file by asset file ID.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"AssetFileID\">The ID of the asset file to get the download status for.</param>\n<param name=\"InGetAssetFileStatusByIdDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAssetFileFunction, nullptr, "GetAssetFileStatusById", nullptr, nullptr, sizeof(OnlinePicoAssetFileFunction_eventGetAssetFileStatusById_Parms), Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics
	{
		struct OnlinePicoAssetFileFunction_eventGetAssetFileStatusByName_Parms
		{
			UObject* WorldContextObject;
			FString AssetFileName;
			FScriptDelegate InGetAssetFileStatusByNameDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetFileName;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetAssetFileStatusByNameDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventGetAssetFileStatusByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::NewProp_AssetFileName = { "AssetFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventGetAssetFileStatusByName_Parms, AssetFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::NewProp_InGetAssetFileStatusByNameDelegate = { "InGetAssetFileStatusByNameDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventGetAssetFileStatusByName_Parms, InGetAssetFileStatusByNameDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileStatus__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoAssetFileFunction_eventGetAssetFileStatusByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoAssetFileFunction_eventGetAssetFileStatusByName_Parms), &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::NewProp_AssetFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::NewProp_InGetAssetFileStatusByNameDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|AssetFile" },
		{ "Comment", "/// <summary>\n/// Gets the download status of an asset file by asset file name.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"AssetFileName\">The name of the asset file to get the download status for.</param>\n/// <param name=\"InGetAssetFileStatusByNameDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>     \n" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
		{ "ToolTip", "<summary>\nGets the download status of an asset file by asset file name.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"AssetFileName\">The name of the asset file to get the download status for.</param>\n<param name=\"InGetAssetFileStatusByNameDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAssetFileFunction, nullptr, "GetAssetFileStatusByName", nullptr, nullptr, sizeof(OnlinePicoAssetFileFunction_eventGetAssetFileStatusByName_Parms), Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics
	{
		struct OnlinePicoAssetFileFunction_eventGetNextAssetDetailsArrayPage_Parms
		{
			UObject* WorldContextObject;
			UPico_AssetDetailsArray* InAssetDetailsArray;
			FScriptDelegate InGetNextAssetDetailsArrayPageDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAssetDetailsArray;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetNextAssetDetailsArrayPageDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventGetNextAssetDetailsArrayPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::NewProp_InAssetDetailsArray = { "InAssetDetailsArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventGetNextAssetDetailsArrayPage_Parms, InAssetDetailsArray), Z_Construct_UClass_UPico_AssetDetailsArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::NewProp_InGetNextAssetDetailsArrayPageDelegate = { "InGetNextAssetDetailsArrayPageDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoAssetFileFunction_eventGetNextAssetDetailsArrayPage_Parms, InGetNextAssetDetailsArrayPageDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAssetFileList__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoAssetFileFunction_eventGetNextAssetDetailsArrayPage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoAssetFileFunction_eventGetNextAssetDetailsArrayPage_Parms), &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::NewProp_InAssetDetailsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::NewProp_InGetNextAssetDetailsArrayPageDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|AssetFile" },
		{ "Comment", "/// <summary>\n/// Gets the next page of the asset file list.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"InAssetDetailsArray\">The current asset details array object.</param>\n/// <param name=\"InGetNextAssetDetailsArrayPageDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
		{ "ToolTip", "<summary>\nGets the next page of the asset file list.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"InAssetDetailsArray\">The current asset details array object.</param>\n<param name=\"InGetNextAssetDetailsArrayPageDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoAssetFileFunction, nullptr, "GetNextAssetDetailsArrayPage", nullptr, nullptr, sizeof(OnlinePicoAssetFileFunction_eventGetNextAssetDetailsArrayPage_Parms), Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlinePicoAssetFileFunction_NoRegister()
	{
		return UOnlinePicoAssetFileFunction::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePicoAssetFileFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePicoAssetFileFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePicoAssetFileFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByID, "DeleteByID" }, // 1503462908
		{ &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DeleteByName, "DeleteByName" }, // 4228876109
		{ &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadById, "DownloadById" }, // 2704475952
		{ &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadByName, "DownloadByName" }, // 1149084179
		{ &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelById, "DownloadCancelById" }, // 2262462323
		{ &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_DownloadCancelByName, "DownloadCancelByName" }, // 2455993703
		{ &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileList, "GetAssetFileList" }, // 16846152
		{ &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusById, "GetAssetFileStatusById" }, // 1152702409
		{ &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetAssetFileStatusByName, "GetAssetFileStatusByName" }, // 2561680085
		{ &Z_Construct_UFunction_UOnlinePicoAssetFileFunction_GetNextAssetDetailsArrayPage, "GetNextAssetDetailsArrayPage" }, // 2713590575
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoAssetFileFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pico_AssetFile.h" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePicoAssetFileFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePicoAssetFileFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePicoAssetFileFunction_Statics::ClassParams = {
		&UOnlinePicoAssetFileFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoAssetFileFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoAssetFileFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePicoAssetFileFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlinePicoAssetFileFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlinePicoAssetFileFunction, 3594635935);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UOnlinePicoAssetFileFunction>()
	{
		return UOnlinePicoAssetFileFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlinePicoAssetFileFunction(Z_Construct_UClass_UOnlinePicoAssetFileFunction, &UOnlinePicoAssetFileFunction::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UOnlinePicoAssetFileFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePicoAssetFileFunction);
	DEFINE_FUNCTION(UPico_AssetFileDeleteResult::execGetSuccess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSuccess();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetFileDeleteResult::execGetFilePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFilePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetFileDeleteResult::execGetAssetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAssetId();
		P_NATIVE_END;
	}
	void UPico_AssetFileDeleteResult::StaticRegisterNativesUPico_AssetFileDeleteResult()
	{
		UClass* Class = UPico_AssetFileDeleteResult::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetId", &UPico_AssetFileDeleteResult::execGetAssetId },
			{ "GetFilePath", &UPico_AssetFileDeleteResult::execGetFilePath },
			{ "GetSuccess", &UPico_AssetFileDeleteResult::execGetSuccess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetAssetId_Statics
	{
		struct Pico_AssetFileDeleteResult_eventGetAssetId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetAssetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetFileDeleteResult_eventGetAssetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetAssetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetAssetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetAssetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Delete Result" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetAssetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetFileDeleteResult, nullptr, "GetAssetId", nullptr, nullptr, sizeof(Pico_AssetFileDeleteResult_eventGetAssetId_Parms), Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetAssetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetAssetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetAssetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetAssetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetAssetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetAssetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetFilePath_Statics
	{
		struct Pico_AssetFileDeleteResult_eventGetFilePath_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetFileDeleteResult_eventGetFilePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetFilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Delete Result" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetFileDeleteResult, nullptr, "GetFilePath", nullptr, nullptr, sizeof(Pico_AssetFileDeleteResult_eventGetFilePath_Parms), Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetSuccess_Statics
	{
		struct Pico_AssetFileDeleteResult_eventGetSuccess_Parms
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
	void Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetSuccess_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_AssetFileDeleteResult_eventGetSuccess_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetSuccess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_AssetFileDeleteResult_eventGetSuccess_Parms), &Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetSuccess_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetSuccess_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetSuccess_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Delete Result" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetFileDeleteResult, nullptr, "GetSuccess", nullptr, nullptr, sizeof(Pico_AssetFileDeleteResult_eventGetSuccess_Parms), Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_AssetFileDeleteResult_NoRegister()
	{
		return UPico_AssetFileDeleteResult::StaticClass();
	}
	struct Z_Construct_UClass_UPico_AssetFileDeleteResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_AssetFileDeleteResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_AssetFileDeleteResult_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetAssetId, "GetAssetId" }, // 195382976
		{ &Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetFilePath, "GetFilePath" }, // 3018532331
		{ &Z_Construct_UFunction_UPico_AssetFileDeleteResult_GetSuccess, "GetSuccess" }, // 3262088471
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_AssetFileDeleteResult_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_AssetFile.h" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_AssetFileDeleteResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_AssetFileDeleteResult>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_AssetFileDeleteResult_Statics::ClassParams = {
		&UPico_AssetFileDeleteResult::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_AssetFileDeleteResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AssetFileDeleteResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_AssetFileDeleteResult()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_AssetFileDeleteResult_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_AssetFileDeleteResult, 3291060152);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_AssetFileDeleteResult>()
	{
		return UPico_AssetFileDeleteResult::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_AssetFileDeleteResult(Z_Construct_UClass_UPico_AssetFileDeleteResult, &UPico_AssetFileDeleteResult::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_AssetFileDeleteResult"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_AssetFileDeleteResult);
	DEFINE_FUNCTION(UPico_AssetDetails::execGetIapIconUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIapIconUrl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetDetails::execGetIapDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIapDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetDetails::execGetIapCurrency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIapCurrency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetDetails::execGetIapPrice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIapPrice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetDetails::execGetIapName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIapName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetDetails::execGetIapSku)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIapSku();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetDetails::execGetVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetDetails::execGetFilename)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFilename();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetDetails::execGetMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMetadata();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetDetails::execGetIapStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIapStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetDetails::execGetDownloadStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDownloadStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetDetails::execGetAssetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAssetType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetDetails::execGetFilePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFilePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetDetails::execGetAssetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAssetId();
		P_NATIVE_END;
	}
	void UPico_AssetDetails::StaticRegisterNativesUPico_AssetDetails()
	{
		UClass* Class = UPico_AssetDetails::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetId", &UPico_AssetDetails::execGetAssetId },
			{ "GetAssetType", &UPico_AssetDetails::execGetAssetType },
			{ "GetDownloadStatus", &UPico_AssetDetails::execGetDownloadStatus },
			{ "GetFilename", &UPico_AssetDetails::execGetFilename },
			{ "GetFilePath", &UPico_AssetDetails::execGetFilePath },
			{ "GetIapCurrency", &UPico_AssetDetails::execGetIapCurrency },
			{ "GetIapDescription", &UPico_AssetDetails::execGetIapDescription },
			{ "GetIapIconUrl", &UPico_AssetDetails::execGetIapIconUrl },
			{ "GetIapName", &UPico_AssetDetails::execGetIapName },
			{ "GetIapPrice", &UPico_AssetDetails::execGetIapPrice },
			{ "GetIapSku", &UPico_AssetDetails::execGetIapSku },
			{ "GetIapStatus", &UPico_AssetDetails::execGetIapStatus },
			{ "GetMetadata", &UPico_AssetDetails::execGetMetadata },
			{ "GetVersion", &UPico_AssetDetails::execGetVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_AssetDetails_GetAssetId_Statics
	{
		struct Pico_AssetDetails_eventGetAssetId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetDetails_GetAssetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetails_eventGetAssetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetails_GetAssetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetails_GetAssetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetails_GetAssetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetails_GetAssetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetails, nullptr, "GetAssetId", nullptr, nullptr, sizeof(Pico_AssetDetails_eventGetAssetId_Parms), Z_Construct_UFunction_UPico_AssetDetails_GetAssetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetAssetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetails_GetAssetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetAssetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetails_GetAssetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetails_GetAssetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetDetails_GetAssetType_Statics
	{
		struct Pico_AssetDetails_eventGetAssetType_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetDetails_GetAssetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetails_eventGetAssetType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetails_GetAssetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetails_GetAssetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetails_GetAssetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetails_GetAssetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetails, nullptr, "GetAssetType", nullptr, nullptr, sizeof(Pico_AssetDetails_eventGetAssetType_Parms), Z_Construct_UFunction_UPico_AssetDetails_GetAssetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetAssetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetails_GetAssetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetAssetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetails_GetAssetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetails_GetAssetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetDetails_GetDownloadStatus_Statics
	{
		struct Pico_AssetDetails_eventGetDownloadStatus_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetDetails_GetDownloadStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetails_eventGetDownloadStatus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetails_GetDownloadStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetails_GetDownloadStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetails_GetDownloadStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetails_GetDownloadStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetails, nullptr, "GetDownloadStatus", nullptr, nullptr, sizeof(Pico_AssetDetails_eventGetDownloadStatus_Parms), Z_Construct_UFunction_UPico_AssetDetails_GetDownloadStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetDownloadStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetails_GetDownloadStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetDownloadStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetails_GetDownloadStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetails_GetDownloadStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetDetails_GetFilename_Statics
	{
		struct Pico_AssetDetails_eventGetFilename_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetDetails_GetFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetails_eventGetFilename_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetails_GetFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetails_GetFilename_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetails_GetFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetails_GetFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetails, nullptr, "GetFilename", nullptr, nullptr, sizeof(Pico_AssetDetails_eventGetFilename_Parms), Z_Construct_UFunction_UPico_AssetDetails_GetFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetails_GetFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetails_GetFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetails_GetFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetDetails_GetFilePath_Statics
	{
		struct Pico_AssetDetails_eventGetFilePath_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetDetails_GetFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetails_eventGetFilePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetails_GetFilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetails_GetFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetails_GetFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetails_GetFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetails, nullptr, "GetFilePath", nullptr, nullptr, sizeof(Pico_AssetDetails_eventGetFilePath_Parms), Z_Construct_UFunction_UPico_AssetDetails_GetFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetails_GetFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetails_GetFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetails_GetFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetDetails_GetIapCurrency_Statics
	{
		struct Pico_AssetDetails_eventGetIapCurrency_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetDetails_GetIapCurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetails_eventGetIapCurrency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetails_GetIapCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetails_GetIapCurrency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetails_GetIapCurrency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetails_GetIapCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetails, nullptr, "GetIapCurrency", nullptr, nullptr, sizeof(Pico_AssetDetails_eventGetIapCurrency_Parms), Z_Construct_UFunction_UPico_AssetDetails_GetIapCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetIapCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetails_GetIapCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetIapCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetails_GetIapCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetails_GetIapCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetDetails_GetIapDescription_Statics
	{
		struct Pico_AssetDetails_eventGetIapDescription_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetDetails_GetIapDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetails_eventGetIapDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetails_GetIapDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetails_GetIapDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetails_GetIapDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetails_GetIapDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetails, nullptr, "GetIapDescription", nullptr, nullptr, sizeof(Pico_AssetDetails_eventGetIapDescription_Parms), Z_Construct_UFunction_UPico_AssetDetails_GetIapDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetIapDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetails_GetIapDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetIapDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetails_GetIapDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetails_GetIapDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetDetails_GetIapIconUrl_Statics
	{
		struct Pico_AssetDetails_eventGetIapIconUrl_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetDetails_GetIapIconUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetails_eventGetIapIconUrl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetails_GetIapIconUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetails_GetIapIconUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetails_GetIapIconUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetails_GetIapIconUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetails, nullptr, "GetIapIconUrl", nullptr, nullptr, sizeof(Pico_AssetDetails_eventGetIapIconUrl_Parms), Z_Construct_UFunction_UPico_AssetDetails_GetIapIconUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetIapIconUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetails_GetIapIconUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetIapIconUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetails_GetIapIconUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetails_GetIapIconUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetDetails_GetIapName_Statics
	{
		struct Pico_AssetDetails_eventGetIapName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetDetails_GetIapName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetails_eventGetIapName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetails_GetIapName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetails_GetIapName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetails_GetIapName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetails_GetIapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetails, nullptr, "GetIapName", nullptr, nullptr, sizeof(Pico_AssetDetails_eventGetIapName_Parms), Z_Construct_UFunction_UPico_AssetDetails_GetIapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetIapName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetails_GetIapName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetIapName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetails_GetIapName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetails_GetIapName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetDetails_GetIapPrice_Statics
	{
		struct Pico_AssetDetails_eventGetIapPrice_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetDetails_GetIapPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetails_eventGetIapPrice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetails_GetIapPrice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetails_GetIapPrice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetails_GetIapPrice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetails_GetIapPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetails, nullptr, "GetIapPrice", nullptr, nullptr, sizeof(Pico_AssetDetails_eventGetIapPrice_Parms), Z_Construct_UFunction_UPico_AssetDetails_GetIapPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetIapPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetails_GetIapPrice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetIapPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetails_GetIapPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetails_GetIapPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetDetails_GetIapSku_Statics
	{
		struct Pico_AssetDetails_eventGetIapSku_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetDetails_GetIapSku_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetails_eventGetIapSku_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetails_GetIapSku_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetails_GetIapSku_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetails_GetIapSku_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetails_GetIapSku_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetails, nullptr, "GetIapSku", nullptr, nullptr, sizeof(Pico_AssetDetails_eventGetIapSku_Parms), Z_Construct_UFunction_UPico_AssetDetails_GetIapSku_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetIapSku_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetails_GetIapSku_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetIapSku_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetails_GetIapSku()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetails_GetIapSku_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetDetails_GetIapStatus_Statics
	{
		struct Pico_AssetDetails_eventGetIapStatus_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetDetails_GetIapStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetails_eventGetIapStatus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetails_GetIapStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetails_GetIapStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetails_GetIapStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetails_GetIapStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetails, nullptr, "GetIapStatus", nullptr, nullptr, sizeof(Pico_AssetDetails_eventGetIapStatus_Parms), Z_Construct_UFunction_UPico_AssetDetails_GetIapStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetIapStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetails_GetIapStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetIapStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetails_GetIapStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetails_GetIapStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetDetails_GetMetadata_Statics
	{
		struct Pico_AssetDetails_eventGetMetadata_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetDetails_GetMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetails_eventGetMetadata_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetails_GetMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetails_GetMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetails_GetMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetails_GetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetails, nullptr, "GetMetadata", nullptr, nullptr, sizeof(Pico_AssetDetails_eventGetMetadata_Parms), Z_Construct_UFunction_UPico_AssetDetails_GetMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetails_GetMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetails_GetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetails_GetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetDetails_GetVersion_Statics
	{
		struct Pico_AssetDetails_eventGetVersion_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_AssetDetails_GetVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetails_eventGetVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetails_GetVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetails_GetVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetails_GetVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetails_GetVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetails, nullptr, "GetVersion", nullptr, nullptr, sizeof(Pico_AssetDetails_eventGetVersion_Parms), Z_Construct_UFunction_UPico_AssetDetails_GetVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetails_GetVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetails_GetVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetails_GetVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetails_GetVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_AssetDetails_NoRegister()
	{
		return UPico_AssetDetails::StaticClass();
	}
	struct Z_Construct_UClass_UPico_AssetDetails_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_AssetDetails_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_AssetDetails_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_AssetDetails_GetAssetId, "GetAssetId" }, // 4110310627
		{ &Z_Construct_UFunction_UPico_AssetDetails_GetAssetType, "GetAssetType" }, // 1338978931
		{ &Z_Construct_UFunction_UPico_AssetDetails_GetDownloadStatus, "GetDownloadStatus" }, // 963174929
		{ &Z_Construct_UFunction_UPico_AssetDetails_GetFilename, "GetFilename" }, // 3772625169
		{ &Z_Construct_UFunction_UPico_AssetDetails_GetFilePath, "GetFilePath" }, // 1862457997
		{ &Z_Construct_UFunction_UPico_AssetDetails_GetIapCurrency, "GetIapCurrency" }, // 21935297
		{ &Z_Construct_UFunction_UPico_AssetDetails_GetIapDescription, "GetIapDescription" }, // 122045902
		{ &Z_Construct_UFunction_UPico_AssetDetails_GetIapIconUrl, "GetIapIconUrl" }, // 1263794261
		{ &Z_Construct_UFunction_UPico_AssetDetails_GetIapName, "GetIapName" }, // 4122394980
		{ &Z_Construct_UFunction_UPico_AssetDetails_GetIapPrice, "GetIapPrice" }, // 791319585
		{ &Z_Construct_UFunction_UPico_AssetDetails_GetIapSku, "GetIapSku" }, // 1600514814
		{ &Z_Construct_UFunction_UPico_AssetDetails_GetIapStatus, "GetIapStatus" }, // 4003324761
		{ &Z_Construct_UFunction_UPico_AssetDetails_GetMetadata, "GetMetadata" }, // 2755561084
		{ &Z_Construct_UFunction_UPico_AssetDetails_GetVersion, "GetVersion" }, // 2853084997
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_AssetDetails_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_AssetFile.h" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_AssetDetails_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_AssetDetails>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_AssetDetails_Statics::ClassParams = {
		&UPico_AssetDetails::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_AssetDetails_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AssetDetails_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_AssetDetails()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_AssetDetails_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_AssetDetails, 1243192950);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_AssetDetails>()
	{
		return UPico_AssetDetails::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_AssetDetails(Z_Construct_UClass_UPico_AssetDetails, &UPico_AssetDetails::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_AssetDetails"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_AssetDetails);
	DEFINE_FUNCTION(UPico_AssetDetailsArray::execGetNextPageParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNextPageParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetDetailsArray::execGetHasNextPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasNextPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetDetailsArray::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetDetailsArray::execGetElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_AssetDetails**)Z_Param__Result=P_THIS->GetElement(Z_Param_Index);
		P_NATIVE_END;
	}
	void UPico_AssetDetailsArray::StaticRegisterNativesUPico_AssetDetailsArray()
	{
		UClass* Class = UPico_AssetDetailsArray::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetElement", &UPico_AssetDetailsArray::execGetElement },
			{ "GetHasNextPage", &UPico_AssetDetailsArray::execGetHasNextPage },
			{ "GetNextPageParam", &UPico_AssetDetailsArray::execGetNextPageParam },
			{ "GetSize", &UPico_AssetDetailsArray::execGetSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_AssetDetailsArray_GetElement_Statics
	{
		struct Pico_AssetDetailsArray_eventGetElement_Parms
		{
			int32 Index;
			UPico_AssetDetails* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_AssetDetailsArray_GetElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetailsArray_eventGetElement_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_AssetDetailsArray_GetElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetailsArray_eventGetElement_Parms, ReturnValue), Z_Construct_UClass_UPico_AssetDetails_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetailsArray_GetElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetailsArray_GetElement_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetailsArray_GetElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetailsArray_GetElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details Array" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetailsArray_GetElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetailsArray, nullptr, "GetElement", nullptr, nullptr, sizeof(Pico_AssetDetailsArray_eventGetElement_Parms), Z_Construct_UFunction_UPico_AssetDetailsArray_GetElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetailsArray_GetElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetailsArray_GetElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetailsArray_GetElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetailsArray_GetElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetailsArray_GetElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetDetailsArray_GetHasNextPage_Statics
	{
		struct Pico_AssetDetailsArray_eventGetHasNextPage_Parms
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
	void Z_Construct_UFunction_UPico_AssetDetailsArray_GetHasNextPage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_AssetDetailsArray_eventGetHasNextPage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_AssetDetailsArray_GetHasNextPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_AssetDetailsArray_eventGetHasNextPage_Parms), &Z_Construct_UFunction_UPico_AssetDetailsArray_GetHasNextPage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetailsArray_GetHasNextPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetailsArray_GetHasNextPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetailsArray_GetHasNextPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details Array" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetailsArray_GetHasNextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetailsArray, nullptr, "GetHasNextPage", nullptr, nullptr, sizeof(Pico_AssetDetailsArray_eventGetHasNextPage_Parms), Z_Construct_UFunction_UPico_AssetDetailsArray_GetHasNextPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetailsArray_GetHasNextPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetailsArray_GetHasNextPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetailsArray_GetHasNextPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetailsArray_GetHasNextPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetailsArray_GetHasNextPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetDetailsArray_GetNextPageParam_Statics
	{
		struct Pico_AssetDetailsArray_eventGetNextPageParam_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetDetailsArray_GetNextPageParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetailsArray_eventGetNextPageParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetailsArray_GetNextPageParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetailsArray_GetNextPageParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetailsArray_GetNextPageParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details Array" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetailsArray_GetNextPageParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetailsArray, nullptr, "GetNextPageParam", nullptr, nullptr, sizeof(Pico_AssetDetailsArray_eventGetNextPageParam_Parms), Z_Construct_UFunction_UPico_AssetDetailsArray_GetNextPageParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetailsArray_GetNextPageParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetailsArray_GetNextPageParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetailsArray_GetNextPageParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetailsArray_GetNextPageParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetailsArray_GetNextPageParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetDetailsArray_GetSize_Statics
	{
		struct Pico_AssetDetailsArray_eventGetSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_AssetDetailsArray_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetDetailsArray_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetDetailsArray_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetDetailsArray_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetDetailsArray_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Details Array" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetDetailsArray_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetDetailsArray, nullptr, "GetSize", nullptr, nullptr, sizeof(Pico_AssetDetailsArray_eventGetSize_Parms), Z_Construct_UFunction_UPico_AssetDetailsArray_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetailsArray_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetDetailsArray_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetDetailsArray_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetDetailsArray_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetDetailsArray_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_AssetDetailsArray_NoRegister()
	{
		return UPico_AssetDetailsArray::StaticClass();
	}
	struct Z_Construct_UClass_UPico_AssetDetailsArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetDetailsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDetailsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetDetailsArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_AssetDetailsArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_AssetDetailsArray_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_AssetDetailsArray_GetElement, "GetElement" }, // 4088132149
		{ &Z_Construct_UFunction_UPico_AssetDetailsArray_GetHasNextPage, "GetHasNextPage" }, // 1456606201
		{ &Z_Construct_UFunction_UPico_AssetDetailsArray_GetNextPageParam, "GetNextPageParam" }, // 752949758
		{ &Z_Construct_UFunction_UPico_AssetDetailsArray_GetSize, "GetSize" }, // 4121034767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_AssetDetailsArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_AssetFile.h" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_AssetDetailsArray_Statics::NewProp_AssetDetailsArray_Inner = { "AssetDetailsArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPico_AssetDetails_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_AssetDetailsArray_Statics::NewProp_AssetDetailsArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPico_AssetDetailsArray_Statics::NewProp_AssetDetailsArray = { "AssetDetailsArray", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_AssetDetailsArray, AssetDetailsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPico_AssetDetailsArray_Statics::NewProp_AssetDetailsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AssetDetailsArray_Statics::NewProp_AssetDetailsArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_AssetDetailsArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_AssetDetailsArray_Statics::NewProp_AssetDetailsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_AssetDetailsArray_Statics::NewProp_AssetDetailsArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_AssetDetailsArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_AssetDetailsArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_AssetDetailsArray_Statics::ClassParams = {
		&UPico_AssetDetailsArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_AssetDetailsArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AssetDetailsArray_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_AssetDetailsArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AssetDetailsArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_AssetDetailsArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_AssetDetailsArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_AssetDetailsArray, 2531069725);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_AssetDetailsArray>()
	{
		return UPico_AssetDetailsArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_AssetDetailsArray(Z_Construct_UClass_UPico_AssetDetailsArray, &UPico_AssetDetailsArray::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_AssetDetailsArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_AssetDetailsArray);
	DEFINE_FUNCTION(UPico_AssetFileDownloadCancelResult::execGetSuccess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSuccess();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetFileDownloadCancelResult::execGetFilePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFilePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetFileDownloadCancelResult::execGetAssetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAssetId();
		P_NATIVE_END;
	}
	void UPico_AssetFileDownloadCancelResult::StaticRegisterNativesUPico_AssetFileDownloadCancelResult()
	{
		UClass* Class = UPico_AssetFileDownloadCancelResult::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetId", &UPico_AssetFileDownloadCancelResult::execGetAssetId },
			{ "GetFilePath", &UPico_AssetFileDownloadCancelResult::execGetFilePath },
			{ "GetSuccess", &UPico_AssetFileDownloadCancelResult::execGetSuccess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetAssetId_Statics
	{
		struct Pico_AssetFileDownloadCancelResult_eventGetAssetId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetAssetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetFileDownloadCancelResult_eventGetAssetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetAssetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetAssetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetAssetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Download Cancel Result" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetAssetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetFileDownloadCancelResult, nullptr, "GetAssetId", nullptr, nullptr, sizeof(Pico_AssetFileDownloadCancelResult_eventGetAssetId_Parms), Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetAssetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetAssetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetAssetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetAssetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetAssetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetAssetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetFilePath_Statics
	{
		struct Pico_AssetFileDownloadCancelResult_eventGetFilePath_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetFileDownloadCancelResult_eventGetFilePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetFilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Download Cancel Result" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetFileDownloadCancelResult, nullptr, "GetFilePath", nullptr, nullptr, sizeof(Pico_AssetFileDownloadCancelResult_eventGetFilePath_Parms), Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetSuccess_Statics
	{
		struct Pico_AssetFileDownloadCancelResult_eventGetSuccess_Parms
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
	void Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetSuccess_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_AssetFileDownloadCancelResult_eventGetSuccess_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetSuccess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_AssetFileDownloadCancelResult_eventGetSuccess_Parms), &Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetSuccess_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetSuccess_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetSuccess_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Download Cancel Result" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetFileDownloadCancelResult, nullptr, "GetSuccess", nullptr, nullptr, sizeof(Pico_AssetFileDownloadCancelResult_eventGetSuccess_Parms), Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_AssetFileDownloadCancelResult_NoRegister()
	{
		return UPico_AssetFileDownloadCancelResult::StaticClass();
	}
	struct Z_Construct_UClass_UPico_AssetFileDownloadCancelResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_AssetFileDownloadCancelResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_AssetFileDownloadCancelResult_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetAssetId, "GetAssetId" }, // 3114025474
		{ &Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetFilePath, "GetFilePath" }, // 62822654
		{ &Z_Construct_UFunction_UPico_AssetFileDownloadCancelResult_GetSuccess, "GetSuccess" }, // 3192998974
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_AssetFileDownloadCancelResult_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_AssetFile.h" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_AssetFileDownloadCancelResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_AssetFileDownloadCancelResult>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_AssetFileDownloadCancelResult_Statics::ClassParams = {
		&UPico_AssetFileDownloadCancelResult::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_AssetFileDownloadCancelResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AssetFileDownloadCancelResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_AssetFileDownloadCancelResult()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_AssetFileDownloadCancelResult_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_AssetFileDownloadCancelResult, 1205541332);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_AssetFileDownloadCancelResult>()
	{
		return UPico_AssetFileDownloadCancelResult::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_AssetFileDownloadCancelResult(Z_Construct_UClass_UPico_AssetFileDownloadCancelResult, &UPico_AssetFileDownloadCancelResult::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_AssetFileDownloadCancelResult"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_AssetFileDownloadCancelResult);
	DEFINE_FUNCTION(UPico_AssetFileDownloadUpdate::execGetCompleteStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAssetFileDownloadCompleteStatus*)Z_Param__Result=P_THIS->GetCompleteStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetFileDownloadUpdate::execGetBytesTransferred)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetBytesTransferred();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetFileDownloadUpdate::execGetBytesTotal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetBytesTotal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetFileDownloadUpdate::execGetAssetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAssetId();
		P_NATIVE_END;
	}
	void UPico_AssetFileDownloadUpdate::StaticRegisterNativesUPico_AssetFileDownloadUpdate()
	{
		UClass* Class = UPico_AssetFileDownloadUpdate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetId", &UPico_AssetFileDownloadUpdate::execGetAssetId },
			{ "GetBytesTotal", &UPico_AssetFileDownloadUpdate::execGetBytesTotal },
			{ "GetBytesTransferred", &UPico_AssetFileDownloadUpdate::execGetBytesTransferred },
			{ "GetCompleteStatus", &UPico_AssetFileDownloadUpdate::execGetCompleteStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetAssetId_Statics
	{
		struct Pico_AssetFileDownloadUpdate_eventGetAssetId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetAssetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetFileDownloadUpdate_eventGetAssetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetAssetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetAssetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetAssetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Download Update" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetAssetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetFileDownloadUpdate, nullptr, "GetAssetId", nullptr, nullptr, sizeof(Pico_AssetFileDownloadUpdate_eventGetAssetId_Parms), Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetAssetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetAssetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetAssetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetAssetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetAssetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetAssetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTotal_Statics
	{
		struct Pico_AssetFileDownloadUpdate_eventGetBytesTotal_Parms
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTotal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetFileDownloadUpdate_eventGetBytesTotal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTotal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTotal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTotal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Download Update" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTotal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetFileDownloadUpdate, nullptr, "GetBytesTotal", nullptr, nullptr, sizeof(Pico_AssetFileDownloadUpdate_eventGetBytesTotal_Parms), Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTotal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTotal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTotal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTotal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTotal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTotal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTransferred_Statics
	{
		struct Pico_AssetFileDownloadUpdate_eventGetBytesTransferred_Parms
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTransferred_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetFileDownloadUpdate_eventGetBytesTransferred_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTransferred_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTransferred_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTransferred_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Download Update" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTransferred_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetFileDownloadUpdate, nullptr, "GetBytesTransferred", nullptr, nullptr, sizeof(Pico_AssetFileDownloadUpdate_eventGetBytesTransferred_Parms), Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTransferred_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTransferred_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTransferred_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTransferred_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTransferred()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTransferred_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetCompleteStatus_Statics
	{
		struct Pico_AssetFileDownloadUpdate_eventGetCompleteStatus_Parms
		{
			EAssetFileDownloadCompleteStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetCompleteStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetCompleteStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetFileDownloadUpdate_eventGetCompleteStatus_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemPico_EAssetFileDownloadCompleteStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetCompleteStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetCompleteStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetCompleteStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetCompleteStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Download Update" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetCompleteStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetFileDownloadUpdate, nullptr, "GetCompleteStatus", nullptr, nullptr, sizeof(Pico_AssetFileDownloadUpdate_eventGetCompleteStatus_Parms), Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetCompleteStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetCompleteStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetCompleteStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetCompleteStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetCompleteStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetCompleteStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_AssetFileDownloadUpdate_NoRegister()
	{
		return UPico_AssetFileDownloadUpdate::StaticClass();
	}
	struct Z_Construct_UClass_UPico_AssetFileDownloadUpdate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_AssetFileDownloadUpdate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_AssetFileDownloadUpdate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetAssetId, "GetAssetId" }, // 2427169304
		{ &Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTotal, "GetBytesTotal" }, // 3395559438
		{ &Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetBytesTransferred, "GetBytesTransferred" }, // 3057684381
		{ &Z_Construct_UFunction_UPico_AssetFileDownloadUpdate_GetCompleteStatus, "GetCompleteStatus" }, // 2666731420
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_AssetFileDownloadUpdate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_AssetFile.h" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_AssetFileDownloadUpdate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_AssetFileDownloadUpdate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_AssetFileDownloadUpdate_Statics::ClassParams = {
		&UPico_AssetFileDownloadUpdate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_AssetFileDownloadUpdate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AssetFileDownloadUpdate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_AssetFileDownloadUpdate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_AssetFileDownloadUpdate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_AssetFileDownloadUpdate, 929308057);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_AssetFileDownloadUpdate>()
	{
		return UPico_AssetFileDownloadUpdate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_AssetFileDownloadUpdate(Z_Construct_UClass_UPico_AssetFileDownloadUpdate, &UPico_AssetFileDownloadUpdate::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_AssetFileDownloadUpdate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_AssetFileDownloadUpdate);
	DEFINE_FUNCTION(UPico_AssetFileDownloadResult::execGetFilePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFilePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetFileDownloadResult::execGetAssetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAssetId();
		P_NATIVE_END;
	}
	void UPico_AssetFileDownloadResult::StaticRegisterNativesUPico_AssetFileDownloadResult()
	{
		UClass* Class = UPico_AssetFileDownloadResult::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetId", &UPico_AssetFileDownloadResult::execGetAssetId },
			{ "GetFilePath", &UPico_AssetFileDownloadResult::execGetFilePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetAssetId_Statics
	{
		struct Pico_AssetFileDownloadResult_eventGetAssetId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetAssetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetFileDownloadResult_eventGetAssetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetAssetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetAssetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetAssetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Download Result" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetAssetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetFileDownloadResult, nullptr, "GetAssetId", nullptr, nullptr, sizeof(Pico_AssetFileDownloadResult_eventGetAssetId_Parms), Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetAssetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetAssetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetAssetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetAssetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetAssetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetAssetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetFilePath_Statics
	{
		struct Pico_AssetFileDownloadResult_eventGetFilePath_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetFileDownloadResult_eventGetFilePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetFilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Download Result" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetFileDownloadResult, nullptr, "GetFilePath", nullptr, nullptr, sizeof(Pico_AssetFileDownloadResult_eventGetFilePath_Parms), Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_AssetFileDownloadResult_NoRegister()
	{
		return UPico_AssetFileDownloadResult::StaticClass();
	}
	struct Z_Construct_UClass_UPico_AssetFileDownloadResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_AssetFileDownloadResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_AssetFileDownloadResult_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetAssetId, "GetAssetId" }, // 1382343960
		{ &Z_Construct_UFunction_UPico_AssetFileDownloadResult_GetFilePath, "GetFilePath" }, // 3471271860
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_AssetFileDownloadResult_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_AssetFile.h" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_AssetFileDownloadResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_AssetFileDownloadResult>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_AssetFileDownloadResult_Statics::ClassParams = {
		&UPico_AssetFileDownloadResult::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_AssetFileDownloadResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AssetFileDownloadResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_AssetFileDownloadResult()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_AssetFileDownloadResult_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_AssetFileDownloadResult, 1483730933);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_AssetFileDownloadResult>()
	{
		return UPico_AssetFileDownloadResult::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_AssetFileDownloadResult(Z_Construct_UClass_UPico_AssetFileDownloadResult, &UPico_AssetFileDownloadResult::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_AssetFileDownloadResult"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_AssetFileDownloadResult);
	DEFINE_FUNCTION(UPico_AssetStatus::execGetDownloadStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDownloadStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetStatus::execGetFileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetStatus::execGetFilePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFilePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetStatus::execGetAssetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAssetId();
		P_NATIVE_END;
	}
	void UPico_AssetStatus::StaticRegisterNativesUPico_AssetStatus()
	{
		UClass* Class = UPico_AssetStatus::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetId", &UPico_AssetStatus::execGetAssetId },
			{ "GetDownloadStatus", &UPico_AssetStatus::execGetDownloadStatus },
			{ "GetFileName", &UPico_AssetStatus::execGetFileName },
			{ "GetFilePath", &UPico_AssetStatus::execGetFilePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_AssetStatus_GetAssetId_Statics
	{
		struct Pico_AssetStatus_eventGetAssetId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetStatus_GetAssetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetStatus_eventGetAssetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetStatus_GetAssetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetStatus_GetAssetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetStatus_GetAssetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Status" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetStatus_GetAssetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetStatus, nullptr, "GetAssetId", nullptr, nullptr, sizeof(Pico_AssetStatus_eventGetAssetId_Parms), Z_Construct_UFunction_UPico_AssetStatus_GetAssetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetStatus_GetAssetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetStatus_GetAssetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetStatus_GetAssetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetStatus_GetAssetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetStatus_GetAssetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetStatus_GetDownloadStatus_Statics
	{
		struct Pico_AssetStatus_eventGetDownloadStatus_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetStatus_GetDownloadStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetStatus_eventGetDownloadStatus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetStatus_GetDownloadStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetStatus_GetDownloadStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetStatus_GetDownloadStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Status" },
		{ "Comment", "// One of 'installed', 'available', or 'in-progress'\n" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
		{ "ToolTip", "One of 'installed', 'available', or 'in-progress'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetStatus_GetDownloadStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetStatus, nullptr, "GetDownloadStatus", nullptr, nullptr, sizeof(Pico_AssetStatus_eventGetDownloadStatus_Parms), Z_Construct_UFunction_UPico_AssetStatus_GetDownloadStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetStatus_GetDownloadStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetStatus_GetDownloadStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetStatus_GetDownloadStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetStatus_GetDownloadStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetStatus_GetDownloadStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetStatus_GetFileName_Statics
	{
		struct Pico_AssetStatus_eventGetFileName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetStatus_GetFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetStatus_eventGetFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetStatus_GetFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetStatus_GetFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetStatus_GetFileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Status" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetStatus_GetFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetStatus, nullptr, "GetFileName", nullptr, nullptr, sizeof(Pico_AssetStatus_eventGetFileName_Parms), Z_Construct_UFunction_UPico_AssetStatus_GetFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetStatus_GetFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetStatus_GetFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetStatus_GetFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetStatus_GetFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetStatus_GetFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetStatus_GetFilePath_Statics
	{
		struct Pico_AssetStatus_eventGetFilePath_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetStatus_GetFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetStatus_eventGetFilePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetStatus_GetFilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetStatus_GetFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetStatus_GetFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Asset Status" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetStatus_GetFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetStatus, nullptr, "GetFilePath", nullptr, nullptr, sizeof(Pico_AssetStatus_eventGetFilePath_Parms), Z_Construct_UFunction_UPico_AssetStatus_GetFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetStatus_GetFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetStatus_GetFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetStatus_GetFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetStatus_GetFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetStatus_GetFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_AssetStatus_NoRegister()
	{
		return UPico_AssetStatus::StaticClass();
	}
	struct Z_Construct_UClass_UPico_AssetStatus_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_AssetStatus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_AssetStatus_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_AssetStatus_GetAssetId, "GetAssetId" }, // 2805535318
		{ &Z_Construct_UFunction_UPico_AssetStatus_GetDownloadStatus, "GetDownloadStatus" }, // 3779538127
		{ &Z_Construct_UFunction_UPico_AssetStatus_GetFileName, "GetFileName" }, // 3574748478
		{ &Z_Construct_UFunction_UPico_AssetStatus_GetFilePath, "GetFilePath" }, // 1227854198
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_AssetStatus_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_AssetFile.h" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_AssetStatus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_AssetStatus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_AssetStatus_Statics::ClassParams = {
		&UPico_AssetStatus::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_AssetStatus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AssetStatus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_AssetStatus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_AssetStatus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_AssetStatus, 164230897);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_AssetStatus>()
	{
		return UPico_AssetStatus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_AssetStatus(Z_Construct_UClass_UPico_AssetStatus, &UPico_AssetStatus::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_AssetStatus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_AssetStatus);
	DEFINE_FUNCTION(UPico_AssetFileDeleteForSafety::execGetReason)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetReason();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_AssetFileDeleteForSafety::execGetAssetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAssetId();
		P_NATIVE_END;
	}
	void UPico_AssetFileDeleteForSafety::StaticRegisterNativesUPico_AssetFileDeleteForSafety()
	{
		UClass* Class = UPico_AssetFileDeleteForSafety::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetId", &UPico_AssetFileDeleteForSafety::execGetAssetId },
			{ "GetReason", &UPico_AssetFileDeleteForSafety::execGetReason },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetAssetId_Statics
	{
		struct Pico_AssetFileDeleteForSafety_eventGetAssetId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetAssetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetFileDeleteForSafety_eventGetAssetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetAssetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetAssetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetAssetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Delete For Safety" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetAssetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetFileDeleteForSafety, nullptr, "GetAssetId", nullptr, nullptr, sizeof(Pico_AssetFileDeleteForSafety_eventGetAssetId_Parms), Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetAssetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetAssetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetAssetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetAssetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetAssetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetAssetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetReason_Statics
	{
		struct Pico_AssetFileDeleteForSafety_eventGetReason_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetReason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_AssetFileDeleteForSafety_eventGetReason_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetReason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetReason_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetReason_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|AssetFile|Delete For Safety" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_AssetFileDeleteForSafety, nullptr, "GetReason", nullptr, nullptr, sizeof(Pico_AssetFileDeleteForSafety_eventGetReason_Parms), Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_AssetFileDeleteForSafety_NoRegister()
	{
		return UPico_AssetFileDeleteForSafety::StaticClass();
	}
	struct Z_Construct_UClass_UPico_AssetFileDeleteForSafety_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_AssetFileDeleteForSafety_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_AssetFileDeleteForSafety_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetAssetId, "GetAssetId" }, // 2064288956
		{ &Z_Construct_UFunction_UPico_AssetFileDeleteForSafety_GetReason, "GetReason" }, // 3824853385
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_AssetFileDeleteForSafety_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_AssetFile.h" },
		{ "ModuleRelativePath", "Public/Pico_AssetFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_AssetFileDeleteForSafety_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_AssetFileDeleteForSafety>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_AssetFileDeleteForSafety_Statics::ClassParams = {
		&UPico_AssetFileDeleteForSafety::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_AssetFileDeleteForSafety_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_AssetFileDeleteForSafety_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_AssetFileDeleteForSafety()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_AssetFileDeleteForSafety_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_AssetFileDeleteForSafety, 1227571743);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_AssetFileDeleteForSafety>()
	{
		return UPico_AssetFileDeleteForSafety::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_AssetFileDeleteForSafety(Z_Construct_UClass_UPico_AssetFileDeleteForSafety, &UPico_AssetFileDeleteForSafety::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_AssetFileDeleteForSafety"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_AssetFileDeleteForSafety);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
