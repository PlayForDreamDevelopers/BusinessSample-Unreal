// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/YvrBusinessBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYvrBusinessBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_YvrBusiness();
YVRBUSINESS_API UClass* Z_Construct_UClass_UYvrBusinessBPLibrary();
YVRBUSINESS_API UClass* Z_Construct_UClass_UYvrBusinessBPLibrary_NoRegister();
YVRBUSINESS_API UEnum* Z_Construct_UEnum_YvrBusiness_ECameraType();
YVRBUSINESS_API UEnum* Z_Construct_UEnum_YvrBusiness_ETrackingCameraFormat();
YVRBUSINESS_API UEnum* Z_Construct_UEnum_YvrBusiness_EVSTCameraFormat();
YVRBUSINESS_API UEnum* Z_Construct_UEnum_YvrBusiness_EVSTCameraFrequency();
YVRBUSINESS_API UEnum* Z_Construct_UEnum_YvrBusiness_EVSTCameraID();
YVRBUSINESS_API UEnum* Z_Construct_UEnum_YvrBusiness_EVSTCameraResolution();
YVRBUSINESS_API UEnum* Z_Construct_UEnum_YvrBusiness_EVSTCameraSource();
YVRBUSINESS_API UFunction* Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature();
YVRBUSINESS_API UScriptStruct* Z_Construct_UScriptStruct_FVSTCameraFrame();
YVRBUSINESS_API UScriptStruct* Z_Construct_UScriptStruct_FVSTCameraFrameItem();
YVRBUSINESS_API UScriptStruct* Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic();
YVRBUSINESS_API UScriptStruct* Z_Construct_UScriptStruct_FYvrPose();
// End Cross Module References

// Begin ScriptStruct FVSTCameraFrameItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VSTCameraFrameItem;
class UScriptStruct* FVSTCameraFrameItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VSTCameraFrameItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VSTCameraFrameItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVSTCameraFrameItem, (UObject*)Z_Construct_UPackage__Script_YvrBusiness(), TEXT("VSTCameraFrameItem"));
	}
	return Z_Registration_Info_UScriptStruct_VSTCameraFrameItem.OuterSingleton;
}
template<> YVRBUSINESS_API UScriptStruct* StaticStruct<FVSTCameraFrameItem>()
{
	return FVSTCameraFrameItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameNumber_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExposureDuration_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoeTimestamp_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoeTimestampQ_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSize_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftEyeData_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightEyeData_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Format;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExposureDuration;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SoeTimestamp;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SoeTimestampQ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Gain;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeftEyeData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LeftEyeData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RightEyeData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RightEyeData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVSTCameraFrameItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraFrameItem, FrameNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameNumber_MetaData), NewProp_FrameNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraFrameItem, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraFrameItem, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraFrameItem, Format), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_ExposureDuration = { "ExposureDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraFrameItem, ExposureDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExposureDuration_MetaData), NewProp_ExposureDuration_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_SoeTimestamp = { "SoeTimestamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraFrameItem, SoeTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoeTimestamp_MetaData), NewProp_SoeTimestamp_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_SoeTimestampQ = { "SoeTimestampQ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraFrameItem, SoeTimestampQ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoeTimestampQ_MetaData), NewProp_SoeTimestampQ_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraFrameItem, Gain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gain_MetaData), NewProp_Gain_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_DataSize = { "DataSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraFrameItem, DataSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSize_MetaData), NewProp_DataSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_LeftEyeData_Inner = { "LeftEyeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_LeftEyeData = { "LeftEyeData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraFrameItem, LeftEyeData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftEyeData_MetaData), NewProp_LeftEyeData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_RightEyeData_Inner = { "RightEyeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_RightEyeData = { "RightEyeData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraFrameItem, RightEyeData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightEyeData_MetaData), NewProp_RightEyeData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_FrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_ExposureDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_SoeTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_SoeTimestampQ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_Gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_DataSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_LeftEyeData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_LeftEyeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_RightEyeData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewProp_RightEyeData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_YvrBusiness,
	nullptr,
	&NewStructOps,
	"VSTCameraFrameItem",
	Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::PropPointers),
	sizeof(FVSTCameraFrameItem),
	alignof(FVSTCameraFrameItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVSTCameraFrameItem()
{
	if (!Z_Registration_Info_UScriptStruct_VSTCameraFrameItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VSTCameraFrameItem.InnerSingleton, Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VSTCameraFrameItem.InnerSingleton;
}
// End ScriptStruct FVSTCameraFrameItem

// Begin ScriptStruct FYvrPose
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_YvrPose;
class UScriptStruct* FYvrPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_YvrPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_YvrPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FYvrPose, (UObject*)Z_Construct_UPackage__Script_YvrBusiness(), TEXT("YvrPose"));
	}
	return Z_Registration_Info_UScriptStruct_YvrPose.OuterSingleton;
}
template<> YVRBUSINESS_API UScriptStruct* StaticStruct<FYvrPose>()
{
	return FYvrPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FYvrPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarningFlag_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearAcceleration_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularAcceleration_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Confidence;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WarningFlag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularAcceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYvrPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrPose, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timestamp_MetaData), NewProp_Timestamp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrPose, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrPose, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrPose, Confidence), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Confidence_MetaData), NewProp_Confidence_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_WarningFlag = { "WarningFlag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrPose, WarningFlag), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarningFlag_MetaData), NewProp_WarningFlag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrPose, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocity_MetaData), NewProp_LinearVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_LinearAcceleration = { "LinearAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrPose, LinearAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearAcceleration_MetaData), NewProp_LinearAcceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrPose, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_AngularAcceleration = { "AngularAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYvrPose, AngularAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularAcceleration_MetaData), NewProp_AngularAcceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYvrPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_Timestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_Confidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_WarningFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_LinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_LinearAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYvrPose_Statics::NewProp_AngularAcceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYvrPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYvrPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_YvrBusiness,
	nullptr,
	&NewStructOps,
	"YvrPose",
	Z_Construct_UScriptStruct_FYvrPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYvrPose_Statics::PropPointers),
	sizeof(FYvrPose),
	alignof(FYvrPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYvrPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FYvrPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FYvrPose()
{
	if (!Z_Registration_Info_UScriptStruct_YvrPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_YvrPose.InnerSingleton, Z_Construct_UScriptStruct_FYvrPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_YvrPose.InnerSingleton;
}
// End ScriptStruct FYvrPose

// Begin ScriptStruct FVSTCameraFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VSTCameraFrame;
class UScriptStruct* FVSTCameraFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VSTCameraFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VSTCameraFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVSTCameraFrame, (UObject*)Z_Construct_UPackage__Script_YvrBusiness(), TEXT("VSTCameraFrame"));
	}
	return Z_Registration_Info_UScriptStruct_VSTCameraFrame.OuterSingleton;
}
template<> YVRBUSINESS_API UScriptStruct* StaticStruct<FVSTCameraFrame>()
{
	return FVSTCameraFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVSTCameraFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameItem_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SixDofPose_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SixDofPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVSTCameraFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVSTCameraFrame_Statics::NewProp_FrameItem = { "FrameItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraFrame, FrameItem), Z_Construct_UScriptStruct_FVSTCameraFrameItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameItem_MetaData), NewProp_FrameItem_MetaData) }; // 1914381463
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVSTCameraFrame_Statics::NewProp_SixDofPose = { "SixDofPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraFrame, SixDofPose), Z_Construct_UScriptStruct_FYvrPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SixDofPose_MetaData), NewProp_SixDofPose_MetaData) }; // 3223577043
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVSTCameraFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraFrame_Statics::NewProp_FrameItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraFrame_Statics::NewProp_SixDofPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVSTCameraFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVSTCameraFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_YvrBusiness,
	nullptr,
	&NewStructOps,
	"VSTCameraFrame",
	Z_Construct_UScriptStruct_FVSTCameraFrame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVSTCameraFrame_Statics::PropPointers),
	sizeof(FVSTCameraFrame),
	alignof(FVSTCameraFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVSTCameraFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVSTCameraFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVSTCameraFrame()
{
	if (!Z_Registration_Info_UScriptStruct_VSTCameraFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VSTCameraFrame.InnerSingleton, Z_Construct_UScriptStruct_FVSTCameraFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VSTCameraFrame.InnerSingleton;
}
// End ScriptStruct FVSTCameraFrame

// Begin Enum EVSTCameraResolution
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVSTCameraResolution;
static UEnum* EVSTCameraResolution_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVSTCameraResolution.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVSTCameraResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrBusiness_EVSTCameraResolution, (UObject*)Z_Construct_UPackage__Script_YvrBusiness(), TEXT("EVSTCameraResolution"));
	}
	return Z_Registration_Info_UEnum_EVSTCameraResolution.OuterSingleton;
}
template<> YVRBUSINESS_API UEnum* StaticEnum<EVSTCameraResolution>()
{
	return EVSTCameraResolution_StaticEnum();
}
struct Z_Construct_UEnum_YvrBusiness_EVSTCameraResolution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
		{ "RESOLUTION_1320_1232.Name", "EVSTCameraResolution::RESOLUTION_1320_1232" },
		{ "RESOLUTION_2640_2464.Name", "EVSTCameraResolution::RESOLUTION_2640_2464" },
		{ "RESOLUTION_660_616.Name", "EVSTCameraResolution::RESOLUTION_660_616" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVSTCameraResolution::RESOLUTION_660_616", (int64)EVSTCameraResolution::RESOLUTION_660_616 },
		{ "EVSTCameraResolution::RESOLUTION_1320_1232", (int64)EVSTCameraResolution::RESOLUTION_1320_1232 },
		{ "EVSTCameraResolution::RESOLUTION_2640_2464", (int64)EVSTCameraResolution::RESOLUTION_2640_2464 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrBusiness_EVSTCameraResolution_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrBusiness,
	nullptr,
	"EVSTCameraResolution",
	"EVSTCameraResolution",
	Z_Construct_UEnum_YvrBusiness_EVSTCameraResolution_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrBusiness_EVSTCameraResolution_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrBusiness_EVSTCameraResolution_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrBusiness_EVSTCameraResolution_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrBusiness_EVSTCameraResolution()
{
	if (!Z_Registration_Info_UEnum_EVSTCameraResolution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVSTCameraResolution.InnerSingleton, Z_Construct_UEnum_YvrBusiness_EVSTCameraResolution_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVSTCameraResolution.InnerSingleton;
}
// End Enum EVSTCameraResolution

// Begin Enum EVSTCameraFrequency
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVSTCameraFrequency;
static UEnum* EVSTCameraFrequency_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVSTCameraFrequency.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVSTCameraFrequency.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrBusiness_EVSTCameraFrequency, (UObject*)Z_Construct_UPackage__Script_YvrBusiness(), TEXT("EVSTCameraFrequency"));
	}
	return Z_Registration_Info_UEnum_EVSTCameraFrequency.OuterSingleton;
}
template<> YVRBUSINESS_API UEnum* StaticEnum<EVSTCameraFrequency>()
{
	return EVSTCameraFrequency_StaticEnum();
}
struct Z_Construct_UEnum_YvrBusiness_EVSTCameraFrequency_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FREQUENCY_10_HZ.Name", "EVSTCameraFrequency::FREQUENCY_10_HZ" },
		{ "FREQUENCY_24_HZ.Name", "EVSTCameraFrequency::FREQUENCY_24_HZ" },
		{ "FREQUENCY_30_HZ.Name", "EVSTCameraFrequency::FREQUENCY_30_HZ" },
		{ "FREQUENCY_8_HZ.Name", "EVSTCameraFrequency::FREQUENCY_8_HZ" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVSTCameraFrequency::FREQUENCY_8_HZ", (int64)EVSTCameraFrequency::FREQUENCY_8_HZ },
		{ "EVSTCameraFrequency::FREQUENCY_10_HZ", (int64)EVSTCameraFrequency::FREQUENCY_10_HZ },
		{ "EVSTCameraFrequency::FREQUENCY_24_HZ", (int64)EVSTCameraFrequency::FREQUENCY_24_HZ },
		{ "EVSTCameraFrequency::FREQUENCY_30_HZ", (int64)EVSTCameraFrequency::FREQUENCY_30_HZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrBusiness_EVSTCameraFrequency_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrBusiness,
	nullptr,
	"EVSTCameraFrequency",
	"EVSTCameraFrequency",
	Z_Construct_UEnum_YvrBusiness_EVSTCameraFrequency_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrBusiness_EVSTCameraFrequency_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrBusiness_EVSTCameraFrequency_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrBusiness_EVSTCameraFrequency_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrBusiness_EVSTCameraFrequency()
{
	if (!Z_Registration_Info_UEnum_EVSTCameraFrequency.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVSTCameraFrequency.InnerSingleton, Z_Construct_UEnum_YvrBusiness_EVSTCameraFrequency_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVSTCameraFrequency.InnerSingleton;
}
// End Enum EVSTCameraFrequency

// Begin Enum EVSTCameraFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVSTCameraFormat;
static UEnum* EVSTCameraFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVSTCameraFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVSTCameraFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrBusiness_EVSTCameraFormat, (UObject*)Z_Construct_UPackage__Script_YvrBusiness(), TEXT("EVSTCameraFormat"));
	}
	return Z_Registration_Info_UEnum_EVSTCameraFormat.OuterSingleton;
}
template<> YVRBUSINESS_API UEnum* StaticEnum<EVSTCameraFormat>()
{
	return EVSTCameraFormat_StaticEnum();
}
struct Z_Construct_UEnum_YvrBusiness_EVSTCameraFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FORMAT_NV21.Name", "EVSTCameraFormat::FORMAT_NV21" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVSTCameraFormat::FORMAT_NV21", (int64)EVSTCameraFormat::FORMAT_NV21 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrBusiness_EVSTCameraFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrBusiness,
	nullptr,
	"EVSTCameraFormat",
	"EVSTCameraFormat",
	Z_Construct_UEnum_YvrBusiness_EVSTCameraFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrBusiness_EVSTCameraFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrBusiness_EVSTCameraFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrBusiness_EVSTCameraFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrBusiness_EVSTCameraFormat()
{
	if (!Z_Registration_Info_UEnum_EVSTCameraFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVSTCameraFormat.InnerSingleton, Z_Construct_UEnum_YvrBusiness_EVSTCameraFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVSTCameraFormat.InnerSingleton;
}
// End Enum EVSTCameraFormat

// Begin Enum EVSTCameraSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVSTCameraSource;
static UEnum* EVSTCameraSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVSTCameraSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVSTCameraSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrBusiness_EVSTCameraSource, (UObject*)Z_Construct_UPackage__Script_YvrBusiness(), TEXT("EVSTCameraSource"));
	}
	return Z_Registration_Info_UEnum_EVSTCameraSource.OuterSingleton;
}
template<> YVRBUSINESS_API UEnum* StaticEnum<EVSTCameraSource>()
{
	return EVSTCameraSource_StaticEnum();
}
struct Z_Construct_UEnum_YvrBusiness_EVSTCameraSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
		{ "SOURCE_BOTH_EYES.Name", "EVSTCameraSource::SOURCE_BOTH_EYES" },
		{ "SOURCE_LEFT_EYE.Name", "EVSTCameraSource::SOURCE_LEFT_EYE" },
		{ "SOURCE_RIGHT_EYE.Name", "EVSTCameraSource::SOURCE_RIGHT_EYE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVSTCameraSource::SOURCE_LEFT_EYE", (int64)EVSTCameraSource::SOURCE_LEFT_EYE },
		{ "EVSTCameraSource::SOURCE_RIGHT_EYE", (int64)EVSTCameraSource::SOURCE_RIGHT_EYE },
		{ "EVSTCameraSource::SOURCE_BOTH_EYES", (int64)EVSTCameraSource::SOURCE_BOTH_EYES },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrBusiness_EVSTCameraSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrBusiness,
	nullptr,
	"EVSTCameraSource",
	"EVSTCameraSource",
	Z_Construct_UEnum_YvrBusiness_EVSTCameraSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrBusiness_EVSTCameraSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrBusiness_EVSTCameraSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrBusiness_EVSTCameraSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrBusiness_EVSTCameraSource()
{
	if (!Z_Registration_Info_UEnum_EVSTCameraSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVSTCameraSource.InnerSingleton, Z_Construct_UEnum_YvrBusiness_EVSTCameraSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVSTCameraSource.InnerSingleton;
}
// End Enum EVSTCameraSource

// Begin Enum EVSTCameraID
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVSTCameraID;
static UEnum* EVSTCameraID_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVSTCameraID.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVSTCameraID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrBusiness_EVSTCameraID, (UObject*)Z_Construct_UPackage__Script_YvrBusiness(), TEXT("EVSTCameraID"));
	}
	return Z_Registration_Info_UEnum_EVSTCameraID.OuterSingleton;
}
template<> YVRBUSINESS_API UEnum* StaticEnum<EVSTCameraID>()
{
	return EVSTCameraID_StaticEnum();
}
struct Z_Construct_UEnum_YvrBusiness_EVSTCameraID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ID_LEFT.Name", "EVSTCameraID::ID_LEFT" },
		{ "ID_MAX.Name", "EVSTCameraID::ID_MAX" },
		{ "ID_RIGHT.Name", "EVSTCameraID::ID_RIGHT" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVSTCameraID::ID_LEFT", (int64)EVSTCameraID::ID_LEFT },
		{ "EVSTCameraID::ID_RIGHT", (int64)EVSTCameraID::ID_RIGHT },
		{ "EVSTCameraID::ID_MAX", (int64)EVSTCameraID::ID_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrBusiness_EVSTCameraID_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrBusiness,
	nullptr,
	"EVSTCameraID",
	"EVSTCameraID",
	Z_Construct_UEnum_YvrBusiness_EVSTCameraID_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrBusiness_EVSTCameraID_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrBusiness_EVSTCameraID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrBusiness_EVSTCameraID_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrBusiness_EVSTCameraID()
{
	if (!Z_Registration_Info_UEnum_EVSTCameraID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVSTCameraID.InnerSingleton, Z_Construct_UEnum_YvrBusiness_EVSTCameraID_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVSTCameraID.InnerSingleton;
}
// End Enum EVSTCameraID

// Begin ScriptStruct FVSTCameraIntrinsicExtrinsic
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VSTCameraIntrinsicExtrinsic;
class UScriptStruct* FVSTCameraIntrinsicExtrinsic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VSTCameraIntrinsicExtrinsic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VSTCameraIntrinsicExtrinsic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic, (UObject*)Z_Construct_UPackage__Script_YvrBusiness(), TEXT("VSTCameraIntrinsicExtrinsic"));
	}
	return Z_Registration_Info_UScriptStruct_VSTCameraIntrinsicExtrinsic.OuterSingleton;
}
template<> YVRBUSINESS_API UScriptStruct* StaticStruct<FVSTCameraIntrinsicExtrinsic>()
{
	return FVSTCameraIntrinsicExtrinsic::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocalLength_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrincipalPoint_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocalLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrincipalPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVSTCameraIntrinsicExtrinsic>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraIntrinsicExtrinsic, FocalLength), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocalLength_MetaData), NewProp_FocalLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::NewProp_PrincipalPoint = { "PrincipalPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraIntrinsicExtrinsic, PrincipalPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrincipalPoint_MetaData), NewProp_PrincipalPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraIntrinsicExtrinsic, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVSTCameraIntrinsicExtrinsic, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::NewProp_FocalLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::NewProp_PrincipalPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_YvrBusiness,
	nullptr,
	&NewStructOps,
	"VSTCameraIntrinsicExtrinsic",
	Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::PropPointers),
	sizeof(FVSTCameraIntrinsicExtrinsic),
	alignof(FVSTCameraIntrinsicExtrinsic),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic()
{
	if (!Z_Registration_Info_UScriptStruct_VSTCameraIntrinsicExtrinsic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VSTCameraIntrinsicExtrinsic.InnerSingleton, Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VSTCameraIntrinsicExtrinsic.InnerSingleton;
}
// End ScriptStruct FVSTCameraIntrinsicExtrinsic

// Begin Enum ECameraType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraType;
static UEnum* ECameraType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrBusiness_ECameraType, (UObject*)Z_Construct_UPackage__Script_YvrBusiness(), TEXT("ECameraType"));
	}
	return Z_Registration_Info_UEnum_ECameraType.OuterSingleton;
}
template<> YVRBUSINESS_API UEnum* StaticEnum<ECameraType>()
{
	return ECameraType_StaticEnum();
}
struct Z_Construct_UEnum_YvrBusiness_ECameraType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
		{ "PFDM_XR_CAMERA_TYPE_EYE_TRACKING.Name", "ECameraType::PFDM_XR_CAMERA_TYPE_EYE_TRACKING" },
		{ "PFDM_XR_CAMERA_TYPE_MAX.Name", "ECameraType::PFDM_XR_CAMERA_TYPE_MAX" },
		{ "PFDM_XR_CAMERA_TYPE_TOF.Name", "ECameraType::PFDM_XR_CAMERA_TYPE_TOF" },
		{ "PFDM_XR_CAMERA_TYPE_TRACKING_AUX.Name", "ECameraType::PFDM_XR_CAMERA_TYPE_TRACKING_AUX" },
		{ "PFDM_XR_CAMERA_TYPE_TRACKING_MASTER.Name", "ECameraType::PFDM_XR_CAMERA_TYPE_TRACKING_MASTER" },
		{ "PFDM_XR_CAMERA_TYPE_TRACKING_SLAVE.Name", "ECameraType::PFDM_XR_CAMERA_TYPE_TRACKING_SLAVE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraType::PFDM_XR_CAMERA_TYPE_TRACKING_MASTER", (int64)ECameraType::PFDM_XR_CAMERA_TYPE_TRACKING_MASTER },
		{ "ECameraType::PFDM_XR_CAMERA_TYPE_TRACKING_SLAVE", (int64)ECameraType::PFDM_XR_CAMERA_TYPE_TRACKING_SLAVE },
		{ "ECameraType::PFDM_XR_CAMERA_TYPE_TRACKING_AUX", (int64)ECameraType::PFDM_XR_CAMERA_TYPE_TRACKING_AUX },
		{ "ECameraType::PFDM_XR_CAMERA_TYPE_EYE_TRACKING", (int64)ECameraType::PFDM_XR_CAMERA_TYPE_EYE_TRACKING },
		{ "ECameraType::PFDM_XR_CAMERA_TYPE_TOF", (int64)ECameraType::PFDM_XR_CAMERA_TYPE_TOF },
		{ "ECameraType::PFDM_XR_CAMERA_TYPE_MAX", (int64)ECameraType::PFDM_XR_CAMERA_TYPE_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrBusiness_ECameraType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrBusiness,
	nullptr,
	"ECameraType",
	"ECameraType",
	Z_Construct_UEnum_YvrBusiness_ECameraType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrBusiness_ECameraType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrBusiness_ECameraType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrBusiness_ECameraType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrBusiness_ECameraType()
{
	if (!Z_Registration_Info_UEnum_ECameraType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraType.InnerSingleton, Z_Construct_UEnum_YvrBusiness_ECameraType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraType.InnerSingleton;
}
// End Enum ECameraType

// Begin Enum ETrackingCameraFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrackingCameraFormat;
static UEnum* ETrackingCameraFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETrackingCameraFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETrackingCameraFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrBusiness_ETrackingCameraFormat, (UObject*)Z_Construct_UPackage__Script_YvrBusiness(), TEXT("ETrackingCameraFormat"));
	}
	return Z_Registration_Info_UEnum_ETrackingCameraFormat.OuterSingleton;
}
template<> YVRBUSINESS_API UEnum* StaticEnum<ETrackingCameraFormat>()
{
	return ETrackingCameraFormat_StaticEnum();
}
struct Z_Construct_UEnum_YvrBusiness_ETrackingCameraFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
		{ "PFDM_XR_TRACKING_CAMERA_FMT_RAW8.Name", "ETrackingCameraFormat::PFDM_XR_TRACKING_CAMERA_FMT_RAW8" },
		{ "PFDM_XR_TRACKING_CAMERA_FMT_Y8.Name", "ETrackingCameraFormat::PFDM_XR_TRACKING_CAMERA_FMT_Y8" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETrackingCameraFormat::PFDM_XR_TRACKING_CAMERA_FMT_Y8", (int64)ETrackingCameraFormat::PFDM_XR_TRACKING_CAMERA_FMT_Y8 },
		{ "ETrackingCameraFormat::PFDM_XR_TRACKING_CAMERA_FMT_RAW8", (int64)ETrackingCameraFormat::PFDM_XR_TRACKING_CAMERA_FMT_RAW8 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrBusiness_ETrackingCameraFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrBusiness,
	nullptr,
	"ETrackingCameraFormat",
	"ETrackingCameraFormat",
	Z_Construct_UEnum_YvrBusiness_ETrackingCameraFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrBusiness_ETrackingCameraFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrBusiness_ETrackingCameraFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrBusiness_ETrackingCameraFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrBusiness_ETrackingCameraFormat()
{
	if (!Z_Registration_Info_UEnum_ETrackingCameraFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrackingCameraFormat.InnerSingleton, Z_Construct_UEnum_YvrBusiness_ETrackingCameraFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETrackingCameraFormat.InnerSingleton;
}
// End Enum ETrackingCameraFormat

// Begin Delegate FCameraFrameDelegate
struct Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature_Statics
{
	struct _Script_YvrBusiness_eventCameraFrameDelegate_Parms
	{
		FVSTCameraFrameItem Frame;
		UObject* UserData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YvrBusiness_eventCameraFrameDelegate_Parms, Frame), Z_Construct_UScriptStruct_FVSTCameraFrameItem, METADATA_PARAMS(0, nullptr) }; // 1914381463
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YvrBusiness_eventCameraFrameDelegate_Parms, UserData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature_Statics::NewProp_Frame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature_Statics::NewProp_UserData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_YvrBusiness, nullptr, "CameraFrameDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature_Statics::_Script_YvrBusiness_eventCameraFrameDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature_Statics::_Script_YvrBusiness_eventCameraFrameDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCameraFrameDelegate_DelegateWrapper(const FMulticastScriptDelegate& CameraFrameDelegate, FVSTCameraFrameItem& Frame, UObject* UserData)
{
	struct _Script_YvrBusiness_eventCameraFrameDelegate_Parms
	{
		FVSTCameraFrameItem Frame;
		UObject* UserData;
	};
	_Script_YvrBusiness_eventCameraFrameDelegate_Parms Parms;
	Parms.Frame=Frame;
	Parms.UserData=UserData;
	CameraFrameDelegate.ProcessMulticastDelegate<UObject>(&Parms);
	Frame=Parms.Frame;
}
// End Delegate FCameraFrameDelegate

// Begin Class UYvrBusinessBPLibrary Function AcquireTrackingCameraFrame
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics
{
	struct YvrBusinessBPLibrary_eventAcquireTrackingCameraFrame_Parms
	{
		ECameraType type;
		FVSTCameraFrameItem frame_output;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_frame_output;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventAcquireTrackingCameraFrame_Parms, type), Z_Construct_UEnum_YvrBusiness_ECameraType, METADATA_PARAMS(0, nullptr) }; // 3739960907
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::NewProp_frame_output = { "frame_output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventAcquireTrackingCameraFrame_Parms, frame_output), Z_Construct_UScriptStruct_FVSTCameraFrameItem, METADATA_PARAMS(0, nullptr) }; // 1914381463
void Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventAcquireTrackingCameraFrame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventAcquireTrackingCameraFrame_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::NewProp_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::NewProp_frame_output,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "AcquireTrackingCameraFrame", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::YvrBusinessBPLibrary_eventAcquireTrackingCameraFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::YvrBusinessBPLibrary_eventAcquireTrackingCameraFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execAcquireTrackingCameraFrame)
{
	P_GET_ENUM(ECameraType,Z_Param_type);
	P_GET_STRUCT_REF(FVSTCameraFrameItem,Z_Param_Out_frame_output);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::AcquireTrackingCameraFrame(ECameraType(Z_Param_type),Z_Param_Out_frame_output);
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function AcquireTrackingCameraFrame

// Begin Class UYvrBusinessBPLibrary Function AcquireVSTCameraFrame
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics
{
	struct YvrBusinessBPLibrary_eventAcquireVSTCameraFrame_Parms
	{
		FVSTCameraFrame OutFrame;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutFrame;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics::NewProp_OutFrame = { "OutFrame", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventAcquireVSTCameraFrame_Parms, OutFrame), Z_Construct_UScriptStruct_FVSTCameraFrame, METADATA_PARAMS(0, nullptr) }; // 4033000581
void Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventAcquireVSTCameraFrame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventAcquireVSTCameraFrame_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics::NewProp_OutFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "AcquireVSTCameraFrame", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics::YvrBusinessBPLibrary_eventAcquireVSTCameraFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics::YvrBusinessBPLibrary_eventAcquireVSTCameraFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execAcquireVSTCameraFrame)
{
	P_GET_STRUCT_REF(FVSTCameraFrame,Z_Param_Out_OutFrame);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::AcquireVSTCameraFrame(Z_Param_Out_OutFrame);
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function AcquireVSTCameraFrame

// Begin Class UYvrBusinessBPLibrary Function CloseTrackingCamera
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics
{
	struct YvrBusinessBPLibrary_eventCloseTrackingCamera_Parms
	{
		ECameraType type;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventCloseTrackingCamera_Parms, type), Z_Construct_UEnum_YvrBusiness_ECameraType, METADATA_PARAMS(0, nullptr) }; // 3739960907
void Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventCloseTrackingCamera_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventCloseTrackingCamera_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::NewProp_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "CloseTrackingCamera", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::YvrBusinessBPLibrary_eventCloseTrackingCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::YvrBusinessBPLibrary_eventCloseTrackingCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execCloseTrackingCamera)
{
	P_GET_ENUM(ECameraType,Z_Param_type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::CloseTrackingCamera(ECameraType(Z_Param_type));
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function CloseTrackingCamera

// Begin Class UYvrBusinessBPLibrary Function CloseVSTCamera
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera_Statics
{
	struct YvrBusinessBPLibrary_eventCloseVSTCamera_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventCloseVSTCamera_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventCloseVSTCamera_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "CloseVSTCamera", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera_Statics::YvrBusinessBPLibrary_eventCloseVSTCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera_Statics::YvrBusinessBPLibrary_eventCloseVSTCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execCloseVSTCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::CloseVSTCamera();
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function CloseVSTCamera

// Begin Class UYvrBusinessBPLibrary Function GetDeviceModel
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceModel_Statics
{
	struct YvrBusinessBPLibrary_eventGetDeviceModel_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventGetDeviceModel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceModel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "GetDeviceModel", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceModel_Statics::YvrBusinessBPLibrary_eventGetDeviceModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceModel_Statics::YvrBusinessBPLibrary_eventGetDeviceModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execGetDeviceModel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UYvrBusinessBPLibrary::GetDeviceModel();
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function GetDeviceModel

// Begin Class UYvrBusinessBPLibrary Function GetDeviceSn
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceSn_Statics
{
	struct YvrBusinessBPLibrary_eventGetDeviceSn_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceSn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventGetDeviceSn_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceSn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceSn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceSn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceSn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "GetDeviceSn", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceSn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceSn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceSn_Statics::YvrBusinessBPLibrary_eventGetDeviceSn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceSn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceSn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceSn_Statics::YvrBusinessBPLibrary_eventGetDeviceSn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceSn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceSn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execGetDeviceSn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UYvrBusinessBPLibrary::GetDeviceSn();
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function GetDeviceSn

// Begin Class UYvrBusinessBPLibrary Function GetSoftwareVersion
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_GetSoftwareVersion_Statics
{
	struct YvrBusinessBPLibrary_eventGetSoftwareVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetSoftwareVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventGetSoftwareVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_GetSoftwareVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetSoftwareVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetSoftwareVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetSoftwareVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "GetSoftwareVersion", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetSoftwareVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetSoftwareVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetSoftwareVersion_Statics::YvrBusinessBPLibrary_eventGetSoftwareVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetSoftwareVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_GetSoftwareVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetSoftwareVersion_Statics::YvrBusinessBPLibrary_eventGetSoftwareVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_GetSoftwareVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetSoftwareVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execGetSoftwareVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UYvrBusinessBPLibrary::GetSoftwareVersion();
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function GetSoftwareVersion

// Begin Class UYvrBusinessBPLibrary Function GetTrackingCameraFps
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics
{
	struct YvrBusinessBPLibrary_eventGetTrackingCameraFps_Parms
	{
		ECameraType type;
		int32 frequency;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_frequency;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventGetTrackingCameraFps_Parms, type), Z_Construct_UEnum_YvrBusiness_ECameraType, METADATA_PARAMS(0, nullptr) }; // 3739960907
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventGetTrackingCameraFps_Parms, frequency), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventGetTrackingCameraFps_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventGetTrackingCameraFps_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::NewProp_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::NewProp_frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "GetTrackingCameraFps", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::YvrBusinessBPLibrary_eventGetTrackingCameraFps_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::YvrBusinessBPLibrary_eventGetTrackingCameraFps_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execGetTrackingCameraFps)
{
	P_GET_ENUM(ECameraType,Z_Param_type);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_frequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::GetTrackingCameraFps(ECameraType(Z_Param_type),Z_Param_Out_frequency);
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function GetTrackingCameraFps

// Begin Class UYvrBusinessBPLibrary Function GetVSTCameraFormat
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics
{
	struct YvrBusinessBPLibrary_eventGetVSTCameraFormat_Parms
	{
		EVSTCameraFormat OutFormat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutFormat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::NewProp_OutFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::NewProp_OutFormat = { "OutFormat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventGetVSTCameraFormat_Parms, OutFormat), Z_Construct_UEnum_YvrBusiness_EVSTCameraFormat, METADATA_PARAMS(0, nullptr) }; // 1908148437
void Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventGetVSTCameraFormat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventGetVSTCameraFormat_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::NewProp_OutFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::NewProp_OutFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "GetVSTCameraFormat", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::YvrBusinessBPLibrary_eventGetVSTCameraFormat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::YvrBusinessBPLibrary_eventGetVSTCameraFormat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execGetVSTCameraFormat)
{
	P_GET_ENUM_REF(EVSTCameraFormat,Z_Param_Out_OutFormat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::GetVSTCameraFormat((EVSTCameraFormat&)(Z_Param_Out_OutFormat));
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function GetVSTCameraFormat

// Begin Class UYvrBusinessBPLibrary Function GetVSTCameraFrequency
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics
{
	struct YvrBusinessBPLibrary_eventGetVSTCameraFrequency_Parms
	{
		EVSTCameraFrequency OutFrequency;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutFrequency_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutFrequency;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::NewProp_OutFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::NewProp_OutFrequency = { "OutFrequency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventGetVSTCameraFrequency_Parms, OutFrequency), Z_Construct_UEnum_YvrBusiness_EVSTCameraFrequency, METADATA_PARAMS(0, nullptr) }; // 1117875512
void Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventGetVSTCameraFrequency_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventGetVSTCameraFrequency_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::NewProp_OutFrequency_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::NewProp_OutFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "GetVSTCameraFrequency", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::YvrBusinessBPLibrary_eventGetVSTCameraFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::YvrBusinessBPLibrary_eventGetVSTCameraFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execGetVSTCameraFrequency)
{
	P_GET_ENUM_REF(EVSTCameraFrequency,Z_Param_Out_OutFrequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::GetVSTCameraFrequency((EVSTCameraFrequency&)(Z_Param_Out_OutFrequency));
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function GetVSTCameraFrequency

// Begin Class UYvrBusinessBPLibrary Function GetVSTCameraIntrinsicExtrinsic
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics
{
	struct YvrBusinessBPLibrary_eventGetVSTCameraIntrinsicExtrinsic_Parms
	{
		EVSTCameraID ID;
		FVSTCameraIntrinsicExtrinsic OutParams;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ID_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutParams;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::NewProp_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventGetVSTCameraIntrinsicExtrinsic_Parms, ID), Z_Construct_UEnum_YvrBusiness_EVSTCameraID, METADATA_PARAMS(0, nullptr) }; // 855898937
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::NewProp_OutParams = { "OutParams", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventGetVSTCameraIntrinsicExtrinsic_Parms, OutParams), Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic, METADATA_PARAMS(0, nullptr) }; // 156984023
void Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventGetVSTCameraIntrinsicExtrinsic_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventGetVSTCameraIntrinsicExtrinsic_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::NewProp_ID_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::NewProp_OutParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "GetVSTCameraIntrinsicExtrinsic", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::YvrBusinessBPLibrary_eventGetVSTCameraIntrinsicExtrinsic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::YvrBusinessBPLibrary_eventGetVSTCameraIntrinsicExtrinsic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execGetVSTCameraIntrinsicExtrinsic)
{
	P_GET_ENUM(EVSTCameraID,Z_Param_ID);
	P_GET_STRUCT_REF(FVSTCameraIntrinsicExtrinsic,Z_Param_Out_OutParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::GetVSTCameraIntrinsicExtrinsic(EVSTCameraID(Z_Param_ID),Z_Param_Out_OutParams);
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function GetVSTCameraIntrinsicExtrinsic

// Begin Class UYvrBusinessBPLibrary Function GetVSTCameraOutputSource
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics
{
	struct YvrBusinessBPLibrary_eventGetVSTCameraOutputSource_Parms
	{
		EVSTCameraSource OutSource;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutSource;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::NewProp_OutSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::NewProp_OutSource = { "OutSource", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventGetVSTCameraOutputSource_Parms, OutSource), Z_Construct_UEnum_YvrBusiness_EVSTCameraSource, METADATA_PARAMS(0, nullptr) }; // 2074239690
void Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventGetVSTCameraOutputSource_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventGetVSTCameraOutputSource_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::NewProp_OutSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::NewProp_OutSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "GetVSTCameraOutputSource", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::YvrBusinessBPLibrary_eventGetVSTCameraOutputSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::YvrBusinessBPLibrary_eventGetVSTCameraOutputSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execGetVSTCameraOutputSource)
{
	P_GET_ENUM_REF(EVSTCameraSource,Z_Param_Out_OutSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::GetVSTCameraOutputSource((EVSTCameraSource&)(Z_Param_Out_OutSource));
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function GetVSTCameraOutputSource

// Begin Class UYvrBusinessBPLibrary Function GetVSTCameraResolution
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics
{
	struct YvrBusinessBPLibrary_eventGetVSTCameraResolution_Parms
	{
		EVSTCameraResolution OutResolution;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResolution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResolution;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::NewProp_OutResolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::NewProp_OutResolution = { "OutResolution", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventGetVSTCameraResolution_Parms, OutResolution), Z_Construct_UEnum_YvrBusiness_EVSTCameraResolution, METADATA_PARAMS(0, nullptr) }; // 652283971
void Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventGetVSTCameraResolution_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventGetVSTCameraResolution_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::NewProp_OutResolution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::NewProp_OutResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "GetVSTCameraResolution", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::YvrBusinessBPLibrary_eventGetVSTCameraResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::YvrBusinessBPLibrary_eventGetVSTCameraResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execGetVSTCameraResolution)
{
	P_GET_ENUM_REF(EVSTCameraResolution,Z_Param_Out_OutResolution);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::GetVSTCameraResolution((EVSTCameraResolution&)(Z_Param_Out_OutResolution));
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function GetVSTCameraResolution

// Begin Class UYvrBusinessBPLibrary Function OpenTrackingCamera
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics
{
	struct YvrBusinessBPLibrary_eventOpenTrackingCamera_Parms
	{
		ECameraType type;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//tracking\n" },
#endif
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "tracking" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventOpenTrackingCamera_Parms, type), Z_Construct_UEnum_YvrBusiness_ECameraType, METADATA_PARAMS(0, nullptr) }; // 3739960907
void Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventOpenTrackingCamera_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventOpenTrackingCamera_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::NewProp_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "OpenTrackingCamera", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::YvrBusinessBPLibrary_eventOpenTrackingCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::YvrBusinessBPLibrary_eventOpenTrackingCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execOpenTrackingCamera)
{
	P_GET_ENUM(ECameraType,Z_Param_type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::OpenTrackingCamera(ECameraType(Z_Param_type));
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function OpenTrackingCamera

// Begin Class UYvrBusinessBPLibrary Function OpenVSTCamera
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera_Statics
{
	struct YvrBusinessBPLibrary_eventOpenVSTCamera_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// VST\n" },
#endif
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VST" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventOpenVSTCamera_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventOpenVSTCamera_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "OpenVSTCamera", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera_Statics::YvrBusinessBPLibrary_eventOpenVSTCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera_Statics::YvrBusinessBPLibrary_eventOpenVSTCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execOpenVSTCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::OpenVSTCamera();
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function OpenVSTCamera

// Begin Class UYvrBusinessBPLibrary Function SetTrackingCameraFps
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics
{
	struct YvrBusinessBPLibrary_eventSetTrackingCameraFps_Parms
	{
		ECameraType type;
		int32 frequency;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_frequency;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventSetTrackingCameraFps_Parms, type), Z_Construct_UEnum_YvrBusiness_ECameraType, METADATA_PARAMS(0, nullptr) }; // 3739960907
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventSetTrackingCameraFps_Parms, frequency), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventSetTrackingCameraFps_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventSetTrackingCameraFps_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::NewProp_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::NewProp_frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "SetTrackingCameraFps", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::YvrBusinessBPLibrary_eventSetTrackingCameraFps_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::YvrBusinessBPLibrary_eventSetTrackingCameraFps_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execSetTrackingCameraFps)
{
	P_GET_ENUM(ECameraType,Z_Param_type);
	P_GET_PROPERTY(FIntProperty,Z_Param_frequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::SetTrackingCameraFps(ECameraType(Z_Param_type),Z_Param_frequency);
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function SetTrackingCameraFps

// Begin Class UYvrBusinessBPLibrary Function SetVSTCameraFormat
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics
{
	struct YvrBusinessBPLibrary_eventSetVSTCameraFormat_Parms
	{
		EVSTCameraFormat Format;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventSetVSTCameraFormat_Parms, Format), Z_Construct_UEnum_YvrBusiness_EVSTCameraFormat, METADATA_PARAMS(0, nullptr) }; // 1908148437
void Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventSetVSTCameraFormat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventSetVSTCameraFormat_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::NewProp_Format_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "SetVSTCameraFormat", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::YvrBusinessBPLibrary_eventSetVSTCameraFormat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::YvrBusinessBPLibrary_eventSetVSTCameraFormat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execSetVSTCameraFormat)
{
	P_GET_ENUM(EVSTCameraFormat,Z_Param_Format);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::SetVSTCameraFormat(EVSTCameraFormat(Z_Param_Format));
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function SetVSTCameraFormat

// Begin Class UYvrBusinessBPLibrary Function SetVSTCameraFrequency
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics
{
	struct YvrBusinessBPLibrary_eventSetVSTCameraFrequency_Parms
	{
		EVSTCameraFrequency Frequency;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Frequency_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Frequency;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::NewProp_Frequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventSetVSTCameraFrequency_Parms, Frequency), Z_Construct_UEnum_YvrBusiness_EVSTCameraFrequency, METADATA_PARAMS(0, nullptr) }; // 1117875512
void Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventSetVSTCameraFrequency_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventSetVSTCameraFrequency_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::NewProp_Frequency_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "SetVSTCameraFrequency", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::YvrBusinessBPLibrary_eventSetVSTCameraFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::YvrBusinessBPLibrary_eventSetVSTCameraFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execSetVSTCameraFrequency)
{
	P_GET_ENUM(EVSTCameraFrequency,Z_Param_Frequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::SetVSTCameraFrequency(EVSTCameraFrequency(Z_Param_Frequency));
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function SetVSTCameraFrequency

// Begin Class UYvrBusinessBPLibrary Function SetVSTCameraOutputSource
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics
{
	struct YvrBusinessBPLibrary_eventSetVSTCameraOutputSource_Parms
	{
		EVSTCameraSource Source;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventSetVSTCameraOutputSource_Parms, Source), Z_Construct_UEnum_YvrBusiness_EVSTCameraSource, METADATA_PARAMS(0, nullptr) }; // 2074239690
void Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventSetVSTCameraOutputSource_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventSetVSTCameraOutputSource_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "SetVSTCameraOutputSource", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::YvrBusinessBPLibrary_eventSetVSTCameraOutputSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::YvrBusinessBPLibrary_eventSetVSTCameraOutputSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execSetVSTCameraOutputSource)
{
	P_GET_ENUM(EVSTCameraSource,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::SetVSTCameraOutputSource(EVSTCameraSource(Z_Param_Source));
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function SetVSTCameraOutputSource

// Begin Class UYvrBusinessBPLibrary Function SetVSTCameraResolution
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics
{
	struct YvrBusinessBPLibrary_eventSetVSTCameraResolution_Parms
	{
		EVSTCameraResolution Resolution;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Resolution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Resolution;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::NewProp_Resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventSetVSTCameraResolution_Parms, Resolution), Z_Construct_UEnum_YvrBusiness_EVSTCameraResolution, METADATA_PARAMS(0, nullptr) }; // 652283971
void Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventSetVSTCameraResolution_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventSetVSTCameraResolution_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::NewProp_Resolution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "SetVSTCameraResolution", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::YvrBusinessBPLibrary_eventSetVSTCameraResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::YvrBusinessBPLibrary_eventSetVSTCameraResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execSetVSTCameraResolution)
{
	P_GET_ENUM(EVSTCameraResolution,Z_Param_Resolution);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::SetVSTCameraResolution(EVSTCameraResolution(Z_Param_Resolution));
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function SetVSTCameraResolution

// Begin Class UYvrBusinessBPLibrary Function SubscribeFrame
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics
{
	struct YvrBusinessBPLibrary_eventSubscribeFrame_Parms
	{
		ECameraType type;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventSubscribeFrame_Parms, type), Z_Construct_UEnum_YvrBusiness_ECameraType, METADATA_PARAMS(0, nullptr) }; // 3739960907
void Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventSubscribeFrame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventSubscribeFrame_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::NewProp_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "SubscribeFrame", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::YvrBusinessBPLibrary_eventSubscribeFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::YvrBusinessBPLibrary_eventSubscribeFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execSubscribeFrame)
{
	P_GET_ENUM(ECameraType,Z_Param_type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::SubscribeFrame(ECameraType(Z_Param_type));
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function SubscribeFrame

// Begin Class UYvrBusinessBPLibrary Function UnSubscribeFrame
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics
{
	struct YvrBusinessBPLibrary_eventUnSubscribeFrame_Parms
	{
		ECameraType type;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventUnSubscribeFrame_Parms, type), Z_Construct_UEnum_YvrBusiness_ECameraType, METADATA_PARAMS(0, nullptr) }; // 3739960907
void Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrBusinessBPLibrary_eventUnSubscribeFrame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrBusinessBPLibrary_eventUnSubscribeFrame_Parms), &Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::NewProp_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "UnSubscribeFrame", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::YvrBusinessBPLibrary_eventUnSubscribeFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::YvrBusinessBPLibrary_eventUnSubscribeFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execUnSubscribeFrame)
{
	P_GET_ENUM(ECameraType,Z_Param_type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrBusinessBPLibrary::UnSubscribeFrame(ECameraType(Z_Param_type));
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function UnSubscribeFrame

// Begin Class UYvrBusinessBPLibrary Function UpdateRenderTargetFromRGB
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics
{
	struct YvrBusinessBPLibrary_eventUpdateRenderTargetFromRGB_Parms
	{
		TArray<uint8> RawData;
		int32 Width;
		int32 Height;
		UTextureRenderTarget2D* RenderTarget2D;
		uint8 OverrideAlpha;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Utils\n" },
#endif
		{ "CPP_Default_OverrideAlpha", "255" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utils" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RawData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RawData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget2D;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::NewProp_RawData_Inner = { "RawData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventUpdateRenderTargetFromRGB_Parms, RawData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawData_MetaData), NewProp_RawData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventUpdateRenderTargetFromRGB_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventUpdateRenderTargetFromRGB_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::NewProp_RenderTarget2D = { "RenderTarget2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventUpdateRenderTargetFromRGB_Parms, RenderTarget2D), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::NewProp_OverrideAlpha = { "OverrideAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventUpdateRenderTargetFromRGB_Parms, OverrideAlpha), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::NewProp_RawData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::NewProp_RawData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::NewProp_RenderTarget2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::NewProp_OverrideAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "UpdateRenderTargetFromRGB", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::YvrBusinessBPLibrary_eventUpdateRenderTargetFromRGB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::YvrBusinessBPLibrary_eventUpdateRenderTargetFromRGB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execUpdateRenderTargetFromRGB)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_RawData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget2D);
	P_GET_PROPERTY(FByteProperty,Z_Param_OverrideAlpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYvrBusinessBPLibrary::UpdateRenderTargetFromRGB(Z_Param_Out_RawData,Z_Param_Width,Z_Param_Height,Z_Param_RenderTarget2D,Z_Param_OverrideAlpha);
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function UpdateRenderTargetFromRGB

// Begin Class UYvrBusinessBPLibrary Function UpdateRenderTargetFromYUVNV21
struct Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics
{
	struct YvrBusinessBPLibrary_eventUpdateRenderTargetFromYUVNV21_Parms
	{
		TArray<uint8> RawData;
		int32 Width;
		int32 Height;
		UTextureRenderTarget2D* RenderTarget2D;
		uint8 OverrideAlpha;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrLibrary" },
		{ "CPP_Default_OverrideAlpha", "255" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RawData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RawData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget2D;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::NewProp_RawData_Inner = { "RawData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventUpdateRenderTargetFromYUVNV21_Parms, RawData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawData_MetaData), NewProp_RawData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventUpdateRenderTargetFromYUVNV21_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventUpdateRenderTargetFromYUVNV21_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::NewProp_RenderTarget2D = { "RenderTarget2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventUpdateRenderTargetFromYUVNV21_Parms, RenderTarget2D), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::NewProp_OverrideAlpha = { "OverrideAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrBusinessBPLibrary_eventUpdateRenderTargetFromYUVNV21_Parms, OverrideAlpha), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::NewProp_RawData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::NewProp_RawData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::NewProp_RenderTarget2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::NewProp_OverrideAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrBusinessBPLibrary, nullptr, "UpdateRenderTargetFromYUVNV21", nullptr, nullptr, Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::YvrBusinessBPLibrary_eventUpdateRenderTargetFromYUVNV21_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::YvrBusinessBPLibrary_eventUpdateRenderTargetFromYUVNV21_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrBusinessBPLibrary::execUpdateRenderTargetFromYUVNV21)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_RawData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget2D);
	P_GET_PROPERTY(FByteProperty,Z_Param_OverrideAlpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	UYvrBusinessBPLibrary::UpdateRenderTargetFromYUVNV21(Z_Param_Out_RawData,Z_Param_Width,Z_Param_Height,Z_Param_RenderTarget2D,Z_Param_OverrideAlpha);
	P_NATIVE_END;
}
// End Class UYvrBusinessBPLibrary Function UpdateRenderTargetFromYUVNV21

// Begin Class UYvrBusinessBPLibrary
void UYvrBusinessBPLibrary::StaticRegisterNativesUYvrBusinessBPLibrary()
{
	UClass* Class = UYvrBusinessBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcquireTrackingCameraFrame", &UYvrBusinessBPLibrary::execAcquireTrackingCameraFrame },
		{ "AcquireVSTCameraFrame", &UYvrBusinessBPLibrary::execAcquireVSTCameraFrame },
		{ "CloseTrackingCamera", &UYvrBusinessBPLibrary::execCloseTrackingCamera },
		{ "CloseVSTCamera", &UYvrBusinessBPLibrary::execCloseVSTCamera },
		{ "GetDeviceModel", &UYvrBusinessBPLibrary::execGetDeviceModel },
		{ "GetDeviceSn", &UYvrBusinessBPLibrary::execGetDeviceSn },
		{ "GetSoftwareVersion", &UYvrBusinessBPLibrary::execGetSoftwareVersion },
		{ "GetTrackingCameraFps", &UYvrBusinessBPLibrary::execGetTrackingCameraFps },
		{ "GetVSTCameraFormat", &UYvrBusinessBPLibrary::execGetVSTCameraFormat },
		{ "GetVSTCameraFrequency", &UYvrBusinessBPLibrary::execGetVSTCameraFrequency },
		{ "GetVSTCameraIntrinsicExtrinsic", &UYvrBusinessBPLibrary::execGetVSTCameraIntrinsicExtrinsic },
		{ "GetVSTCameraOutputSource", &UYvrBusinessBPLibrary::execGetVSTCameraOutputSource },
		{ "GetVSTCameraResolution", &UYvrBusinessBPLibrary::execGetVSTCameraResolution },
		{ "OpenTrackingCamera", &UYvrBusinessBPLibrary::execOpenTrackingCamera },
		{ "OpenVSTCamera", &UYvrBusinessBPLibrary::execOpenVSTCamera },
		{ "SetTrackingCameraFps", &UYvrBusinessBPLibrary::execSetTrackingCameraFps },
		{ "SetVSTCameraFormat", &UYvrBusinessBPLibrary::execSetVSTCameraFormat },
		{ "SetVSTCameraFrequency", &UYvrBusinessBPLibrary::execSetVSTCameraFrequency },
		{ "SetVSTCameraOutputSource", &UYvrBusinessBPLibrary::execSetVSTCameraOutputSource },
		{ "SetVSTCameraResolution", &UYvrBusinessBPLibrary::execSetVSTCameraResolution },
		{ "SubscribeFrame", &UYvrBusinessBPLibrary::execSubscribeFrame },
		{ "UnSubscribeFrame", &UYvrBusinessBPLibrary::execUnSubscribeFrame },
		{ "UpdateRenderTargetFromRGB", &UYvrBusinessBPLibrary::execUpdateRenderTargetFromRGB },
		{ "UpdateRenderTargetFromYUVNV21", &UYvrBusinessBPLibrary::execUpdateRenderTargetFromYUVNV21 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrBusinessBPLibrary);
UClass* Z_Construct_UClass_UYvrBusinessBPLibrary_NoRegister()
{
	return UYvrBusinessBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UYvrBusinessBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "YvrBusinessBPLibrary.h" },
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraFrameEvent_MetaData[] = {
		{ "Category", "CameraFrameEvents" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// static BindCameraFrameDelegate();\n" },
#endif
		{ "ModuleRelativePath", "Public/YvrBusinessBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "static BindCameraFrameDelegate();" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CameraFrameEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireTrackingCameraFrame, "AcquireTrackingCameraFrame" }, // 3037977155
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_AcquireVSTCameraFrame, "AcquireVSTCameraFrame" }, // 136744165
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseTrackingCamera, "CloseTrackingCamera" }, // 3578696258
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_CloseVSTCamera, "CloseVSTCamera" }, // 2571973470
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceModel, "GetDeviceModel" }, // 803830469
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_GetDeviceSn, "GetDeviceSn" }, // 1622037589
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_GetSoftwareVersion, "GetSoftwareVersion" }, // 2083546009
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_GetTrackingCameraFps, "GetTrackingCameraFps" }, // 2574841246
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFormat, "GetVSTCameraFormat" }, // 2179765886
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraFrequency, "GetVSTCameraFrequency" }, // 668450290
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraIntrinsicExtrinsic, "GetVSTCameraIntrinsicExtrinsic" }, // 4067455592
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraOutputSource, "GetVSTCameraOutputSource" }, // 2716091286
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_GetVSTCameraResolution, "GetVSTCameraResolution" }, // 3489701869
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenTrackingCamera, "OpenTrackingCamera" }, // 2317691990
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_OpenVSTCamera, "OpenVSTCamera" }, // 1050417495
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_SetTrackingCameraFps, "SetTrackingCameraFps" }, // 1479249262
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFormat, "SetVSTCameraFormat" }, // 1989254662
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraFrequency, "SetVSTCameraFrequency" }, // 2834454160
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraOutputSource, "SetVSTCameraOutputSource" }, // 3106506594
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_SetVSTCameraResolution, "SetVSTCameraResolution" }, // 1708005694
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_SubscribeFrame, "SubscribeFrame" }, // 3297999287
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_UnSubscribeFrame, "UnSubscribeFrame" }, // 1544694228
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromRGB, "UpdateRenderTargetFromRGB" }, // 1875311113
		{ &Z_Construct_UFunction_UYvrBusinessBPLibrary_UpdateRenderTargetFromYUVNV21, "UpdateRenderTargetFromYUVNV21" }, // 3823016111
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrBusinessBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrBusinessBPLibrary_Statics::NewProp_CameraFrameEvent = { "CameraFrameEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrBusinessBPLibrary, CameraFrameEvent), Z_Construct_UDelegateFunction_YvrBusiness_CameraFrameDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraFrameEvent_MetaData), NewProp_CameraFrameEvent_MetaData) }; // 4213381167
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYvrBusinessBPLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrBusinessBPLibrary_Statics::NewProp_CameraFrameEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrBusinessBPLibrary_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYvrBusinessBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrBusiness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrBusinessBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrBusinessBPLibrary_Statics::ClassParams = {
	&UYvrBusinessBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UYvrBusinessBPLibrary_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UYvrBusinessBPLibrary_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrBusinessBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrBusinessBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrBusinessBPLibrary()
{
	if (!Z_Registration_Info_UClass_UYvrBusinessBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrBusinessBPLibrary.OuterSingleton, Z_Construct_UClass_UYvrBusinessBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrBusinessBPLibrary.OuterSingleton;
}
template<> YVRBUSINESS_API UClass* StaticClass<UYvrBusinessBPLibrary>()
{
	return UYvrBusinessBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrBusinessBPLibrary);
UYvrBusinessBPLibrary::~UYvrBusinessBPLibrary() {}
// End Class UYvrBusinessBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVSTCameraResolution_StaticEnum, TEXT("EVSTCameraResolution"), &Z_Registration_Info_UEnum_EVSTCameraResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 652283971U) },
		{ EVSTCameraFrequency_StaticEnum, TEXT("EVSTCameraFrequency"), &Z_Registration_Info_UEnum_EVSTCameraFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1117875512U) },
		{ EVSTCameraFormat_StaticEnum, TEXT("EVSTCameraFormat"), &Z_Registration_Info_UEnum_EVSTCameraFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1908148437U) },
		{ EVSTCameraSource_StaticEnum, TEXT("EVSTCameraSource"), &Z_Registration_Info_UEnum_EVSTCameraSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2074239690U) },
		{ EVSTCameraID_StaticEnum, TEXT("EVSTCameraID"), &Z_Registration_Info_UEnum_EVSTCameraID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 855898937U) },
		{ ECameraType_StaticEnum, TEXT("ECameraType"), &Z_Registration_Info_UEnum_ECameraType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3739960907U) },
		{ ETrackingCameraFormat_StaticEnum, TEXT("ETrackingCameraFormat"), &Z_Registration_Info_UEnum_ETrackingCameraFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2795047664U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVSTCameraFrameItem::StaticStruct, Z_Construct_UScriptStruct_FVSTCameraFrameItem_Statics::NewStructOps, TEXT("VSTCameraFrameItem"), &Z_Registration_Info_UScriptStruct_VSTCameraFrameItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVSTCameraFrameItem), 1914381463U) },
		{ FYvrPose::StaticStruct, Z_Construct_UScriptStruct_FYvrPose_Statics::NewStructOps, TEXT("YvrPose"), &Z_Registration_Info_UScriptStruct_YvrPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FYvrPose), 3223577043U) },
		{ FVSTCameraFrame::StaticStruct, Z_Construct_UScriptStruct_FVSTCameraFrame_Statics::NewStructOps, TEXT("VSTCameraFrame"), &Z_Registration_Info_UScriptStruct_VSTCameraFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVSTCameraFrame), 4033000581U) },
		{ FVSTCameraIntrinsicExtrinsic::StaticStruct, Z_Construct_UScriptStruct_FVSTCameraIntrinsicExtrinsic_Statics::NewStructOps, TEXT("VSTCameraIntrinsicExtrinsic"), &Z_Registration_Info_UScriptStruct_VSTCameraIntrinsicExtrinsic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVSTCameraIntrinsicExtrinsic), 156984023U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYvrBusinessBPLibrary, UYvrBusinessBPLibrary::StaticClass, TEXT("UYvrBusinessBPLibrary"), &Z_Registration_Info_UClass_UYvrBusinessBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrBusinessBPLibrary), 2412319698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_2667003527(TEXT("/Script/YvrBusiness"),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrBusinessBPLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
