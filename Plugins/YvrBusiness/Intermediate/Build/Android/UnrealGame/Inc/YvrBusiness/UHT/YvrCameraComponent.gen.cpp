// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/YvrCameraComponent.h"
#include "Public/YvrBusinessBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYvrCameraComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_YvrBusiness();
YVRBUSINESS_API UClass* Z_Construct_UClass_UYvrBusinessDelegates();
YVRBUSINESS_API UClass* Z_Construct_UClass_UYvrBusinessDelegates_NoRegister();
YVRBUSINESS_API UClass* Z_Construct_UClass_UYvrCameraComponent();
YVRBUSINESS_API UClass* Z_Construct_UClass_UYvrCameraComponent_NoRegister();
YVRBUSINESS_API UFunction* Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature();
YVRBUSINESS_API UScriptStruct* Z_Construct_UScriptStruct_FVSTCameraFrameItem();
// End Cross Module References

// Begin Class UYvrBusinessDelegates
void UYvrBusinessDelegates::StaticRegisterNativesUYvrBusinessDelegates()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrBusinessDelegates);
UClass* Z_Construct_UClass_UYvrBusinessDelegates_NoRegister()
{
	return UYvrBusinessDelegates::StaticClass();
}
struct Z_Construct_UClass_UYvrBusinessDelegates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YvrCameraComponent.h" },
		{ "ModuleRelativePath", "Public/YvrCameraComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrBusinessDelegates>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UYvrBusinessDelegates_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrBusiness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrBusinessDelegates_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrBusinessDelegates_Statics::ClassParams = {
	&UYvrBusinessDelegates::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrBusinessDelegates_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrBusinessDelegates_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrBusinessDelegates()
{
	if (!Z_Registration_Info_UClass_UYvrBusinessDelegates.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrBusinessDelegates.OuterSingleton, Z_Construct_UClass_UYvrBusinessDelegates_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrBusinessDelegates.OuterSingleton;
}
template<> YVRBUSINESS_API UClass* StaticClass<UYvrBusinessDelegates>()
{
	return UYvrBusinessDelegates::StaticClass();
}
UYvrBusinessDelegates::UYvrBusinessDelegates(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrBusinessDelegates);
UYvrBusinessDelegates::~UYvrBusinessDelegates() {}
// End Class UYvrBusinessDelegates

// Begin Delegate FCameraFrameDelegate
struct Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature_Statics
{
	struct YvrCameraComponent_eventCameraFrameDelegate_Parms
	{
		FVSTCameraFrameItem Frame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YvrCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrCameraComponent_eventCameraFrameDelegate_Parms, Frame), Z_Construct_UScriptStruct_FVSTCameraFrameItem, METADATA_PARAMS(0, nullptr) }; // 1914381463
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature_Statics::NewProp_Frame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrCameraComponent, nullptr, "CameraFrameDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature_Statics::YvrCameraComponent_eventCameraFrameDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature_Statics::YvrCameraComponent_eventCameraFrameDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UYvrCameraComponent::FCameraFrameDelegate_DelegateWrapper(const FMulticastScriptDelegate& CameraFrameDelegate, FVSTCameraFrameItem Frame)
{
	struct YvrCameraComponent_eventCameraFrameDelegate_Parms
	{
		FVSTCameraFrameItem Frame;
	};
	YvrCameraComponent_eventCameraFrameDelegate_Parms Parms;
	Parms.Frame=Frame;
	CameraFrameDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCameraFrameDelegate

// Begin Class UYvrCameraComponent
void UYvrCameraComponent::StaticRegisterNativesUYvrCameraComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrCameraComponent);
UClass* Z_Construct_UClass_UYvrCameraComponent_NoRegister()
{
	return UYvrCameraComponent::StaticClass();
}
struct Z_Construct_UClass_UYvrCameraComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "YvrCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YvrCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraFrameDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/YvrCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CameraFrameDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature, "CameraFrameDelegate__DelegateSignature" }, // 1480006010
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrCameraComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrCameraComponent_Statics::NewProp_CameraFrameDelegate = { "CameraFrameDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrCameraComponent, CameraFrameDelegate), Z_Construct_UDelegateFunction_UYvrCameraComponent_CameraFrameDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraFrameDelegate_MetaData), NewProp_CameraFrameDelegate_MetaData) }; // 1480006010
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYvrCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrCameraComponent_Statics::NewProp_CameraFrameDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrCameraComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYvrCameraComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrBusiness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrCameraComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrCameraComponent_Statics::ClassParams = {
	&UYvrCameraComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UYvrCameraComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UYvrCameraComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrCameraComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrCameraComponent()
{
	if (!Z_Registration_Info_UClass_UYvrCameraComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrCameraComponent.OuterSingleton, Z_Construct_UClass_UYvrCameraComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrCameraComponent.OuterSingleton;
}
template<> YVRBUSINESS_API UClass* StaticClass<UYvrCameraComponent>()
{
	return UYvrCameraComponent::StaticClass();
}
UYvrCameraComponent::UYvrCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrCameraComponent);
UYvrCameraComponent::~UYvrCameraComponent() {}
// End Class UYvrCameraComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYvrBusinessDelegates, UYvrBusinessDelegates::StaticClass, TEXT("UYvrBusinessDelegates"), &Z_Registration_Info_UClass_UYvrBusinessDelegates, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrBusinessDelegates), 4224691938U) },
		{ Z_Construct_UClass_UYvrCameraComponent, UYvrCameraComponent::StaticClass, TEXT("UYvrCameraComponent"), &Z_Registration_Info_UClass_UYvrCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrCameraComponent), 1394784654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_1978647986(TEXT("/Script/YvrBusiness"),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrBusiness_Source_Public_YvrCameraComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
