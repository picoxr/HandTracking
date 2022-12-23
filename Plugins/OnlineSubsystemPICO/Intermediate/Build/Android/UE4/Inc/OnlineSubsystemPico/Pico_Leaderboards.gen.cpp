// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Public/Pico_Leaderboards.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePico_Leaderboards() {}
// Cross Module References
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_LeaderboardEntryArray_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_LeaderboardArray_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoLeaderboardsFunction_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoLeaderboardsFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardFilterType();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardStartAt();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_LeaderboardEntry_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_LeaderboardEntry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoSupplementaryMetric();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_User_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_Leaderboard_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_Leaderboard();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoDestination();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_LeaderboardEntryArray();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_LeaderboardArray();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventWriteEntryWithSupplementaryMetric_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			bool WriteResult;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static void NewProp_WriteResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WriteResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventWriteEntryWithSupplementaryMetric_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventWriteEntryWithSupplementaryMetric_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventWriteEntryWithSupplementaryMetric_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::NewProp_WriteResult_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventWriteEntryWithSupplementaryMetric_Parms*)Obj)->WriteResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::NewProp_WriteResult = { "WriteResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventWriteEntryWithSupplementaryMetric_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::NewProp_WriteResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::NewProp_WriteResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "WriteEntryWithSupplementaryMetric__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventWriteEntryWithSupplementaryMetric_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventWriteEntry_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			bool WriteResult;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static void NewProp_WriteResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WriteResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventWriteEntry_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventWriteEntry_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventWriteEntry_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::NewProp_WriteResult_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventWriteEntry_Parms*)Obj)->WriteResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::NewProp_WriteResult = { "WriteResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventWriteEntry_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::NewProp_WriteResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::NewProp_WriteResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "WriteEntry__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventWriteEntry_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetEntriesByIds_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_LeaderboardEntryArray* LeaderboardEntryList;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeaderboardEntryList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetEntriesByIds_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetEntriesByIds_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetEntriesByIds_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::NewProp_LeaderboardEntryList = { "LeaderboardEntryList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetEntriesByIds_Parms, LeaderboardEntryList), Z_Construct_UClass_UPico_LeaderboardEntryArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::NewProp_LeaderboardEntryList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetEntriesByIds__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetEntriesByIds_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetEntriesAfterRank_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_LeaderboardEntryArray* LeaderboardEntryList;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeaderboardEntryList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetEntriesAfterRank_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetEntriesAfterRank_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetEntriesAfterRank_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::NewProp_LeaderboardEntryList = { "LeaderboardEntryList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetEntriesAfterRank_Parms, LeaderboardEntryList), Z_Construct_UClass_UPico_LeaderboardEntryArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::NewProp_LeaderboardEntryList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetEntriesAfterRank__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetEntriesAfterRank_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetEntries_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_LeaderboardEntryArray* LeaderboardEntryList;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeaderboardEntryList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetEntries_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetEntries_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetEntries_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::NewProp_LeaderboardEntryList = { "LeaderboardEntryList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetEntries_Parms, LeaderboardEntryList), Z_Construct_UClass_UPico_LeaderboardEntryArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::NewProp_LeaderboardEntryList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetEntries__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetEntries_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGet_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_LeaderboardArray* LeaderboardList;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeaderboardList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGet_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGet_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGet_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::NewProp_LeaderboardList = { "LeaderboardList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGet_Parms, LeaderboardList), Z_Construct_UClass_UPico_LeaderboardArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::NewProp_LeaderboardList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "Get__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGet_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePicoLeaderboardsFunction::execWriteEntryWithSupplementaryMetric)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Score);
		P_GET_PROPERTY(FStrProperty,Z_Param_SupplementaryMetric);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExtraData);
		P_GET_UBOOL(Z_Param_ForceUpdate);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InWriteEntryWithSupplementaryMetricDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoLeaderboardsFunction::WriteEntryWithSupplementaryMetric(Z_Param_WorldContextObject,Z_Param_LeaderboardName,Z_Param_Score,Z_Param_SupplementaryMetric,Z_Param_ExtraData,Z_Param_ForceUpdate,FWriteEntryWithSupplementaryMetric(Z_Param_InWriteEntryWithSupplementaryMetricDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoLeaderboardsFunction::execWriteEntry)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Score);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExtraData);
		P_GET_UBOOL(Z_Param_ForceUpdate);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InWriteEntryDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoLeaderboardsFunction::WriteEntry(Z_Param_WorldContextObject,Z_Param_LeaderboardName,Z_Param_Score,Z_Param_ExtraData,Z_Param_ForceUpdate,FWriteEntry(Z_Param_InWriteEntryDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoLeaderboardsFunction::execGetEntriesByIds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIdx);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageSize);
		P_GET_ENUM(ELeaderboardStartAt,Z_Param_StartAt);
		P_GET_TARRAY_REF(FString,Z_Param_Out_UserIDs);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetEntriesByIdsDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoLeaderboardsFunction::GetEntriesByIds(Z_Param_WorldContextObject,Z_Param_LeaderboardName,Z_Param_PageIdx,Z_Param_PageSize,ELeaderboardStartAt(Z_Param_StartAt),Z_Param_Out_UserIDs,FGetEntriesByIds(Z_Param_InGetEntriesByIdsDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoLeaderboardsFunction::execGetEntriesAfterRank)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIdx);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageSize);
		P_GET_PROPERTY(FStrProperty,Z_Param_AfterRank);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetEntriesAfterRankDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoLeaderboardsFunction::GetEntriesAfterRank(Z_Param_WorldContextObject,Z_Param_LeaderboardName,Z_Param_PageIdx,Z_Param_PageSize,Z_Param_AfterRank,FGetEntriesAfterRank(Z_Param_InGetEntriesAfterRankDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoLeaderboardsFunction::execGetEntries)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIdx);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageSize);
		P_GET_ENUM(ELeaderboardFilterType,Z_Param_Filter);
		P_GET_ENUM(ELeaderboardStartAt,Z_Param_StartAt);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetEntriesDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoLeaderboardsFunction::GetEntries(Z_Param_WorldContextObject,Z_Param_LeaderboardName,Z_Param_PageIdx,Z_Param_PageSize,ELeaderboardFilterType(Z_Param_Filter),ELeaderboardStartAt(Z_Param_StartAt),FGetEntries(Z_Param_InGetEntriesDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoLeaderboardsFunction::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoLeaderboardsFunction::Get(Z_Param_WorldContextObject,Z_Param_LeaderboardName,FGet(Z_Param_InGetDelegate));
		P_NATIVE_END;
	}
	void UOnlinePicoLeaderboardsFunction::StaticRegisterNativesUOnlinePicoLeaderboardsFunction()
	{
		UClass* Class = UOnlinePicoLeaderboardsFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &UOnlinePicoLeaderboardsFunction::execGet },
			{ "GetEntries", &UOnlinePicoLeaderboardsFunction::execGetEntries },
			{ "GetEntriesAfterRank", &UOnlinePicoLeaderboardsFunction::execGetEntriesAfterRank },
			{ "GetEntriesByIds", &UOnlinePicoLeaderboardsFunction::execGetEntriesByIds },
			{ "WriteEntry", &UOnlinePicoLeaderboardsFunction::execWriteEntry },
			{ "WriteEntryWithSupplementaryMetric", &UOnlinePicoLeaderboardsFunction::execWriteEntryWithSupplementaryMetric },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics
	{
		struct OnlinePicoLeaderboardsFunction_eventGet_Parms
		{
			UObject* WorldContextObject;
			FString LeaderboardName;
			FScriptDelegate InGetDelegate;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGet_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::NewProp_LeaderboardName_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::NewProp_InGetDelegate = { "InGetDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGet_Parms, InGetDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_Get__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::NewProp_LeaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::NewProp_InGetDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Leaderboards" },
		{ "Comment", "/// <summary>Gets a specified leaderboard.</summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"leaderboardName\">Leaderboard name.</param>\n/// <param name=\"InGetDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param> \n/// <returns>Bool: \n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
		{ "ToolTip", "<summary>Gets a specified leaderboard.</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"leaderboardName\">Leaderboard name.</param>\n<param name=\"InGetDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoLeaderboardsFunction, nullptr, "Get", nullptr, nullptr, sizeof(OnlinePicoLeaderboardsFunction_eventGet_Parms), Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics
	{
		struct OnlinePicoLeaderboardsFunction_eventGetEntries_Parms
		{
			UObject* WorldContextObject;
			FString LeaderboardName;
			int32 PageIdx;
			int32 PageSize;
			ELeaderboardFilterType Filter;
			ELeaderboardStartAt StartAt;
			FScriptDelegate InGetEntriesDelegate;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageIdx;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Filter_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StartAt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StartAt;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetEntriesDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntries_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntries_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_LeaderboardName_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_PageIdx = { "PageIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntries_Parms, PageIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntries_Parms, PageSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_Filter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntries_Parms, Filter), Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardFilterType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_StartAt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_StartAt = { "StartAt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntries_Parms, StartAt), Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardStartAt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_InGetEntriesDelegate = { "InGetEntriesDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntries_Parms, InGetEntriesDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntries__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_LeaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_PageIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_PageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_Filter_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_StartAt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_StartAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::NewProp_InGetEntriesDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Leaderboards" },
		{ "Comment", "/// <summary>Gets a list of leaderboard entries.</summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"leaderboardName\">Leaderboard name.</param>\n/// <param name=\"pageSize\">The number of entries to return on each page.</param>\n/// <param name=\"pageIdx\">Defines which page of entries to return. The value = (The target page No.)-1.\n/// For example, if you want to get the first page of entries, pass `0`; if you want to get the second page of entries, pass `1`.</param>\n/// <param name=\"filter\">Restricts the scope of entries to return:\n/// * `NONE`: returns all entries of the specified leaderboard\n/// * `FRIENDS`: returns the entries of the friends of the current logged-in user\n/// * `USER_IDS`(do not pass this value): returns the entries of specified users\n/// </param>\n/// <param name=\"startAt\">Defines where to start returning challenge entries, the enumerations are:\n/// * `0`: Top (return entries from top 1)\n/// * `1`: CenteredOnViewer (place the current logged-in user's entry in the middle of the list on the first page.\n/// For example, if the total number of entries is 10, `pageSize` is set to `5`, and the user's rank is top 5, the ranks displayed\n/// on the first page will be top 3, 4, 5, 6, and 7. Top 1 and 2 will not be displayed, and top 8, 9, and 10 will be\n/// displayed on the second page)\n/// * `2`: CenteredOnViewerOrTop (place the current logged-in user's entry on the top of the list on the first page.\n/// For example, if the total number of entries is 10, `pageSize` is set to `5`, and the user's rank is top 5,\n/// the ranks displayed on the first page will be top 5, 6, 7, 8, and 9. Top 1, 2, 3, and 4 will not be displayed,\n/// and top 10 will be displayed on the second page)\n/// </param>\n/// <param name=\"InGetEntriesDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param> \n/// <returns>Bool: \n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns> \n" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
		{ "ToolTip", "<summary>Gets a list of leaderboard entries.</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"leaderboardName\">Leaderboard name.</param>\n<param name=\"pageSize\">The number of entries to return on each page.</param>\n<param name=\"pageIdx\">Defines which page of entries to return. The value = (The target page No.)-1.\nFor example, if you want to get the first page of entries, pass `0`; if you want to get the second page of entries, pass `1`.</param>\n<param name=\"filter\">Restricts the scope of entries to return:\n* `NONE`: returns all entries of the specified leaderboard\n* `FRIENDS`: returns the entries of the friends of the current logged-in user\n* `USER_IDS`(do not pass this value): returns the entries of specified users\n</param>\n<param name=\"startAt\">Defines where to start returning challenge entries, the enumerations are:\n* `0`: Top (return entries from top 1)\n* `1`: CenteredOnViewer (place the current logged-in user's entry in the middle of the list on the first page.\nFor example, if the total number of entries is 10, `pageSize` is set to `5`, and the user's rank is top 5, the ranks displayed\non the first page will be top 3, 4, 5, 6, and 7. Top 1 and 2 will not be displayed, and top 8, 9, and 10 will be\ndisplayed on the second page)\n* `2`: CenteredOnViewerOrTop (place the current logged-in user's entry on the top of the list on the first page.\nFor example, if the total number of entries is 10, `pageSize` is set to `5`, and the user's rank is top 5,\nthe ranks displayed on the first page will be top 5, 6, 7, 8, and 9. Top 1, 2, 3, and 4 will not be displayed,\nand top 10 will be displayed on the second page)\n</param>\n<param name=\"InGetEntriesDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoLeaderboardsFunction, nullptr, "GetEntries", nullptr, nullptr, sizeof(OnlinePicoLeaderboardsFunction_eventGetEntries_Parms), Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics
	{
		struct OnlinePicoLeaderboardsFunction_eventGetEntriesAfterRank_Parms
		{
			UObject* WorldContextObject;
			FString LeaderboardName;
			int32 PageIdx;
			int32 PageSize;
			FString AfterRank;
			FScriptDelegate InGetEntriesAfterRankDelegate;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageIdx;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AfterRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AfterRank;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetEntriesAfterRankDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntriesAfterRank_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntriesAfterRank_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_LeaderboardName_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_PageIdx = { "PageIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntriesAfterRank_Parms, PageIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntriesAfterRank_Parms, PageSize), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_AfterRank_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_AfterRank = { "AfterRank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntriesAfterRank_Parms, AfterRank), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_AfterRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_AfterRank_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_InGetEntriesAfterRankDelegate = { "InGetEntriesAfterRankDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntriesAfterRank_Parms, InGetEntriesAfterRankDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesAfterRank__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_LeaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_PageIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_PageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_AfterRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::NewProp_InGetEntriesAfterRankDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Leaderboards" },
		{ "Comment", "/// <summary>Gets the leaderboard entries after a specified ranking.</summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"leaderboardName\">Leaderboard name.</param>\n/// <param name=\"pageSize\">The number of entries to return on each page.</param>\n/// <param name=\"pageIdx\">Defines which page of entries to return. The value = (The target page No.)-1.\n/// For example, if you want to get the first page of entries, pass `0`; if you want to get the second page of entries, pass `1`.</param>\n/// <param name=\"AfterRank\">Defines after which rank to return entries.</param>\n/// <param name=\"InGetEntriesAfterRankDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param> \n/// <returns>Bool: \n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns> \n" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
		{ "ToolTip", "<summary>Gets the leaderboard entries after a specified ranking.</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"leaderboardName\">Leaderboard name.</param>\n<param name=\"pageSize\">The number of entries to return on each page.</param>\n<param name=\"pageIdx\">Defines which page of entries to return. The value = (The target page No.)-1.\nFor example, if you want to get the first page of entries, pass `0`; if you want to get the second page of entries, pass `1`.</param>\n<param name=\"AfterRank\">Defines after which rank to return entries.</param>\n<param name=\"InGetEntriesAfterRankDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoLeaderboardsFunction, nullptr, "GetEntriesAfterRank", nullptr, nullptr, sizeof(OnlinePicoLeaderboardsFunction_eventGetEntriesAfterRank_Parms), Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics
	{
		struct OnlinePicoLeaderboardsFunction_eventGetEntriesByIds_Parms
		{
			UObject* WorldContextObject;
			FString LeaderboardName;
			int32 PageIdx;
			int32 PageSize;
			ELeaderboardStartAt StartAt;
			TArray<FString> UserIDs;
			FScriptDelegate InGetEntriesByIdsDelegate;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageIdx;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StartAt_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StartAt;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserIDs;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetEntriesByIdsDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntriesByIds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntriesByIds_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_LeaderboardName_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_PageIdx = { "PageIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntriesByIds_Parms, PageIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntriesByIds_Parms, PageSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_StartAt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_StartAt = { "StartAt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntriesByIds_Parms, StartAt), Z_Construct_UEnum_OnlineSubsystemPico_ELeaderboardStartAt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_UserIDs_Inner = { "UserIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_UserIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_UserIDs = { "UserIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntriesByIds_Parms, UserIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_UserIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_UserIDs_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_InGetEntriesByIdsDelegate = { "InGetEntriesByIdsDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventGetEntriesByIds_Parms, InGetEntriesByIdsDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetEntriesByIds__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_LeaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_PageIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_PageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_StartAt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_StartAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_UserIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_UserIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::NewProp_InGetEntriesByIdsDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Leaderboards" },
		{ "Comment", "/// <summary>Gets the leaderboard entries for specified user(s).</summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"leaderboardName\">Leaderboard name.</param>\n/// <param name=\"pageSize\">The number of entries to return on each page.</param>\n/// <param name=\"pageIdx\">Defines which page of entries to return. The value = (The target page No.)-1.\n/// For example, if you want to get the first page of entries, pass `0`; if you want to get the second page of entries, pass `1`.</param>\n/// <param name=\"startAt\">Defines where to start returning challenge entries, the enumerations are:\n/// * `0`: Top (return entries from top 1)\n/// * `1`: CenteredOnViewer (place the current logged-in user's entry in the middle of the list on the first page.\n/// For example, if the total number of entries is 10, `pageSize` is set to `5`, and the user's rank is top 5, the ranks displayed\n/// on the first page will be top 3, 4, 5, 6, and 7. Top 1 and 2 will not be displayed, and top 8, 9, and 10 will be\n/// displayed on the second page)\n/// * `2`: CenteredOnViewerOrTop (place the current logged-in user's entry on the top of the list on the first page.\n/// For example, if the total number of entries is 10, `pageSize` is set to `5`, and the user's rank is top 5,\n/// the ranks displayed on the first page will be top 5, 6, 7, 8, and 9. Top 1, 2, 3, and 4 will not be displayed,\n/// and top 10 will be displayed on the second page)\n/// </param>\n/// <param name=\"userIDs\">User ID(s).</param>\n/// <param name=\"InGetEntriesByIdsDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param> \n/// <returns>Bool: \n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns> \n" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
		{ "ToolTip", "<summary>Gets the leaderboard entries for specified user(s).</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"leaderboardName\">Leaderboard name.</param>\n<param name=\"pageSize\">The number of entries to return on each page.</param>\n<param name=\"pageIdx\">Defines which page of entries to return. The value = (The target page No.)-1.\nFor example, if you want to get the first page of entries, pass `0`; if you want to get the second page of entries, pass `1`.</param>\n<param name=\"startAt\">Defines where to start returning challenge entries, the enumerations are:\n* `0`: Top (return entries from top 1)\n* `1`: CenteredOnViewer (place the current logged-in user's entry in the middle of the list on the first page.\nFor example, if the total number of entries is 10, `pageSize` is set to `5`, and the user's rank is top 5, the ranks displayed\non the first page will be top 3, 4, 5, 6, and 7. Top 1 and 2 will not be displayed, and top 8, 9, and 10 will be\ndisplayed on the second page)\n* `2`: CenteredOnViewerOrTop (place the current logged-in user's entry on the top of the list on the first page.\nFor example, if the total number of entries is 10, `pageSize` is set to `5`, and the user's rank is top 5,\nthe ranks displayed on the first page will be top 5, 6, 7, 8, and 9. Top 1, 2, 3, and 4 will not be displayed,\nand top 10 will be displayed on the second page)\n</param>\n<param name=\"userIDs\">User ID(s).</param>\n<param name=\"InGetEntriesByIdsDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoLeaderboardsFunction, nullptr, "GetEntriesByIds", nullptr, nullptr, sizeof(OnlinePicoLeaderboardsFunction_eventGetEntriesByIds_Parms), Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics
	{
		struct OnlinePicoLeaderboardsFunction_eventWriteEntry_Parms
		{
			UObject* WorldContextObject;
			FString LeaderboardName;
			FString Score;
			FString ExtraData;
			bool ForceUpdate;
			FScriptDelegate InWriteEntryDelegate;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraData;
		static void NewProp_ForceUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceUpdate;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InWriteEntryDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventWriteEntry_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventWriteEntry_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_LeaderboardName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_Score_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventWriteEntry_Parms, Score), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_ExtraData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_ExtraData = { "ExtraData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventWriteEntry_Parms, ExtraData), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_ExtraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_ExtraData_MetaData)) };
	void Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_ForceUpdate_SetBit(void* Obj)
	{
		((OnlinePicoLeaderboardsFunction_eventWriteEntry_Parms*)Obj)->ForceUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_ForceUpdate = { "ForceUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoLeaderboardsFunction_eventWriteEntry_Parms), &Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_ForceUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_InWriteEntryDelegate = { "InWriteEntryDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventWriteEntry_Parms, InWriteEntryDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntry__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_LeaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_ExtraData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_ForceUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::NewProp_InWriteEntryDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Leaderboards" },
		{ "Comment", "/// <summary>Writes a user's score to the leaderboard.</summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"leaderboardName\">Leaderboard name.</param>\n/// <param name=\"score\">The user's score.</param>\n/// <param name=\"extraData\">Custom extension fields that can be used to record key information when writing the user's score.</param>\n/// <param name=\"forceUpdate\">Whether to force a leaderboard update:\n/// * `true`: make a force update\n/// * `false`: no force update\n/// <param name=\"InWriteEntryDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param> \n/// <returns>Bool: \n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns> \n" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
		{ "ToolTip", "<summary>Writes a user's score to the leaderboard.</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"leaderboardName\">Leaderboard name.</param>\n<param name=\"score\">The user's score.</param>\n<param name=\"extraData\">Custom extension fields that can be used to record key information when writing the user's score.</param>\n<param name=\"forceUpdate\">Whether to force a leaderboard update:\n* `true`: make a force update\n* `false`: no force update\n<param name=\"InWriteEntryDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoLeaderboardsFunction, nullptr, "WriteEntry", nullptr, nullptr, sizeof(OnlinePicoLeaderboardsFunction_eventWriteEntry_Parms), Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics
	{
		struct OnlinePicoLeaderboardsFunction_eventWriteEntryWithSupplementaryMetric_Parms
		{
			UObject* WorldContextObject;
			FString LeaderboardName;
			FString Score;
			FString SupplementaryMetric;
			FString ExtraData;
			bool ForceUpdate;
			FScriptDelegate InWriteEntryWithSupplementaryMetricDelegate;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupplementaryMetric_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SupplementaryMetric;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraData;
		static void NewProp_ForceUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceUpdate;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InWriteEntryWithSupplementaryMetricDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventWriteEntryWithSupplementaryMetric_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventWriteEntryWithSupplementaryMetric_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_LeaderboardName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_Score_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventWriteEntryWithSupplementaryMetric_Parms, Score), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_SupplementaryMetric_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_SupplementaryMetric = { "SupplementaryMetric", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventWriteEntryWithSupplementaryMetric_Parms, SupplementaryMetric), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_SupplementaryMetric_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_SupplementaryMetric_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_ExtraData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_ExtraData = { "ExtraData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventWriteEntryWithSupplementaryMetric_Parms, ExtraData), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_ExtraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_ExtraData_MetaData)) };
	void Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_ForceUpdate_SetBit(void* Obj)
	{
		((OnlinePicoLeaderboardsFunction_eventWriteEntryWithSupplementaryMetric_Parms*)Obj)->ForceUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_ForceUpdate = { "ForceUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoLeaderboardsFunction_eventWriteEntryWithSupplementaryMetric_Parms), &Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_ForceUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_InWriteEntryWithSupplementaryMetricDelegate = { "InWriteEntryWithSupplementaryMetricDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoLeaderboardsFunction_eventWriteEntryWithSupplementaryMetric_Parms, InWriteEntryWithSupplementaryMetricDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_WriteEntryWithSupplementaryMetric__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_LeaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_SupplementaryMetric,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_ExtraData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_ForceUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::NewProp_InWriteEntryWithSupplementaryMetricDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Leaderboards" },
		{ "Comment", "/// <summary>Adds custom contents when writing a user's score to a leaderboard.</summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"leaderboardName\">Leaderboard name.</param>\n/// <param name=\"score\">The user's score.</param>\n/// <param name=\"supplementaryMetric\">Custom contents, such as a video.</param>\n/// <param name=\"extraData\">Custom extension fields that can be used to record key information when writing the custom contents.</param>\n/// <param name=\"forceUpdate\">Whether to force a leaderboard update:\n/// * `true`: make a force update\n/// * `false`: no force update\n/// <param name=\"InWriteEntryWithSupplementaryMetricDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param> \n/// <returns>Bool: \n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns> \n" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
		{ "ToolTip", "<summary>Adds custom contents when writing a user's score to a leaderboard.</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"leaderboardName\">Leaderboard name.</param>\n<param name=\"score\">The user's score.</param>\n<param name=\"supplementaryMetric\">Custom contents, such as a video.</param>\n<param name=\"extraData\">Custom extension fields that can be used to record key information when writing the custom contents.</param>\n<param name=\"forceUpdate\">Whether to force a leaderboard update:\n* `true`: make a force update\n* `false`: no force update\n<param name=\"InWriteEntryWithSupplementaryMetricDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoLeaderboardsFunction, nullptr, "WriteEntryWithSupplementaryMetric", nullptr, nullptr, sizeof(OnlinePicoLeaderboardsFunction_eventWriteEntryWithSupplementaryMetric_Parms), Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlinePicoLeaderboardsFunction_NoRegister()
	{
		return UOnlinePicoLeaderboardsFunction::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePicoLeaderboardsFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePicoLeaderboardsFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePicoLeaderboardsFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_Get, "Get" }, // 2795113853
		{ &Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntries, "GetEntries" }, // 1898009532
		{ &Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesAfterRank, "GetEntriesAfterRank" }, // 561045644
		{ &Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_GetEntriesByIds, "GetEntriesByIds" }, // 304418258
		{ &Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntry, "WriteEntry" }, // 1753631523
		{ &Z_Construct_UFunction_UOnlinePicoLeaderboardsFunction_WriteEntryWithSupplementaryMetric, "WriteEntryWithSupplementaryMetric" }, // 1308306830
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoLeaderboardsFunction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** @defgroup BP_Leaderboards BP_Leaderboards\n *  This is the BP_Leaderboards group\n *  @{\n *//// @brief OnlinePicoLeaderboards Blueprint Function class.\n" },
		{ "IncludePath", "Pico_Leaderboards.h" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
		{ "ToolTip", "@defgroup BP_Leaderboards BP_Leaderboards\nThis is the BP_Leaderboards group\n@{\n/// @brief OnlinePicoLeaderboards Blueprint Function class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePicoLeaderboardsFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePicoLeaderboardsFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePicoLeaderboardsFunction_Statics::ClassParams = {
		&UOnlinePicoLeaderboardsFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoLeaderboardsFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoLeaderboardsFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePicoLeaderboardsFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlinePicoLeaderboardsFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlinePicoLeaderboardsFunction, 1178964971);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UOnlinePicoLeaderboardsFunction>()
	{
		return UOnlinePicoLeaderboardsFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlinePicoLeaderboardsFunction(Z_Construct_UClass_UOnlinePicoLeaderboardsFunction, &UOnlinePicoLeaderboardsFunction::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UOnlinePicoLeaderboardsFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePicoLeaderboardsFunction);
	DEFINE_FUNCTION(UPico_LeaderboardEntry::execGetExtraDataString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetExtraDataString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_LeaderboardEntry::execGetUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_User**)Z_Param__Result=P_THIS->GetUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_LeaderboardEntry::execGetTimestampDateTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetTimestampDateTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_LeaderboardEntry::execGetTimestamp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTimestamp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_LeaderboardEntry::execGetSupplementaryMetricOptional)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPicoSupplementaryMetric*)Z_Param__Result=P_THIS->GetSupplementaryMetricOptional();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_LeaderboardEntry::execGetScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_LeaderboardEntry::execGetRank)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRank();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_LeaderboardEntry::execGetDisplayScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDisplayScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_LeaderboardEntry::execGetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetID();
		P_NATIVE_END;
	}
	void UPico_LeaderboardEntry::StaticRegisterNativesUPico_LeaderboardEntry()
	{
		UClass* Class = UPico_LeaderboardEntry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayScore", &UPico_LeaderboardEntry::execGetDisplayScore },
			{ "GetExtraDataString", &UPico_LeaderboardEntry::execGetExtraDataString },
			{ "GetID", &UPico_LeaderboardEntry::execGetID },
			{ "GetRank", &UPico_LeaderboardEntry::execGetRank },
			{ "GetScore", &UPico_LeaderboardEntry::execGetScore },
			{ "GetSupplementaryMetricOptional", &UPico_LeaderboardEntry::execGetSupplementaryMetricOptional },
			{ "GetTimestamp", &UPico_LeaderboardEntry::execGetTimestamp },
			{ "GetTimestampDateTime", &UPico_LeaderboardEntry::execGetTimestampDateTime },
			{ "GetUser", &UPico_LeaderboardEntry::execGetUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_LeaderboardEntry_GetDisplayScore_Statics
	{
		struct Pico_LeaderboardEntry_eventGetDisplayScore_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetDisplayScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardEntry_eventGetDisplayScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardEntry_GetDisplayScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardEntry_GetDisplayScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardEntry_GetDisplayScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Entry" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetDisplayScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardEntry, nullptr, "GetDisplayScore", nullptr, nullptr, sizeof(Pico_LeaderboardEntry_eventGetDisplayScore_Parms), Z_Construct_UFunction_UPico_LeaderboardEntry_GetDisplayScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetDisplayScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardEntry_GetDisplayScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetDisplayScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardEntry_GetDisplayScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardEntry_GetDisplayScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_LeaderboardEntry_GetExtraDataString_Statics
	{
		struct Pico_LeaderboardEntry_eventGetExtraDataString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetExtraDataString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardEntry_eventGetExtraDataString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardEntry_GetExtraDataString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardEntry_GetExtraDataString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardEntry_GetExtraDataString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Entry" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetExtraDataString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardEntry, nullptr, "GetExtraDataString", nullptr, nullptr, sizeof(Pico_LeaderboardEntry_eventGetExtraDataString_Parms), Z_Construct_UFunction_UPico_LeaderboardEntry_GetExtraDataString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetExtraDataString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardEntry_GetExtraDataString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetExtraDataString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardEntry_GetExtraDataString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardEntry_GetExtraDataString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_LeaderboardEntry_GetID_Statics
	{
		struct Pico_LeaderboardEntry_eventGetID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardEntry_eventGetID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardEntry_GetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardEntry_GetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardEntry_GetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Entry" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardEntry, nullptr, "GetID", nullptr, nullptr, sizeof(Pico_LeaderboardEntry_eventGetID_Parms), Z_Construct_UFunction_UPico_LeaderboardEntry_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardEntry_GetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardEntry_GetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardEntry_GetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_LeaderboardEntry_GetRank_Statics
	{
		struct Pico_LeaderboardEntry_eventGetRank_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardEntry_eventGetRank_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardEntry_GetRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardEntry_GetRank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardEntry_GetRank_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Entry" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardEntry, nullptr, "GetRank", nullptr, nullptr, sizeof(Pico_LeaderboardEntry_eventGetRank_Parms), Z_Construct_UFunction_UPico_LeaderboardEntry_GetRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardEntry_GetRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardEntry_GetRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardEntry_GetRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_LeaderboardEntry_GetScore_Statics
	{
		struct Pico_LeaderboardEntry_eventGetScore_Parms
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardEntry_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardEntry_GetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardEntry_GetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardEntry_GetScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Entry" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardEntry, nullptr, "GetScore", nullptr, nullptr, sizeof(Pico_LeaderboardEntry_eventGetScore_Parms), Z_Construct_UFunction_UPico_LeaderboardEntry_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardEntry_GetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardEntry_GetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardEntry_GetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_LeaderboardEntry_GetSupplementaryMetricOptional_Statics
	{
		struct Pico_LeaderboardEntry_eventGetSupplementaryMetricOptional_Parms
		{
			FPicoSupplementaryMetric ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetSupplementaryMetricOptional_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardEntry_eventGetSupplementaryMetricOptional_Parms, ReturnValue), Z_Construct_UScriptStruct_FPicoSupplementaryMetric, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardEntry_GetSupplementaryMetricOptional_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardEntry_GetSupplementaryMetricOptional_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardEntry_GetSupplementaryMetricOptional_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Entry" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetSupplementaryMetricOptional_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardEntry, nullptr, "GetSupplementaryMetricOptional", nullptr, nullptr, sizeof(Pico_LeaderboardEntry_eventGetSupplementaryMetricOptional_Parms), Z_Construct_UFunction_UPico_LeaderboardEntry_GetSupplementaryMetricOptional_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetSupplementaryMetricOptional_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardEntry_GetSupplementaryMetricOptional_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetSupplementaryMetricOptional_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardEntry_GetSupplementaryMetricOptional()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardEntry_GetSupplementaryMetricOptional_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestamp_Statics
	{
		struct Pico_LeaderboardEntry_eventGetTimestamp_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardEntry_eventGetTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Entry" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardEntry, nullptr, "GetTimestamp", nullptr, nullptr, sizeof(Pico_LeaderboardEntry_eventGetTimestamp_Parms), Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestampDateTime_Statics
	{
		struct Pico_LeaderboardEntry_eventGetTimestampDateTime_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestampDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardEntry_eventGetTimestampDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestampDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestampDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestampDateTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Entry" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestampDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardEntry, nullptr, "GetTimestampDateTime", nullptr, nullptr, sizeof(Pico_LeaderboardEntry_eventGetTimestampDateTime_Parms), Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestampDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestampDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestampDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestampDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestampDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestampDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_LeaderboardEntry_GetUser_Statics
	{
		struct Pico_LeaderboardEntry_eventGetUser_Parms
		{
			UPico_User* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardEntry_eventGetUser_Parms, ReturnValue), Z_Construct_UClass_UPico_User_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardEntry_GetUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardEntry_GetUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardEntry_GetUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Entry" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardEntry_GetUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardEntry, nullptr, "GetUser", nullptr, nullptr, sizeof(Pico_LeaderboardEntry_eventGetUser_Parms), Z_Construct_UFunction_UPico_LeaderboardEntry_GetUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardEntry_GetUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntry_GetUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardEntry_GetUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardEntry_GetUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_LeaderboardEntry_NoRegister()
	{
		return UPico_LeaderboardEntry::StaticClass();
	}
	struct Z_Construct_UClass_UPico_LeaderboardEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_LeaderboardEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_LeaderboardEntry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_LeaderboardEntry_GetDisplayScore, "GetDisplayScore" }, // 608103908
		{ &Z_Construct_UFunction_UPico_LeaderboardEntry_GetExtraDataString, "GetExtraDataString" }, // 885139569
		{ &Z_Construct_UFunction_UPico_LeaderboardEntry_GetID, "GetID" }, // 489227870
		{ &Z_Construct_UFunction_UPico_LeaderboardEntry_GetRank, "GetRank" }, // 4095189299
		{ &Z_Construct_UFunction_UPico_LeaderboardEntry_GetScore, "GetScore" }, // 1397747468
		{ &Z_Construct_UFunction_UPico_LeaderboardEntry_GetSupplementaryMetricOptional, "GetSupplementaryMetricOptional" }, // 1969181458
		{ &Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestamp, "GetTimestamp" }, // 756407408
		{ &Z_Construct_UFunction_UPico_LeaderboardEntry_GetTimestampDateTime, "GetTimestampDateTime" }, // 1820586707
		{ &Z_Construct_UFunction_UPico_LeaderboardEntry_GetUser, "GetUser" }, // 2610535999
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_LeaderboardEntry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "IncludePath", "Pico_Leaderboards.h" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_LeaderboardEntry_Statics::NewProp_User_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_LeaderboardEntry_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_LeaderboardEntry, User), Z_Construct_UClass_UPico_User_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPico_LeaderboardEntry_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_LeaderboardEntry_Statics::NewProp_User_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_LeaderboardEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_LeaderboardEntry_Statics::NewProp_User,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_LeaderboardEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_LeaderboardEntry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_LeaderboardEntry_Statics::ClassParams = {
		&UPico_LeaderboardEntry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_LeaderboardEntry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_LeaderboardEntry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_LeaderboardEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_LeaderboardEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_LeaderboardEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_LeaderboardEntry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_LeaderboardEntry, 1661113774);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_LeaderboardEntry>()
	{
		return UPico_LeaderboardEntry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_LeaderboardEntry(Z_Construct_UClass_UPico_LeaderboardEntry, &UPico_LeaderboardEntry::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_LeaderboardEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_LeaderboardEntry);
	DEFINE_FUNCTION(UPico_Leaderboard::execGetDestinationOptional)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPicoDestination*)Z_Param__Result=P_THIS->GetDestinationOptional();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Leaderboard::execGetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Leaderboard::execGetApiName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetApiName();
		P_NATIVE_END;
	}
	void UPico_Leaderboard::StaticRegisterNativesUPico_Leaderboard()
	{
		UClass* Class = UPico_Leaderboard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetApiName", &UPico_Leaderboard::execGetApiName },
			{ "GetDestinationOptional", &UPico_Leaderboard::execGetDestinationOptional },
			{ "GetID", &UPico_Leaderboard::execGetID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_Leaderboard_GetApiName_Statics
	{
		struct Pico_Leaderboard_eventGetApiName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_Leaderboard_GetApiName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Leaderboard_eventGetApiName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Leaderboard_GetApiName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Leaderboard_GetApiName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Leaderboard_GetApiName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Leaderboard_GetApiName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Leaderboard, nullptr, "GetApiName", nullptr, nullptr, sizeof(Pico_Leaderboard_eventGetApiName_Parms), Z_Construct_UFunction_UPico_Leaderboard_GetApiName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Leaderboard_GetApiName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Leaderboard_GetApiName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Leaderboard_GetApiName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Leaderboard_GetApiName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Leaderboard_GetApiName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Leaderboard_GetDestinationOptional_Statics
	{
		struct Pico_Leaderboard_eventGetDestinationOptional_Parms
		{
			FPicoDestination ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPico_Leaderboard_GetDestinationOptional_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Leaderboard_eventGetDestinationOptional_Parms, ReturnValue), Z_Construct_UScriptStruct_FPicoDestination, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Leaderboard_GetDestinationOptional_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Leaderboard_GetDestinationOptional_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Leaderboard_GetDestinationOptional_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Leaderboard_GetDestinationOptional_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Leaderboard, nullptr, "GetDestinationOptional", nullptr, nullptr, sizeof(Pico_Leaderboard_eventGetDestinationOptional_Parms), Z_Construct_UFunction_UPico_Leaderboard_GetDestinationOptional_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Leaderboard_GetDestinationOptional_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Leaderboard_GetDestinationOptional_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Leaderboard_GetDestinationOptional_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Leaderboard_GetDestinationOptional()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Leaderboard_GetDestinationOptional_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Leaderboard_GetID_Statics
	{
		struct Pico_Leaderboard_eventGetID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_Leaderboard_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Leaderboard_eventGetID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Leaderboard_GetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Leaderboard_GetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Leaderboard_GetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Leaderboard_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Leaderboard, nullptr, "GetID", nullptr, nullptr, sizeof(Pico_Leaderboard_eventGetID_Parms), Z_Construct_UFunction_UPico_Leaderboard_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Leaderboard_GetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Leaderboard_GetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Leaderboard_GetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Leaderboard_GetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Leaderboard_GetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_Leaderboard_NoRegister()
	{
		return UPico_Leaderboard::StaticClass();
	}
	struct Z_Construct_UClass_UPico_Leaderboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_Leaderboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_Leaderboard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_Leaderboard_GetApiName, "GetApiName" }, // 2633975317
		{ &Z_Construct_UFunction_UPico_Leaderboard_GetDestinationOptional, "GetDestinationOptional" }, // 863587642
		{ &Z_Construct_UFunction_UPico_Leaderboard_GetID, "GetID" }, // 3158087967
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_Leaderboard_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_Leaderboards.h" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_Leaderboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_Leaderboard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_Leaderboard_Statics::ClassParams = {
		&UPico_Leaderboard::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_Leaderboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_Leaderboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_Leaderboard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_Leaderboard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_Leaderboard, 2338199171);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_Leaderboard>()
	{
		return UPico_Leaderboard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_Leaderboard(Z_Construct_UClass_UPico_Leaderboard, &UPico_Leaderboard::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_Leaderboard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_Leaderboard);
	DEFINE_FUNCTION(UPico_LeaderboardEntryArray::execHasNextPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasNextPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_LeaderboardEntryArray::execGetTotalSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_LeaderboardEntryArray::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_LeaderboardEntryArray::execGetNextPageParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNextPageParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_LeaderboardEntryArray::execGetElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_LeaderboardEntry**)Z_Param__Result=P_THIS->GetElement(Z_Param_Index);
		P_NATIVE_END;
	}
	void UPico_LeaderboardEntryArray::StaticRegisterNativesUPico_LeaderboardEntryArray()
	{
		UClass* Class = UPico_LeaderboardEntryArray::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetElement", &UPico_LeaderboardEntryArray::execGetElement },
			{ "GetNextPageParam", &UPico_LeaderboardEntryArray::execGetNextPageParam },
			{ "GetSize", &UPico_LeaderboardEntryArray::execGetSize },
			{ "GetTotalSize", &UPico_LeaderboardEntryArray::execGetTotalSize },
			{ "HasNextPage", &UPico_LeaderboardEntryArray::execHasNextPage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetElement_Statics
	{
		struct Pico_LeaderboardEntryArray_eventGetElement_Parms
		{
			int32 Index;
			UPico_LeaderboardEntry* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardEntryArray_eventGetElement_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardEntryArray_eventGetElement_Parms, ReturnValue), Z_Construct_UClass_UPico_LeaderboardEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetElement_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Entry Array" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardEntryArray, nullptr, "GetElement", nullptr, nullptr, sizeof(Pico_LeaderboardEntryArray_eventGetElement_Parms), Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetNextPageParam_Statics
	{
		struct Pico_LeaderboardEntryArray_eventGetNextPageParam_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetNextPageParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardEntryArray_eventGetNextPageParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetNextPageParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetNextPageParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetNextPageParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Entry Array" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetNextPageParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardEntryArray, nullptr, "GetNextPageParam", nullptr, nullptr, sizeof(Pico_LeaderboardEntryArray_eventGetNextPageParam_Parms), Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetNextPageParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetNextPageParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetNextPageParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetNextPageParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetNextPageParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetNextPageParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetSize_Statics
	{
		struct Pico_LeaderboardEntryArray_eventGetSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardEntryArray_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Entry Array" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardEntryArray, nullptr, "GetSize", nullptr, nullptr, sizeof(Pico_LeaderboardEntryArray_eventGetSize_Parms), Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetTotalSize_Statics
	{
		struct Pico_LeaderboardEntryArray_eventGetTotalSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetTotalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardEntryArray_eventGetTotalSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetTotalSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetTotalSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetTotalSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Entry Array" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetTotalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardEntryArray, nullptr, "GetTotalSize", nullptr, nullptr, sizeof(Pico_LeaderboardEntryArray_eventGetTotalSize_Parms), Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetTotalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetTotalSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetTotalSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetTotalSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetTotalSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetTotalSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_LeaderboardEntryArray_HasNextPage_Statics
	{
		struct Pico_LeaderboardEntryArray_eventHasNextPage_Parms
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
	void Z_Construct_UFunction_UPico_LeaderboardEntryArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_LeaderboardEntryArray_eventHasNextPage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_LeaderboardEntryArray_HasNextPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_LeaderboardEntryArray_eventHasNextPage_Parms), &Z_Construct_UFunction_UPico_LeaderboardEntryArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardEntryArray_HasNextPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardEntryArray_HasNextPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardEntryArray_HasNextPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Entry Array" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardEntryArray_HasNextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardEntryArray, nullptr, "HasNextPage", nullptr, nullptr, sizeof(Pico_LeaderboardEntryArray_eventHasNextPage_Parms), Z_Construct_UFunction_UPico_LeaderboardEntryArray_HasNextPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntryArray_HasNextPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardEntryArray_HasNextPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardEntryArray_HasNextPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardEntryArray_HasNextPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardEntryArray_HasNextPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_LeaderboardEntryArray_NoRegister()
	{
		return UPico_LeaderboardEntryArray::StaticClass();
	}
	struct Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeaderboardEntryArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardEntryArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LeaderboardEntryArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetElement, "GetElement" }, // 1254977165
		{ &Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetNextPageParam, "GetNextPageParam" }, // 3544407636
		{ &Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetSize, "GetSize" }, // 543354280
		{ &Z_Construct_UFunction_UPico_LeaderboardEntryArray_GetTotalSize, "GetTotalSize" }, // 141349725
		{ &Z_Construct_UFunction_UPico_LeaderboardEntryArray_HasNextPage, "HasNextPage" }, // 2862383025
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_Leaderboards.h" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::NewProp_LeaderboardEntryArray_Inner = { "LeaderboardEntryArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPico_LeaderboardEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::NewProp_LeaderboardEntryArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::NewProp_LeaderboardEntryArray = { "LeaderboardEntryArray", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_LeaderboardEntryArray, LeaderboardEntryArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::NewProp_LeaderboardEntryArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::NewProp_LeaderboardEntryArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::NewProp_LeaderboardEntryArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::NewProp_LeaderboardEntryArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_LeaderboardEntryArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::ClassParams = {
		&UPico_LeaderboardEntryArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_LeaderboardEntryArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_LeaderboardEntryArray, 788332246);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_LeaderboardEntryArray>()
	{
		return UPico_LeaderboardEntryArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_LeaderboardEntryArray(Z_Construct_UClass_UPico_LeaderboardEntryArray, &UPico_LeaderboardEntryArray::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_LeaderboardEntryArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_LeaderboardEntryArray);
	DEFINE_FUNCTION(UPico_LeaderboardArray::execHasNextPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasNextPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_LeaderboardArray::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_LeaderboardArray::execGetNextPageParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNextPageParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_LeaderboardArray::execGetElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_Leaderboard**)Z_Param__Result=P_THIS->GetElement(Z_Param_Index);
		P_NATIVE_END;
	}
	void UPico_LeaderboardArray::StaticRegisterNativesUPico_LeaderboardArray()
	{
		UClass* Class = UPico_LeaderboardArray::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetElement", &UPico_LeaderboardArray::execGetElement },
			{ "GetNextPageParam", &UPico_LeaderboardArray::execGetNextPageParam },
			{ "GetSize", &UPico_LeaderboardArray::execGetSize },
			{ "HasNextPage", &UPico_LeaderboardArray::execHasNextPage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_LeaderboardArray_GetElement_Statics
	{
		struct Pico_LeaderboardArray_eventGetElement_Parms
		{
			int32 Index;
			UPico_Leaderboard* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_LeaderboardArray_GetElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardArray_eventGetElement_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_LeaderboardArray_GetElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardArray_eventGetElement_Parms, ReturnValue), Z_Construct_UClass_UPico_Leaderboard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardArray_GetElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardArray_GetElement_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardArray_GetElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardArray_GetElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Definition Array" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardArray_GetElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardArray, nullptr, "GetElement", nullptr, nullptr, sizeof(Pico_LeaderboardArray_eventGetElement_Parms), Z_Construct_UFunction_UPico_LeaderboardArray_GetElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardArray_GetElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardArray_GetElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardArray_GetElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardArray_GetElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardArray_GetElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_LeaderboardArray_GetNextPageParam_Statics
	{
		struct Pico_LeaderboardArray_eventGetNextPageParam_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_LeaderboardArray_GetNextPageParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardArray_eventGetNextPageParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardArray_GetNextPageParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardArray_GetNextPageParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardArray_GetNextPageParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Definition Array" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardArray_GetNextPageParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardArray, nullptr, "GetNextPageParam", nullptr, nullptr, sizeof(Pico_LeaderboardArray_eventGetNextPageParam_Parms), Z_Construct_UFunction_UPico_LeaderboardArray_GetNextPageParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardArray_GetNextPageParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardArray_GetNextPageParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardArray_GetNextPageParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardArray_GetNextPageParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardArray_GetNextPageParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_LeaderboardArray_GetSize_Statics
	{
		struct Pico_LeaderboardArray_eventGetSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_LeaderboardArray_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_LeaderboardArray_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardArray_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardArray_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardArray_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Definition Array" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardArray_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardArray, nullptr, "GetSize", nullptr, nullptr, sizeof(Pico_LeaderboardArray_eventGetSize_Parms), Z_Construct_UFunction_UPico_LeaderboardArray_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardArray_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardArray_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardArray_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardArray_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardArray_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_LeaderboardArray_HasNextPage_Statics
	{
		struct Pico_LeaderboardArray_eventHasNextPage_Parms
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
	void Z_Construct_UFunction_UPico_LeaderboardArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_LeaderboardArray_eventHasNextPage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_LeaderboardArray_HasNextPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_LeaderboardArray_eventHasNextPage_Parms), &Z_Construct_UFunction_UPico_LeaderboardArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_LeaderboardArray_HasNextPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_LeaderboardArray_HasNextPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_LeaderboardArray_HasNextPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Leaderboards|Leaderboard Definition Array" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_LeaderboardArray_HasNextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_LeaderboardArray, nullptr, "HasNextPage", nullptr, nullptr, sizeof(Pico_LeaderboardArray_eventHasNextPage_Parms), Z_Construct_UFunction_UPico_LeaderboardArray_HasNextPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardArray_HasNextPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_LeaderboardArray_HasNextPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_LeaderboardArray_HasNextPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_LeaderboardArray_HasNextPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_LeaderboardArray_HasNextPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_LeaderboardArray_NoRegister()
	{
		return UPico_LeaderboardArray::StaticClass();
	}
	struct Z_Construct_UClass_UPico_LeaderboardArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeaderboardArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LeaderboardArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_LeaderboardArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_LeaderboardArray_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_LeaderboardArray_GetElement, "GetElement" }, // 19862775
		{ &Z_Construct_UFunction_UPico_LeaderboardArray_GetNextPageParam, "GetNextPageParam" }, // 2854565194
		{ &Z_Construct_UFunction_UPico_LeaderboardArray_GetSize, "GetSize" }, // 430167185
		{ &Z_Construct_UFunction_UPico_LeaderboardArray_HasNextPage, "HasNextPage" }, // 3160357047
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_LeaderboardArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_Leaderboards.h" },
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_LeaderboardArray_Statics::NewProp_LeaderboardArray_Inner = { "LeaderboardArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPico_Leaderboard_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_LeaderboardArray_Statics::NewProp_LeaderboardArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Leaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPico_LeaderboardArray_Statics::NewProp_LeaderboardArray = { "LeaderboardArray", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_LeaderboardArray, LeaderboardArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPico_LeaderboardArray_Statics::NewProp_LeaderboardArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_LeaderboardArray_Statics::NewProp_LeaderboardArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_LeaderboardArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_LeaderboardArray_Statics::NewProp_LeaderboardArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_LeaderboardArray_Statics::NewProp_LeaderboardArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_LeaderboardArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_LeaderboardArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_LeaderboardArray_Statics::ClassParams = {
		&UPico_LeaderboardArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_LeaderboardArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_LeaderboardArray_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_LeaderboardArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_LeaderboardArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_LeaderboardArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_LeaderboardArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_LeaderboardArray, 1864512711);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_LeaderboardArray>()
	{
		return UPico_LeaderboardArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_LeaderboardArray(Z_Construct_UClass_UPico_LeaderboardArray, &UPico_LeaderboardArray::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_LeaderboardArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_LeaderboardArray);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
