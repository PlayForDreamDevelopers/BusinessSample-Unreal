// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YvrXRHMD/Private/YvrXRHMDSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYvrXRHMDSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
UPackage* Z_Construct_UPackage__Script_YvrXRHMD();
YVRXRHMD_API UClass* Z_Construct_UClass_UYvrXRHMDSettings();
YVRXRHMD_API UClass* Z_Construct_UClass_UYvrXRHMDSettings_NoRegister();
YVRXRHMD_API UEnum* Z_Construct_UEnum_YvrXRHMD_EYvrDynamicResolutionSetting();
YVRXRHMD_API UEnum* Z_Construct_UEnum_YvrXRHMD_EYvrFixedFoveatedRenderingLevel();
YVRXRHMD_API UEnum* Z_Construct_UEnum_YvrXRHMD_EYvrLayerSharpenType();
YVRXRHMD_API UEnum* Z_Construct_UEnum_YvrXRHMD_EYvrPerformanceLevel();
YVRXRHMD_API UEnum* Z_Construct_UEnum_YvrXRHMD_EYvrXRHandTrackingSupport();
// End Cross Module References

// Begin Class UYvrXRHMDSettings
void UYvrXRHMDSettings::StaticRegisterNativesUYvrXRHMDSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrXRHMDSettings);
UClass* Z_Construct_UClass_UYvrXRHMDSettings_NoRegister()
{
	return UYvrXRHMDSettings::StaticClass();
}
struct Z_Construct_UClass_UYvrXRHMDSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Implements the settings for the YvrVR plugin.\n*/" },
#endif
		{ "IncludePath", "YvrXRHMDSettings.h" },
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements the settings for the YvrVR plugin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPULevel_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default CPU level controlling CPU frequency on the mobile device */" },
#endif
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default CPU level controlling CPU frequency on the mobile device" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPULevel_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default GPU level controlling GPU frequency on the mobile device */" },
#endif
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default GPU level controlling GPU frequency on the mobile device" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHWsRGBEncoding_MetaData[] = {
		{ "Category", "Render" },
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FFRLevel_MetaData[] = {
		{ "Category", "Render|Fixed Foveated Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default Fixed Foveated Rendering level for Yvr device*/" },
#endif
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default Fixed Foveated Rendering level for Yvr device" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FFRDynamic_MetaData[] = {
		{ "Category", "Render|Fixed Foveated Rendering" },
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpaceWarp_MetaData[] = {
		{ "Category", "Render|Space Warp" },
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharpenType_MetaData[] = {
		{ "Category", "Render|Sharpen" },
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplySharpenTypeToAllLayers_MetaData[] = {
		{ "Category", "Render|Sharpen" },
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPixelDensityAdaptive_MetaData[] = {
		{ "Category", "Render|Dynamic Resolution" },
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicAResolutionLevel_MetaData[] = {
		{ "Category", "Render|Dynamic Resolution" },
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelDensityMin_MetaData[] = {
		{ "Category", "Render|Dynamic Resolution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum allowed pixel density. */" },
#endif
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum allowed pixel density." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelDensityMax_MetaData[] = {
		{ "Category", "Render|Dynamic Resolution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum allowed pixel density. */" },
#endif
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum allowed pixel density." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OSSplashScreen_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "OS Splash Screen" },
		{ "FilePathFilter", "png" },
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsingOSSplash_MetaData[] = {
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandTrackingSupport_MetaData[] = {
		{ "Category", "Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether controllers and/or hands can be used with the app */" },
#endif
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether controllers and/or hands can be used with the app" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnchorSupportEnabled_MetaData[] = {
		{ "Category", "MR" },
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSceneSupportEnabled_MetaData[] = {
		{ "Category", "MR" },
		{ "ModuleRelativePath", "Private/YvrXRHMDSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CPULevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CPULevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GPULevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GPULevel;
	static void NewProp_bUseHWsRGBEncoding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHWsRGBEncoding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FFRLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FFRLevel;
	static void NewProp_FFRDynamic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FFRDynamic;
	static void NewProp_bUseSpaceWarp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpaceWarp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SharpenType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SharpenType;
	static void NewProp_bApplySharpenTypeToAllLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplySharpenTypeToAllLayers;
	static void NewProp_bPixelDensityAdaptive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPixelDensityAdaptive;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DynamicAResolutionLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DynamicAResolutionLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelDensityMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelDensityMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OSSplashScreen;
	static void NewProp_bUsingOSSplash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingOSSplash;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandTrackingSupport_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HandTrackingSupport;
	static void NewProp_bAnchorSupportEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnchorSupportEnabled;
	static void NewProp_bSceneSupportEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSceneSupportEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrXRHMDSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_CPULevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_CPULevel = { "CPULevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrXRHMDSettings, CPULevel), Z_Construct_UEnum_YvrXRHMD_EYvrPerformanceLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPULevel_MetaData), NewProp_CPULevel_MetaData) }; // 1531993898
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_GPULevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_GPULevel = { "GPULevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrXRHMDSettings, GPULevel), Z_Construct_UEnum_YvrXRHMD_EYvrPerformanceLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPULevel_MetaData), NewProp_GPULevel_MetaData) }; // 1531993898
void Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bUseHWsRGBEncoding_SetBit(void* Obj)
{
	((UYvrXRHMDSettings*)Obj)->bUseHWsRGBEncoding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bUseHWsRGBEncoding = { "bUseHWsRGBEncoding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYvrXRHMDSettings), &Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bUseHWsRGBEncoding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHWsRGBEncoding_MetaData), NewProp_bUseHWsRGBEncoding_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_FFRLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_FFRLevel = { "FFRLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrXRHMDSettings, FFRLevel), Z_Construct_UEnum_YvrXRHMD_EYvrFixedFoveatedRenderingLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FFRLevel_MetaData), NewProp_FFRLevel_MetaData) }; // 1513249936
void Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_FFRDynamic_SetBit(void* Obj)
{
	((UYvrXRHMDSettings*)Obj)->FFRDynamic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_FFRDynamic = { "FFRDynamic", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYvrXRHMDSettings), &Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_FFRDynamic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FFRDynamic_MetaData), NewProp_FFRDynamic_MetaData) };
void Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bUseSpaceWarp_SetBit(void* Obj)
{
	((UYvrXRHMDSettings*)Obj)->bUseSpaceWarp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bUseSpaceWarp = { "bUseSpaceWarp", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYvrXRHMDSettings), &Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bUseSpaceWarp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSpaceWarp_MetaData), NewProp_bUseSpaceWarp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_SharpenType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_SharpenType = { "SharpenType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrXRHMDSettings, SharpenType), Z_Construct_UEnum_YvrXRHMD_EYvrLayerSharpenType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharpenType_MetaData), NewProp_SharpenType_MetaData) }; // 2519015889
void Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bApplySharpenTypeToAllLayers_SetBit(void* Obj)
{
	((UYvrXRHMDSettings*)Obj)->bApplySharpenTypeToAllLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bApplySharpenTypeToAllLayers = { "bApplySharpenTypeToAllLayers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYvrXRHMDSettings), &Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bApplySharpenTypeToAllLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplySharpenTypeToAllLayers_MetaData), NewProp_bApplySharpenTypeToAllLayers_MetaData) };
void Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bPixelDensityAdaptive_SetBit(void* Obj)
{
	((UYvrXRHMDSettings*)Obj)->bPixelDensityAdaptive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bPixelDensityAdaptive = { "bPixelDensityAdaptive", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYvrXRHMDSettings), &Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bPixelDensityAdaptive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPixelDensityAdaptive_MetaData), NewProp_bPixelDensityAdaptive_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_DynamicAResolutionLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_DynamicAResolutionLevel = { "DynamicAResolutionLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrXRHMDSettings, DynamicAResolutionLevel), Z_Construct_UEnum_YvrXRHMD_EYvrDynamicResolutionSetting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicAResolutionLevel_MetaData), NewProp_DynamicAResolutionLevel_MetaData) }; // 2022087948
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_PixelDensityMin = { "PixelDensityMin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrXRHMDSettings, PixelDensityMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelDensityMin_MetaData), NewProp_PixelDensityMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_PixelDensityMax = { "PixelDensityMax", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrXRHMDSettings, PixelDensityMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelDensityMax_MetaData), NewProp_PixelDensityMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_OSSplashScreen = { "OSSplashScreen", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrXRHMDSettings, OSSplashScreen), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OSSplashScreen_MetaData), NewProp_OSSplashScreen_MetaData) };
void Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bUsingOSSplash_SetBit(void* Obj)
{
	((UYvrXRHMDSettings*)Obj)->bUsingOSSplash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bUsingOSSplash = { "bUsingOSSplash", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYvrXRHMDSettings), &Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bUsingOSSplash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsingOSSplash_MetaData), NewProp_bUsingOSSplash_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_HandTrackingSupport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_HandTrackingSupport = { "HandTrackingSupport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrXRHMDSettings, HandTrackingSupport), Z_Construct_UEnum_YvrXRHMD_EYvrXRHandTrackingSupport, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandTrackingSupport_MetaData), NewProp_HandTrackingSupport_MetaData) }; // 799862315
void Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bAnchorSupportEnabled_SetBit(void* Obj)
{
	((UYvrXRHMDSettings*)Obj)->bAnchorSupportEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bAnchorSupportEnabled = { "bAnchorSupportEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYvrXRHMDSettings), &Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bAnchorSupportEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnchorSupportEnabled_MetaData), NewProp_bAnchorSupportEnabled_MetaData) };
void Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bSceneSupportEnabled_SetBit(void* Obj)
{
	((UYvrXRHMDSettings*)Obj)->bSceneSupportEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bSceneSupportEnabled = { "bSceneSupportEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYvrXRHMDSettings), &Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bSceneSupportEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSceneSupportEnabled_MetaData), NewProp_bSceneSupportEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYvrXRHMDSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_CPULevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_CPULevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_GPULevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_GPULevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bUseHWsRGBEncoding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_FFRLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_FFRLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_FFRDynamic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bUseSpaceWarp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_SharpenType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_SharpenType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bApplySharpenTypeToAllLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bPixelDensityAdaptive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_DynamicAResolutionLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_DynamicAResolutionLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_PixelDensityMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_PixelDensityMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_OSSplashScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bUsingOSSplash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_HandTrackingSupport_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_HandTrackingSupport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bAnchorSupportEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHMDSettings_Statics::NewProp_bSceneSupportEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRHMDSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYvrXRHMDSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRHMD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRHMDSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrXRHMDSettings_Statics::ClassParams = {
	&UYvrXRHMDSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UYvrXRHMDSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRHMDSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRHMDSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrXRHMDSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrXRHMDSettings()
{
	if (!Z_Registration_Info_UClass_UYvrXRHMDSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrXRHMDSettings.OuterSingleton, Z_Construct_UClass_UYvrXRHMDSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrXRHMDSettings.OuterSingleton;
}
template<> YVRXRHMD_API UClass* StaticClass<UYvrXRHMDSettings>()
{
	return UYvrXRHMDSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrXRHMDSettings);
UYvrXRHMDSettings::~UYvrXRHMDSettings() {}
// End Class UYvrXRHMDSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Private_YvrXRHMDSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYvrXRHMDSettings, UYvrXRHMDSettings::StaticClass, TEXT("UYvrXRHMDSettings"), &Z_Registration_Info_UClass_UYvrXRHMDSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrXRHMDSettings), 3214435142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Private_YvrXRHMDSettings_h_1000957462(TEXT("/Script/YvrXRHMD"),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Private_YvrXRHMDSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Private_YvrXRHMDSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
