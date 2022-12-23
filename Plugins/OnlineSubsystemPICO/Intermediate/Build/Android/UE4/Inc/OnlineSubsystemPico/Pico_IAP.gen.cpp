// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Public/Pico_IAP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePico_IAP() {}
// Cross Module References
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_Purchase_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_PurchaseArray_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_ProductArray_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoIAPFunction_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoIAPFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_Product_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_Product();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_ProductArray();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_Purchase();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_PurchaseArray();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventLaunchCheckoutFlowDelegate_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_Purchase* Purchase;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Purchase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventLaunchCheckoutFlowDelegate_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventLaunchCheckoutFlowDelegate_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventLaunchCheckoutFlowDelegate_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::NewProp_Purchase = { "Purchase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventLaunchCheckoutFlowDelegate_Parms, Purchase), Z_Construct_UClass_UPico_Purchase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::NewProp_Purchase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "LaunchCheckoutFlowDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventLaunchCheckoutFlowDelegate_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetNextPurchaseArrayPageDelegate_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_PurchaseArray* PurchaseArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PurchaseArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetNextPurchaseArrayPageDelegate_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetNextPurchaseArrayPageDelegate_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetNextPurchaseArrayPageDelegate_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::NewProp_PurchaseArray = { "PurchaseArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetNextPurchaseArrayPageDelegate_Parms, PurchaseArray), Z_Construct_UClass_UPico_PurchaseArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::NewProp_PurchaseArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetNextPurchaseArrayPageDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetNextPurchaseArrayPageDelegate_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventConsumePurchaseDelegate_Parms
		{
			bool bIsError;
			FString ErrorMessage;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventConsumePurchaseDelegate_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventConsumePurchaseDelegate_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventConsumePurchaseDelegate_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "ConsumePurchaseDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventConsumePurchaseDelegate_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetNextProductArrayPageDelegate_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_ProductArray* ProductArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProductArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetNextProductArrayPageDelegate_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetNextProductArrayPageDelegate_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetNextProductArrayPageDelegate_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::NewProp_ProductArray = { "ProductArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetNextProductArrayPageDelegate_Parms, ProductArray), Z_Construct_UClass_UPico_ProductArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::NewProp_ProductArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetNextProductArrayPageDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetNextProductArrayPageDelegate_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetViewerPurchasesDelegate_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_PurchaseArray* PurchaseArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PurchaseArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetViewerPurchasesDelegate_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetViewerPurchasesDelegate_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetViewerPurchasesDelegate_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::NewProp_PurchaseArray = { "PurchaseArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetViewerPurchasesDelegate_Parms, PurchaseArray), Z_Construct_UClass_UPico_PurchaseArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::NewProp_PurchaseArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetViewerPurchasesDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetViewerPurchasesDelegate_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetProductsBySKUDelegate_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_ProductArray* ProductArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProductArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetProductsBySKUDelegate_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetProductsBySKUDelegate_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetProductsBySKUDelegate_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::NewProp_ProductArray = { "ProductArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetProductsBySKUDelegate_Parms, ProductArray), Z_Construct_UClass_UPico_ProductArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::NewProp_ProductArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetProductsBySKUDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetProductsBySKUDelegate_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePicoIAPFunction::execLaunchCheckoutFlow)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SKU);
		P_GET_PROPERTY(FStrProperty,Z_Param_Price);
		P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InLaunchCheckoutFlowDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoIAPFunction::LaunchCheckoutFlow(Z_Param_WorldContextObject,Z_Param_SKU,Z_Param_Price,Z_Param_Currency,FLaunchCheckoutFlowDelegate(Z_Param_InLaunchCheckoutFlowDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoIAPFunction::execGetNextPurchaseArrayPage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UPico_PurchaseArray,Z_Param_InPurchaseArray);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetNextPurchaseArrayPageDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoIAPFunction::GetNextPurchaseArrayPage(Z_Param_WorldContextObject,Z_Param_InPurchaseArray,FGetNextPurchaseArrayPageDelegate(Z_Param_InGetNextPurchaseArrayPageDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoIAPFunction::execGetViewerPurchases)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetViewerPurchasesDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoIAPFunction::GetViewerPurchases(Z_Param_WorldContextObject,FGetViewerPurchasesDelegate(Z_Param_InGetViewerPurchasesDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoIAPFunction::execGetNextProductsArrayPage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UPico_ProductArray,Z_Param_InProductArray);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetNextProductArrayPageDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoIAPFunction::GetNextProductsArrayPage(Z_Param_WorldContextObject,Z_Param_InProductArray,FGetNextProductArrayPageDelegate(Z_Param_InGetNextProductArrayPageDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoIAPFunction::execGetProductsBySKU)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY(FString,Z_Param_ProductSKUs);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetProductsBySKUDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoIAPFunction::GetProductsBySKU(Z_Param_WorldContextObject,Z_Param_ProductSKUs,Z_Param_Count,FGetProductsBySKUDelegate(Z_Param_InGetProductsBySKUDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoIAPFunction::execConsumePurchase)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SKU);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InConsumePurchaseDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoIAPFunction::ConsumePurchase(Z_Param_WorldContextObject,Z_Param_SKU,FConsumePurchaseDelegate(Z_Param_InConsumePurchaseDelegate));
		P_NATIVE_END;
	}
	void UOnlinePicoIAPFunction::StaticRegisterNativesUOnlinePicoIAPFunction()
	{
		UClass* Class = UOnlinePicoIAPFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConsumePurchase", &UOnlinePicoIAPFunction::execConsumePurchase },
			{ "GetNextProductsArrayPage", &UOnlinePicoIAPFunction::execGetNextProductsArrayPage },
			{ "GetNextPurchaseArrayPage", &UOnlinePicoIAPFunction::execGetNextPurchaseArrayPage },
			{ "GetProductsBySKU", &UOnlinePicoIAPFunction::execGetProductsBySKU },
			{ "GetViewerPurchases", &UOnlinePicoIAPFunction::execGetViewerPurchases },
			{ "LaunchCheckoutFlow", &UOnlinePicoIAPFunction::execLaunchCheckoutFlow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics
	{
		struct OnlinePicoIAPFunction_eventConsumePurchase_Parms
		{
			UObject* WorldContextObject;
			FString SKU;
			FScriptDelegate InConsumePurchaseDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SKU_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SKU;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InConsumePurchaseDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventConsumePurchase_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::NewProp_SKU_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::NewProp_SKU = { "SKU", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventConsumePurchase_Parms, SKU), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::NewProp_SKU_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::NewProp_SKU_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::NewProp_InConsumePurchaseDelegate = { "InConsumePurchaseDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventConsumePurchase_Parms, InConsumePurchaseDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_ConsumePurchaseDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoIAPFunction_eventConsumePurchase_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoIAPFunction_eventConsumePurchase_Parms), &Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::NewProp_SKU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::NewProp_InConsumePurchaseDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|IAP" },
		{ "Comment", "/// <summary>Records the order fulfillment result for a consumable.\n/// @note Users are unable to repurchase the same consumable until the previous order is fulfilled.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param> \n/// <param name =\"SKU\">The SKU of the product.</param> \n/// <param name =\"InConsumePurchaseDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param> \n/// <returns>Bool: \n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
		{ "ToolTip", "<summary>Records the order fulfillment result for a consumable.\n@note Users are unable to repurchase the same consumable until the previous order is fulfilled.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name =\"SKU\">The SKU of the product.</param>\n<param name =\"InConsumePurchaseDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoIAPFunction, nullptr, "ConsumePurchase", nullptr, nullptr, sizeof(OnlinePicoIAPFunction_eventConsumePurchase_Parms), Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics
	{
		struct OnlinePicoIAPFunction_eventGetNextProductsArrayPage_Parms
		{
			UObject* WorldContextObject;
			UPico_ProductArray* InProductArray;
			FScriptDelegate InGetNextProductArrayPageDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InProductArray;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetNextProductArrayPageDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventGetNextProductsArrayPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::NewProp_InProductArray = { "InProductArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventGetNextProductsArrayPage_Parms, InProductArray), Z_Construct_UClass_UPico_ProductArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::NewProp_InGetNextProductArrayPageDelegate = { "InGetNextProductArrayPageDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventGetNextProductsArrayPage_Parms, InGetNextProductArrayPageDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextProductArrayPageDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoIAPFunction_eventGetNextProductsArrayPage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoIAPFunction_eventGetNextProductsArrayPage_Parms), &Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::NewProp_InProductArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::NewProp_InGetNextProductArrayPageDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|IAP" },
		{ "Comment", "/// <summary>Gets the next page of purchasable products.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param> \n/// <param name =\"InProductArray\">The current object of product array.</param> \n/// <param name =\"InGetNextProductArrayPageDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param> \n/// <returns>Bool: \n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
		{ "ToolTip", "<summary>Gets the next page of purchasable products.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name =\"InProductArray\">The current object of product array.</param>\n<param name =\"InGetNextProductArrayPageDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoIAPFunction, nullptr, "GetNextProductsArrayPage", nullptr, nullptr, sizeof(OnlinePicoIAPFunction_eventGetNextProductsArrayPage_Parms), Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics
	{
		struct OnlinePicoIAPFunction_eventGetNextPurchaseArrayPage_Parms
		{
			UObject* WorldContextObject;
			UPico_PurchaseArray* InPurchaseArray;
			FScriptDelegate InGetNextPurchaseArrayPageDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPurchaseArray;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetNextPurchaseArrayPageDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventGetNextPurchaseArrayPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::NewProp_InPurchaseArray = { "InPurchaseArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventGetNextPurchaseArrayPage_Parms, InPurchaseArray), Z_Construct_UClass_UPico_PurchaseArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::NewProp_InGetNextPurchaseArrayPageDelegate = { "InGetNextPurchaseArrayPageDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventGetNextPurchaseArrayPage_Parms, InGetNextPurchaseArrayPageDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextPurchaseArrayPageDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoIAPFunction_eventGetNextPurchaseArrayPage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoIAPFunction_eventGetNextPurchaseArrayPage_Parms), &Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::NewProp_InPurchaseArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::NewProp_InGetNextPurchaseArrayPageDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|IAP" },
		{ "Comment", "/// <summary>Gets the next page of purchased products.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param> \n/// <param name =\"InPurchaseArray\">The current object of purchase array.</param> \n/// <param name =\"InGetNextPurchaseArrayPageDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param> \n/// <returns>Bool: \n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
		{ "ToolTip", "<summary>Gets the next page of purchased products.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name =\"InPurchaseArray\">The current object of purchase array.</param>\n<param name =\"InGetNextPurchaseArrayPageDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoIAPFunction, nullptr, "GetNextPurchaseArrayPage", nullptr, nullptr, sizeof(OnlinePicoIAPFunction_eventGetNextPurchaseArrayPage_Parms), Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics
	{
		struct OnlinePicoIAPFunction_eventGetProductsBySKU_Parms
		{
			UObject* WorldContextObject;
			TArray<FString> ProductSKUs;
			int32 Count;
			FScriptDelegate InGetProductsBySKUDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductSKUs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProductSKUs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetProductsBySKUDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventGetProductsBySKU_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::NewProp_ProductSKUs_Inner = { "ProductSKUs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::NewProp_ProductSKUs = { "ProductSKUs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventGetProductsBySKU_Parms, ProductSKUs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventGetProductsBySKU_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::NewProp_InGetProductsBySKUDelegate = { "InGetProductsBySKUDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventGetProductsBySKU_Parms, InGetProductsBySKUDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetProductsBySKUDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoIAPFunction_eventGetProductsBySKU_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoIAPFunction_eventGetProductsBySKU_Parms), &Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::NewProp_ProductSKUs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::NewProp_ProductSKUs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::NewProp_InGetProductsBySKUDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|IAP" },
		{ "Comment", "/// <summary>Gets a list of purchasable products in the current app.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param> \n/// <param name =\"ProductSKUs\">The SKUs of products.</param> \n/// <param name =\"Count\">The number of ProductSKUs arrays to return.</param> \n/// <param name =\"InGetProductsBySKUDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param> \n/// <returns>Bool: \n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
		{ "ToolTip", "<summary>Gets a list of purchasable products in the current app.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name =\"ProductSKUs\">The SKUs of products.</param>\n<param name =\"Count\">The number of ProductSKUs arrays to return.</param>\n<param name =\"InGetProductsBySKUDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoIAPFunction, nullptr, "GetProductsBySKU", nullptr, nullptr, sizeof(OnlinePicoIAPFunction_eventGetProductsBySKU_Parms), Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics
	{
		struct OnlinePicoIAPFunction_eventGetViewerPurchases_Parms
		{
			UObject* WorldContextObject;
			FScriptDelegate InGetViewerPurchasesDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetViewerPurchasesDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventGetViewerPurchases_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics::NewProp_InGetViewerPurchasesDelegate = { "InGetViewerPurchasesDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventGetViewerPurchases_Parms, InGetViewerPurchasesDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetViewerPurchasesDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoIAPFunction_eventGetViewerPurchases_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoIAPFunction_eventGetViewerPurchases_Parms), &Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics::NewProp_InGetViewerPurchasesDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|IAP" },
		{ "Comment", "/// <summary>Gets a list of purchased products for a user in the current app.\n/// @note This list includes consumables that have not been fulfilled and products that are permanently available after one purchase.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param> \n/// <param name =\"InGetViewerPurchasesDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param> \n/// <returns>Bool: \n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
		{ "ToolTip", "<summary>Gets a list of purchased products for a user in the current app.\n@note This list includes consumables that have not been fulfilled and products that are permanently available after one purchase.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name =\"InGetViewerPurchasesDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoIAPFunction, nullptr, "GetViewerPurchases", nullptr, nullptr, sizeof(OnlinePicoIAPFunction_eventGetViewerPurchases_Parms), Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics
	{
		struct OnlinePicoIAPFunction_eventLaunchCheckoutFlow_Parms
		{
			UObject* WorldContextObject;
			FString SKU;
			FString Price;
			FString Currency;
			FScriptDelegate InLaunchCheckoutFlowDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SKU_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SKU;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Price;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InLaunchCheckoutFlowDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventLaunchCheckoutFlow_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_SKU_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_SKU = { "SKU", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventLaunchCheckoutFlow_Parms, SKU), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_SKU_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_SKU_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_Price_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventLaunchCheckoutFlow_Parms, Price), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_Price_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventLaunchCheckoutFlow_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_Currency_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_InLaunchCheckoutFlowDelegate = { "InLaunchCheckoutFlowDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoIAPFunction_eventLaunchCheckoutFlow_Parms, InLaunchCheckoutFlowDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchCheckoutFlowDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoIAPFunction_eventLaunchCheckoutFlow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoIAPFunction_eventLaunchCheckoutFlow_Parms), &Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_SKU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_Currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_InLaunchCheckoutFlowDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|IAP" },
		{ "Comment", "/// <summary>\n/// Launches the checkout flow to purchase a product.\n/// @note PICO tries to handle and fix as many errors as possible. Home returns the\n/// appropriate error message and how to resolve it if possible. Returns a\n/// purchase on success, empty purchase on cancel, and an error on error.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param> \n/// <param name =\"SKU\">The SKU of the product to purchase.</param> \n/// <param name =\"Price\">The price for the product.</param> \n/// <param name =\"Currency\">The currency of the payment.</param> \n/// <param name =\"InLaunchCheckoutFlowDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param> \n/// <returns>Bool: \n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
		{ "ToolTip", "<summary>\nLaunches the checkout flow to purchase a product.\n@note PICO tries to handle and fix as many errors as possible. Home returns the\nappropriate error message and how to resolve it if possible. Returns a\npurchase on success, empty purchase on cancel, and an error on error.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name =\"SKU\">The SKU of the product to purchase.</param>\n<param name =\"Price\">The price for the product.</param>\n<param name =\"Currency\">The currency of the payment.</param>\n<param name =\"InLaunchCheckoutFlowDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoIAPFunction, nullptr, "LaunchCheckoutFlow", nullptr, nullptr, sizeof(OnlinePicoIAPFunction_eventLaunchCheckoutFlow_Parms), Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlinePicoIAPFunction_NoRegister()
	{
		return UOnlinePicoIAPFunction::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePicoIAPFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePicoIAPFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePicoIAPFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePicoIAPFunction_ConsumePurchase, "ConsumePurchase" }, // 1661458504
		{ &Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextProductsArrayPage, "GetNextProductsArrayPage" }, // 1225769640
		{ &Z_Construct_UFunction_UOnlinePicoIAPFunction_GetNextPurchaseArrayPage, "GetNextPurchaseArrayPage" }, // 3737663032
		{ &Z_Construct_UFunction_UOnlinePicoIAPFunction_GetProductsBySKU, "GetProductsBySKU" }, // 3571905380
		{ &Z_Construct_UFunction_UOnlinePicoIAPFunction_GetViewerPurchases, "GetViewerPurchases" }, // 1703066629
		{ &Z_Construct_UFunction_UOnlinePicoIAPFunction_LaunchCheckoutFlow, "LaunchCheckoutFlow" }, // 2066450642
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoIAPFunction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** @defgroup BP_IAP BP_IAP\n *  This is the BP_IAP group\n *  @{\n *//// @brief OnlinePicoIAP Blueprint Function class.\n" },
		{ "IncludePath", "Pico_IAP.h" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
		{ "ToolTip", "@defgroup BP_IAP BP_IAP\nThis is the BP_IAP group\n@{\n/// @brief OnlinePicoIAP Blueprint Function class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePicoIAPFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePicoIAPFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePicoIAPFunction_Statics::ClassParams = {
		&UOnlinePicoIAPFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoIAPFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoIAPFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePicoIAPFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlinePicoIAPFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlinePicoIAPFunction, 4101056179);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UOnlinePicoIAPFunction>()
	{
		return UOnlinePicoIAPFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlinePicoIAPFunction(Z_Construct_UClass_UOnlinePicoIAPFunction, &UOnlinePicoIAPFunction::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UOnlinePicoIAPFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePicoIAPFunction);
	DEFINE_FUNCTION(UPico_Product::execGetSKU)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSKU();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Product::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Product::execGetCurrency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Product::execGetPrice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPrice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Product::execGetFormattedPrice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFormattedPrice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Product::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDescription();
		P_NATIVE_END;
	}
	void UPico_Product::StaticRegisterNativesUPico_Product()
	{
		UClass* Class = UPico_Product::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrency", &UPico_Product::execGetCurrency },
			{ "GetDescription", &UPico_Product::execGetDescription },
			{ "GetFormattedPrice", &UPico_Product::execGetFormattedPrice },
			{ "GetName", &UPico_Product::execGetName },
			{ "GetPrice", &UPico_Product::execGetPrice },
			{ "GetSKU", &UPico_Product::execGetSKU },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_Product_GetCurrency_Statics
	{
		struct Pico_Product_eventGetCurrency_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_Product_GetCurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Product_eventGetCurrency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Product_GetCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Product_GetCurrency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Product_GetCurrency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Product" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Product_GetCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Product, nullptr, "GetCurrency", nullptr, nullptr, sizeof(Pico_Product_eventGetCurrency_Parms), Z_Construct_UFunction_UPico_Product_GetCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Product_GetCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Product_GetCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Product_GetCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Product_GetCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Product_GetCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Product_GetDescription_Statics
	{
		struct Pico_Product_eventGetDescription_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_Product_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Product_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Product_GetDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Product_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Product_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Product" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Product_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Product, nullptr, "GetDescription", nullptr, nullptr, sizeof(Pico_Product_eventGetDescription_Parms), Z_Construct_UFunction_UPico_Product_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Product_GetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Product_GetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Product_GetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Product_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Product_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Product_GetFormattedPrice_Statics
	{
		struct Pico_Product_eventGetFormattedPrice_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_Product_GetFormattedPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Product_eventGetFormattedPrice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Product_GetFormattedPrice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Product_GetFormattedPrice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Product_GetFormattedPrice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Product" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Product_GetFormattedPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Product, nullptr, "GetFormattedPrice", nullptr, nullptr, sizeof(Pico_Product_eventGetFormattedPrice_Parms), Z_Construct_UFunction_UPico_Product_GetFormattedPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Product_GetFormattedPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Product_GetFormattedPrice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Product_GetFormattedPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Product_GetFormattedPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Product_GetFormattedPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Product_GetName_Statics
	{
		struct Pico_Product_eventGetName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_Product_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Product_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Product_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Product_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Product_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Product" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Product_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Product, nullptr, "GetName", nullptr, nullptr, sizeof(Pico_Product_eventGetName_Parms), Z_Construct_UFunction_UPico_Product_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Product_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Product_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Product_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Product_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Product_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Product_GetPrice_Statics
	{
		struct Pico_Product_eventGetPrice_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_Product_GetPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Product_eventGetPrice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Product_GetPrice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Product_GetPrice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Product_GetPrice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Product" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Product_GetPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Product, nullptr, "GetPrice", nullptr, nullptr, sizeof(Pico_Product_eventGetPrice_Parms), Z_Construct_UFunction_UPico_Product_GetPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Product_GetPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Product_GetPrice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Product_GetPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Product_GetPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Product_GetPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Product_GetSKU_Statics
	{
		struct Pico_Product_eventGetSKU_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_Product_GetSKU_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Product_eventGetSKU_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Product_GetSKU_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Product_GetSKU_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Product_GetSKU_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Product" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Product_GetSKU_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Product, nullptr, "GetSKU", nullptr, nullptr, sizeof(Pico_Product_eventGetSKU_Parms), Z_Construct_UFunction_UPico_Product_GetSKU_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Product_GetSKU_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Product_GetSKU_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Product_GetSKU_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Product_GetSKU()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Product_GetSKU_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_Product_NoRegister()
	{
		return UPico_Product::StaticClass();
	}
	struct Z_Construct_UClass_UPico_Product_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_Product_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_Product_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_Product_GetCurrency, "GetCurrency" }, // 2044838282
		{ &Z_Construct_UFunction_UPico_Product_GetDescription, "GetDescription" }, // 3386069569
		{ &Z_Construct_UFunction_UPico_Product_GetFormattedPrice, "GetFormattedPrice" }, // 2584319607
		{ &Z_Construct_UFunction_UPico_Product_GetName, "GetName" }, // 1130078607
		{ &Z_Construct_UFunction_UPico_Product_GetPrice, "GetPrice" }, // 1731827367
		{ &Z_Construct_UFunction_UPico_Product_GetSKU, "GetSKU" }, // 2410868750
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_Product_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * PPF_Product.h\n */" },
		{ "IncludePath", "Pico_IAP.h" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
		{ "ToolTip", "PPF_Product.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_Product_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_Product>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_Product_Statics::ClassParams = {
		&UPico_Product::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_Product_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_Product_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_Product()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_Product_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_Product, 524970553);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_Product>()
	{
		return UPico_Product::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_Product(Z_Construct_UClass_UPico_Product, &UPico_Product::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_Product"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_Product);
	DEFINE_FUNCTION(UPico_ProductArray::execHasNextPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasNextPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_ProductArray::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_ProductArray::execGetNextPageParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNextPageParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_ProductArray::execGetElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_Product**)Z_Param__Result=P_THIS->GetElement(Z_Param_Index);
		P_NATIVE_END;
	}
	void UPico_ProductArray::StaticRegisterNativesUPico_ProductArray()
	{
		UClass* Class = UPico_ProductArray::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetElement", &UPico_ProductArray::execGetElement },
			{ "GetNextPageParam", &UPico_ProductArray::execGetNextPageParam },
			{ "GetSize", &UPico_ProductArray::execGetSize },
			{ "HasNextPage", &UPico_ProductArray::execHasNextPage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_ProductArray_GetElement_Statics
	{
		struct Pico_ProductArray_eventGetElement_Parms
		{
			int32 Index;
			UPico_Product* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_ProductArray_GetElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_ProductArray_eventGetElement_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_ProductArray_GetElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_ProductArray_eventGetElement_Parms, ReturnValue), Z_Construct_UClass_UPico_Product_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_ProductArray_GetElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_ProductArray_GetElement_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_ProductArray_GetElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_ProductArray_GetElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Product Array" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_ProductArray_GetElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_ProductArray, nullptr, "GetElement", nullptr, nullptr, sizeof(Pico_ProductArray_eventGetElement_Parms), Z_Construct_UFunction_UPico_ProductArray_GetElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_ProductArray_GetElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_ProductArray_GetElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_ProductArray_GetElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_ProductArray_GetElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_ProductArray_GetElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_ProductArray_GetNextPageParam_Statics
	{
		struct Pico_ProductArray_eventGetNextPageParam_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_ProductArray_GetNextPageParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_ProductArray_eventGetNextPageParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_ProductArray_GetNextPageParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_ProductArray_GetNextPageParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_ProductArray_GetNextPageParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Product Array" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_ProductArray_GetNextPageParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_ProductArray, nullptr, "GetNextPageParam", nullptr, nullptr, sizeof(Pico_ProductArray_eventGetNextPageParam_Parms), Z_Construct_UFunction_UPico_ProductArray_GetNextPageParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_ProductArray_GetNextPageParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_ProductArray_GetNextPageParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_ProductArray_GetNextPageParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_ProductArray_GetNextPageParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_ProductArray_GetNextPageParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_ProductArray_GetSize_Statics
	{
		struct Pico_ProductArray_eventGetSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_ProductArray_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_ProductArray_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_ProductArray_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_ProductArray_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_ProductArray_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Product Array" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_ProductArray_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_ProductArray, nullptr, "GetSize", nullptr, nullptr, sizeof(Pico_ProductArray_eventGetSize_Parms), Z_Construct_UFunction_UPico_ProductArray_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_ProductArray_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_ProductArray_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_ProductArray_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_ProductArray_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_ProductArray_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_ProductArray_HasNextPage_Statics
	{
		struct Pico_ProductArray_eventHasNextPage_Parms
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
	void Z_Construct_UFunction_UPico_ProductArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_ProductArray_eventHasNextPage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_ProductArray_HasNextPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_ProductArray_eventHasNextPage_Parms), &Z_Construct_UFunction_UPico_ProductArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_ProductArray_HasNextPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_ProductArray_HasNextPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_ProductArray_HasNextPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Product Array" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_ProductArray_HasNextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_ProductArray, nullptr, "HasNextPage", nullptr, nullptr, sizeof(Pico_ProductArray_eventHasNextPage_Parms), Z_Construct_UFunction_UPico_ProductArray_HasNextPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_ProductArray_HasNextPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_ProductArray_HasNextPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_ProductArray_HasNextPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_ProductArray_HasNextPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_ProductArray_HasNextPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_ProductArray_NoRegister()
	{
		return UPico_ProductArray::StaticClass();
	}
	struct Z_Construct_UClass_UPico_ProductArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProductArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProductArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_ProductArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_ProductArray_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_ProductArray_GetElement, "GetElement" }, // 611495507
		{ &Z_Construct_UFunction_UPico_ProductArray_GetNextPageParam, "GetNextPageParam" }, // 2721956650
		{ &Z_Construct_UFunction_UPico_ProductArray_GetSize, "GetSize" }, // 1184707424
		{ &Z_Construct_UFunction_UPico_ProductArray_HasNextPage, "HasNextPage" }, // 2186859353
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_ProductArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * PPF_ProductArray.h\n */" },
		{ "IncludePath", "Pico_IAP.h" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
		{ "ToolTip", "PPF_ProductArray.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_ProductArray_Statics::NewProp_ProductArray_Inner = { "ProductArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPico_Product_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_ProductArray_Statics::NewProp_ProductArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPico_ProductArray_Statics::NewProp_ProductArray = { "ProductArray", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_ProductArray, ProductArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPico_ProductArray_Statics::NewProp_ProductArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_ProductArray_Statics::NewProp_ProductArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_ProductArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_ProductArray_Statics::NewProp_ProductArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_ProductArray_Statics::NewProp_ProductArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_ProductArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_ProductArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_ProductArray_Statics::ClassParams = {
		&UPico_ProductArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_ProductArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_ProductArray_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_ProductArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_ProductArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_ProductArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_ProductArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_ProductArray, 883373808);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_ProductArray>()
	{
		return UPico_ProductArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_ProductArray(Z_Construct_UClass_UPico_ProductArray, &UPico_ProductArray::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_ProductArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_ProductArray);
	DEFINE_FUNCTION(UPico_Purchase::execGetSKU)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSKU();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Purchase::execGetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Purchase::execGetGrantTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetGrantTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Purchase::execGetExpirationTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetExpirationTime();
		P_NATIVE_END;
	}
	void UPico_Purchase::StaticRegisterNativesUPico_Purchase()
	{
		UClass* Class = UPico_Purchase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetExpirationTime", &UPico_Purchase::execGetExpirationTime },
			{ "GetGrantTime", &UPico_Purchase::execGetGrantTime },
			{ "GetID", &UPico_Purchase::execGetID },
			{ "GetSKU", &UPico_Purchase::execGetSKU },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_Purchase_GetExpirationTime_Statics
	{
		struct Pico_Purchase_eventGetExpirationTime_Parms
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPico_Purchase_GetExpirationTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Purchase_eventGetExpirationTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Purchase_GetExpirationTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Purchase_GetExpirationTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Purchase_GetExpirationTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Purchase" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Purchase_GetExpirationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Purchase, nullptr, "GetExpirationTime", nullptr, nullptr, sizeof(Pico_Purchase_eventGetExpirationTime_Parms), Z_Construct_UFunction_UPico_Purchase_GetExpirationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Purchase_GetExpirationTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Purchase_GetExpirationTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Purchase_GetExpirationTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Purchase_GetExpirationTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Purchase_GetExpirationTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Purchase_GetGrantTime_Statics
	{
		struct Pico_Purchase_eventGetGrantTime_Parms
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
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPico_Purchase_GetGrantTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Purchase_eventGetGrantTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Purchase_GetGrantTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Purchase_GetGrantTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Purchase_GetGrantTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Purchase" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Purchase_GetGrantTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Purchase, nullptr, "GetGrantTime", nullptr, nullptr, sizeof(Pico_Purchase_eventGetGrantTime_Parms), Z_Construct_UFunction_UPico_Purchase_GetGrantTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Purchase_GetGrantTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Purchase_GetGrantTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Purchase_GetGrantTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Purchase_GetGrantTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Purchase_GetGrantTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Purchase_GetID_Statics
	{
		struct Pico_Purchase_eventGetID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_Purchase_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Purchase_eventGetID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Purchase_GetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Purchase_GetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Purchase_GetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Purchase" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Purchase_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Purchase, nullptr, "GetID", nullptr, nullptr, sizeof(Pico_Purchase_eventGetID_Parms), Z_Construct_UFunction_UPico_Purchase_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Purchase_GetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Purchase_GetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Purchase_GetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Purchase_GetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Purchase_GetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Purchase_GetSKU_Statics
	{
		struct Pico_Purchase_eventGetSKU_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_Purchase_GetSKU_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Purchase_eventGetSKU_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Purchase_GetSKU_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Purchase_GetSKU_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Purchase_GetSKU_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Purchase" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Purchase_GetSKU_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Purchase, nullptr, "GetSKU", nullptr, nullptr, sizeof(Pico_Purchase_eventGetSKU_Parms), Z_Construct_UFunction_UPico_Purchase_GetSKU_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Purchase_GetSKU_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Purchase_GetSKU_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Purchase_GetSKU_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Purchase_GetSKU()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Purchase_GetSKU_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_Purchase_NoRegister()
	{
		return UPico_Purchase::StaticClass();
	}
	struct Z_Construct_UClass_UPico_Purchase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_Purchase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_Purchase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_Purchase_GetExpirationTime, "GetExpirationTime" }, // 3797597067
		{ &Z_Construct_UFunction_UPico_Purchase_GetGrantTime, "GetGrantTime" }, // 2400347116
		{ &Z_Construct_UFunction_UPico_Purchase_GetID, "GetID" }, // 1107848607
		{ &Z_Construct_UFunction_UPico_Purchase_GetSKU, "GetSKU" }, // 4159061990
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_Purchase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * PPF_Purchase.h\n */" },
		{ "IncludePath", "Pico_IAP.h" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
		{ "ToolTip", "PPF_Purchase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_Purchase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_Purchase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_Purchase_Statics::ClassParams = {
		&UPico_Purchase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_Purchase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_Purchase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_Purchase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_Purchase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_Purchase, 2212524432);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_Purchase>()
	{
		return UPico_Purchase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_Purchase(Z_Construct_UClass_UPico_Purchase, &UPico_Purchase::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_Purchase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_Purchase);
	DEFINE_FUNCTION(UPico_PurchaseArray::execHasNextPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasNextPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_PurchaseArray::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_PurchaseArray::execGetNextPageParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNextPageParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_PurchaseArray::execGetElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_Purchase**)Z_Param__Result=P_THIS->GetElement(Z_Param_Index);
		P_NATIVE_END;
	}
	void UPico_PurchaseArray::StaticRegisterNativesUPico_PurchaseArray()
	{
		UClass* Class = UPico_PurchaseArray::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetElement", &UPico_PurchaseArray::execGetElement },
			{ "GetNextPageParam", &UPico_PurchaseArray::execGetNextPageParam },
			{ "GetSize", &UPico_PurchaseArray::execGetSize },
			{ "HasNextPage", &UPico_PurchaseArray::execHasNextPage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_PurchaseArray_GetElement_Statics
	{
		struct Pico_PurchaseArray_eventGetElement_Parms
		{
			int32 Index;
			UPico_Purchase* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_PurchaseArray_GetElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_PurchaseArray_eventGetElement_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_PurchaseArray_GetElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_PurchaseArray_eventGetElement_Parms, ReturnValue), Z_Construct_UClass_UPico_Purchase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_PurchaseArray_GetElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_PurchaseArray_GetElement_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_PurchaseArray_GetElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_PurchaseArray_GetElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Purchase Array" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_PurchaseArray_GetElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_PurchaseArray, nullptr, "GetElement", nullptr, nullptr, sizeof(Pico_PurchaseArray_eventGetElement_Parms), Z_Construct_UFunction_UPico_PurchaseArray_GetElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_PurchaseArray_GetElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_PurchaseArray_GetElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_PurchaseArray_GetElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_PurchaseArray_GetElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_PurchaseArray_GetElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_PurchaseArray_GetNextPageParam_Statics
	{
		struct Pico_PurchaseArray_eventGetNextPageParam_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_PurchaseArray_GetNextPageParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_PurchaseArray_eventGetNextPageParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_PurchaseArray_GetNextPageParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_PurchaseArray_GetNextPageParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_PurchaseArray_GetNextPageParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Purchase Array" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_PurchaseArray_GetNextPageParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_PurchaseArray, nullptr, "GetNextPageParam", nullptr, nullptr, sizeof(Pico_PurchaseArray_eventGetNextPageParam_Parms), Z_Construct_UFunction_UPico_PurchaseArray_GetNextPageParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_PurchaseArray_GetNextPageParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_PurchaseArray_GetNextPageParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_PurchaseArray_GetNextPageParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_PurchaseArray_GetNextPageParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_PurchaseArray_GetNextPageParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_PurchaseArray_GetSize_Statics
	{
		struct Pico_PurchaseArray_eventGetSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_PurchaseArray_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_PurchaseArray_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_PurchaseArray_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_PurchaseArray_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_PurchaseArray_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Purchase Array" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_PurchaseArray_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_PurchaseArray, nullptr, "GetSize", nullptr, nullptr, sizeof(Pico_PurchaseArray_eventGetSize_Parms), Z_Construct_UFunction_UPico_PurchaseArray_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_PurchaseArray_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_PurchaseArray_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_PurchaseArray_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_PurchaseArray_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_PurchaseArray_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_PurchaseArray_HasNextPage_Statics
	{
		struct Pico_PurchaseArray_eventHasNextPage_Parms
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
	void Z_Construct_UFunction_UPico_PurchaseArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_PurchaseArray_eventHasNextPage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_PurchaseArray_HasNextPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_PurchaseArray_eventHasNextPage_Parms), &Z_Construct_UFunction_UPico_PurchaseArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_PurchaseArray_HasNextPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_PurchaseArray_HasNextPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_PurchaseArray_HasNextPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|IAP|Purchase Array" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_PurchaseArray_HasNextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_PurchaseArray, nullptr, "HasNextPage", nullptr, nullptr, sizeof(Pico_PurchaseArray_eventHasNextPage_Parms), Z_Construct_UFunction_UPico_PurchaseArray_HasNextPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_PurchaseArray_HasNextPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_PurchaseArray_HasNextPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_PurchaseArray_HasNextPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_PurchaseArray_HasNextPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_PurchaseArray_HasNextPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_PurchaseArray_NoRegister()
	{
		return UPico_PurchaseArray::StaticClass();
	}
	struct Z_Construct_UClass_UPico_PurchaseArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PurchaseArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PurchaseArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_PurchaseArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_PurchaseArray_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_PurchaseArray_GetElement, "GetElement" }, // 867598512
		{ &Z_Construct_UFunction_UPico_PurchaseArray_GetNextPageParam, "GetNextPageParam" }, // 945269589
		{ &Z_Construct_UFunction_UPico_PurchaseArray_GetSize, "GetSize" }, // 3256346528
		{ &Z_Construct_UFunction_UPico_PurchaseArray_HasNextPage, "HasNextPage" }, // 2529451858
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_PurchaseArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * PPF_PurchaseArray.h\n */" },
		{ "IncludePath", "Pico_IAP.h" },
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
		{ "ToolTip", "PPF_PurchaseArray.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_PurchaseArray_Statics::NewProp_PurchaseArray_Inner = { "PurchaseArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPico_Purchase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_PurchaseArray_Statics::NewProp_PurchaseArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_IAP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPico_PurchaseArray_Statics::NewProp_PurchaseArray = { "PurchaseArray", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_PurchaseArray, PurchaseArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPico_PurchaseArray_Statics::NewProp_PurchaseArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_PurchaseArray_Statics::NewProp_PurchaseArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_PurchaseArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_PurchaseArray_Statics::NewProp_PurchaseArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_PurchaseArray_Statics::NewProp_PurchaseArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_PurchaseArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_PurchaseArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_PurchaseArray_Statics::ClassParams = {
		&UPico_PurchaseArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_PurchaseArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_PurchaseArray_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_PurchaseArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_PurchaseArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_PurchaseArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_PurchaseArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_PurchaseArray, 2650255255);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_PurchaseArray>()
	{
		return UPico_PurchaseArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_PurchaseArray(Z_Construct_UClass_UPico_PurchaseArray, &UPico_PurchaseArray::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_PurchaseArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_PurchaseArray);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
