// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
class USceneComponent;
class UTextureRenderTarget2D;
#ifdef PICOXRMRC_PXR_MRCFunctionLibrary_generated_h
#error "PXR_MRCFunctionLibrary.generated.h already included, missing '#pragma once' in PXR_MRCFunctionLibrary.h"
#endif
#define PICOXRMRC_PXR_MRCFunctionLibrary_generated_h

#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_SPARSE_DATA
#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMRCRelativePose); \
	DECLARE_FUNCTION(execSetMRCUseCustomTrans); \
	DECLARE_FUNCTION(execSetMRCTrackingReference); \
	DECLARE_FUNCTION(execEnableForegroundMRC); \
	DECLARE_FUNCTION(execGetInGameThirdCameraRT); \
	DECLARE_FUNCTION(execIsMrcActivated);


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMRCRelativePose); \
	DECLARE_FUNCTION(execSetMRCUseCustomTrans); \
	DECLARE_FUNCTION(execSetMRCTrackingReference); \
	DECLARE_FUNCTION(execEnableForegroundMRC); \
	DECLARE_FUNCTION(execGetInGameThirdCameraRT); \
	DECLARE_FUNCTION(execIsMrcActivated);


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOXRMRCFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPICOXRMRCFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPICOXRMRCFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMRC"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRMRCFunctionLibrary)


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPICOXRMRCFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPICOXRMRCFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPICOXRMRCFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMRC"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRMRCFunctionLibrary)


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXRMRCFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXRMRCFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRMRCFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRMRCFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRMRCFunctionLibrary(UPICOXRMRCFunctionLibrary&&); \
	NO_API UPICOXRMRCFunctionLibrary(const UPICOXRMRCFunctionLibrary&); \
public:


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXRMRCFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRMRCFunctionLibrary(UPICOXRMRCFunctionLibrary&&); \
	NO_API UPICOXRMRCFunctionLibrary(const UPICOXRMRCFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRMRCFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRMRCFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXRMRCFunctionLibrary)


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_14_PROLOG
#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_SPARSE_DATA \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_RPC_WRAPPERS \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_INCLASS \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_SPARSE_DATA \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMRC_API UClass* StaticClass<class UPICOXRMRCFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HandTracking20221223_Plugins_PICOXR_Source_PICOXRMRC_Public_PXR_MRCFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
