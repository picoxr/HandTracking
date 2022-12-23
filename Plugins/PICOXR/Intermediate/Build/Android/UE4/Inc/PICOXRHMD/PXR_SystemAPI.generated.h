// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControllerPairTimeEnum : uint8;
enum class ECastInitResult : uint8;
struct FWifiDisplayModel;
enum class EPICOCastOptionOrStatusEnum : uint8;
enum class EPICOCastOptionValueEnum : uint8;
enum class ECastReturnCode : uint8;
enum class EPICOCastUrlTypeEnum : uint8;
enum class EPICOCastAuthorization : uint8;
enum class ESystemFunctionSwitchEnum : uint8;
enum class EHomeEventEnum : uint8;
enum class EKeyState : uint8;
enum class ESleepDelayTimeEnum : uint8;
enum class EScreenOffDelayTimeEnum : uint8;
enum class ESwitchEnum : uint8;
enum class EControllerKeyEnum : uint8;
enum class EInstallOTAReturnCode : uint8;
enum class EUSBConfigModeEnum : uint8;
enum class EHomeFunctionEnum : uint8;
enum class EPackageControlEnum : uint8;
enum class EDeviceControlEnum : uint8;
enum class ESystemInfoEnum : uint8;
#ifdef PICOXRHMD_PXR_SystemAPI_generated_h
#error "PXR_SystemAPI.generated.h already included, missing '#pragma once' in PXR_SystemAPI.h"
#endif
#define PICOXRHMD_PXR_SystemAPI_generated_h

#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_296_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAppManagerStruct_Statics; \
	PICOXRHMD_API static class UScriptStruct* StaticStruct();


template<> PICOXRHMD_API UScriptStruct* StaticStruct<struct FAppManagerStruct>();

#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_254_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWifiDisplayModel_Statics; \
	PICOXRHMD_API static class UScriptStruct* StaticStruct();


template<> PICOXRHMD_API UScriptStruct* StaticStruct<struct FWifiDisplayModel>();

#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_331_DELEGATE \
struct _Script_PICOXRHMD_eventPICOGetControllerPairTimeDelegate_Parms \
{ \
	EControllerPairTimeEnum Result; \
}; \
static inline void FPICOGetControllerPairTimeDelegate_DelegateWrapper(const FScriptDelegate& PICOGetControllerPairTimeDelegate, EControllerPairTimeEnum Result) \
{ \
	_Script_PICOXRHMD_eventPICOGetControllerPairTimeDelegate_Parms Parms; \
	Parms.Result=Result; \
	PICOGetControllerPairTimeDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_330_DELEGATE \
struct _Script_PICOXRHMD_eventPICOSetControllerPairTimeDelegate_Parms \
{ \
	int32 Result; \
}; \
static inline void FPICOSetControllerPairTimeDelegate_DelegateWrapper(const FScriptDelegate& PICOSetControllerPairTimeDelegate, int32 Result) \
{ \
	_Script_PICOXRHMD_eventPICOSetControllerPairTimeDelegate_Parms Parms; \
	Parms.Result=Result; \
	PICOSetControllerPairTimeDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_329_DELEGATE \
struct _Script_PICOXRHMD_eventPICOCastInitDelegate_Parms \
{ \
	ECastInitResult Result; \
}; \
static inline void FPICOCastInitDelegate_DelegateWrapper(const FScriptDelegate& PICOCastInitDelegate, ECastInitResult Result) \
{ \
	_Script_PICOXRHMD_eventPICOCastInitDelegate_Parms Parms; \
	Parms.Result=Result; \
	PICOCastInitDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_328_DELEGATE \
struct _Script_PICOXRHMD_eventPICOGetSwitchSystemFunctionStatusDelegate_Parms \
{ \
	int32 Result; \
}; \
static inline void FPICOGetSwitchSystemFunctionStatusDelegate_DelegateWrapper(const FScriptDelegate& PICOGetSwitchSystemFunctionStatusDelegate, int32 Result) \
{ \
	_Script_PICOXRHMD_eventPICOGetSwitchSystemFunctionStatusDelegate_Parms Parms; \
	Parms.Result=Result; \
	PICOGetSwitchSystemFunctionStatusDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_327_DELEGATE \
struct _Script_PICOXRHMD_eventPICOControlSetAutoConnectWIFIWithErrorCodeDelegate_Parms \
{ \
	int32 Result; \
}; \
static inline void FPICOControlSetAutoConnectWIFIWithErrorCodeDelegate_DelegateWrapper(const FScriptDelegate& PICOControlSetAutoConnectWIFIWithErrorCodeDelegate, int32 Result) \
{ \
	_Script_PICOXRHMD_eventPICOControlSetAutoConnectWIFIWithErrorCodeDelegate_Parms Parms; \
	Parms.Result=Result; \
	PICOControlSetAutoConnectWIFIWithErrorCodeDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_326_DELEGATE \
struct _Script_PICOXRHMD_eventPICOImportMapsDelegate_Parms \
{ \
	bool Result; \
}; \
static inline void FPICOImportMapsDelegate_DelegateWrapper(const FScriptDelegate& PICOImportMapsDelegate, bool Result) \
{ \
	_Script_PICOXRHMD_eventPICOImportMapsDelegate_Parms Parms; \
	Parms.Result=Result ? true : false; \
	PICOImportMapsDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_325_DELEGATE \
struct _Script_PICOXRHMD_eventPICOExportMapsDelegate_Parms \
{ \
	bool Result; \
}; \
static inline void FPICOExportMapsDelegate_DelegateWrapper(const FScriptDelegate& PICOExportMapsDelegate, bool Result) \
{ \
	_Script_PICOXRHMD_eventPICOExportMapsDelegate_Parms Parms; \
	Parms.Result=Result ? true : false; \
	PICOExportMapsDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_324_DELEGATE \
struct _Script_PICOXRHMD_eventPICOSwitchLargeSpaceStatusDelegate_Parms \
{ \
	FString Result; \
}; \
static inline void FPICOSwitchLargeSpaceStatusDelegate_DelegateWrapper(const FScriptDelegate& PICOSwitchLargeSpaceStatusDelegate, const FString& Result) \
{ \
	_Script_PICOXRHMD_eventPICOSwitchLargeSpaceStatusDelegate_Parms Parms; \
	Parms.Result=Result; \
	PICOSwitchLargeSpaceStatusDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_323_DELEGATE \
struct _Script_PICOXRHMD_eventPICOEnableLargeSpaceDelegate_Parms \
{ \
	bool Result; \
}; \
static inline void FPICOEnableLargeSpaceDelegate_DelegateWrapper(const FScriptDelegate& PICOEnableLargeSpaceDelegate, bool Result) \
{ \
	_Script_PICOXRHMD_eventPICOEnableLargeSpaceDelegate_Parms Parms; \
	Parms.Result=Result ? true : false; \
	PICOEnableLargeSpaceDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_322_DELEGATE \
struct _Script_PICOXRHMD_eventPICOSetWDModelsDelegate_Parms \
{ \
	TArray<FWifiDisplayModel> Models; \
}; \
static inline void FPICOSetWDModelsDelegate_DelegateWrapper(const FScriptDelegate& PICOSetWDModelsDelegate, TArray<FWifiDisplayModel> const& Models) \
{ \
	_Script_PICOXRHMD_eventPICOSetWDModelsDelegate_Parms Parms; \
	Parms.Models=Models; \
	PICOSetWDModelsDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_321_DELEGATE \
struct _Script_PICOXRHMD_eventPICOSetWDJsonDelegate_Parms \
{ \
	FString Result; \
}; \
static inline void FPICOSetWDJsonDelegate_DelegateWrapper(const FScriptDelegate& PICOSetWDJsonDelegate, const FString& Result) \
{ \
	_Script_PICOXRHMD_eventPICOSetWDJsonDelegate_Parms Parms; \
	Parms.Result=Result; \
	PICOSetWDJsonDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_320_DELEGATE \
struct _Script_PICOXRHMD_eventPICOResetAllKeyToDefaultDelegate_Parms \
{ \
	bool Result; \
}; \
static inline void FPICOResetAllKeyToDefaultDelegate_DelegateWrapper(const FScriptDelegate& PICOResetAllKeyToDefaultDelegate, bool Result) \
{ \
	_Script_PICOXRHMD_eventPICOResetAllKeyToDefaultDelegate_Parms Parms; \
	Parms.Result=Result ? true : false; \
	PICOResetAllKeyToDefaultDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_319_DELEGATE \
struct _Script_PICOXRHMD_eventPICOWriteConfigFileToDataLocalDelegate_Parms \
{ \
	bool Result; \
}; \
static inline void FPICOWriteConfigFileToDataLocalDelegate_DelegateWrapper(const FScriptDelegate& PICOWriteConfigFileToDataLocalDelegate, bool Result) \
{ \
	_Script_PICOXRHMD_eventPICOWriteConfigFileToDataLocalDelegate_Parms Parms; \
	Parms.Result=Result ? true : false; \
	PICOWriteConfigFileToDataLocalDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_318_DELEGATE \
struct _Script_PICOXRHMD_eventPICOSetScreenOffDelayDelegate_Parms \
{ \
	int32 Result; \
}; \
static inline void FPICOSetScreenOffDelayDelegate_DelegateWrapper(const FScriptDelegate& PICOSetScreenOffDelayDelegate, int32 Result) \
{ \
	_Script_PICOXRHMD_eventPICOSetScreenOffDelayDelegate_Parms Parms; \
	Parms.Result=Result; \
	PICOSetScreenOffDelayDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_317_DELEGATE \
struct _Script_PICOXRHMD_eventPICODisablePowerKeyDelegate_Parms \
{ \
	int32 Result; \
}; \
static inline void FPICODisablePowerKeyDelegate_DelegateWrapper(const FScriptDelegate& PICODisablePowerKeyDelegate, int32 Result) \
{ \
	_Script_PICOXRHMD_eventPICODisablePowerKeyDelegate_Parms Parms; \
	Parms.Result=Result; \
	PICODisablePowerKeyDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_316_DELEGATE \
struct _Script_PICOXRHMD_eventPICOSetHomeKeyAllDelegate_Parms \
{ \
	bool Result; \
}; \
static inline void FPICOSetHomeKeyAllDelegate_DelegateWrapper(const FScriptDelegate& PICOSetHomeKeyAllDelegate, bool Result) \
{ \
	_Script_PICOXRHMD_eventPICOSetHomeKeyAllDelegate_Parms Parms; \
	Parms.Result=Result ? true : false; \
	PICOSetHomeKeyAllDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_315_DELEGATE \
struct _Script_PICOXRHMD_eventPICOSetHomeKeyDelegate_Parms \
{ \
	bool Result; \
}; \
static inline void FPICOSetHomeKeyDelegate_DelegateWrapper(const FScriptDelegate& PICOSetHomeKeyDelegate, bool Result) \
{ \
	_Script_PICOXRHMD_eventPICOSetHomeKeyDelegate_Parms Parms; \
	Parms.Result=Result ? true : false; \
	PICOSetHomeKeyDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_314_DELEGATE \
struct _Script_PICOXRHMD_eventPICOClearAutoConnectWifiDelegate_Parms \
{ \
	bool Result; \
}; \
static inline void FPICOClearAutoConnectWifiDelegate_DelegateWrapper(const FScriptDelegate& PICOClearAutoConnectWifiDelegate, bool Result) \
{ \
	_Script_PICOXRHMD_eventPICOClearAutoConnectWifiDelegate_Parms Parms; \
	Parms.Result=Result ? true : false; \
	PICOClearAutoConnectWifiDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_313_DELEGATE \
struct _Script_PICOXRHMD_eventPICOSetAutoConnectWifiDelegate_Parms \
{ \
	bool Result; \
}; \
static inline void FPICOSetAutoConnectWifiDelegate_DelegateWrapper(const FScriptDelegate& PICOSetAutoConnectWifiDelegate, bool Result) \
{ \
	_Script_PICOXRHMD_eventPICOSetAutoConnectWifiDelegate_Parms Parms; \
	Parms.Result=Result ? true : false; \
	PICOSetAutoConnectWifiDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_312_DELEGATE \
struct _Script_PICOXRHMD_eventPICOAppManagerDelegate_Parms \
{ \
	int32 Result; \
}; \
static inline void FPICOAppManagerDelegate_DelegateWrapper(const FScriptDelegate& PICOAppManagerDelegate, int32 Result) \
{ \
	_Script_PICOXRHMD_eventPICOAppManagerDelegate_Parms Parms; \
	Parms.Result=Result; \
	PICOAppManagerDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_311_DELEGATE \
struct _Script_PICOXRHMD_eventPICOSetDeviceActionDelegate_Parms \
{ \
	int32 Result; \
}; \
static inline void FPICOSetDeviceActionDelegate_DelegateWrapper(const FScriptDelegate& PICOSetDeviceActionDelegate, int32 Result) \
{ \
	_Script_PICOXRHMD_eventPICOSetDeviceActionDelegate_Parms Parms; \
	Parms.Result=Result; \
	PICOSetDeviceActionDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_SPARSE_DATA
#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_GetControllerPairTime); \
	DECLARE_FUNCTION(execPXR_SetControllerPairTime); \
	DECLARE_FUNCTION(execPXR_PICOCastGetOptionOrStatus); \
	DECLARE_FUNCTION(execPXR_PICOCastSetOption); \
	DECLARE_FUNCTION(execPXR_PICOCastStopCast); \
	DECLARE_FUNCTION(execPXR_PICOCastGetUrl); \
	DECLARE_FUNCTION(execPXR_PICOCastGetShowAuthorization); \
	DECLARE_FUNCTION(execPXR_PICOCastSetShowAuthorization); \
	DECLARE_FUNCTION(execPXR_PICOCastInit); \
	DECLARE_FUNCTION(execPXR_GetSwitchSystemFunctionStatus); \
	DECLARE_FUNCTION(execPXR_GetCurrentLauncher); \
	DECLARE_FUNCTION(execPXR_GetUsbConfigurationOption); \
	DECLARE_FUNCTION(execPXR_GetHomeKeyStatus); \
	DECLARE_FUNCTION(execPXR_GetBackKeyStatus); \
	DECLARE_FUNCTION(execPXR_GetVolumeKeyStatus); \
	DECLARE_FUNCTION(execPXR_GetEnterKeyStatus); \
	DECLARE_FUNCTION(execPXR_GetPowerKeyStatus); \
	DECLARE_FUNCTION(execPXR_GetSleepDelay); \
	DECLARE_FUNCTION(execPXR_GetScreenOffDelay); \
	DECLARE_FUNCTION(execPXR_GetPowerOffWithUSBCable); \
	DECLARE_FUNCTION(execPXR_GetControllerKeyState); \
	DECLARE_FUNCTION(execPXR_GetTimingShutdownStatus); \
	DECLARE_FUNCTION(execPXR_GetTimingStartupStatus); \
	DECLARE_FUNCTION(execPXR_GetAutoConnectWiFiConfig); \
	DECLARE_FUNCTION(execPXR_InstallOTAPackage); \
	DECLARE_FUNCTION(execPXR_IsVolumeChangeToHomeAndEnter); \
	DECLARE_FUNCTION(execPXR_SwitchVolumeToHomeAndEnter); \
	DECLARE_FUNCTION(execPXR_StartVrSettingsItem); \
	DECLARE_FUNCTION(execPXR_TimingShutdown); \
	DECLARE_FUNCTION(execPXR_TimingStartup); \
	DECLARE_FUNCTION(execPXR_AppKeepAlive); \
	DECLARE_FUNCTION(execPXR_ControlSetAutoConnectWIFIWithErrorCode); \
	DECLARE_FUNCTION(execPXR_Record); \
	DECLARE_FUNCTION(execPXR_Capture); \
	DECLARE_FUNCTION(execPXR_GetDeviceTemperatures); \
	DECLARE_FUNCTION(execPXR_GetCpuUsages); \
	DECLARE_FUNCTION(execPXR_ImportMaps); \
	DECLARE_FUNCTION(execPXR_ExportMaps); \
	DECLARE_FUNCTION(execPXR_SaveLargeSpaceMaps); \
	DECLARE_FUNCTION(execPXR_GetSwitchLargeSpaceStatus); \
	DECLARE_FUNCTION(execPXR_SwitchLargeSpaceScene); \
	DECLARE_FUNCTION(execPXR_SetWDModels); \
	DECLARE_FUNCTION(execPXR_SetWDJson); \
	DECLARE_FUNCTION(execPXR_GetConnectedWD); \
	DECLARE_FUNCTION(execPXR_UpdateWifiDisplays); \
	DECLARE_FUNCTION(execPXR_RenameWifiDisplay); \
	DECLARE_FUNCTION(execPXR_ForgetWifiDisplay); \
	DECLARE_FUNCTION(execPXR_DisConnectWifiDisplay); \
	DECLARE_FUNCTION(execPXR_ConnectWifiDisplay); \
	DECLARE_FUNCTION(execPXR_StopScan); \
	DECLARE_FUNCTION(execPXR_StartScan); \
	DECLARE_FUNCTION(execPXR_CloseMiracast); \
	DECLARE_FUNCTION(execPXR_IsMiracastOn); \
	DECLARE_FUNCTION(execPXR_OpenMiracast); \
	DECLARE_FUNCTION(execPXR_KillBackgroundAppsWithWhiteList); \
	DECLARE_FUNCTION(execPXR_KillAppsByPidOrPackageName); \
	DECLARE_FUNCTION(execPXR_FreezeScreen); \
	DECLARE_FUNCTION(execPXR_GetDeviceSN); \
	DECLARE_FUNCTION(execPXR_VolumeDown); \
	DECLARE_FUNCTION(execPXR_VolumeUp); \
	DECLARE_FUNCTION(execPXR_SetVolume); \
	DECLARE_FUNCTION(execPXR_GetMaxVolume); \
	DECLARE_FUNCTION(execPXR_GetCurrentVolume); \
	DECLARE_FUNCTION(execPXR_SetBrightness); \
	DECLARE_FUNCTION(execPXR_GetCurrentBrightness); \
	DECLARE_FUNCTION(execPXR_DisableBackKey); \
	DECLARE_FUNCTION(execPXR_EnableBackKey); \
	DECLARE_FUNCTION(execPXR_DisableVolumeKey); \
	DECLARE_FUNCTION(execPXR_EnableVolumeKey); \
	DECLARE_FUNCTION(execPXR_DisableEnterKey); \
	DECLARE_FUNCTION(execPXR_EnableEnterKey); \
	DECLARE_FUNCTION(execPXR_ResetAllKeyToDefault); \
	DECLARE_FUNCTION(execPXR_WriteConfigFileToDataLocal); \
	DECLARE_FUNCTION(execPXR_ReleaseWakeLock); \
	DECLARE_FUNCTION(execPXR_AcquireWakeLock); \
	DECLARE_FUNCTION(execPXR_ScreenOff); \
	DECLARE_FUNCTION(execPXR_ScreenOn); \
	DECLARE_FUNCTION(execPXR_SetUsbConfigurationOption); \
	DECLARE_FUNCTION(execPXR_SwitchSystemFunction); \
	DECLARE_FUNCTION(execPXR_SetScreenOffDelay); \
	DECLARE_FUNCTION(execPXR_SetSleepDelay); \
	DECLARE_FUNCTION(execPXR_DisablePowerKey); \
	DECLARE_FUNCTION(execPXR_SetHomeKeyAll); \
	DECLARE_FUNCTION(execPXR_SetHomeKey); \
	DECLARE_FUNCTION(execPXR_ClearAutoConnectWifi); \
	DECLARE_FUNCTION(execPXR_SetAutoConnectWifi); \
	DECLARE_FUNCTION(execPXR_AppManager); \
	DECLARE_FUNCTION(execPXR_SetDeviceAction); \
	DECLARE_FUNCTION(execPXR_GetDeviceInfo);


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_GetControllerPairTime); \
	DECLARE_FUNCTION(execPXR_SetControllerPairTime); \
	DECLARE_FUNCTION(execPXR_PICOCastGetOptionOrStatus); \
	DECLARE_FUNCTION(execPXR_PICOCastSetOption); \
	DECLARE_FUNCTION(execPXR_PICOCastStopCast); \
	DECLARE_FUNCTION(execPXR_PICOCastGetUrl); \
	DECLARE_FUNCTION(execPXR_PICOCastGetShowAuthorization); \
	DECLARE_FUNCTION(execPXR_PICOCastSetShowAuthorization); \
	DECLARE_FUNCTION(execPXR_PICOCastInit); \
	DECLARE_FUNCTION(execPXR_GetSwitchSystemFunctionStatus); \
	DECLARE_FUNCTION(execPXR_GetCurrentLauncher); \
	DECLARE_FUNCTION(execPXR_GetUsbConfigurationOption); \
	DECLARE_FUNCTION(execPXR_GetHomeKeyStatus); \
	DECLARE_FUNCTION(execPXR_GetBackKeyStatus); \
	DECLARE_FUNCTION(execPXR_GetVolumeKeyStatus); \
	DECLARE_FUNCTION(execPXR_GetEnterKeyStatus); \
	DECLARE_FUNCTION(execPXR_GetPowerKeyStatus); \
	DECLARE_FUNCTION(execPXR_GetSleepDelay); \
	DECLARE_FUNCTION(execPXR_GetScreenOffDelay); \
	DECLARE_FUNCTION(execPXR_GetPowerOffWithUSBCable); \
	DECLARE_FUNCTION(execPXR_GetControllerKeyState); \
	DECLARE_FUNCTION(execPXR_GetTimingShutdownStatus); \
	DECLARE_FUNCTION(execPXR_GetTimingStartupStatus); \
	DECLARE_FUNCTION(execPXR_GetAutoConnectWiFiConfig); \
	DECLARE_FUNCTION(execPXR_InstallOTAPackage); \
	DECLARE_FUNCTION(execPXR_IsVolumeChangeToHomeAndEnter); \
	DECLARE_FUNCTION(execPXR_SwitchVolumeToHomeAndEnter); \
	DECLARE_FUNCTION(execPXR_StartVrSettingsItem); \
	DECLARE_FUNCTION(execPXR_TimingShutdown); \
	DECLARE_FUNCTION(execPXR_TimingStartup); \
	DECLARE_FUNCTION(execPXR_AppKeepAlive); \
	DECLARE_FUNCTION(execPXR_ControlSetAutoConnectWIFIWithErrorCode); \
	DECLARE_FUNCTION(execPXR_Record); \
	DECLARE_FUNCTION(execPXR_Capture); \
	DECLARE_FUNCTION(execPXR_GetDeviceTemperatures); \
	DECLARE_FUNCTION(execPXR_GetCpuUsages); \
	DECLARE_FUNCTION(execPXR_ImportMaps); \
	DECLARE_FUNCTION(execPXR_ExportMaps); \
	DECLARE_FUNCTION(execPXR_SaveLargeSpaceMaps); \
	DECLARE_FUNCTION(execPXR_GetSwitchLargeSpaceStatus); \
	DECLARE_FUNCTION(execPXR_SwitchLargeSpaceScene); \
	DECLARE_FUNCTION(execPXR_SetWDModels); \
	DECLARE_FUNCTION(execPXR_SetWDJson); \
	DECLARE_FUNCTION(execPXR_GetConnectedWD); \
	DECLARE_FUNCTION(execPXR_UpdateWifiDisplays); \
	DECLARE_FUNCTION(execPXR_RenameWifiDisplay); \
	DECLARE_FUNCTION(execPXR_ForgetWifiDisplay); \
	DECLARE_FUNCTION(execPXR_DisConnectWifiDisplay); \
	DECLARE_FUNCTION(execPXR_ConnectWifiDisplay); \
	DECLARE_FUNCTION(execPXR_StopScan); \
	DECLARE_FUNCTION(execPXR_StartScan); \
	DECLARE_FUNCTION(execPXR_CloseMiracast); \
	DECLARE_FUNCTION(execPXR_IsMiracastOn); \
	DECLARE_FUNCTION(execPXR_OpenMiracast); \
	DECLARE_FUNCTION(execPXR_KillBackgroundAppsWithWhiteList); \
	DECLARE_FUNCTION(execPXR_KillAppsByPidOrPackageName); \
	DECLARE_FUNCTION(execPXR_FreezeScreen); \
	DECLARE_FUNCTION(execPXR_GetDeviceSN); \
	DECLARE_FUNCTION(execPXR_VolumeDown); \
	DECLARE_FUNCTION(execPXR_VolumeUp); \
	DECLARE_FUNCTION(execPXR_SetVolume); \
	DECLARE_FUNCTION(execPXR_GetMaxVolume); \
	DECLARE_FUNCTION(execPXR_GetCurrentVolume); \
	DECLARE_FUNCTION(execPXR_SetBrightness); \
	DECLARE_FUNCTION(execPXR_GetCurrentBrightness); \
	DECLARE_FUNCTION(execPXR_DisableBackKey); \
	DECLARE_FUNCTION(execPXR_EnableBackKey); \
	DECLARE_FUNCTION(execPXR_DisableVolumeKey); \
	DECLARE_FUNCTION(execPXR_EnableVolumeKey); \
	DECLARE_FUNCTION(execPXR_DisableEnterKey); \
	DECLARE_FUNCTION(execPXR_EnableEnterKey); \
	DECLARE_FUNCTION(execPXR_ResetAllKeyToDefault); \
	DECLARE_FUNCTION(execPXR_WriteConfigFileToDataLocal); \
	DECLARE_FUNCTION(execPXR_ReleaseWakeLock); \
	DECLARE_FUNCTION(execPXR_AcquireWakeLock); \
	DECLARE_FUNCTION(execPXR_ScreenOff); \
	DECLARE_FUNCTION(execPXR_ScreenOn); \
	DECLARE_FUNCTION(execPXR_SetUsbConfigurationOption); \
	DECLARE_FUNCTION(execPXR_SwitchSystemFunction); \
	DECLARE_FUNCTION(execPXR_SetScreenOffDelay); \
	DECLARE_FUNCTION(execPXR_SetSleepDelay); \
	DECLARE_FUNCTION(execPXR_DisablePowerKey); \
	DECLARE_FUNCTION(execPXR_SetHomeKeyAll); \
	DECLARE_FUNCTION(execPXR_SetHomeKey); \
	DECLARE_FUNCTION(execPXR_ClearAutoConnectWifi); \
	DECLARE_FUNCTION(execPXR_SetAutoConnectWifi); \
	DECLARE_FUNCTION(execPXR_AppManager); \
	DECLARE_FUNCTION(execPXR_SetDeviceAction); \
	DECLARE_FUNCTION(execPXR_GetDeviceInfo);


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOXRSystemAPI(); \
	friend struct Z_Construct_UClass_UPICOXRSystemAPI_Statics; \
public: \
	DECLARE_CLASS(UPICOXRSystemAPI, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PICOXRHMD"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRSystemAPI)


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_INCLASS \
private: \
	static void StaticRegisterNativesUPICOXRSystemAPI(); \
	friend struct Z_Construct_UClass_UPICOXRSystemAPI_Statics; \
public: \
	DECLARE_CLASS(UPICOXRSystemAPI, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PICOXRHMD"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRSystemAPI)


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXRSystemAPI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXRSystemAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRSystemAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRSystemAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRSystemAPI(UPICOXRSystemAPI&&); \
	NO_API UPICOXRSystemAPI(const UPICOXRSystemAPI&); \
public:


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRSystemAPI(UPICOXRSystemAPI&&); \
	NO_API UPICOXRSystemAPI(const UPICOXRSystemAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRSystemAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRSystemAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPICOXRSystemAPI)


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_333_PROLOG
#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_SPARSE_DATA \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_RPC_WRAPPERS \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_INCLASS \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_SPARSE_DATA \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h_336_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRHMD_API UClass* StaticClass<class UPICOXRSystemAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_SystemAPI_h


#define FOREACH_ENUM_ECONTROLLERPAIRTIMEENUM(op) \
	op(EControllerPairTimeEnum::DEFAULT) \
	op(EControllerPairTimeEnum::FIFTEEN) \
	op(EControllerPairTimeEnum::SIXTY) \
	op(EControllerPairTimeEnum::ONE_HUNDRED_AND_TWENTY) \
	op(EControllerPairTimeEnum::SIX_HUNDRED) \
	op(EControllerPairTimeEnum::NEVER) 

enum class EControllerPairTimeEnum : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EControllerPairTimeEnum>();

#define FOREACH_ENUM_ECONTROLLERKEYENUM(op) \
	op(EControllerKeyEnum::CONTROLLER_KEY_JOYSTICK) \
	op(EControllerKeyEnum::CONTROLLER_KEY_MENU) \
	op(EControllerKeyEnum::CONTROLLER_KEY_TRIGGER) \
	op(EControllerKeyEnum::CONTROLLER_KEY_RIGHT_A) \
	op(EControllerKeyEnum::CONTROLLER_KEY_RIGHT_B) \
	op(EControllerKeyEnum::CONTROLLER_KEY_LEFT_X) \
	op(EControllerKeyEnum::CONTROLLER_KEY_LEFT_Y) \
	op(EControllerKeyEnum::CONTROLLER_KEY_LEFT_GRIP) \
	op(EControllerKeyEnum::CONTROLLER_KEY_RIGHT_GRIP) 

enum class EControllerKeyEnum : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EControllerKeyEnum>();

#define FOREACH_ENUM_EKEYSTATE(op) \
	op(EKeyState::DISABLE) \
	op(EKeyState::ENABLE) 

enum class EKeyState : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EKeyState>();

#define FOREACH_ENUM_EPICOCASTURLTYPEENUM(op) \
	op(EPICOCastUrlTypeEnum::NORMAL_URL) \
	op(EPICOCastUrlTypeEnum::NO_CONFIRM_URL) \
	op(EPICOCastUrlTypeEnum::RTMP_URL) 

enum class EPICOCastUrlTypeEnum : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EPICOCastUrlTypeEnum>();

#define FOREACH_ENUM_EPICOCASTOPTIONVALUEENUM(op) \
	op(EPICOCastOptionValueEnum::OPTION_VALUE_RESOLUTION_HIGH) \
	op(EPICOCastOptionValueEnum::OPTION_VALUE_RESOLUTION_MIDDLE) \
	op(EPICOCastOptionValueEnum::OPTION_VALUE_RESOLUTION_AUTO) \
	op(EPICOCastOptionValueEnum::OPTION_VALUE_RESOLUTION_HIGH_2K) \
	op(EPICOCastOptionValueEnum::OPTION_VALUE_RESOLUTION_HIGH_4K) \
	op(EPICOCastOptionValueEnum::OPTION_VALUE_BITRATE_HIGH) \
	op(EPICOCastOptionValueEnum::OPTION_VALUE_BITRATE_MIDDLE) \
	op(EPICOCastOptionValueEnum::OPTION_VALUE_BITRATE_LOW) \
	op(EPICOCastOptionValueEnum::OPTION_VALUE_AUDIO_ON) \
	op(EPICOCastOptionValueEnum::OPTION_VALUE_AUDIO_OFF) \
	op(EPICOCastOptionValueEnum::STATUS_VALUE_STATE_STARTED) \
	op(EPICOCastOptionValueEnum::STATUS_VALUE_STATE_STOPPED) \
	op(EPICOCastOptionValueEnum::STATUS_VALUE_ERROR) 

enum class EPICOCastOptionValueEnum : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EPICOCastOptionValueEnum>();

#define FOREACH_ENUM_EPICOCASTOPTIONORSTATUSENUM(op) \
	op(EPICOCastOptionOrStatusEnum::OPTION_RESOLUTION_LEVEL) \
	op(EPICOCastOptionOrStatusEnum::OPTION_BITRATE_LEVEL) \
	op(EPICOCastOptionOrStatusEnum::OPTION_AUDIO_ENABLE) \
	op(EPICOCastOptionOrStatusEnum::PICO_CAST_STATUS) 

enum class EPICOCastOptionOrStatusEnum : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EPICOCastOptionOrStatusEnum>();

#define FOREACH_ENUM_EPICOCASTAUTHORIZATION(op) \
	op(EPICOCastAuthorization::ASK_EVERY_TIME) \
	op(EPICOCastAuthorization::ALWAYS_ALLOW) \
	op(EPICOCastAuthorization::NOT_ACCEPTED) 

enum class EPICOCastAuthorization : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EPICOCastAuthorization>();

#define FOREACH_ENUM_ECASTINITRESULT(op) \
	op(ECastInitResult::DISCONNECT) \
	op(ECastInitResult::CONNECT) \
	op(ECastInitResult::NO_MIC_PERMISSION) 

enum class ECastInitResult : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<ECastInitResult>();

#define FOREACH_ENUM_ECASTRETURNCODE(op) \
	op(ECastReturnCode::FAIL) \
	op(ECastReturnCode::SUCCESS) 

enum class ECastReturnCode : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<ECastReturnCode>();

#define FOREACH_ENUM_EINSTALLOTARETURNCODE(op) \
	op(EInstallOTAReturnCode::SUCCESS) \
	op(EInstallOTAReturnCode::FAIL) \
	op(EInstallOTAReturnCode::LOWVERSIONOFOTA) 

enum class EInstallOTAReturnCode : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EInstallOTAReturnCode>();

#define FOREACH_ENUM_EUSBCONFIGMODEENUM(op) \
	op(EUSBConfigModeEnum::MTP) \
	op(EUSBConfigModeEnum::CHARGE) 

enum class EUSBConfigModeEnum : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EUSBConfigModeEnum>();

#define FOREACH_ENUM_ESYSTEMFUNCTIONSWITCHENUM(op) \
	op(ESystemFunctionSwitchEnum::SFS_USB) \
	op(ESystemFunctionSwitchEnum::SFS_AUTOSLEEP) \
	op(ESystemFunctionSwitchEnum::SFS_SCREENON_CHARGING) \
	op(ESystemFunctionSwitchEnum::SFS_OTG_CHARGING) \
	op(ESystemFunctionSwitchEnum::SFS_RETURN_MENU_IN_2DMODE) \
	op(ESystemFunctionSwitchEnum::SFS_COMBINATION_KEY) \
	op(ESystemFunctionSwitchEnum::SFS_CALIBRATION_WITH_POWER_ON) \
	op(ESystemFunctionSwitchEnum::SFS_SYSTEM_UPDATE) \
	op(ESystemFunctionSwitchEnum::SFS_CAST_SERVICE) \
	op(ESystemFunctionSwitchEnum::SFS_EYE_PROTECTION) \
	op(ESystemFunctionSwitchEnum::SFS_SECURITY_ZONE_PERMANENTLY) \
	op(ESystemFunctionSwitchEnum::SFS_GLOBAL_CALIBRATION) \
	op(ESystemFunctionSwitchEnum::SFS_Auto_Calibration) \
	op(ESystemFunctionSwitchEnum::SFS_USB_BOOT) \
	op(ESystemFunctionSwitchEnum::SFS_VOLUME_UI) \
	op(ESystemFunctionSwitchEnum::SFS_CONTROLLER_UI) \
	op(ESystemFunctionSwitchEnum::SFS_NAVGATION_SWITCH) \
	op(ESystemFunctionSwitchEnum::SFS_SHORTCUT_SHOW_RECORD_UI) \
	op(ESystemFunctionSwitchEnum::SFS_SHORTCUT_SHOW_FIT_UI) \
	op(ESystemFunctionSwitchEnum::SFS_SHORTCUT_SHOW_CAST_UI) \
	op(ESystemFunctionSwitchEnum::SFS_SHORTCUT_SHOW_CAPTURE_UI) \
	op(ESystemFunctionSwitchEnum::SFS_STOP_MEM_INFO_SERVICE) \
	op(ESystemFunctionSwitchEnum::SFS_START_APP_BOOT_COMPLETED) \
	op(ESystemFunctionSwitchEnum::SFS_USB_FORCE_HOST) \
	op(ESystemFunctionSwitchEnum::SFS_SET_DEFAULT_SAFETY_ZONE) \
	op(ESystemFunctionSwitchEnum::SFS_ALLOW_RESET_BOUNDARY) \
	op(ESystemFunctionSwitchEnum::SFS_BOUNDARY_CONFIRMATION_SCREEN) \
	op(ESystemFunctionSwitchEnum::SFS_LONG_PRESS_HOME_TO_RECENTER) \
	op(ESystemFunctionSwitchEnum::SFS_POWER_CTRL_WIFI_ENABLE) \
	op(ESystemFunctionSwitchEnum::SFS_WIFI_DISABLE) \
	op(ESystemFunctionSwitchEnum::SFS_SIX_DOF_SWITCH) \
	op(ESystemFunctionSwitchEnum::SFS_INVERSE_DISPERSION) 

enum class ESystemFunctionSwitchEnum : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<ESystemFunctionSwitchEnum>();

#define FOREACH_ENUM_ESLEEPDELAYTIMEENUM(op) \
	op(ESleepDelayTimeEnum::FIFTEEN) \
	op(ESleepDelayTimeEnum::THIRTY) \
	op(ESleepDelayTimeEnum::SIXTY) \
	op(ESleepDelayTimeEnum::THREE_HUNDRED) \
	op(ESleepDelayTimeEnum::SIX_HUNDRED) \
	op(ESleepDelayTimeEnum::ONE_THOUSAND_AND_EIGHT_HUNDRED) \
	op(ESleepDelayTimeEnum::NEVER) 

enum class ESleepDelayTimeEnum : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<ESleepDelayTimeEnum>();

#define FOREACH_ENUM_ESCREENOFFDELAYTIMEENUM(op) \
	op(EScreenOffDelayTimeEnum::THREE) \
	op(EScreenOffDelayTimeEnum::TEN) \
	op(EScreenOffDelayTimeEnum::THIRTY) \
	op(EScreenOffDelayTimeEnum::SIXTY) \
	op(EScreenOffDelayTimeEnum::THREE_HUNDRED) \
	op(EScreenOffDelayTimeEnum::SIX_HUNDRED) \
	op(EScreenOffDelayTimeEnum::NEVER) 

enum class EScreenOffDelayTimeEnum : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EScreenOffDelayTimeEnum>();

#define FOREACH_ENUM_EHOMEFUNCTIONENUM(op) \
	op(EHomeFunctionEnum::VALUE_HOME_GO_TO_SETTING) \
	op(EHomeFunctionEnum::VALUE_HOME_BACK) \
	op(EHomeFunctionEnum::VALUE_HOME_RECENTER) \
	op(EHomeFunctionEnum::VALUE_HOME_OPEN_APP) \
	op(EHomeFunctionEnum::VALUE_HOME_DISABLE) \
	op(EHomeFunctionEnum::VALUE_HOME_GO_TO_HOME) \
	op(EHomeFunctionEnum::VALUE_HOME_SEND_BROADCAST) \
	op(EHomeFunctionEnum::VALUE_HOME_CLEAN_MEMORY) \
	op(EHomeFunctionEnum::VALUE_HOME_QUICK_SETTING) \
	op(EHomeFunctionEnum::VALUE_HOME_SCREEN_CAP) \
	op(EHomeFunctionEnum::VALUE_HOME_SCREEN_RECORD) 

enum class EHomeFunctionEnum : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EHomeFunctionEnum>();

#define FOREACH_ENUM_EHOMEEVENTENUM(op) \
	op(EHomeEventEnum::HOME_SINGLE_CLICK) \
	op(EHomeEventEnum::HOME_DOUBLE_CLICK) \
	op(EHomeEventEnum::HOME_LONG_PRESS) \
	op(EHomeEventEnum::HOME_SINGLE_CLICK_RIGHT_CTL) \
	op(EHomeEventEnum::HOME_DOUBLE_CLICK_RIGHT_CTL) \
	op(EHomeEventEnum::HOME_LONG_PRESS_RIGHT_CTL) \
	op(EHomeEventEnum::HOME_SINGLE_CLICK_LEFT_CTL) \
	op(EHomeEventEnum::HOME_DOUBLE_CLICK_LEFT_CTL) \
	op(EHomeEventEnum::HOME_LONG_PRESS_LEFT_CTL) \
	op(EHomeEventEnum::HOME_SINGLE_CLICK_HMD) \
	op(EHomeEventEnum::HOME_DOUBLE_CLICK_HMD) \
	op(EHomeEventEnum::HOME_LONG_PRESS_HMD) 

enum class EHomeEventEnum : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EHomeEventEnum>();

#define FOREACH_ENUM_ESWITCHENUM(op) \
	op(ESwitchEnum::S_ON) \
	op(ESwitchEnum::S_OFF) 

enum class ESwitchEnum : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<ESwitchEnum>();

#define FOREACH_ENUM_EPACKAGECONTROLENUM(op) \
	op(EPackageControlEnum::PACKAGE_SILENCE_INSTALL) \
	op(EPackageControlEnum::PACKAGE_SILENCE_UNINSTALL) 

enum class EPackageControlEnum : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EPackageControlEnum>();

#define FOREACH_ENUM_EDEVICECONTROLENUM(op) \
	op(EDeviceControlEnum::DEVICE_CONTROL_REBOOT) \
	op(EDeviceControlEnum::DEVICE_CONTROL_SHUTDOWN) 

enum class EDeviceControlEnum : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EDeviceControlEnum>();

#define FOREACH_ENUM_ESYSTEMINFOENUM(op) \
	op(ESystemInfoEnum::ELECTRIC_QUANTITY) \
	op(ESystemInfoEnum::PUI_VERSION) \
	op(ESystemInfoEnum::EQUIPMENT_MODEL) \
	op(ESystemInfoEnum::EQUIPMENT_SN) \
	op(ESystemInfoEnum::CUSTOMER_SN) \
	op(ESystemInfoEnum::INTERNAL_STORAGE_SPACE_OF_THE_DEVICE) \
	op(ESystemInfoEnum::DEVICE_BLUETOOTH_STATUS) \
	op(ESystemInfoEnum::BLUETOOTH_NAME_CONNECTED) \
	op(ESystemInfoEnum::BLUETOOTH_MAC_ADDRESS) \
	op(ESystemInfoEnum::DEVICE_WIFI_STATUS) \
	op(ESystemInfoEnum::WIFI_NAME_CONNECTED) \
	op(ESystemInfoEnum::WLAN_MAC_ADDRESS) \
	op(ESystemInfoEnum::DEVICE_IP) \
	op(ESystemInfoEnum::CHARGING_STATUS) 

enum class ESystemInfoEnum : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<ESystemInfoEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
