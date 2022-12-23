// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERoomType : uint8;
enum class ERoomJoinabilit : uint8;
enum class ERoomJoinPolicy : uint8;
class UPico_UserArray;
class UPico_User;
class UPico_DataStore;
#ifdef ONLINESUBSYSTEMPICO_Pico_Room_generated_h
#error "Pico_Room.generated.h already included, missing '#pragma once' in Pico_Room.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_Room_generated_h

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRoomType); \
	DECLARE_FUNCTION(execGetMaxUsers); \
	DECLARE_FUNCTION(execGetJoinability); \
	DECLARE_FUNCTION(execGetJoinPolicy); \
	DECLARE_FUNCTION(execGetIsMembershipLocked); \
	DECLARE_FUNCTION(execGetRoomID); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetUsers); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetDataStore);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRoomType); \
	DECLARE_FUNCTION(execGetMaxUsers); \
	DECLARE_FUNCTION(execGetJoinability); \
	DECLARE_FUNCTION(execGetJoinPolicy); \
	DECLARE_FUNCTION(execGetIsMembershipLocked); \
	DECLARE_FUNCTION(execGetRoomID); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetUsers); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetDataStore);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_Room(); \
	friend struct Z_Construct_UClass_UPico_Room_Statics; \
public: \
	DECLARE_CLASS(UPico_Room, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_Room)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPico_Room(); \
	friend struct Z_Construct_UClass_UPico_Room_Statics; \
public: \
	DECLARE_CLASS(UPico_Room, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_Room)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_Room(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_Room) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_Room); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_Room); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_Room(UPico_Room&&); \
	NO_API UPico_Room(const UPico_Room&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_Room(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_Room(UPico_Room&&); \
	NO_API UPico_Room(const UPico_Room&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_Room); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_Room); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_Room)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DataStore() { return STRUCT_OFFSET(UPico_Room, DataStore); } \
	FORCEINLINE static uint32 __PPO__Owner() { return STRUCT_OFFSET(UPico_Room, Owner); } \
	FORCEINLINE static uint32 __PPO__Users() { return STRUCT_OFFSET(UPico_Room, Users); }


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_20_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_Room>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
