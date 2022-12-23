// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPico_PermissionResult;
class UPico_User;
class UPico_UserArray;
class UPico_UserAndRoomArray;
class UObject;
enum class EUserGender : uint8;
enum class EUserPresenceStatus : uint8;
class UPico_Room;
class UPico_UserAndRoom;
#ifdef ONLINESUBSYSTEMPICO_Pico_User_generated_h
#error "Pico_User.generated.h already included, missing '#pragma once' in Pico_User.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_User_generated_h

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_31_DELEGATE \
struct _Script_OnlineSubsystemPico_eventLaunchFriendRequestResult_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	bool bDidCancel; \
	bool bDidSendRequest; \
}; \
static inline void FLaunchFriendRequestResult_DelegateWrapper(const FScriptDelegate& LaunchFriendRequestResult, bool bIsError, const FString& ErrorMessage, bool bDidCancel, bool bDidSendRequest) \
{ \
	_Script_OnlineSubsystemPico_eventLaunchFriendRequestResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.bDidCancel=bDidCancel ? true : false; \
	Parms.bDidSendRequest=bDidSendRequest ? true : false; \
	LaunchFriendRequestResult.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_30_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetAccessTokenResult_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	FString AccessToken; \
}; \
static inline void FGetAccessTokenResult_DelegateWrapper(const FScriptDelegate& GetAccessTokenResult, bool bIsError, const FString& ErrorMessage, const FString& AccessToken) \
{ \
	_Script_OnlineSubsystemPico_eventGetAccessTokenResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.AccessToken=AccessToken; \
	GetAccessTokenResult.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_29_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetPermissionResult_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_PermissionResult* PermissionResult; \
}; \
static inline void FGetPermissionResult_DelegateWrapper(const FScriptDelegate& GetPermissionResult, bool bIsError, const FString& ErrorMessage, UPico_PermissionResult* PermissionResult) \
{ \
	_Script_OnlineSubsystemPico_eventGetPermissionResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.PermissionResult=PermissionResult; \
	GetPermissionResult.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_28_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetUserInfo_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_User* User; \
}; \
static inline void FGetUserInfo_DelegateWrapper(const FScriptDelegate& GetUserInfo, bool bIsError, const FString& ErrorMessage, UPico_User* User) \
{ \
	_Script_OnlineSubsystemPico_eventGetUserInfo_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.User=User; \
	GetUserInfo.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_27_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetLoginUser_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_User* User; \
}; \
static inline void FGetLoginUser_DelegateWrapper(const FScriptDelegate& GetLoginUser, bool bIsError, const FString& ErrorMessage, UPico_User* User) \
{ \
	_Script_OnlineSubsystemPico_eventGetLoginUser_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.User=User; \
	GetLoginUser.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_26_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetNextUserPage_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_UserArray* UserArray; \
}; \
static inline void FGetNextUserPage_DelegateWrapper(const FScriptDelegate& GetNextUserPage, bool bIsError, const FString& ErrorMessage, UPico_UserArray* UserArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetNextUserPage_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.UserArray=UserArray; \
	GetNextUserPage.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_25_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetLoggedInUserFriends_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_UserArray* UserArray; \
}; \
static inline void FGetLoggedInUserFriends_DelegateWrapper(const FScriptDelegate& GetLoggedInUserFriends, bool bIsError, const FString& ErrorMessage, UPico_UserArray* UserArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetLoggedInUserFriends_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.UserArray=UserArray; \
	GetLoggedInUserFriends.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_24_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetNextUserAndRoomArrayPage_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_UserAndRoomArray* UserAndRoomArray; \
}; \
static inline void FGetNextUserAndRoomArrayPage_DelegateWrapper(const FScriptDelegate& GetNextUserAndRoomArrayPage, bool bIsError, const FString& ErrorMessage, UPico_UserAndRoomArray* UserAndRoomArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetNextUserAndRoomArrayPage_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.UserAndRoomArray=UserAndRoomArray; \
	GetNextUserAndRoomArrayPage.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_23_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetLoggedInUserFriendsAndRooms_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_UserAndRoomArray* UserAndRoomArray; \
}; \
static inline void FGetLoggedInUserFriendsAndRooms_DelegateWrapper(const FScriptDelegate& GetLoggedInUserFriendsAndRooms, bool bIsError, const FString& ErrorMessage, UPico_UserAndRoomArray* UserAndRoomArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetLoggedInUserFriendsAndRooms_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.UserAndRoomArray=UserAndRoomArray; \
	GetLoggedInUserFriendsAndRooms.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execLaunchFriendRequestFlow); \
	DECLARE_FUNCTION(execRequestUserPermissions); \
	DECLARE_FUNCTION(execGetAuthorizePermissions); \
	DECLARE_FUNCTION(execGetPicoUserInfo); \
	DECLARE_FUNCTION(execGetLoginUser); \
	DECLARE_FUNCTION(execPicoGetNextUserPage); \
	DECLARE_FUNCTION(execPicoGetUserFriends); \
	DECLARE_FUNCTION(execPicoGetNextUserAndRoomArrayPage); \
	DECLARE_FUNCTION(execPicoGetLoggedInUserAndRoom);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execLaunchFriendRequestFlow); \
	DECLARE_FUNCTION(execRequestUserPermissions); \
	DECLARE_FUNCTION(execGetAuthorizePermissions); \
	DECLARE_FUNCTION(execGetPicoUserInfo); \
	DECLARE_FUNCTION(execGetLoginUser); \
	DECLARE_FUNCTION(execPicoGetNextUserPage); \
	DECLARE_FUNCTION(execPicoGetUserFriends); \
	DECLARE_FUNCTION(execPicoGetNextUserAndRoomArrayPage); \
	DECLARE_FUNCTION(execPicoGetLoggedInUserAndRoom);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoUserFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoUserFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoUserFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoUserFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoUserFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoUserFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoUserFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoUserFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoUserFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoUserFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoUserFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoUserFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoUserFunction(UOnlinePicoUserFunction&&); \
	NO_API UOnlinePicoUserFunction(const UOnlinePicoUserFunction&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoUserFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoUserFunction(UOnlinePicoUserFunction&&); \
	NO_API UOnlinePicoUserFunction(const UOnlinePicoUserFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoUserFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoUserFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoUserFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_189_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_192_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoUserFunction>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStoreRegion); \
	DECLARE_FUNCTION(execGetPresenceExtra); \
	DECLARE_FUNCTION(execGetPresenceMatchSessionId); \
	DECLARE_FUNCTION(execGetPresenceLobbySessionId); \
	DECLARE_FUNCTION(execGetPresenceDestinationApiName); \
	DECLARE_FUNCTION(execGetPresenceDeeplinkMessage); \
	DECLARE_FUNCTION(execGetPresence); \
	DECLARE_FUNCTION(execGetGender); \
	DECLARE_FUNCTION(execGetUserPresenceStatus); \
	DECLARE_FUNCTION(execGetPresencePackage); \
	DECLARE_FUNCTION(execGetSmallImageUrl); \
	DECLARE_FUNCTION(execGetInviteToken); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetImageURL); \
	DECLARE_FUNCTION(execGetDisplayName);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStoreRegion); \
	DECLARE_FUNCTION(execGetPresenceExtra); \
	DECLARE_FUNCTION(execGetPresenceMatchSessionId); \
	DECLARE_FUNCTION(execGetPresenceLobbySessionId); \
	DECLARE_FUNCTION(execGetPresenceDestinationApiName); \
	DECLARE_FUNCTION(execGetPresenceDeeplinkMessage); \
	DECLARE_FUNCTION(execGetPresence); \
	DECLARE_FUNCTION(execGetGender); \
	DECLARE_FUNCTION(execGetUserPresenceStatus); \
	DECLARE_FUNCTION(execGetPresencePackage); \
	DECLARE_FUNCTION(execGetSmallImageUrl); \
	DECLARE_FUNCTION(execGetInviteToken); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetImageURL); \
	DECLARE_FUNCTION(execGetDisplayName);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_User(); \
	friend struct Z_Construct_UClass_UPico_User_Statics; \
public: \
	DECLARE_CLASS(UPico_User, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_User)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_INCLASS \
private: \
	static void StaticRegisterNativesUPico_User(); \
	friend struct Z_Construct_UClass_UPico_User_Statics; \
public: \
	DECLARE_CLASS(UPico_User, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_User)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_User(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_User) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_User); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_User); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_User(UPico_User&&); \
	NO_API UPico_User(const UPico_User&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_User(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_User(UPico_User&&); \
	NO_API UPico_User(const UPico_User&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_User); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_User); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_User)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_330_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_333_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_User>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_UserArray(); \
	friend struct Z_Construct_UClass_UPico_UserArray_Statics; \
public: \
	DECLARE_CLASS(UPico_UserArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_UserArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_INCLASS \
private: \
	static void StaticRegisterNativesUPico_UserArray(); \
	friend struct Z_Construct_UClass_UPico_UserArray_Statics; \
public: \
	DECLARE_CLASS(UPico_UserArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_UserArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_UserArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_UserArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_UserArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_UserArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_UserArray(UPico_UserArray&&); \
	NO_API UPico_UserArray(const UPico_UserArray&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_UserArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_UserArray(UPico_UserArray&&); \
	NO_API UPico_UserArray(const UPico_UserArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_UserArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_UserArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_UserArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UserArray() { return STRUCT_OFFSET(UPico_UserArray, UserArray); }


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_402_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_406_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_UserArray>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUser); \
	DECLARE_FUNCTION(execGetRoom);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUser); \
	DECLARE_FUNCTION(execGetRoom);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_UserAndRoom(); \
	friend struct Z_Construct_UClass_UPico_UserAndRoom_Statics; \
public: \
	DECLARE_CLASS(UPico_UserAndRoom, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_UserAndRoom)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_INCLASS \
private: \
	static void StaticRegisterNativesUPico_UserAndRoom(); \
	friend struct Z_Construct_UClass_UPico_UserAndRoom_Statics; \
public: \
	DECLARE_CLASS(UPico_UserAndRoom, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_UserAndRoom)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_UserAndRoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_UserAndRoom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_UserAndRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_UserAndRoom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_UserAndRoom(UPico_UserAndRoom&&); \
	NO_API UPico_UserAndRoom(const UPico_UserAndRoom&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_UserAndRoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_UserAndRoom(UPico_UserAndRoom&&); \
	NO_API UPico_UserAndRoom(const UPico_UserAndRoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_UserAndRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_UserAndRoom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_UserAndRoom)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Room() { return STRUCT_OFFSET(UPico_UserAndRoom, Room); } \
	FORCEINLINE static uint32 __PPO__User() { return STRUCT_OFFSET(UPico_UserAndRoom, User); }


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_435_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_439_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_UserAndRoom>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_UserAndRoomArray(); \
	friend struct Z_Construct_UClass_UPico_UserAndRoomArray_Statics; \
public: \
	DECLARE_CLASS(UPico_UserAndRoomArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_UserAndRoomArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_INCLASS \
private: \
	static void StaticRegisterNativesUPico_UserAndRoomArray(); \
	friend struct Z_Construct_UClass_UPico_UserAndRoomArray_Statics; \
public: \
	DECLARE_CLASS(UPico_UserAndRoomArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_UserAndRoomArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_UserAndRoomArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_UserAndRoomArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_UserAndRoomArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_UserAndRoomArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_UserAndRoomArray(UPico_UserAndRoomArray&&); \
	NO_API UPico_UserAndRoomArray(const UPico_UserAndRoomArray&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_UserAndRoomArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_UserAndRoomArray(UPico_UserAndRoomArray&&); \
	NO_API UPico_UserAndRoomArray(const UPico_UserAndRoomArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_UserAndRoomArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_UserAndRoomArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_UserAndRoomArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UserAndRoomArray() { return STRUCT_OFFSET(UPico_UserAndRoomArray, UserAndRoomArray); }


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_456_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_460_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_UserAndRoomArray>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUserID); \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetAuthorizedPermission);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUserID); \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetAuthorizedPermission);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_PermissionResult(); \
	friend struct Z_Construct_UClass_UPico_PermissionResult_Statics; \
public: \
	DECLARE_CLASS(UPico_PermissionResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_PermissionResult)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_INCLASS \
private: \
	static void StaticRegisterNativesUPico_PermissionResult(); \
	friend struct Z_Construct_UClass_UPico_PermissionResult_Statics; \
public: \
	DECLARE_CLASS(UPico_PermissionResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_PermissionResult)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_PermissionResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_PermissionResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_PermissionResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_PermissionResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_PermissionResult(UPico_PermissionResult&&); \
	NO_API UPico_PermissionResult(const UPico_PermissionResult&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_PermissionResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_PermissionResult(UPico_PermissionResult&&); \
	NO_API UPico_PermissionResult(const UPico_PermissionResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_PermissionResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_PermissionResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_PermissionResult)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AuthorizedPermissions() { return STRUCT_OFFSET(UPico_PermissionResult, AuthorizedPermissions); }


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_484_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_487_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_PermissionResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
