// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Public/Pico_User.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePico_User() {}
// Cross Module References
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_PermissionResult_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_User_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_UserArray_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_UserAndRoomArray_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoUserFunction_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoUserFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_User();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EUserGender();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_EUserPresenceStatus();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_UserArray();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_UserAndRoom_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_UserAndRoom();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_Room_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_UserAndRoomArray();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_PermissionResult();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventLaunchFriendRequestResult_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			bool bDidCancel;
			bool bDidSendRequest;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static void NewProp_bDidCancel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDidCancel;
		static void NewProp_bDidSendRequest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDidSendRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventLaunchFriendRequestResult_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventLaunchFriendRequestResult_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventLaunchFriendRequestResult_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_bDidCancel_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventLaunchFriendRequestResult_Parms*)Obj)->bDidCancel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_bDidCancel = { "bDidCancel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventLaunchFriendRequestResult_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_bDidCancel_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_bDidSendRequest_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventLaunchFriendRequestResult_Parms*)Obj)->bDidSendRequest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_bDidSendRequest = { "bDidSendRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventLaunchFriendRequestResult_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_bDidSendRequest_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_bDidCancel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::NewProp_bDidSendRequest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "LaunchFriendRequestResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventLaunchFriendRequestResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetAccessTokenResult_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			FString AccessToken;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccessToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetAccessTokenResult_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetAccessTokenResult_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetAccessTokenResult_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::NewProp_AccessToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetAccessTokenResult_Parms, AccessToken), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::NewProp_AccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::NewProp_AccessToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::NewProp_AccessToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetAccessTokenResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetAccessTokenResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetPermissionResult_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_PermissionResult* PermissionResult;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PermissionResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetPermissionResult_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetPermissionResult_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetPermissionResult_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::NewProp_PermissionResult = { "PermissionResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetPermissionResult_Parms, PermissionResult), Z_Construct_UClass_UPico_PermissionResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::NewProp_PermissionResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetPermissionResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetPermissionResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetUserInfo_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_User* User;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetUserInfo_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetUserInfo_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetUserInfo_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetUserInfo_Parms, User), Z_Construct_UClass_UPico_User_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::NewProp_User,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetUserInfo__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetUserInfo_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetLoginUser_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_User* User;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetLoginUser_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetLoginUser_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetLoginUser_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetLoginUser_Parms, User), Z_Construct_UClass_UPico_User_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::NewProp_User,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetLoginUser__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetLoginUser_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetNextUserPage_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_UserArray* UserArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetNextUserPage_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetNextUserPage_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetNextUserPage_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::NewProp_UserArray = { "UserArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetNextUserPage_Parms, UserArray), Z_Construct_UClass_UPico_UserArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::NewProp_UserArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetNextUserPage__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetNextUserPage_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetLoggedInUserFriends_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_UserArray* UserArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetLoggedInUserFriends_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetLoggedInUserFriends_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetLoggedInUserFriends_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::NewProp_UserArray = { "UserArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetLoggedInUserFriends_Parms, UserArray), Z_Construct_UClass_UPico_UserArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::NewProp_UserArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetLoggedInUserFriends__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetLoggedInUserFriends_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetNextUserAndRoomArrayPage_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_UserAndRoomArray* UserAndRoomArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserAndRoomArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetNextUserAndRoomArrayPage_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetNextUserAndRoomArrayPage_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetNextUserAndRoomArrayPage_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::NewProp_UserAndRoomArray = { "UserAndRoomArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetNextUserAndRoomArrayPage_Parms, UserAndRoomArray), Z_Construct_UClass_UPico_UserAndRoomArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::NewProp_UserAndRoomArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetNextUserAndRoomArrayPage__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetNextUserAndRoomArrayPage_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventGetLoggedInUserFriendsAndRooms_Parms
		{
			bool bIsError;
			FString ErrorMessage;
			UPico_UserAndRoomArray* UserAndRoomArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserAndRoomArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventGetLoggedInUserFriendsAndRooms_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventGetLoggedInUserFriendsAndRooms_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetLoggedInUserFriendsAndRooms_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::NewProp_UserAndRoomArray = { "UserAndRoomArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventGetLoggedInUserFriendsAndRooms_Parms, UserAndRoomArray), Z_Construct_UClass_UPico_UserAndRoomArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::NewProp_UserAndRoomArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "GetLoggedInUserFriendsAndRooms__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventGetLoggedInUserFriendsAndRooms_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePicoUserFunction::execGetAccessToken)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnGetAccessTokenResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoUserFunction::GetAccessToken(Z_Param_WorldContextObject,FGetAccessTokenResult(Z_Param_OnGetAccessTokenResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoUserFunction::execLaunchFriendRequestFlow)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnLaunchFriendRequestResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoUserFunction::LaunchFriendRequestFlow(Z_Param_WorldContextObject,Z_Param_UserId,FLaunchFriendRequestResult(Z_Param_OnLaunchFriendRequestResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoUserFunction::execRequestUserPermissions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY(FString,Z_Param_Permissions);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnGetPermissionResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoUserFunction::RequestUserPermissions(Z_Param_WorldContextObject,Z_Param_Permissions,FGetPermissionResult(Z_Param_OnGetPermissionResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoUserFunction::execGetAuthorizePermissions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnGetPermissionResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoUserFunction::GetAuthorizePermissions(Z_Param_WorldContextObject,FGetPermissionResult(Z_Param_OnGetPermissionResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoUserFunction::execGetPicoUserInfo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetUserInfoDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoUserFunction::GetPicoUserInfo(Z_Param_WorldContextObject,Z_Param_UserId,FGetUserInfo(Z_Param_InGetUserInfoDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoUserFunction::execGetLoginUser)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetLoginUserDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoUserFunction::GetLoginUser(Z_Param_WorldContextObject,FGetLoginUser(Z_Param_InGetLoginUserDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoUserFunction::execPicoGetNextUserPage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UPico_UserArray,Z_Param_InUserArray);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetNextUserPageDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoUserFunction::PicoGetNextUserPage(Z_Param_WorldContextObject,Z_Param_InUserArray,FGetNextUserPage(Z_Param_InGetNextUserPageDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoUserFunction::execPicoGetUserFriends)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetLoggedInUserFriendsDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoUserFunction::PicoGetUserFriends(Z_Param_WorldContextObject,FGetLoggedInUserFriends(Z_Param_InGetLoggedInUserFriendsDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoUserFunction::execPicoGetNextUserAndRoomArrayPage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UPico_UserAndRoomArray,Z_Param_InUserAndRoomArray);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetNextUserAndRoomArrayPageCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoUserFunction::PicoGetNextUserAndRoomArrayPage(Z_Param_WorldContextObject,Z_Param_InUserAndRoomArray,FGetNextUserAndRoomArrayPage(Z_Param_InGetNextUserAndRoomArrayPageCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoUserFunction::execPicoGetLoggedInUserAndRoom)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InGetLoggedInuserFriendsAndRoomsCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoUserFunction::PicoGetLoggedInUserAndRoom(Z_Param_WorldContextObject,FGetLoggedInUserFriendsAndRooms(Z_Param_InGetLoggedInuserFriendsAndRoomsCallback));
		P_NATIVE_END;
	}
	void UOnlinePicoUserFunction::StaticRegisterNativesUOnlinePicoUserFunction()
	{
		UClass* Class = UOnlinePicoUserFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAccessToken", &UOnlinePicoUserFunction::execGetAccessToken },
			{ "GetAuthorizePermissions", &UOnlinePicoUserFunction::execGetAuthorizePermissions },
			{ "GetLoginUser", &UOnlinePicoUserFunction::execGetLoginUser },
			{ "GetPicoUserInfo", &UOnlinePicoUserFunction::execGetPicoUserInfo },
			{ "LaunchFriendRequestFlow", &UOnlinePicoUserFunction::execLaunchFriendRequestFlow },
			{ "PicoGetLoggedInUserAndRoom", &UOnlinePicoUserFunction::execPicoGetLoggedInUserAndRoom },
			{ "PicoGetNextUserAndRoomArrayPage", &UOnlinePicoUserFunction::execPicoGetNextUserAndRoomArrayPage },
			{ "PicoGetNextUserPage", &UOnlinePicoUserFunction::execPicoGetNextUserPage },
			{ "PicoGetUserFriends", &UOnlinePicoUserFunction::execPicoGetUserFriends },
			{ "RequestUserPermissions", &UOnlinePicoUserFunction::execRequestUserPermissions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics
	{
		struct OnlinePicoUserFunction_eventGetAccessToken_Parms
		{
			UObject* WorldContextObject;
			FScriptDelegate OnGetAccessTokenResultCallback;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGetAccessTokenResultCallback;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventGetAccessToken_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics::NewProp_OnGetAccessTokenResultCallback = { "OnGetAccessTokenResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventGetAccessToken_Parms, OnGetAccessTokenResultCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetAccessTokenResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoUserFunction_eventGetAccessToken_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoUserFunction_eventGetAccessToken_Parms), &Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics::NewProp_OnGetAccessTokenResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|User" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoUserFunction, nullptr, "GetAccessToken", nullptr, nullptr, sizeof(OnlinePicoUserFunction_eventGetAccessToken_Parms), Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics
	{
		struct OnlinePicoUserFunction_eventGetAuthorizePermissions_Parms
		{
			UObject* WorldContextObject;
			FScriptDelegate OnGetPermissionResultCallback;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGetPermissionResultCallback;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventGetAuthorizePermissions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics::NewProp_OnGetPermissionResultCallback = { "OnGetPermissionResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventGetAuthorizePermissions_Parms, OnGetPermissionResultCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoUserFunction_eventGetAuthorizePermissions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoUserFunction_eventGetAuthorizePermissions_Parms), &Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics::NewProp_OnGetPermissionResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|User" },
		{ "Comment", "/// <summary>\n/// Gets the authorized permissions.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"OnGetPermissionResultCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
		{ "ToolTip", "<summary>\nGets the authorized permissions.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"OnGetPermissionResultCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoUserFunction, nullptr, "GetAuthorizePermissions", nullptr, nullptr, sizeof(OnlinePicoUserFunction_eventGetAuthorizePermissions_Parms), Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics
	{
		struct OnlinePicoUserFunction_eventGetLoginUser_Parms
		{
			UObject* WorldContextObject;
			FScriptDelegate InGetLoginUserDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetLoginUserDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventGetLoginUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics::NewProp_InGetLoginUserDelegate = { "InGetLoginUserDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventGetLoginUser_Parms, InGetLoginUserDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoginUser__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoUserFunction_eventGetLoginUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoUserFunction_eventGetLoginUser_Parms), &Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics::NewProp_InGetLoginUserDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|User" },
		{ "Comment", "/// <summary>Gets the information about the current logged-in user.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"InGetLoginUserDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
		{ "ToolTip", "<summary>Gets the information about the current logged-in user.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"InGetLoginUserDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoUserFunction, nullptr, "GetLoginUser", nullptr, nullptr, sizeof(OnlinePicoUserFunction_eventGetLoginUser_Parms), Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics
	{
		struct OnlinePicoUserFunction_eventGetPicoUserInfo_Parms
		{
			UObject* WorldContextObject;
			FString UserId;
			FScriptDelegate InGetUserInfoDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetUserInfoDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventGetPicoUserInfo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventGetPicoUserInfo_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::NewProp_InGetUserInfoDelegate = { "InGetUserInfoDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventGetPicoUserInfo_Parms, InGetUserInfoDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetUserInfo__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoUserFunction_eventGetPicoUserInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoUserFunction_eventGetPicoUserInfo_Parms), &Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::NewProp_InGetUserInfoDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|User" },
		{ "Comment", "/// <summary>Gets user information by user ID.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"UserId\">The ID of the user.</param>    \n/// <param name=\"InGetUserInfoDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
		{ "ToolTip", "<summary>Gets user information by user ID.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"UserId\">The ID of the user.</param>\n<param name=\"InGetUserInfoDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoUserFunction, nullptr, "GetPicoUserInfo", nullptr, nullptr, sizeof(OnlinePicoUserFunction_eventGetPicoUserInfo_Parms), Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics
	{
		struct OnlinePicoUserFunction_eventLaunchFriendRequestFlow_Parms
		{
			UObject* WorldContextObject;
			FString UserId;
			FScriptDelegate OnLaunchFriendRequestResultCallback;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnLaunchFriendRequestResultCallback;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventLaunchFriendRequestFlow_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventLaunchFriendRequestFlow_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::NewProp_OnLaunchFriendRequestResultCallback = { "OnLaunchFriendRequestResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventLaunchFriendRequestFlow_Parms, OnLaunchFriendRequestResultCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_LaunchFriendRequestResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoUserFunction_eventLaunchFriendRequestFlow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoUserFunction_eventLaunchFriendRequestFlow_Parms), &Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::NewProp_OnLaunchFriendRequestResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|User" },
		{ "Comment", "/// <summary>\n/// Launches the flow to apply for friendship with someone.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"UserId\">The ID of the user that the friend request is sent to.</param>\n/// <param name=\"OnLaunchFriendRequestResultCallback\">Will be executed when the request has been completed. Delegate will contain the requested info.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
		{ "ToolTip", "<summary>\nLaunches the flow to apply for friendship with someone.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"UserId\">The ID of the user that the friend request is sent to.</param>\n<param name=\"OnLaunchFriendRequestResultCallback\">Will be executed when the request has been completed. Delegate will contain the requested info.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoUserFunction, nullptr, "LaunchFriendRequestFlow", nullptr, nullptr, sizeof(OnlinePicoUserFunction_eventLaunchFriendRequestFlow_Parms), Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetLoggedInUserAndRoom_Statics
	{
		struct OnlinePicoUserFunction_eventPicoGetLoggedInUserAndRoom_Parms
		{
			UObject* WorldContextObject;
			FScriptDelegate InGetLoggedInuserFriendsAndRoomsCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetLoggedInuserFriendsAndRoomsCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetLoggedInUserAndRoom_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventPicoGetLoggedInUserAndRoom_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetLoggedInUserAndRoom_Statics::NewProp_InGetLoggedInuserFriendsAndRoomsCallback = { "InGetLoggedInuserFriendsAndRoomsCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventPicoGetLoggedInUserAndRoom_Parms, InGetLoggedInuserFriendsAndRoomsCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriendsAndRooms__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetLoggedInUserAndRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetLoggedInUserAndRoom_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetLoggedInUserAndRoom_Statics::NewProp_InGetLoggedInuserFriendsAndRoomsCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetLoggedInUserAndRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|User" },
		{ "Comment", "/// <summary>Gets the friends of the logged-in user and the rooms the friends might be in. If a friend is not in any room, the 'room' field will be null.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"InGetLoggedInuserFriendsAndRoomsCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns> \n" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
		{ "ToolTip", "<summary>Gets the friends of the logged-in user and the rooms the friends might be in. If a friend is not in any room, the 'room' field will be null.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"InGetLoggedInuserFriendsAndRoomsCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetLoggedInUserAndRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoUserFunction, nullptr, "PicoGetLoggedInUserAndRoom", nullptr, nullptr, sizeof(OnlinePicoUserFunction_eventPicoGetLoggedInUserAndRoom_Parms), Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetLoggedInUserAndRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetLoggedInUserAndRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetLoggedInUserAndRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetLoggedInUserAndRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetLoggedInUserAndRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetLoggedInUserAndRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage_Statics
	{
		struct OnlinePicoUserFunction_eventPicoGetNextUserAndRoomArrayPage_Parms
		{
			UObject* WorldContextObject;
			UPico_UserAndRoomArray* InUserAndRoomArray;
			FScriptDelegate InGetNextUserAndRoomArrayPageCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InUserAndRoomArray;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetNextUserAndRoomArrayPageCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventPicoGetNextUserAndRoomArrayPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage_Statics::NewProp_InUserAndRoomArray = { "InUserAndRoomArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventPicoGetNextUserAndRoomArrayPage_Parms, InUserAndRoomArray), Z_Construct_UClass_UPico_UserAndRoomArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage_Statics::NewProp_InGetNextUserAndRoomArrayPageCallback = { "InGetNextUserAndRoomArrayPageCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventPicoGetNextUserAndRoomArrayPage_Parms, InGetNextUserAndRoomArrayPageCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserAndRoomArrayPage__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage_Statics::NewProp_InUserAndRoomArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage_Statics::NewProp_InGetNextUserAndRoomArrayPageCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|User" },
		{ "Comment", "/// <summary>Gets the friend list of the current user.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"InUserAndRoomArray\">The current object of user and room array.</param>    \n/// <param name=\"InGetNextUserAndRoomArrayPageCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
		{ "ToolTip", "<summary>Gets the friend list of the current user.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"InUserAndRoomArray\">The current object of user and room array.</param>\n<param name=\"InGetNextUserAndRoomArrayPageCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoUserFunction, nullptr, "PicoGetNextUserAndRoomArrayPage", nullptr, nullptr, sizeof(OnlinePicoUserFunction_eventPicoGetNextUserAndRoomArrayPage_Parms), Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage_Statics
	{
		struct OnlinePicoUserFunction_eventPicoGetNextUserPage_Parms
		{
			UObject* WorldContextObject;
			UPico_UserArray* InUserArray;
			FScriptDelegate InGetNextUserPageDelegate;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InUserArray;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetNextUserPageDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventPicoGetNextUserPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage_Statics::NewProp_InUserArray = { "InUserArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventPicoGetNextUserPage_Parms, InUserArray), Z_Construct_UClass_UPico_UserArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage_Statics::NewProp_InGetNextUserPageDelegate = { "InGetNextUserPageDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventPicoGetNextUserPage_Parms, InGetNextUserPageDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetNextUserPage__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage_Statics::NewProp_InUserArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage_Statics::NewProp_InGetNextUserPageDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|User" },
		{ "Comment", "/// <summary>Gets the next page of a user list.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"InUserArray\">The current object of user array.</param>    \n/// <param name=\"InGetNextUserPageDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
		{ "ToolTip", "<summary>Gets the next page of a user list.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"InUserArray\">The current object of user array.</param>\n<param name=\"InGetNextUserPageDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoUserFunction, nullptr, "PicoGetNextUserPage", nullptr, nullptr, sizeof(OnlinePicoUserFunction_eventPicoGetNextUserPage_Parms), Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetUserFriends_Statics
	{
		struct OnlinePicoUserFunction_eventPicoGetUserFriends_Parms
		{
			UObject* WorldContextObject;
			FScriptDelegate InGetLoggedInUserFriendsDelegate;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InGetLoggedInUserFriendsDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetUserFriends_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventPicoGetUserFriends_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetUserFriends_Statics::NewProp_InGetLoggedInUserFriendsDelegate = { "InGetLoggedInUserFriendsDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventPicoGetUserFriends_Parms, InGetLoggedInUserFriendsDelegate), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetLoggedInUserFriends__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetUserFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetUserFriends_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetUserFriends_Statics::NewProp_InGetLoggedInUserFriendsDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetUserFriends_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|User" },
		{ "Comment", "/// <summary>Gets the friend list of the current user. Friends who don't use this app won't appear in this list.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"InGetLoggedInUserFriendsDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
		{ "ToolTip", "<summary>Gets the friend list of the current user. Friends who don't use this app won't appear in this list.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"InGetLoggedInUserFriendsDelegate\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetUserFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoUserFunction, nullptr, "PicoGetUserFriends", nullptr, nullptr, sizeof(OnlinePicoUserFunction_eventPicoGetUserFriends_Parms), Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetUserFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetUserFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetUserFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetUserFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetUserFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetUserFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics
	{
		struct OnlinePicoUserFunction_eventRequestUserPermissions_Parms
		{
			UObject* WorldContextObject;
			TArray<FString> Permissions;
			FScriptDelegate OnGetPermissionResultCallback;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Permissions_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Permissions;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGetPermissionResultCallback;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventRequestUserPermissions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventRequestUserPermissions_Parms, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::NewProp_OnGetPermissionResultCallback = { "OnGetPermissionResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoUserFunction_eventRequestUserPermissions_Parms, OnGetPermissionResultCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_GetPermissionResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoUserFunction_eventRequestUserPermissions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoUserFunction_eventRequestUserPermissions_Parms), &Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::NewProp_Permissions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::NewProp_Permissions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::NewProp_OnGetPermissionResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|User" },
		{ "Comment", "/// <summary>\n/// Requests user permissions. The user will received a pop-up notification window.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"Permissions\">Will be executed when the request has been completed. Delegate will contain the requested object class.\n/// * `user_info`: The permission to get the user's basic information, such as the user's nickname and profile picture.\n/// * `friend_relation`: The permission to get the user's friend list and invitable users.\n/// * `sports_userinfo`: The permission to get the user's information set in the sport center.\n/// * `sports_summarydata`: The permission to get a summary of the user's exercise data.\n/// </param>\n/// <param name=\"OnGetPermissionResultCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
		{ "ToolTip", "<summary>\nRequests user permissions. The user will received a pop-up notification window.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"Permissions\">Will be executed when the request has been completed. Delegate will contain the requested object class.\n* `user_info`: The permission to get the user's basic information, such as the user's nickname and profile picture.\n* `friend_relation`: The permission to get the user's friend list and invitable users.\n* `sports_userinfo`: The permission to get the user's information set in the sport center.\n* `sports_summarydata`: The permission to get a summary of the user's exercise data.\n</param>\n<param name=\"OnGetPermissionResultCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoUserFunction, nullptr, "RequestUserPermissions", nullptr, nullptr, sizeof(OnlinePicoUserFunction_eventRequestUserPermissions_Parms), Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlinePicoUserFunction_NoRegister()
	{
		return UOnlinePicoUserFunction::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePicoUserFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePicoUserFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePicoUserFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePicoUserFunction_GetAccessToken, "GetAccessToken" }, // 2077048563
		{ &Z_Construct_UFunction_UOnlinePicoUserFunction_GetAuthorizePermissions, "GetAuthorizePermissions" }, // 2496635333
		{ &Z_Construct_UFunction_UOnlinePicoUserFunction_GetLoginUser, "GetLoginUser" }, // 3736432575
		{ &Z_Construct_UFunction_UOnlinePicoUserFunction_GetPicoUserInfo, "GetPicoUserInfo" }, // 369011439
		{ &Z_Construct_UFunction_UOnlinePicoUserFunction_LaunchFriendRequestFlow, "LaunchFriendRequestFlow" }, // 1304477843
		{ &Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetLoggedInUserAndRoom, "PicoGetLoggedInUserAndRoom" }, // 2347349871
		{ &Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserAndRoomArrayPage, "PicoGetNextUserAndRoomArrayPage" }, // 2624096211
		{ &Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetNextUserPage, "PicoGetNextUserPage" }, // 1016778345
		{ &Z_Construct_UFunction_UOnlinePicoUserFunction_PicoGetUserFriends, "PicoGetUserFriends" }, // 729072347
		{ &Z_Construct_UFunction_UOnlinePicoUserFunction_RequestUserPermissions, "RequestUserPermissions" }, // 4111894574
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoUserFunction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** @defgroup BP_User BP_User\n *  This is the BP_User group\n *  @{\n *//// @brief OnlinePicoUser Blueprint Function class.\n" },
		{ "IncludePath", "Pico_User.h" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
		{ "ToolTip", "@defgroup BP_User BP_User\nThis is the BP_User group\n@{\n/// @brief OnlinePicoUser Blueprint Function class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePicoUserFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePicoUserFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePicoUserFunction_Statics::ClassParams = {
		&UOnlinePicoUserFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoUserFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoUserFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePicoUserFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlinePicoUserFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlinePicoUserFunction, 192195473);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UOnlinePicoUserFunction>()
	{
		return UOnlinePicoUserFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlinePicoUserFunction(Z_Construct_UClass_UOnlinePicoUserFunction, &UOnlinePicoUserFunction::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UOnlinePicoUserFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePicoUserFunction);
	DEFINE_FUNCTION(UPico_User::execGetStoreRegion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStoreRegion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_User::execGetPresenceExtra)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPresenceExtra();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_User::execGetPresenceMatchSessionId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPresenceMatchSessionId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_User::execGetPresenceLobbySessionId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPresenceLobbySessionId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_User::execGetPresenceDestinationApiName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPresenceDestinationApiName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_User::execGetPresenceDeeplinkMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPresenceDeeplinkMessage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_User::execGetPresence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPresence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_User::execGetGender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUserGender*)Z_Param__Result=P_THIS->GetGender();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_User::execGetUserPresenceStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUserPresenceStatus*)Z_Param__Result=P_THIS->GetUserPresenceStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_User::execGetPresencePackage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPresencePackage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_User::execGetSmallImageUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSmallImageUrl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_User::execGetInviteToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetInviteToken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_User::execGetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_User::execGetImageURL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetImageURL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_User::execGetDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDisplayName();
		P_NATIVE_END;
	}
	void UPico_User::StaticRegisterNativesUPico_User()
	{
		UClass* Class = UPico_User::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayName", &UPico_User::execGetDisplayName },
			{ "GetGender", &UPico_User::execGetGender },
			{ "GetID", &UPico_User::execGetID },
			{ "GetImageURL", &UPico_User::execGetImageURL },
			{ "GetInviteToken", &UPico_User::execGetInviteToken },
			{ "GetPresence", &UPico_User::execGetPresence },
			{ "GetPresenceDeeplinkMessage", &UPico_User::execGetPresenceDeeplinkMessage },
			{ "GetPresenceDestinationApiName", &UPico_User::execGetPresenceDestinationApiName },
			{ "GetPresenceExtra", &UPico_User::execGetPresenceExtra },
			{ "GetPresenceLobbySessionId", &UPico_User::execGetPresenceLobbySessionId },
			{ "GetPresenceMatchSessionId", &UPico_User::execGetPresenceMatchSessionId },
			{ "GetPresencePackage", &UPico_User::execGetPresencePackage },
			{ "GetSmallImageUrl", &UPico_User::execGetSmallImageUrl },
			{ "GetStoreRegion", &UPico_User::execGetStoreRegion },
			{ "GetUserPresenceStatus", &UPico_User::execGetUserPresenceStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_User_GetDisplayName_Statics
	{
		struct Pico_User_eventGetDisplayName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_User_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_User_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_User_GetDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_User_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_User_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_User, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(Pico_User_eventGetDisplayName_Parms), Z_Construct_UFunction_UPico_User_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_User_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_User_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_User_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_User_GetGender_Statics
	{
		struct Pico_User_eventGetGender_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPico_User_GetGender_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPico_User_GetGender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_User_eventGetGender_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemPico_EUserGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_User_GetGender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetGender_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetGender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_User_GetGender_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_User_GetGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_User, nullptr, "GetGender", nullptr, nullptr, sizeof(Pico_User_eventGetGender_Parms), Z_Construct_UFunction_UPico_User_GetGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetGender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_User_GetGender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_User_GetGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_User_GetGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_User_GetID_Statics
	{
		struct Pico_User_eventGetID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_User_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_User_eventGetID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_User_GetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_User_GetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_User_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_User, nullptr, "GetID", nullptr, nullptr, sizeof(Pico_User_eventGetID_Parms), Z_Construct_UFunction_UPico_User_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_User_GetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_User_GetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_User_GetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_User_GetImageURL_Statics
	{
		struct Pico_User_eventGetImageURL_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_User_GetImageURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_User_eventGetImageURL_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_User_GetImageURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetImageURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_User_GetImageURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_User_GetImageURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_User, nullptr, "GetImageURL", nullptr, nullptr, sizeof(Pico_User_eventGetImageURL_Parms), Z_Construct_UFunction_UPico_User_GetImageURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetImageURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_User_GetImageURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetImageURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_User_GetImageURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_User_GetImageURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_User_GetInviteToken_Statics
	{
		struct Pico_User_eventGetInviteToken_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_User_GetInviteToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_User_eventGetInviteToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_User_GetInviteToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetInviteToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_User_GetInviteToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_User_GetInviteToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_User, nullptr, "GetInviteToken", nullptr, nullptr, sizeof(Pico_User_eventGetInviteToken_Parms), Z_Construct_UFunction_UPico_User_GetInviteToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetInviteToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_User_GetInviteToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetInviteToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_User_GetInviteToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_User_GetInviteToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_User_GetPresence_Statics
	{
		struct Pico_User_eventGetPresence_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_User_GetPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_User_eventGetPresence_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_User_GetPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_User_GetPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_User_GetPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_User, nullptr, "GetPresence", nullptr, nullptr, sizeof(Pico_User_eventGetPresence_Parms), Z_Construct_UFunction_UPico_User_GetPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_User_GetPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_User_GetPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_User_GetPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_User_GetPresenceDeeplinkMessage_Statics
	{
		struct Pico_User_eventGetPresenceDeeplinkMessage_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_User_GetPresenceDeeplinkMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_User_eventGetPresenceDeeplinkMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_User_GetPresenceDeeplinkMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetPresenceDeeplinkMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_User_GetPresenceDeeplinkMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_User_GetPresenceDeeplinkMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_User, nullptr, "GetPresenceDeeplinkMessage", nullptr, nullptr, sizeof(Pico_User_eventGetPresenceDeeplinkMessage_Parms), Z_Construct_UFunction_UPico_User_GetPresenceDeeplinkMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetPresenceDeeplinkMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_User_GetPresenceDeeplinkMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetPresenceDeeplinkMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_User_GetPresenceDeeplinkMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_User_GetPresenceDeeplinkMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_User_GetPresenceDestinationApiName_Statics
	{
		struct Pico_User_eventGetPresenceDestinationApiName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_User_GetPresenceDestinationApiName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_User_eventGetPresenceDestinationApiName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_User_GetPresenceDestinationApiName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetPresenceDestinationApiName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_User_GetPresenceDestinationApiName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_User_GetPresenceDestinationApiName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_User, nullptr, "GetPresenceDestinationApiName", nullptr, nullptr, sizeof(Pico_User_eventGetPresenceDestinationApiName_Parms), Z_Construct_UFunction_UPico_User_GetPresenceDestinationApiName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetPresenceDestinationApiName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_User_GetPresenceDestinationApiName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetPresenceDestinationApiName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_User_GetPresenceDestinationApiName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_User_GetPresenceDestinationApiName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_User_GetPresenceExtra_Statics
	{
		struct Pico_User_eventGetPresenceExtra_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_User_GetPresenceExtra_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_User_eventGetPresenceExtra_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_User_GetPresenceExtra_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetPresenceExtra_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_User_GetPresenceExtra_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_User_GetPresenceExtra_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_User, nullptr, "GetPresenceExtra", nullptr, nullptr, sizeof(Pico_User_eventGetPresenceExtra_Parms), Z_Construct_UFunction_UPico_User_GetPresenceExtra_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetPresenceExtra_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_User_GetPresenceExtra_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetPresenceExtra_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_User_GetPresenceExtra()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_User_GetPresenceExtra_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_User_GetPresenceLobbySessionId_Statics
	{
		struct Pico_User_eventGetPresenceLobbySessionId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_User_GetPresenceLobbySessionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_User_eventGetPresenceLobbySessionId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_User_GetPresenceLobbySessionId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetPresenceLobbySessionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_User_GetPresenceLobbySessionId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_User_GetPresenceLobbySessionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_User, nullptr, "GetPresenceLobbySessionId", nullptr, nullptr, sizeof(Pico_User_eventGetPresenceLobbySessionId_Parms), Z_Construct_UFunction_UPico_User_GetPresenceLobbySessionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetPresenceLobbySessionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_User_GetPresenceLobbySessionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetPresenceLobbySessionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_User_GetPresenceLobbySessionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_User_GetPresenceLobbySessionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_User_GetPresenceMatchSessionId_Statics
	{
		struct Pico_User_eventGetPresenceMatchSessionId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_User_GetPresenceMatchSessionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_User_eventGetPresenceMatchSessionId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_User_GetPresenceMatchSessionId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetPresenceMatchSessionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_User_GetPresenceMatchSessionId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_User_GetPresenceMatchSessionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_User, nullptr, "GetPresenceMatchSessionId", nullptr, nullptr, sizeof(Pico_User_eventGetPresenceMatchSessionId_Parms), Z_Construct_UFunction_UPico_User_GetPresenceMatchSessionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetPresenceMatchSessionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_User_GetPresenceMatchSessionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetPresenceMatchSessionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_User_GetPresenceMatchSessionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_User_GetPresenceMatchSessionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_User_GetPresencePackage_Statics
	{
		struct Pico_User_eventGetPresencePackage_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_User_GetPresencePackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_User_eventGetPresencePackage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_User_GetPresencePackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetPresencePackage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_User_GetPresencePackage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_User_GetPresencePackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_User, nullptr, "GetPresencePackage", nullptr, nullptr, sizeof(Pico_User_eventGetPresencePackage_Parms), Z_Construct_UFunction_UPico_User_GetPresencePackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetPresencePackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_User_GetPresencePackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetPresencePackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_User_GetPresencePackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_User_GetPresencePackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_User_GetSmallImageUrl_Statics
	{
		struct Pico_User_eventGetSmallImageUrl_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_User_GetSmallImageUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_User_eventGetSmallImageUrl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_User_GetSmallImageUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetSmallImageUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_User_GetSmallImageUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_User_GetSmallImageUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_User, nullptr, "GetSmallImageUrl", nullptr, nullptr, sizeof(Pico_User_eventGetSmallImageUrl_Parms), Z_Construct_UFunction_UPico_User_GetSmallImageUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetSmallImageUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_User_GetSmallImageUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetSmallImageUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_User_GetSmallImageUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_User_GetSmallImageUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_User_GetStoreRegion_Statics
	{
		struct Pico_User_eventGetStoreRegion_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_User_GetStoreRegion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_User_eventGetStoreRegion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_User_GetStoreRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetStoreRegion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_User_GetStoreRegion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_User_GetStoreRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_User, nullptr, "GetStoreRegion", nullptr, nullptr, sizeof(Pico_User_eventGetStoreRegion_Parms), Z_Construct_UFunction_UPico_User_GetStoreRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetStoreRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_User_GetStoreRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetStoreRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_User_GetStoreRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_User_GetStoreRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_User_GetUserPresenceStatus_Statics
	{
		struct Pico_User_eventGetUserPresenceStatus_Parms
		{
			EUserPresenceStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPico_User_GetUserPresenceStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPico_User_GetUserPresenceStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_User_eventGetUserPresenceStatus_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemPico_EUserPresenceStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_User_GetUserPresenceStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetUserPresenceStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_User_GetUserPresenceStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_User_GetUserPresenceStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_User_GetUserPresenceStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_User, nullptr, "GetUserPresenceStatus", nullptr, nullptr, sizeof(Pico_User_eventGetUserPresenceStatus_Parms), Z_Construct_UFunction_UPico_User_GetUserPresenceStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetUserPresenceStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_User_GetUserPresenceStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_User_GetUserPresenceStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_User_GetUserPresenceStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_User_GetUserPresenceStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_User_NoRegister()
	{
		return UPico_User::StaticClass();
	}
	struct Z_Construct_UClass_UPico_User_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_User_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_User_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_User_GetDisplayName, "GetDisplayName" }, // 2608004810
		{ &Z_Construct_UFunction_UPico_User_GetGender, "GetGender" }, // 2247539966
		{ &Z_Construct_UFunction_UPico_User_GetID, "GetID" }, // 2108711286
		{ &Z_Construct_UFunction_UPico_User_GetImageURL, "GetImageURL" }, // 2752204257
		{ &Z_Construct_UFunction_UPico_User_GetInviteToken, "GetInviteToken" }, // 1284979369
		{ &Z_Construct_UFunction_UPico_User_GetPresence, "GetPresence" }, // 3478758573
		{ &Z_Construct_UFunction_UPico_User_GetPresenceDeeplinkMessage, "GetPresenceDeeplinkMessage" }, // 2793693217
		{ &Z_Construct_UFunction_UPico_User_GetPresenceDestinationApiName, "GetPresenceDestinationApiName" }, // 3310799314
		{ &Z_Construct_UFunction_UPico_User_GetPresenceExtra, "GetPresenceExtra" }, // 3630470830
		{ &Z_Construct_UFunction_UPico_User_GetPresenceLobbySessionId, "GetPresenceLobbySessionId" }, // 1433401643
		{ &Z_Construct_UFunction_UPico_User_GetPresenceMatchSessionId, "GetPresenceMatchSessionId" }, // 1625603585
		{ &Z_Construct_UFunction_UPico_User_GetPresencePackage, "GetPresencePackage" }, // 2244548630
		{ &Z_Construct_UFunction_UPico_User_GetSmallImageUrl, "GetSmallImageUrl" }, // 3539984347
		{ &Z_Construct_UFunction_UPico_User_GetStoreRegion, "GetStoreRegion" }, // 2166010132
		{ &Z_Construct_UFunction_UPico_User_GetUserPresenceStatus, "GetUserPresenceStatus" }, // 1849830561
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_User_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @} */// end of BlueprintFunction\n" },
		{ "IncludePath", "Pico_User.h" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
		{ "ToolTip", "@} // end of BlueprintFunction" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_User_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_User>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_User_Statics::ClassParams = {
		&UPico_User::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPico_User_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_User_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_User()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_User_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_User, 3553059493);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_User>()
	{
		return UPico_User::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_User(Z_Construct_UClass_UPico_User, &UPico_User::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_User"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_User);
	DEFINE_FUNCTION(UPico_UserArray::execHasNextPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasNextPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_UserArray::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_UserArray::execGetNextPageParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNextPageParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_UserArray::execGetElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_User**)Z_Param__Result=P_THIS->GetElement(Z_Param_Index);
		P_NATIVE_END;
	}
	void UPico_UserArray::StaticRegisterNativesUPico_UserArray()
	{
		UClass* Class = UPico_UserArray::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetElement", &UPico_UserArray::execGetElement },
			{ "GetNextPageParam", &UPico_UserArray::execGetNextPageParam },
			{ "GetSize", &UPico_UserArray::execGetSize },
			{ "HasNextPage", &UPico_UserArray::execHasNextPage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_UserArray_GetElement_Statics
	{
		struct Pico_UserArray_eventGetElement_Parms
		{
			int32 Index;
			UPico_User* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_UserArray_GetElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_UserArray_eventGetElement_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_UserArray_GetElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_UserArray_eventGetElement_Parms, ReturnValue), Z_Construct_UClass_UPico_User_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_UserArray_GetElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_UserArray_GetElement_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_UserArray_GetElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_UserArray_GetElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User Array" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_UserArray_GetElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_UserArray, nullptr, "GetElement", nullptr, nullptr, sizeof(Pico_UserArray_eventGetElement_Parms), Z_Construct_UFunction_UPico_UserArray_GetElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserArray_GetElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_UserArray_GetElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserArray_GetElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_UserArray_GetElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_UserArray_GetElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_UserArray_GetNextPageParam_Statics
	{
		struct Pico_UserArray_eventGetNextPageParam_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_UserArray_GetNextPageParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_UserArray_eventGetNextPageParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_UserArray_GetNextPageParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_UserArray_GetNextPageParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_UserArray_GetNextPageParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User Array" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_UserArray_GetNextPageParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_UserArray, nullptr, "GetNextPageParam", nullptr, nullptr, sizeof(Pico_UserArray_eventGetNextPageParam_Parms), Z_Construct_UFunction_UPico_UserArray_GetNextPageParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserArray_GetNextPageParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_UserArray_GetNextPageParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserArray_GetNextPageParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_UserArray_GetNextPageParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_UserArray_GetNextPageParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_UserArray_GetSize_Statics
	{
		struct Pico_UserArray_eventGetSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_UserArray_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_UserArray_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_UserArray_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_UserArray_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_UserArray_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User Array" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_UserArray_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_UserArray, nullptr, "GetSize", nullptr, nullptr, sizeof(Pico_UserArray_eventGetSize_Parms), Z_Construct_UFunction_UPico_UserArray_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserArray_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_UserArray_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserArray_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_UserArray_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_UserArray_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_UserArray_HasNextPage_Statics
	{
		struct Pico_UserArray_eventHasNextPage_Parms
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
	void Z_Construct_UFunction_UPico_UserArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_UserArray_eventHasNextPage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_UserArray_HasNextPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_UserArray_eventHasNextPage_Parms), &Z_Construct_UFunction_UPico_UserArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_UserArray_HasNextPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_UserArray_HasNextPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_UserArray_HasNextPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User Array" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_UserArray_HasNextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_UserArray, nullptr, "HasNextPage", nullptr, nullptr, sizeof(Pico_UserArray_eventHasNextPage_Parms), Z_Construct_UFunction_UPico_UserArray_HasNextPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserArray_HasNextPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_UserArray_HasNextPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserArray_HasNextPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_UserArray_HasNextPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_UserArray_HasNextPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_UserArray_NoRegister()
	{
		return UPico_UserArray::StaticClass();
	}
	struct Z_Construct_UClass_UPico_UserArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_UserArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_UserArray_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_UserArray_GetElement, "GetElement" }, // 2176436144
		{ &Z_Construct_UFunction_UPico_UserArray_GetNextPageParam, "GetNextPageParam" }, // 2024090806
		{ &Z_Construct_UFunction_UPico_UserArray_GetSize, "GetSize" }, // 857192610
		{ &Z_Construct_UFunction_UPico_UserArray_HasNextPage, "HasNextPage" }, // 3974458961
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_UserArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_User.h" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_UserArray_Statics::NewProp_UserArray_Inner = { "UserArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPico_User_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_UserArray_Statics::NewProp_UserArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPico_UserArray_Statics::NewProp_UserArray = { "UserArray", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_UserArray, UserArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPico_UserArray_Statics::NewProp_UserArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_UserArray_Statics::NewProp_UserArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_UserArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_UserArray_Statics::NewProp_UserArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_UserArray_Statics::NewProp_UserArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_UserArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_UserArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_UserArray_Statics::ClassParams = {
		&UPico_UserArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_UserArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_UserArray_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_UserArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_UserArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_UserArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_UserArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_UserArray, 896366975);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_UserArray>()
	{
		return UPico_UserArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_UserArray(Z_Construct_UClass_UPico_UserArray, &UPico_UserArray::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_UserArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_UserArray);
	DEFINE_FUNCTION(UPico_UserAndRoom::execGetUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_User**)Z_Param__Result=P_THIS->GetUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_UserAndRoom::execGetRoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_Room**)Z_Param__Result=P_THIS->GetRoom();
		P_NATIVE_END;
	}
	void UPico_UserAndRoom::StaticRegisterNativesUPico_UserAndRoom()
	{
		UClass* Class = UPico_UserAndRoom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRoom", &UPico_UserAndRoom::execGetRoom },
			{ "GetUser", &UPico_UserAndRoom::execGetUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_UserAndRoom_GetRoom_Statics
	{
		struct Pico_UserAndRoom_eventGetRoom_Parms
		{
			UPico_Room* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_UserAndRoom_GetRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_UserAndRoom_eventGetRoom_Parms, ReturnValue), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_UserAndRoom_GetRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_UserAndRoom_GetRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_UserAndRoom_GetRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User And Room" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_UserAndRoom_GetRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_UserAndRoom, nullptr, "GetRoom", nullptr, nullptr, sizeof(Pico_UserAndRoom_eventGetRoom_Parms), Z_Construct_UFunction_UPico_UserAndRoom_GetRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserAndRoom_GetRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_UserAndRoom_GetRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserAndRoom_GetRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_UserAndRoom_GetRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_UserAndRoom_GetRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_UserAndRoom_GetUser_Statics
	{
		struct Pico_UserAndRoom_eventGetUser_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_UserAndRoom_GetUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_UserAndRoom_eventGetUser_Parms, ReturnValue), Z_Construct_UClass_UPico_User_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_UserAndRoom_GetUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_UserAndRoom_GetUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_UserAndRoom_GetUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User And Room" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_UserAndRoom_GetUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_UserAndRoom, nullptr, "GetUser", nullptr, nullptr, sizeof(Pico_UserAndRoom_eventGetUser_Parms), Z_Construct_UFunction_UPico_UserAndRoom_GetUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserAndRoom_GetUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_UserAndRoom_GetUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserAndRoom_GetUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_UserAndRoom_GetUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_UserAndRoom_GetUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_UserAndRoom_NoRegister()
	{
		return UPico_UserAndRoom::StaticClass();
	}
	struct Z_Construct_UClass_UPico_UserAndRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_UserAndRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_UserAndRoom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_UserAndRoom_GetRoom, "GetRoom" }, // 2722080336
		{ &Z_Construct_UFunction_UPico_UserAndRoom_GetUser, "GetUser" }, // 2273076165
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_UserAndRoom_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_User.h" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_UserAndRoom_Statics::NewProp_Room_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_UserAndRoom_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_UserAndRoom, Room), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPico_UserAndRoom_Statics::NewProp_Room_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_UserAndRoom_Statics::NewProp_Room_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_UserAndRoom_Statics::NewProp_User_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_UserAndRoom_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_UserAndRoom, User), Z_Construct_UClass_UPico_User_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPico_UserAndRoom_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_UserAndRoom_Statics::NewProp_User_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_UserAndRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_UserAndRoom_Statics::NewProp_Room,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_UserAndRoom_Statics::NewProp_User,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_UserAndRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_UserAndRoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_UserAndRoom_Statics::ClassParams = {
		&UPico_UserAndRoom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_UserAndRoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_UserAndRoom_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_UserAndRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_UserAndRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_UserAndRoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_UserAndRoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_UserAndRoom, 1138297545);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_UserAndRoom>()
	{
		return UPico_UserAndRoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_UserAndRoom(Z_Construct_UClass_UPico_UserAndRoom, &UPico_UserAndRoom::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_UserAndRoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_UserAndRoom);
	DEFINE_FUNCTION(UPico_UserAndRoomArray::execHasNextPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasNextPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_UserAndRoomArray::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_UserAndRoomArray::execGetNextPageParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNextPageParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_UserAndRoomArray::execGetElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_UserAndRoom**)Z_Param__Result=P_THIS->GetElement(Z_Param_Index);
		P_NATIVE_END;
	}
	void UPico_UserAndRoomArray::StaticRegisterNativesUPico_UserAndRoomArray()
	{
		UClass* Class = UPico_UserAndRoomArray::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetElement", &UPico_UserAndRoomArray::execGetElement },
			{ "GetNextPageParam", &UPico_UserAndRoomArray::execGetNextPageParam },
			{ "GetSize", &UPico_UserAndRoomArray::execGetSize },
			{ "HasNextPage", &UPico_UserAndRoomArray::execHasNextPage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_UserAndRoomArray_GetElement_Statics
	{
		struct Pico_UserAndRoomArray_eventGetElement_Parms
		{
			int32 Index;
			UPico_UserAndRoom* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_UserAndRoomArray_GetElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_UserAndRoomArray_eventGetElement_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_UserAndRoomArray_GetElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_UserAndRoomArray_eventGetElement_Parms, ReturnValue), Z_Construct_UClass_UPico_UserAndRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_UserAndRoomArray_GetElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_UserAndRoomArray_GetElement_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_UserAndRoomArray_GetElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_UserAndRoomArray_GetElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User And Room Array" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_UserAndRoomArray_GetElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_UserAndRoomArray, nullptr, "GetElement", nullptr, nullptr, sizeof(Pico_UserAndRoomArray_eventGetElement_Parms), Z_Construct_UFunction_UPico_UserAndRoomArray_GetElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserAndRoomArray_GetElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_UserAndRoomArray_GetElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserAndRoomArray_GetElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_UserAndRoomArray_GetElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_UserAndRoomArray_GetElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_UserAndRoomArray_GetNextPageParam_Statics
	{
		struct Pico_UserAndRoomArray_eventGetNextPageParam_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_UserAndRoomArray_GetNextPageParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_UserAndRoomArray_eventGetNextPageParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_UserAndRoomArray_GetNextPageParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_UserAndRoomArray_GetNextPageParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_UserAndRoomArray_GetNextPageParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User And Room Array" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_UserAndRoomArray_GetNextPageParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_UserAndRoomArray, nullptr, "GetNextPageParam", nullptr, nullptr, sizeof(Pico_UserAndRoomArray_eventGetNextPageParam_Parms), Z_Construct_UFunction_UPico_UserAndRoomArray_GetNextPageParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserAndRoomArray_GetNextPageParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_UserAndRoomArray_GetNextPageParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserAndRoomArray_GetNextPageParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_UserAndRoomArray_GetNextPageParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_UserAndRoomArray_GetNextPageParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_UserAndRoomArray_GetSize_Statics
	{
		struct Pico_UserAndRoomArray_eventGetSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_UserAndRoomArray_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_UserAndRoomArray_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_UserAndRoomArray_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_UserAndRoomArray_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_UserAndRoomArray_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User And Room Array" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_UserAndRoomArray_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_UserAndRoomArray, nullptr, "GetSize", nullptr, nullptr, sizeof(Pico_UserAndRoomArray_eventGetSize_Parms), Z_Construct_UFunction_UPico_UserAndRoomArray_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserAndRoomArray_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_UserAndRoomArray_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserAndRoomArray_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_UserAndRoomArray_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_UserAndRoomArray_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_UserAndRoomArray_HasNextPage_Statics
	{
		struct Pico_UserAndRoomArray_eventHasNextPage_Parms
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
	void Z_Construct_UFunction_UPico_UserAndRoomArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_UserAndRoomArray_eventHasNextPage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_UserAndRoomArray_HasNextPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_UserAndRoomArray_eventHasNextPage_Parms), &Z_Construct_UFunction_UPico_UserAndRoomArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_UserAndRoomArray_HasNextPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_UserAndRoomArray_HasNextPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_UserAndRoomArray_HasNextPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|User And Room Array" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_UserAndRoomArray_HasNextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_UserAndRoomArray, nullptr, "HasNextPage", nullptr, nullptr, sizeof(Pico_UserAndRoomArray_eventHasNextPage_Parms), Z_Construct_UFunction_UPico_UserAndRoomArray_HasNextPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserAndRoomArray_HasNextPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_UserAndRoomArray_HasNextPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_UserAndRoomArray_HasNextPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_UserAndRoomArray_HasNextPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_UserAndRoomArray_HasNextPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_UserAndRoomArray_NoRegister()
	{
		return UPico_UserAndRoomArray::StaticClass();
	}
	struct Z_Construct_UClass_UPico_UserAndRoomArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserAndRoomArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserAndRoomArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserAndRoomArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_UserAndRoomArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_UserAndRoomArray_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_UserAndRoomArray_GetElement, "GetElement" }, // 2696173033
		{ &Z_Construct_UFunction_UPico_UserAndRoomArray_GetNextPageParam, "GetNextPageParam" }, // 2692193874
		{ &Z_Construct_UFunction_UPico_UserAndRoomArray_GetSize, "GetSize" }, // 2529669160
		{ &Z_Construct_UFunction_UPico_UserAndRoomArray_HasNextPage, "HasNextPage" }, // 3311410077
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_UserAndRoomArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_User.h" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_UserAndRoomArray_Statics::NewProp_UserAndRoomArray_Inner = { "UserAndRoomArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPico_UserAndRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_UserAndRoomArray_Statics::NewProp_UserAndRoomArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPico_UserAndRoomArray_Statics::NewProp_UserAndRoomArray = { "UserAndRoomArray", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_UserAndRoomArray, UserAndRoomArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPico_UserAndRoomArray_Statics::NewProp_UserAndRoomArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_UserAndRoomArray_Statics::NewProp_UserAndRoomArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_UserAndRoomArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_UserAndRoomArray_Statics::NewProp_UserAndRoomArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_UserAndRoomArray_Statics::NewProp_UserAndRoomArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_UserAndRoomArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_UserAndRoomArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_UserAndRoomArray_Statics::ClassParams = {
		&UPico_UserAndRoomArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_UserAndRoomArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_UserAndRoomArray_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_UserAndRoomArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_UserAndRoomArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_UserAndRoomArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_UserAndRoomArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_UserAndRoomArray, 1150785201);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_UserAndRoomArray>()
	{
		return UPico_UserAndRoomArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_UserAndRoomArray(Z_Construct_UClass_UPico_UserAndRoomArray, &UPico_UserAndRoomArray::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_UserAndRoomArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_UserAndRoomArray);
	DEFINE_FUNCTION(UPico_PermissionResult::execGetUserID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUserID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_PermissionResult::execGetAccessToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccessToken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_PermissionResult::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_PermissionResult::execGetAuthorizedPermission)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAuthorizedPermission(Z_Param_Index);
		P_NATIVE_END;
	}
	void UPico_PermissionResult::StaticRegisterNativesUPico_PermissionResult()
	{
		UClass* Class = UPico_PermissionResult::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAccessToken", &UPico_PermissionResult::execGetAccessToken },
			{ "GetAuthorizedPermission", &UPico_PermissionResult::execGetAuthorizedPermission },
			{ "GetSize", &UPico_PermissionResult::execGetSize },
			{ "GetUserID", &UPico_PermissionResult::execGetUserID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_PermissionResult_GetAccessToken_Statics
	{
		struct Pico_PermissionResult_eventGetAccessToken_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_PermissionResult_GetAccessToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_PermissionResult_eventGetAccessToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_PermissionResult_GetAccessToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_PermissionResult_GetAccessToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_PermissionResult_GetAccessToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|Permission" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_PermissionResult_GetAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_PermissionResult, nullptr, "GetAccessToken", nullptr, nullptr, sizeof(Pico_PermissionResult_eventGetAccessToken_Parms), Z_Construct_UFunction_UPico_PermissionResult_GetAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_PermissionResult_GetAccessToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_PermissionResult_GetAccessToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_PermissionResult_GetAccessToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_PermissionResult_GetAccessToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_PermissionResult_GetAccessToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_PermissionResult_GetAuthorizedPermission_Statics
	{
		struct Pico_PermissionResult_eventGetAuthorizedPermission_Parms
		{
			int32 Index;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_PermissionResult_GetAuthorizedPermission_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_PermissionResult_eventGetAuthorizedPermission_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_PermissionResult_GetAuthorizedPermission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_PermissionResult_eventGetAuthorizedPermission_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_PermissionResult_GetAuthorizedPermission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_PermissionResult_GetAuthorizedPermission_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_PermissionResult_GetAuthorizedPermission_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_PermissionResult_GetAuthorizedPermission_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|Permission" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_PermissionResult_GetAuthorizedPermission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_PermissionResult, nullptr, "GetAuthorizedPermission", nullptr, nullptr, sizeof(Pico_PermissionResult_eventGetAuthorizedPermission_Parms), Z_Construct_UFunction_UPico_PermissionResult_GetAuthorizedPermission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_PermissionResult_GetAuthorizedPermission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_PermissionResult_GetAuthorizedPermission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_PermissionResult_GetAuthorizedPermission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_PermissionResult_GetAuthorizedPermission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_PermissionResult_GetAuthorizedPermission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_PermissionResult_GetSize_Statics
	{
		struct Pico_PermissionResult_eventGetSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_PermissionResult_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_PermissionResult_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_PermissionResult_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_PermissionResult_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_PermissionResult_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|Permission" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_PermissionResult_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_PermissionResult, nullptr, "GetSize", nullptr, nullptr, sizeof(Pico_PermissionResult_eventGetSize_Parms), Z_Construct_UFunction_UPico_PermissionResult_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_PermissionResult_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_PermissionResult_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_PermissionResult_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_PermissionResult_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_PermissionResult_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_PermissionResult_GetUserID_Statics
	{
		struct Pico_PermissionResult_eventGetUserID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_PermissionResult_GetUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_PermissionResult_eventGetUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_PermissionResult_GetUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_PermissionResult_GetUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_PermissionResult_GetUserID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|User|Permission" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_PermissionResult_GetUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_PermissionResult, nullptr, "GetUserID", nullptr, nullptr, sizeof(Pico_PermissionResult_eventGetUserID_Parms), Z_Construct_UFunction_UPico_PermissionResult_GetUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_PermissionResult_GetUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_PermissionResult_GetUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_PermissionResult_GetUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_PermissionResult_GetUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_PermissionResult_GetUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_PermissionResult_NoRegister()
	{
		return UPico_PermissionResult::StaticClass();
	}
	struct Z_Construct_UClass_UPico_PermissionResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthorizedPermissions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthorizedPermissions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AuthorizedPermissions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_PermissionResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_PermissionResult_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_PermissionResult_GetAccessToken, "GetAccessToken" }, // 402147532
		{ &Z_Construct_UFunction_UPico_PermissionResult_GetAuthorizedPermission, "GetAuthorizedPermission" }, // 1134890136
		{ &Z_Construct_UFunction_UPico_PermissionResult_GetSize, "GetSize" }, // 22352573
		{ &Z_Construct_UFunction_UPico_PermissionResult_GetUserID, "GetUserID" }, // 2896414498
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_PermissionResult_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_User.h" },
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPico_PermissionResult_Statics::NewProp_AuthorizedPermissions_Inner = { "AuthorizedPermissions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_PermissionResult_Statics::NewProp_AuthorizedPermissions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_User.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPico_PermissionResult_Statics::NewProp_AuthorizedPermissions = { "AuthorizedPermissions", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_PermissionResult, AuthorizedPermissions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPico_PermissionResult_Statics::NewProp_AuthorizedPermissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_PermissionResult_Statics::NewProp_AuthorizedPermissions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_PermissionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_PermissionResult_Statics::NewProp_AuthorizedPermissions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_PermissionResult_Statics::NewProp_AuthorizedPermissions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_PermissionResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_PermissionResult>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_PermissionResult_Statics::ClassParams = {
		&UPico_PermissionResult::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_PermissionResult_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_PermissionResult_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_PermissionResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_PermissionResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_PermissionResult()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_PermissionResult_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_PermissionResult, 1293906881);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_PermissionResult>()
	{
		return UPico_PermissionResult::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_PermissionResult(Z_Construct_UClass_UPico_PermissionResult, &UPico_PermissionResult::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_PermissionResult"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_PermissionResult);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
