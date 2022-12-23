// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPico_AssetDetailsArray;
class UPico_AssetStatus;
class UPico_AssetFileDownloadCancelResult;
class UPico_AssetFileDownloadResult;
class UPico_AssetFileDeleteResult;
class UObject;
class UPico_AssetDetails;
enum class EAssetFileDownloadCompleteStatus : uint8;
#ifdef ONLINESUBSYSTEMPICO_Pico_AssetFile_generated_h
#error "Pico_AssetFile.generated.h already included, missing '#pragma once' in Pico_AssetFile.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_AssetFile_generated_h

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_21_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetAssetFileList_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_AssetDetailsArray* AssetDetailsArray; \
}; \
static inline void FGetAssetFileList_DelegateWrapper(const FScriptDelegate& GetAssetFileList, bool bIsError, const FString& ErrorMessage, UPico_AssetDetailsArray* AssetDetailsArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetAssetFileList_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.AssetDetailsArray=AssetDetailsArray; \
	GetAssetFileList.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_20_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetAssetFileStatus_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_AssetStatus* AssetFileStatus; \
}; \
static inline void FGetAssetFileStatus_DelegateWrapper(const FScriptDelegate& GetAssetFileStatus, bool bIsError, const FString& ErrorMessage, UPico_AssetStatus* AssetFileStatus) \
{ \
	_Script_OnlineSubsystemPico_eventGetAssetFileStatus_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.AssetFileStatus=AssetFileStatus; \
	GetAssetFileStatus.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_19_DELEGATE \
struct _Script_OnlineSubsystemPico_eventAssetFileDownloadCancelResult_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_AssetFileDownloadCancelResult* DownloadCancelResult; \
}; \
static inline void FAssetFileDownloadCancelResult_DelegateWrapper(const FScriptDelegate& AssetFileDownloadCancelResult, bool bIsError, const FString& ErrorMessage, UPico_AssetFileDownloadCancelResult* DownloadCancelResult) \
{ \
	_Script_OnlineSubsystemPico_eventAssetFileDownloadCancelResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.DownloadCancelResult=DownloadCancelResult; \
	AssetFileDownloadCancelResult.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_18_DELEGATE \
struct _Script_OnlineSubsystemPico_eventAssetFileDownloadResult_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_AssetFileDownloadResult* DownloadResult; \
}; \
static inline void FAssetFileDownloadResult_DelegateWrapper(const FScriptDelegate& AssetFileDownloadResult, bool bIsError, const FString& ErrorMessage, UPico_AssetFileDownloadResult* DownloadResult) \
{ \
	_Script_OnlineSubsystemPico_eventAssetFileDownloadResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.DownloadResult=DownloadResult; \
	AssetFileDownloadResult.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_17_DELEGATE \
struct _Script_OnlineSubsystemPico_eventAssetFileDeleteResult_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_AssetFileDeleteResult* DeleteResult; \
}; \
static inline void FAssetFileDeleteResult_DelegateWrapper(const FScriptDelegate& AssetFileDeleteResult, bool bIsError, const FString& ErrorMessage, UPico_AssetFileDeleteResult* DeleteResult) \
{ \
	_Script_OnlineSubsystemPico_eventAssetFileDeleteResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.DeleteResult=DeleteResult; \
	AssetFileDeleteResult.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAssetFileStatusByName); \
	DECLARE_FUNCTION(execGetAssetFileStatusById); \
	DECLARE_FUNCTION(execGetNextAssetDetailsArrayPage); \
	DECLARE_FUNCTION(execGetAssetFileList); \
	DECLARE_FUNCTION(execDownloadCancelByName); \
	DECLARE_FUNCTION(execDownloadCancelById); \
	DECLARE_FUNCTION(execDownloadByName); \
	DECLARE_FUNCTION(execDownloadById); \
	DECLARE_FUNCTION(execDeleteByName); \
	DECLARE_FUNCTION(execDeleteByID);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAssetFileStatusByName); \
	DECLARE_FUNCTION(execGetAssetFileStatusById); \
	DECLARE_FUNCTION(execGetNextAssetDetailsArrayPage); \
	DECLARE_FUNCTION(execGetAssetFileList); \
	DECLARE_FUNCTION(execDownloadCancelByName); \
	DECLARE_FUNCTION(execDownloadCancelById); \
	DECLARE_FUNCTION(execDownloadByName); \
	DECLARE_FUNCTION(execDownloadById); \
	DECLARE_FUNCTION(execDeleteByName); \
	DECLARE_FUNCTION(execDeleteByID);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoAssetFileFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoAssetFileFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoAssetFileFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoAssetFileFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoAssetFileFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoAssetFileFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoAssetFileFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoAssetFileFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoAssetFileFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoAssetFileFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoAssetFileFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoAssetFileFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoAssetFileFunction(UOnlinePicoAssetFileFunction&&); \
	NO_API UOnlinePicoAssetFileFunction(const UOnlinePicoAssetFileFunction&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoAssetFileFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoAssetFileFunction(UOnlinePicoAssetFileFunction&&); \
	NO_API UOnlinePicoAssetFileFunction(const UOnlinePicoAssetFileFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoAssetFileFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoAssetFileFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoAssetFileFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_198_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_201_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoAssetFileFunction>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSuccess); \
	DECLARE_FUNCTION(execGetFilePath); \
	DECLARE_FUNCTION(execGetAssetId);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSuccess); \
	DECLARE_FUNCTION(execGetFilePath); \
	DECLARE_FUNCTION(execGetAssetId);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_AssetFileDeleteResult(); \
	friend struct Z_Construct_UClass_UPico_AssetFileDeleteResult_Statics; \
public: \
	DECLARE_CLASS(UPico_AssetFileDeleteResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AssetFileDeleteResult)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_INCLASS \
private: \
	static void StaticRegisterNativesUPico_AssetFileDeleteResult(); \
	friend struct Z_Construct_UClass_UPico_AssetFileDeleteResult_Statics; \
public: \
	DECLARE_CLASS(UPico_AssetFileDeleteResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AssetFileDeleteResult)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AssetFileDeleteResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AssetFileDeleteResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AssetFileDeleteResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AssetFileDeleteResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AssetFileDeleteResult(UPico_AssetFileDeleteResult&&); \
	NO_API UPico_AssetFileDeleteResult(const UPico_AssetFileDeleteResult&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AssetFileDeleteResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AssetFileDeleteResult(UPico_AssetFileDeleteResult&&); \
	NO_API UPico_AssetFileDeleteResult(const UPico_AssetFileDeleteResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AssetFileDeleteResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AssetFileDeleteResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AssetFileDeleteResult)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_359_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_363_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_AssetFileDeleteResult>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIapIconUrl); \
	DECLARE_FUNCTION(execGetIapDescription); \
	DECLARE_FUNCTION(execGetIapCurrency); \
	DECLARE_FUNCTION(execGetIapPrice); \
	DECLARE_FUNCTION(execGetIapName); \
	DECLARE_FUNCTION(execGetIapSku); \
	DECLARE_FUNCTION(execGetVersion); \
	DECLARE_FUNCTION(execGetFilename); \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execGetIapStatus); \
	DECLARE_FUNCTION(execGetDownloadStatus); \
	DECLARE_FUNCTION(execGetAssetType); \
	DECLARE_FUNCTION(execGetFilePath); \
	DECLARE_FUNCTION(execGetAssetId);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIapIconUrl); \
	DECLARE_FUNCTION(execGetIapDescription); \
	DECLARE_FUNCTION(execGetIapCurrency); \
	DECLARE_FUNCTION(execGetIapPrice); \
	DECLARE_FUNCTION(execGetIapName); \
	DECLARE_FUNCTION(execGetIapSku); \
	DECLARE_FUNCTION(execGetVersion); \
	DECLARE_FUNCTION(execGetFilename); \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execGetIapStatus); \
	DECLARE_FUNCTION(execGetDownloadStatus); \
	DECLARE_FUNCTION(execGetAssetType); \
	DECLARE_FUNCTION(execGetFilePath); \
	DECLARE_FUNCTION(execGetAssetId);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_AssetDetails(); \
	friend struct Z_Construct_UClass_UPico_AssetDetails_Statics; \
public: \
	DECLARE_CLASS(UPico_AssetDetails, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AssetDetails)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_INCLASS \
private: \
	static void StaticRegisterNativesUPico_AssetDetails(); \
	friend struct Z_Construct_UClass_UPico_AssetDetails_Statics; \
public: \
	DECLARE_CLASS(UPico_AssetDetails, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AssetDetails)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AssetDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AssetDetails) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AssetDetails); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AssetDetails); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AssetDetails(UPico_AssetDetails&&); \
	NO_API UPico_AssetDetails(const UPico_AssetDetails&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AssetDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AssetDetails(UPico_AssetDetails&&); \
	NO_API UPico_AssetDetails(const UPico_AssetDetails&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AssetDetails); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AssetDetails); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AssetDetails)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_389_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_393_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_AssetDetails>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_AssetDetailsArray(); \
	friend struct Z_Construct_UClass_UPico_AssetDetailsArray_Statics; \
public: \
	DECLARE_CLASS(UPico_AssetDetailsArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AssetDetailsArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_INCLASS \
private: \
	static void StaticRegisterNativesUPico_AssetDetailsArray(); \
	friend struct Z_Construct_UClass_UPico_AssetDetailsArray_Statics; \
public: \
	DECLARE_CLASS(UPico_AssetDetailsArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AssetDetailsArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AssetDetailsArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AssetDetailsArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AssetDetailsArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AssetDetailsArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AssetDetailsArray(UPico_AssetDetailsArray&&); \
	NO_API UPico_AssetDetailsArray(const UPico_AssetDetailsArray&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AssetDetailsArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AssetDetailsArray(UPico_AssetDetailsArray&&); \
	NO_API UPico_AssetDetailsArray(const UPico_AssetDetailsArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AssetDetailsArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AssetDetailsArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AssetDetailsArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AssetDetailsArray() { return STRUCT_OFFSET(UPico_AssetDetailsArray, AssetDetailsArray); }


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_461_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_465_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_AssetDetailsArray>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSuccess); \
	DECLARE_FUNCTION(execGetFilePath); \
	DECLARE_FUNCTION(execGetAssetId);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSuccess); \
	DECLARE_FUNCTION(execGetFilePath); \
	DECLARE_FUNCTION(execGetAssetId);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_AssetFileDownloadCancelResult(); \
	friend struct Z_Construct_UClass_UPico_AssetFileDownloadCancelResult_Statics; \
public: \
	DECLARE_CLASS(UPico_AssetFileDownloadCancelResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AssetFileDownloadCancelResult)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_INCLASS \
private: \
	static void StaticRegisterNativesUPico_AssetFileDownloadCancelResult(); \
	friend struct Z_Construct_UClass_UPico_AssetFileDownloadCancelResult_Statics; \
public: \
	DECLARE_CLASS(UPico_AssetFileDownloadCancelResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AssetFileDownloadCancelResult)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AssetFileDownloadCancelResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AssetFileDownloadCancelResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AssetFileDownloadCancelResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AssetFileDownloadCancelResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AssetFileDownloadCancelResult(UPico_AssetFileDownloadCancelResult&&); \
	NO_API UPico_AssetFileDownloadCancelResult(const UPico_AssetFileDownloadCancelResult&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AssetFileDownloadCancelResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AssetFileDownloadCancelResult(UPico_AssetFileDownloadCancelResult&&); \
	NO_API UPico_AssetFileDownloadCancelResult(const UPico_AssetFileDownloadCancelResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AssetFileDownloadCancelResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AssetFileDownloadCancelResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AssetFileDownloadCancelResult)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_493_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_497_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_AssetFileDownloadCancelResult>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCompleteStatus); \
	DECLARE_FUNCTION(execGetBytesTransferred); \
	DECLARE_FUNCTION(execGetBytesTotal); \
	DECLARE_FUNCTION(execGetAssetId);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCompleteStatus); \
	DECLARE_FUNCTION(execGetBytesTransferred); \
	DECLARE_FUNCTION(execGetBytesTotal); \
	DECLARE_FUNCTION(execGetAssetId);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_AssetFileDownloadUpdate(); \
	friend struct Z_Construct_UClass_UPico_AssetFileDownloadUpdate_Statics; \
public: \
	DECLARE_CLASS(UPico_AssetFileDownloadUpdate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AssetFileDownloadUpdate)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_INCLASS \
private: \
	static void StaticRegisterNativesUPico_AssetFileDownloadUpdate(); \
	friend struct Z_Construct_UClass_UPico_AssetFileDownloadUpdate_Statics; \
public: \
	DECLARE_CLASS(UPico_AssetFileDownloadUpdate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AssetFileDownloadUpdate)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AssetFileDownloadUpdate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AssetFileDownloadUpdate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AssetFileDownloadUpdate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AssetFileDownloadUpdate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AssetFileDownloadUpdate(UPico_AssetFileDownloadUpdate&&); \
	NO_API UPico_AssetFileDownloadUpdate(const UPico_AssetFileDownloadUpdate&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AssetFileDownloadUpdate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AssetFileDownloadUpdate(UPico_AssetFileDownloadUpdate&&); \
	NO_API UPico_AssetFileDownloadUpdate(const UPico_AssetFileDownloadUpdate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AssetFileDownloadUpdate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AssetFileDownloadUpdate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AssetFileDownloadUpdate)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_521_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_525_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_AssetFileDownloadUpdate>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFilePath); \
	DECLARE_FUNCTION(execGetAssetId);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFilePath); \
	DECLARE_FUNCTION(execGetAssetId);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_AssetFileDownloadResult(); \
	friend struct Z_Construct_UClass_UPico_AssetFileDownloadResult_Statics; \
public: \
	DECLARE_CLASS(UPico_AssetFileDownloadResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AssetFileDownloadResult)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_INCLASS \
private: \
	static void StaticRegisterNativesUPico_AssetFileDownloadResult(); \
	friend struct Z_Construct_UClass_UPico_AssetFileDownloadResult_Statics; \
public: \
	DECLARE_CLASS(UPico_AssetFileDownloadResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AssetFileDownloadResult)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AssetFileDownloadResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AssetFileDownloadResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AssetFileDownloadResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AssetFileDownloadResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AssetFileDownloadResult(UPico_AssetFileDownloadResult&&); \
	NO_API UPico_AssetFileDownloadResult(const UPico_AssetFileDownloadResult&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AssetFileDownloadResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AssetFileDownloadResult(UPico_AssetFileDownloadResult&&); \
	NO_API UPico_AssetFileDownloadResult(const UPico_AssetFileDownloadResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AssetFileDownloadResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AssetFileDownloadResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AssetFileDownloadResult)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_554_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_558_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_AssetFileDownloadResult>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDownloadStatus); \
	DECLARE_FUNCTION(execGetFileName); \
	DECLARE_FUNCTION(execGetFilePath); \
	DECLARE_FUNCTION(execGetAssetId);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDownloadStatus); \
	DECLARE_FUNCTION(execGetFileName); \
	DECLARE_FUNCTION(execGetFilePath); \
	DECLARE_FUNCTION(execGetAssetId);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_AssetStatus(); \
	friend struct Z_Construct_UClass_UPico_AssetStatus_Statics; \
public: \
	DECLARE_CLASS(UPico_AssetStatus, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AssetStatus)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_INCLASS \
private: \
	static void StaticRegisterNativesUPico_AssetStatus(); \
	friend struct Z_Construct_UClass_UPico_AssetStatus_Statics; \
public: \
	DECLARE_CLASS(UPico_AssetStatus, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AssetStatus)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AssetStatus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AssetStatus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AssetStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AssetStatus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AssetStatus(UPico_AssetStatus&&); \
	NO_API UPico_AssetStatus(const UPico_AssetStatus&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AssetStatus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AssetStatus(UPico_AssetStatus&&); \
	NO_API UPico_AssetStatus(const UPico_AssetStatus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AssetStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AssetStatus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AssetStatus)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_579_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_583_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_AssetStatus>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetReason); \
	DECLARE_FUNCTION(execGetAssetId);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetReason); \
	DECLARE_FUNCTION(execGetAssetId);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_AssetFileDeleteForSafety(); \
	friend struct Z_Construct_UClass_UPico_AssetFileDeleteForSafety_Statics; \
public: \
	DECLARE_CLASS(UPico_AssetFileDeleteForSafety, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AssetFileDeleteForSafety)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_INCLASS \
private: \
	static void StaticRegisterNativesUPico_AssetFileDeleteForSafety(); \
	friend struct Z_Construct_UClass_UPico_AssetFileDeleteForSafety_Statics; \
public: \
	DECLARE_CLASS(UPico_AssetFileDeleteForSafety, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AssetFileDeleteForSafety)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AssetFileDeleteForSafety(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AssetFileDeleteForSafety) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AssetFileDeleteForSafety); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AssetFileDeleteForSafety); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AssetFileDeleteForSafety(UPico_AssetFileDeleteForSafety&&); \
	NO_API UPico_AssetFileDeleteForSafety(const UPico_AssetFileDeleteForSafety&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AssetFileDeleteForSafety(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AssetFileDeleteForSafety(UPico_AssetFileDeleteForSafety&&); \
	NO_API UPico_AssetFileDeleteForSafety(const UPico_AssetFileDeleteForSafety&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AssetFileDeleteForSafety); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AssetFileDeleteForSafety); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AssetFileDeleteForSafety)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_613_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h_617_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_AssetFileDeleteForSafety>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_AssetFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
