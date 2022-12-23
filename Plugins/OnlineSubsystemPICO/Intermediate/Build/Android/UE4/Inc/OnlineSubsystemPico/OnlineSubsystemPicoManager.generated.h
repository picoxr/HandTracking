// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPico_AssetFileDeleteForSafety;
class UPico_AssetFileDownloadUpdate;
enum class EOnJoinSessionCompleteResultPicoType : uint8;
struct FPicoOnlineSessionSearchResult;
enum class ERtcStreamIndex : uint8;
enum class ERtcSyncInfoStreamType : uint8;
enum class ERtcMediaStreamType : uint8;
enum class ERtcStreamRemoveReason : uint8;
enum class ERtcMediaDeviceType : uint8;
enum class ERtcMediaDeviceState : uint8;
enum class ERtcMediaDeviceError : uint8;
enum class ERtcAudioPlaybackDevice : uint8;
enum class ERtcMuteState : uint8;
enum class ERtcUserLeaveReasonType : uint8;
enum class ERtcJoinRoomType : uint8;
#ifdef ONLINESUBSYSTEMPICO_OnlineSubsystemPicoManager_generated_h
#error "OnlineSubsystemPicoManager.generated.h already included, missing '#pragma once' in OnlineSubsystemPicoManager.h"
#endif
#define ONLINESUBSYSTEMPICO_OnlineSubsystemPicoManager_generated_h

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_132_DELEGATE \
struct _Script_OnlineSubsystemPico_eventAssetFileDeleteForSafetyDelegate_Parms \
{ \
	UPico_AssetFileDeleteForSafety* AssetFileDeleteForSafetyObj; \
}; \
static inline void FAssetFileDeleteForSafetyDelegate_DelegateWrapper(const FMulticastScriptDelegate& AssetFileDeleteForSafetyDelegate, UPico_AssetFileDeleteForSafety* AssetFileDeleteForSafetyObj) \
{ \
	_Script_OnlineSubsystemPico_eventAssetFileDeleteForSafetyDelegate_Parms Parms; \
	Parms.AssetFileDeleteForSafetyObj=AssetFileDeleteForSafetyObj; \
	AssetFileDeleteForSafetyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_131_DELEGATE \
struct _Script_OnlineSubsystemPico_eventAssetFileDownloadUpdateDelegate_Parms \
{ \
	UPico_AssetFileDownloadUpdate* AssetFileDownloadUpdateObj; \
}; \
static inline void FAssetFileDownloadUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& AssetFileDownloadUpdateDelegate, UPico_AssetFileDownloadUpdate* AssetFileDownloadUpdateObj) \
{ \
	_Script_OnlineSubsystemPico_eventAssetFileDownloadUpdateDelegate_Parms Parms; \
	Parms.AssetFileDownloadUpdateObj=AssetFileDownloadUpdateObj; \
	AssetFileDownloadUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_128_DELEGATE \
struct _Script_OnlineSubsystemPico_eventPicoManagerOnReadLeaderboardsCompleteDelegate_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FPicoManagerOnReadLeaderboardsCompleteDelegate_DelegateWrapper(const FScriptDelegate& PicoManagerOnReadLeaderboardsCompleteDelegate, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventPicoManagerOnReadLeaderboardsCompleteDelegate_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	PicoManagerOnReadLeaderboardsCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_124_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnRoomInviteAcceptedNotifyDelegate_Parms \
{ \
	FString RoomID; \
	bool bWasSuccessful; \
}; \
static inline void FOnRoomInviteAcceptedNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRoomInviteAcceptedNotifyDelegate, const FString& RoomID, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventOnRoomInviteAcceptedNotifyDelegate_Parms Parms; \
	Parms.RoomID=RoomID; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRoomInviteAcceptedNotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_123_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnRoomUpdateNotifyDelegate_Parms \
{ \
	FString RoomID; \
	bool bWasSuccessful; \
}; \
static inline void FOnRoomUpdateNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRoomUpdateNotifyDelegate, const FString& RoomID, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventOnRoomUpdateNotifyDelegate_Parms Parms; \
	Parms.RoomID=RoomID; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRoomUpdateNotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_122_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnRoomUpdateMembershipLockStatusNotifyDelegate_Parms \
{ \
	FString RoomID; \
	bool bWasSuccessful; \
}; \
static inline void FOnRoomUpdateMembershipLockStatusNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRoomUpdateMembershipLockStatusNotifyDelegate, const FString& RoomID, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventOnRoomUpdateMembershipLockStatusNotifyDelegate_Parms Parms; \
	Parms.RoomID=RoomID; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRoomUpdateMembershipLockStatusNotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_121_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnRoomUpdateDataStoreNotifyDelegate_Parms \
{ \
	FString RoomID; \
	bool bWasSuccessful; \
}; \
static inline void FOnRoomUpdateDataStoreNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRoomUpdateDataStoreNotifyDelegate, const FString& RoomID, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventOnRoomUpdateDataStoreNotifyDelegate_Parms Parms; \
	Parms.RoomID=RoomID; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRoomUpdateDataStoreNotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_120_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnRoomUpdateOwnerNotifyDelegate_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FOnRoomUpdateOwnerNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRoomUpdateOwnerNotifyDelegate, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventOnRoomUpdateOwnerNotifyDelegate_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRoomUpdateOwnerNotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_119_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnRoomKickUserNotifyDelegate_Parms \
{ \
	FString RoomID; \
	bool bWasSuccessful; \
}; \
static inline void FOnRoomKickUserNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRoomKickUserNotifyDelegate, const FString& RoomID, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventOnRoomKickUserNotifyDelegate_Parms Parms; \
	Parms.RoomID=RoomID; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRoomKickUserNotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_118_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnRoomSetDescriptionNotifyDelegate_Parms \
{ \
	FString RoomID; \
	bool bWasSuccessful; \
}; \
static inline void FOnRoomSetDescriptionNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRoomSetDescriptionNotifyDelegate, const FString& RoomID, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventOnRoomSetDescriptionNotifyDelegate_Parms Parms; \
	Parms.RoomID=RoomID; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRoomSetDescriptionNotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_117_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnRoomJoin2NotifyDelegate_Parms \
{ \
	FString RoomID; \
	bool bWasSuccessful; \
}; \
static inline void FOnRoomJoin2NotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRoomJoin2NotifyDelegate, const FString& RoomID, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventOnRoomJoin2NotifyDelegate_Parms Parms; \
	Parms.RoomID=RoomID; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRoomJoin2NotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_116_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnRoomLeaveNotifyDelegate_Parms \
{ \
	FString RoomID; \
	bool bWasSuccessful; \
}; \
static inline void FOnRoomLeaveNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRoomLeaveNotifyDelegate, const FString& RoomID, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventOnRoomLeaveNotifyDelegate_Parms Parms; \
	Parms.RoomID=RoomID; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRoomLeaveNotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_115_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnMatchmakingCancel2NotifyDelegate_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FOnMatchmakingCancel2NotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMatchmakingCancel2NotifyDelegate, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventOnMatchmakingCancel2NotifyDelegate_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnMatchmakingCancel2NotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_114_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnGameStateResetNotifyDelegate_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FOnGameStateResetNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameStateResetNotifyDelegate, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventOnGameStateResetNotifyDelegate_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnGameStateResetNotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_113_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnGameRequestFailedNotifyDelegate_Parms \
{ \
	int32 Result; \
	bool bWasSuccessful; \
}; \
static inline void FOnGameRequestFailedNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameRequestFailedNotifyDelegate, int32 Result, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventOnGameRequestFailedNotifyDelegate_Parms Parms; \
	Parms.Result=Result; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnGameRequestFailedNotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_112_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnGameConnectionNotifyDelegate_Parms \
{ \
	int32 Result; \
	bool bWasSuccessful; \
}; \
static inline void FOnGameConnectionNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGameConnectionNotifyDelegate, int32 Result, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventOnGameConnectionNotifyDelegate_Parms Parms; \
	Parms.Result=Result; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnGameConnectionNotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_110_DELEGATE \
struct _Script_OnlineSubsystemPico_eventPicoManagerOnJoinSessionCompleteDelegate_Parms \
{ \
	FName SessionName; \
	EOnJoinSessionCompleteResultPicoType Type; \
}; \
static inline void FPicoManagerOnJoinSessionCompleteDelegate_DelegateWrapper(const FScriptDelegate& PicoManagerOnJoinSessionCompleteDelegate, FName SessionName, EOnJoinSessionCompleteResultPicoType Type) \
{ \
	_Script_OnlineSubsystemPico_eventPicoManagerOnJoinSessionCompleteDelegate_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.Type=Type; \
	PicoManagerOnJoinSessionCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_109_DELEGATE \
struct _Script_OnlineSubsystemPico_eventPicoManagerOnSingleSessionResultCompleteDelegate_Parms \
{ \
	int32 LocalUserNum; \
	bool bWasSuccessful; \
	FPicoOnlineSessionSearchResult SearchResult; \
}; \
static inline void FPicoManagerOnSingleSessionResultCompleteDelegate_DelegateWrapper(const FScriptDelegate& PicoManagerOnSingleSessionResultCompleteDelegate, int32 LocalUserNum, bool bWasSuccessful, FPicoOnlineSessionSearchResult const& SearchResult) \
{ \
	_Script_OnlineSubsystemPico_eventPicoManagerOnSingleSessionResultCompleteDelegate_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.SearchResult=SearchResult; \
	PicoManagerOnSingleSessionResultCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_108_DELEGATE \
struct _Script_OnlineSubsystemPico_eventPicoManagerOnFindSessionCompleteDelegate_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FPicoManagerOnFindSessionCompleteDelegate_DelegateWrapper(const FScriptDelegate& PicoManagerOnFindSessionCompleteDelegate, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventPicoManagerOnFindSessionCompleteDelegate_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	PicoManagerOnFindSessionCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_105_DELEGATE \
struct _Script_OnlineSubsystemPico_eventPicoManagerOnMatchmakingCompleteDelegate_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FPicoManagerOnMatchmakingCompleteDelegate_DelegateWrapper(const FScriptDelegate& PicoManagerOnMatchmakingCompleteDelegate, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventPicoManagerOnMatchmakingCompleteDelegate_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	PicoManagerOnMatchmakingCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_104_DELEGATE \
struct _Script_OnlineSubsystemPico_eventPicoManagerOnCancelMatchmakingCompleteDelegate_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FPicoManagerOnCancelMatchmakingCompleteDelegate_DelegateWrapper(const FScriptDelegate& PicoManagerOnCancelMatchmakingCompleteDelegate, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventPicoManagerOnCancelMatchmakingCompleteDelegate_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	PicoManagerOnCancelMatchmakingCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_103_DELEGATE \
struct _Script_OnlineSubsystemPico_eventPicoManagerOnDestroySessionCompleteDelegate_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FPicoManagerOnDestroySessionCompleteDelegate_DelegateWrapper(const FScriptDelegate& PicoManagerOnDestroySessionCompleteDelegate, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventPicoManagerOnDestroySessionCompleteDelegate_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	PicoManagerOnDestroySessionCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_102_DELEGATE \
struct _Script_OnlineSubsystemPico_eventPicoManagerOnEndSessionCompleteDelegate_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FPicoManagerOnEndSessionCompleteDelegate_DelegateWrapper(const FScriptDelegate& PicoManagerOnEndSessionCompleteDelegate, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventPicoManagerOnEndSessionCompleteDelegate_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	PicoManagerOnEndSessionCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_101_DELEGATE \
struct _Script_OnlineSubsystemPico_eventPicoManagerOnUpdateSessionCompleteDelegate_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FPicoManagerOnUpdateSessionCompleteDelegate_DelegateWrapper(const FScriptDelegate& PicoManagerOnUpdateSessionCompleteDelegate, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventPicoManagerOnUpdateSessionCompleteDelegate_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	PicoManagerOnUpdateSessionCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_100_DELEGATE \
struct _Script_OnlineSubsystemPico_eventPicoManagerOnStartSessionCompleteDelegate_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FPicoManagerOnStartSessionCompleteDelegate_DelegateWrapper(const FScriptDelegate& PicoManagerOnStartSessionCompleteDelegate, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventPicoManagerOnStartSessionCompleteDelegate_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	PicoManagerOnStartSessionCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_99_DELEGATE \
struct _Script_OnlineSubsystemPico_eventPicoManagerOnCreateSessionCompleteDelegate_Parms \
{ \
	FName SessionName; \
	bool bWasSuccessful; \
}; \
static inline void FPicoManagerOnCreateSessionCompleteDelegate_DelegateWrapper(const FScriptDelegate& PicoManagerOnCreateSessionCompleteDelegate, FName SessionName, bool bWasSuccessful) \
{ \
	_Script_OnlineSubsystemPico_eventPicoManagerOnCreateSessionCompleteDelegate_Parms Parms; \
	Parms.SessionName=SessionName; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	PicoManagerOnCreateSessionCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_95_DELEGATE \
struct _Script_OnlineSubsystemPico_eventApplicationLifecycleStringResultDelegate_Parms \
{ \
	FString MessageString; \
}; \
static inline void FApplicationLifecycleStringResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplicationLifecycleStringResultDelegate, const FString& MessageString) \
{ \
	_Script_OnlineSubsystemPico_eventApplicationLifecycleStringResultDelegate_Parms Parms; \
	Parms.MessageString=MessageString; \
	ApplicationLifecycleStringResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_92_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerApplicationLifecycleReadDetailsDelegate_Parms \
{ \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerApplicationLifecycleReadDetailsDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerApplicationLifecycleReadDetailsDelegate, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerApplicationLifecycleReadDetailsDelegate_Parms Parms; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerApplicationLifecycleReadDetailsDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_89_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerLaunchOtherAppByAppIdDelegate_Parms \
{ \
	FString StringMessage; \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerLaunchOtherAppByAppIdDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerLaunchOtherAppByAppIdDelegate, const FString& StringMessage, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerLaunchOtherAppByAppIdDelegate_Parms Parms; \
	Parms.StringMessage=StringMessage; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerLaunchOtherAppByAppIdDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_88_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerGetVersionDelegate_Parms \
{ \
	FString StringMessage; \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerGetVersionDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerGetVersionDelegate, const FString& StringMessage, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerGetVersionDelegate_Parms Parms; \
	Parms.StringMessage=StringMessage; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerGetVersionDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_87_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerLaunchOtherAppByPresenceDelegate_Parms \
{ \
	FString StringMessage; \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerLaunchOtherAppByPresenceDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerLaunchOtherAppByPresenceDelegate, const FString& StringMessage, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerLaunchOtherAppByPresenceDelegate_Parms Parms; \
	Parms.StringMessage=StringMessage; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerLaunchOtherAppByPresenceDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_86_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerLaunchOtherAppDelegate_Parms \
{ \
	FString StringMessage; \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerLaunchOtherAppDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerLaunchOtherAppDelegate, const FString& StringMessage, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerLaunchOtherAppDelegate_Parms Parms; \
	Parms.StringMessage=StringMessage; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerLaunchOtherAppDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_83_DELEGATE \
struct _Script_OnlineSubsystemPico_eventPresenceLeaveIntentReceivedDelegate_Parms \
{ \
	FString DestinationApiName; \
	FString LobbySessionId; \
	FString MatchSessionId; \
}; \
static inline void FPresenceLeaveIntentReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PresenceLeaveIntentReceivedDelegate, const FString& DestinationApiName, const FString& LobbySessionId, const FString& MatchSessionId) \
{ \
	_Script_OnlineSubsystemPico_eventPresenceLeaveIntentReceivedDelegate_Parms Parms; \
	Parms.DestinationApiName=DestinationApiName; \
	Parms.LobbySessionId=LobbySessionId; \
	Parms.MatchSessionId=MatchSessionId; \
	PresenceLeaveIntentReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_82_DELEGATE \
struct _Script_OnlineSubsystemPico_eventPresenceJoinIntentReceivedDelegate_Parms \
{ \
	FString DeeplinkMessage; \
	FString DestinationApiName; \
	FString LobbySessionId; \
	FString MatchSessionId; \
}; \
static inline void FPresenceJoinIntentReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PresenceJoinIntentReceivedDelegate, const FString& DeeplinkMessage, const FString& DestinationApiName, const FString& LobbySessionId, const FString& MatchSessionId) \
{ \
	_Script_OnlineSubsystemPico_eventPresenceJoinIntentReceivedDelegate_Parms Parms; \
	Parms.DeeplinkMessage=DeeplinkMessage; \
	Parms.DestinationApiName=DestinationApiName; \
	Parms.LobbySessionId=LobbySessionId; \
	Parms.MatchSessionId=MatchSessionId; \
	PresenceJoinIntentReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_79_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerShareMediaDelegate_Parms \
{ \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerShareMediaDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerShareMediaDelegate, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerShareMediaDelegate_Parms Parms; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerShareMediaDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_78_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerLaunchInvitePanelDelegate_Parms \
{ \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerLaunchInvitePanelDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerLaunchInvitePanelDelegate, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerLaunchInvitePanelDelegate_Parms Parms; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerLaunchInvitePanelDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_77_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerPresenceGetDestinationsDelegate_Parms \
{ \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerPresenceGetDestinationsDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerPresenceGetDestinationsDelegate, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerPresenceGetDestinationsDelegate_Parms Parms; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerPresenceGetDestinationsDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_76_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerPresenceSentInvitesDelegate_Parms \
{ \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerPresenceSentInvitesDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerPresenceSentInvitesDelegate, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerPresenceSentInvitesDelegate_Parms Parms; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerPresenceSentInvitesDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_75_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerPresenceReadSentInvitesDelegate_Parms \
{ \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerPresenceReadSentInvitesDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerPresenceReadSentInvitesDelegate, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerPresenceReadSentInvitesDelegate_Parms Parms; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerPresenceReadSentInvitesDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_74_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerPresenceSetExtraDelegate_Parms \
{ \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerPresenceSetExtraDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerPresenceSetExtraDelegate, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerPresenceSetExtraDelegate_Parms Parms; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerPresenceSetExtraDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_73_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerPresenceSetMatchSessionDelegate_Parms \
{ \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerPresenceSetMatchSessionDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerPresenceSetMatchSessionDelegate, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerPresenceSetMatchSessionDelegate_Parms Parms; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerPresenceSetMatchSessionDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_72_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerPresenceSetLobbySessionDelegate_Parms \
{ \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerPresenceSetLobbySessionDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerPresenceSetLobbySessionDelegate, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerPresenceSetLobbySessionDelegate_Parms Parms; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerPresenceSetLobbySessionDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_71_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerPresenceSetIsJoinableDelegate_Parms \
{ \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerPresenceSetIsJoinableDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerPresenceSetIsJoinableDelegate, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerPresenceSetIsJoinableDelegate_Parms Parms; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerPresenceSetIsJoinableDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_70_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerPresenceSetDestinationDelegate_Parms \
{ \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerPresenceSetDestinationDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerPresenceSetDestinationDelegate, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerPresenceSetDestinationDelegate_Parms Parms; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerPresenceSetDestinationDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_69_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerPresenceSetDelegate_Parms \
{ \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerPresenceSetDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerPresenceSetDelegate, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerPresenceSetDelegate_Parms Parms; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerPresenceSetDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_68_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerPresenceReadInvitableUserDelegate_Parms \
{ \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerPresenceReadInvitableUserDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerPresenceReadInvitableUserDelegate, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerPresenceReadInvitableUserDelegate_Parms Parms; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerPresenceReadInvitableUserDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_67_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerPresenceClearDelegate_Parms \
{ \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerPresenceClearDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerPresenceClearDelegate, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerPresenceClearDelegate_Parms Parms; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerPresenceClearDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_64_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerRtcGetTokenDelegate_Parms \
{ \
	FString Token; \
	bool IsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerRtcGetTokenDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerRtcGetTokenDelegate, const FString& Token, bool IsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerRtcGetTokenDelegate_Parms Parms; \
	Parms.Token=Token; \
	Parms.IsSuccessed=IsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerRtcGetTokenDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_61_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcOnTokenWilExpireCallbackDelegate_Parms \
{ \
	FString StringMessage; \
}; \
static inline void FRtcOnTokenWilExpireCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcOnTokenWilExpireCallbackDelegate, const FString& StringMessage) \
{ \
	_Script_OnlineSubsystemPico_eventRtcOnTokenWilExpireCallbackDelegate_Parms Parms; \
	Parms.StringMessage=StringMessage; \
	RtcOnTokenWilExpireCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_60_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcUserMessageReceivedDelegate_Parms \
{ \
	FString RoomId; \
	FString UserId; \
	FString Message; \
}; \
static inline void FRtcUserMessageReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcUserMessageReceivedDelegate, const FString& RoomId, const FString& UserId, const FString& Message) \
{ \
	_Script_OnlineSubsystemPico_eventRtcUserMessageReceivedDelegate_Parms Parms; \
	Parms.RoomId=RoomId; \
	Parms.UserId=UserId; \
	Parms.Message=Message; \
	RtcUserMessageReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_59_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcRoomMessageReceivedDelegate_Parms \
{ \
	FString RoomId; \
	FString UserId; \
	FString Message; \
}; \
static inline void FRtcRoomMessageReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcRoomMessageReceivedDelegate, const FString& RoomId, const FString& UserId, const FString& Message) \
{ \
	_Script_OnlineSubsystemPico_eventRtcRoomMessageReceivedDelegate_Parms Parms; \
	Parms.RoomId=RoomId; \
	Parms.UserId=UserId; \
	Parms.Message=Message; \
	RtcRoomMessageReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_58_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcBinaryMessageReceivedDelegate_Parms \
{ \
	FString RoomId; \
	FString UserId; \
	FString Info; \
}; \
static inline void FRtcBinaryMessageReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcBinaryMessageReceivedDelegate, const FString& RoomId, const FString& UserId, const FString& Info) \
{ \
	_Script_OnlineSubsystemPico_eventRtcBinaryMessageReceivedDelegate_Parms Parms; \
	Parms.RoomId=RoomId; \
	Parms.UserId=UserId; \
	Parms.Info=Info; \
	RtcBinaryMessageReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_57_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcMessageSendResultDelegate_Parms \
{ \
	int64 MessageId; \
	int32 Error; \
	FString RoomId; \
}; \
static inline void FRtcMessageSendResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcMessageSendResultDelegate, int64 MessageId, int32 Error, const FString& RoomId) \
{ \
	_Script_OnlineSubsystemPico_eventRtcMessageSendResultDelegate_Parms Parms; \
	Parms.MessageId=MessageId; \
	Parms.Error=Error; \
	Parms.RoomId=RoomId; \
	RtcMessageSendResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_56_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetRtcStreamSyncInfoDelegate_Parms \
{ \
	FString RoomId; \
	FString UserId; \
	ERtcStreamIndex StreamIndex; \
	ERtcSyncInfoStreamType RtcSyncInfoStreamType; \
	FString Info; \
}; \
static inline void FGetRtcStreamSyncInfoDelegate_DelegateWrapper(const FMulticastScriptDelegate& GetRtcStreamSyncInfoDelegate, const FString& RoomId, const FString& UserId, ERtcStreamIndex StreamIndex, ERtcSyncInfoStreamType RtcSyncInfoStreamType, const FString& Info) \
{ \
	_Script_OnlineSubsystemPico_eventGetRtcStreamSyncInfoDelegate_Parms Parms; \
	Parms.RoomId=RoomId; \
	Parms.UserId=UserId; \
	Parms.StreamIndex=StreamIndex; \
	Parms.RtcSyncInfoStreamType=RtcSyncInfoStreamType; \
	Parms.Info=Info; \
	GetRtcStreamSyncInfoDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_55_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcUserUnPublishInfoDelegate_Parms \
{ \
	FString RoomId; \
	FString UserId; \
	ERtcMediaStreamType MediaStreamType; \
	ERtcStreamRemoveReason Reason; \
}; \
static inline void FRtcUserUnPublishInfoDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcUserUnPublishInfoDelegate, const FString& RoomId, const FString& UserId, ERtcMediaStreamType MediaStreamType, ERtcStreamRemoveReason Reason) \
{ \
	_Script_OnlineSubsystemPico_eventRtcUserUnPublishInfoDelegate_Parms Parms; \
	Parms.RoomId=RoomId; \
	Parms.UserId=UserId; \
	Parms.MediaStreamType=MediaStreamType; \
	Parms.Reason=Reason; \
	RtcUserUnPublishInfoDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_54_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcUserPublishInfoDelegate_Parms \
{ \
	FString RoomId; \
	FString UserId; \
	ERtcMediaStreamType MediaStreamType; \
}; \
static inline void FRtcUserPublishInfoDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcUserPublishInfoDelegate, const FString& RoomId, const FString& UserId, ERtcMediaStreamType MediaStreamType) \
{ \
	_Script_OnlineSubsystemPico_eventRtcUserPublishInfoDelegate_Parms Parms; \
	Parms.RoomId=RoomId; \
	Parms.UserId=UserId; \
	Parms.MediaStreamType=MediaStreamType; \
	RtcUserPublishInfoDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_51_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcUserStopAudioCaptureDelegate_Parms \
{ \
	FString StringMessage; \
}; \
static inline void FRtcUserStopAudioCaptureDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcUserStopAudioCaptureDelegate, const FString& StringMessage) \
{ \
	_Script_OnlineSubsystemPico_eventRtcUserStopAudioCaptureDelegate_Parms Parms; \
	Parms.StringMessage=StringMessage; \
	RtcUserStopAudioCaptureDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_50_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcUserStartAudioCaptureDelegate_Parms \
{ \
	FString StringMessage; \
}; \
static inline void FRtcUserStartAudioCaptureDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcUserStartAudioCaptureDelegate, const FString& StringMessage) \
{ \
	_Script_OnlineSubsystemPico_eventRtcUserStartAudioCaptureDelegate_Parms Parms; \
	Parms.StringMessage=StringMessage; \
	RtcUserStartAudioCaptureDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_49_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcConnectStateChangedDelegate_Parms \
{ \
	FString StringMessage; \
}; \
static inline void FRtcConnectStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcConnectStateChangedDelegate, const FString& StringMessage) \
{ \
	_Script_OnlineSubsystemPico_eventRtcConnectStateChangedDelegate_Parms Parms; \
	Parms.StringMessage=StringMessage; \
	RtcConnectStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_48_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcErrorDelegate_Parms \
{ \
	int32 MessageCode; \
}; \
static inline void FRtcErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcErrorDelegate, int32 MessageCode) \
{ \
	_Script_OnlineSubsystemPico_eventRtcErrorDelegate_Parms Parms; \
	Parms.MessageCode=MessageCode; \
	RtcErrorDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_47_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcWarnDelegate_Parms \
{ \
	int32 MessageCode; \
}; \
static inline void FRtcWarnDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcWarnDelegate, int32 MessageCode) \
{ \
	_Script_OnlineSubsystemPico_eventRtcWarnDelegate_Parms Parms; \
	Parms.MessageCode=MessageCode; \
	RtcWarnDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_45_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcRemoteAudioPropertiesReportDelegate_Parms \
{ \
	int32 TotalRemoteVolume; \
	TArray<int32> Volumes; \
	TArray<FString> RoomIds; \
	TArray<FString> UserIds; \
	TArray<ERtcStreamIndex> StreamIndexs; \
}; \
static inline void FRtcRemoteAudioPropertiesReportDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcRemoteAudioPropertiesReportDelegate, int32 TotalRemoteVolume, TArray<int32> const& Volumes, TArray<FString> const& RoomIds, TArray<FString> const& UserIds, TArray<ERtcStreamIndex> const& StreamIndexs) \
{ \
	_Script_OnlineSubsystemPico_eventRtcRemoteAudioPropertiesReportDelegate_Parms Parms; \
	Parms.TotalRemoteVolume=TotalRemoteVolume; \
	Parms.Volumes=Volumes; \
	Parms.RoomIds=RoomIds; \
	Parms.UserIds=UserIds; \
	Parms.StreamIndexs=StreamIndexs; \
	RtcRemoteAudioPropertiesReportDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_44_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcLocalAudioPropertiesReportDelegate_Parms \
{ \
	TArray<ERtcStreamIndex> StreamIndexs; \
	TArray<int32> Volumes; \
}; \
static inline void FRtcLocalAudioPropertiesReportDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcLocalAudioPropertiesReportDelegate, TArray<ERtcStreamIndex> const& StreamIndexs, TArray<int32> const& Volumes) \
{ \
	_Script_OnlineSubsystemPico_eventRtcLocalAudioPropertiesReportDelegate_Parms Parms; \
	Parms.StreamIndexs=StreamIndexs; \
	Parms.Volumes=Volumes; \
	RtcLocalAudioPropertiesReportDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_43_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcMediaDeviceChangeInfoDelegate_Parms \
{ \
	FString DeviceId; \
	ERtcMediaDeviceType MediaDeciveType; \
	ERtcMediaDeviceState MediaDeviceState; \
	ERtcMediaDeviceError MediaDeviceError; \
}; \
static inline void FRtcMediaDeviceChangeInfoDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcMediaDeviceChangeInfoDelegate, const FString& DeviceId, ERtcMediaDeviceType MediaDeciveType, ERtcMediaDeviceState MediaDeviceState, ERtcMediaDeviceError MediaDeviceError) \
{ \
	_Script_OnlineSubsystemPico_eventRtcMediaDeviceChangeInfoDelegate_Parms Parms; \
	Parms.DeviceId=DeviceId; \
	Parms.MediaDeciveType=MediaDeciveType; \
	Parms.MediaDeviceState=MediaDeviceState; \
	Parms.MediaDeviceError=MediaDeviceError; \
	RtcMediaDeviceChangeInfoDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_42_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcAudioChangePlaybackDeviceDelegate_Parms \
{ \
	ERtcAudioPlaybackDevice RtcAudioPlaybackDevice; \
}; \
static inline void FRtcAudioChangePlaybackDeviceDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcAudioChangePlaybackDeviceDelegate, ERtcAudioPlaybackDevice RtcAudioPlaybackDevice) \
{ \
	_Script_OnlineSubsystemPico_eventRtcAudioChangePlaybackDeviceDelegate_Parms Parms; \
	Parms.RtcAudioPlaybackDevice=RtcAudioPlaybackDevice; \
	RtcAudioChangePlaybackDeviceDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_41_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcRoomMuteStateDelegate_Parms \
{ \
	FString UserId; \
	ERtcMuteState RtcMuteState; \
}; \
static inline void FRtcRoomMuteStateDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcRoomMuteStateDelegate, const FString& UserId, ERtcMuteState RtcMuteState) \
{ \
	_Script_OnlineSubsystemPico_eventRtcRoomMuteStateDelegate_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.RtcMuteState=RtcMuteState; \
	RtcRoomMuteStateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_40_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcRoomErrorDelegate_Parms \
{ \
	int32 Code; \
	FString RoomId; \
}; \
static inline void FRtcRoomErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcRoomErrorDelegate, int32 Code, const FString& RoomId) \
{ \
	_Script_OnlineSubsystemPico_eventRtcRoomErrorDelegate_Parms Parms; \
	Parms.Code=Code; \
	Parms.RoomId=RoomId; \
	RtcRoomErrorDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_39_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcRoomWarnDelegate_Parms \
{ \
	int32 Code; \
	FString RoomId; \
}; \
static inline void FRtcRoomWarnDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcRoomWarnDelegate, int32 Code, const FString& RoomId) \
{ \
	_Script_OnlineSubsystemPico_eventRtcRoomWarnDelegate_Parms Parms; \
	Parms.Code=Code; \
	Parms.RoomId=RoomId; \
	RtcRoomWarnDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_38_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcUserLeaveInfoDelegate_Parms \
{ \
	FString UserId; \
	ERtcUserLeaveReasonType RtcUserLeaveReasonType; \
	FString RoomId; \
}; \
static inline void FRtcUserLeaveInfoDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcUserLeaveInfoDelegate, const FString& UserId, ERtcUserLeaveReasonType RtcUserLeaveReasonType, const FString& RoomId) \
{ \
	_Script_OnlineSubsystemPico_eventRtcUserLeaveInfoDelegate_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.RtcUserLeaveReasonType=RtcUserLeaveReasonType; \
	Parms.RoomId=RoomId; \
	RtcUserLeaveInfoDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_37_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcUserJoinInfoDelegate_Parms \
{ \
	FString UserId; \
	FString UserExtra; \
	int32 Elapsed; \
	FString RoomId; \
}; \
static inline void FRtcUserJoinInfoDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcUserJoinInfoDelegate, const FString& UserId, const FString& UserExtra, int32 Elapsed, const FString& RoomId) \
{ \
	_Script_OnlineSubsystemPico_eventRtcUserJoinInfoDelegate_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.UserExtra=UserExtra; \
	Parms.Elapsed=Elapsed; \
	Parms.RoomId=RoomId; \
	RtcUserJoinInfoDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_36_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcRoomStateDelegate_Parms \
{ \
	int32 TotalDuration; \
	int32 UserCount; \
	FString RoomId; \
}; \
static inline void FRtcRoomStateDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcRoomStateDelegate, int32 TotalDuration, int32 UserCount, const FString& RoomId) \
{ \
	_Script_OnlineSubsystemPico_eventRtcRoomStateDelegate_Parms Parms; \
	Parms.TotalDuration=TotalDuration; \
	Parms.UserCount=UserCount; \
	Parms.RoomId=RoomId; \
	RtcRoomStateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_35_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcLeaveRoomResultDelegate_Parms \
{ \
	FString RoomId; \
}; \
static inline void FRtcLeaveRoomResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcLeaveRoomResultDelegate, const FString& RoomId) \
{ \
	_Script_OnlineSubsystemPico_eventRtcLeaveRoomResultDelegate_Parms Parms; \
	Parms.RoomId=RoomId; \
	RtcLeaveRoomResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_34_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRtcJoinRoomResultDelegate_Parms \
{ \
	FString RoomId; \
	FString UserId; \
	int32 ErrorCode; \
	int32 Elapsed; \
	ERtcJoinRoomType InJoinRoomType; \
}; \
static inline void FRtcJoinRoomResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& RtcJoinRoomResultDelegate, const FString& RoomId, const FString& UserId, int32 ErrorCode, int32 Elapsed, ERtcJoinRoomType InJoinRoomType) \
{ \
	_Script_OnlineSubsystemPico_eventRtcJoinRoomResultDelegate_Parms Parms; \
	Parms.RoomId=RoomId; \
	Parms.UserId=UserId; \
	Parms.ErrorCode=ErrorCode; \
	Parms.Elapsed=Elapsed; \
	Parms.InJoinRoomType=InJoinRoomType; \
	RtcJoinRoomResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_31_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerReadFriendListDelegate_Parms \
{ \
	int32 LocalUserNum; \
	bool bWasSuccessful; \
	FString ListName; \
	FString ErrorStr; \
}; \
static inline void FOnlineManagerReadFriendListDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerReadFriendListDelegate, int32 LocalUserNum, bool bWasSuccessful, const FString& ListName, const FString& ErrorStr) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerReadFriendListDelegate_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.ListName=ListName; \
	Parms.ErrorStr=ErrorStr; \
	OnlineManagerReadFriendListDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_28_DELEGATE \
struct _Script_OnlineSubsystemPico_eventOnlineManagerLoginCompleteDelegate_Parms \
{ \
	int32 LocalUserNum; \
	FString UserId; \
	bool bIsSuccessed; \
	FString ErrorMessage; \
}; \
static inline void FOnlineManagerLoginCompleteDelegate_DelegateWrapper(const FScriptDelegate& OnlineManagerLoginCompleteDelegate, int32 LocalUserNum, const FString& UserId, bool bIsSuccessed, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventOnlineManagerLoginCompleteDelegate_Parms Parms; \
	Parms.LocalUserNum=LocalUserNum; \
	Parms.UserId=UserId; \
	Parms.bIsSuccessed=bIsSuccessed ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	OnlineManagerLoginCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_RPC_WRAPPERS
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_RPC_WRAPPERS_NO_PURE_DECLS
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSubsystemPicoManager(); \
	friend struct Z_Construct_UClass_UOnlineSubsystemPicoManager_Statics; \
public: \
	DECLARE_CLASS(UOnlineSubsystemPicoManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSubsystemPicoManager)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSubsystemPicoManager(); \
	friend struct Z_Construct_UClass_UOnlineSubsystemPicoManager_Statics; \
public: \
	DECLARE_CLASS(UOnlineSubsystemPicoManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSubsystemPicoManager)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSubsystemPicoManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSubsystemPicoManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSubsystemPicoManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSubsystemPicoManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSubsystemPicoManager(UOnlineSubsystemPicoManager&&); \
	NO_API UOnlineSubsystemPicoManager(const UOnlineSubsystemPicoManager&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSubsystemPicoManager(UOnlineSubsystemPicoManager&&); \
	NO_API UOnlineSubsystemPicoManager(const UOnlineSubsystemPicoManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSubsystemPicoManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSubsystemPicoManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlineSubsystemPicoManager)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_134_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h_137_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlineSubsystemPicoManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlineSubsystemPicoManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
