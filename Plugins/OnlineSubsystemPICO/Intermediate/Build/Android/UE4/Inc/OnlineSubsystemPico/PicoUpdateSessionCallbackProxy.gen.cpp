// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Classes/PicoUpdateSessionCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoUpdateSessionCallbackProxy() {}
// Cross Module References
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPicoUpdateSessionCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UPicoUpdateSessionCallbackProxy::execSetSessionEnqueue)
	{
		P_GET_UBOOL(Z_Param_bShouldEnqueueInMatchmakingPool);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPicoUpdateSessionCallbackProxy**)Z_Param__Result=UPicoUpdateSessionCallbackProxy::SetSessionEnqueue(Z_Param_bShouldEnqueueInMatchmakingPool);
		P_NATIVE_END;
	}
	void UPicoUpdateSessionCallbackProxy::StaticRegisterNativesUPicoUpdateSessionCallbackProxy()
	{
		UClass* Class = UPicoUpdateSessionCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSessionEnqueue", &UPicoUpdateSessionCallbackProxy::execSetSessionEnqueue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics
	{
		struct PicoUpdateSessionCallbackProxy_eventSetSessionEnqueue_Parms
		{
			bool bShouldEnqueueInMatchmakingPool;
			UPicoUpdateSessionCallbackProxy* ReturnValue;
		};
		static void NewProp_bShouldEnqueueInMatchmakingPool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldEnqueueInMatchmakingPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::NewProp_bShouldEnqueueInMatchmakingPool_SetBit(void* Obj)
	{
		((PicoUpdateSessionCallbackProxy_eventSetSessionEnqueue_Parms*)Obj)->bShouldEnqueueInMatchmakingPool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::NewProp_bShouldEnqueueInMatchmakingPool = { "bShouldEnqueueInMatchmakingPool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoUpdateSessionCallbackProxy_eventSetSessionEnqueue_Parms), &Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::NewProp_bShouldEnqueueInMatchmakingPool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoUpdateSessionCallbackProxy_eventSetSessionEnqueue_Parms, ReturnValue), Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::NewProp_bShouldEnqueueInMatchmakingPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Pico|Session" },
		{ "Comment", "// Kick off UpdateSession check. Asynchronous-- see OnUpdateCompleteDelegate for results.\n" },
		{ "ModuleRelativePath", "Classes/PicoUpdateSessionCallbackProxy.h" },
		{ "ToolTip", "Kick off UpdateSession check. Asynchronous-- see OnUpdateCompleteDelegate for results." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoUpdateSessionCallbackProxy, nullptr, "SetSessionEnqueue", nullptr, nullptr, sizeof(PicoUpdateSessionCallbackProxy_eventSetSessionEnqueue_Parms), Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_NoRegister()
	{
		return UPicoUpdateSessionCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPicoUpdateSessionCallbackProxy_SetSessionEnqueue, "SetSessionEnqueue" }, // 4241971155
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Exposes UpdateSession of the Platform SDK for blueprint use.\n */" },
		{ "IncludePath", "PicoUpdateSessionCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/PicoUpdateSessionCallbackProxy.h" },
		{ "ToolTip", "Exposes UpdateSession of the Platform SDK for blueprint use." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when the session was updated successfully\n" },
		{ "ModuleRelativePath", "Classes/PicoUpdateSessionCallbackProxy.h" },
		{ "ToolTip", "Called when the session was updated successfully" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoUpdateSessionCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there was an error updating the session\n" },
		{ "ModuleRelativePath", "Classes/PicoUpdateSessionCallbackProxy.h" },
		{ "ToolTip", "Called when there was an error updating the session" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoUpdateSessionCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoUpdateSessionCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::ClassParams = {
		&UPicoUpdateSessionCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoUpdateSessionCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPicoUpdateSessionCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPicoUpdateSessionCallbackProxy, 2973383476);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPicoUpdateSessionCallbackProxy>()
	{
		return UPicoUpdateSessionCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPicoUpdateSessionCallbackProxy(Z_Construct_UClass_UPicoUpdateSessionCallbackProxy, &UPicoUpdateSessionCallbackProxy::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPicoUpdateSessionCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoUpdateSessionCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
