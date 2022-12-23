// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRInput/Private/PXR_HandComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_HandComponent() {}
// Cross Module References
	PICOXRINPUT_API UClass* Z_Construct_UClass_UPICOXRHandComponent_NoRegister();
	PICOXRINPUT_API UClass* Z_Construct_UClass_UPICOXRHandComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent();
	UPackage* Z_Construct_UPackage__Script_PICOXRInput();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandType();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint();
// End Cross Module References
	void UPICOXRHandComponent::StaticRegisterNativesUPICOXRHandComponent()
	{
	}
	UClass* Z_Construct_UClass_UPICOXRHandComponent_NoRegister()
	{
		return UPICOXRHandComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPICOXRHandComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideByConfidence_MetaData[];
#endif
		static void NewProp_bHideByConfidence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideByConfidence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateHandScale_MetaData[];
#endif
		static void NewProp_bUpdateHandScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateHandScale;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneNameMappings_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneNameMappings_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneNameMappings_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNameMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BoneNameMappings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOXRHandComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseableMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRHandComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "PICOXRComponent" },
		{ "HideCategories", "Object Physics Object Mobility Trigger" },
		{ "IncludePath", "PXR_HandComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/PXR_HandComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_SkeletonType_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "ModuleRelativePath", "Private/PXR_HandComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRHandComponent, SkeletonType), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_SkeletonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_SkeletonType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bHideByConfidence_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** Behavior for when hand tracking loses high confidence tracking */" },
		{ "ModuleRelativePath", "Private/PXR_HandComponent.h" },
		{ "ToolTip", "Behavior for when hand tracking loses high confidence tracking" },
	};
#endif
	void Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bHideByConfidence_SetBit(void* Obj)
	{
		((UPICOXRHandComponent*)Obj)->bHideByConfidence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bHideByConfidence = { "bHideByConfidence", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRHandComponent), &Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bHideByConfidence_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bHideByConfidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bHideByConfidence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bUpdateHandScale_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** Whether or not the hand scale should update based on values from the runtime to match the users hand scale */" },
		{ "ModuleRelativePath", "Private/PXR_HandComponent.h" },
		{ "ToolTip", "Whether or not the hand scale should update based on values from the runtime to match the users hand scale" },
	};
#endif
	void Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bUpdateHandScale_SetBit(void* Obj)
	{
		((UPICOXRHandComponent*)Obj)->bUpdateHandScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bUpdateHandScale = { "bUpdateHandScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRHandComponent), &Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bUpdateHandScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bUpdateHandScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bUpdateHandScale_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_ValueProp = { "BoneNameMappings", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp = { "BoneNameMappings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_MetaData[] = {
		{ "Category", "CustomSkeletalMesh" },
		{ "Comment", "/** Bone mapping for custom hand skeletal meshes */" },
		{ "ModuleRelativePath", "Private/PXR_HandComponent.h" },
		{ "ToolTip", "Bone mapping for custom hand skeletal meshes" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings = { "BoneNameMappings", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRHandComponent, BoneNameMappings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPICOXRHandComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_SkeletonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_SkeletonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bHideByConfidence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_bUpdateHandScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRHandComponent_Statics::NewProp_BoneNameMappings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOXRHandComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOXRHandComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPICOXRHandComponent_Statics::ClassParams = {
		&UPICOXRHandComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPICOXRHandComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRHandComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOXRHandComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRHandComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOXRHandComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPICOXRHandComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPICOXRHandComponent, 4244788359);
	template<> PICOXRINPUT_API UClass* StaticClass<UPICOXRHandComponent>()
	{
		return UPICOXRHandComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPICOXRHandComponent(Z_Construct_UClass_UPICOXRHandComponent, &UPICOXRHandComponent::StaticClass, TEXT("/Script/PICOXRInput"), TEXT("UPICOXRHandComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOXRHandComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
