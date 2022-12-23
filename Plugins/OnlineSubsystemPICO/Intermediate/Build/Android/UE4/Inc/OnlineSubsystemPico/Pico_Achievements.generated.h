// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPico_AchievementProgressArray;
class UPico_AchievementDefinitionArray;
class UPico_AchievementUpdate;
class UObject;
struct FDateTime;
enum class EAchievementWritePolicy : uint8;
enum class EAchievementType : uint8;
class UPico_AchievementProgress;
class UPico_AchievementDefinition;
#ifdef ONLINESUBSYSTEMPICO_Pico_Achievements_generated_h
#error "Pico_Achievements.generated.h already included, missing '#pragma once' in Pico_Achievements.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_Achievements_generated_h

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_32_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetProgressByName_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_AchievementProgressArray* AchievementProgressArray; \
}; \
static inline void FGetProgressByName_DelegateWrapper(const FScriptDelegate& GetProgressByName, bool bIsError, const FString& ErrorMessage, UPico_AchievementProgressArray* AchievementProgressArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetProgressByName_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.AchievementProgressArray=AchievementProgressArray; \
	GetProgressByName.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_31_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetDefinitionsByName_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_AchievementDefinitionArray* AchievementDefinitionArray; \
}; \
static inline void FGetDefinitionsByName_DelegateWrapper(const FScriptDelegate& GetDefinitionsByName, bool bIsError, const FString& ErrorMessage, UPico_AchievementDefinitionArray* AchievementDefinitionArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetDefinitionsByName_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.AchievementDefinitionArray=AchievementDefinitionArray; \
	GetDefinitionsByName.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_30_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetAllProgress_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_AchievementProgressArray* AchievementProgressArray; \
}; \
static inline void FGetAllProgress_DelegateWrapper(const FScriptDelegate& GetAllProgress, bool bIsError, const FString& ErrorMessage, UPico_AchievementProgressArray* AchievementProgressArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetAllProgress_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.AchievementProgressArray=AchievementProgressArray; \
	GetAllProgress.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_29_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetAllDefinitions_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_AchievementDefinitionArray* AchievementDefinitionArray; \
}; \
static inline void FGetAllDefinitions_DelegateWrapper(const FScriptDelegate& GetAllDefinitions, bool bIsError, const FString& ErrorMessage, UPico_AchievementDefinitionArray* AchievementDefinitionArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetAllDefinitions_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.AchievementDefinitionArray=AchievementDefinitionArray; \
	GetAllDefinitions.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_28_DELEGATE \
struct _Script_OnlineSubsystemPico_eventUnlock_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_AchievementUpdate* AchievementUpdate; \
}; \
static inline void FUnlock_DelegateWrapper(const FScriptDelegate& Unlock, bool bIsError, const FString& ErrorMessage, UPico_AchievementUpdate* AchievementUpdate) \
{ \
	_Script_OnlineSubsystemPico_eventUnlock_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.AchievementUpdate=AchievementUpdate; \
	Unlock.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_27_DELEGATE \
struct _Script_OnlineSubsystemPico_eventAddFields_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_AchievementUpdate* AchievementUpdate; \
}; \
static inline void FAddFields_DelegateWrapper(const FScriptDelegate& AddFields, bool bIsError, const FString& ErrorMessage, UPico_AchievementUpdate* AchievementUpdate) \
{ \
	_Script_OnlineSubsystemPico_eventAddFields_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.AchievementUpdate=AchievementUpdate; \
	AddFields.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_26_DELEGATE \
struct _Script_OnlineSubsystemPico_eventAddCount_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_AchievementUpdate* AchievementUpdate; \
}; \
static inline void FAddCount_DelegateWrapper(const FScriptDelegate& AddCount, bool bIsError, const FString& ErrorMessage, UPico_AchievementUpdate* AchievementUpdate) \
{ \
	_Script_OnlineSubsystemPico_eventAddCount_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.AchievementUpdate=AchievementUpdate; \
	AddCount.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPicoGetProgressByName); \
	DECLARE_FUNCTION(execPicoGetDefinitionsByName); \
	DECLARE_FUNCTION(execPicoGetAllProgress); \
	DECLARE_FUNCTION(execPicoGetAllDefinitions); \
	DECLARE_FUNCTION(execPicoUnlock); \
	DECLARE_FUNCTION(execPicoAddFields); \
	DECLARE_FUNCTION(execPicoAddCount);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPicoGetProgressByName); \
	DECLARE_FUNCTION(execPicoGetDefinitionsByName); \
	DECLARE_FUNCTION(execPicoGetAllProgress); \
	DECLARE_FUNCTION(execPicoGetAllDefinitions); \
	DECLARE_FUNCTION(execPicoUnlock); \
	DECLARE_FUNCTION(execPicoAddFields); \
	DECLARE_FUNCTION(execPicoAddCount);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoAchievementsFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoAchievementsFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoAchievementsFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoAchievementsFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoAchievementsFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoAchievementsFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoAchievementsFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoAchievementsFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoAchievementsFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoAchievementsFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoAchievementsFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoAchievementsFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoAchievementsFunction(UOnlinePicoAchievementsFunction&&); \
	NO_API UOnlinePicoAchievementsFunction(const UOnlinePicoAchievementsFunction&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoAchievementsFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoAchievementsFunction(UOnlinePicoAchievementsFunction&&); \
	NO_API UOnlinePicoAchievementsFunction(const UOnlinePicoAchievementsFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoAchievementsFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoAchievementsFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoAchievementsFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_184_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_187_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoAchievementsFunction>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetJustUnlocked); \
	DECLARE_FUNCTION(execGetName);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetJustUnlocked); \
	DECLARE_FUNCTION(execGetName);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_AchievementUpdate(); \
	friend struct Z_Construct_UClass_UPico_AchievementUpdate_Statics; \
public: \
	DECLARE_CLASS(UPico_AchievementUpdate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AchievementUpdate)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_INCLASS \
private: \
	static void StaticRegisterNativesUPico_AchievementUpdate(); \
	friend struct Z_Construct_UClass_UPico_AchievementUpdate_Statics; \
public: \
	DECLARE_CLASS(UPico_AchievementUpdate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AchievementUpdate)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AchievementUpdate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AchievementUpdate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AchievementUpdate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AchievementUpdate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AchievementUpdate(UPico_AchievementUpdate&&); \
	NO_API UPico_AchievementUpdate(const UPico_AchievementUpdate&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AchievementUpdate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AchievementUpdate(UPico_AchievementUpdate&&); \
	NO_API UPico_AchievementUpdate(const UPico_AchievementUpdate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AchievementUpdate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AchievementUpdate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AchievementUpdate)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_320_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_323_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_AchievementUpdate>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetExtraDataString); \
	DECLARE_FUNCTION(execGetExtraData); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetUnlockDateTime); \
	DECLARE_FUNCTION(execGetUnlockTime); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetIsUnlocked); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execGetBitfield);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetExtraDataString); \
	DECLARE_FUNCTION(execGetExtraData); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetUnlockDateTime); \
	DECLARE_FUNCTION(execGetUnlockTime); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetIsUnlocked); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execGetBitfield);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_AchievementProgress(); \
	friend struct Z_Construct_UClass_UPico_AchievementProgress_Statics; \
public: \
	DECLARE_CLASS(UPico_AchievementProgress, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AchievementProgress)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_INCLASS \
private: \
	static void StaticRegisterNativesUPico_AchievementProgress(); \
	friend struct Z_Construct_UClass_UPico_AchievementProgress_Statics; \
public: \
	DECLARE_CLASS(UPico_AchievementProgress, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AchievementProgress)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AchievementProgress(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AchievementProgress) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AchievementProgress); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AchievementProgress); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AchievementProgress(UPico_AchievementProgress&&); \
	NO_API UPico_AchievementProgress(const UPico_AchievementProgress&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AchievementProgress(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AchievementProgress(UPico_AchievementProgress&&); \
	NO_API UPico_AchievementProgress(const UPico_AchievementProgress&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AchievementProgress); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AchievementProgress); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AchievementProgress)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_339_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_343_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_AchievementProgress>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUnlockedImageURL); \
	DECLARE_FUNCTION(execGetLockedImageURL); \
	DECLARE_FUNCTION(execGetWritePolicy); \
	DECLARE_FUNCTION(execGetUnlockedDescription); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetIsSecret); \
	DECLARE_FUNCTION(execGetIsArchived); \
	DECLARE_FUNCTION(execGetTitle); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execGetTarget); \
	DECLARE_FUNCTION(execGetBitfieldLength); \
	DECLARE_FUNCTION(execGetName);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUnlockedImageURL); \
	DECLARE_FUNCTION(execGetLockedImageURL); \
	DECLARE_FUNCTION(execGetWritePolicy); \
	DECLARE_FUNCTION(execGetUnlockedDescription); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetIsSecret); \
	DECLARE_FUNCTION(execGetIsArchived); \
	DECLARE_FUNCTION(execGetTitle); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execGetTarget); \
	DECLARE_FUNCTION(execGetBitfieldLength); \
	DECLARE_FUNCTION(execGetName);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_AchievementDefinition(); \
	friend struct Z_Construct_UClass_UPico_AchievementDefinition_Statics; \
public: \
	DECLARE_CLASS(UPico_AchievementDefinition, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AchievementDefinition)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_INCLASS \
private: \
	static void StaticRegisterNativesUPico_AchievementDefinition(); \
	friend struct Z_Construct_UClass_UPico_AchievementDefinition_Statics; \
public: \
	DECLARE_CLASS(UPico_AchievementDefinition, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AchievementDefinition)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AchievementDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AchievementDefinition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AchievementDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AchievementDefinition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AchievementDefinition(UPico_AchievementDefinition&&); \
	NO_API UPico_AchievementDefinition(const UPico_AchievementDefinition&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AchievementDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AchievementDefinition(UPico_AchievementDefinition&&); \
	NO_API UPico_AchievementDefinition(const UPico_AchievementDefinition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AchievementDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AchievementDefinition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AchievementDefinition)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_385_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_389_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_AchievementDefinition>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetTotalSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetTotalSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_AchievementProgressArray(); \
	friend struct Z_Construct_UClass_UPico_AchievementProgressArray_Statics; \
public: \
	DECLARE_CLASS(UPico_AchievementProgressArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AchievementProgressArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_INCLASS \
private: \
	static void StaticRegisterNativesUPico_AchievementProgressArray(); \
	friend struct Z_Construct_UClass_UPico_AchievementProgressArray_Statics; \
public: \
	DECLARE_CLASS(UPico_AchievementProgressArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AchievementProgressArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AchievementProgressArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AchievementProgressArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AchievementProgressArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AchievementProgressArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AchievementProgressArray(UPico_AchievementProgressArray&&); \
	NO_API UPico_AchievementProgressArray(const UPico_AchievementProgressArray&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AchievementProgressArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AchievementProgressArray(UPico_AchievementProgressArray&&); \
	NO_API UPico_AchievementProgressArray(const UPico_AchievementProgressArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AchievementProgressArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AchievementProgressArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AchievementProgressArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AchievementProgressArray() { return STRUCT_OFFSET(UPico_AchievementProgressArray, AchievementProgressArray); }


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_450_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_453_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_AchievementProgressArray>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetTotalSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetTotalSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_AchievementDefinitionArray(); \
	friend struct Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics; \
public: \
	DECLARE_CLASS(UPico_AchievementDefinitionArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AchievementDefinitionArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_INCLASS \
private: \
	static void StaticRegisterNativesUPico_AchievementDefinitionArray(); \
	friend struct Z_Construct_UClass_UPico_AchievementDefinitionArray_Statics; \
public: \
	DECLARE_CLASS(UPico_AchievementDefinitionArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_AchievementDefinitionArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AchievementDefinitionArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AchievementDefinitionArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AchievementDefinitionArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AchievementDefinitionArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AchievementDefinitionArray(UPico_AchievementDefinitionArray&&); \
	NO_API UPico_AchievementDefinitionArray(const UPico_AchievementDefinitionArray&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_AchievementDefinitionArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_AchievementDefinitionArray(UPico_AchievementDefinitionArray&&); \
	NO_API UPico_AchievementDefinitionArray(const UPico_AchievementDefinitionArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_AchievementDefinitionArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_AchievementDefinitionArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_AchievementDefinitionArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AchievementDefinitionArray() { return STRUCT_OFFSET(UPico_AchievementDefinitionArray, AchievementDefinitionArray); }


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_480_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h_484_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_AchievementDefinitionArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Achievements_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
