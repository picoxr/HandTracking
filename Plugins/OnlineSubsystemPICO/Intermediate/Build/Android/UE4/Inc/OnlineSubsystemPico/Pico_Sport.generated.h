// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPico_SportUserInfo;
class UPico_SportSummary;
class UPico_SportDailySummaryArray;
struct FDateTime;
class UObject;
class UPico_SportDailySummary;
enum class ESportTarget : uint8;
enum class EUserGender : uint8;
#ifdef ONLINESUBSYSTEMPICO_Pico_Sport_generated_h
#error "Pico_Sport.generated.h already included, missing '#pragma once' in Pico_Sport.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_Sport_generated_h

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_23_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetSportUserInfo_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_SportUserInfo* SportUserInfo; \
}; \
static inline void FGetSportUserInfo_DelegateWrapper(const FScriptDelegate& GetSportUserInfo, bool bIsError, const FString& ErrorMessage, UPico_SportUserInfo* SportUserInfo) \
{ \
	_Script_OnlineSubsystemPico_eventGetSportUserInfo_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.SportUserInfo=SportUserInfo; \
	GetSportUserInfo.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_22_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetSummary_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_SportSummary* SportSummary; \
}; \
static inline void FGetSummary_DelegateWrapper(const FScriptDelegate& GetSummary, bool bIsError, const FString& ErrorMessage, UPico_SportSummary* SportSummary) \
{ \
	_Script_OnlineSubsystemPico_eventGetSummary_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.SportSummary=SportSummary; \
	GetSummary.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_21_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetDailySummary_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_SportDailySummaryArray* SportDailySummaryArray; \
}; \
static inline void FGetDailySummary_DelegateWrapper(const FScriptDelegate& GetDailySummary, bool bIsError, const FString& ErrorMessage, UPico_SportDailySummaryArray* SportDailySummaryArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetDailySummary_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.SportDailySummaryArray=SportDailySummaryArray; \
	GetDailySummary.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertInt64ToDateTime); \
	DECLARE_FUNCTION(execConvertDateTimeToInt64); \
	DECLARE_FUNCTION(execGetSportUserInfo); \
	DECLARE_FUNCTION(execGetSummary); \
	DECLARE_FUNCTION(execGetDailySummary);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertInt64ToDateTime); \
	DECLARE_FUNCTION(execConvertDateTimeToInt64); \
	DECLARE_FUNCTION(execGetSportUserInfo); \
	DECLARE_FUNCTION(execGetSummary); \
	DECLARE_FUNCTION(execGetDailySummary);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoSportFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoSportFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoSportFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoSportFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoSportFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoSportFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoSportFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoSportFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoSportFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoSportFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoSportFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoSportFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoSportFunction(UOnlinePicoSportFunction&&); \
	NO_API UOnlinePicoSportFunction(const UOnlinePicoSportFunction&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoSportFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoSportFunction(UOnlinePicoSportFunction&&); \
	NO_API UOnlinePicoSportFunction(const UOnlinePicoSportFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoSportFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoSportFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoSportFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_109_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoSportFunction>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlanCalorie); \
	DECLARE_FUNCTION(execGetCalorie); \
	DECLARE_FUNCTION(execGetPlanDurationInMinutes); \
	DECLARE_FUNCTION(execGetDurationInSeconds); \
	DECLARE_FUNCTION(execGetDate); \
	DECLARE_FUNCTION(execGetID);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlanCalorie); \
	DECLARE_FUNCTION(execGetCalorie); \
	DECLARE_FUNCTION(execGetPlanDurationInMinutes); \
	DECLARE_FUNCTION(execGetDurationInSeconds); \
	DECLARE_FUNCTION(execGetDate); \
	DECLARE_FUNCTION(execGetID);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_SportDailySummary(); \
	friend struct Z_Construct_UClass_UPico_SportDailySummary_Statics; \
public: \
	DECLARE_CLASS(UPico_SportDailySummary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SportDailySummary)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_INCLASS \
private: \
	static void StaticRegisterNativesUPico_SportDailySummary(); \
	friend struct Z_Construct_UClass_UPico_SportDailySummary_Statics; \
public: \
	DECLARE_CLASS(UPico_SportDailySummary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SportDailySummary)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SportDailySummary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SportDailySummary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SportDailySummary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SportDailySummary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SportDailySummary(UPico_SportDailySummary&&); \
	NO_API UPico_SportDailySummary(const UPico_SportDailySummary&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SportDailySummary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SportDailySummary(UPico_SportDailySummary&&); \
	NO_API UPico_SportDailySummary(const UPico_SportDailySummary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SportDailySummary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SportDailySummary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SportDailySummary)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_187_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_190_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_SportDailySummary>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetElement); \
	DECLARE_FUNCTION(execGetSize);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetElement); \
	DECLARE_FUNCTION(execGetSize);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_SportDailySummaryArray(); \
	friend struct Z_Construct_UClass_UPico_SportDailySummaryArray_Statics; \
public: \
	DECLARE_CLASS(UPico_SportDailySummaryArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SportDailySummaryArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_INCLASS \
private: \
	static void StaticRegisterNativesUPico_SportDailySummaryArray(); \
	friend struct Z_Construct_UClass_UPico_SportDailySummaryArray_Statics; \
public: \
	DECLARE_CLASS(UPico_SportDailySummaryArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SportDailySummaryArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SportDailySummaryArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SportDailySummaryArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SportDailySummaryArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SportDailySummaryArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SportDailySummaryArray(UPico_SportDailySummaryArray&&); \
	NO_API UPico_SportDailySummaryArray(const UPico_SportDailySummaryArray&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SportDailySummaryArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SportDailySummaryArray(UPico_SportDailySummaryArray&&); \
	NO_API UPico_SportDailySummaryArray(const UPico_SportDailySummaryArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SportDailySummaryArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SportDailySummaryArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SportDailySummaryArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SportDailySummaryArray() { return STRUCT_OFFSET(UPico_SportDailySummaryArray, SportDailySummaryArray); }


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_229_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_232_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_SportDailySummaryArray>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEndTime); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execGetCalorie); \
	DECLARE_FUNCTION(execGetDurationInSeconds);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEndTime); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execGetCalorie); \
	DECLARE_FUNCTION(execGetDurationInSeconds);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_SportSummary(); \
	friend struct Z_Construct_UClass_UPico_SportSummary_Statics; \
public: \
	DECLARE_CLASS(UPico_SportSummary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SportSummary)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_INCLASS \
private: \
	static void StaticRegisterNativesUPico_SportSummary(); \
	friend struct Z_Construct_UClass_UPico_SportSummary_Statics; \
public: \
	DECLARE_CLASS(UPico_SportSummary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SportSummary)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SportSummary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SportSummary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SportSummary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SportSummary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SportSummary(UPico_SportSummary&&); \
	NO_API UPico_SportSummary(const UPico_SportSummary&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SportSummary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SportSummary(UPico_SportSummary&&); \
	NO_API UPico_SportSummary(const UPico_SportSummary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SportSummary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SportSummary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SportSummary)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_250_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_253_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_SportSummary>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSportTarget); \
	DECLARE_FUNCTION(execGetDaysPerWeek); \
	DECLARE_FUNCTION(execGetDailyDurationInMinutes); \
	DECLARE_FUNCTION(execGetSportLevel); \
	DECLARE_FUNCTION(execGetWeight); \
	DECLARE_FUNCTION(execGetStature); \
	DECLARE_FUNCTION(execGetBirthday); \
	DECLARE_FUNCTION(execGetGender);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSportTarget); \
	DECLARE_FUNCTION(execGetDaysPerWeek); \
	DECLARE_FUNCTION(execGetDailyDurationInMinutes); \
	DECLARE_FUNCTION(execGetSportLevel); \
	DECLARE_FUNCTION(execGetWeight); \
	DECLARE_FUNCTION(execGetStature); \
	DECLARE_FUNCTION(execGetBirthday); \
	DECLARE_FUNCTION(execGetGender);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_SportUserInfo(); \
	friend struct Z_Construct_UClass_UPico_SportUserInfo_Statics; \
public: \
	DECLARE_CLASS(UPico_SportUserInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SportUserInfo)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_INCLASS \
private: \
	static void StaticRegisterNativesUPico_SportUserInfo(); \
	friend struct Z_Construct_UClass_UPico_SportUserInfo_Statics; \
public: \
	DECLARE_CLASS(UPico_SportUserInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SportUserInfo)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SportUserInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SportUserInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SportUserInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SportUserInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SportUserInfo(UPico_SportUserInfo&&); \
	NO_API UPico_SportUserInfo(const UPico_SportUserInfo&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SportUserInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SportUserInfo(UPico_SportUserInfo&&); \
	NO_API UPico_SportUserInfo(const UPico_SportUserInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SportUserInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SportUserInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SportUserInfo)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_282_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_285_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_SportUserInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
