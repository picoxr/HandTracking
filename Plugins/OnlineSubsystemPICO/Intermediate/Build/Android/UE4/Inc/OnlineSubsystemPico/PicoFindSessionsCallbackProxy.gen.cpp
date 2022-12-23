// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Classes/PicoFindSessionsCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoFindSessionsCallbackProxy() {}
// Cross Module References
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPicoFindSessionsCallbackProxy_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPicoFindSessionsCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UPicoFindSessionsCallbackProxy::execFindModeratedSessions)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPicoFindSessionsCallbackProxy**)Z_Param__Result=UPicoFindSessionsCallbackProxy::FindModeratedSessions(Z_Param_MaxResults,Z_Param_PageIndex,Z_Param_PageSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoFindSessionsCallbackProxy::execFindMatchmakingSessions)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_PROPERTY(FStrProperty,Z_Param_PicoMatchmakingPool);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPicoFindSessionsCallbackProxy**)Z_Param__Result=UPicoFindSessionsCallbackProxy::FindMatchmakingSessions(Z_Param_MaxResults,Z_Param_PicoMatchmakingPool);
		P_NATIVE_END;
	}
	void UPicoFindSessionsCallbackProxy::StaticRegisterNativesUPicoFindSessionsCallbackProxy()
	{
		UClass* Class = UPicoFindSessionsCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindMatchmakingSessions", &UPicoFindSessionsCallbackProxy::execFindMatchmakingSessions },
			{ "FindModeratedSessions", &UPicoFindSessionsCallbackProxy::execFindModeratedSessions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions_Statics
	{
		struct PicoFindSessionsCallbackProxy_eventFindMatchmakingSessions_Parms
		{
			int32 MaxResults;
			FString PicoMatchmakingPool;
			UPicoFindSessionsCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PicoMatchmakingPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoFindSessionsCallbackProxy_eventFindMatchmakingSessions_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::NewProp_PicoMatchmakingPool = { "PicoMatchmakingPool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoFindSessionsCallbackProxy_eventFindMatchmakingSessions_Parms, PicoMatchmakingPool), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoFindSessionsCallbackProxy_eventFindMatchmakingSessions_Parms, ReturnValue), Z_Construct_UClass_UPicoFindSessionsCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::NewProp_PicoMatchmakingPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Pico|Session" },
		{ "Comment", "// Searches for matchmaking room sessions with the pico online subsystem\n" },
		{ "ModuleRelativePath", "Classes/PicoFindSessionsCallbackProxy.h" },
		{ "ToolTip", "Searches for matchmaking room sessions with the pico online subsystem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoFindSessionsCallbackProxy, nullptr, "FindMatchmakingSessions", nullptr, nullptr, sizeof(PicoFindSessionsCallbackProxy_eventFindMatchmakingSessions_Parms), Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics
	{
		struct PicoFindSessionsCallbackProxy_eventFindModeratedSessions_Parms
		{
			int32 MaxResults;
			int32 PageIndex;
			int32 PageSize;
			UPicoFindSessionsCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageIndex;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoFindSessionsCallbackProxy_eventFindModeratedSessions_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoFindSessionsCallbackProxy_eventFindModeratedSessions_Parms, PageIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoFindSessionsCallbackProxy_eventFindModeratedSessions_Parms, PageSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoFindSessionsCallbackProxy_eventFindModeratedSessions_Parms, ReturnValue), Z_Construct_UClass_UPicoFindSessionsCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics::NewProp_PageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics::NewProp_PageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Pico|Session" },
		{ "Comment", "// Searches for moderated room sessions with the pico online subsystem\n" },
		{ "ModuleRelativePath", "Classes/PicoFindSessionsCallbackProxy.h" },
		{ "ToolTip", "Searches for moderated room sessions with the pico online subsystem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoFindSessionsCallbackProxy, nullptr, "FindModeratedSessions", nullptr, nullptr, sizeof(PicoFindSessionsCallbackProxy_eventFindModeratedSessions_Parms), Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPicoFindSessionsCallbackProxy_NoRegister()
	{
		return UPicoFindSessionsCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindMatchmakingSessions, "FindMatchmakingSessions" }, // 619207947
		{ &Z_Construct_UFunction_UPicoFindSessionsCallbackProxy_FindModeratedSessions, "FindModeratedSessions" }, // 521002421
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Exposes FindSession of the Platform SDK for blueprint use.\n */" },
		{ "IncludePath", "PicoFindSessionsCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/PicoFindSessionsCallbackProxy.h" },
		{ "ToolTip", "Exposes FindSession of the Platform SDK for blueprint use." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful query\n" },
		{ "ModuleRelativePath", "Classes/PicoFindSessionsCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful query" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoFindSessionsCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful query\n" },
		{ "ModuleRelativePath", "Classes/PicoFindSessionsCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful query" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoFindSessionsCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoFindSessionsCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::ClassParams = {
		&UPicoFindSessionsCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoFindSessionsCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPicoFindSessionsCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPicoFindSessionsCallbackProxy, 971515199);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPicoFindSessionsCallbackProxy>()
	{
		return UPicoFindSessionsCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPicoFindSessionsCallbackProxy(Z_Construct_UClass_UPicoFindSessionsCallbackProxy, &UPicoFindSessionsCallbackProxy::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPicoFindSessionsCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoFindSessionsCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
