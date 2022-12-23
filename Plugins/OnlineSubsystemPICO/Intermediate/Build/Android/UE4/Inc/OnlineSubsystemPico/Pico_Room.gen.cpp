// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Public/Pico_Room.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePico_Room() {}
// Cross Module References
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_Room_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_Room();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_DataStore_NoRegister();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinabilit();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinPolicy();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_User_NoRegister();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ERoomType();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_UserArray_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPico_Room::execGetRoomType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERoomType*)Z_Param__Result=P_THIS->GetRoomType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetMaxUsers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxUsers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetJoinability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERoomJoinabilit*)Z_Param__Result=P_THIS->GetJoinability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetJoinPolicy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERoomJoinPolicy*)Z_Param__Result=P_THIS->GetJoinPolicy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetIsMembershipLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsMembershipLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetRoomID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRoomID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetUsers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_UserArray**)Z_Param__Result=P_THIS->GetUsers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_User**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetDataStore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_DataStore**)Z_Param__Result=P_THIS->GetDataStore();
		P_NATIVE_END;
	}
	void UPico_Room::StaticRegisterNativesUPico_Room()
	{
		UClass* Class = UPico_Room::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataStore", &UPico_Room::execGetDataStore },
			{ "GetDescription", &UPico_Room::execGetDescription },
			{ "GetIsMembershipLocked", &UPico_Room::execGetIsMembershipLocked },
			{ "GetJoinability", &UPico_Room::execGetJoinability },
			{ "GetJoinPolicy", &UPico_Room::execGetJoinPolicy },
			{ "GetMaxUsers", &UPico_Room::execGetMaxUsers },
			{ "GetOwner", &UPico_Room::execGetOwner },
			{ "GetRoomID", &UPico_Room::execGetRoomID },
			{ "GetRoomType", &UPico_Room::execGetRoomType },
			{ "GetUsers", &UPico_Room::execGetUsers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_Room_GetDataStore_Statics
	{
		struct Pico_Room_eventGetDataStore_Parms
		{
			UPico_DataStore* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetDataStore_Parms, ReturnValue), Z_Construct_UClass_UPico_DataStore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetDataStore", nullptr, nullptr, sizeof(Pico_Room_eventGetDataStore_Parms), Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetDataStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetDescription_Statics
	{
		struct Pico_Room_eventGetDescription_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_Room_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetDescription", nullptr, nullptr, sizeof(Pico_Room_eventGetDescription_Parms), Z_Construct_UFunction_UPico_Room_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics
	{
		struct Pico_Room_eventGetIsMembershipLocked_Parms
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
	void Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_Room_eventGetIsMembershipLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_Room_eventGetIsMembershipLocked_Parms), &Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetIsMembershipLocked", nullptr, nullptr, sizeof(Pico_Room_eventGetIsMembershipLocked_Parms), Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetJoinability_Statics
	{
		struct Pico_Room_eventGetJoinability_Parms
		{
			ERoomJoinabilit ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetJoinability_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinabilit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetJoinability", nullptr, nullptr, sizeof(Pico_Room_eventGetJoinability_Parms), Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetJoinability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics
	{
		struct Pico_Room_eventGetJoinPolicy_Parms
		{
			ERoomJoinPolicy ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetJoinPolicy_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinPolicy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetJoinPolicy", nullptr, nullptr, sizeof(Pico_Room_eventGetJoinPolicy_Parms), Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetJoinPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics
	{
		struct Pico_Room_eventGetMaxUsers_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetMaxUsers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetMaxUsers", nullptr, nullptr, sizeof(Pico_Room_eventGetMaxUsers_Parms), Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetMaxUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetOwner_Statics
	{
		struct Pico_Room_eventGetOwner_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_Room_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_UPico_User_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetOwner", nullptr, nullptr, sizeof(Pico_Room_eventGetOwner_Parms), Z_Construct_UFunction_UPico_Room_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetRoomID_Statics
	{
		struct Pico_Room_eventGetRoomID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetRoomID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetRoomID", nullptr, nullptr, sizeof(Pico_Room_eventGetRoomID_Parms), Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetRoomID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetRoomType_Statics
	{
		struct Pico_Room_eventGetRoomType_Parms
		{
			ERoomType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetRoomType_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemPico_ERoomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetRoomType", nullptr, nullptr, sizeof(Pico_Room_eventGetRoomType_Parms), Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetRoomType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetUsers_Statics
	{
		struct Pico_Room_eventGetUsers_Parms
		{
			UPico_UserArray* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_Room_GetUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetUsers_Parms, ReturnValue), Z_Construct_UClass_UPico_UserArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetUsers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetUsers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetUsers", nullptr, nullptr, sizeof(Pico_Room_eventGetUsers_Parms), Z_Construct_UFunction_UPico_Room_GetUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_Room_NoRegister()
	{
		return UPico_Room::StaticClass();
	}
	struct Z_Construct_UClass_UPico_Room_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataStore_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Users_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Users;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_Room_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_Room_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_Room_GetDataStore, "GetDataStore" }, // 2704671846
		{ &Z_Construct_UFunction_UPico_Room_GetDescription, "GetDescription" }, // 1457725343
		{ &Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked, "GetIsMembershipLocked" }, // 396826644
		{ &Z_Construct_UFunction_UPico_Room_GetJoinability, "GetJoinability" }, // 1419944478
		{ &Z_Construct_UFunction_UPico_Room_GetJoinPolicy, "GetJoinPolicy" }, // 395992368
		{ &Z_Construct_UFunction_UPico_Room_GetMaxUsers, "GetMaxUsers" }, // 1846509346
		{ &Z_Construct_UFunction_UPico_Room_GetOwner, "GetOwner" }, // 1561781454
		{ &Z_Construct_UFunction_UPico_Room_GetRoomID, "GetRoomID" }, // 1996526481
		{ &Z_Construct_UFunction_UPico_Room_GetRoomType, "GetRoomType" }, // 520245513
		{ &Z_Construct_UFunction_UPico_Room_GetUsers, "GetUsers" }, // 1235716909
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_Room_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pico_Room.h" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_Room_Statics::NewProp_DataStore_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_Room_Statics::NewProp_DataStore = { "DataStore", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_Room, DataStore), Z_Construct_UClass_UPico_DataStore_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPico_Room_Statics::NewProp_DataStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_Room_Statics::NewProp_DataStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_Room_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_Room_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_Room, Owner), Z_Construct_UClass_UPico_User_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPico_Room_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_Room_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_Room_Statics::NewProp_Users_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_Room_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_Room, Users), Z_Construct_UClass_UPico_UserArray_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPico_Room_Statics::NewProp_Users_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_Room_Statics::NewProp_Users_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_Room_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_Room_Statics::NewProp_DataStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_Room_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_Room_Statics::NewProp_Users,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_Room_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_Room>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_Room_Statics::ClassParams = {
		&UPico_Room::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_Room_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_Room_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_Room_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_Room_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_Room()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_Room_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_Room, 472281658);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_Room>()
	{
		return UPico_Room::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_Room(Z_Construct_UClass_UPico_Room, &UPico_Room::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_Room"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_Room);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
