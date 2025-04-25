// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YvrXRInput/Public/YvrXRInputFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYvrXRInputFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_YvrXRInput();
YVRXRINPUT_API UClass* Z_Construct_UClass_UYvrXRInputFunctionLibrary();
YVRXRINPUT_API UClass* Z_Construct_UClass_UYvrXRInputFunctionLibrary_NoRegister();
YVRXRINPUT_API UEnum* Z_Construct_UEnum_YvrXRInput_EYvrXRHandFinger();
YVRXRINPUT_API UEnum* Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint();
YVRXRINPUT_API UEnum* Z_Construct_UEnum_YvrXRInput_EYvrXRHandTrackingConfidence();
YVRXRINPUT_API UEnum* Z_Construct_UEnum_YvrXRInput_EYvrXRHandType();
// End Cross Module References

// Begin Enum EYvrXRHandType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYvrXRHandType;
static UEnum* EYvrXRHandType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYvrXRHandType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYvrXRHandType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, (UObject*)Z_Construct_UPackage__Script_YvrXRInput(), TEXT("EYvrXRHandType"));
	}
	return Z_Registration_Info_UEnum_EYvrXRHandType.OuterSingleton;
}
template<> YVRXRINPUT_API UEnum* StaticEnum<EYvrXRHandType>()
{
	return EYvrXRHandType_StaticEnum();
}
struct Z_Construct_UEnum_YvrXRInput_EYvrXRHandType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HandLeft.Name", "EYvrXRHandType::HandLeft" },
		{ "HandRight.Name", "EYvrXRHandType::HandRight" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
		{ "None.Name", "EYvrXRHandType::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYvrXRHandType::None", (int64)EYvrXRHandType::None },
		{ "EYvrXRHandType::HandLeft", (int64)EYvrXRHandType::HandLeft },
		{ "EYvrXRHandType::HandRight", (int64)EYvrXRHandType::HandRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrXRInput_EYvrXRHandType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrXRInput,
	nullptr,
	"EYvrXRHandType",
	"EYvrXRHandType",
	Z_Construct_UEnum_YvrXRInput_EYvrXRHandType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRInput_EYvrXRHandType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRInput_EYvrXRHandType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrXRInput_EYvrXRHandType()
{
	if (!Z_Registration_Info_UEnum_EYvrXRHandType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYvrXRHandType.InnerSingleton, Z_Construct_UEnum_YvrXRInput_EYvrXRHandType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYvrXRHandType.InnerSingleton;
}
// End Enum EYvrXRHandType

// Begin Enum EYvrXRHandFinger
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYvrXRHandFinger;
static UEnum* EYvrXRHandFinger_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYvrXRHandFinger.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYvrXRHandFinger.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrXRInput_EYvrXRHandFinger, (UObject*)Z_Construct_UPackage__Script_YvrXRInput(), TEXT("EYvrXRHandFinger"));
	}
	return Z_Registration_Info_UEnum_EYvrXRHandFinger.OuterSingleton;
}
template<> YVRXRINPUT_API UEnum* StaticEnum<EYvrXRHandFinger>()
{
	return EYvrXRHandFinger_StaticEnum();
}
struct Z_Construct_UEnum_YvrXRInput_EYvrXRHandFinger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Index.Name", "EYvrXRHandFinger::Index" },
		{ "Middle.Name", "EYvrXRHandFinger::Middle" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
		{ "None.Name", "EYvrXRHandFinger::None" },
		{ "Pinky.Name", "EYvrXRHandFinger::Pinky" },
		{ "Ring.Name", "EYvrXRHandFinger::Ring" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYvrXRHandFinger::None", (int64)EYvrXRHandFinger::None },
		{ "EYvrXRHandFinger::Index", (int64)EYvrXRHandFinger::Index },
		{ "EYvrXRHandFinger::Middle", (int64)EYvrXRHandFinger::Middle },
		{ "EYvrXRHandFinger::Ring", (int64)EYvrXRHandFinger::Ring },
		{ "EYvrXRHandFinger::Pinky", (int64)EYvrXRHandFinger::Pinky },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrXRInput_EYvrXRHandFinger_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrXRInput,
	nullptr,
	"EYvrXRHandFinger",
	"EYvrXRHandFinger",
	Z_Construct_UEnum_YvrXRInput_EYvrXRHandFinger_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRInput_EYvrXRHandFinger_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRInput_EYvrXRHandFinger_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrXRInput_EYvrXRHandFinger_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrXRInput_EYvrXRHandFinger()
{
	if (!Z_Registration_Info_UEnum_EYvrXRHandFinger.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYvrXRHandFinger.InnerSingleton, Z_Construct_UEnum_YvrXRInput_EYvrXRHandFinger_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYvrXRHandFinger.InnerSingleton;
}
// End Enum EYvrXRHandFinger

// Begin Enum EYvrXRHandJoint
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYvrXRHandJoint;
static UEnum* EYvrXRHandJoint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYvrXRHandJoint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYvrXRHandJoint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint, (UObject*)Z_Construct_UPackage__Script_YvrXRInput(), TEXT("EYvrXRHandJoint"));
	}
	return Z_Registration_Info_UEnum_EYvrXRHandJoint.OuterSingleton;
}
template<> YVRXRINPUT_API UEnum* StaticEnum<EYvrXRHandJoint>()
{
	return EYvrXRHandJoint_StaticEnum();
}
struct Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HandJointMax.DisplayName", "Hand Joint Max" },
		{ "HandJointMax.Name", "EYvrXRHandJoint::HandJointMax" },
		{ "IndexDistal.DisplayName", "Index Distal" },
		{ "IndexDistal.Name", "EYvrXRHandJoint::IndexDistal" },
		{ "IndexIntermediate.DisplayName", "Index Intermediate" },
		{ "IndexIntermediate.Name", "EYvrXRHandJoint::IndexIntermediate" },
		{ "IndexMetacarpal.DisplayName", "Index Metacarpal" },
		{ "IndexMetacarpal.Name", "EYvrXRHandJoint::IndexMetacarpal" },
		{ "IndexProximal.DisplayName", "Index Proximal" },
		{ "IndexProximal.Name", "EYvrXRHandJoint::IndexProximal" },
		{ "IndexTip.DisplayName", "Index Tip" },
		{ "IndexTip.Name", "EYvrXRHandJoint::IndexTip" },
		{ "LittleDistal.DisplayName", "Little Distal" },
		{ "LittleDistal.Name", "EYvrXRHandJoint::LittleDistal" },
		{ "LittleIntermediate.DisplayName", "Little Intermediate" },
		{ "LittleIntermediate.Name", "EYvrXRHandJoint::LittleIntermediate" },
		{ "LittleMetacarpal.DisplayName", "Little Metacarpal" },
		{ "LittleMetacarpal.Name", "EYvrXRHandJoint::LittleMetacarpal" },
		{ "LittleProximal.DisplayName", "Little Proximal" },
		{ "LittleProximal.Name", "EYvrXRHandJoint::LittleProximal" },
		{ "LittleTip.DisplayName", "Little Tip" },
		{ "LittleTip.Name", "EYvrXRHandJoint::LittleTip" },
		{ "MiddleDistal.DisplayName", "Middle Distal" },
		{ "MiddleDistal.Name", "EYvrXRHandJoint::MiddleDistal" },
		{ "MiddleIntermediate.DisplayName", "Middle Intermediate" },
		{ "MiddleIntermediate.Name", "EYvrXRHandJoint::MiddleIntermediate" },
		{ "MiddleMetacarpal.DisplayName", "Middle Metacarpal" },
		{ "MiddleMetacarpal.Name", "EYvrXRHandJoint::MiddleMetacarpal" },
		{ "MiddleProximal.DisplayName", "Middle Proximal" },
		{ "MiddleProximal.Name", "EYvrXRHandJoint::MiddleProximal" },
		{ "MiddleTip.DisplayName", "Middle Tip" },
		{ "MiddleTip.Name", "EYvrXRHandJoint::MiddleTip" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
		{ "Palm.DisplayName", "Palm" },
		{ "Palm.Name", "EYvrXRHandJoint::Palm" },
		{ "RingDistal.DisplayName", "Ring Distal" },
		{ "RingDistal.Name", "EYvrXRHandJoint::RingDistal" },
		{ "RingIntermediate.DisplayName", "Ring Intermediate" },
		{ "RingIntermediate.Name", "EYvrXRHandJoint::RingIntermediate" },
		{ "RingMetacarpal.DisplayName", "Ring Metacarpal" },
		{ "RingMetacarpal.Name", "EYvrXRHandJoint::RingMetacarpal" },
		{ "RingProximal.DisplayName", "Ring Proximal" },
		{ "RingProximal.Name", "EYvrXRHandJoint::RingProximal" },
		{ "RingTip.DisplayName", "Ring Tip" },
		{ "RingTip.Name", "EYvrXRHandJoint::RingTip" },
		{ "ThumbDistal.DisplayName", "Thumb Distal" },
		{ "ThumbDistal.Name", "EYvrXRHandJoint::ThumbDistal" },
		{ "ThumbMetacarpal.DisplayName", "Thumb Metacarpal" },
		{ "ThumbMetacarpal.Name", "EYvrXRHandJoint::ThumbMetacarpal" },
		{ "ThumbProximal.DisplayName", "Thumb Proximal" },
		{ "ThumbProximal.Name", "EYvrXRHandJoint::ThumbProximal" },
		{ "ThumbTip.DisplayName", "Thumb Tip" },
		{ "ThumbTip.Name", "EYvrXRHandJoint::ThumbTip" },
		{ "Wrist.DisplayName", "Wrist" },
		{ "Wrist.Name", "EYvrXRHandJoint::Wrist" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYvrXRHandJoint::Palm", (int64)EYvrXRHandJoint::Palm },
		{ "EYvrXRHandJoint::Wrist", (int64)EYvrXRHandJoint::Wrist },
		{ "EYvrXRHandJoint::ThumbMetacarpal", (int64)EYvrXRHandJoint::ThumbMetacarpal },
		{ "EYvrXRHandJoint::ThumbProximal", (int64)EYvrXRHandJoint::ThumbProximal },
		{ "EYvrXRHandJoint::ThumbDistal", (int64)EYvrXRHandJoint::ThumbDistal },
		{ "EYvrXRHandJoint::ThumbTip", (int64)EYvrXRHandJoint::ThumbTip },
		{ "EYvrXRHandJoint::IndexMetacarpal", (int64)EYvrXRHandJoint::IndexMetacarpal },
		{ "EYvrXRHandJoint::IndexProximal", (int64)EYvrXRHandJoint::IndexProximal },
		{ "EYvrXRHandJoint::IndexIntermediate", (int64)EYvrXRHandJoint::IndexIntermediate },
		{ "EYvrXRHandJoint::IndexDistal", (int64)EYvrXRHandJoint::IndexDistal },
		{ "EYvrXRHandJoint::IndexTip", (int64)EYvrXRHandJoint::IndexTip },
		{ "EYvrXRHandJoint::MiddleMetacarpal", (int64)EYvrXRHandJoint::MiddleMetacarpal },
		{ "EYvrXRHandJoint::MiddleProximal", (int64)EYvrXRHandJoint::MiddleProximal },
		{ "EYvrXRHandJoint::MiddleIntermediate", (int64)EYvrXRHandJoint::MiddleIntermediate },
		{ "EYvrXRHandJoint::MiddleDistal", (int64)EYvrXRHandJoint::MiddleDistal },
		{ "EYvrXRHandJoint::MiddleTip", (int64)EYvrXRHandJoint::MiddleTip },
		{ "EYvrXRHandJoint::RingMetacarpal", (int64)EYvrXRHandJoint::RingMetacarpal },
		{ "EYvrXRHandJoint::RingProximal", (int64)EYvrXRHandJoint::RingProximal },
		{ "EYvrXRHandJoint::RingIntermediate", (int64)EYvrXRHandJoint::RingIntermediate },
		{ "EYvrXRHandJoint::RingDistal", (int64)EYvrXRHandJoint::RingDistal },
		{ "EYvrXRHandJoint::RingTip", (int64)EYvrXRHandJoint::RingTip },
		{ "EYvrXRHandJoint::LittleMetacarpal", (int64)EYvrXRHandJoint::LittleMetacarpal },
		{ "EYvrXRHandJoint::LittleProximal", (int64)EYvrXRHandJoint::LittleProximal },
		{ "EYvrXRHandJoint::LittleIntermediate", (int64)EYvrXRHandJoint::LittleIntermediate },
		{ "EYvrXRHandJoint::LittleDistal", (int64)EYvrXRHandJoint::LittleDistal },
		{ "EYvrXRHandJoint::LittleTip", (int64)EYvrXRHandJoint::LittleTip },
		{ "EYvrXRHandJoint::HandJointMax", (int64)EYvrXRHandJoint::HandJointMax },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrXRInput,
	nullptr,
	"EYvrXRHandJoint",
	"EYvrXRHandJoint",
	Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint()
{
	if (!Z_Registration_Info_UEnum_EYvrXRHandJoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYvrXRHandJoint.InnerSingleton, Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYvrXRHandJoint.InnerSingleton;
}
// End Enum EYvrXRHandJoint

// Begin Enum EYvrXRHandTrackingConfidence
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYvrXRHandTrackingConfidence;
static UEnum* EYvrXRHandTrackingConfidence_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYvrXRHandTrackingConfidence.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYvrXRHandTrackingConfidence.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrXRInput_EYvrXRHandTrackingConfidence, (UObject*)Z_Construct_UPackage__Script_YvrXRInput(), TEXT("EYvrXRHandTrackingConfidence"));
	}
	return Z_Registration_Info_UEnum_EYvrXRHandTrackingConfidence.OuterSingleton;
}
template<> YVRXRINPUT_API UEnum* StaticEnum<EYvrXRHandTrackingConfidence>()
{
	return EYvrXRHandTrackingConfidence_StaticEnum();
}
struct Z_Construct_UEnum_YvrXRInput_EYvrXRHandTrackingConfidence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.Name", "EYvrXRHandTrackingConfidence::High" },
		{ "Low.Name", "EYvrXRHandTrackingConfidence::Low" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYvrXRHandTrackingConfidence::Low", (int64)EYvrXRHandTrackingConfidence::Low },
		{ "EYvrXRHandTrackingConfidence::High", (int64)EYvrXRHandTrackingConfidence::High },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrXRInput_EYvrXRHandTrackingConfidence_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrXRInput,
	nullptr,
	"EYvrXRHandTrackingConfidence",
	"EYvrXRHandTrackingConfidence",
	Z_Construct_UEnum_YvrXRInput_EYvrXRHandTrackingConfidence_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRInput_EYvrXRHandTrackingConfidence_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRInput_EYvrXRHandTrackingConfidence_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrXRInput_EYvrXRHandTrackingConfidence_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrXRInput_EYvrXRHandTrackingConfidence()
{
	if (!Z_Registration_Info_UEnum_EYvrXRHandTrackingConfidence.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYvrXRHandTrackingConfidence.InnerSingleton, Z_Construct_UEnum_YvrXRInput_EYvrXRHandTrackingConfidence_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYvrXRHandTrackingConfidence.InnerSingleton;
}
// End Enum EYvrXRHandTrackingConfidence

// Begin Class UYvrXRInputFunctionLibrary Function GetBoneLocation
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics
{
	struct YvrXRInputFunctionLibrary_eventGetBoneLocation_Parms
	{
		EYvrXRHandType DeviceHand;
		EYvrXRHandJoint BoneId;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetBoneLocation_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetBoneLocation_Parms, BoneId), Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneId_MetaData), NewProp_BoneId_MetaData) }; // 2002049971
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetBoneLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_BoneId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_BoneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "GetBoneLocation", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::YvrXRInputFunctionLibrary_eventGetBoneLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::YvrXRInputFunctionLibrary_eventGetBoneLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execGetBoneLocation)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_GET_ENUM(EYvrXRHandJoint,Z_Param_BoneId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UYvrXRInputFunctionLibrary::GetBoneLocation(EYvrXRHandType(Z_Param_DeviceHand),EYvrXRHandJoint(Z_Param_BoneId));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function GetBoneLocation

// Begin Class UYvrXRInputFunctionLibrary Function GetBoneName
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics
{
	struct YvrXRInputFunctionLibrary_eventGetBoneName_Parms
	{
		EYvrXRHandJoint BoneId;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetBoneName_Parms, BoneId), Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint, METADATA_PARAMS(0, nullptr) }; // 2002049971
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetBoneName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics::NewProp_BoneId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics::NewProp_BoneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "GetBoneName", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics::YvrXRInputFunctionLibrary_eventGetBoneName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics::YvrXRInputFunctionLibrary_eventGetBoneName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execGetBoneName)
{
	P_GET_ENUM(EYvrXRHandJoint,Z_Param_BoneId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UYvrXRInputFunctionLibrary::GetBoneName(EYvrXRHandJoint(Z_Param_BoneId));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function GetBoneName

// Begin Class UYvrXRInputFunctionLibrary Function GetBoneRadii
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics
{
	struct YvrXRInputFunctionLibrary_eventGetBoneRadii_Parms
	{
		EYvrXRHandType DeviceHand;
		EYvrXRHandJoint BoneId;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetBoneRadii_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetBoneRadii_Parms, BoneId), Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneId_MetaData), NewProp_BoneId_MetaData) }; // 2002049971
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetBoneRadii_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_BoneId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_BoneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "GetBoneRadii", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::YvrXRInputFunctionLibrary_eventGetBoneRadii_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::YvrXRInputFunctionLibrary_eventGetBoneRadii_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execGetBoneRadii)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_GET_ENUM(EYvrXRHandJoint,Z_Param_BoneId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UYvrXRInputFunctionLibrary::GetBoneRadii(EYvrXRHandType(Z_Param_DeviceHand),EYvrXRHandJoint(Z_Param_BoneId));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function GetBoneRadii

// Begin Class UYvrXRInputFunctionLibrary Function GetBoneRotation
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics
{
	struct YvrXRInputFunctionLibrary_eventGetBoneRotation_Parms
	{
		EYvrXRHandType DeviceHand;
		EYvrXRHandJoint BoneId;
		FQuat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetBoneRotation_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetBoneRotation_Parms, BoneId), Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneId_MetaData), NewProp_BoneId_MetaData) }; // 2002049971
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetBoneRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "GetBoneRotation", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::YvrXRInputFunctionLibrary_eventGetBoneRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::YvrXRInputFunctionLibrary_eventGetBoneRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execGetBoneRotation)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_GET_ENUM(EYvrXRHandJoint,Z_Param_BoneId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuat*)Z_Param__Result=UYvrXRInputFunctionLibrary::GetBoneRotation(EYvrXRHandType(Z_Param_DeviceHand),EYvrXRHandJoint(Z_Param_BoneId));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function GetBoneRotation

// Begin Class UYvrXRInputFunctionLibrary Function GetFingerIsPinching
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics
{
	struct YvrXRInputFunctionLibrary_eventGetFingerIsPinching_Parms
	{
		EYvrXRHandType DeviceHand;
		EYvrXRHandFinger Finger;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Finger_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Finger;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetFingerIsPinching_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_Finger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetFingerIsPinching_Parms, Finger), Z_Construct_UEnum_YvrXRInput_EYvrXRHandFinger, METADATA_PARAMS(0, nullptr) }; // 2377337061
void Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRInputFunctionLibrary_eventGetFingerIsPinching_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRInputFunctionLibrary_eventGetFingerIsPinching_Parms), &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_Finger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_Finger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "GetFingerIsPinching", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::YvrXRInputFunctionLibrary_eventGetFingerIsPinching_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::YvrXRInputFunctionLibrary_eventGetFingerIsPinching_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execGetFingerIsPinching)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_GET_ENUM(EYvrXRHandFinger,Z_Param_Finger);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRInputFunctionLibrary::GetFingerIsPinching(EYvrXRHandType(Z_Param_DeviceHand),EYvrXRHandFinger(Z_Param_Finger));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function GetFingerIsPinching

// Begin Class UYvrXRInputFunctionLibrary Function GetFingerPinchStrength
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics
{
	struct YvrXRInputFunctionLibrary_eventGetFingerPinchStrength_Parms
	{
		EYvrXRHandType DeviceHand;
		EYvrXRHandFinger Finger;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Finger_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Finger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetFingerPinchStrength_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_Finger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetFingerPinchStrength_Parms, Finger), Z_Construct_UEnum_YvrXRInput_EYvrXRHandFinger, METADATA_PARAMS(0, nullptr) }; // 2377337061
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetFingerPinchStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_Finger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_Finger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "GetFingerPinchStrength", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::YvrXRInputFunctionLibrary_eventGetFingerPinchStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::YvrXRInputFunctionLibrary_eventGetFingerPinchStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execGetFingerPinchStrength)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_GET_ENUM(EYvrXRHandFinger,Z_Param_Finger);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UYvrXRInputFunctionLibrary::GetFingerPinchStrength(EYvrXRHandType(Z_Param_DeviceHand),EYvrXRHandFinger(Z_Param_Finger));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function GetFingerPinchStrength

// Begin Class UYvrXRInputFunctionLibrary Function GetHandScale
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics
{
	struct YvrXRInputFunctionLibrary_eventGetHandScale_Parms
	{
		EYvrXRHandType DeviceHand;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetHandScale_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetHandScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "GetHandScale", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics::YvrXRInputFunctionLibrary_eventGetHandScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics::YvrXRInputFunctionLibrary_eventGetHandScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execGetHandScale)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UYvrXRInputFunctionLibrary::GetHandScale(EYvrXRHandType(Z_Param_DeviceHand));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function GetHandScale

// Begin Class UYvrXRInputFunctionLibrary Function GetPointerPose
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics
{
	struct YvrXRInputFunctionLibrary_eventGetPointerPose_Parms
	{
		EYvrXRHandType DeviceHand;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetPointerPose_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetPointerPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "GetPointerPose", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics::YvrXRInputFunctionLibrary_eventGetPointerPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics::YvrXRInputFunctionLibrary_eventGetPointerPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execGetPointerPose)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UYvrXRInputFunctionLibrary::GetPointerPose(EYvrXRHandType(Z_Param_DeviceHand));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function GetPointerPose

// Begin Class UYvrXRInputFunctionLibrary Function GetTrackingConfidence
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics
{
	struct YvrXRInputFunctionLibrary_eventGetTrackingConfidence_Parms
	{
		EYvrXRHandType DeviceHand;
		EYvrXRHandTrackingConfidence ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetTrackingConfidence_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventGetTrackingConfidence_Parms, ReturnValue), Z_Construct_UEnum_YvrXRInput_EYvrXRHandTrackingConfidence, METADATA_PARAMS(0, nullptr) }; // 2119055426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "GetTrackingConfidence", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::YvrXRInputFunctionLibrary_eventGetTrackingConfidence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::YvrXRInputFunctionLibrary_eventGetTrackingConfidence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execGetTrackingConfidence)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EYvrXRHandTrackingConfidence*)Z_Param__Result=UYvrXRInputFunctionLibrary::GetTrackingConfidence(EYvrXRHandType(Z_Param_DeviceHand));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function GetTrackingConfidence

// Begin Class UYvrXRInputFunctionLibrary Function IsAimValid
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics
{
	struct YvrXRInputFunctionLibrary_eventIsAimValid_Parms
	{
		EYvrXRHandType DeviceHand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventIsAimValid_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
void Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRInputFunctionLibrary_eventIsAimValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRInputFunctionLibrary_eventIsAimValid_Parms), &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "IsAimValid", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::YvrXRInputFunctionLibrary_eventIsAimValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::YvrXRInputFunctionLibrary_eventIsAimValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execIsAimValid)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRInputFunctionLibrary::IsAimValid(EYvrXRHandType(Z_Param_DeviceHand));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function IsAimValid

// Begin Class UYvrXRInputFunctionLibrary Function IsBoneOrientationTracked
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics
{
	struct YvrXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms
	{
		EYvrXRHandType DeviceHand;
		EYvrXRHandJoint BoneId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms, BoneId), Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneId_MetaData), NewProp_BoneId_MetaData) }; // 2002049971
void Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms), &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_BoneId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_BoneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "IsBoneOrientationTracked", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::YvrXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::YvrXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execIsBoneOrientationTracked)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_GET_ENUM(EYvrXRHandJoint,Z_Param_BoneId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRInputFunctionLibrary::IsBoneOrientationTracked(EYvrXRHandType(Z_Param_DeviceHand),EYvrXRHandJoint(Z_Param_BoneId));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function IsBoneOrientationTracked

// Begin Class UYvrXRInputFunctionLibrary Function IsBoneOrientationValid
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics
{
	struct YvrXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms
	{
		EYvrXRHandType DeviceHand;
		EYvrXRHandJoint BoneId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms, BoneId), Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneId_MetaData), NewProp_BoneId_MetaData) }; // 2002049971
void Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms), &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_BoneId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_BoneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "IsBoneOrientationValid", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::YvrXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::YvrXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execIsBoneOrientationValid)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_GET_ENUM(EYvrXRHandJoint,Z_Param_BoneId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRInputFunctionLibrary::IsBoneOrientationValid(EYvrXRHandType(Z_Param_DeviceHand),EYvrXRHandJoint(Z_Param_BoneId));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function IsBoneOrientationValid

// Begin Class UYvrXRInputFunctionLibrary Function IsBonePositionTracked
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics
{
	struct YvrXRInputFunctionLibrary_eventIsBonePositionTracked_Parms
	{
		EYvrXRHandType DeviceHand;
		EYvrXRHandJoint BoneId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventIsBonePositionTracked_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventIsBonePositionTracked_Parms, BoneId), Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneId_MetaData), NewProp_BoneId_MetaData) }; // 2002049971
void Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRInputFunctionLibrary_eventIsBonePositionTracked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRInputFunctionLibrary_eventIsBonePositionTracked_Parms), &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_BoneId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_BoneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "IsBonePositionTracked", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::YvrXRInputFunctionLibrary_eventIsBonePositionTracked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::YvrXRInputFunctionLibrary_eventIsBonePositionTracked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execIsBonePositionTracked)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_GET_ENUM(EYvrXRHandJoint,Z_Param_BoneId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRInputFunctionLibrary::IsBonePositionTracked(EYvrXRHandType(Z_Param_DeviceHand),EYvrXRHandJoint(Z_Param_BoneId));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function IsBonePositionTracked

// Begin Class UYvrXRInputFunctionLibrary Function IsBonePositionValid
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics
{
	struct YvrXRInputFunctionLibrary_eventIsBonePositionValid_Parms
	{
		EYvrXRHandType DeviceHand;
		EYvrXRHandJoint BoneId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventIsBonePositionValid_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventIsBonePositionValid_Parms, BoneId), Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneId_MetaData), NewProp_BoneId_MetaData) }; // 2002049971
void Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRInputFunctionLibrary_eventIsBonePositionValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRInputFunctionLibrary_eventIsBonePositionValid_Parms), &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_BoneId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_BoneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "IsBonePositionValid", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::YvrXRInputFunctionLibrary_eventIsBonePositionValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::YvrXRInputFunctionLibrary_eventIsBonePositionValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execIsBonePositionValid)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_GET_ENUM(EYvrXRHandJoint,Z_Param_BoneId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRInputFunctionLibrary::IsBonePositionValid(EYvrXRHandType(Z_Param_DeviceHand),EYvrXRHandJoint(Z_Param_BoneId));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function IsBonePositionValid

// Begin Class UYvrXRInputFunctionLibrary Function IsComputed
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics
{
	struct YvrXRInputFunctionLibrary_eventIsComputed_Parms
	{
		EYvrXRHandType DeviceHand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventIsComputed_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
void Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRInputFunctionLibrary_eventIsComputed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRInputFunctionLibrary_eventIsComputed_Parms), &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "IsComputed", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::YvrXRInputFunctionLibrary_eventIsComputed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::YvrXRInputFunctionLibrary_eventIsComputed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execIsComputed)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRInputFunctionLibrary::IsComputed(EYvrXRHandType(Z_Param_DeviceHand));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function IsComputed

// Begin Class UYvrXRInputFunctionLibrary Function IsDominantHand
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics
{
	struct YvrXRInputFunctionLibrary_eventIsDominantHand_Parms
	{
		EYvrXRHandType DeviceHand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventIsDominantHand_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
void Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRInputFunctionLibrary_eventIsDominantHand_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRInputFunctionLibrary_eventIsDominantHand_Parms), &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "IsDominantHand", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::YvrXRInputFunctionLibrary_eventIsDominantHand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::YvrXRInputFunctionLibrary_eventIsDominantHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execIsDominantHand)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRInputFunctionLibrary::IsDominantHand(EYvrXRHandType(Z_Param_DeviceHand));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function IsDominantHand

// Begin Class UYvrXRInputFunctionLibrary Function IsHandTrackingEnabled
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled_Statics
{
	struct YvrXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms), &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "IsHandTrackingEnabled", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::YvrXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::YvrXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execIsHandTrackingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRInputFunctionLibrary::IsHandTrackingEnabled();
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function IsHandTrackingEnabled

// Begin Class UYvrXRInputFunctionLibrary Function IsMenuPressed
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics
{
	struct YvrXRInputFunctionLibrary_eventIsMenuPressed_Parms
	{
		EYvrXRHandType DeviceHand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventIsMenuPressed_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
void Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRInputFunctionLibrary_eventIsMenuPressed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRInputFunctionLibrary_eventIsMenuPressed_Parms), &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "IsMenuPressed", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::YvrXRInputFunctionLibrary_eventIsMenuPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::YvrXRInputFunctionLibrary_eventIsMenuPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execIsMenuPressed)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRInputFunctionLibrary::IsMenuPressed(EYvrXRHandType(Z_Param_DeviceHand));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function IsMenuPressed

// Begin Class UYvrXRInputFunctionLibrary Function IsSystemGesture
struct Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics
{
	struct YvrXRInputFunctionLibrary_eventIsSystemGesture_Parms
	{
		EYvrXRHandType DeviceHand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|HandTracking" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRInputFunctionLibrary_eventIsSystemGesture_Parms, DeviceHand), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceHand_MetaData), NewProp_DeviceHand_MetaData) }; // 4139484713
void Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRInputFunctionLibrary_eventIsSystemGesture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRInputFunctionLibrary_eventIsSystemGesture_Parms), &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::NewProp_DeviceHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::NewProp_DeviceHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRInputFunctionLibrary, nullptr, "IsSystemGesture", nullptr, nullptr, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::YvrXRInputFunctionLibrary_eventIsSystemGesture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::YvrXRInputFunctionLibrary_eventIsSystemGesture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRInputFunctionLibrary::execIsSystemGesture)
{
	P_GET_ENUM(EYvrXRHandType,Z_Param_DeviceHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRInputFunctionLibrary::IsSystemGesture(EYvrXRHandType(Z_Param_DeviceHand));
	P_NATIVE_END;
}
// End Class UYvrXRInputFunctionLibrary Function IsSystemGesture

// Begin Class UYvrXRInputFunctionLibrary
void UYvrXRInputFunctionLibrary::StaticRegisterNativesUYvrXRInputFunctionLibrary()
{
	UClass* Class = UYvrXRInputFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBoneLocation", &UYvrXRInputFunctionLibrary::execGetBoneLocation },
		{ "GetBoneName", &UYvrXRInputFunctionLibrary::execGetBoneName },
		{ "GetBoneRadii", &UYvrXRInputFunctionLibrary::execGetBoneRadii },
		{ "GetBoneRotation", &UYvrXRInputFunctionLibrary::execGetBoneRotation },
		{ "GetFingerIsPinching", &UYvrXRInputFunctionLibrary::execGetFingerIsPinching },
		{ "GetFingerPinchStrength", &UYvrXRInputFunctionLibrary::execGetFingerPinchStrength },
		{ "GetHandScale", &UYvrXRInputFunctionLibrary::execGetHandScale },
		{ "GetPointerPose", &UYvrXRInputFunctionLibrary::execGetPointerPose },
		{ "GetTrackingConfidence", &UYvrXRInputFunctionLibrary::execGetTrackingConfidence },
		{ "IsAimValid", &UYvrXRInputFunctionLibrary::execIsAimValid },
		{ "IsBoneOrientationTracked", &UYvrXRInputFunctionLibrary::execIsBoneOrientationTracked },
		{ "IsBoneOrientationValid", &UYvrXRInputFunctionLibrary::execIsBoneOrientationValid },
		{ "IsBonePositionTracked", &UYvrXRInputFunctionLibrary::execIsBonePositionTracked },
		{ "IsBonePositionValid", &UYvrXRInputFunctionLibrary::execIsBonePositionValid },
		{ "IsComputed", &UYvrXRInputFunctionLibrary::execIsComputed },
		{ "IsDominantHand", &UYvrXRInputFunctionLibrary::execIsDominantHand },
		{ "IsHandTrackingEnabled", &UYvrXRInputFunctionLibrary::execIsHandTrackingEnabled },
		{ "IsMenuPressed", &UYvrXRInputFunctionLibrary::execIsMenuPressed },
		{ "IsSystemGesture", &UYvrXRInputFunctionLibrary::execIsSystemGesture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrXRInputFunctionLibrary);
UClass* Z_Construct_UClass_UYvrXRInputFunctionLibrary_NoRegister()
{
	return UYvrXRInputFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UYvrXRInputFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "YvrXRInputFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/YvrXRInputFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneLocation, "GetBoneLocation" }, // 2080281491
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneName, "GetBoneName" }, // 1757525511
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRadii, "GetBoneRadii" }, // 2018769711
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetBoneRotation, "GetBoneRotation" }, // 3925862051
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerIsPinching, "GetFingerIsPinching" }, // 1635925261
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetFingerPinchStrength, "GetFingerPinchStrength" }, // 1486536248
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetHandScale, "GetHandScale" }, // 3121552540
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetPointerPose, "GetPointerPose" }, // 4112384045
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_GetTrackingConfidence, "GetTrackingConfidence" }, // 2510895158
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsAimValid, "IsAimValid" }, // 2991770897
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationTracked, "IsBoneOrientationTracked" }, // 1281624413
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBoneOrientationValid, "IsBoneOrientationValid" }, // 2009503028
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionTracked, "IsBonePositionTracked" }, // 1274214221
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsBonePositionValid, "IsBonePositionValid" }, // 1334003034
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsComputed, "IsComputed" }, // 2677966100
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsDominantHand, "IsDominantHand" }, // 476744877
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsHandTrackingEnabled, "IsHandTrackingEnabled" }, // 1133303831
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsMenuPressed, "IsMenuPressed" }, // 797032800
		{ &Z_Construct_UFunction_UYvrXRInputFunctionLibrary_IsSystemGesture, "IsSystemGesture" }, // 282833873
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrXRInputFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UYvrXRInputFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRInputFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrXRInputFunctionLibrary_Statics::ClassParams = {
	&UYvrXRInputFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRInputFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrXRInputFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrXRInputFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UYvrXRInputFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrXRInputFunctionLibrary.OuterSingleton, Z_Construct_UClass_UYvrXRInputFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrXRInputFunctionLibrary.OuterSingleton;
}
template<> YVRXRINPUT_API UClass* StaticClass<UYvrXRInputFunctionLibrary>()
{
	return UYvrXRInputFunctionLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrXRInputFunctionLibrary);
UYvrXRInputFunctionLibrary::~UYvrXRInputFunctionLibrary() {}
// End Class UYvrXRInputFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRInputFunctionLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EYvrXRHandType_StaticEnum, TEXT("EYvrXRHandType"), &Z_Registration_Info_UEnum_EYvrXRHandType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4139484713U) },
		{ EYvrXRHandFinger_StaticEnum, TEXT("EYvrXRHandFinger"), &Z_Registration_Info_UEnum_EYvrXRHandFinger, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2377337061U) },
		{ EYvrXRHandJoint_StaticEnum, TEXT("EYvrXRHandJoint"), &Z_Registration_Info_UEnum_EYvrXRHandJoint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2002049971U) },
		{ EYvrXRHandTrackingConfidence_StaticEnum, TEXT("EYvrXRHandTrackingConfidence"), &Z_Registration_Info_UEnum_EYvrXRHandTrackingConfidence, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2119055426U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYvrXRInputFunctionLibrary, UYvrXRInputFunctionLibrary::StaticClass, TEXT("UYvrXRInputFunctionLibrary"), &Z_Registration_Info_UClass_UYvrXRInputFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrXRInputFunctionLibrary), 535176940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRInputFunctionLibrary_h_2560884602(TEXT("/Script/YvrXRInput"),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRInputFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRInputFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRInputFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRInputFunctionLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
