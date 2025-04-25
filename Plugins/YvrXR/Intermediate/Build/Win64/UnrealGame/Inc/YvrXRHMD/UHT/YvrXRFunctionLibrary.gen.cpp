// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YvrXRHMD/Public/YvrXRFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYvrXRFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector();
UPackage* Z_Construct_UPackage__Script_YvrXRHMD();
YVRXRHMD_API UClass* Z_Construct_UClass_UYvrXRFunctionLibrary();
YVRXRHMD_API UClass* Z_Construct_UClass_UYvrXRFunctionLibrary_NoRegister();
YVRXRHMD_API UEnum* Z_Construct_UEnum_YvrXRHMD_EYvrDynamicResolutionSetting();
YVRXRHMD_API UEnum* Z_Construct_UEnum_YvrXRHMD_EYvrFixedFoveatedRenderingLevel();
YVRXRHMD_API UEnum* Z_Construct_UEnum_YvrXRHMD_EYvrLayerSharpenType();
YVRXRHMD_API UEnum* Z_Construct_UEnum_YvrXRHMD_EYvrPerformanceLevel();
YVRXRHMD_API UEnum* Z_Construct_UEnum_YvrXRHMD_EYvrXRHandTrackingSupport();
// End Cross Module References

// Begin Enum EYvrFixedFoveatedRenderingLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYvrFixedFoveatedRenderingLevel;
static UEnum* EYvrFixedFoveatedRenderingLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYvrFixedFoveatedRenderingLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYvrFixedFoveatedRenderingLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrXRHMD_EYvrFixedFoveatedRenderingLevel, (UObject*)Z_Construct_UPackage__Script_YvrXRHMD(), TEXT("EYvrFixedFoveatedRenderingLevel"));
	}
	return Z_Registration_Info_UEnum_EYvrFixedFoveatedRenderingLevel.OuterSingleton;
}
template<> YVRXRHMD_API UEnum* StaticEnum<EYvrFixedFoveatedRenderingLevel>()
{
	return EYvrFixedFoveatedRenderingLevel_StaticEnum();
}
struct Z_Construct_UEnum_YvrXRHMD_EYvrFixedFoveatedRenderingLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FFR_HIGH.Name", "EYvrFixedFoveatedRenderingLevel::FFR_HIGH" },
		{ "FFR_LOW.Name", "EYvrFixedFoveatedRenderingLevel::FFR_LOW" },
		{ "FFR_MEDIUM.Name", "EYvrFixedFoveatedRenderingLevel::FFR_MEDIUM" },
		{ "FFR_OFF.Name", "EYvrFixedFoveatedRenderingLevel::FFR_OFF" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYvrFixedFoveatedRenderingLevel::FFR_OFF", (int64)EYvrFixedFoveatedRenderingLevel::FFR_OFF },
		{ "EYvrFixedFoveatedRenderingLevel::FFR_LOW", (int64)EYvrFixedFoveatedRenderingLevel::FFR_LOW },
		{ "EYvrFixedFoveatedRenderingLevel::FFR_MEDIUM", (int64)EYvrFixedFoveatedRenderingLevel::FFR_MEDIUM },
		{ "EYvrFixedFoveatedRenderingLevel::FFR_HIGH", (int64)EYvrFixedFoveatedRenderingLevel::FFR_HIGH },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrXRHMD_EYvrFixedFoveatedRenderingLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrXRHMD,
	nullptr,
	"EYvrFixedFoveatedRenderingLevel",
	"EYvrFixedFoveatedRenderingLevel",
	Z_Construct_UEnum_YvrXRHMD_EYvrFixedFoveatedRenderingLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRHMD_EYvrFixedFoveatedRenderingLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRHMD_EYvrFixedFoveatedRenderingLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrXRHMD_EYvrFixedFoveatedRenderingLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrXRHMD_EYvrFixedFoveatedRenderingLevel()
{
	if (!Z_Registration_Info_UEnum_EYvrFixedFoveatedRenderingLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYvrFixedFoveatedRenderingLevel.InnerSingleton, Z_Construct_UEnum_YvrXRHMD_EYvrFixedFoveatedRenderingLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYvrFixedFoveatedRenderingLevel.InnerSingleton;
}
// End Enum EYvrFixedFoveatedRenderingLevel

// Begin Enum EYvrPerformanceLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYvrPerformanceLevel;
static UEnum* EYvrPerformanceLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYvrPerformanceLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYvrPerformanceLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrXRHMD_EYvrPerformanceLevel, (UObject*)Z_Construct_UPackage__Script_YvrXRHMD(), TEXT("EYvrPerformanceLevel"));
	}
	return Z_Registration_Info_UEnum_EYvrPerformanceLevel.OuterSingleton;
}
template<> YVRXRHMD_API UEnum* StaticEnum<EYvrPerformanceLevel>()
{
	return EYvrPerformanceLevel_StaticEnum();
}
struct Z_Construct_UEnum_YvrXRHMD_EYvrPerformanceLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LEVEL_BOOST.Name", "EYvrPerformanceLevel::LEVEL_BOOST" },
		{ "LEVEL_MAX.Name", "EYvrPerformanceLevel::LEVEL_MAX" },
		{ "LEVEL_POWER_SAVINGS.Name", "EYvrPerformanceLevel::LEVEL_POWER_SAVINGS" },
		{ "LEVEL_SUSTAINED_HIGH.Name", "EYvrPerformanceLevel::LEVEL_SUSTAINED_HIGH" },
		{ "LEVEL_SUSTAINED_LOW.Name", "EYvrPerformanceLevel::LEVEL_SUSTAINED_LOW" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYvrPerformanceLevel::LEVEL_POWER_SAVINGS", (int64)EYvrPerformanceLevel::LEVEL_POWER_SAVINGS },
		{ "EYvrPerformanceLevel::LEVEL_SUSTAINED_LOW", (int64)EYvrPerformanceLevel::LEVEL_SUSTAINED_LOW },
		{ "EYvrPerformanceLevel::LEVEL_SUSTAINED_HIGH", (int64)EYvrPerformanceLevel::LEVEL_SUSTAINED_HIGH },
		{ "EYvrPerformanceLevel::LEVEL_BOOST", (int64)EYvrPerformanceLevel::LEVEL_BOOST },
		{ "EYvrPerformanceLevel::LEVEL_MAX", (int64)EYvrPerformanceLevel::LEVEL_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrXRHMD_EYvrPerformanceLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrXRHMD,
	nullptr,
	"EYvrPerformanceLevel",
	"EYvrPerformanceLevel",
	Z_Construct_UEnum_YvrXRHMD_EYvrPerformanceLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRHMD_EYvrPerformanceLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRHMD_EYvrPerformanceLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrXRHMD_EYvrPerformanceLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrXRHMD_EYvrPerformanceLevel()
{
	if (!Z_Registration_Info_UEnum_EYvrPerformanceLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYvrPerformanceLevel.InnerSingleton, Z_Construct_UEnum_YvrXRHMD_EYvrPerformanceLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYvrPerformanceLevel.InnerSingleton;
}
// End Enum EYvrPerformanceLevel

// Begin Enum EYvrXRHandTrackingSupport
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYvrXRHandTrackingSupport;
static UEnum* EYvrXRHandTrackingSupport_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYvrXRHandTrackingSupport.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYvrXRHandTrackingSupport.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrXRHMD_EYvrXRHandTrackingSupport, (UObject*)Z_Construct_UPackage__Script_YvrXRHMD(), TEXT("EYvrXRHandTrackingSupport"));
	}
	return Z_Registration_Info_UEnum_EYvrXRHandTrackingSupport.OuterSingleton;
}
template<> YVRXRHMD_API UEnum* StaticEnum<EYvrXRHandTrackingSupport>()
{
	return EYvrXRHandTrackingSupport_StaticEnum();
}
struct Z_Construct_UEnum_YvrXRHMD_EYvrXRHandTrackingSupport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ControllersAndHands.Name", "EYvrXRHandTrackingSupport::ControllersAndHands" },
		{ "ControllersOnly.Name", "EYvrXRHandTrackingSupport::ControllersOnly" },
		{ "HandsOnly.Name", "EYvrXRHandTrackingSupport::HandsOnly" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYvrXRHandTrackingSupport::ControllersOnly", (int64)EYvrXRHandTrackingSupport::ControllersOnly },
		{ "EYvrXRHandTrackingSupport::ControllersAndHands", (int64)EYvrXRHandTrackingSupport::ControllersAndHands },
		{ "EYvrXRHandTrackingSupport::HandsOnly", (int64)EYvrXRHandTrackingSupport::HandsOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrXRHMD_EYvrXRHandTrackingSupport_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrXRHMD,
	nullptr,
	"EYvrXRHandTrackingSupport",
	"EYvrXRHandTrackingSupport",
	Z_Construct_UEnum_YvrXRHMD_EYvrXRHandTrackingSupport_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRHMD_EYvrXRHandTrackingSupport_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRHMD_EYvrXRHandTrackingSupport_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrXRHMD_EYvrXRHandTrackingSupport_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrXRHMD_EYvrXRHandTrackingSupport()
{
	if (!Z_Registration_Info_UEnum_EYvrXRHandTrackingSupport.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYvrXRHandTrackingSupport.InnerSingleton, Z_Construct_UEnum_YvrXRHMD_EYvrXRHandTrackingSupport_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYvrXRHandTrackingSupport.InnerSingleton;
}
// End Enum EYvrXRHandTrackingSupport

// Begin Enum EYvrLayerSharpenType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYvrLayerSharpenType;
static UEnum* EYvrLayerSharpenType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYvrLayerSharpenType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYvrLayerSharpenType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrXRHMD_EYvrLayerSharpenType, (UObject*)Z_Construct_UPackage__Script_YvrXRHMD(), TEXT("EYvrLayerSharpenType"));
	}
	return Z_Registration_Info_UEnum_EYvrLayerSharpenType.OuterSingleton;
}
template<> YVRXRHMD_API UEnum* StaticEnum<EYvrLayerSharpenType>()
{
	return EYvrLayerSharpenType_StaticEnum();
}
struct Z_Construct_UEnum_YvrXRHMD_EYvrLayerSharpenType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
		{ "NONE.Name", "EYvrLayerSharpenType::NONE" },
		{ "NORMAL_SHARPENING.Name", "EYvrLayerSharpenType::NORMAL_SHARPENING" },
		{ "NORMAL_SUPER_SAMPING.Name", "EYvrLayerSharpenType::NORMAL_SUPER_SAMPING" },
		{ "QUALITY_SHARPENING.Name", "EYvrLayerSharpenType::QUALITY_SHARPENING" },
		{ "QUALITY_SUPER_SAMPLING.Name", "EYvrLayerSharpenType::QUALITY_SUPER_SAMPLING" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYvrLayerSharpenType::NONE", (int64)EYvrLayerSharpenType::NONE },
		{ "EYvrLayerSharpenType::NORMAL_SUPER_SAMPING", (int64)EYvrLayerSharpenType::NORMAL_SUPER_SAMPING },
		{ "EYvrLayerSharpenType::QUALITY_SUPER_SAMPLING", (int64)EYvrLayerSharpenType::QUALITY_SUPER_SAMPLING },
		{ "EYvrLayerSharpenType::NORMAL_SHARPENING", (int64)EYvrLayerSharpenType::NORMAL_SHARPENING },
		{ "EYvrLayerSharpenType::QUALITY_SHARPENING", (int64)EYvrLayerSharpenType::QUALITY_SHARPENING },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrXRHMD_EYvrLayerSharpenType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrXRHMD,
	nullptr,
	"EYvrLayerSharpenType",
	"EYvrLayerSharpenType",
	Z_Construct_UEnum_YvrXRHMD_EYvrLayerSharpenType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRHMD_EYvrLayerSharpenType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRHMD_EYvrLayerSharpenType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrXRHMD_EYvrLayerSharpenType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrXRHMD_EYvrLayerSharpenType()
{
	if (!Z_Registration_Info_UEnum_EYvrLayerSharpenType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYvrLayerSharpenType.InnerSingleton, Z_Construct_UEnum_YvrXRHMD_EYvrLayerSharpenType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYvrLayerSharpenType.InnerSingleton;
}
// End Enum EYvrLayerSharpenType

// Begin Enum EYvrDynamicResolutionSetting
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYvrDynamicResolutionSetting;
static UEnum* EYvrDynamicResolutionSetting_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYvrDynamicResolutionSetting.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYvrDynamicResolutionSetting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrXRHMD_EYvrDynamicResolutionSetting, (UObject*)Z_Construct_UPackage__Script_YvrXRHMD(), TEXT("EYvrDynamicResolutionSetting"));
	}
	return Z_Registration_Info_UEnum_EYvrDynamicResolutionSetting.OuterSingleton;
}
template<> YVRXRHMD_API UEnum* StaticEnum<EYvrDynamicResolutionSetting>()
{
	return EYvrDynamicResolutionSetting_StaticEnum();
}
struct Z_Construct_UEnum_YvrXRHMD_EYvrDynamicResolutionSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BALANCED.Name", "EYvrDynamicResolutionSetting::BALANCED" },
		{ "BATTERY_SAVING.Name", "EYvrDynamicResolutionSetting::BATTERY_SAVING" },
		{ "BlueprintType", "true" },
		{ "HIGH_QUALITY.Name", "EYvrDynamicResolutionSetting::HIGH_QUALITY" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYvrDynamicResolutionSetting::HIGH_QUALITY", (int64)EYvrDynamicResolutionSetting::HIGH_QUALITY },
		{ "EYvrDynamicResolutionSetting::BALANCED", (int64)EYvrDynamicResolutionSetting::BALANCED },
		{ "EYvrDynamicResolutionSetting::BATTERY_SAVING", (int64)EYvrDynamicResolutionSetting::BATTERY_SAVING },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrXRHMD_EYvrDynamicResolutionSetting_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrXRHMD,
	nullptr,
	"EYvrDynamicResolutionSetting",
	"EYvrDynamicResolutionSetting",
	Z_Construct_UEnum_YvrXRHMD_EYvrDynamicResolutionSetting_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRHMD_EYvrDynamicResolutionSetting_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRHMD_EYvrDynamicResolutionSetting_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrXRHMD_EYvrDynamicResolutionSetting_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrXRHMD_EYvrDynamicResolutionSetting()
{
	if (!Z_Registration_Info_UEnum_EYvrDynamicResolutionSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYvrDynamicResolutionSetting.InnerSingleton, Z_Construct_UEnum_YvrXRHMD_EYvrDynamicResolutionSetting_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYvrDynamicResolutionSetting.InnerSingleton;
}
// End Enum EYvrDynamicResolutionSetting

// Begin Class UYvrXRFunctionLibrary Function GetAvailableDisplayFrequencies
struct Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies_Statics
{
	struct YvrXRFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRFunctionLibrary, nullptr, "GetAvailableDisplayFrequencies", nullptr, nullptr, Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies_Statics::YvrXRFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies_Statics::YvrXRFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRFunctionLibrary::execGetAvailableDisplayFrequencies)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=UYvrXRFunctionLibrary::GetAvailableDisplayFrequencies();
	P_NATIVE_END;
}
// End Class UYvrXRFunctionLibrary Function GetAvailableDisplayFrequencies

// Begin Class UYvrXRFunctionLibrary Function GetBaseRotationAndBaseOffsetInMeters
struct Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics
{
	struct YvrXRFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms
	{
		FRotator OutRotation;
		FVector OutBaseOffsetInMeters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutBaseOffsetInMeters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutBaseOffsetInMeters = { "OutBaseOffsetInMeters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms, OutBaseOffsetInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutBaseOffsetInMeters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRFunctionLibrary, nullptr, "GetBaseRotationAndBaseOffsetInMeters", nullptr, nullptr, Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::YvrXRFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::YvrXRFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRFunctionLibrary::execGetBaseRotationAndBaseOffsetInMeters)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutBaseOffsetInMeters);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYvrXRFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(Z_Param_Out_OutRotation,Z_Param_Out_OutBaseOffsetInMeters);
	P_NATIVE_END;
}
// End Class UYvrXRFunctionLibrary Function GetBaseRotationAndBaseOffsetInMeters

// Begin Class UYvrXRFunctionLibrary Function GetCurrentDisplayFrequency
struct Z_Construct_UFunction_UYvrXRFunctionLibrary_GetCurrentDisplayFrequency_Statics
{
	struct YvrXRFunctionLibrary_eventGetCurrentDisplayFrequency_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetCurrentDisplayFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventGetCurrentDisplayFrequency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRFunctionLibrary_GetCurrentDisplayFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_GetCurrentDisplayFrequency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetCurrentDisplayFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetCurrentDisplayFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRFunctionLibrary, nullptr, "GetCurrentDisplayFrequency", nullptr, nullptr, Z_Construct_UFunction_UYvrXRFunctionLibrary_GetCurrentDisplayFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetCurrentDisplayFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetCurrentDisplayFrequency_Statics::YvrXRFunctionLibrary_eventGetCurrentDisplayFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRFunctionLibrary_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetCurrentDisplayFrequency_Statics::YvrXRFunctionLibrary_eventGetCurrentDisplayFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRFunctionLibrary_GetCurrentDisplayFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRFunctionLibrary_GetCurrentDisplayFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRFunctionLibrary::execGetCurrentDisplayFrequency)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UYvrXRFunctionLibrary::GetCurrentDisplayFrequency();
	P_NATIVE_END;
}
// End Class UYvrXRFunctionLibrary Function GetCurrentDisplayFrequency

// Begin Class UYvrXRFunctionLibrary Function GetFixedFoveatedRenderingLevel
struct Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics
{
	struct YvrXRFunctionLibrary_eventGetFixedFoveatedRenderingLevel_Parms
	{
		EYvrFixedFoveatedRenderingLevel ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventGetFixedFoveatedRenderingLevel_Parms, ReturnValue), Z_Construct_UEnum_YvrXRHMD_EYvrFixedFoveatedRenderingLevel, METADATA_PARAMS(0, nullptr) }; // 1513249936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRFunctionLibrary, nullptr, "GetFixedFoveatedRenderingLevel", nullptr, nullptr, Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::YvrXRFunctionLibrary_eventGetFixedFoveatedRenderingLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::YvrXRFunctionLibrary_eventGetFixedFoveatedRenderingLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRFunctionLibrary::execGetFixedFoveatedRenderingLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EYvrFixedFoveatedRenderingLevel*)Z_Param__Result=UYvrXRFunctionLibrary::GetFixedFoveatedRenderingLevel();
	P_NATIVE_END;
}
// End Class UYvrXRFunctionLibrary Function GetFixedFoveatedRenderingLevel

// Begin Class UYvrXRFunctionLibrary Function GetPose
struct Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics
{
	struct YvrXRFunctionLibrary_eventGetPose_Parms
	{
		FRotator DeviceRotation;
		FVector DevicePosition;
		FVector NeckPosition;
		bool bUseOrienationForPlayerCamera;
		bool bUsePositionForPlayerCamera;
		FVector PositionScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "CPP_Default_bUseOrienationForPlayerCamera", "false" },
		{ "CPP_Default_bUsePositionForPlayerCamera", "false" },
		{ "CPP_Default_PositionScale", "" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DevicePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NeckPosition;
	static void NewProp_bUseOrienationForPlayerCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOrienationForPlayerCamera;
	static void NewProp_bUsePositionForPlayerCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePositionForPlayerCamera;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::NewProp_DeviceRotation = { "DeviceRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventGetPose_Parms, DeviceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::NewProp_DevicePosition = { "DevicePosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventGetPose_Parms, DevicePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::NewProp_NeckPosition = { "NeckPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventGetPose_Parms, NeckPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera_SetBit(void* Obj)
{
	((YvrXRFunctionLibrary_eventGetPose_Parms*)Obj)->bUseOrienationForPlayerCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera = { "bUseOrienationForPlayerCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRFunctionLibrary_eventGetPose_Parms), &Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera_SetBit(void* Obj)
{
	((YvrXRFunctionLibrary_eventGetPose_Parms*)Obj)->bUsePositionForPlayerCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera = { "bUsePositionForPlayerCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRFunctionLibrary_eventGetPose_Parms), &Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::NewProp_PositionScale = { "PositionScale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventGetPose_Parms, PositionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionScale_MetaData), NewProp_PositionScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::NewProp_DeviceRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::NewProp_DevicePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::NewProp_NeckPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::NewProp_PositionScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRFunctionLibrary, nullptr, "GetPose", nullptr, nullptr, Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::YvrXRFunctionLibrary_eventGetPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::YvrXRFunctionLibrary_eventGetPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRFunctionLibrary::execGetPose)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_DeviceRotation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DevicePosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NeckPosition);
	P_GET_UBOOL(Z_Param_bUseOrienationForPlayerCamera);
	P_GET_UBOOL(Z_Param_bUsePositionForPlayerCamera);
	P_GET_STRUCT(FVector,Z_Param_PositionScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYvrXRFunctionLibrary::GetPose(Z_Param_Out_DeviceRotation,Z_Param_Out_DevicePosition,Z_Param_Out_NeckPosition,Z_Param_bUseOrienationForPlayerCamera,Z_Param_bUsePositionForPlayerCamera,Z_Param_PositionScale);
	P_NATIVE_END;
}
// End Class UYvrXRFunctionLibrary Function GetPose

// Begin Class UYvrXRFunctionLibrary Function HasInputFocus
struct Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus_Statics
{
	struct YvrXRFunctionLibrary_eventHasInputFocus_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRFunctionLibrary_eventHasInputFocus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRFunctionLibrary_eventHasInputFocus_Parms), &Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRFunctionLibrary, nullptr, "HasInputFocus", nullptr, nullptr, Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus_Statics::YvrXRFunctionLibrary_eventHasInputFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus_Statics::YvrXRFunctionLibrary_eventHasInputFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRFunctionLibrary::execHasInputFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRFunctionLibrary::HasInputFocus();
	P_NATIVE_END;
}
// End Class UYvrXRFunctionLibrary Function HasInputFocus

// Begin Class UYvrXRFunctionLibrary Function HasSystemOverlayPresent
struct Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent_Statics
{
	struct YvrXRFunctionLibrary_eventHasSystemOverlayPresent_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRFunctionLibrary_eventHasSystemOverlayPresent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRFunctionLibrary_eventHasSystemOverlayPresent_Parms), &Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRFunctionLibrary, nullptr, "HasSystemOverlayPresent", nullptr, nullptr, Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent_Statics::YvrXRFunctionLibrary_eventHasSystemOverlayPresent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent_Statics::YvrXRFunctionLibrary_eventHasSystemOverlayPresent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRFunctionLibrary::execHasSystemOverlayPresent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRFunctionLibrary::HasSystemOverlayPresent();
	P_NATIVE_END;
}
// End Class UYvrXRFunctionLibrary Function HasSystemOverlayPresent

// Begin Class UYvrXRFunctionLibrary Function SetBackgroundLayerVisible
struct Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible_Statics
{
	struct YvrXRFunctionLibrary_eventSetBackgroundLayerVisible_Parms
	{
		bool bIsVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((YvrXRFunctionLibrary_eventSetBackgroundLayerVisible_Parms*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRFunctionLibrary_eventSetBackgroundLayerVisible_Parms), &Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible_Statics::NewProp_bIsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRFunctionLibrary, nullptr, "SetBackgroundLayerVisible", nullptr, nullptr, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible_Statics::YvrXRFunctionLibrary_eventSetBackgroundLayerVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible_Statics::YvrXRFunctionLibrary_eventSetBackgroundLayerVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRFunctionLibrary::execSetBackgroundLayerVisible)
{
	P_GET_UBOOL(Z_Param_bIsVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYvrXRFunctionLibrary::SetBackgroundLayerVisible(Z_Param_bIsVisible);
	P_NATIVE_END;
}
// End Class UYvrXRFunctionLibrary Function SetBackgroundLayerVisible

// Begin Class UYvrXRFunctionLibrary Function SetBaseRotationAndBaseOffsetInMeters
struct Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics
{
	struct YvrXRFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms
	{
		FRotator Rotation;
		FVector BaseOffsetInMeters;
		TEnumAsByte<EOrientPositionSelector::Type> Options;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseOffsetInMeters;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_BaseOffsetInMeters = { "BaseOffsetInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, BaseOffsetInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, Options), Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, METADATA_PARAMS(0, nullptr) }; // 3091753543
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_BaseOffsetInMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRFunctionLibrary, nullptr, "SetBaseRotationAndBaseOffsetInMeters", nullptr, nullptr, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::YvrXRFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::YvrXRFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRFunctionLibrary::execSetBaseRotationAndBaseOffsetInMeters)
{
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_STRUCT(FVector,Z_Param_BaseOffsetInMeters);
	P_GET_PROPERTY(FByteProperty,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYvrXRFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(Z_Param_Rotation,Z_Param_BaseOffsetInMeters,EOrientPositionSelector::Type(Z_Param_Options));
	P_NATIVE_END;
}
// End Class UYvrXRFunctionLibrary Function SetBaseRotationAndBaseOffsetInMeters

// Begin Class UYvrXRFunctionLibrary Function SetColorScaleAndOffset
struct Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics
{
	struct YvrXRFunctionLibrary_eventSetColorScaleAndOffset_Parms
	{
		FLinearColor ColorScale;
		FLinearColor ColorOffset;
		bool bApplyToAllLayers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "CPP_Default_bApplyToAllLayers", "false" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOffset;
	static void NewProp_bApplyToAllLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToAllLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorScale = { "ColorScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventSetColorScaleAndOffset_Parms, ColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorOffset = { "ColorOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventSetColorScaleAndOffset_Parms, ColorOffset), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers_SetBit(void* Obj)
{
	((YvrXRFunctionLibrary_eventSetColorScaleAndOffset_Parms*)Obj)->bApplyToAllLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers = { "bApplyToAllLayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRFunctionLibrary_eventSetColorScaleAndOffset_Parms), &Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRFunctionLibrary, nullptr, "SetColorScaleAndOffset", nullptr, nullptr, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::YvrXRFunctionLibrary_eventSetColorScaleAndOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::YvrXRFunctionLibrary_eventSetColorScaleAndOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRFunctionLibrary::execSetColorScaleAndOffset)
{
	P_GET_STRUCT(FLinearColor,Z_Param_ColorScale);
	P_GET_STRUCT(FLinearColor,Z_Param_ColorOffset);
	P_GET_UBOOL(Z_Param_bApplyToAllLayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYvrXRFunctionLibrary::SetColorScaleAndOffset(Z_Param_ColorScale,Z_Param_ColorOffset,Z_Param_bApplyToAllLayers);
	P_NATIVE_END;
}
// End Class UYvrXRFunctionLibrary Function SetColorScaleAndOffset

// Begin Class UYvrXRFunctionLibrary Function SetCPUAndGPULevels
struct Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels_Statics
{
	struct YvrXRFunctionLibrary_eventSetCPUAndGPULevels_Parms
	{
		int32 CPULevel;
		int32 GPULevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CPULevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GPULevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_CPULevel = { "CPULevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventSetCPUAndGPULevels_Parms, CPULevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_GPULevel = { "GPULevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventSetCPUAndGPULevels_Parms, GPULevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_CPULevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_GPULevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRFunctionLibrary, nullptr, "SetCPUAndGPULevels", nullptr, nullptr, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels_Statics::YvrXRFunctionLibrary_eventSetCPUAndGPULevels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels_Statics::YvrXRFunctionLibrary_eventSetCPUAndGPULevels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRFunctionLibrary::execSetCPUAndGPULevels)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CPULevel);
	P_GET_PROPERTY(FIntProperty,Z_Param_GPULevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYvrXRFunctionLibrary::SetCPUAndGPULevels(Z_Param_CPULevel,Z_Param_GPULevel);
	P_NATIVE_END;
}
// End Class UYvrXRFunctionLibrary Function SetCPUAndGPULevels

// Begin Class UYvrXRFunctionLibrary Function SetDisplayFrequency
struct Z_Construct_UFunction_UYvrXRFunctionLibrary_SetDisplayFrequency_Statics
{
	struct YvrXRFunctionLibrary_eventSetDisplayFrequency_Parms
	{
		float RequestedFrequency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequestedFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetDisplayFrequency_Statics::NewProp_RequestedFrequency = { "RequestedFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventSetDisplayFrequency_Parms, RequestedFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRFunctionLibrary_SetDisplayFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetDisplayFrequency_Statics::NewProp_RequestedFrequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetDisplayFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetDisplayFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRFunctionLibrary, nullptr, "SetDisplayFrequency", nullptr, nullptr, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetDisplayFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetDisplayFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetDisplayFrequency_Statics::YvrXRFunctionLibrary_eventSetDisplayFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetDisplayFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRFunctionLibrary_SetDisplayFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetDisplayFrequency_Statics::YvrXRFunctionLibrary_eventSetDisplayFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRFunctionLibrary_SetDisplayFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetDisplayFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRFunctionLibrary::execSetDisplayFrequency)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_RequestedFrequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYvrXRFunctionLibrary::SetDisplayFrequency(Z_Param_RequestedFrequency);
	P_NATIVE_END;
}
// End Class UYvrXRFunctionLibrary Function SetDisplayFrequency

// Begin Class UYvrXRFunctionLibrary Function SetFixedFoveatedRenderingLevel
struct Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics
{
	struct YvrXRFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms
	{
		EYvrFixedFoveatedRenderingLevel Level;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Level_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_Level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms, Level), Z_Construct_UEnum_YvrXRHMD_EYvrFixedFoveatedRenderingLevel, METADATA_PARAMS(0, nullptr) }; // 1513249936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_Level_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRFunctionLibrary, nullptr, "SetFixedFoveatedRenderingLevel", nullptr, nullptr, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::YvrXRFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::YvrXRFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRFunctionLibrary::execSetFixedFoveatedRenderingLevel)
{
	P_GET_ENUM(EYvrFixedFoveatedRenderingLevel,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYvrXRFunctionLibrary::SetFixedFoveatedRenderingLevel(EYvrFixedFoveatedRenderingLevel(Z_Param_Level));
	P_NATIVE_END;
}
// End Class UYvrXRFunctionLibrary Function SetFixedFoveatedRenderingLevel

// Begin Class UYvrXRFunctionLibrary Function SetSeeThroughBackgroundEnabled
struct Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled_Statics
{
	struct YvrXRFunctionLibrary_eventSetSeeThroughBackgroundEnabled_Parms
	{
		bool bIsEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((YvrXRFunctionLibrary_eventSetSeeThroughBackgroundEnabled_Parms*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRFunctionLibrary_eventSetSeeThroughBackgroundEnabled_Parms), &Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRFunctionLibrary, nullptr, "SetSeeThroughBackgroundEnabled", nullptr, nullptr, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled_Statics::YvrXRFunctionLibrary_eventSetSeeThroughBackgroundEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled_Statics::YvrXRFunctionLibrary_eventSetSeeThroughBackgroundEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRFunctionLibrary::execSetSeeThroughBackgroundEnabled)
{
	P_GET_UBOOL(Z_Param_bIsEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYvrXRFunctionLibrary::SetSeeThroughBackgroundEnabled(Z_Param_bIsEnabled);
	P_NATIVE_END;
}
// End Class UYvrXRFunctionLibrary Function SetSeeThroughBackgroundEnabled

// Begin Class UYvrXRFunctionLibrary Function SetSharpenType
struct Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics
{
	struct YvrXRFunctionLibrary_eventSetSharpenType_Parms
	{
		EYvrLayerSharpenType SharpenType;
		bool bApplyToAllLayers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "CPP_Default_bApplyToAllLayers", "false" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SharpenType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SharpenType;
	static void NewProp_bApplyToAllLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToAllLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::NewProp_SharpenType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::NewProp_SharpenType = { "SharpenType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRFunctionLibrary_eventSetSharpenType_Parms, SharpenType), Z_Construct_UEnum_YvrXRHMD_EYvrLayerSharpenType, METADATA_PARAMS(0, nullptr) }; // 2519015889
void Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::NewProp_bApplyToAllLayers_SetBit(void* Obj)
{
	((YvrXRFunctionLibrary_eventSetSharpenType_Parms*)Obj)->bApplyToAllLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::NewProp_bApplyToAllLayers = { "bApplyToAllLayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRFunctionLibrary_eventSetSharpenType_Parms), &Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::NewProp_bApplyToAllLayers_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::NewProp_SharpenType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::NewProp_SharpenType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::NewProp_bApplyToAllLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRFunctionLibrary, nullptr, "SetSharpenType", nullptr, nullptr, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::YvrXRFunctionLibrary_eventSetSharpenType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::YvrXRFunctionLibrary_eventSetSharpenType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRFunctionLibrary::execSetSharpenType)
{
	P_GET_ENUM(EYvrLayerSharpenType,Z_Param_SharpenType);
	P_GET_UBOOL(Z_Param_bApplyToAllLayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYvrXRFunctionLibrary::SetSharpenType(EYvrLayerSharpenType(Z_Param_SharpenType),Z_Param_bApplyToAllLayers);
	P_NATIVE_END;
}
// End Class UYvrXRFunctionLibrary Function SetSharpenType

// Begin Class UYvrXRFunctionLibrary Function SetSpaceWarpEnabled
struct Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled_Statics
{
	struct YvrXRFunctionLibrary_eventSetSpaceWarpEnabled_Parms
	{
		bool bIsEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((YvrXRFunctionLibrary_eventSetSpaceWarpEnabled_Parms*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRFunctionLibrary_eventSetSpaceWarpEnabled_Parms), &Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRFunctionLibrary, nullptr, "SetSpaceWarpEnabled", nullptr, nullptr, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled_Statics::YvrXRFunctionLibrary_eventSetSpaceWarpEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled_Statics::YvrXRFunctionLibrary_eventSetSpaceWarpEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRFunctionLibrary::execSetSpaceWarpEnabled)
{
	P_GET_UBOOL(Z_Param_bIsEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYvrXRFunctionLibrary::SetSpaceWarpEnabled(Z_Param_bIsEnabled);
	P_NATIVE_END;
}
// End Class UYvrXRFunctionLibrary Function SetSpaceWarpEnabled

// Begin Class UYvrXRFunctionLibrary
void UYvrXRFunctionLibrary::StaticRegisterNativesUYvrXRFunctionLibrary()
{
	UClass* Class = UYvrXRFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAvailableDisplayFrequencies", &UYvrXRFunctionLibrary::execGetAvailableDisplayFrequencies },
		{ "GetBaseRotationAndBaseOffsetInMeters", &UYvrXRFunctionLibrary::execGetBaseRotationAndBaseOffsetInMeters },
		{ "GetCurrentDisplayFrequency", &UYvrXRFunctionLibrary::execGetCurrentDisplayFrequency },
		{ "GetFixedFoveatedRenderingLevel", &UYvrXRFunctionLibrary::execGetFixedFoveatedRenderingLevel },
		{ "GetPose", &UYvrXRFunctionLibrary::execGetPose },
		{ "HasInputFocus", &UYvrXRFunctionLibrary::execHasInputFocus },
		{ "HasSystemOverlayPresent", &UYvrXRFunctionLibrary::execHasSystemOverlayPresent },
		{ "SetBackgroundLayerVisible", &UYvrXRFunctionLibrary::execSetBackgroundLayerVisible },
		{ "SetBaseRotationAndBaseOffsetInMeters", &UYvrXRFunctionLibrary::execSetBaseRotationAndBaseOffsetInMeters },
		{ "SetColorScaleAndOffset", &UYvrXRFunctionLibrary::execSetColorScaleAndOffset },
		{ "SetCPUAndGPULevels", &UYvrXRFunctionLibrary::execSetCPUAndGPULevels },
		{ "SetDisplayFrequency", &UYvrXRFunctionLibrary::execSetDisplayFrequency },
		{ "SetFixedFoveatedRenderingLevel", &UYvrXRFunctionLibrary::execSetFixedFoveatedRenderingLevel },
		{ "SetSeeThroughBackgroundEnabled", &UYvrXRFunctionLibrary::execSetSeeThroughBackgroundEnabled },
		{ "SetSharpenType", &UYvrXRFunctionLibrary::execSetSharpenType },
		{ "SetSpaceWarpEnabled", &UYvrXRFunctionLibrary::execSetSpaceWarpEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrXRFunctionLibrary);
UClass* Z_Construct_UClass_UYvrXRFunctionLibrary_NoRegister()
{
	return UYvrXRFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UYvrXRFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "YvrXRFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/YvrXRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYvrXRFunctionLibrary_GetAvailableDisplayFrequencies, "GetAvailableDisplayFrequencies" }, // 3957219372
		{ &Z_Construct_UFunction_UYvrXRFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters, "GetBaseRotationAndBaseOffsetInMeters" }, // 3702966021
		{ &Z_Construct_UFunction_UYvrXRFunctionLibrary_GetCurrentDisplayFrequency, "GetCurrentDisplayFrequency" }, // 122586199
		{ &Z_Construct_UFunction_UYvrXRFunctionLibrary_GetFixedFoveatedRenderingLevel, "GetFixedFoveatedRenderingLevel" }, // 2109062730
		{ &Z_Construct_UFunction_UYvrXRFunctionLibrary_GetPose, "GetPose" }, // 2032588082
		{ &Z_Construct_UFunction_UYvrXRFunctionLibrary_HasInputFocus, "HasInputFocus" }, // 2218070862
		{ &Z_Construct_UFunction_UYvrXRFunctionLibrary_HasSystemOverlayPresent, "HasSystemOverlayPresent" }, // 1189003034
		{ &Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBackgroundLayerVisible, "SetBackgroundLayerVisible" }, // 4294955577
		{ &Z_Construct_UFunction_UYvrXRFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters, "SetBaseRotationAndBaseOffsetInMeters" }, // 3609582259
		{ &Z_Construct_UFunction_UYvrXRFunctionLibrary_SetColorScaleAndOffset, "SetColorScaleAndOffset" }, // 1865887398
		{ &Z_Construct_UFunction_UYvrXRFunctionLibrary_SetCPUAndGPULevels, "SetCPUAndGPULevels" }, // 2591197406
		{ &Z_Construct_UFunction_UYvrXRFunctionLibrary_SetDisplayFrequency, "SetDisplayFrequency" }, // 1737892425
		{ &Z_Construct_UFunction_UYvrXRFunctionLibrary_SetFixedFoveatedRenderingLevel, "SetFixedFoveatedRenderingLevel" }, // 669232583
		{ &Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSeeThroughBackgroundEnabled, "SetSeeThroughBackgroundEnabled" }, // 1141208913
		{ &Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSharpenType, "SetSharpenType" }, // 712676010
		{ &Z_Construct_UFunction_UYvrXRFunctionLibrary_SetSpaceWarpEnabled, "SetSpaceWarpEnabled" }, // 1343077691
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrXRFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UYvrXRFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRHMD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrXRFunctionLibrary_Statics::ClassParams = {
	&UYvrXRFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrXRFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrXRFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UYvrXRFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrXRFunctionLibrary.OuterSingleton, Z_Construct_UClass_UYvrXRFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrXRFunctionLibrary.OuterSingleton;
}
template<> YVRXRHMD_API UClass* StaticClass<UYvrXRFunctionLibrary>()
{
	return UYvrXRFunctionLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrXRFunctionLibrary);
UYvrXRFunctionLibrary::~UYvrXRFunctionLibrary() {}
// End Class UYvrXRFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Public_YvrXRFunctionLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EYvrFixedFoveatedRenderingLevel_StaticEnum, TEXT("EYvrFixedFoveatedRenderingLevel"), &Z_Registration_Info_UEnum_EYvrFixedFoveatedRenderingLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1513249936U) },
		{ EYvrPerformanceLevel_StaticEnum, TEXT("EYvrPerformanceLevel"), &Z_Registration_Info_UEnum_EYvrPerformanceLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1531993898U) },
		{ EYvrXRHandTrackingSupport_StaticEnum, TEXT("EYvrXRHandTrackingSupport"), &Z_Registration_Info_UEnum_EYvrXRHandTrackingSupport, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 799862315U) },
		{ EYvrLayerSharpenType_StaticEnum, TEXT("EYvrLayerSharpenType"), &Z_Registration_Info_UEnum_EYvrLayerSharpenType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2519015889U) },
		{ EYvrDynamicResolutionSetting_StaticEnum, TEXT("EYvrDynamicResolutionSetting"), &Z_Registration_Info_UEnum_EYvrDynamicResolutionSetting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2022087948U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYvrXRFunctionLibrary, UYvrXRFunctionLibrary::StaticClass, TEXT("UYvrXRFunctionLibrary"), &Z_Registration_Info_UClass_UYvrXRFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrXRFunctionLibrary), 1148007047U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Public_YvrXRFunctionLibrary_h_234740731(TEXT("/Script/YvrXRHMD"),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Public_YvrXRFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Public_YvrXRFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Public_YvrXRFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRHMD_Public_YvrXRFunctionLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
