// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPico_LeaderboardEntryArray;
class UPico_LeaderboardArray;
class UObject;
enum class ELeaderboardStartAt : uint8;
enum class ELeaderboardFilterType : uint8;
class UPico_User;
struct FDateTime;
struct FPicoSupplementaryMetric;
struct FPicoDestination;
class UPico_LeaderboardEntry;
class UPico_Leaderboard;
#ifdef ONLINESUBSYSTEMPICO_Pico_Leaderboards_generated_h
#error "Pico_Leaderboards.generated.h already included, missing '#pragma once' in Pico_Leaderboards.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_Leaderboards_generated_h

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_33_DELEGATE \
struct _Script_OnlineSubsystemPico_eventWriteEntryWithSupplementaryMetric_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	bool WriteResult; \
}; \
static inline void FWriteEntryWithSupplementaryMetric_DelegateWrapper(const FScriptDelegate& WriteEntryWithSupplementaryMetric, bool bIsError, const FString& ErrorMessage, bool WriteResult) \
{ \
	_Script_OnlineSubsystemPico_eventWriteEntryWithSupplementaryMetric_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.WriteResult=WriteResult ? true : false; \
	WriteEntryWithSupplementaryMetric.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_32_DELEGATE \
struct _Script_OnlineSubsystemPico_eventWriteEntry_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	bool WriteResult; \
}; \
static inline void FWriteEntry_DelegateWrapper(const FScriptDelegate& WriteEntry, bool bIsError, const FString& ErrorMessage, bool WriteResult) \
{ \
	_Script_OnlineSubsystemPico_eventWriteEntry_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.WriteResult=WriteResult ? true : false; \
	WriteEntry.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_31_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetEntriesByIds_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_LeaderboardEntryArray* LeaderboardEntryList; \
}; \
static inline void FGetEntriesByIds_DelegateWrapper(const FScriptDelegate& GetEntriesByIds, bool bIsError, const FString& ErrorMessage, UPico_LeaderboardEntryArray* LeaderboardEntryList) \
{ \
	_Script_OnlineSubsystemPico_eventGetEntriesByIds_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.LeaderboardEntryList=LeaderboardEntryList; \
	GetEntriesByIds.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_30_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetEntriesAfterRank_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_LeaderboardEntryArray* LeaderboardEntryList; \
}; \
static inline void FGetEntriesAfterRank_DelegateWrapper(const FScriptDelegate& GetEntriesAfterRank, bool bIsError, const FString& ErrorMessage, UPico_LeaderboardEntryArray* LeaderboardEntryList) \
{ \
	_Script_OnlineSubsystemPico_eventGetEntriesAfterRank_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.LeaderboardEntryList=LeaderboardEntryList; \
	GetEntriesAfterRank.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_29_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetEntries_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_LeaderboardEntryArray* LeaderboardEntryList; \
}; \
static inline void FGetEntries_DelegateWrapper(const FScriptDelegate& GetEntries, bool bIsError, const FString& ErrorMessage, UPico_LeaderboardEntryArray* LeaderboardEntryList) \
{ \
	_Script_OnlineSubsystemPico_eventGetEntries_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.LeaderboardEntryList=LeaderboardEntryList; \
	GetEntries.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_28_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGet_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_LeaderboardArray* LeaderboardList; \
}; \
static inline void FGet_DelegateWrapper(const FScriptDelegate& Get, bool bIsError, const FString& ErrorMessage, UPico_LeaderboardArray* LeaderboardList) \
{ \
	_Script_OnlineSubsystemPico_eventGet_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.LeaderboardList=LeaderboardList; \
	Get.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWriteEntryWithSupplementaryMetric); \
	DECLARE_FUNCTION(execWriteEntry); \
	DECLARE_FUNCTION(execGetEntriesByIds); \
	DECLARE_FUNCTION(execGetEntriesAfterRank); \
	DECLARE_FUNCTION(execGetEntries); \
	DECLARE_FUNCTION(execGet);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWriteEntryWithSupplementaryMetric); \
	DECLARE_FUNCTION(execWriteEntry); \
	DECLARE_FUNCTION(execGetEntriesByIds); \
	DECLARE_FUNCTION(execGetEntriesAfterRank); \
	DECLARE_FUNCTION(execGetEntries); \
	DECLARE_FUNCTION(execGet);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoLeaderboardsFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoLeaderboardsFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoLeaderboardsFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoLeaderboardsFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoLeaderboardsFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoLeaderboardsFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoLeaderboardsFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoLeaderboardsFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoLeaderboardsFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoLeaderboardsFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoLeaderboardsFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoLeaderboardsFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoLeaderboardsFunction(UOnlinePicoLeaderboardsFunction&&); \
	NO_API UOnlinePicoLeaderboardsFunction(const UOnlinePicoLeaderboardsFunction&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoLeaderboardsFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoLeaderboardsFunction(UOnlinePicoLeaderboardsFunction&&); \
	NO_API UOnlinePicoLeaderboardsFunction(const UOnlinePicoLeaderboardsFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoLeaderboardsFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoLeaderboardsFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoLeaderboardsFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_194_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_197_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoLeaderboardsFunction>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetExtraDataString); \
	DECLARE_FUNCTION(execGetUser); \
	DECLARE_FUNCTION(execGetTimestampDateTime); \
	DECLARE_FUNCTION(execGetTimestamp); \
	DECLARE_FUNCTION(execGetSupplementaryMetricOptional); \
	DECLARE_FUNCTION(execGetScore); \
	DECLARE_FUNCTION(execGetRank); \
	DECLARE_FUNCTION(execGetDisplayScore); \
	DECLARE_FUNCTION(execGetID);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetExtraDataString); \
	DECLARE_FUNCTION(execGetUser); \
	DECLARE_FUNCTION(execGetTimestampDateTime); \
	DECLARE_FUNCTION(execGetTimestamp); \
	DECLARE_FUNCTION(execGetSupplementaryMetricOptional); \
	DECLARE_FUNCTION(execGetScore); \
	DECLARE_FUNCTION(execGetRank); \
	DECLARE_FUNCTION(execGetDisplayScore); \
	DECLARE_FUNCTION(execGetID);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_LeaderboardEntry(); \
	friend struct Z_Construct_UClass_UPico_LeaderboardEntry_Statics; \
public: \
	DECLARE_CLASS(UPico_LeaderboardEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_LeaderboardEntry)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_INCLASS \
private: \
	static void StaticRegisterNativesUPico_LeaderboardEntry(); \
	friend struct Z_Construct_UClass_UPico_LeaderboardEntry_Statics; \
public: \
	DECLARE_CLASS(UPico_LeaderboardEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_LeaderboardEntry)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_LeaderboardEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_LeaderboardEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_LeaderboardEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_LeaderboardEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_LeaderboardEntry(UPico_LeaderboardEntry&&); \
	NO_API UPico_LeaderboardEntry(const UPico_LeaderboardEntry&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_LeaderboardEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_LeaderboardEntry(UPico_LeaderboardEntry&&); \
	NO_API UPico_LeaderboardEntry(const UPico_LeaderboardEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_LeaderboardEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_LeaderboardEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_LeaderboardEntry)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__User() { return STRUCT_OFFSET(UPico_LeaderboardEntry, User); }


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_336_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_340_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_LeaderboardEntry>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDestinationOptional); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetApiName);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDestinationOptional); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetApiName);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_Leaderboard(); \
	friend struct Z_Construct_UClass_UPico_Leaderboard_Statics; \
public: \
	DECLARE_CLASS(UPico_Leaderboard, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_Leaderboard)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_INCLASS \
private: \
	static void StaticRegisterNativesUPico_Leaderboard(); \
	friend struct Z_Construct_UClass_UPico_Leaderboard_Statics; \
public: \
	DECLARE_CLASS(UPico_Leaderboard, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_Leaderboard)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_Leaderboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_Leaderboard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_Leaderboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_Leaderboard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_Leaderboard(UPico_Leaderboard&&); \
	NO_API UPico_Leaderboard(const UPico_Leaderboard&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_Leaderboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_Leaderboard(UPico_Leaderboard&&); \
	NO_API UPico_Leaderboard(const UPico_Leaderboard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_Leaderboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_Leaderboard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_Leaderboard)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_377_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_381_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_Leaderboard>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetTotalSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetTotalSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_LeaderboardEntryArray(); \
	friend struct Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics; \
public: \
	DECLARE_CLASS(UPico_LeaderboardEntryArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_LeaderboardEntryArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_INCLASS \
private: \
	static void StaticRegisterNativesUPico_LeaderboardEntryArray(); \
	friend struct Z_Construct_UClass_UPico_LeaderboardEntryArray_Statics; \
public: \
	DECLARE_CLASS(UPico_LeaderboardEntryArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_LeaderboardEntryArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_LeaderboardEntryArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_LeaderboardEntryArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_LeaderboardEntryArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_LeaderboardEntryArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_LeaderboardEntryArray(UPico_LeaderboardEntryArray&&); \
	NO_API UPico_LeaderboardEntryArray(const UPico_LeaderboardEntryArray&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_LeaderboardEntryArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_LeaderboardEntryArray(UPico_LeaderboardEntryArray&&); \
	NO_API UPico_LeaderboardEntryArray(const UPico_LeaderboardEntryArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_LeaderboardEntryArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_LeaderboardEntryArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_LeaderboardEntryArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LeaderboardEntryArray() { return STRUCT_OFFSET(UPico_LeaderboardEntryArray, LeaderboardEntryArray); }


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_402_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_405_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_LeaderboardEntryArray>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_LeaderboardArray(); \
	friend struct Z_Construct_UClass_UPico_LeaderboardArray_Statics; \
public: \
	DECLARE_CLASS(UPico_LeaderboardArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_LeaderboardArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_INCLASS \
private: \
	static void StaticRegisterNativesUPico_LeaderboardArray(); \
	friend struct Z_Construct_UClass_UPico_LeaderboardArray_Statics; \
public: \
	DECLARE_CLASS(UPico_LeaderboardArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_LeaderboardArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_LeaderboardArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_LeaderboardArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_LeaderboardArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_LeaderboardArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_LeaderboardArray(UPico_LeaderboardArray&&); \
	NO_API UPico_LeaderboardArray(const UPico_LeaderboardArray&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_LeaderboardArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_LeaderboardArray(UPico_LeaderboardArray&&); \
	NO_API UPico_LeaderboardArray(const UPico_LeaderboardArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_LeaderboardArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_LeaderboardArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_LeaderboardArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LeaderboardArray() { return STRUCT_OFFSET(UPico_LeaderboardArray, LeaderboardArray); }


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_432_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h_436_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_LeaderboardArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Leaderboards_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
