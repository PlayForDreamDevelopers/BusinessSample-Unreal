// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YvrXRMR/Private/YvrXRSpaceMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYvrXRSpaceMeshActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_YvrXRMR();
YVRXRMR_API UClass* Z_Construct_UClass_AYvrXRSpaceMeshActor();
YVRXRMR_API UClass* Z_Construct_UClass_AYvrXRSpaceMeshActor_NoRegister();
// End Cross Module References

// Begin Class AYvrXRSpaceMeshActor
void AYvrXRSpaceMeshActor::StaticRegisterNativesAYvrXRSpaceMeshActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AYvrXRSpaceMeshActor);
UClass* Z_Construct_UClass_AYvrXRSpaceMeshActor_NoRegister()
{
	return AYvrXRSpaceMeshActor::StaticClass();
}
struct Z_Construct_UClass_AYvrXRSpaceMeshActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "YvrXRSpaceMeshActor.h" },
		{ "ModuleRelativePath", "Private/YvrXRSpaceMeshActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYvrXRSpaceMeshActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AYvrXRSpaceMeshActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRMR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYvrXRSpaceMeshActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AYvrXRSpaceMeshActor_Statics::ClassParams = {
	&AYvrXRSpaceMeshActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AYvrXRSpaceMeshActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AYvrXRSpaceMeshActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AYvrXRSpaceMeshActor()
{
	if (!Z_Registration_Info_UClass_AYvrXRSpaceMeshActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AYvrXRSpaceMeshActor.OuterSingleton, Z_Construct_UClass_AYvrXRSpaceMeshActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AYvrXRSpaceMeshActor.OuterSingleton;
}
template<> YVRXRMR_API UClass* StaticClass<AYvrXRSpaceMeshActor>()
{
	return AYvrXRSpaceMeshActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AYvrXRSpaceMeshActor);
AYvrXRSpaceMeshActor::~AYvrXRSpaceMeshActor() {}
// End Class AYvrXRSpaceMeshActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Private_YvrXRSpaceMeshActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AYvrXRSpaceMeshActor, AYvrXRSpaceMeshActor::StaticClass, TEXT("AYvrXRSpaceMeshActor"), &Z_Registration_Info_UClass_AYvrXRSpaceMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AYvrXRSpaceMeshActor), 4038207894U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Private_YvrXRSpaceMeshActor_h_4257926492(TEXT("/Script/YvrXRMR"),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Private_YvrXRSpaceMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Private_YvrXRSpaceMeshActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
