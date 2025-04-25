// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YvrXRMR/Public/YvrXRSpaceMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYvrXRSpaceMeshComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_YvrXRMR();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrXRSpaceMeshComponent();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrXRSpaceMeshComponent_NoRegister();
// End Cross Module References

// Begin Class UYvrXRSpaceMeshComponent
void UYvrXRSpaceMeshComponent::StaticRegisterNativesUYvrXRSpaceMeshComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrXRSpaceMeshComponent);
UClass* Z_Construct_UClass_UYvrXRSpaceMeshComponent_NoRegister()
{
	return UYvrXRSpaceMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "YvrXRSpaceMeshComponent.h" },
		{ "ModuleRelativePath", "Public/YvrXRSpaceMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshVisible_MetaData[] = {
		{ "Category", "YvrXRSpaceMeshComponent" },
		{ "ModuleRelativePath", "Public/YvrXRSpaceMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateCollision_MetaData[] = {
		{ "Category", "YvrXRSpaceMeshComponent" },
		{ "ModuleRelativePath", "Public/YvrXRSpaceMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_MeshVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MeshVisible;
	static void NewProp_CreateCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CreateCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrXRSpaceMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::NewProp_MeshVisible_SetBit(void* Obj)
{
	((UYvrXRSpaceMeshComponent*)Obj)->MeshVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::NewProp_MeshVisible = { "MeshVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYvrXRSpaceMeshComponent), &Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::NewProp_MeshVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshVisible_MetaData), NewProp_MeshVisible_MetaData) };
void Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::NewProp_CreateCollision_SetBit(void* Obj)
{
	((UYvrXRSpaceMeshComponent*)Obj)->CreateCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::NewProp_CreateCollision = { "CreateCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYvrXRSpaceMeshComponent), &Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::NewProp_CreateCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateCollision_MetaData), NewProp_CreateCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::NewProp_MeshVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::NewProp_CreateCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRMR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::ClassParams = {
	&UYvrXRSpaceMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrXRSpaceMeshComponent()
{
	if (!Z_Registration_Info_UClass_UYvrXRSpaceMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrXRSpaceMeshComponent.OuterSingleton, Z_Construct_UClass_UYvrXRSpaceMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrXRSpaceMeshComponent.OuterSingleton;
}
template<> YVRXRMR_API UClass* StaticClass<UYvrXRSpaceMeshComponent>()
{
	return UYvrXRSpaceMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrXRSpaceMeshComponent);
UYvrXRSpaceMeshComponent::~UYvrXRSpaceMeshComponent() {}
// End Class UYvrXRSpaceMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRSpaceMeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYvrXRSpaceMeshComponent, UYvrXRSpaceMeshComponent::StaticClass, TEXT("UYvrXRSpaceMeshComponent"), &Z_Registration_Info_UClass_UYvrXRSpaceMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrXRSpaceMeshComponent), 1438946084U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRSpaceMeshComponent_h_3952666811(TEXT("/Script/YvrXRMR"),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRSpaceMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRSpaceMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
