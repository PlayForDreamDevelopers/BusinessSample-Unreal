// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/OnlineSettingsYvr.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSettingsYvr() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ONLINESUBSYSTEMYVR_API UClass* Z_Construct_UClass_UOnlineSettingsYvr();
ONLINESUBSYSTEMYVR_API UClass* Z_Construct_UClass_UOnlineSettingsYvr_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemYvr();
// End Cross Module References

// Begin Class UOnlineSettingsYvr
void UOnlineSettingsYvr::StaticRegisterNativesUOnlineSettingsYvr()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineSettingsYvr);
UClass* Z_Construct_UClass_UOnlineSettingsYvr_NoRegister()
{
	return UOnlineSettingsYvr::StaticClass();
}
struct Z_Construct_UClass_UOnlineSettingsYvr_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OnlineSettingsYvr.h" },
		{ "ModuleRelativePath", "Private/OnlineSettingsYvr.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "Category", "Platform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EntitlementCheck\n" },
#endif
		{ "DisplayName", "App Id" },
		{ "ModuleRelativePath", "Private/OnlineSettingsYvr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EntitlementCheck" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineSettingsYvr>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UOnlineSettingsYvr_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineSettingsYvr, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineSettingsYvr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSettingsYvr_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSettingsYvr_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOnlineSettingsYvr_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemYvr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSettingsYvr_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineSettingsYvr_Statics::ClassParams = {
	&UOnlineSettingsYvr::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOnlineSettingsYvr_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSettingsYvr_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSettingsYvr_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnlineSettingsYvr_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnlineSettingsYvr()
{
	if (!Z_Registration_Info_UClass_UOnlineSettingsYvr.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineSettingsYvr.OuterSingleton, Z_Construct_UClass_UOnlineSettingsYvr_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnlineSettingsYvr.OuterSingleton;
}
template<> ONLINESUBSYSTEMYVR_API UClass* StaticClass<UOnlineSettingsYvr>()
{
	return UOnlineSettingsYvr::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSettingsYvr);
UOnlineSettingsYvr::~UOnlineSettingsYvr() {}
// End Class UOnlineSettingsYvr

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Private_OnlineSettingsYvr_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineSettingsYvr, UOnlineSettingsYvr::StaticClass, TEXT("UOnlineSettingsYvr"), &Z_Registration_Info_UClass_UOnlineSettingsYvr, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineSettingsYvr), 1366525018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Private_OnlineSettingsYvr_h_1067787801(TEXT("/Script/OnlineSubsystemYvr"),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Private_OnlineSettingsYvr_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Private_OnlineSettingsYvr_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
