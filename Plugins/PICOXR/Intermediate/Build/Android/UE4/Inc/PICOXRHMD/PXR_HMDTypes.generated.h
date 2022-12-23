// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PICOXRHMD_PXR_HMDTypes_generated_h
#error "PXR_HMDTypes.generated.h already included, missing '#pragma once' in PXR_HMDTypes.h"
#endif
#define PICOXRHMD_PXR_HMDTypes_generated_h

#define HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDTypes_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPXRSplashDesc_Statics; \
	PICOXRHMD_API static class UScriptStruct* StaticStruct();


template<> PICOXRHMD_API UScriptStruct* StaticStruct<struct FPXRSplashDesc>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HandTracking20221223_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDTypes_h


#define FOREACH_ENUM_EPICOXRFACETRACKINGMODE(op) \
	op(EPICOXRFaceTrackingMode::Disable) \
	op(EPICOXRFaceTrackingMode::FaceOnly) \
	op(EPICOXRFaceTrackingMode::LipsOnly) \
	op(EPICOXRFaceTrackingMode::FaceAndLips) 

enum class EPICOXRFaceTrackingMode : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRFaceTrackingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
