// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYvrBusiness_init() {}
	YVRBUSINESS_API UFunction* Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_YvrBusiness;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_YvrBusiness()
	{
		if (!Z_Registration_Info_UPackage__Script_YvrBusiness.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/YvrBusiness",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2E1FCD1B,
				0x36471BDB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_YvrBusiness.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_YvrBusiness.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_YvrBusiness(Z_Construct_UPackage__Script_YvrBusiness, TEXT("/Script/YvrBusiness"), Z_Registration_Info_UPackage__Script_YvrBusiness, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2E1FCD1B, 0x36471BDB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
