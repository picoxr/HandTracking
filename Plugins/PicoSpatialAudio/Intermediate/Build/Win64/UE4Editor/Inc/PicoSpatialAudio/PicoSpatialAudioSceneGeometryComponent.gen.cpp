// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoSpatialAudio/Public/PicoSpatialAudioSceneGeometryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePicoSpatialAudioSceneGeometryComponent() {}
// Cross Module References
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_NoRegister();
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_PicoSpatialAudio();
	PICOSPATIALAUDIO_API UClass* Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPicoSpatialAudioSceneGeometryComponent::execClearBakedMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearBakedMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoSpatialAudioSceneGeometryComponent::execBakeMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BakeMesh();
		P_NATIVE_END;
	}
	void UPicoSpatialAudioSceneGeometryComponent::StaticRegisterNativesUPicoSpatialAudioSceneGeometryComponent()
	{
		UClass* Class = UPicoSpatialAudioSceneGeometryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BakeMesh", &UPicoSpatialAudioSceneGeometryComponent::execBakeMesh },
			{ "ClearBakedMesh", &UPicoSpatialAudioSceneGeometryComponent::execClearBakedMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPicoSpatialAudioSceneGeometryComponent_BakeMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoSpatialAudioSceneGeometryComponent_BakeMesh_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mesh Baking Utilities" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoSpatialAudioSceneGeometryComponent_BakeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent, nullptr, "BakeMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoSpatialAudioSceneGeometryComponent_BakeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatialAudioSceneGeometryComponent_BakeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoSpatialAudioSceneGeometryComponent_BakeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoSpatialAudioSceneGeometryComponent_BakeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoSpatialAudioSceneGeometryComponent_ClearBakedMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoSpatialAudioSceneGeometryComponent_ClearBakedMesh_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mesh Baking Utilities" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoSpatialAudioSceneGeometryComponent_ClearBakedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent, nullptr, "ClearBakedMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoSpatialAudioSceneGeometryComponent_ClearBakedMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoSpatialAudioSceneGeometryComponent_ClearBakedMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoSpatialAudioSceneGeometryComponent_ClearBakedMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoSpatialAudioSceneGeometryComponent_ClearBakedMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_NoRegister()
	{
		return UPicoSpatialAudioSceneGeometryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeChildrenActor_MetaData[];
#endif
		static void NewProp_IncludeChildrenActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeChildrenActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeChildrenComponent_MetaData[];
#endif
		static void NewProp_IncludeChildrenComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeChildrenComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialSettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GatheredStaticMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GatheredStaticMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GatheredStaticMeshes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BatchedBakedMeshVerticesBuffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatchedBakedMeshVerticesBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BatchedBakedMeshVerticesBuffer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BatchedBakedMeshIndicesBuffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatchedBakedMeshIndicesBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BatchedBakedMeshIndicesBuffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PicoSpatialAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPicoSpatialAudioSceneGeometryComponent_BakeMesh, "BakeMesh" }, // 2577123445
		{ &Z_Construct_UFunction_UPicoSpatialAudioSceneGeometryComponent_ClearBakedMesh, "ClearBakedMesh" }, // 3627403098
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio" },
		{ "HideCategories", "Transform Activation Collision Cooking Trigger PhysicsVolume" },
		{ "IncludePath", "PicoSpatialAudioSceneGeometryComponent.h" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneGeometryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_IncludeChildrenActor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// if IncludeChildrenActor is true, children (attached) meshes will be merged and managed by this component\n" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneGeometryComponent.h" },
		{ "ToolTip", "if IncludeChildrenActor is true, children (attached) meshes will be merged and managed by this component" },
	};
#endif
	void Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_IncludeChildrenActor_SetBit(void* Obj)
	{
		((UPicoSpatialAudioSceneGeometryComponent*)Obj)->IncludeChildrenActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_IncludeChildrenActor = { "IncludeChildrenActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoSpatialAudioSceneGeometryComponent), &Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_IncludeChildrenActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_IncludeChildrenActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_IncludeChildrenActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_IncludeChildrenComponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// if IncludeChildrenActor is true, children (attached) meshes will be merged and managed by this component\n" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneGeometryComponent.h" },
		{ "ToolTip", "if IncludeChildrenActor is true, children (attached) meshes will be merged and managed by this component" },
	};
#endif
	void Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_IncludeChildrenComponent_SetBit(void* Obj)
	{
		((UPicoSpatialAudioSceneGeometryComponent*)Obj)->IncludeChildrenComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_IncludeChildrenComponent = { "IncludeChildrenComponent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoSpatialAudioSceneGeometryComponent), &Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_IncludeChildrenComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_IncludeChildrenComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_IncludeChildrenComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoSpatialAudioSceneGeometryComponent, MaterialSettings), Z_Construct_UClass_UPicoSpatialAudioSceneMaterialSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_MaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_MaterialSettings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_GatheredStaticMeshes_Inner = { "GatheredStaticMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_GatheredStaticMeshes_MetaData[] = {
		{ "Comment", "//\x09""Add UPROPERTY() to prevent GatheredStaticMeshes being garbage collected at unknown time\n" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneGeometryComponent.h" },
		{ "ToolTip", "Add UPROPERTY() to prevent GatheredStaticMeshes being garbage collected at unknown time" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_GatheredStaticMeshes = { "GatheredStaticMeshes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoSpatialAudioSceneGeometryComponent, GatheredStaticMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_GatheredStaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_GatheredStaticMeshes_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_BatchedBakedMeshVerticesBuffer_Inner = { "BatchedBakedMeshVerticesBuffer", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_BatchedBakedMeshVerticesBuffer_MetaData[] = {
		{ "Category", "Mesh Baking Utilities" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_BatchedBakedMeshVerticesBuffer = { "BatchedBakedMeshVerticesBuffer", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoSpatialAudioSceneGeometryComponent, BatchedBakedMeshVerticesBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_BatchedBakedMeshVerticesBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_BatchedBakedMeshVerticesBuffer_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_BatchedBakedMeshIndicesBuffer_Inner = { "BatchedBakedMeshIndicesBuffer", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_BatchedBakedMeshIndicesBuffer_MetaData[] = {
		{ "Category", "Mesh Baking Utilities" },
		{ "ModuleRelativePath", "Public/PicoSpatialAudioSceneGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_BatchedBakedMeshIndicesBuffer = { "BatchedBakedMeshIndicesBuffer", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoSpatialAudioSceneGeometryComponent, BatchedBakedMeshIndicesBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_BatchedBakedMeshIndicesBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_BatchedBakedMeshIndicesBuffer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_IncludeChildrenActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_IncludeChildrenComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_MaterialSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_GatheredStaticMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_GatheredStaticMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_BatchedBakedMeshVerticesBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_BatchedBakedMeshVerticesBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_BatchedBakedMeshIndicesBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::NewProp_BatchedBakedMeshIndicesBuffer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoSpatialAudioSceneGeometryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::ClassParams = {
		&UPicoSpatialAudioSceneGeometryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPicoSpatialAudioSceneGeometryComponent, 683109316);
	template<> PICOSPATIALAUDIO_API UClass* StaticClass<UPicoSpatialAudioSceneGeometryComponent>()
	{
		return UPicoSpatialAudioSceneGeometryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPicoSpatialAudioSceneGeometryComponent(Z_Construct_UClass_UPicoSpatialAudioSceneGeometryComponent, &UPicoSpatialAudioSceneGeometryComponent::StaticClass, TEXT("/Script/PicoSpatialAudio"), TEXT("UPicoSpatialAudioSceneGeometryComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoSpatialAudioSceneGeometryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
