// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOnlineSubsystemPicoManager;
struct FPicoOnlineLeaderboardWrite;
struct FPicoOnlineLeaderboardRead;
enum class ELaunchResult : uint8;
struct FLaunchDetails;
enum class EShareMediaType : uint8;
enum class EShareAppTyp : uint8;
struct FPicoDestination;
struct FPicoApplicationInvite;
struct FPicoUserInfo;
struct FPicoOnlineSessionSettings;
struct FPicoOnlineSession;
struct FPicoNamedOnlineSession;
enum class EOnlineSessionStatePicoType : uint8;
struct FPicoOnlineSessionSearchResult;
struct FPicoOnlineSessionSearch;
enum class ERtcMediaStreamType : uint8;
enum class ERtcStreamIndex : uint8;
enum class ERtcSyncInfoStreamType : uint8;
enum class ERtcEarMonitorMode : uint8;
enum class ERtcAudioScenarioType : uint8;
enum class ERtcAudioPlaybackDevice : uint8;
enum class ERtcPauseResumeMediaType : uint8;
enum class ERtcMuteState : uint8;
enum class ERtcRoomProfileType : uint8;
enum class ERtcEngineInitResult : uint8;
class UPico_User;
#ifdef ONLINESUBSYSTEMPICO_OnlinePicoFunctionLibrary_generated_h
#error "OnlinePicoFunctionLibrary.generated.h already included, missing '#pragma once' in OnlinePicoFunctionLibrary.h"
#endif
#define ONLINESUBSYSTEMPICO_OnlinePicoFunctionLibrary_generated_h

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_18_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlinePicoVerifyAppDelegate_Parms \
{ \
	int32 code; \
}; \
static inline void FOnlinePicoVerifyAppDelegate_DelegateWrapper(const FScriptDelegate& OnlinePicoVerifyAppDelegate, int32 const& code) \
{ \
	_Script_OnlineSubsystemPico_eventOnlinePicoVerifyAppDelegate_Parms Parms; \
	Parms.code=code; \
	OnlinePicoVerifyAppDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPicoGetDeviceSN); \
	DECLARE_FUNCTION(execPicoEntitlementVerifyCheck); \
	DECLARE_FUNCTION(execPicoEntitlementVerifyAppDelegate); \
	DECLARE_FUNCTION(execFindFileOrForder); \
	DECLARE_FUNCTION(execGetOnlineSubsystemPicoManager); \
	DECLARE_FUNCTION(execWriteLeaderboards); \
	DECLARE_FUNCTION(execReadLeaderboardsForFriends); \
	DECLARE_FUNCTION(execReadLeaderboards); \
	DECLARE_FUNCTION(execLogDeeplinkResult); \
	DECLARE_FUNCTION(execGetLaunchDetails); \
	DECLARE_FUNCTION(execLaunchOtherAppByAppId); \
	DECLARE_FUNCTION(execLaunchOtherAppByPresence); \
	DECLARE_FUNCTION(execGetVersion); \
	DECLARE_FUNCTION(execLaunchOtherApp); \
	DECLARE_FUNCTION(execShareMedia); \
	DECLARE_FUNCTION(execLaunchInvitePanel); \
	DECLARE_FUNCTION(execPresenceGetDestinationsList); \
	DECLARE_FUNCTION(execPresenceGetDestinations); \
	DECLARE_FUNCTION(execGetSendInvitesList); \
	DECLARE_FUNCTION(execPresenceSendInvites); \
	DECLARE_FUNCTION(execPresenceReadSendInvites); \
	DECLARE_FUNCTION(execPresenceSetExtra); \
	DECLARE_FUNCTION(execPresenceSetMatchSession); \
	DECLARE_FUNCTION(execPresenceSetLobbySession); \
	DECLARE_FUNCTION(execPresenceSetIsJoinable); \
	DECLARE_FUNCTION(execPresenceSetDestination); \
	DECLARE_FUNCTION(execPresenceSet); \
	DECLARE_FUNCTION(execGetInvitableFriendList); \
	DECLARE_FUNCTION(execReadInvitableUser); \
	DECLARE_FUNCTION(execPresenceClear); \
	DECLARE_FUNCTION(execSendSessionInviteToFriend); \
	DECLARE_FUNCTION(execGetSessionSettings); \
	DECLARE_FUNCTION(execAddNamedSession); \
	DECLARE_FUNCTION(execAddNamedSessionBySettings); \
	DECLARE_FUNCTION(execGetNamedSession); \
	DECLARE_FUNCTION(execGetSessionState); \
	DECLARE_FUNCTION(execDumpSessionState); \
	DECLARE_FUNCTION(execJoinSession); \
	DECLARE_FUNCTION(execFindSessionById); \
	DECLARE_FUNCTION(execFindSessions); \
	DECLARE_FUNCTION(execCancelMatchmaking); \
	DECLARE_FUNCTION(execStartMatchmaking); \
	DECLARE_FUNCTION(execIsPlayerInSession); \
	DECLARE_FUNCTION(execDestroySession); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execUpdateSession); \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execCreateSession); \
	DECLARE_FUNCTION(execRtcSendUserMessage); \
	DECLARE_FUNCTION(execRtcSendUserBinaryMessage); \
	DECLARE_FUNCTION(execRtcSendRoomMessage); \
	DECLARE_FUNCTION(execRtcSendRoomBinaryMessage); \
	DECLARE_FUNCTION(execRtcRoomUnsubscribeStream); \
	DECLARE_FUNCTION(execRtcRoomUnPublishStream); \
	DECLARE_FUNCTION(execRtcRoomSubscribeStream); \
	DECLARE_FUNCTION(execRtcRoomSetRemoteAudioPlaybackVolume); \
	DECLARE_FUNCTION(execRtcRoomPublishStream); \
	DECLARE_FUNCTION(execRtcSendStreamSyncInfo); \
	DECLARE_FUNCTION(execRtcUpdateToken); \
	DECLARE_FUNCTION(execRtcStopAudioCapture); \
	DECLARE_FUNCTION(execRtcStartAudioCapture); \
	DECLARE_FUNCTION(execRtcSetPlaybackVolume); \
	DECLARE_FUNCTION(execRtcSetEarMonitorVolume); \
	DECLARE_FUNCTION(execRtcSetEarMonitorMode); \
	DECLARE_FUNCTION(execRtcSetCaptureVolume); \
	DECLARE_FUNCTION(execRtcSetAudioScenario); \
	DECLARE_FUNCTION(execRtcSetAudioPlaybackDevice); \
	DECLARE_FUNCTION(execRtcRoomResumeAllSubscribedStream); \
	DECLARE_FUNCTION(execRtcRoomPauseAllSubscribedStream); \
	DECLARE_FUNCTION(execRtcUnPublishRoom); \
	DECLARE_FUNCTION(execRtcPublishRoom); \
	DECLARE_FUNCTION(execRtcMuteLocalAudio); \
	DECLARE_FUNCTION(execRtcLeaveRoom); \
	DECLARE_FUNCTION(execRtcEnableAudioPropertiesReport); \
	DECLARE_FUNCTION(execRtcDestroyRoom); \
	DECLARE_FUNCTION(execPicoRtcJoinRoom); \
	DECLARE_FUNCTION(execPicoGetRtcEngineInit); \
	DECLARE_FUNCTION(execPicoRtcGetToken); \
	DECLARE_FUNCTION(execPicoGetFriend); \
	DECLARE_FUNCTION(execPicoGetFriendList); \
	DECLARE_FUNCTION(execPicoReadFriendList); \
	DECLARE_FUNCTION(execGetLoginPicoUser); \
	DECLARE_FUNCTION(execPicoGetNickName); \
	DECLARE_FUNCTION(execPicoLogin);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPicoGetDeviceSN); \
	DECLARE_FUNCTION(execPicoEntitlementVerifyCheck); \
	DECLARE_FUNCTION(execPicoEntitlementVerifyAppDelegate); \
	DECLARE_FUNCTION(execFindFileOrForder); \
	DECLARE_FUNCTION(execGetOnlineSubsystemPicoManager); \
	DECLARE_FUNCTION(execWriteLeaderboards); \
	DECLARE_FUNCTION(execReadLeaderboardsForFriends); \
	DECLARE_FUNCTION(execReadLeaderboards); \
	DECLARE_FUNCTION(execLogDeeplinkResult); \
	DECLARE_FUNCTION(execGetLaunchDetails); \
	DECLARE_FUNCTION(execLaunchOtherAppByAppId); \
	DECLARE_FUNCTION(execLaunchOtherAppByPresence); \
	DECLARE_FUNCTION(execGetVersion); \
	DECLARE_FUNCTION(execLaunchOtherApp); \
	DECLARE_FUNCTION(execShareMedia); \
	DECLARE_FUNCTION(execLaunchInvitePanel); \
	DECLARE_FUNCTION(execPresenceGetDestinationsList); \
	DECLARE_FUNCTION(execPresenceGetDestinations); \
	DECLARE_FUNCTION(execGetSendInvitesList); \
	DECLARE_FUNCTION(execPresenceSendInvites); \
	DECLARE_FUNCTION(execPresenceReadSendInvites); \
	DECLARE_FUNCTION(execPresenceSetExtra); \
	DECLARE_FUNCTION(execPresenceSetMatchSession); \
	DECLARE_FUNCTION(execPresenceSetLobbySession); \
	DECLARE_FUNCTION(execPresenceSetIsJoinable); \
	DECLARE_FUNCTION(execPresenceSetDestination); \
	DECLARE_FUNCTION(execPresenceSet); \
	DECLARE_FUNCTION(execGetInvitableFriendList); \
	DECLARE_FUNCTION(execReadInvitableUser); \
	DECLARE_FUNCTION(execPresenceClear); \
	DECLARE_FUNCTION(execSendSessionInviteToFriend); \
	DECLARE_FUNCTION(execGetSessionSettings); \
	DECLARE_FUNCTION(execAddNamedSession); \
	DECLARE_FUNCTION(execAddNamedSessionBySettings); \
	DECLARE_FUNCTION(execGetNamedSession); \
	DECLARE_FUNCTION(execGetSessionState); \
	DECLARE_FUNCTION(execDumpSessionState); \
	DECLARE_FUNCTION(execJoinSession); \
	DECLARE_FUNCTION(execFindSessionById); \
	DECLARE_FUNCTION(execFindSessions); \
	DECLARE_FUNCTION(execCancelMatchmaking); \
	DECLARE_FUNCTION(execStartMatchmaking); \
	DECLARE_FUNCTION(execIsPlayerInSession); \
	DECLARE_FUNCTION(execDestroySession); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execUpdateSession); \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execCreateSession); \
	DECLARE_FUNCTION(execRtcSendUserMessage); \
	DECLARE_FUNCTION(execRtcSendUserBinaryMessage); \
	DECLARE_FUNCTION(execRtcSendRoomMessage); \
	DECLARE_FUNCTION(execRtcSendRoomBinaryMessage); \
	DECLARE_FUNCTION(execRtcRoomUnsubscribeStream); \
	DECLARE_FUNCTION(execRtcRoomUnPublishStream); \
	DECLARE_FUNCTION(execRtcRoomSubscribeStream); \
	DECLARE_FUNCTION(execRtcRoomSetRemoteAudioPlaybackVolume); \
	DECLARE_FUNCTION(execRtcRoomPublishStream); \
	DECLARE_FUNCTION(execRtcSendStreamSyncInfo); \
	DECLARE_FUNCTION(execRtcUpdateToken); \
	DECLARE_FUNCTION(execRtcStopAudioCapture); \
	DECLARE_FUNCTION(execRtcStartAudioCapture); \
	DECLARE_FUNCTION(execRtcSetPlaybackVolume); \
	DECLARE_FUNCTION(execRtcSetEarMonitorVolume); \
	DECLARE_FUNCTION(execRtcSetEarMonitorMode); \
	DECLARE_FUNCTION(execRtcSetCaptureVolume); \
	DECLARE_FUNCTION(execRtcSetAudioScenario); \
	DECLARE_FUNCTION(execRtcSetAudioPlaybackDevice); \
	DECLARE_FUNCTION(execRtcRoomResumeAllSubscribedStream); \
	DECLARE_FUNCTION(execRtcRoomPauseAllSubscribedStream); \
	DECLARE_FUNCTION(execRtcUnPublishRoom); \
	DECLARE_FUNCTION(execRtcPublishRoom); \
	DECLARE_FUNCTION(execRtcMuteLocalAudio); \
	DECLARE_FUNCTION(execRtcLeaveRoom); \
	DECLARE_FUNCTION(execRtcEnableAudioPropertiesReport); \
	DECLARE_FUNCTION(execRtcDestroyRoom); \
	DECLARE_FUNCTION(execPicoRtcJoinRoom); \
	DECLARE_FUNCTION(execPicoGetRtcEngineInit); \
	DECLARE_FUNCTION(execPicoRtcGetToken); \
	DECLARE_FUNCTION(execPicoGetFriend); \
	DECLARE_FUNCTION(execPicoGetFriendList); \
	DECLARE_FUNCTION(execPicoReadFriendList); \
	DECLARE_FUNCTION(execGetLoginPicoUser); \
	DECLARE_FUNCTION(execPicoGetNickName); \
	DECLARE_FUNCTION(execPicoLogin);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOnlinePicoFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoFunctionLibrary)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOnlinePicoFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoFunctionLibrary)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoFunctionLibrary(UOnlinePicoFunctionLibrary&&); \
	NO_API UOnlinePicoFunctionLibrary(const UOnlinePicoFunctionLibrary&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoFunctionLibrary(UOnlinePicoFunctionLibrary&&); \
	NO_API UOnlinePicoFunctionLibrary(const UOnlinePicoFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlinePicoFunctionLibrary)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
