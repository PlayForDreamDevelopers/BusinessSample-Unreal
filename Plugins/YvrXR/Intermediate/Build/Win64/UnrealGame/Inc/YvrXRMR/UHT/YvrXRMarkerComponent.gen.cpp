// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YvrXRMR/Public/YvrXRMarkerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYvrXRMarkerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_YvrXRMR();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrXRMarkerComponent();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrXRMarkerComponent_NoRegister();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrXRMarkerDelegates();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrXRMarkerDelegates_NoRegister();
YVRXRMR_API UFunction* Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature();
YVRXRMR_API UFunction* Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature();
YVRXRMR_API UFunction* Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature();
// End Cross Module References

// Begin Class UYvrXRMarkerDelegates
void UYvrXRMarkerDelegates::StaticRegisterNativesUYvrXRMarkerDelegates()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrXRMarkerDelegates);
UClass* Z_Construct_UClass_UYvrXRMarkerDelegates_NoRegister()
{
	return UYvrXRMarkerDelegates::StaticClass();
}
struct Z_Construct_UClass_UYvrXRMarkerDelegates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YvrXRMarkerComponent.h" },
		{ "ModuleRelativePath", "Public/YvrXRMarkerComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrXRMarkerDelegates>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UYvrXRMarkerDelegates_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRMR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRMarkerDelegates_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrXRMarkerDelegates_Statics::ClassParams = {
	&UYvrXRMarkerDelegates::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRMarkerDelegates_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrXRMarkerDelegates_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrXRMarkerDelegates()
{
	if (!Z_Registration_Info_UClass_UYvrXRMarkerDelegates.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrXRMarkerDelegates.OuterSingleton, Z_Construct_UClass_UYvrXRMarkerDelegates_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrXRMarkerDelegates.OuterSingleton;
}
template<> YVRXRMR_API UClass* StaticClass<UYvrXRMarkerDelegates>()
{
	return UYvrXRMarkerDelegates::StaticClass();
}
UYvrXRMarkerDelegates::UYvrXRMarkerDelegates(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrXRMarkerDelegates);
UYvrXRMarkerDelegates::~UYvrXRMarkerDelegates() {}
// End Class UYvrXRMarkerDelegates

// Begin Delegate FNewYvrMarkerDetected
struct Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics
{
	struct YvrXRMarkerComponent_eventNewYvrMarkerDetected_Parms
	{
		int32 MarkerId;
		FVector Position;
		FRotator Rotation;
		FVector2D Size;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YvrXRMarkerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MarkerId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::NewProp_MarkerId = { "MarkerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMarkerComponent_eventNewYvrMarkerDetected_Parms, MarkerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMarkerComponent_eventNewYvrMarkerDetected_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMarkerComponent_eventNewYvrMarkerDetected_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMarkerComponent_eventNewYvrMarkerDetected_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::NewProp_MarkerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMarkerComponent, nullptr, "NewYvrMarkerDetected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::YvrXRMarkerComponent_eventNewYvrMarkerDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00D30000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::YvrXRMarkerComponent_eventNewYvrMarkerDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UYvrXRMarkerComponent::FNewYvrMarkerDetected_DelegateWrapper(const FMulticastScriptDelegate& NewYvrMarkerDetected, int32 MarkerId, FVector const& Position, FRotator const& Rotation, FVector2D const& Size)
{
	struct YvrXRMarkerComponent_eventNewYvrMarkerDetected_Parms
	{
		int32 MarkerId;
		FVector Position;
		FRotator Rotation;
		FVector2D Size;
	};
	YvrXRMarkerComponent_eventNewYvrMarkerDetected_Parms Parms;
	Parms.MarkerId=MarkerId;
	Parms.Position=Position;
	Parms.Rotation=Rotation;
	Parms.Size=Size;
	NewYvrMarkerDetected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FNewYvrMarkerDetected

// Begin Delegate FYvrMarkerMoved
struct Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics
{
	struct YvrXRMarkerComponent_eventYvrMarkerMoved_Parms
	{
		int32 MarkerId;
		FVector Position;
		FRotator Rotation;
		FVector2D Size;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YvrXRMarkerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MarkerId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::NewProp_MarkerId = { "MarkerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMarkerComponent_eventYvrMarkerMoved_Parms, MarkerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMarkerComponent_eventYvrMarkerMoved_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMarkerComponent_eventYvrMarkerMoved_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMarkerComponent_eventYvrMarkerMoved_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::NewProp_MarkerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMarkerComponent, nullptr, "YvrMarkerMoved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::YvrXRMarkerComponent_eventYvrMarkerMoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00D30000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::YvrXRMarkerComponent_eventYvrMarkerMoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UYvrXRMarkerComponent::FYvrMarkerMoved_DelegateWrapper(const FMulticastScriptDelegate& YvrMarkerMoved, int32 MarkerId, FVector const& Position, FRotator const& Rotation, FVector2D const& Size)
{
	struct YvrXRMarkerComponent_eventYvrMarkerMoved_Parms
	{
		int32 MarkerId;
		FVector Position;
		FRotator Rotation;
		FVector2D Size;
	};
	YvrXRMarkerComponent_eventYvrMarkerMoved_Parms Parms;
	Parms.MarkerId=MarkerId;
	Parms.Position=Position;
	Parms.Rotation=Rotation;
	Parms.Size=Size;
	YvrMarkerMoved.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FYvrMarkerMoved

// Begin Delegate FYvrMarkerLost
struct Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature_Statics
{
	struct YvrXRMarkerComponent_eventYvrMarkerLost_Parms
	{
		int32 MarkerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YvrXRMarkerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MarkerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature_Statics::NewProp_MarkerId = { "MarkerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMarkerComponent_eventYvrMarkerLost_Parms, MarkerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature_Statics::NewProp_MarkerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMarkerComponent, nullptr, "YvrMarkerLost__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature_Statics::YvrXRMarkerComponent_eventYvrMarkerLost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature_Statics::YvrXRMarkerComponent_eventYvrMarkerLost_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UYvrXRMarkerComponent::FYvrMarkerLost_DelegateWrapper(const FMulticastScriptDelegate& YvrMarkerLost, int32 MarkerId)
{
	struct YvrXRMarkerComponent_eventYvrMarkerLost_Parms
	{
		int32 MarkerId;
	};
	YvrXRMarkerComponent_eventYvrMarkerLost_Parms Parms;
	Parms.MarkerId=MarkerId;
	YvrMarkerLost.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FYvrMarkerLost

// Begin Class UYvrXRMarkerComponent
void UYvrXRMarkerComponent::StaticRegisterNativesUYvrXRMarkerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrXRMarkerComponent);
UClass* Z_Construct_UClass_UYvrXRMarkerComponent_NoRegister()
{
	return UYvrXRMarkerComponent::StaticClass();
}
struct Z_Construct_UClass_UYvrXRMarkerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "YvrXRMarkerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YvrXRMarkerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewYvrMarkerDetected_MetaData[] = {
		{ "ModuleRelativePath", "Public/YvrXRMarkerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YvrMarkerMoved_MetaData[] = {
		{ "ModuleRelativePath", "Public/YvrXRMarkerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YvrMarkerLost_MetaData[] = {
		{ "ModuleRelativePath", "Public/YvrXRMarkerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NewYvrMarkerDetected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_YvrMarkerMoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_YvrMarkerLost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature, "NewYvrMarkerDetected__DelegateSignature" }, // 3496038025
		{ &Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature, "YvrMarkerLost__DelegateSignature" }, // 3297030739
		{ &Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature, "YvrMarkerMoved__DelegateSignature" }, // 1416000381
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrXRMarkerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrXRMarkerComponent_Statics::NewProp_NewYvrMarkerDetected = { "NewYvrMarkerDetected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrXRMarkerComponent, NewYvrMarkerDetected), Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_NewYvrMarkerDetected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewYvrMarkerDetected_MetaData), NewProp_NewYvrMarkerDetected_MetaData) }; // 3496038025
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrXRMarkerComponent_Statics::NewProp_YvrMarkerMoved = { "YvrMarkerMoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrXRMarkerComponent, YvrMarkerMoved), Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerMoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YvrMarkerMoved_MetaData), NewProp_YvrMarkerMoved_MetaData) }; // 1416000381
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrXRMarkerComponent_Statics::NewProp_YvrMarkerLost = { "YvrMarkerLost", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrXRMarkerComponent, YvrMarkerLost), Z_Construct_UDelegateFunction_UYvrXRMarkerComponent_YvrMarkerLost__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YvrMarkerLost_MetaData), NewProp_YvrMarkerLost_MetaData) }; // 3297030739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYvrXRMarkerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRMarkerComponent_Statics::NewProp_NewYvrMarkerDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRMarkerComponent_Statics::NewProp_YvrMarkerMoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrXRMarkerComponent_Statics::NewProp_YvrMarkerLost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRMarkerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYvrXRMarkerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRMR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRMarkerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrXRMarkerComponent_Statics::ClassParams = {
	&UYvrXRMarkerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UYvrXRMarkerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRMarkerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRMarkerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrXRMarkerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrXRMarkerComponent()
{
	if (!Z_Registration_Info_UClass_UYvrXRMarkerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrXRMarkerComponent.OuterSingleton, Z_Construct_UClass_UYvrXRMarkerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrXRMarkerComponent.OuterSingleton;
}
template<> YVRXRMR_API UClass* StaticClass<UYvrXRMarkerComponent>()
{
	return UYvrXRMarkerComponent::StaticClass();
}
UYvrXRMarkerComponent::UYvrXRMarkerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrXRMarkerComponent);
UYvrXRMarkerComponent::~UYvrXRMarkerComponent() {}
// End Class UYvrXRMarkerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYvrXRMarkerDelegates, UYvrXRMarkerDelegates::StaticClass, TEXT("UYvrXRMarkerDelegates"), &Z_Registration_Info_UClass_UYvrXRMarkerDelegates, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrXRMarkerDelegates), 3369869521U) },
		{ Z_Construct_UClass_UYvrXRMarkerComponent, UYvrXRMarkerComponent::StaticClass, TEXT("UYvrXRMarkerComponent"), &Z_Registration_Info_UClass_UYvrXRMarkerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrXRMarkerComponent), 3906337487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_3235026987(TEXT("/Script/YvrXRMR"),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMarkerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
