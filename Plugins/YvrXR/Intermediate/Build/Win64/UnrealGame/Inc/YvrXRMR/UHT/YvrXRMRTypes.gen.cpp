// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YvrXRMR/Public/YvrXRMRTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYvrXRMRTypes() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_YvrXRMR();
YVRXRMR_API UEnum* Z_Construct_UEnum_YvrXRMR_EYvrAnchorSceneLabel();
YVRXRMR_API UEnum* Z_Construct_UEnum_YvrXRMR_EYvrLoadFilterType();
YVRXRMR_API UEnum* Z_Construct_UEnum_YvrXRMR_EYvrResult();
YVRXRMR_API UEnum* Z_Construct_UEnum_YvrXRMR_EYvrSaveLocation();
YVRXRMR_API UEnum* Z_Construct_UEnum_YvrXRMR_EYvrSpatialSceneDataTypeFlag();
YVRXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FYvrAnchor();
YVRXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FYvrAnchorLoadInfo();
YVRXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FYvrAnchorLoadResult();
YVRXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FYvrAnchorUUID();
// End Cross Module References

// Begin Enum EYvrResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYvrResult;
static UEnum* EYvrResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYvrResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYvrResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrXRMR_EYvrResult, (UObject*)Z_Construct_UPackage__Script_YvrXRMR(), TEXT("EYvrResult"));
	}
	return Z_Registration_Info_UEnum_EYvrResult.OuterSingleton;
}
template<> YVRXRMR_API UEnum* StaticEnum<EYvrResult>()
{
	return EYvrResult_StaticEnum();
}
struct Z_Construct_UEnum_YvrXRMR_EYvrResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Error_APIVersionUnsupported.Name", "Error_APIVersionUnsupported" },
		{ "Error_ComponentAdded.Name", "Error_ComponentAdded" },
		{ "Error_ComponentConflict.Name", "Error_ComponentConflict" },
		{ "Error_ComponentNotAdded.Name", "Error_ComponentNotAdded" },
		{ "Error_ComponentNotSupported.Comment", "// spatial entity\n" },
		{ "Error_ComponentNotSupported.Name", "Error_ComponentNotSupported" },
		{ "Error_ComponentNotSupported.ToolTip", "spatial entity" },
		{ "Error_FeatureUnsupported.Name", "Error_FeatureUnsupported" },
		{ "Error_FunctionUnsupported.Name", "Error_FunctionUnsupported" },
		{ "Error_HandleInvalid.Name", "Error_HandleInvalid" },
		{ "Error_InitializationFailed.Name", "Error_InitializationFailed" },
		{ "Error_LimitReached.Name", "Error_LimitReached" },
		{ "Error_OutOfMemory.Name", "Error_OutOfMemory" },
		{ "Error_RuntimeFailure.Name", "Error_RuntimeFailure" },
		{ "Error_SizeInsufficient.Name", "Error_SizeInsufficient" },
		{ "Error_Unknow.Name", "Error_Unknow" },
		{ "Error_ValidationFailure.Name", "Error_ValidationFailure" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
		{ "Success.Name", "Success" },
		{ "TimeoutExpired.Name", "TimeoutExpired" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Success", (int64)Success },
		{ "TimeoutExpired", (int64)TimeoutExpired },
		{ "Error_ValidationFailure", (int64)Error_ValidationFailure },
		{ "Error_RuntimeFailure", (int64)Error_RuntimeFailure },
		{ "Error_OutOfMemory", (int64)Error_OutOfMemory },
		{ "Error_APIVersionUnsupported", (int64)Error_APIVersionUnsupported },
		{ "Error_InitializationFailed", (int64)Error_InitializationFailed },
		{ "Error_FunctionUnsupported", (int64)Error_FunctionUnsupported },
		{ "Error_FeatureUnsupported", (int64)Error_FeatureUnsupported },
		{ "Error_LimitReached", (int64)Error_LimitReached },
		{ "Error_SizeInsufficient", (int64)Error_SizeInsufficient },
		{ "Error_HandleInvalid", (int64)Error_HandleInvalid },
		{ "Error_ComponentNotSupported", (int64)Error_ComponentNotSupported },
		{ "Error_ComponentConflict", (int64)Error_ComponentConflict },
		{ "Error_ComponentNotAdded", (int64)Error_ComponentNotAdded },
		{ "Error_ComponentAdded", (int64)Error_ComponentAdded },
		{ "Error_Unknow", (int64)Error_Unknow },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrXRMR_EYvrResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrXRMR,
	nullptr,
	"EYvrResult",
	"EYvrResult",
	Z_Construct_UEnum_YvrXRMR_EYvrResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRMR_EYvrResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRMR_EYvrResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrXRMR_EYvrResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrXRMR_EYvrResult()
{
	if (!Z_Registration_Info_UEnum_EYvrResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYvrResult.InnerSingleton, Z_Construct_UEnum_YvrXRMR_EYvrResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYvrResult.InnerSingleton;
}
// End Enum EYvrResult

// Begin Enum EYvrSpatialSceneDataTypeFlag
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYvrSpatialSceneDataTypeFlag;
static UEnum* EYvrSpatialSceneDataTypeFlag_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYvrSpatialSceneDataTypeFlag.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYvrSpatialSceneDataTypeFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrXRMR_EYvrSpatialSceneDataTypeFlag, (UObject*)Z_Construct_UPackage__Script_YvrXRMR(), TEXT("EYvrSpatialSceneDataTypeFlag"));
	}
	return Z_Registration_Info_UEnum_EYvrSpatialSceneDataTypeFlag.OuterSingleton;
}
template<> YVRXRMR_API UEnum* StaticEnum<EYvrSpatialSceneDataTypeFlag>()
{
	return EYvrSpatialSceneDataTypeFlag_StaticEnum();
}
struct Z_Construct_UEnum_YvrXRMR_EYvrSpatialSceneDataTypeFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
		{ "SpatialSceneDataTypeFlag_Bounded_2D.Name", "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Bounded_2D" },
		{ "SpatialSceneDataTypeFlag_Bounded_3D.Name", "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Bounded_3D" },
		{ "SpatialSceneDataTypeFlag_Locatable.Name", "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Locatable" },
		{ "SpatialSceneDataTypeFlag_Max.Comment", "//SpatialSceneDataTypeFlag_Triangle_Mesh = 1000269000,\n" },
		{ "SpatialSceneDataTypeFlag_Max.Name", "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Max" },
		{ "SpatialSceneDataTypeFlag_Max.ToolTip", "SpatialSceneDataTypeFlag_Triangle_Mesh = 1000269000," },
		{ "SpatialSceneDataTypeFlag_Room_Layout.Name", "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Room_Layout" },
		{ "SpatialSceneDataTypeFlag_Semantic_Labels.Name", "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Semantic_Labels" },
		{ "SpatialSceneDataTypeFlag_Sharable.Name", "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Sharable" },
		{ "SpatialSceneDataTypeFlag_Space_Container.Name", "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Space_Container" },
		{ "SpatialSceneDataTypeFlag_Storable.Name", "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Storable" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Locatable", (int64)EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Locatable },
		{ "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Storable", (int64)EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Storable },
		{ "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Sharable", (int64)EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Sharable },
		{ "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Bounded_2D", (int64)EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Bounded_2D },
		{ "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Bounded_3D", (int64)EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Bounded_3D },
		{ "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Semantic_Labels", (int64)EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Semantic_Labels },
		{ "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Room_Layout", (int64)EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Room_Layout },
		{ "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Space_Container", (int64)EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Space_Container },
		{ "EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Max", (int64)EYvrSpatialSceneDataTypeFlag::SpatialSceneDataTypeFlag_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrXRMR_EYvrSpatialSceneDataTypeFlag_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrXRMR,
	nullptr,
	"EYvrSpatialSceneDataTypeFlag",
	"EYvrSpatialSceneDataTypeFlag",
	Z_Construct_UEnum_YvrXRMR_EYvrSpatialSceneDataTypeFlag_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRMR_EYvrSpatialSceneDataTypeFlag_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRMR_EYvrSpatialSceneDataTypeFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrXRMR_EYvrSpatialSceneDataTypeFlag_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrXRMR_EYvrSpatialSceneDataTypeFlag()
{
	if (!Z_Registration_Info_UEnum_EYvrSpatialSceneDataTypeFlag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYvrSpatialSceneDataTypeFlag.InnerSingleton, Z_Construct_UEnum_YvrXRMR_EYvrSpatialSceneDataTypeFlag_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYvrSpatialSceneDataTypeFlag.InnerSingleton;
}
// End Enum EYvrSpatialSceneDataTypeFlag

// Begin Enum EYvrAnchorSceneLabel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYvrAnchorSceneLabel;
static UEnum* EYvrAnchorSceneLabel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYvrAnchorSceneLabel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYvrAnchorSceneLabel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrXRMR_EYvrAnchorSceneLabel, (UObject*)Z_Construct_UPackage__Script_YvrXRMR(), TEXT("EYvrAnchorSceneLabel"));
	}
	return Z_Registration_Info_UEnum_EYvrAnchorSceneLabel.OuterSingleton;
}
template<> YVRXRMR_API UEnum* StaticEnum<EYvrAnchorSceneLabel>()
{
	return EYvrAnchorSceneLabel_StaticEnum();
}
struct Z_Construct_UEnum_YvrXRMR_EYvrAnchorSceneLabel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
		{ "SceneLabel_Ceiling.Name", "EYvrAnchorSceneLabel::SceneLabel_Ceiling" },
		{ "SceneLabel_Door.Name", "EYvrAnchorSceneLabel::SceneLabel_Door" },
		{ "SceneLabel_Floor.Name", "EYvrAnchorSceneLabel::SceneLabel_Floor" },
		{ "SceneLabel_Opening.Name", "EYvrAnchorSceneLabel::SceneLabel_Opening" },
		{ "SceneLabel_Sofa.Name", "EYvrAnchorSceneLabel::SceneLabel_Sofa" },
		{ "SceneLabel_Table.Name", "EYvrAnchorSceneLabel::SceneLabel_Table" },
		{ "SceneLabel_Unknown.Name", "EYvrAnchorSceneLabel::SceneLabel_Unknown" },
		{ "SceneLabel_Wall.Name", "EYvrAnchorSceneLabel::SceneLabel_Wall" },
		{ "SceneLabel_Window.Name", "EYvrAnchorSceneLabel::SceneLabel_Window" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYvrAnchorSceneLabel::SceneLabel_Unknown", (int64)EYvrAnchorSceneLabel::SceneLabel_Unknown },
		{ "EYvrAnchorSceneLabel::SceneLabel_Floor", (int64)EYvrAnchorSceneLabel::SceneLabel_Floor },
		{ "EYvrAnchorSceneLabel::SceneLabel_Ceiling", (int64)EYvrAnchorSceneLabel::SceneLabel_Ceiling },
		{ "EYvrAnchorSceneLabel::SceneLabel_Wall", (int64)EYvrAnchorSceneLabel::SceneLabel_Wall },
		{ "EYvrAnchorSceneLabel::SceneLabel_Door", (int64)EYvrAnchorSceneLabel::SceneLabel_Door },
		{ "EYvrAnchorSceneLabel::SceneLabel_Window", (int64)EYvrAnchorSceneLabel::SceneLabel_Window },
		{ "EYvrAnchorSceneLabel::SceneLabel_Opening", (int64)EYvrAnchorSceneLabel::SceneLabel_Opening },
		{ "EYvrAnchorSceneLabel::SceneLabel_Table", (int64)EYvrAnchorSceneLabel::SceneLabel_Table },
		{ "EYvrAnchorSceneLabel::SceneLabel_Sofa", (int64)EYvrAnchorSceneLabel::SceneLabel_Sofa },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrXRMR_EYvrAnchorSceneLabel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrXRMR,
	nullptr,
	"EYvrAnchorSceneLabel",
	"EYvrAnchorSceneLabel",
	Z_Construct_UEnum_YvrXRMR_EYvrAnchorSceneLabel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRMR_EYvrAnchorSceneLabel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRMR_EYvrAnchorSceneLabel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrXRMR_EYvrAnchorSceneLabel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrXRMR_EYvrAnchorSceneLabel()
{
	if (!Z_Registration_Info_UEnum_EYvrAnchorSceneLabel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYvrAnchorSceneLabel.InnerSingleton, Z_Construct_UEnum_YvrXRMR_EYvrAnchorSceneLabel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYvrAnchorSceneLabel.InnerSingleton;
}
// End Enum EYvrAnchorSceneLabel

// Begin Enum EYvrSaveLocation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYvrSaveLocation;
static UEnum* EYvrSaveLocation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYvrSaveLocation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYvrSaveLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrXRMR_EYvrSaveLocation, (UObject*)Z_Construct_UPackage__Script_YvrXRMR(), TEXT("EYvrSaveLocation"));
	}
	return Z_Registration_Info_UEnum_EYvrSaveLocation.OuterSingleton;
}
template<> YVRXRMR_API UEnum* StaticEnum<EYvrSaveLocation>()
{
	return EYvrSaveLocation_StaticEnum();
}
struct Z_Construct_UEnum_YvrXRMR_EYvrSaveLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
		{ "SaveLocation_Local.Name", "EYvrSaveLocation::SaveLocation_Local" },
		{ "SaveLocation_None.Hidden", "" },
		{ "SaveLocation_None.Name", "EYvrSaveLocation::SaveLocation_None" },
		{ "SaveLocation_Remote.Name", "EYvrSaveLocation::SaveLocation_Remote" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYvrSaveLocation::SaveLocation_None", (int64)EYvrSaveLocation::SaveLocation_None },
		{ "EYvrSaveLocation::SaveLocation_Local", (int64)EYvrSaveLocation::SaveLocation_Local },
		{ "EYvrSaveLocation::SaveLocation_Remote", (int64)EYvrSaveLocation::SaveLocation_Remote },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrXRMR_EYvrSaveLocation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrXRMR,
	nullptr,
	"EYvrSaveLocation",
	"EYvrSaveLocation",
	Z_Construct_UEnum_YvrXRMR_EYvrSaveLocation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRMR_EYvrSaveLocation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRMR_EYvrSaveLocation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrXRMR_EYvrSaveLocation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrXRMR_EYvrSaveLocation()
{
	if (!Z_Registration_Info_UEnum_EYvrSaveLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYvrSaveLocation.InnerSingleton, Z_Construct_UEnum_YvrXRMR_EYvrSaveLocation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYvrSaveLocation.InnerSingleton;
}
// End Enum EYvrSaveLocation

// Begin Enum EYvrLoadFilterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYvrLoadFilterType;
static UEnum* EYvrLoadFilterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYvrLoadFilterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYvrLoadFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrXRMR_EYvrLoadFilterType, (UObject*)Z_Construct_UPackage__Script_YvrXRMR(), TEXT("EYvrLoadFilterType"));
	}
	return Z_Registration_Info_UEnum_EYvrLoadFilterType.OuterSingleton;
}
template<> YVRXRMR_API UEnum* StaticEnum<EYvrLoadFilterType>()
{
	return EYvrLoadFilterType_StaticEnum();
}
struct Z_Construct_UEnum_YvrXRMR_EYvrLoadFilterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LoadFilterType_None.Name", "EYvrLoadFilterType::LoadFilterType_None" },
		{ "LoadFilterType_SpatialSceneData.Name", "EYvrLoadFilterType::LoadFilterType_SpatialSceneData" },
		{ "LoadFilterType_UUID.Name", "EYvrLoadFilterType::LoadFilterType_UUID" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYvrLoadFilterType::LoadFilterType_None", (int64)EYvrLoadFilterType::LoadFilterType_None },
		{ "EYvrLoadFilterType::LoadFilterType_UUID", (int64)EYvrLoadFilterType::LoadFilterType_UUID },
		{ "EYvrLoadFilterType::LoadFilterType_SpatialSceneData", (int64)EYvrLoadFilterType::LoadFilterType_SpatialSceneData },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrXRMR_EYvrLoadFilterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrXRMR,
	nullptr,
	"EYvrLoadFilterType",
	"EYvrLoadFilterType",
	Z_Construct_UEnum_YvrXRMR_EYvrLoadFilterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRMR_EYvrLoadFilterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRMR_EYvrLoadFilterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrXRMR_EYvrLoadFilterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrXRMR_EYvrLoadFilterType()
{
	if (!Z_Registration_Info_UEnum_EYvrLoadFilterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYvrLoadFilterType.InnerSingleton, Z_Construct_UEnum_YvrXRMR_EYvrLoadFilterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYvrLoadFilterType.InnerSingleton;
}
// End Enum EYvrLoadFilterType

// Begin ScriptStruct FYvrAnchor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_YvrAnchor;
class UScriptStruct* FYvrAnchor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_YvrAnchor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_YvrAnchor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FYvrAnchor, (UObject*)Z_Construct_UPackage__Script_YvrXRMR(), TEXT("YvrAnchor"));
	}
	return Z_Registration_Info_UScriptStruct_YvrAnchor.OuterSingleton;
}
template<> YVRXRMR_API UScriptStruct* StaticStruct<FYvrAnchor>()
{
	return FYvrAnchor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FYvrAnchor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYvrAnchor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYvrAnchor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRMR,
	nullptr,
	&NewStructOps,
	"YvrAnchor",
	nullptr,
	0,
	sizeof(FYvrAnchor),
	alignof(FYvrAnchor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYvrAnchor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FYvrAnchor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FYvrAnchor()
{
	if (!Z_Registration_Info_UScriptStruct_YvrAnchor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_YvrAnchor.InnerSingleton, Z_Construct_UScriptStruct_FYvrAnchor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_YvrAnchor.InnerSingleton;
}
// End ScriptStruct FYvrAnchor

// Begin ScriptStruct FYvrAnchorUUID
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_YvrAnchorUUID;
class UScriptStruct* FYvrAnchorUUID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_YvrAnchorUUID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_YvrAnchorUUID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FYvrAnchorUUID, (UObject*)Z_Construct_UPackage__Script_YvrXRMR(), TEXT("YvrAnchorUUID"));
	}
	return Z_Registration_Info_UScriptStruct_YvrAnchorUUID.OuterSingleton;
}
template<> YVRXRMR_API UScriptStruct* StaticStruct<FYvrAnchorUUID>()
{
	return FYvrAnchorUUID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FYvrAnchorUUID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYvrAnchorUUID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYvrAnchorUUID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRMR,
	nullptr,
	&NewStructOps,
	"YvrAnchorUUID",
	nullptr,
	0,
	sizeof(FYvrAnchorUUID),
	alignof(FYvrAnchorUUID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYvrAnchorUUID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FYvrAnchorUUID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FYvrAnchorUUID()
{
	if (!Z_Registration_Info_UScriptStruct_YvrAnchorUUID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_YvrAnchorUUID.InnerSingleton, Z_Construct_UScriptStruct_FYvrAnchorUUID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_YvrAnchorUUID.InnerSingleton;
}
// End ScriptStruct FYvrAnchorUUID

// Begin ScriptStruct FYvrAnchorLoadInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_YvrAnchorLoadInfo;
class UScriptStruct* FYvrAnchorLoadInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_YvrAnchorLoadInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_YvrAnchorLoadInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FYvrAnchorLoadInfo, (UObject*)Z_Construct_UPackage__Script_YvrXRMR(), TEXT("YvrAnchorLoadInfo"));
	}
	return Z_Registration_Info_UScriptStruct_YvrAnchorLoadInfo.OuterSingleton;
}
template<> YVRXRMR_API UScriptStruct* StaticStruct<FYvrAnchorLoadInfo>()
{
	return FYvrAnchorLoadInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadMaxCount_MetaData[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveLocation_MetaData[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeUUIDFilter_MetaData[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeUUIDFilter_MetaData[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeSpatialSceneDataTypeFilter_MetaData[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeSpatialSceneDataTypeFilter_MetaData[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoadMaxCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SaveLocation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SaveLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncludeUUIDFilter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludeUUIDFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludeUUIDFilter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeUUIDFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IncludeSpatialSceneDataTypeFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IncludeSpatialSceneDataTypeFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExcludeSpatialSceneDataTypeFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExcludeSpatialSceneDataTypeFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYvrAnchorLoadInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_LoadMaxCount = { "LoadMaxCount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrAnchorLoadInfo, LoadMaxCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadMaxCount_MetaData), NewProp_LoadMaxCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrAnchorLoadInfo, Timeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timeout_MetaData), NewProp_Timeout_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_SaveLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_SaveLocation = { "SaveLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrAnchorLoadInfo, SaveLocation), Z_Construct_UEnum_YvrXRMR_EYvrSaveLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveLocation_MetaData), NewProp_SaveLocation_MetaData) }; // 2045020738
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter_Inner = { "IncludeUUIDFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FYvrAnchorUUID, METADATA_PARAMS(0, nullptr) }; // 277093096
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter = { "IncludeUUIDFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrAnchorLoadInfo, IncludeUUIDFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeUUIDFilter_MetaData), NewProp_IncludeUUIDFilter_MetaData) }; // 277093096
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter_Inner = { "ExcludeUUIDFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FYvrAnchorUUID, METADATA_PARAMS(0, nullptr) }; // 277093096
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter = { "ExcludeUUIDFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrAnchorLoadInfo, ExcludeUUIDFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludeUUIDFilter_MetaData), NewProp_ExcludeUUIDFilter_MetaData) }; // 277093096
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter = { "IncludeSpatialSceneDataTypeFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrAnchorLoadInfo, IncludeSpatialSceneDataTypeFilter), Z_Construct_UEnum_YvrXRMR_EYvrSpatialSceneDataTypeFlag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeSpatialSceneDataTypeFilter_MetaData), NewProp_IncludeSpatialSceneDataTypeFilter_MetaData) }; // 4294879447
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter = { "ExcludeSpatialSceneDataTypeFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrAnchorLoadInfo, ExcludeSpatialSceneDataTypeFilter), Z_Construct_UEnum_YvrXRMR_EYvrSpatialSceneDataTypeFlag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludeSpatialSceneDataTypeFilter_MetaData), NewProp_ExcludeSpatialSceneDataTypeFilter_MetaData) }; // 4294879447
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_LoadMaxCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_SaveLocation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_SaveLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRMR,
	nullptr,
	&NewStructOps,
	"YvrAnchorLoadInfo",
	Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::PropPointers),
	sizeof(FYvrAnchorLoadInfo),
	alignof(FYvrAnchorLoadInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FYvrAnchorLoadInfo()
{
	if (!Z_Registration_Info_UScriptStruct_YvrAnchorLoadInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_YvrAnchorLoadInfo.InnerSingleton, Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_YvrAnchorLoadInfo.InnerSingleton;
}
// End ScriptStruct FYvrAnchorLoadInfo

// Begin ScriptStruct FYvrAnchorLoadResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_YvrAnchorLoadResult;
class UScriptStruct* FYvrAnchorLoadResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_YvrAnchorLoadResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_YvrAnchorLoadResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FYvrAnchorLoadResult, (UObject*)Z_Construct_UPackage__Script_YvrXRMR(), TEXT("YvrAnchorLoadResult"));
	}
	return Z_Registration_Info_UScriptStruct_YvrAnchorLoadResult.OuterSingleton;
}
template<> YVRXRMR_API UScriptStruct* StaticStruct<FYvrAnchorLoadResult>()
{
	return FYvrAnchorLoadResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FYvrAnchorLoadResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorHandle_MetaData[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorUUID_MetaData[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorUUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYvrAnchorLoadResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYvrAnchorLoadResult_Statics::NewProp_AnchorHandle = { "AnchorHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrAnchorLoadResult, AnchorHandle), Z_Construct_UScriptStruct_FYvrAnchor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorHandle_MetaData), NewProp_AnchorHandle_MetaData) }; // 2475124470
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYvrAnchorLoadResult_Statics::NewProp_AnchorUUID = { "AnchorUUID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrAnchorLoadResult, AnchorUUID), Z_Construct_UScriptStruct_FYvrAnchorUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorUUID_MetaData), NewProp_AnchorUUID_MetaData) }; // 277093096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYvrAnchorLoadResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrAnchorLoadResult_Statics::NewProp_AnchorHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrAnchorLoadResult_Statics::NewProp_AnchorUUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYvrAnchorLoadResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYvrAnchorLoadResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRMR,
	nullptr,
	&NewStructOps,
	"YvrAnchorLoadResult",
	Z_Construct_UScriptStruct_FYvrAnchorLoadResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYvrAnchorLoadResult_Statics::PropPointers),
	sizeof(FYvrAnchorLoadResult),
	alignof(FYvrAnchorLoadResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYvrAnchorLoadResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FYvrAnchorLoadResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FYvrAnchorLoadResult()
{
	if (!Z_Registration_Info_UScriptStruct_YvrAnchorLoadResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_YvrAnchorLoadResult.InnerSingleton, Z_Construct_UScriptStruct_FYvrAnchorLoadResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_YvrAnchorLoadResult.InnerSingleton;
}
// End ScriptStruct FYvrAnchorLoadResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EYvrResult_StaticEnum, TEXT("EYvrResult"), &Z_Registration_Info_UEnum_EYvrResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2725477238U) },
		{ EYvrSpatialSceneDataTypeFlag_StaticEnum, TEXT("EYvrSpatialSceneDataTypeFlag"), &Z_Registration_Info_UEnum_EYvrSpatialSceneDataTypeFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4294879447U) },
		{ EYvrAnchorSceneLabel_StaticEnum, TEXT("EYvrAnchorSceneLabel"), &Z_Registration_Info_UEnum_EYvrAnchorSceneLabel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3778887931U) },
		{ EYvrSaveLocation_StaticEnum, TEXT("EYvrSaveLocation"), &Z_Registration_Info_UEnum_EYvrSaveLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2045020738U) },
		{ EYvrLoadFilterType_StaticEnum, TEXT("EYvrLoadFilterType"), &Z_Registration_Info_UEnum_EYvrLoadFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2083245094U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FYvrAnchor::StaticStruct, Z_Construct_UScriptStruct_FYvrAnchor_Statics::NewStructOps, TEXT("YvrAnchor"), &Z_Registration_Info_UScriptStruct_YvrAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FYvrAnchor), 2475124470U) },
		{ FYvrAnchorUUID::StaticStruct, Z_Construct_UScriptStruct_FYvrAnchorUUID_Statics::NewStructOps, TEXT("YvrAnchorUUID"), &Z_Registration_Info_UScriptStruct_YvrAnchorUUID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FYvrAnchorUUID), 277093096U) },
		{ FYvrAnchorLoadInfo::StaticStruct, Z_Construct_UScriptStruct_FYvrAnchorLoadInfo_Statics::NewStructOps, TEXT("YvrAnchorLoadInfo"), &Z_Registration_Info_UScriptStruct_YvrAnchorLoadInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FYvrAnchorLoadInfo), 2679819613U) },
		{ FYvrAnchorLoadResult::StaticStruct, Z_Construct_UScriptStruct_FYvrAnchorLoadResult_Statics::NewStructOps, TEXT("YvrAnchorLoadResult"), &Z_Registration_Info_UScriptStruct_YvrAnchorLoadResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FYvrAnchorLoadResult), 2704793911U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRTypes_h_2869845431(TEXT("/Script/YvrXRMR"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
