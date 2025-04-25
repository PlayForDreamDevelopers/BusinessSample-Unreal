// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YvrXRMR/Public/YvrXRAsyncAnchorAction.h"
#include "YvrXRMR/Public/YvrXRMRTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYvrXRAsyncAnchorAction() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_YvrXRMR();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrAnchorComponent_NoRegister();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_NoRegister();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_NoRegister();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_NoRegister();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_NoRegister();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_NoRegister();
YVRXRMR_API UEnum* Z_Construct_UEnum_YvrXRMR_EYvrResult();
YVRXRMR_API UEnum* Z_Construct_UEnum_YvrXRMR_EYvrSaveLocation();
YVRXRMR_API UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionFailure__DelegateSignature();
YVRXRMR_API UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature();
YVRXRMR_API UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionFailure__DelegateSignature();
YVRXRMR_API UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature();
YVRXRMR_API UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionFailure__DelegateSignature();
YVRXRMR_API UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature();
YVRXRMR_API UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionFailure__DelegateSignature();
YVRXRMR_API UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature();
YVRXRMR_API UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionFailure__DelegateSignature();
YVRXRMR_API UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature();
YVRXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FYvrAnchorLoadInfo();
YVRXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FYvrAnchorLoadResult();
// End Cross Module References

// Begin Delegate FYvrCreateAnchorEntityActionSuccess
struct Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature_Statics
{
	struct _Script_YvrXRMR_eventYvrCreateAnchorEntityActionSuccess_Parms
	{
		TEnumAsByte<EYvrResult> Result;
		UYvrAnchorComponent* AnchorEntityComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorEntityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorEntityComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YvrXRMR_eventYvrCreateAnchorEntityActionSuccess_Parms, Result), Z_Construct_UEnum_YvrXRMR_EYvrResult, METADATA_PARAMS(0, nullptr) }; // 2725477238
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorEntityComponent = { "AnchorEntityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YvrXRMR_eventYvrCreateAnchorEntityActionSuccess_Parms, AnchorEntityComponent), Z_Construct_UClass_UYvrAnchorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorEntityComponent_MetaData), NewProp_AnchorEntityComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorEntityComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_YvrXRMR, nullptr, "YvrCreateAnchorEntityActionSuccess__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrCreateAnchorEntityActionSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrCreateAnchorEntityActionSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FYvrCreateAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& YvrCreateAnchorEntityActionSuccess, EYvrResult Result, UYvrAnchorComponent* AnchorEntityComponent)
{
	struct _Script_YvrXRMR_eventYvrCreateAnchorEntityActionSuccess_Parms
	{
		TEnumAsByte<EYvrResult> Result;
		UYvrAnchorComponent* AnchorEntityComponent;
	};
	_Script_YvrXRMR_eventYvrCreateAnchorEntityActionSuccess_Parms Parms;
	Parms.Result=Result;
	Parms.AnchorEntityComponent=AnchorEntityComponent;
	YvrCreateAnchorEntityActionSuccess.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FYvrCreateAnchorEntityActionSuccess

// Begin Delegate FYvrCreateAnchorEntityActionFailure
struct Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionFailure__DelegateSignature_Statics
{
	struct _Script_YvrXRMR_eventYvrCreateAnchorEntityActionFailure_Parms
	{
		TEnumAsByte<EYvrResult> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YvrXRMR_eventYvrCreateAnchorEntityActionFailure_Parms, Result), Z_Construct_UEnum_YvrXRMR_EYvrResult, METADATA_PARAMS(0, nullptr) }; // 2725477238
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_YvrXRMR, nullptr, "YvrCreateAnchorEntityActionFailure__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionFailure__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrCreateAnchorEntityActionFailure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionFailure__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrCreateAnchorEntityActionFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionFailure__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FYvrCreateAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& YvrCreateAnchorEntityActionFailure, EYvrResult Result)
{
	struct _Script_YvrXRMR_eventYvrCreateAnchorEntityActionFailure_Parms
	{
		TEnumAsByte<EYvrResult> Result;
	};
	_Script_YvrXRMR_eventYvrCreateAnchorEntityActionFailure_Parms Parms;
	Parms.Result=Result;
	YvrCreateAnchorEntityActionFailure.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FYvrCreateAnchorEntityActionFailure

// Begin Delegate FYvrSaveAnchorEntityActionSuccess
struct Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature_Statics
{
	struct _Script_YvrXRMR_eventYvrSaveAnchorEntityActionSuccess_Parms
	{
		TEnumAsByte<EYvrResult> Result;
		UYvrAnchorComponent* AnchorEntityComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorEntityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorEntityComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YvrXRMR_eventYvrSaveAnchorEntityActionSuccess_Parms, Result), Z_Construct_UEnum_YvrXRMR_EYvrResult, METADATA_PARAMS(0, nullptr) }; // 2725477238
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorEntityComponent = { "AnchorEntityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YvrXRMR_eventYvrSaveAnchorEntityActionSuccess_Parms, AnchorEntityComponent), Z_Construct_UClass_UYvrAnchorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorEntityComponent_MetaData), NewProp_AnchorEntityComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorEntityComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_YvrXRMR, nullptr, "YvrSaveAnchorEntityActionSuccess__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrSaveAnchorEntityActionSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrSaveAnchorEntityActionSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FYvrSaveAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& YvrSaveAnchorEntityActionSuccess, EYvrResult Result, UYvrAnchorComponent* AnchorEntityComponent)
{
	struct _Script_YvrXRMR_eventYvrSaveAnchorEntityActionSuccess_Parms
	{
		TEnumAsByte<EYvrResult> Result;
		UYvrAnchorComponent* AnchorEntityComponent;
	};
	_Script_YvrXRMR_eventYvrSaveAnchorEntityActionSuccess_Parms Parms;
	Parms.Result=Result;
	Parms.AnchorEntityComponent=AnchorEntityComponent;
	YvrSaveAnchorEntityActionSuccess.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FYvrSaveAnchorEntityActionSuccess

// Begin Delegate FYvrSaveAnchorEntityActionFailure
struct Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionFailure__DelegateSignature_Statics
{
	struct _Script_YvrXRMR_eventYvrSaveAnchorEntityActionFailure_Parms
	{
		TEnumAsByte<EYvrResult> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YvrXRMR_eventYvrSaveAnchorEntityActionFailure_Parms, Result), Z_Construct_UEnum_YvrXRMR_EYvrResult, METADATA_PARAMS(0, nullptr) }; // 2725477238
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_YvrXRMR, nullptr, "YvrSaveAnchorEntityActionFailure__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionFailure__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrSaveAnchorEntityActionFailure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionFailure__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrSaveAnchorEntityActionFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionFailure__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FYvrSaveAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& YvrSaveAnchorEntityActionFailure, EYvrResult Result)
{
	struct _Script_YvrXRMR_eventYvrSaveAnchorEntityActionFailure_Parms
	{
		TEnumAsByte<EYvrResult> Result;
	};
	_Script_YvrXRMR_eventYvrSaveAnchorEntityActionFailure_Parms Parms;
	Parms.Result=Result;
	YvrSaveAnchorEntityActionFailure.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FYvrSaveAnchorEntityActionFailure

// Begin Delegate FYvrEraseAnchorEntityActionSuccess
struct Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature_Statics
{
	struct _Script_YvrXRMR_eventYvrEraseAnchorEntityActionSuccess_Parms
	{
		TEnumAsByte<EYvrResult> Result;
		UYvrAnchorComponent* AnchorEntityComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorEntityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorEntityComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YvrXRMR_eventYvrEraseAnchorEntityActionSuccess_Parms, Result), Z_Construct_UEnum_YvrXRMR_EYvrResult, METADATA_PARAMS(0, nullptr) }; // 2725477238
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorEntityComponent = { "AnchorEntityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YvrXRMR_eventYvrEraseAnchorEntityActionSuccess_Parms, AnchorEntityComponent), Z_Construct_UClass_UYvrAnchorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorEntityComponent_MetaData), NewProp_AnchorEntityComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorEntityComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_YvrXRMR, nullptr, "YvrEraseAnchorEntityActionSuccess__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrEraseAnchorEntityActionSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrEraseAnchorEntityActionSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FYvrEraseAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& YvrEraseAnchorEntityActionSuccess, EYvrResult Result, UYvrAnchorComponent* AnchorEntityComponent)
{
	struct _Script_YvrXRMR_eventYvrEraseAnchorEntityActionSuccess_Parms
	{
		TEnumAsByte<EYvrResult> Result;
		UYvrAnchorComponent* AnchorEntityComponent;
	};
	_Script_YvrXRMR_eventYvrEraseAnchorEntityActionSuccess_Parms Parms;
	Parms.Result=Result;
	Parms.AnchorEntityComponent=AnchorEntityComponent;
	YvrEraseAnchorEntityActionSuccess.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FYvrEraseAnchorEntityActionSuccess

// Begin Delegate FYvrEraseAnchorEntityActionFailure
struct Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionFailure__DelegateSignature_Statics
{
	struct _Script_YvrXRMR_eventYvrEraseAnchorEntityActionFailure_Parms
	{
		TEnumAsByte<EYvrResult> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YvrXRMR_eventYvrEraseAnchorEntityActionFailure_Parms, Result), Z_Construct_UEnum_YvrXRMR_EYvrResult, METADATA_PARAMS(0, nullptr) }; // 2725477238
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_YvrXRMR, nullptr, "YvrEraseAnchorEntityActionFailure__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionFailure__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrEraseAnchorEntityActionFailure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionFailure__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrEraseAnchorEntityActionFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionFailure__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FYvrEraseAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& YvrEraseAnchorEntityActionFailure, EYvrResult Result)
{
	struct _Script_YvrXRMR_eventYvrEraseAnchorEntityActionFailure_Parms
	{
		TEnumAsByte<EYvrResult> Result;
	};
	_Script_YvrXRMR_eventYvrEraseAnchorEntityActionFailure_Parms Parms;
	Parms.Result=Result;
	YvrEraseAnchorEntityActionFailure.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FYvrEraseAnchorEntityActionFailure

// Begin Delegate FYvrLoadAnchorEntityActionSuccess
struct Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics
{
	struct _Script_YvrXRMR_eventYvrLoadAnchorEntityActionSuccess_Parms
	{
		TEnumAsByte<EYvrResult> Result;
		TArray<FYvrAnchorLoadResult> AnchorLoadResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorLoadResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorLoadResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnchorLoadResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YvrXRMR_eventYvrLoadAnchorEntityActionSuccess_Parms, Result), Z_Construct_UEnum_YvrXRMR_EYvrResult, METADATA_PARAMS(0, nullptr) }; // 2725477238
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorLoadResults_Inner = { "AnchorLoadResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FYvrAnchorLoadResult, METADATA_PARAMS(0, nullptr) }; // 2704793911
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorLoadResults = { "AnchorLoadResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YvrXRMR_eventYvrLoadAnchorEntityActionSuccess_Parms, AnchorLoadResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorLoadResults_MetaData), NewProp_AnchorLoadResults_MetaData) }; // 2704793911
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorLoadResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics::NewProp_AnchorLoadResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_YvrXRMR, nullptr, "YvrLoadAnchorEntityActionSuccess__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrLoadAnchorEntityActionSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrLoadAnchorEntityActionSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FYvrLoadAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& YvrLoadAnchorEntityActionSuccess, EYvrResult Result, TArray<FYvrAnchorLoadResult> const& AnchorLoadResults)
{
	struct _Script_YvrXRMR_eventYvrLoadAnchorEntityActionSuccess_Parms
	{
		TEnumAsByte<EYvrResult> Result;
		TArray<FYvrAnchorLoadResult> AnchorLoadResults;
	};
	_Script_YvrXRMR_eventYvrLoadAnchorEntityActionSuccess_Parms Parms;
	Parms.Result=Result;
	Parms.AnchorLoadResults=AnchorLoadResults;
	YvrLoadAnchorEntityActionSuccess.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FYvrLoadAnchorEntityActionSuccess

// Begin Delegate FYvrLoadAnchorEntityActionFailure
struct Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionFailure__DelegateSignature_Statics
{
	struct _Script_YvrXRMR_eventYvrLoadAnchorEntityActionFailure_Parms
	{
		TEnumAsByte<EYvrResult> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YvrXRMR_eventYvrLoadAnchorEntityActionFailure_Parms, Result), Z_Construct_UEnum_YvrXRMR_EYvrResult, METADATA_PARAMS(0, nullptr) }; // 2725477238
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionFailure__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_YvrXRMR, nullptr, "YvrLoadAnchorEntityActionFailure__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionFailure__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionFailure__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrLoadAnchorEntityActionFailure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionFailure__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionFailure__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrLoadAnchorEntityActionFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionFailure__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionFailure__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FYvrLoadAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& YvrLoadAnchorEntityActionFailure, EYvrResult Result)
{
	struct _Script_YvrXRMR_eventYvrLoadAnchorEntityActionFailure_Parms
	{
		TEnumAsByte<EYvrResult> Result;
	};
	_Script_YvrXRMR_eventYvrLoadAnchorEntityActionFailure_Parms Parms;
	Parms.Result=Result;
	YvrLoadAnchorEntityActionFailure.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FYvrLoadAnchorEntityActionFailure

// Begin Delegate FYvrStartSpatialSceneCaptureActionSuccess
struct Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics
{
	struct _Script_YvrXRMR_eventYvrStartSpatialSceneCaptureActionSuccess_Parms
	{
		TEnumAsByte<EYvrResult> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YvrXRMR_eventYvrStartSpatialSceneCaptureActionSuccess_Parms, Result), Z_Construct_UEnum_YvrXRMR_EYvrResult, METADATA_PARAMS(0, nullptr) }; // 2725477238
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_YvrXRMR, nullptr, "YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrStartSpatialSceneCaptureActionSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrStartSpatialSceneCaptureActionSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FYvrStartSpatialSceneCaptureActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& YvrStartSpatialSceneCaptureActionSuccess, EYvrResult Result)
{
	struct _Script_YvrXRMR_eventYvrStartSpatialSceneCaptureActionSuccess_Parms
	{
		TEnumAsByte<EYvrResult> Result;
	};
	_Script_YvrXRMR_eventYvrStartSpatialSceneCaptureActionSuccess_Parms Parms;
	Parms.Result=Result;
	YvrStartSpatialSceneCaptureActionSuccess.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FYvrStartSpatialSceneCaptureActionSuccess

// Begin Delegate FYvrStartSpatialSceneCaptureActionFailure
struct Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics
{
	struct _Script_YvrXRMR_eventYvrStartSpatialSceneCaptureActionFailure_Parms
	{
		TEnumAsByte<EYvrResult> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_YvrXRMR_eventYvrStartSpatialSceneCaptureActionFailure_Parms, Result), Z_Construct_UEnum_YvrXRMR_EYvrResult, METADATA_PARAMS(0, nullptr) }; // 2725477238
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_YvrXRMR, nullptr, "YvrStartSpatialSceneCaptureActionFailure__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrStartSpatialSceneCaptureActionFailure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::_Script_YvrXRMR_eventYvrStartSpatialSceneCaptureActionFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionFailure__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionFailure__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FYvrStartSpatialSceneCaptureActionFailure_DelegateWrapper(const FMulticastScriptDelegate& YvrStartSpatialSceneCaptureActionFailure, EYvrResult Result)
{
	struct _Script_YvrXRMR_eventYvrStartSpatialSceneCaptureActionFailure_Parms
	{
		TEnumAsByte<EYvrResult> Result;
	};
	_Script_YvrXRMR_eventYvrStartSpatialSceneCaptureActionFailure_Parms Parms;
	Parms.Result=Result;
	YvrStartSpatialSceneCaptureActionFailure.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FYvrStartSpatialSceneCaptureActionFailure

// Begin Class UYvrCreateAnchorEntity_AsyncAction Function YvrXRCreateAnchorEntity_Async
struct Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics
{
	struct YvrCreateAnchorEntity_AsyncAction_eventYvrXRCreateAnchorEntity_Async_Parms
	{
		AActor* InBindingActor;
		FTransform InAnchorEntityTransform;
		float InTimeout;
		UYvrCreateAnchorEntity_AsyncAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAnchorEntityTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InBindingActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAnchorEntityTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTimeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::NewProp_InBindingActor = { "InBindingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrCreateAnchorEntity_AsyncAction_eventYvrXRCreateAnchorEntity_Async_Parms, InBindingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::NewProp_InAnchorEntityTransform = { "InAnchorEntityTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrCreateAnchorEntity_AsyncAction_eventYvrXRCreateAnchorEntity_Async_Parms, InAnchorEntityTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAnchorEntityTransform_MetaData), NewProp_InAnchorEntityTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::NewProp_InTimeout = { "InTimeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrCreateAnchorEntity_AsyncAction_eventYvrXRCreateAnchorEntity_Async_Parms, InTimeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrCreateAnchorEntity_AsyncAction_eventYvrXRCreateAnchorEntity_Async_Parms, ReturnValue), Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::NewProp_InBindingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::NewProp_InAnchorEntityTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::NewProp_InTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction, nullptr, "YvrXRCreateAnchorEntity_Async", nullptr, nullptr, Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::YvrCreateAnchorEntity_AsyncAction_eventYvrXRCreateAnchorEntity_Async_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::YvrCreateAnchorEntity_AsyncAction_eventYvrXRCreateAnchorEntity_Async_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrCreateAnchorEntity_AsyncAction::execYvrXRCreateAnchorEntity_Async)
{
	P_GET_OBJECT(AActor,Z_Param_InBindingActor);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InAnchorEntityTransform);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UYvrCreateAnchorEntity_AsyncAction**)Z_Param__Result=UYvrCreateAnchorEntity_AsyncAction::YvrXRCreateAnchorEntity_Async(Z_Param_InBindingActor,Z_Param_Out_InAnchorEntityTransform,Z_Param_InTimeout);
	P_NATIVE_END;
}
// End Class UYvrCreateAnchorEntity_AsyncAction Function YvrXRCreateAnchorEntity_Async

// Begin Class UYvrCreateAnchorEntity_AsyncAction
void UYvrCreateAnchorEntity_AsyncAction::StaticRegisterNativesUYvrCreateAnchorEntity_AsyncAction()
{
	UClass* Class = UYvrCreateAnchorEntity_AsyncAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "YvrXRCreateAnchorEntity_Async", &UYvrCreateAnchorEntity_AsyncAction::execYvrXRCreateAnchorEntity_Async },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrCreateAnchorEntity_AsyncAction);
UClass* Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_NoRegister()
{
	return UYvrCreateAnchorEntity_AsyncAction::StaticClass();
}
struct Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n/// Create Anchor Entity\n//////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "YvrXRAsyncAnchorAction.h" },
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create Anchor Entity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYvrCreateAnchorEntity_AsyncAction_YvrXRCreateAnchorEntity_Async, "YvrXRCreateAnchorEntity_Async" }, // 3998433862
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrCreateAnchorEntity_AsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrCreateAnchorEntity_AsyncAction, OnSuccess), Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3846526211
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrCreateAnchorEntity_AsyncAction, OnFailure), Z_Construct_UDelegateFunction_YvrXRMR_YvrCreateAnchorEntityActionFailure__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1937965753
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRMR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_Statics::ClassParams = {
	&UYvrCreateAnchorEntity_AsyncAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction()
{
	if (!Z_Registration_Info_UClass_UYvrCreateAnchorEntity_AsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrCreateAnchorEntity_AsyncAction.OuterSingleton, Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrCreateAnchorEntity_AsyncAction.OuterSingleton;
}
template<> YVRXRMR_API UClass* StaticClass<UYvrCreateAnchorEntity_AsyncAction>()
{
	return UYvrCreateAnchorEntity_AsyncAction::StaticClass();
}
UYvrCreateAnchorEntity_AsyncAction::UYvrCreateAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrCreateAnchorEntity_AsyncAction);
UYvrCreateAnchorEntity_AsyncAction::~UYvrCreateAnchorEntity_AsyncAction() {}
// End Class UYvrCreateAnchorEntity_AsyncAction

// Begin Class UYvrSaveAnchorEntity_AsyncAction Function YvrXRSaveAnchorEntity_Async
struct Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics
{
	struct YvrSaveAnchorEntity_AsyncAction_eventYvrXRSaveAnchorEntity_Async_Parms
	{
		AActor* InBindingActor;
		EYvrSaveLocation InSaveLocation;
		UYvrSaveAnchorEntity_AsyncAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CPP_Default_InSaveLocation", "SaveLocation_Local" },
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InBindingActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InSaveLocation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InSaveLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::NewProp_InBindingActor = { "InBindingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrSaveAnchorEntity_AsyncAction_eventYvrXRSaveAnchorEntity_Async_Parms, InBindingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::NewProp_InSaveLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::NewProp_InSaveLocation = { "InSaveLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrSaveAnchorEntity_AsyncAction_eventYvrXRSaveAnchorEntity_Async_Parms, InSaveLocation), Z_Construct_UEnum_YvrXRMR_EYvrSaveLocation, METADATA_PARAMS(0, nullptr) }; // 2045020738
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrSaveAnchorEntity_AsyncAction_eventYvrXRSaveAnchorEntity_Async_Parms, ReturnValue), Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::NewProp_InBindingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::NewProp_InSaveLocation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::NewProp_InSaveLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction, nullptr, "YvrXRSaveAnchorEntity_Async", nullptr, nullptr, Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::YvrSaveAnchorEntity_AsyncAction_eventYvrXRSaveAnchorEntity_Async_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::YvrSaveAnchorEntity_AsyncAction_eventYvrXRSaveAnchorEntity_Async_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrSaveAnchorEntity_AsyncAction::execYvrXRSaveAnchorEntity_Async)
{
	P_GET_OBJECT(AActor,Z_Param_InBindingActor);
	P_GET_ENUM(EYvrSaveLocation,Z_Param_InSaveLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UYvrSaveAnchorEntity_AsyncAction**)Z_Param__Result=UYvrSaveAnchorEntity_AsyncAction::YvrXRSaveAnchorEntity_Async(Z_Param_InBindingActor,EYvrSaveLocation(Z_Param_InSaveLocation));
	P_NATIVE_END;
}
// End Class UYvrSaveAnchorEntity_AsyncAction Function YvrXRSaveAnchorEntity_Async

// Begin Class UYvrSaveAnchorEntity_AsyncAction
void UYvrSaveAnchorEntity_AsyncAction::StaticRegisterNativesUYvrSaveAnchorEntity_AsyncAction()
{
	UClass* Class = UYvrSaveAnchorEntity_AsyncAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "YvrXRSaveAnchorEntity_Async", &UYvrSaveAnchorEntity_AsyncAction::execYvrXRSaveAnchorEntity_Async },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrSaveAnchorEntity_AsyncAction);
UClass* Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_NoRegister()
{
	return UYvrSaveAnchorEntity_AsyncAction::StaticClass();
}
struct Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n/// Save Anchor Entity\n//////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "YvrXRAsyncAnchorAction.h" },
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save Anchor Entity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYvrSaveAnchorEntity_AsyncAction_YvrXRSaveAnchorEntity_Async, "YvrXRSaveAnchorEntity_Async" }, // 1340154928
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrSaveAnchorEntity_AsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrSaveAnchorEntity_AsyncAction, OnSuccess), Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 824127829
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrSaveAnchorEntity_AsyncAction, OnFailure), Z_Construct_UDelegateFunction_YvrXRMR_YvrSaveAnchorEntityActionFailure__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2059904702
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRMR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_Statics::ClassParams = {
	&UYvrSaveAnchorEntity_AsyncAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction()
{
	if (!Z_Registration_Info_UClass_UYvrSaveAnchorEntity_AsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrSaveAnchorEntity_AsyncAction.OuterSingleton, Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrSaveAnchorEntity_AsyncAction.OuterSingleton;
}
template<> YVRXRMR_API UClass* StaticClass<UYvrSaveAnchorEntity_AsyncAction>()
{
	return UYvrSaveAnchorEntity_AsyncAction::StaticClass();
}
UYvrSaveAnchorEntity_AsyncAction::UYvrSaveAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrSaveAnchorEntity_AsyncAction);
UYvrSaveAnchorEntity_AsyncAction::~UYvrSaveAnchorEntity_AsyncAction() {}
// End Class UYvrSaveAnchorEntity_AsyncAction

// Begin Class UYvrEraseAnchorEntity_AsyncAction Function YvrXREraseAnchorEntity_Async
struct Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics
{
	struct YvrEraseAnchorEntity_AsyncAction_eventYvrXREraseAnchorEntity_Async_Parms
	{
		AActor* InBindingActor;
		EYvrSaveLocation InSaveLocation;
		UYvrEraseAnchorEntity_AsyncAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CPP_Default_InSaveLocation", "SaveLocation_Local" },
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InBindingActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InSaveLocation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InSaveLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::NewProp_InBindingActor = { "InBindingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrEraseAnchorEntity_AsyncAction_eventYvrXREraseAnchorEntity_Async_Parms, InBindingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::NewProp_InSaveLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::NewProp_InSaveLocation = { "InSaveLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrEraseAnchorEntity_AsyncAction_eventYvrXREraseAnchorEntity_Async_Parms, InSaveLocation), Z_Construct_UEnum_YvrXRMR_EYvrSaveLocation, METADATA_PARAMS(0, nullptr) }; // 2045020738
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrEraseAnchorEntity_AsyncAction_eventYvrXREraseAnchorEntity_Async_Parms, ReturnValue), Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::NewProp_InBindingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::NewProp_InSaveLocation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::NewProp_InSaveLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction, nullptr, "YvrXREraseAnchorEntity_Async", nullptr, nullptr, Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::YvrEraseAnchorEntity_AsyncAction_eventYvrXREraseAnchorEntity_Async_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::YvrEraseAnchorEntity_AsyncAction_eventYvrXREraseAnchorEntity_Async_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrEraseAnchorEntity_AsyncAction::execYvrXREraseAnchorEntity_Async)
{
	P_GET_OBJECT(AActor,Z_Param_InBindingActor);
	P_GET_ENUM(EYvrSaveLocation,Z_Param_InSaveLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UYvrEraseAnchorEntity_AsyncAction**)Z_Param__Result=UYvrEraseAnchorEntity_AsyncAction::YvrXREraseAnchorEntity_Async(Z_Param_InBindingActor,EYvrSaveLocation(Z_Param_InSaveLocation));
	P_NATIVE_END;
}
// End Class UYvrEraseAnchorEntity_AsyncAction Function YvrXREraseAnchorEntity_Async

// Begin Class UYvrEraseAnchorEntity_AsyncAction
void UYvrEraseAnchorEntity_AsyncAction::StaticRegisterNativesUYvrEraseAnchorEntity_AsyncAction()
{
	UClass* Class = UYvrEraseAnchorEntity_AsyncAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "YvrXREraseAnchorEntity_Async", &UYvrEraseAnchorEntity_AsyncAction::execYvrXREraseAnchorEntity_Async },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrEraseAnchorEntity_AsyncAction);
UClass* Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_NoRegister()
{
	return UYvrEraseAnchorEntity_AsyncAction::StaticClass();
}
struct Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n/// Erase Anchor Entity\n//////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "YvrXRAsyncAnchorAction.h" },
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Erase Anchor Entity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYvrEraseAnchorEntity_AsyncAction_YvrXREraseAnchorEntity_Async, "YvrXREraseAnchorEntity_Async" }, // 298069373
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrEraseAnchorEntity_AsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrEraseAnchorEntity_AsyncAction, OnSuccess), Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2232911124
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrEraseAnchorEntity_AsyncAction, OnFailure), Z_Construct_UDelegateFunction_YvrXRMR_YvrEraseAnchorEntityActionFailure__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3580557432
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRMR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_Statics::ClassParams = {
	&UYvrEraseAnchorEntity_AsyncAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction()
{
	if (!Z_Registration_Info_UClass_UYvrEraseAnchorEntity_AsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrEraseAnchorEntity_AsyncAction.OuterSingleton, Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrEraseAnchorEntity_AsyncAction.OuterSingleton;
}
template<> YVRXRMR_API UClass* StaticClass<UYvrEraseAnchorEntity_AsyncAction>()
{
	return UYvrEraseAnchorEntity_AsyncAction::StaticClass();
}
UYvrEraseAnchorEntity_AsyncAction::UYvrEraseAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrEraseAnchorEntity_AsyncAction);
UYvrEraseAnchorEntity_AsyncAction::~UYvrEraseAnchorEntity_AsyncAction() {}
// End Class UYvrEraseAnchorEntity_AsyncAction

// Begin Class UYvrLoadAnchorEntity_AsyncAction Function YvrXRLoadAnchorEntity_Async
struct Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async_Statics
{
	struct YvrLoadAnchorEntity_AsyncAction_eventYvrXRLoadAnchorEntity_Async_Parms
	{
		FYvrAnchorLoadInfo InLoadInfo;
		UYvrLoadAnchorEntity_AsyncAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLoadInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLoadInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async_Statics::NewProp_InLoadInfo = { "InLoadInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrLoadAnchorEntity_AsyncAction_eventYvrXRLoadAnchorEntity_Async_Parms, InLoadInfo), Z_Construct_UScriptStruct_FYvrAnchorLoadInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLoadInfo_MetaData), NewProp_InLoadInfo_MetaData) }; // 2679819613
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrLoadAnchorEntity_AsyncAction_eventYvrXRLoadAnchorEntity_Async_Parms, ReturnValue), Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async_Statics::NewProp_InLoadInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction, nullptr, "YvrXRLoadAnchorEntity_Async", nullptr, nullptr, Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async_Statics::YvrLoadAnchorEntity_AsyncAction_eventYvrXRLoadAnchorEntity_Async_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async_Statics::YvrLoadAnchorEntity_AsyncAction_eventYvrXRLoadAnchorEntity_Async_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrLoadAnchorEntity_AsyncAction::execYvrXRLoadAnchorEntity_Async)
{
	P_GET_STRUCT_REF(FYvrAnchorLoadInfo,Z_Param_Out_InLoadInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UYvrLoadAnchorEntity_AsyncAction**)Z_Param__Result=UYvrLoadAnchorEntity_AsyncAction::YvrXRLoadAnchorEntity_Async(Z_Param_Out_InLoadInfo);
	P_NATIVE_END;
}
// End Class UYvrLoadAnchorEntity_AsyncAction Function YvrXRLoadAnchorEntity_Async

// Begin Class UYvrLoadAnchorEntity_AsyncAction
void UYvrLoadAnchorEntity_AsyncAction::StaticRegisterNativesUYvrLoadAnchorEntity_AsyncAction()
{
	UClass* Class = UYvrLoadAnchorEntity_AsyncAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "YvrXRLoadAnchorEntity_Async", &UYvrLoadAnchorEntity_AsyncAction::execYvrXRLoadAnchorEntity_Async },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrLoadAnchorEntity_AsyncAction);
UClass* Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_NoRegister()
{
	return UYvrLoadAnchorEntity_AsyncAction::StaticClass();
}
struct Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n/// Load Anchor Entity\n//////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "YvrXRAsyncAnchorAction.h" },
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load Anchor Entity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYvrLoadAnchorEntity_AsyncAction_YvrXRLoadAnchorEntity_Async, "YvrXRLoadAnchorEntity_Async" }, // 2006785662
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrLoadAnchorEntity_AsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrLoadAnchorEntity_AsyncAction, OnSuccess), Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1114394433
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrLoadAnchorEntity_AsyncAction, OnFailure), Z_Construct_UDelegateFunction_YvrXRMR_YvrLoadAnchorEntityActionFailure__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3728475752
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRMR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_Statics::ClassParams = {
	&UYvrLoadAnchorEntity_AsyncAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction()
{
	if (!Z_Registration_Info_UClass_UYvrLoadAnchorEntity_AsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrLoadAnchorEntity_AsyncAction.OuterSingleton, Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrLoadAnchorEntity_AsyncAction.OuterSingleton;
}
template<> YVRXRMR_API UClass* StaticClass<UYvrLoadAnchorEntity_AsyncAction>()
{
	return UYvrLoadAnchorEntity_AsyncAction::StaticClass();
}
UYvrLoadAnchorEntity_AsyncAction::UYvrLoadAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrLoadAnchorEntity_AsyncAction);
UYvrLoadAnchorEntity_AsyncAction::~UYvrLoadAnchorEntity_AsyncAction() {}
// End Class UYvrLoadAnchorEntity_AsyncAction

// Begin Class UYvrStartSpatialSceneCapture_AsyncAction Function YvrXRStartSpatialSceneCapture_Async
struct Z_Construct_UFunction_UYvrStartSpatialSceneCapture_AsyncAction_YvrXRStartSpatialSceneCapture_Async_Statics
{
	struct YvrStartSpatialSceneCapture_AsyncAction_eventYvrXRStartSpatialSceneCapture_Async_Parms
	{
		UYvrStartSpatialSceneCapture_AsyncAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrStartSpatialSceneCapture_AsyncAction_YvrXRStartSpatialSceneCapture_Async_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrStartSpatialSceneCapture_AsyncAction_eventYvrXRStartSpatialSceneCapture_Async_Parms, ReturnValue), Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrStartSpatialSceneCapture_AsyncAction_YvrXRStartSpatialSceneCapture_Async_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrStartSpatialSceneCapture_AsyncAction_YvrXRStartSpatialSceneCapture_Async_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrStartSpatialSceneCapture_AsyncAction_YvrXRStartSpatialSceneCapture_Async_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrStartSpatialSceneCapture_AsyncAction_YvrXRStartSpatialSceneCapture_Async_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction, nullptr, "YvrXRStartSpatialSceneCapture_Async", nullptr, nullptr, Z_Construct_UFunction_UYvrStartSpatialSceneCapture_AsyncAction_YvrXRStartSpatialSceneCapture_Async_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrStartSpatialSceneCapture_AsyncAction_YvrXRStartSpatialSceneCapture_Async_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrStartSpatialSceneCapture_AsyncAction_YvrXRStartSpatialSceneCapture_Async_Statics::YvrStartSpatialSceneCapture_AsyncAction_eventYvrXRStartSpatialSceneCapture_Async_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrStartSpatialSceneCapture_AsyncAction_YvrXRStartSpatialSceneCapture_Async_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrStartSpatialSceneCapture_AsyncAction_YvrXRStartSpatialSceneCapture_Async_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrStartSpatialSceneCapture_AsyncAction_YvrXRStartSpatialSceneCapture_Async_Statics::YvrStartSpatialSceneCapture_AsyncAction_eventYvrXRStartSpatialSceneCapture_Async_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrStartSpatialSceneCapture_AsyncAction_YvrXRStartSpatialSceneCapture_Async()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrStartSpatialSceneCapture_AsyncAction_YvrXRStartSpatialSceneCapture_Async_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrStartSpatialSceneCapture_AsyncAction::execYvrXRStartSpatialSceneCapture_Async)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UYvrStartSpatialSceneCapture_AsyncAction**)Z_Param__Result=UYvrStartSpatialSceneCapture_AsyncAction::YvrXRStartSpatialSceneCapture_Async();
	P_NATIVE_END;
}
// End Class UYvrStartSpatialSceneCapture_AsyncAction Function YvrXRStartSpatialSceneCapture_Async

// Begin Class UYvrStartSpatialSceneCapture_AsyncAction
void UYvrStartSpatialSceneCapture_AsyncAction::StaticRegisterNativesUYvrStartSpatialSceneCapture_AsyncAction()
{
	UClass* Class = UYvrStartSpatialSceneCapture_AsyncAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "YvrXRStartSpatialSceneCapture_Async", &UYvrStartSpatialSceneCapture_AsyncAction::execYvrXRStartSpatialSceneCapture_Async },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrStartSpatialSceneCapture_AsyncAction);
UClass* Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_NoRegister()
{
	return UYvrStartSpatialSceneCapture_AsyncAction::StaticClass();
}
struct Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n/// Start Spatial Scene Capture\n//////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "YvrXRAsyncAnchorAction.h" },
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start Spatial Scene Capture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/YvrXRAsyncAnchorAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYvrStartSpatialSceneCapture_AsyncAction_YvrXRStartSpatialSceneCapture_Async, "YvrXRStartSpatialSceneCapture_Async" }, // 8850353
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrStartSpatialSceneCapture_AsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrStartSpatialSceneCapture_AsyncAction, OnSuccess), Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 272516887
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrStartSpatialSceneCapture_AsyncAction, OnFailure), Z_Construct_UDelegateFunction_YvrXRMR_YvrStartSpatialSceneCaptureActionFailure__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 112895313
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRMR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_Statics::ClassParams = {
	&UYvrStartSpatialSceneCapture_AsyncAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction()
{
	if (!Z_Registration_Info_UClass_UYvrStartSpatialSceneCapture_AsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrStartSpatialSceneCapture_AsyncAction.OuterSingleton, Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrStartSpatialSceneCapture_AsyncAction.OuterSingleton;
}
template<> YVRXRMR_API UClass* StaticClass<UYvrStartSpatialSceneCapture_AsyncAction>()
{
	return UYvrStartSpatialSceneCapture_AsyncAction::StaticClass();
}
UYvrStartSpatialSceneCapture_AsyncAction::UYvrStartSpatialSceneCapture_AsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrStartSpatialSceneCapture_AsyncAction);
UYvrStartSpatialSceneCapture_AsyncAction::~UYvrStartSpatialSceneCapture_AsyncAction() {}
// End Class UYvrStartSpatialSceneCapture_AsyncAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYvrCreateAnchorEntity_AsyncAction, UYvrCreateAnchorEntity_AsyncAction::StaticClass, TEXT("UYvrCreateAnchorEntity_AsyncAction"), &Z_Registration_Info_UClass_UYvrCreateAnchorEntity_AsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrCreateAnchorEntity_AsyncAction), 974427776U) },
		{ Z_Construct_UClass_UYvrSaveAnchorEntity_AsyncAction, UYvrSaveAnchorEntity_AsyncAction::StaticClass, TEXT("UYvrSaveAnchorEntity_AsyncAction"), &Z_Registration_Info_UClass_UYvrSaveAnchorEntity_AsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrSaveAnchorEntity_AsyncAction), 3688157079U) },
		{ Z_Construct_UClass_UYvrEraseAnchorEntity_AsyncAction, UYvrEraseAnchorEntity_AsyncAction::StaticClass, TEXT("UYvrEraseAnchorEntity_AsyncAction"), &Z_Registration_Info_UClass_UYvrEraseAnchorEntity_AsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrEraseAnchorEntity_AsyncAction), 1377023081U) },
		{ Z_Construct_UClass_UYvrLoadAnchorEntity_AsyncAction, UYvrLoadAnchorEntity_AsyncAction::StaticClass, TEXT("UYvrLoadAnchorEntity_AsyncAction"), &Z_Registration_Info_UClass_UYvrLoadAnchorEntity_AsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrLoadAnchorEntity_AsyncAction), 2366163613U) },
		{ Z_Construct_UClass_UYvrStartSpatialSceneCapture_AsyncAction, UYvrStartSpatialSceneCapture_AsyncAction::StaticClass, TEXT("UYvrStartSpatialSceneCapture_AsyncAction"), &Z_Registration_Info_UClass_UYvrStartSpatialSceneCapture_AsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrStartSpatialSceneCapture_AsyncAction), 2793760871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_1500219356(TEXT("/Script/YvrXRMR"),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAsyncAnchorAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
