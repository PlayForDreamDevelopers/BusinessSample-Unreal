// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/OnlineSubsystemYvrLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSubsystemYvrLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ONLINESUBSYSTEMYVR_API UClass* Z_Construct_UClass_UOnlineSubsystemYvrLibrary();
ONLINESUBSYSTEMYVR_API UClass* Z_Construct_UClass_UOnlineSubsystemYvrLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemYvr();
// End Cross Module References

// Begin Class UOnlineSubsystemYvrLibrary
void UOnlineSubsystemYvrLibrary::StaticRegisterNativesUOnlineSubsystemYvrLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineSubsystemYvrLibrary);
UClass* Z_Construct_UClass_UOnlineSubsystemYvrLibrary_NoRegister()
{
	return UOnlineSubsystemYvrLibrary::StaticClass();
}
struct Z_Construct_UClass_UOnlineSubsystemYvrLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OnlineSubsystemYvrLibrary.h" },
		{ "ModuleRelativePath", "Public/OnlineSubsystemYvrLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineSubsystemYvrLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOnlineSubsystemYvrLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemYvr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSubsystemYvrLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineSubsystemYvrLibrary_Statics::ClassParams = {
	&UOnlineSubsystemYvrLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSubsystemYvrLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnlineSubsystemYvrLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnlineSubsystemYvrLibrary()
{
	if (!Z_Registration_Info_UClass_UOnlineSubsystemYvrLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineSubsystemYvrLibrary.OuterSingleton, Z_Construct_UClass_UOnlineSubsystemYvrLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnlineSubsystemYvrLibrary.OuterSingleton;
}
template<> ONLINESUBSYSTEMYVR_API UClass* StaticClass<UOnlineSubsystemYvrLibrary>()
{
	return UOnlineSubsystemYvrLibrary::StaticClass();
}
UOnlineSubsystemYvrLibrary::UOnlineSubsystemYvrLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSubsystemYvrLibrary);
UOnlineSubsystemYvrLibrary::~UOnlineSubsystemYvrLibrary() {}
// End Class UOnlineSubsystemYvrLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Public_OnlineSubsystemYvrLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineSubsystemYvrLibrary, UOnlineSubsystemYvrLibrary::StaticClass, TEXT("UOnlineSubsystemYvrLibrary"), &Z_Registration_Info_UClass_UOnlineSubsystemYvrLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineSubsystemYvrLibrary), 1354361670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Public_OnlineSubsystemYvrLibrary_h_2537026035(TEXT("/Script/OnlineSubsystemYvr"),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Public_OnlineSubsystemYvrLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Public_OnlineSubsystemYvrLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
