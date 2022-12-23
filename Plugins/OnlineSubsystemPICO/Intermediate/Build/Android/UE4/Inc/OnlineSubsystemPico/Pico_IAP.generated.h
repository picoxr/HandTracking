// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPico_Purchase;
class UPico_PurchaseArray;
class UPico_ProductArray;
class UObject;
class UPico_Product;
#ifdef ONLINESUBSYSTEMPICO_Pico_IAP_generated_h
#error "Pico_IAP.generated.h already included, missing '#pragma once' in Pico_IAP.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_IAP_generated_h

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_24_DELEGATE \
struct _Script_OnlineSubsystemPico_eventLaunchCheckoutFlowDelegate_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_Purchase* Purchase; \
}; \
static inline void FLaunchCheckoutFlowDelegate_DelegateWrapper(const FScriptDelegate& LaunchCheckoutFlowDelegate, bool bIsError, const FString& ErrorMessage, UPico_Purchase* Purchase) \
{ \
	_Script_OnlineSubsystemPico_eventLaunchCheckoutFlowDelegate_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Purchase=Purchase; \
	LaunchCheckoutFlowDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_23_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetNextPurchaseArrayPageDelegate_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_PurchaseArray* PurchaseArray; \
}; \
static inline void FGetNextPurchaseArrayPageDelegate_DelegateWrapper(const FScriptDelegate& GetNextPurchaseArrayPageDelegate, bool bIsError, const FString& ErrorMessage, UPico_PurchaseArray* PurchaseArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetNextPurchaseArrayPageDelegate_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.PurchaseArray=PurchaseArray; \
	GetNextPurchaseArrayPageDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_22_DELEGATE \
struct _Script_OnlineSubsystemPico_eventConsumePurchaseDelegate_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
}; \
static inline void FConsumePurchaseDelegate_DelegateWrapper(const FScriptDelegate& ConsumePurchaseDelegate, bool bIsError, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventConsumePurchaseDelegate_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	ConsumePurchaseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_21_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetNextProductArrayPageDelegate_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_ProductArray* ProductArray; \
}; \
static inline void FGetNextProductArrayPageDelegate_DelegateWrapper(const FScriptDelegate& GetNextProductArrayPageDelegate, bool bIsError, const FString& ErrorMessage, UPico_ProductArray* ProductArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetNextProductArrayPageDelegate_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.ProductArray=ProductArray; \
	GetNextProductArrayPageDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_20_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetViewerPurchasesDelegate_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_PurchaseArray* PurchaseArray; \
}; \
static inline void FGetViewerPurchasesDelegate_DelegateWrapper(const FScriptDelegate& GetViewerPurchasesDelegate, bool bIsError, const FString& ErrorMessage, UPico_PurchaseArray* PurchaseArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetViewerPurchasesDelegate_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.PurchaseArray=PurchaseArray; \
	GetViewerPurchasesDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_19_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetProductsBySKUDelegate_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_ProductArray* ProductArray; \
}; \
static inline void FGetProductsBySKUDelegate_DelegateWrapper(const FScriptDelegate& GetProductsBySKUDelegate, bool bIsError, const FString& ErrorMessage, UPico_ProductArray* ProductArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetProductsBySKUDelegate_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.ProductArray=ProductArray; \
	GetProductsBySKUDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLaunchCheckoutFlow); \
	DECLARE_FUNCTION(execGetNextPurchaseArrayPage); \
	DECLARE_FUNCTION(execGetViewerPurchases); \
	DECLARE_FUNCTION(execGetNextProductsArrayPage); \
	DECLARE_FUNCTION(execGetProductsBySKU); \
	DECLARE_FUNCTION(execConsumePurchase);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLaunchCheckoutFlow); \
	DECLARE_FUNCTION(execGetNextPurchaseArrayPage); \
	DECLARE_FUNCTION(execGetViewerPurchases); \
	DECLARE_FUNCTION(execGetNextProductsArrayPage); \
	DECLARE_FUNCTION(execGetProductsBySKU); \
	DECLARE_FUNCTION(execConsumePurchase);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoIAPFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoIAPFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoIAPFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoIAPFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoIAPFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoIAPFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoIAPFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoIAPFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoIAPFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoIAPFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoIAPFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoIAPFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoIAPFunction(UOnlinePicoIAPFunction&&); \
	NO_API UOnlinePicoIAPFunction(const UOnlinePicoIAPFunction&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoIAPFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoIAPFunction(UOnlinePicoIAPFunction&&); \
	NO_API UOnlinePicoIAPFunction(const UOnlinePicoIAPFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoIAPFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoIAPFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoIAPFunction)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_148_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_151_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoIAPFunction>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSKU); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetCurrency); \
	DECLARE_FUNCTION(execGetPrice); \
	DECLARE_FUNCTION(execGetFormattedPrice); \
	DECLARE_FUNCTION(execGetDescription);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSKU); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetCurrency); \
	DECLARE_FUNCTION(execGetPrice); \
	DECLARE_FUNCTION(execGetFormattedPrice); \
	DECLARE_FUNCTION(execGetDescription);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_Product(); \
	friend struct Z_Construct_UClass_UPico_Product_Statics; \
public: \
	DECLARE_CLASS(UPico_Product, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_Product)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_INCLASS \
private: \
	static void StaticRegisterNativesUPico_Product(); \
	friend struct Z_Construct_UClass_UPico_Product_Statics; \
public: \
	DECLARE_CLASS(UPico_Product, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_Product)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_Product(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_Product) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_Product); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_Product); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_Product(UPico_Product&&); \
	NO_API UPico_Product(const UPico_Product&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_Product(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_Product(UPico_Product&&); \
	NO_API UPico_Product(const UPico_Product&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_Product); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_Product); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_Product)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_252_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_255_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_Product>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_ProductArray(); \
	friend struct Z_Construct_UClass_UPico_ProductArray_Statics; \
public: \
	DECLARE_CLASS(UPico_ProductArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_ProductArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_INCLASS \
private: \
	static void StaticRegisterNativesUPico_ProductArray(); \
	friend struct Z_Construct_UClass_UPico_ProductArray_Statics; \
public: \
	DECLARE_CLASS(UPico_ProductArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_ProductArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_ProductArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_ProductArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_ProductArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_ProductArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_ProductArray(UPico_ProductArray&&); \
	NO_API UPico_ProductArray(const UPico_ProductArray&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_ProductArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_ProductArray(UPico_ProductArray&&); \
	NO_API UPico_ProductArray(const UPico_ProductArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_ProductArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_ProductArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_ProductArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProductArray() { return STRUCT_OFFSET(UPico_ProductArray, ProductArray); }


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_289_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_292_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_ProductArray>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSKU); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetGrantTime); \
	DECLARE_FUNCTION(execGetExpirationTime);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSKU); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetGrantTime); \
	DECLARE_FUNCTION(execGetExpirationTime);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_Purchase(); \
	friend struct Z_Construct_UClass_UPico_Purchase_Statics; \
public: \
	DECLARE_CLASS(UPico_Purchase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_Purchase)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_INCLASS \
private: \
	static void StaticRegisterNativesUPico_Purchase(); \
	friend struct Z_Construct_UClass_UPico_Purchase_Statics; \
public: \
	DECLARE_CLASS(UPico_Purchase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_Purchase)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_Purchase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_Purchase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_Purchase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_Purchase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_Purchase(UPico_Purchase&&); \
	NO_API UPico_Purchase(const UPico_Purchase&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_Purchase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_Purchase(UPico_Purchase&&); \
	NO_API UPico_Purchase(const UPico_Purchase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_Purchase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_Purchase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_Purchase)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_321_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_324_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_Purchase>();

#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_SPARSE_DATA
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_PurchaseArray(); \
	friend struct Z_Construct_UClass_UPico_PurchaseArray_Statics; \
public: \
	DECLARE_CLASS(UPico_PurchaseArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_PurchaseArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_INCLASS \
private: \
	static void StaticRegisterNativesUPico_PurchaseArray(); \
	friend struct Z_Construct_UClass_UPico_PurchaseArray_Statics; \
public: \
	DECLARE_CLASS(UPico_PurchaseArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_PurchaseArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_PurchaseArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_PurchaseArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_PurchaseArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_PurchaseArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_PurchaseArray(UPico_PurchaseArray&&); \
	NO_API UPico_PurchaseArray(const UPico_PurchaseArray&); \
public:


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_PurchaseArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_PurchaseArray(UPico_PurchaseArray&&); \
	NO_API UPico_PurchaseArray(const UPico_PurchaseArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_PurchaseArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_PurchaseArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_PurchaseArray)


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PurchaseArray() { return STRUCT_OFFSET(UPico_PurchaseArray, PurchaseArray); }


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_350_PROLOG
#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_RPC_WRAPPERS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_INCLASS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_SPARSE_DATA \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_353_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_PurchaseArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HandTracking20221223_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
