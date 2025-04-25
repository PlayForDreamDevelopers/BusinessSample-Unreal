// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YvrXRInput/Public/YvrXRHandComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYvrXRHandComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent();
UPackage* Z_Construct_UPackage__Script_YvrXRInput();
YVRXRINPUT_API UClass* Z_Construct_UClass_UYvrXRHandComponent();
YVRXRINPUT_API UClass* Z_Construct_UClass_UYvrXRHandComponent_NoRegister();
YVRXRINPUT_API UEnum* Z_Construct_UEnum_YvrXRInput_EYvrConfidenceBehavior();
YVRXRINPUT_API UEnum* Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint();
YVRXRINPUT_API UEnum* Z_Construct_UEnum_YvrXRInput_EYvrXRHandType();
// End Cross Module References

// Begin Enum EYvrConfidenceBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYvrConfidenceBehavior;
static UEnum* EYvrConfidenceBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYvrConfidenceBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYvrConfidenceBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YvrXRInput_EYvrConfidenceBehavior, (UObject*)Z_Construct_UPackage__Script_YvrXRInput(), TEXT("EYvrConfidenceBehavior"));
	}
	return Z_Registration_Info_UEnum_EYvrConfidenceBehavior.OuterSingleton;
}
template<> YVRXRINPUT_API UEnum* StaticEnum<EYvrConfidenceBehavior>()
{
	return EYvrConfidenceBehavior_StaticEnum();
}
struct Z_Construct_UEnum_YvrXRInput_EYvrConfidenceBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideActor.Name", "EYvrConfidenceBehavior::HideActor" },
		{ "ModuleRelativePath", "Public/YvrXRHandComponent.h" },
		{ "None.Name", "EYvrConfidenceBehavior::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYvrConfidenceBehavior::None", (int64)EYvrConfidenceBehavior::None },
		{ "EYvrConfidenceBehavior::HideActor", (int64)EYvrConfidenceBehavior::HideActor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YvrXRInput_EYvrConfidenceBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YvrXRInput,
	nullptr,
	"EYvrConfidenceBehavior",
	"EYvrConfidenceBehavior",
	Z_Construct_UEnum_YvrXRInput_EYvrConfidenceBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRInput_EYvrConfidenceBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YvrXRInput_EYvrConfidenceBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YvrXRInput_EYvrConfidenceBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YvrXRInput_EYvrConfidenceBehavior()
{
	if (!Z_Registration_Info_UEnum_EYvrConfidenceBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYvrConfidenceBehavior.InnerSingleton, Z_Construct_UEnum_YvrXRInput_EYvrConfidenceBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYvrConfidenceBehavior.InnerSingleton;
}
// End Enum EYvrConfidenceBehavior

// Begin Class UYvrXRHandComponent
void UYvrXRHandComponent::StaticRegisterNativesUYvrXRHandComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrXRHandComponent);
UClass* Z_Construct_UClass_UYvrXRHandComponent_NoRegister()
{
	return UYvrXRHandComponent::StaticClass();
}
struct Z_Construct_UClass_UYvrXRHandComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "YvrXRHand" },
		{ "HideCategories", "Object Physics Object Mobility Trigger" },
		{ "IncludePath", "YvrXRHandComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YvrXRHandComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonType_MetaData[] = {
		{ "Category", "HandProperties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The hand skeleton that will be loaded */" },
#endif
		{ "ModuleRelativePath", "Public/YvrXRHandComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The hand skeleton that will be loaded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfidenceBehavior_MetaData[] = {
		{ "Category", "HandProperties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Behavior for when hand tracking loses high confidence tracking */" },
#endif
		{ "ModuleRelativePath", "Public/YvrXRHandComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Behavior for when hand tracking loses high confidence tracking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateHandScale_MetaData[] = {
		{ "Category", "HandProperties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether or not the hand scale should update based on values from the runtime to match the users hand scale */" },
#endif
		{ "ModuleRelativePath", "Public/YvrXRHandComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not the hand scale should update based on values from the runtime to match the users hand scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneNameMappings_MetaData[] = {
		{ "Category", "CustomSkeletalMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bone mapping for custom hand skeletal meshes */" },
#endif
		{ "ModuleRelativePath", "Public/YvrXRHandComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bone mapping for custom hand skeletal meshes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConfidenceBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConfidenceBehavior;
	static void NewProp_bUpdateHandScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateHandScale;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNameMappings_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneNameMappings_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneNameMappings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BoneNameMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrXRHandComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrXRHandComponent, SkeletonType), Z_Construct_UEnum_YvrXRInput_EYvrXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonType_MetaData), NewProp_SkeletonType_MetaData) }; // 4139484713
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_ConfidenceBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_ConfidenceBehavior = { "ConfidenceBehavior", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrXRHandComponent, ConfidenceBehavior), Z_Construct_UEnum_YvrXRInput_EYvrConfidenceBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfidenceBehavior_MetaData), NewProp_ConfidenceBehavior_MetaData) }; // 2824934501
void Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_bUpdateHandScale_SetBit(void* Obj)
{
	((UYvrXRHandComponent*)Obj)->bUpdateHandScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_bUpdateHandScale = { "bUpdateHandScale", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYvrXRHandComponent), &Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_bUpdateHandScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateHandScale_MetaData), NewProp_bUpdateHandScale_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_BoneNameMappings_ValueProp = { "BoneNameMappings", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp = { "BoneNameMappings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_YvrXRInput_EYvrXRHandJoint, METADATA_PARAMS(0, nullptr) }; // 2002049971
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_BoneNameMappings = { "BoneNameMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrXRHandComponent, BoneNameMappings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneNameMappings_MetaData), NewProp_BoneNameMappings_MetaData) }; // 2002049971
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYvrXRHandComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_SkeletonType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_SkeletonType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_ConfidenceBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_ConfidenceBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_bUpdateHandScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_BoneNameMappings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRHandComponent_Statics::NewProp_BoneNameMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRHandComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYvrXRHandComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPoseableMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRHandComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrXRHandComponent_Statics::ClassParams = {
	&UYvrXRHandComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UYvrXRHandComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRHandComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRHandComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrXRHandComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrXRHandComponent()
{
	if (!Z_Registration_Info_UClass_UYvrXRHandComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrXRHandComponent.OuterSingleton, Z_Construct_UClass_UYvrXRHandComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrXRHandComponent.OuterSingleton;
}
template<> YVRXRINPUT_API UClass* StaticClass<UYvrXRHandComponent>()
{
	return UYvrXRHandComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrXRHandComponent);
UYvrXRHandComponent::~UYvrXRHandComponent() {}
// End Class UYvrXRHandComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRHandComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EYvrConfidenceBehavior_StaticEnum, TEXT("EYvrConfidenceBehavior"), &Z_Registration_Info_UEnum_EYvrConfidenceBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2824934501U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYvrXRHandComponent, UYvrXRHandComponent::StaticClass, TEXT("UYvrXRHandComponent"), &Z_Registration_Info_UClass_UYvrXRHandComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrXRHandComponent), 1737627048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRHandComponent_h_367865658(TEXT("/Script/YvrXRInput"),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRHandComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRHandComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRHandComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRInput_Public_YvrXRHandComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
