// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Classes/PicoCreateSessionCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoCreateSessionCallbackProxy() {}
// Cross Module References
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPicoCreateSessionCallbackProxy_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPicoCreateSessionCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UPicoCreateSessionCallbackProxy::execCreateSession)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PublicConnections);
		P_GET_PROPERTY(FStrProperty,Z_Param_PicoMatchmakingPool);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPicoCreateSessionCallbackProxy**)Z_Param__Result=UPicoCreateSessionCallbackProxy::CreateSession(Z_Param_PublicConnections,Z_Param_PicoMatchmakingPool);
		P_NATIVE_END;
	}
	void UPicoCreateSessionCallbackProxy::StaticRegisterNativesUPicoCreateSessionCallbackProxy()
	{
		UClass* Class = UPicoCreateSessionCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSession", &UPicoCreateSessionCallbackProxy::execCreateSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession_Statics
	{
		struct PicoCreateSessionCallbackProxy_eventCreateSession_Parms
		{
			int32 PublicConnections;
			FString PicoMatchmakingPool;
			UPicoCreateSessionCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PublicConnections;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PicoMatchmakingPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession_Statics::NewProp_PublicConnections = { "PublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoCreateSessionCallbackProxy_eventCreateSession_Parms, PublicConnections), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession_Statics::NewProp_PicoMatchmakingPool = { "PicoMatchmakingPool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoCreateSessionCallbackProxy_eventCreateSession_Parms, PicoMatchmakingPool), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoCreateSessionCallbackProxy_eventCreateSession_Parms, ReturnValue), Z_Construct_UClass_UPicoCreateSessionCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession_Statics::NewProp_PublicConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession_Statics::NewProp_PicoMatchmakingPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Pico|Session" },
		{ "Comment", "// Kick off CreateSession check. Asynchronous-- see OnCreateSessionCompleteDelegate for results.\n" },
		{ "ModuleRelativePath", "Classes/PicoCreateSessionCallbackProxy.h" },
		{ "ToolTip", "Kick off CreateSession check. Asynchronous-- see OnCreateSessionCompleteDelegate for results." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoCreateSessionCallbackProxy, nullptr, "CreateSession", nullptr, nullptr, sizeof(PicoCreateSessionCallbackProxy_eventCreateSession_Parms), Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPicoCreateSessionCallbackProxy_NoRegister()
	{
		return UPicoCreateSessionCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPicoCreateSessionCallbackProxy_CreateSession, "CreateSession" }, // 786634716
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Exposes CreateSession of the Platform SDK for blueprint use.\n */" },
		{ "IncludePath", "PicoCreateSessionCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/PicoCreateSessionCallbackProxy.h" },
		{ "ToolTip", "Exposes CreateSession of the Platform SDK for blueprint use." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when the session was created successfully\n" },
		{ "ModuleRelativePath", "Classes/PicoCreateSessionCallbackProxy.h" },
		{ "ToolTip", "Called when the session was created successfully" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoCreateSessionCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there was an error creating the session\n" },
		{ "ModuleRelativePath", "Classes/PicoCreateSessionCallbackProxy.h" },
		{ "ToolTip", "Called when there was an error creating the session" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoCreateSessionCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoCreateSessionCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::ClassParams = {
		&UPicoCreateSessionCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoCreateSessionCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPicoCreateSessionCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPicoCreateSessionCallbackProxy, 2096314324);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPicoCreateSessionCallbackProxy>()
	{
		return UPicoCreateSessionCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPicoCreateSessionCallbackProxy(Z_Construct_UClass_UPicoCreateSessionCallbackProxy, &UPicoCreateSessionCallbackProxy::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPicoCreateSessionCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoCreateSessionCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
