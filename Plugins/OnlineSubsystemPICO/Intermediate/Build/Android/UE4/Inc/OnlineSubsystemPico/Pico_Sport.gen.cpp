// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Public/Pico_Sport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePico_Sport() {}
// Cross Module References
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_SportUserInfo_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_SportSummary_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_SportDailySummaryArray_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoSportFunction_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoSportFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_SportDailySummary_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_SportDailySummary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_SportDailySummaryArray();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_SportSummary();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_SportUserInfo();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EUserGender();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ESportTarget();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetSportUserInfo_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_SportUserInfo* SportUserInfo;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SportUserInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetSportUserInfo_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetSportUserInfo_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetSportUserInfo_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::NewProp_SportUserInfo = { "SportUserInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetSportUserInfo_Parms, SportUserInfo), Z_Construct_UClass_UPico_SportUserInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::NewProp_SportUserInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetSportUserInfo__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetSportUserInfo_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetSummary_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_SportSummary* SportSummary;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SportSummary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetSummary_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetSummary_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetSummary_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::NewProp_SportSummary = { "SportSummary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetSummary_Parms, SportSummary), Z_Construct_UClass_UPico_SportSummary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::NewProp_SportSummary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetSummary__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetSummary_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetDailySummary_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_SportDailySummaryArray* SportDailySummaryArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SportDailySummaryArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetDailySummary_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetDailySummary_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetDailySummary_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::NewProp_SportDailySummaryArray = { "SportDailySummaryArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetDailySummary_Parms, SportDailySummaryArray), Z_Construct_UClass_UPico_SportDailySummaryArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::NewProp_SportDailySummaryArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetDailySummary__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetDailySummary_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePicoSportFunction::execConvertInt64ToDateTime)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UOnlinePicoSportFunction::ConvertInt64ToDateTime(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoSportFunction::execConvertDateTimeToInt64)
	{
		P_GET_STRUCT(FDateTime,Z_Param_InDateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UOnlinePicoSportFunction::ConvertDateTimeToInt64(Z_Param_InDateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoSportFunction::execGetSportUserInfo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetSportUserInfoDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoSportFunction::GetSportUserInfo(Z_Param_WorldContextObject,FGetSportUserInfo(Z_Param_InGetSportUserInfoDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoSportFunction::execGetSummary)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FInt64Property,Z_Param_BeginTime);
		P_GET_PROPERTY(FInt64Property,Z_Param_EndTime);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetSummaryDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoSportFunction::GetSummary(Z_Param_WorldContextObject,Z_Param_BeginTime,Z_Param_EndTime,FGetSummary(Z_Param_InGetSummaryDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoSportFunction::execGetDailySummary)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FInt64Property,Z_Param_BeginTime);
		P_GET_PROPERTY(FInt64Property,Z_Param_EndTime);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetDailySummaryDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoSportFunction::GetDailySummary(Z_Param_WorldContextObject,Z_Param_BeginTime,Z_Param_EndTime,FGetDailySummary(Z_Param_InGetDailySummaryDelegate));
		P_NATIVE_END;
	}
	void UOnlinePicoSportFunction::StaticRegisterNativesUOnlinePicoSportFunction()
	{
		UClass* Class = UOnlinePicoSportFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertDateTimeToInt64", &UOnlinePicoSportFunction::execConvertDateTimeToInt64 },
			{ "ConvertInt64ToDateTime", &UOnlinePicoSportFunction::execConvertInt64ToDateTime },
			{ "GetDailySummary", &UOnlinePicoSportFunction::execGetDailySummary },
			{ "GetSportUserInfo", &UOnlinePicoSportFunction::execGetSportUserInfo },
			{ "GetSummary", &UOnlinePicoSportFunction::execGetSummary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertDateTimeToInt64_Statics
	{
		struct OnlinePicoSportFunction_eventConvertDateTimeToInt64_Parms
		{
			FDateTime InDateTime;
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDateTime;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertDateTimeToInt64_Statics::NewProp_InDateTime = { "InDateTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSportFunction_eventConvertDateTimeToInt64_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertDateTimeToInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSportFunction_eventConvertDateTimeToInt64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertDateTimeToInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertDateTimeToInt64_Statics::NewProp_InDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertDateTimeToInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertDateTimeToInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Sport" },
		{ "Comment", "/// <summary>\n/// Convert FDateTime to int64\n/// @note BlueprintPure function.\n/// </summary>\n/// <param name =\"InDateTime\">Input DateTime.</param>\n/// <returns>int64 result\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "<summary>\nConvert FDateTime to int64\n@note BlueprintPure function.\n</summary>\n<param name =\"InDateTime\">Input DateTime.</param>\n<returns>int64 result\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertDateTimeToInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoSportFunction, nullptr, "ConvertDateTimeToInt64", nullptr, nullptr, sizeof(OnlinePicoSportFunction_eventConvertDateTimeToInt64_Parms), Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertDateTimeToInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertDateTimeToInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertDateTimeToInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertDateTimeToInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertDateTimeToInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertDateTimeToInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertInt64ToDateTime_Statics
	{
		struct OnlinePicoSportFunction_eventConvertInt64ToDateTime_Parms
		{
			int64 InValue;
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertInt64ToDateTime_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSportFunction_eventConvertInt64ToDateTime_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertInt64ToDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSportFunction_eventConvertInt64ToDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertInt64ToDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertInt64ToDateTime_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertInt64ToDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertInt64ToDateTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Sport" },
		{ "Comment", "/// <summary>\n/// Converts int64 to FDateTime.\n/// @note BlueprintPure function.\n/// </summary>\n/// <param name =\"InValue\">The int64 input.</param>\n/// <returns>The FDateTime result of the int64 input.\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "<summary>\nConverts int64 to FDateTime.\n@note BlueprintPure function.\n</summary>\n<param name =\"InValue\">The int64 input.</param>\n<returns>The FDateTime result of the int64 input.\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertInt64ToDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoSportFunction, nullptr, "ConvertInt64ToDateTime", nullptr, nullptr, sizeof(OnlinePicoSportFunction_eventConvertInt64ToDateTime_Parms), Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertInt64ToDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertInt64ToDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertInt64ToDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertInt64ToDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertInt64ToDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertInt64ToDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics
	{
		struct OnlinePicoSportFunction_eventGetDailySummary_Parms
		{
			UObject* WorldContextObject;
			int64 BeginTime;
			int64 EndTime;
			FScriptDelegate InGetDailySummaryDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_BeginTime;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_EndTime;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetDailySummaryDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSportFunction_eventGetDailySummary_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::NewProp_BeginTime = { "BeginTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSportFunction_eventGetDailySummary_Parms, BeginTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSportFunction_eventGetDailySummary_Parms, EndTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::NewProp_InGetDailySummaryDelegate = { "InGetDailySummaryDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSportFunction_eventGetDailySummary_Parms, InGetDailySummaryDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetDailySummary__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoSportFunction_eventGetDailySummary_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoSportFunction_eventGetDailySummary_Parms), &Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::NewProp_BeginTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::NewProp_InGetDailySummaryDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Sport" },
		{ "Comment", "/// <summary>\n/// Gets a summary of the user's daily exercise data for a specified period within the recent 3 months.\n/// For example, if the period you set is between 2022/08/16 and 2022/08/18, the exercise data generated on 08/16, 08/17, and 08/18 will be returned.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"BeginTime\">A DateTime struct(FDateTime(int64 InTicks).GetTicks()) defining the begin time of the period.</param>\n/// <param name=\"EndTime\">A DateTime struct(FDateTime(int64 InTicks).GetTicks()) defining the end time of the period.</param>\n/// <param name=\"InGetDailySummaryDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "<summary>\nGets a summary of the user's daily exercise data for a specified period within the recent 3 months.\nFor example, if the period you set is between 2022/08/16 and 2022/08/18, the exercise data generated on 08/16, 08/17, and 08/18 will be returned.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"BeginTime\">A DateTime struct(FDateTime(int64 InTicks).GetTicks()) defining the begin time of the period.</param>\n<param name=\"EndTime\">A DateTime struct(FDateTime(int64 InTicks).GetTicks()) defining the end time of the period.</param>\n<param name=\"InGetDailySummaryDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoSportFunction, nullptr, "GetDailySummary", nullptr, nullptr, sizeof(OnlinePicoSportFunction_eventGetDailySummary_Parms), Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics
	{
		struct OnlinePicoSportFunction_eventGetSportUserInfo_Parms
		{
			UObject* WorldContextObject;
			FScriptDelegate InGetSportUserInfoDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetSportUserInfoDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSportFunction_eventGetSportUserInfo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics::NewProp_InGetSportUserInfoDelegate = { "InGetSportUserInfoDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSportFunction_eventGetSportUserInfo_Parms, InGetSportUserInfoDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSportUserInfo__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoSportFunction_eventGetSportUserInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoSportFunction_eventGetSportUserInfo_Parms), &Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics::NewProp_InGetSportUserInfoDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Sport" },
		{ "Comment", "/// <summary>\n/// Gets a user's basic information and exercise plan.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"InGetSportUserInfoDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "<summary>\nGets a user's basic information and exercise plan.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"InGetSportUserInfoDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoSportFunction, nullptr, "GetSportUserInfo", nullptr, nullptr, sizeof(OnlinePicoSportFunction_eventGetSportUserInfo_Parms), Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics
	{
		struct OnlinePicoSportFunction_eventGetSummary_Parms
		{
			UObject* WorldContextObject;
			int64 BeginTime;
			int64 EndTime;
			FScriptDelegate InGetSummaryDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_BeginTime;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_EndTime;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetSummaryDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSportFunction_eventGetSummary_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::NewProp_BeginTime = { "BeginTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSportFunction_eventGetSummary_Parms, BeginTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSportFunction_eventGetSummary_Parms, EndTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::NewProp_InGetSummaryDelegate = { "InGetSummaryDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSportFunction_eventGetSummary_Parms, InGetSummaryDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetSummary__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoSportFunction_eventGetSummary_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoSportFunction_eventGetSummary_Parms), &Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::NewProp_BeginTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::NewProp_InGetSummaryDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Sport" },
		{ "Comment", "/// <summary>\n/// Gets a summary of the user's exercise data for a specified duration within today. The duration should not exceed 24 hours.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"BeginTime\">A DateTime struct(FDateTime(int64 InTicks).GetTicks()) defining the begin time of the period.</param>\n/// <param name=\"EndTime\">A DateTime struct(FDateTime(int64 InTicks)GetTicks()) defining the end time of the period.</param>\n/// <param name=\"InGetSummaryDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "<summary>\nGets a summary of the user's exercise data for a specified duration within today. The duration should not exceed 24 hours.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"BeginTime\">A DateTime struct(FDateTime(int64 InTicks).GetTicks()) defining the begin time of the period.</param>\n<param name=\"EndTime\">A DateTime struct(FDateTime(int64 InTicks)GetTicks()) defining the end time of the period.</param>\n<param name=\"InGetSummaryDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoSportFunction, nullptr, "GetSummary", nullptr, nullptr, sizeof(OnlinePicoSportFunction_eventGetSummary_Parms), Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlinePicoSportFunction_NoRegister()
	{
		return UOnlinePicoSportFunction::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePicoSportFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePicoSportFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePicoSportFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertDateTimeToInt64, "ConvertDateTimeToInt64" }, // 1380457128
		{ &Z_Construct_UFunction_UOnlinePicoSportFunction_ConvertInt64ToDateTime, "ConvertInt64ToDateTime" }, // 3112725244
		{ &Z_Construct_UFunction_UOnlinePicoSportFunction_GetDailySummary, "GetDailySummary" }, // 1971177932
		{ &Z_Construct_UFunction_UOnlinePicoSportFunction_GetSportUserInfo, "GetSportUserInfo" }, // 3082650268
		{ &Z_Construct_UFunction_UOnlinePicoSportFunction_GetSummary, "GetSummary" }, // 2178725976
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoSportFunction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** @defgroup BP_Sport BP_Sport\n  *  This is the BP_Sport group\n  *  @{\n  *//// @brief OnlinePicoSport Blueprint Function class.\n" },
		{ "IncludePath", "Pico_Sport.h" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "@defgroup BP_Sport BP_Sport\nThis is the BP_Sport group\n@{\n /// @brief OnlinePicoSport Blueprint Function class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePicoSportFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePicoSportFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePicoSportFunction_Statics::ClassParams = {
		&UOnlinePicoSportFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoSportFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoSportFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePicoSportFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlinePicoSportFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlinePicoSportFunction, 3143324118);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UOnlinePicoSportFunction>()
	{
		return UOnlinePicoSportFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlinePicoSportFunction(Z_Construct_UClass_UOnlinePicoSportFunction, &UOnlinePicoSportFunction::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UOnlinePicoSportFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePicoSportFunction);
	DEFINE_FUNCTION(UPico_SportDailySummary::execGetPlanCalorie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlanCalorie();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SportDailySummary::execGetCalorie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCalorie();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SportDailySummary::execGetPlanDurationInMinutes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlanDurationInMinutes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SportDailySummary::execGetDurationInSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDurationInSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SportDailySummary::execGetDate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetDate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SportDailySummary::execGetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetID();
		P_NATIVE_END;
	}
	void UPico_SportDailySummary::StaticRegisterNativesUPico_SportDailySummary()
	{
		UClass* Class = UPico_SportDailySummary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCalorie", &UPico_SportDailySummary::execGetCalorie },
			{ "GetDate", &UPico_SportDailySummary::execGetDate },
			{ "GetDurationInSeconds", &UPico_SportDailySummary::execGetDurationInSeconds },
			{ "GetID", &UPico_SportDailySummary::execGetID },
			{ "GetPlanCalorie", &UPico_SportDailySummary::execGetPlanCalorie },
			{ "GetPlanDurationInMinutes", &UPico_SportDailySummary::execGetPlanDurationInMinutes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_SportDailySummary_GetCalorie_Statics
	{
		struct Pico_SportDailySummary_eventGetCalorie_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPico_SportDailySummary_GetCalorie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportDailySummary_eventGetCalorie_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportDailySummary_GetCalorie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportDailySummary_GetCalorie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportDailySummary_GetCalorie_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|Sport Daily Summary" },
		{ "Comment", "// Calorie\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "Calorie" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportDailySummary_GetCalorie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportDailySummary, nullptr, "GetCalorie", nullptr, nullptr, sizeof(Pico_SportDailySummary_eventGetCalorie_Parms), Z_Construct_UFunction_UPico_SportDailySummary_GetCalorie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportDailySummary_GetCalorie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportDailySummary_GetCalorie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportDailySummary_GetCalorie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportDailySummary_GetCalorie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportDailySummary_GetCalorie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SportDailySummary_GetDate_Statics
	{
		struct Pico_SportDailySummary_eventGetDate_Parms
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPico_SportDailySummary_GetDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportDailySummary_eventGetDate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportDailySummary_GetDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportDailySummary_GetDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportDailySummary_GetDate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|Sport Daily Summary" },
		{ "Comment", "// Date\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "Date" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportDailySummary_GetDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportDailySummary, nullptr, "GetDate", nullptr, nullptr, sizeof(Pico_SportDailySummary_eventGetDate_Parms), Z_Construct_UFunction_UPico_SportDailySummary_GetDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportDailySummary_GetDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportDailySummary_GetDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportDailySummary_GetDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportDailySummary_GetDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportDailySummary_GetDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SportDailySummary_GetDurationInSeconds_Statics
	{
		struct Pico_SportDailySummary_eventGetDurationInSeconds_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_SportDailySummary_GetDurationInSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportDailySummary_eventGetDurationInSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportDailySummary_GetDurationInSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportDailySummary_GetDurationInSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportDailySummary_GetDurationInSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|Sport Daily Summary" },
		{ "Comment", "// Daily exercise duration (in seconds)\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "Daily exercise duration (in seconds)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportDailySummary_GetDurationInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportDailySummary, nullptr, "GetDurationInSeconds", nullptr, nullptr, sizeof(Pico_SportDailySummary_eventGetDurationInSeconds_Parms), Z_Construct_UFunction_UPico_SportDailySummary_GetDurationInSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportDailySummary_GetDurationInSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportDailySummary_GetDurationInSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportDailySummary_GetDurationInSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportDailySummary_GetDurationInSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportDailySummary_GetDurationInSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SportDailySummary_GetID_Statics
	{
		struct Pico_SportDailySummary_eventGetID_Parms
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPico_SportDailySummary_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportDailySummary_eventGetID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportDailySummary_GetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportDailySummary_GetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportDailySummary_GetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|Sport Daily Summary" },
		{ "Comment", "// Count ID\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "Count ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportDailySummary_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportDailySummary, nullptr, "GetID", nullptr, nullptr, sizeof(Pico_SportDailySummary_eventGetID_Parms), Z_Construct_UFunction_UPico_SportDailySummary_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportDailySummary_GetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportDailySummary_GetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportDailySummary_GetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportDailySummary_GetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportDailySummary_GetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SportDailySummary_GetPlanCalorie_Statics
	{
		struct Pico_SportDailySummary_eventGetPlanCalorie_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPico_SportDailySummary_GetPlanCalorie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportDailySummary_eventGetPlanCalorie_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportDailySummary_GetPlanCalorie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportDailySummary_GetPlanCalorie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportDailySummary_GetPlanCalorie_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|Sport Daily Summary" },
		{ "Comment", "// Plan calorie\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "Plan calorie" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportDailySummary_GetPlanCalorie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportDailySummary, nullptr, "GetPlanCalorie", nullptr, nullptr, sizeof(Pico_SportDailySummary_eventGetPlanCalorie_Parms), Z_Construct_UFunction_UPico_SportDailySummary_GetPlanCalorie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportDailySummary_GetPlanCalorie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportDailySummary_GetPlanCalorie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportDailySummary_GetPlanCalorie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportDailySummary_GetPlanCalorie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportDailySummary_GetPlanCalorie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SportDailySummary_GetPlanDurationInMinutes_Statics
	{
		struct Pico_SportDailySummary_eventGetPlanDurationInMinutes_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_SportDailySummary_GetPlanDurationInMinutes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportDailySummary_eventGetPlanDurationInMinutes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportDailySummary_GetPlanDurationInMinutes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportDailySummary_GetPlanDurationInMinutes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportDailySummary_GetPlanDurationInMinutes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|Sport Daily Summary" },
		{ "Comment", "// Planned daily exercise duration (in minutes)\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "Planned daily exercise duration (in minutes)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportDailySummary_GetPlanDurationInMinutes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportDailySummary, nullptr, "GetPlanDurationInMinutes", nullptr, nullptr, sizeof(Pico_SportDailySummary_eventGetPlanDurationInMinutes_Parms), Z_Construct_UFunction_UPico_SportDailySummary_GetPlanDurationInMinutes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportDailySummary_GetPlanDurationInMinutes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportDailySummary_GetPlanDurationInMinutes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportDailySummary_GetPlanDurationInMinutes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportDailySummary_GetPlanDurationInMinutes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportDailySummary_GetPlanDurationInMinutes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_SportDailySummary_NoRegister()
	{
		return UPico_SportDailySummary::StaticClass();
	}
	struct Z_Construct_UClass_UPico_SportDailySummary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_SportDailySummary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_SportDailySummary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_SportDailySummary_GetCalorie, "GetCalorie" }, // 1771867006
		{ &Z_Construct_UFunction_UPico_SportDailySummary_GetDate, "GetDate" }, // 3649530376
		{ &Z_Construct_UFunction_UPico_SportDailySummary_GetDurationInSeconds, "GetDurationInSeconds" }, // 3814249218
		{ &Z_Construct_UFunction_UPico_SportDailySummary_GetID, "GetID" }, // 2731648637
		{ &Z_Construct_UFunction_UPico_SportDailySummary_GetPlanCalorie, "GetPlanCalorie" }, // 3887970335
		{ &Z_Construct_UFunction_UPico_SportDailySummary_GetPlanDurationInMinutes, "GetPlanDurationInMinutes" }, // 4080574018
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_SportDailySummary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @} */// end of BlueprintFunction\n" },
		{ "IncludePath", "Pico_Sport.h" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "@} // end of BlueprintFunction" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_SportDailySummary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_SportDailySummary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_SportDailySummary_Statics::ClassParams = {
		&UPico_SportDailySummary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_SportDailySummary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_SportDailySummary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_SportDailySummary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_SportDailySummary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_SportDailySummary, 1483934100);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_SportDailySummary>()
	{
		return UPico_SportDailySummary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_SportDailySummary(Z_Construct_UClass_UPico_SportDailySummary, &UPico_SportDailySummary::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_SportDailySummary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_SportDailySummary);
	DEFINE_FUNCTION(UPico_SportDailySummaryArray::execGetElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_SportDailySummary**)Z_Param__Result=P_THIS->GetElement(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SportDailySummaryArray::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	void UPico_SportDailySummaryArray::StaticRegisterNativesUPico_SportDailySummaryArray()
	{
		UClass* Class = UPico_SportDailySummaryArray::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetElement", &UPico_SportDailySummaryArray::execGetElement },
			{ "GetSize", &UPico_SportDailySummaryArray::execGetSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_SportDailySummaryArray_GetElement_Statics
	{
		struct Pico_SportDailySummaryArray_eventGetElement_Parms
		{
			int32 Index;
			UPico_SportDailySummary* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_SportDailySummaryArray_GetElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportDailySummaryArray_eventGetElement_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_SportDailySummaryArray_GetElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportDailySummaryArray_eventGetElement_Parms, ReturnValue), Z_Construct_UClass_UPico_SportDailySummary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportDailySummaryArray_GetElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportDailySummaryArray_GetElement_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportDailySummaryArray_GetElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportDailySummaryArray_GetElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|Sport Daily Summary Array" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportDailySummaryArray_GetElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportDailySummaryArray, nullptr, "GetElement", nullptr, nullptr, sizeof(Pico_SportDailySummaryArray_eventGetElement_Parms), Z_Construct_UFunction_UPico_SportDailySummaryArray_GetElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportDailySummaryArray_GetElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportDailySummaryArray_GetElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportDailySummaryArray_GetElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportDailySummaryArray_GetElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportDailySummaryArray_GetElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SportDailySummaryArray_GetSize_Statics
	{
		struct Pico_SportDailySummaryArray_eventGetSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_SportDailySummaryArray_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportDailySummaryArray_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportDailySummaryArray_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportDailySummaryArray_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportDailySummaryArray_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|Sport Daily Summary Array" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportDailySummaryArray_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportDailySummaryArray, nullptr, "GetSize", nullptr, nullptr, sizeof(Pico_SportDailySummaryArray_eventGetSize_Parms), Z_Construct_UFunction_UPico_SportDailySummaryArray_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportDailySummaryArray_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportDailySummaryArray_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportDailySummaryArray_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportDailySummaryArray_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportDailySummaryArray_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_SportDailySummaryArray_NoRegister()
	{
		return UPico_SportDailySummaryArray::StaticClass();
	}
	struct Z_Construct_UClass_UPico_SportDailySummaryArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SportDailySummaryArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SportDailySummaryArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SportDailySummaryArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_SportDailySummaryArray_GetElement, "GetElement" }, // 2612554328
		{ &Z_Construct_UFunction_UPico_SportDailySummaryArray_GetSize, "GetSize" }, // 1143062001
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_Sport.h" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::NewProp_SportDailySummaryArray_Inner = { "SportDailySummaryArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPico_SportDailySummary_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::NewProp_SportDailySummaryArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::NewProp_SportDailySummaryArray = { "SportDailySummaryArray", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_SportDailySummaryArray, SportDailySummaryArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::NewProp_SportDailySummaryArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::NewProp_SportDailySummaryArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::NewProp_SportDailySummaryArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::NewProp_SportDailySummaryArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_SportDailySummaryArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::ClassParams = {
		&UPico_SportDailySummaryArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_SportDailySummaryArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_SportDailySummaryArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_SportDailySummaryArray, 137371888);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_SportDailySummaryArray>()
	{
		return UPico_SportDailySummaryArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_SportDailySummaryArray(Z_Construct_UClass_UPico_SportDailySummaryArray, &UPico_SportDailySummaryArray::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_SportDailySummaryArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_SportDailySummaryArray);
	DEFINE_FUNCTION(UPico_SportSummary::execGetEndTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetEndTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SportSummary::execGetStartTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetStartTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SportSummary::execGetCalorie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCalorie();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SportSummary::execGetDurationInSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetDurationInSeconds();
		P_NATIVE_END;
	}
	void UPico_SportSummary::StaticRegisterNativesUPico_SportSummary()
	{
		UClass* Class = UPico_SportSummary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCalorie", &UPico_SportSummary::execGetCalorie },
			{ "GetDurationInSeconds", &UPico_SportSummary::execGetDurationInSeconds },
			{ "GetEndTime", &UPico_SportSummary::execGetEndTime },
			{ "GetStartTime", &UPico_SportSummary::execGetStartTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_SportSummary_GetCalorie_Statics
	{
		struct Pico_SportSummary_eventGetCalorie_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPico_SportSummary_GetCalorie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportSummary_eventGetCalorie_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportSummary_GetCalorie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportSummary_GetCalorie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportSummary_GetCalorie_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|Sport Summary" },
		{ "Comment", "// Calorie\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "Calorie" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportSummary_GetCalorie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportSummary, nullptr, "GetCalorie", nullptr, nullptr, sizeof(Pico_SportSummary_eventGetCalorie_Parms), Z_Construct_UFunction_UPico_SportSummary_GetCalorie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportSummary_GetCalorie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportSummary_GetCalorie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportSummary_GetCalorie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportSummary_GetCalorie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportSummary_GetCalorie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SportSummary_GetDurationInSeconds_Statics
	{
		struct Pico_SportSummary_eventGetDurationInSeconds_Parms
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPico_SportSummary_GetDurationInSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportSummary_eventGetDurationInSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportSummary_GetDurationInSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportSummary_GetDurationInSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportSummary_GetDurationInSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|Sport Summary" },
		{ "Comment", "// Daily exercise duration (in seconds)\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "Daily exercise duration (in seconds)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportSummary_GetDurationInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportSummary, nullptr, "GetDurationInSeconds", nullptr, nullptr, sizeof(Pico_SportSummary_eventGetDurationInSeconds_Parms), Z_Construct_UFunction_UPico_SportSummary_GetDurationInSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportSummary_GetDurationInSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportSummary_GetDurationInSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportSummary_GetDurationInSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportSummary_GetDurationInSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportSummary_GetDurationInSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SportSummary_GetEndTime_Statics
	{
		struct Pico_SportSummary_eventGetEndTime_Parms
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPico_SportSummary_GetEndTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportSummary_eventGetEndTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportSummary_GetEndTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportSummary_GetEndTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportSummary_GetEndTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|Sport Summary" },
		{ "Comment", "// End time\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "End time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportSummary_GetEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportSummary, nullptr, "GetEndTime", nullptr, nullptr, sizeof(Pico_SportSummary_eventGetEndTime_Parms), Z_Construct_UFunction_UPico_SportSummary_GetEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportSummary_GetEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportSummary_GetEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportSummary_GetEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportSummary_GetEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportSummary_GetEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SportSummary_GetStartTime_Statics
	{
		struct Pico_SportSummary_eventGetStartTime_Parms
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPico_SportSummary_GetStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportSummary_eventGetStartTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportSummary_GetStartTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportSummary_GetStartTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportSummary_GetStartTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|Sport Summary" },
		{ "Comment", "// Start time\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "Start time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportSummary_GetStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportSummary, nullptr, "GetStartTime", nullptr, nullptr, sizeof(Pico_SportSummary_eventGetStartTime_Parms), Z_Construct_UFunction_UPico_SportSummary_GetStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportSummary_GetStartTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportSummary_GetStartTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportSummary_GetStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportSummary_GetStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportSummary_GetStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_SportSummary_NoRegister()
	{
		return UPico_SportSummary::StaticClass();
	}
	struct Z_Construct_UClass_UPico_SportSummary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_SportSummary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_SportSummary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_SportSummary_GetCalorie, "GetCalorie" }, // 1036234233
		{ &Z_Construct_UFunction_UPico_SportSummary_GetDurationInSeconds, "GetDurationInSeconds" }, // 2425860138
		{ &Z_Construct_UFunction_UPico_SportSummary_GetEndTime, "GetEndTime" }, // 820152570
		{ &Z_Construct_UFunction_UPico_SportSummary_GetStartTime, "GetStartTime" }, // 3987101763
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_SportSummary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_Sport.h" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_SportSummary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_SportSummary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_SportSummary_Statics::ClassParams = {
		&UPico_SportSummary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_SportSummary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_SportSummary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_SportSummary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_SportSummary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_SportSummary, 1320900510);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_SportSummary>()
	{
		return UPico_SportSummary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_SportSummary(Z_Construct_UClass_UPico_SportSummary, &UPico_SportSummary::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_SportSummary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_SportSummary);
	DEFINE_FUNCTION(UPico_SportUserInfo::execGetSportTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESportTarget*)Z_Param__Result=P_THIS->GetSportTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SportUserInfo::execGetDaysPerWeek)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDaysPerWeek();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SportUserInfo::execGetDailyDurationInMinutes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDailyDurationInMinutes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SportUserInfo::execGetSportLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSportLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SportUserInfo::execGetWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SportUserInfo::execGetStature)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStature();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SportUserInfo::execGetBirthday)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetBirthday();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_SportUserInfo::execGetGender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUserGender*)Z_Param__Result=P_THIS->GetGender();
		P_NATIVE_END;
	}
	void UPico_SportUserInfo::StaticRegisterNativesUPico_SportUserInfo()
	{
		UClass* Class = UPico_SportUserInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBirthday", &UPico_SportUserInfo::execGetBirthday },
			{ "GetDailyDurationInMinutes", &UPico_SportUserInfo::execGetDailyDurationInMinutes },
			{ "GetDaysPerWeek", &UPico_SportUserInfo::execGetDaysPerWeek },
			{ "GetGender", &UPico_SportUserInfo::execGetGender },
			{ "GetSportLevel", &UPico_SportUserInfo::execGetSportLevel },
			{ "GetSportTarget", &UPico_SportUserInfo::execGetSportTarget },
			{ "GetStature", &UPico_SportUserInfo::execGetStature },
			{ "GetWeight", &UPico_SportUserInfo::execGetWeight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_SportUserInfo_GetBirthday_Statics
	{
		struct Pico_SportUserInfo_eventGetBirthday_Parms
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPico_SportUserInfo_GetBirthday_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportUserInfo_eventGetBirthday_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportUserInfo_GetBirthday_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportUserInfo_GetBirthday_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportUserInfo_GetBirthday_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|User Info" },
		{ "Comment", "// Birthday\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "Birthday" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportUserInfo_GetBirthday_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportUserInfo, nullptr, "GetBirthday", nullptr, nullptr, sizeof(Pico_SportUserInfo_eventGetBirthday_Parms), Z_Construct_UFunction_UPico_SportUserInfo_GetBirthday_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportUserInfo_GetBirthday_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportUserInfo_GetBirthday_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportUserInfo_GetBirthday_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportUserInfo_GetBirthday()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportUserInfo_GetBirthday_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SportUserInfo_GetDailyDurationInMinutes_Statics
	{
		struct Pico_SportUserInfo_eventGetDailyDurationInMinutes_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_SportUserInfo_GetDailyDurationInMinutes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportUserInfo_eventGetDailyDurationInMinutes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportUserInfo_GetDailyDurationInMinutes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportUserInfo_GetDailyDurationInMinutes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportUserInfo_GetDailyDurationInMinutes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|User Info" },
		{ "Comment", "// Planned daily exercise duration (in minutes)\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "Planned daily exercise duration (in minutes)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportUserInfo_GetDailyDurationInMinutes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportUserInfo, nullptr, "GetDailyDurationInMinutes", nullptr, nullptr, sizeof(Pico_SportUserInfo_eventGetDailyDurationInMinutes_Parms), Z_Construct_UFunction_UPico_SportUserInfo_GetDailyDurationInMinutes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportUserInfo_GetDailyDurationInMinutes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportUserInfo_GetDailyDurationInMinutes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportUserInfo_GetDailyDurationInMinutes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportUserInfo_GetDailyDurationInMinutes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportUserInfo_GetDailyDurationInMinutes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SportUserInfo_GetDaysPerWeek_Statics
	{
		struct Pico_SportUserInfo_eventGetDaysPerWeek_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_SportUserInfo_GetDaysPerWeek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportUserInfo_eventGetDaysPerWeek_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportUserInfo_GetDaysPerWeek_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportUserInfo_GetDaysPerWeek_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportUserInfo_GetDaysPerWeek_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|User Info" },
		{ "Comment", "// Planned days for exercise per week\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "Planned days for exercise per week" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportUserInfo_GetDaysPerWeek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportUserInfo, nullptr, "GetDaysPerWeek", nullptr, nullptr, sizeof(Pico_SportUserInfo_eventGetDaysPerWeek_Parms), Z_Construct_UFunction_UPico_SportUserInfo_GetDaysPerWeek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportUserInfo_GetDaysPerWeek_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportUserInfo_GetDaysPerWeek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportUserInfo_GetDaysPerWeek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportUserInfo_GetDaysPerWeek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportUserInfo_GetDaysPerWeek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SportUserInfo_GetGender_Statics
	{
		struct Pico_SportUserInfo_eventGetGender_Parms
		{
			EUserGender ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPico_SportUserInfo_GetGender_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPico_SportUserInfo_GetGender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportUserInfo_eventGetGender_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemPico_EUserGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportUserInfo_GetGender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportUserInfo_GetGender_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportUserInfo_GetGender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportUserInfo_GetGender_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|User Info" },
		{ "Comment", "// Gender\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "Gender" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportUserInfo_GetGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportUserInfo, nullptr, "GetGender", nullptr, nullptr, sizeof(Pico_SportUserInfo_eventGetGender_Parms), Z_Construct_UFunction_UPico_SportUserInfo_GetGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportUserInfo_GetGender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportUserInfo_GetGender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportUserInfo_GetGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportUserInfo_GetGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportUserInfo_GetGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SportUserInfo_GetSportLevel_Statics
	{
		struct Pico_SportUserInfo_eventGetSportLevel_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_SportUserInfo_GetSportLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportUserInfo_eventGetSportLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportUserInfo_GetSportLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportUserInfo_GetSportLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportUserInfo_GetSportLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|User Info" },
		{ "Comment", "// 1-low??2-medium??3-high\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "1-low??2-medium??3-high" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportUserInfo_GetSportLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportUserInfo, nullptr, "GetSportLevel", nullptr, nullptr, sizeof(Pico_SportUserInfo_eventGetSportLevel_Parms), Z_Construct_UFunction_UPico_SportUserInfo_GetSportLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportUserInfo_GetSportLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportUserInfo_GetSportLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportUserInfo_GetSportLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportUserInfo_GetSportLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportUserInfo_GetSportLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SportUserInfo_GetSportTarget_Statics
	{
		struct Pico_SportUserInfo_eventGetSportTarget_Parms
		{
			ESportTarget ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPico_SportUserInfo_GetSportTarget_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPico_SportUserInfo_GetSportTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportUserInfo_eventGetSportTarget_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemPico_ESportTarget, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportUserInfo_GetSportTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportUserInfo_GetSportTarget_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportUserInfo_GetSportTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportUserInfo_GetSportTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|User Info" },
		{ "Comment", "// Exercise target: \"lose weight\" or \"stay healthy\"\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "Exercise target: \"lose weight\" or \"stay healthy\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportUserInfo_GetSportTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportUserInfo, nullptr, "GetSportTarget", nullptr, nullptr, sizeof(Pico_SportUserInfo_eventGetSportTarget_Parms), Z_Construct_UFunction_UPico_SportUserInfo_GetSportTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportUserInfo_GetSportTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportUserInfo_GetSportTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportUserInfo_GetSportTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportUserInfo_GetSportTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportUserInfo_GetSportTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SportUserInfo_GetStature_Statics
	{
		struct Pico_SportUserInfo_eventGetStature_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_SportUserInfo_GetStature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportUserInfo_eventGetStature_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportUserInfo_GetStature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportUserInfo_GetStature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportUserInfo_GetStature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|User Info" },
		{ "Comment", "// Stature(cm)\n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "Stature(cm)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportUserInfo_GetStature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportUserInfo, nullptr, "GetStature", nullptr, nullptr, sizeof(Pico_SportUserInfo_eventGetStature_Parms), Z_Construct_UFunction_UPico_SportUserInfo_GetStature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportUserInfo_GetStature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportUserInfo_GetStature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportUserInfo_GetStature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportUserInfo_GetStature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportUserInfo_GetStature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_SportUserInfo_GetWeight_Statics
	{
		struct Pico_SportUserInfo_eventGetWeight_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_SportUserInfo_GetWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_SportUserInfo_eventGetWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_SportUserInfo_GetWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_SportUserInfo_GetWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_SportUserInfo_GetWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Sport|User Info" },
		{ "Comment", "// Weight(kg) \n" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
		{ "ToolTip", "Weight(kg)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_SportUserInfo_GetWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_SportUserInfo, nullptr, "GetWeight", nullptr, nullptr, sizeof(Pico_SportUserInfo_eventGetWeight_Parms), Z_Construct_UFunction_UPico_SportUserInfo_GetWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportUserInfo_GetWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_SportUserInfo_GetWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_SportUserInfo_GetWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_SportUserInfo_GetWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_SportUserInfo_GetWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_SportUserInfo_NoRegister()
	{
		return UPico_SportUserInfo::StaticClass();
	}
	struct Z_Construct_UClass_UPico_SportUserInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_SportUserInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_SportUserInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_SportUserInfo_GetBirthday, "GetBirthday" }, // 3153806969
		{ &Z_Construct_UFunction_UPico_SportUserInfo_GetDailyDurationInMinutes, "GetDailyDurationInMinutes" }, // 1471369364
		{ &Z_Construct_UFunction_UPico_SportUserInfo_GetDaysPerWeek, "GetDaysPerWeek" }, // 492497059
		{ &Z_Construct_UFunction_UPico_SportUserInfo_GetGender, "GetGender" }, // 3603441930
		{ &Z_Construct_UFunction_UPico_SportUserInfo_GetSportLevel, "GetSportLevel" }, // 945027337
		{ &Z_Construct_UFunction_UPico_SportUserInfo_GetSportTarget, "GetSportTarget" }, // 2132250166
		{ &Z_Construct_UFunction_UPico_SportUserInfo_GetStature, "GetStature" }, // 158127048
		{ &Z_Construct_UFunction_UPico_SportUserInfo_GetWeight, "GetWeight" }, // 3219715572
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_SportUserInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_Sport.h" },
		{ "ModuleRelativePath", "Public/Pico_Sport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_SportUserInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_SportUserInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_SportUserInfo_Statics::ClassParams = {
		&UPico_SportUserInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_SportUserInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_SportUserInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_SportUserInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_SportUserInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_SportUserInfo, 2740721064);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_SportUserInfo>()
	{
		return UPico_SportUserInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_SportUserInfo(Z_Construct_UClass_UPico_SportUserInfo, &UPico_SportUserInfo::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_SportUserInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_SportUserInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
