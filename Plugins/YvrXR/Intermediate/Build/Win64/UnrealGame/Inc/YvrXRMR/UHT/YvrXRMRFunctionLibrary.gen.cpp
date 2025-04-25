// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YvrXRMR/Public/YvrXRMRFunctionLibrary.h"
#include "YvrXRMR/Public/YvrXRMRTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYvrXRMRFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_YvrXRMR();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrAnchorComponent_NoRegister();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrXRMRFunctionLibrary();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrXRMRFunctionLibrary_NoRegister();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrXRSpaceMeshComponent_NoRegister();
YVRXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FYvrAnchor();
YVRXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FYvrAnchorLoadResult();
YVRXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FYvrAnchorUUID();
// End Cross Module References

// Begin Class UYvrXRMRFunctionLibrary Function YvrXRCreateMeshDetector
struct Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics
{
	struct YvrXRMRFunctionLibrary_eventYvrXRCreateMeshDetector_Parms
	{
		UYvrXRSpaceMeshComponent* SpaceMeshComponent;
		UYvrXRSpaceMeshComponent* SpacePlaneComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpacePlaneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpaceMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpacePlaneComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::NewProp_SpaceMeshComponent = { "SpaceMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRCreateMeshDetector_Parms, SpaceMeshComponent), Z_Construct_UClass_UYvrXRSpaceMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceMeshComponent_MetaData), NewProp_SpaceMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::NewProp_SpacePlaneComponent = { "SpacePlaneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRCreateMeshDetector_Parms, SpacePlaneComponent), Z_Construct_UClass_UYvrXRSpaceMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpacePlaneComponent_MetaData), NewProp_SpacePlaneComponent_MetaData) };
void Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRMRFunctionLibrary_eventYvrXRCreateMeshDetector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRMRFunctionLibrary_eventYvrXRCreateMeshDetector_Parms), &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::NewProp_SpaceMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::NewProp_SpacePlaneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMRFunctionLibrary, nullptr, "YvrXRCreateMeshDetector", nullptr, nullptr, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::YvrXRMRFunctionLibrary_eventYvrXRCreateMeshDetector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::YvrXRMRFunctionLibrary_eventYvrXRCreateMeshDetector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRMRFunctionLibrary::execYvrXRCreateMeshDetector)
{
	P_GET_OBJECT(UYvrXRSpaceMeshComponent,Z_Param_SpaceMeshComponent);
	P_GET_OBJECT(UYvrXRSpaceMeshComponent,Z_Param_SpacePlaneComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRMRFunctionLibrary::YvrXRCreateMeshDetector(Z_Param_SpaceMeshComponent,Z_Param_SpacePlaneComponent);
	P_NATIVE_END;
}
// End Class UYvrXRMRFunctionLibrary Function YvrXRCreateMeshDetector

// Begin Class UYvrXRMRFunctionLibrary Function YvrXRDestroyMeshDetector
struct Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics
{
	struct YvrXRMRFunctionLibrary_eventYvrXRDestroyMeshDetector_Parms
	{
		UYvrXRSpaceMeshComponent* SpaceMeshComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpaceMeshComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics::NewProp_SpaceMeshComponent = { "SpaceMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRDestroyMeshDetector_Parms, SpaceMeshComponent), Z_Construct_UClass_UYvrXRSpaceMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceMeshComponent_MetaData), NewProp_SpaceMeshComponent_MetaData) };
void Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRMRFunctionLibrary_eventYvrXRDestroyMeshDetector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRMRFunctionLibrary_eventYvrXRDestroyMeshDetector_Parms), &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics::NewProp_SpaceMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMRFunctionLibrary, nullptr, "YvrXRDestroyMeshDetector", nullptr, nullptr, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics::YvrXRMRFunctionLibrary_eventYvrXRDestroyMeshDetector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics::YvrXRMRFunctionLibrary_eventYvrXRDestroyMeshDetector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRMRFunctionLibrary::execYvrXRDestroyMeshDetector)
{
	P_GET_OBJECT(UYvrXRSpaceMeshComponent,Z_Param_SpaceMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRMRFunctionLibrary::YvrXRDestroyMeshDetector(Z_Param_SpaceMeshComponent);
	P_NATIVE_END;
}
// End Class UYvrXRMRFunctionLibrary Function YvrXRDestroyMeshDetector

// Begin Class UYvrXRMRFunctionLibrary Function YvrXRFromAnchorToString
struct Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString_Statics
{
	struct YvrXRMRFunctionLibrary_eventYvrXRFromAnchorToString_Parms
	{
		FYvrAnchor Anchor;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "YvrXRLibrary|MR" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (Anchor Handle)" },
		{ "ModuleRelativePath", "Public/YvrXRMRFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Anchor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRFromAnchorToString_Parms, Anchor), Z_Construct_UScriptStruct_FYvrAnchor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Anchor_MetaData), NewProp_Anchor_MetaData) }; // 2475124470
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRFromAnchorToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString_Statics::NewProp_Anchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMRFunctionLibrary, nullptr, "YvrXRFromAnchorToString", nullptr, nullptr, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString_Statics::YvrXRMRFunctionLibrary_eventYvrXRFromAnchorToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString_Statics::YvrXRMRFunctionLibrary_eventYvrXRFromAnchorToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRMRFunctionLibrary::execYvrXRFromAnchorToString)
{
	P_GET_STRUCT_REF(FYvrAnchor,Z_Param_Out_Anchor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UYvrXRMRFunctionLibrary::YvrXRFromAnchorToString(Z_Param_Out_Anchor);
	P_NATIVE_END;
}
// End Class UYvrXRMRFunctionLibrary Function YvrXRFromAnchorToString

// Begin Class UYvrXRMRFunctionLibrary Function YvrXRFromUUIDToString
struct Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString_Statics
{
	struct YvrXRMRFunctionLibrary_eventYvrXRFromUUIDToString_Parms
	{
		FYvrAnchorUUID AnchorUUID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "YvrXRLibrary|MR" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (Anchor UUID)" },
		{ "ModuleRelativePath", "Public/YvrXRMRFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorUUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString_Statics::NewProp_AnchorUUID = { "AnchorUUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRFromUUIDToString_Parms, AnchorUUID), Z_Construct_UScriptStruct_FYvrAnchorUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorUUID_MetaData), NewProp_AnchorUUID_MetaData) }; // 277093096
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRFromUUIDToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString_Statics::NewProp_AnchorUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMRFunctionLibrary, nullptr, "YvrXRFromUUIDToString", nullptr, nullptr, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString_Statics::YvrXRMRFunctionLibrary_eventYvrXRFromUUIDToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString_Statics::YvrXRMRFunctionLibrary_eventYvrXRFromUUIDToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRMRFunctionLibrary::execYvrXRFromUUIDToString)
{
	P_GET_STRUCT_REF(FYvrAnchorUUID,Z_Param_Out_AnchorUUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UYvrXRMRFunctionLibrary::YvrXRFromUUIDToString(Z_Param_Out_AnchorUUID);
	P_NATIVE_END;
}
// End Class UYvrXRMRFunctionLibrary Function YvrXRFromUUIDToString

// Begin Class UYvrXRMRFunctionLibrary Function YvrXRGetAnchorBoundingBox2D
struct Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics
{
	struct YvrXRMRFunctionLibrary_eventYvrXRGetAnchorBoundingBox2D_Parms
	{
		AActor* BoundActor;
		FBox2D BoundingBox;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorBoundingBox2D_Parms, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorBoundingBox2D_Parms, BoundingBox), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRMRFunctionLibrary_eventYvrXRGetAnchorBoundingBox2D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorBoundingBox2D_Parms), &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::NewProp_BoundActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::NewProp_BoundingBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMRFunctionLibrary, nullptr, "YvrXRGetAnchorBoundingBox2D", nullptr, nullptr, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::YvrXRMRFunctionLibrary_eventYvrXRGetAnchorBoundingBox2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::YvrXRMRFunctionLibrary_eventYvrXRGetAnchorBoundingBox2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRMRFunctionLibrary::execYvrXRGetAnchorBoundingBox2D)
{
	P_GET_OBJECT(AActor,Z_Param_BoundActor);
	P_GET_STRUCT_REF(FBox2D,Z_Param_Out_BoundingBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRMRFunctionLibrary::YvrXRGetAnchorBoundingBox2D(Z_Param_BoundActor,Z_Param_Out_BoundingBox);
	P_NATIVE_END;
}
// End Class UYvrXRMRFunctionLibrary Function YvrXRGetAnchorBoundingBox2D

// Begin Class UYvrXRMRFunctionLibrary Function YvrXRGetAnchorBoundingBox3D
struct Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics
{
	struct YvrXRMRFunctionLibrary_eventYvrXRGetAnchorBoundingBox3D_Parms
	{
		AActor* BoundActor;
		FBox BoundingBox;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorBoundingBox3D_Parms, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorBoundingBox3D_Parms, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRMRFunctionLibrary_eventYvrXRGetAnchorBoundingBox3D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorBoundingBox3D_Parms), &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::NewProp_BoundActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::NewProp_BoundingBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMRFunctionLibrary, nullptr, "YvrXRGetAnchorBoundingBox3D", nullptr, nullptr, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::YvrXRMRFunctionLibrary_eventYvrXRGetAnchorBoundingBox3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::YvrXRMRFunctionLibrary_eventYvrXRGetAnchorBoundingBox3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRMRFunctionLibrary::execYvrXRGetAnchorBoundingBox3D)
{
	P_GET_OBJECT(AActor,Z_Param_BoundActor);
	P_GET_STRUCT_REF(FBox,Z_Param_Out_BoundingBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRMRFunctionLibrary::YvrXRGetAnchorBoundingBox3D(Z_Param_BoundActor,Z_Param_Out_BoundingBox);
	P_NATIVE_END;
}
// End Class UYvrXRMRFunctionLibrary Function YvrXRGetAnchorBoundingBox3D

// Begin Class UYvrXRMRFunctionLibrary Function YvrXRGetAnchorEntityUuid
struct Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics
{
	struct YvrXRMRFunctionLibrary_eventYvrXRGetAnchorEntityUuid_Parms
	{
		AActor* BoundActor;
		FYvrAnchorUUID OutAnchorUUID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAnchorUUID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorEntityUuid_Parms, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::NewProp_OutAnchorUUID = { "OutAnchorUUID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorEntityUuid_Parms, OutAnchorUUID), Z_Construct_UScriptStruct_FYvrAnchorUUID, METADATA_PARAMS(0, nullptr) }; // 277093096
void Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRMRFunctionLibrary_eventYvrXRGetAnchorEntityUuid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorEntityUuid_Parms), &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::NewProp_BoundActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::NewProp_OutAnchorUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMRFunctionLibrary, nullptr, "YvrXRGetAnchorEntityUuid", nullptr, nullptr, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::YvrXRMRFunctionLibrary_eventYvrXRGetAnchorEntityUuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::YvrXRMRFunctionLibrary_eventYvrXRGetAnchorEntityUuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRMRFunctionLibrary::execYvrXRGetAnchorEntityUuid)
{
	P_GET_OBJECT(AActor,Z_Param_BoundActor);
	P_GET_STRUCT_REF(FYvrAnchorUUID,Z_Param_Out_OutAnchorUUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRMRFunctionLibrary::YvrXRGetAnchorEntityUuid(Z_Param_BoundActor,Z_Param_Out_OutAnchorUUID);
	P_NATIVE_END;
}
// End Class UYvrXRMRFunctionLibrary Function YvrXRGetAnchorEntityUuid

// Begin Class UYvrXRMRFunctionLibrary Function YvrXRGetAnchorPoseByActor
struct Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics
{
	struct YvrXRMRFunctionLibrary_eventYvrXRGetAnchorPoseByActor_Parms
	{
		AActor* BoundActor;
		FTransform OutTransform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorPoseByActor_Parms, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorPoseByActor_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRMRFunctionLibrary_eventYvrXRGetAnchorPoseByActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorPoseByActor_Parms), &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::NewProp_BoundActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::NewProp_OutTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMRFunctionLibrary, nullptr, "YvrXRGetAnchorPoseByActor", nullptr, nullptr, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::YvrXRMRFunctionLibrary_eventYvrXRGetAnchorPoseByActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::YvrXRMRFunctionLibrary_eventYvrXRGetAnchorPoseByActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRMRFunctionLibrary::execYvrXRGetAnchorPoseByActor)
{
	P_GET_OBJECT(AActor,Z_Param_BoundActor);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRMRFunctionLibrary::YvrXRGetAnchorPoseByActor(Z_Param_BoundActor,Z_Param_Out_OutTransform);
	P_NATIVE_END;
}
// End Class UYvrXRMRFunctionLibrary Function YvrXRGetAnchorPoseByActor

// Begin Class UYvrXRMRFunctionLibrary Function YvrXRGetAnchorPoseByComponent
struct Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics
{
	struct YvrXRMRFunctionLibrary_eventYvrXRGetAnchorPoseByComponent_Parms
	{
		UYvrAnchorComponent* BoundComponent;
		FTransform OutTransform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::NewProp_BoundComponent = { "BoundComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorPoseByComponent_Parms, BoundComponent), Z_Construct_UClass_UYvrAnchorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundComponent_MetaData), NewProp_BoundComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorPoseByComponent_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRMRFunctionLibrary_eventYvrXRGetAnchorPoseByComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorPoseByComponent_Parms), &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::NewProp_BoundComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::NewProp_OutTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMRFunctionLibrary, nullptr, "YvrXRGetAnchorPoseByComponent", nullptr, nullptr, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::YvrXRMRFunctionLibrary_eventYvrXRGetAnchorPoseByComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::YvrXRMRFunctionLibrary_eventYvrXRGetAnchorPoseByComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRMRFunctionLibrary::execYvrXRGetAnchorPoseByComponent)
{
	P_GET_OBJECT(UYvrAnchorComponent,Z_Param_BoundComponent);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRMRFunctionLibrary::YvrXRGetAnchorPoseByComponent(Z_Param_BoundComponent,Z_Param_Out_OutTransform);
	P_NATIVE_END;
}
// End Class UYvrXRMRFunctionLibrary Function YvrXRGetAnchorPoseByComponent

// Begin Class UYvrXRMRFunctionLibrary Function YvrXRGetAnchorSemanticLabels
struct Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics
{
	struct YvrXRMRFunctionLibrary_eventYvrXRGetAnchorSemanticLabels_Parms
	{
		AActor* BoundActor;
		TArray<FString> Labels;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Labels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Labels;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorSemanticLabels_Parms, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::NewProp_Labels_Inner = { "Labels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::NewProp_Labels = { "Labels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorSemanticLabels_Parms, Labels), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRMRFunctionLibrary_eventYvrXRGetAnchorSemanticLabels_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRMRFunctionLibrary_eventYvrXRGetAnchorSemanticLabels_Parms), &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::NewProp_BoundActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::NewProp_Labels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::NewProp_Labels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMRFunctionLibrary, nullptr, "YvrXRGetAnchorSemanticLabels", nullptr, nullptr, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::YvrXRMRFunctionLibrary_eventYvrXRGetAnchorSemanticLabels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::YvrXRMRFunctionLibrary_eventYvrXRGetAnchorSemanticLabels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRMRFunctionLibrary::execYvrXRGetAnchorSemanticLabels)
{
	P_GET_OBJECT(AActor,Z_Param_BoundActor);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Labels);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRMRFunctionLibrary::YvrXRGetAnchorSemanticLabels(Z_Param_BoundActor,Z_Param_Out_Labels);
	P_NATIVE_END;
}
// End Class UYvrXRMRFunctionLibrary Function YvrXRGetAnchorSemanticLabels

// Begin Class UYvrXRMRFunctionLibrary Function YvrXRIsAnchorValidForActor
struct Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics
{
	struct YvrXRMRFunctionLibrary_eventYvrXRIsAnchorValidForActor_Parms
	{
		AActor* BoundActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRIsAnchorValidForActor_Parms, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRMRFunctionLibrary_eventYvrXRIsAnchorValidForActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRMRFunctionLibrary_eventYvrXRIsAnchorValidForActor_Parms), &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics::NewProp_BoundActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMRFunctionLibrary, nullptr, "YvrXRIsAnchorValidForActor", nullptr, nullptr, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics::YvrXRMRFunctionLibrary_eventYvrXRIsAnchorValidForActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics::YvrXRMRFunctionLibrary_eventYvrXRIsAnchorValidForActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRMRFunctionLibrary::execYvrXRIsAnchorValidForActor)
{
	P_GET_OBJECT(AActor,Z_Param_BoundActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRMRFunctionLibrary::YvrXRIsAnchorValidForActor(Z_Param_BoundActor);
	P_NATIVE_END;
}
// End Class UYvrXRMRFunctionLibrary Function YvrXRIsAnchorValidForActor

// Begin Class UYvrXRMRFunctionLibrary Function YvrXRIsAnchorValidForComponent
struct Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics
{
	struct YvrXRMRFunctionLibrary_eventYvrXRIsAnchorValidForComponent_Parms
	{
		UActorComponent* BoundComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics::NewProp_BoundComponent = { "BoundComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRIsAnchorValidForComponent_Parms, BoundComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundComponent_MetaData), NewProp_BoundComponent_MetaData) };
void Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRMRFunctionLibrary_eventYvrXRIsAnchorValidForComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRMRFunctionLibrary_eventYvrXRIsAnchorValidForComponent_Parms), &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics::NewProp_BoundComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMRFunctionLibrary, nullptr, "YvrXRIsAnchorValidForComponent", nullptr, nullptr, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics::YvrXRMRFunctionLibrary_eventYvrXRIsAnchorValidForComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics::YvrXRMRFunctionLibrary_eventYvrXRIsAnchorValidForComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRMRFunctionLibrary::execYvrXRIsAnchorValidForComponent)
{
	P_GET_OBJECT(UActorComponent,Z_Param_BoundComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRMRFunctionLibrary::YvrXRIsAnchorValidForComponent(Z_Param_BoundComponent);
	P_NATIVE_END;
}
// End Class UYvrXRMRFunctionLibrary Function YvrXRIsAnchorValidForComponent

// Begin Class UYvrXRMRFunctionLibrary Function YvrXRSetMarkerEnabled
struct Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics
{
	struct YvrXRMRFunctionLibrary_eventYvrXRSetMarkerEnabled_Parms
	{
		bool Enabled;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((YvrXRMRFunctionLibrary_eventYvrXRSetMarkerEnabled_Parms*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRMRFunctionLibrary_eventYvrXRSetMarkerEnabled_Parms), &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrXRMRFunctionLibrary_eventYvrXRSetMarkerEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrXRMRFunctionLibrary_eventYvrXRSetMarkerEnabled_Parms), &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMRFunctionLibrary, nullptr, "YvrXRSetMarkerEnabled", nullptr, nullptr, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::YvrXRMRFunctionLibrary_eventYvrXRSetMarkerEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::YvrXRMRFunctionLibrary_eventYvrXRSetMarkerEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRMRFunctionLibrary::execYvrXRSetMarkerEnabled)
{
	P_GET_UBOOL(Z_Param_Enabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UYvrXRMRFunctionLibrary::YvrXRSetMarkerEnabled(Z_Param_Enabled);
	P_NATIVE_END;
}
// End Class UYvrXRMRFunctionLibrary Function YvrXRSetMarkerEnabled

// Begin Class UYvrXRMRFunctionLibrary Function YvrXRSpawnActorFromLoadResult
struct Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics
{
	struct YvrXRMRFunctionLibrary_eventYvrXRSpawnActorFromLoadResult_Parms
	{
		UObject* WorldContext;
		FYvrAnchorLoadResult LoadResult;
		UClass* ActorClass;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRMRFunctionLibrary.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadResult;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRSpawnActorFromLoadResult_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::NewProp_LoadResult = { "LoadResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRSpawnActorFromLoadResult_Parms, LoadResult), Z_Construct_UScriptStruct_FYvrAnchorLoadResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadResult_MetaData), NewProp_LoadResult_MetaData) }; // 2704793911
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRSpawnActorFromLoadResult_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrXRMRFunctionLibrary_eventYvrXRSpawnActorFromLoadResult_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::NewProp_LoadResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrXRMRFunctionLibrary, nullptr, "YvrXRSpawnActorFromLoadResult", nullptr, nullptr, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::YvrXRMRFunctionLibrary_eventYvrXRSpawnActorFromLoadResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::YvrXRMRFunctionLibrary_eventYvrXRSpawnActorFromLoadResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrXRMRFunctionLibrary::execYvrXRSpawnActorFromLoadResult)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT_REF(FYvrAnchorLoadResult,Z_Param_Out_LoadResult);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UYvrXRMRFunctionLibrary::YvrXRSpawnActorFromLoadResult(Z_Param_WorldContext,Z_Param_Out_LoadResult,Z_Param_ActorClass);
	P_NATIVE_END;
}
// End Class UYvrXRMRFunctionLibrary Function YvrXRSpawnActorFromLoadResult

// Begin Class UYvrXRMRFunctionLibrary
void UYvrXRMRFunctionLibrary::StaticRegisterNativesUYvrXRMRFunctionLibrary()
{
	UClass* Class = UYvrXRMRFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "YvrXRCreateMeshDetector", &UYvrXRMRFunctionLibrary::execYvrXRCreateMeshDetector },
		{ "YvrXRDestroyMeshDetector", &UYvrXRMRFunctionLibrary::execYvrXRDestroyMeshDetector },
		{ "YvrXRFromAnchorToString", &UYvrXRMRFunctionLibrary::execYvrXRFromAnchorToString },
		{ "YvrXRFromUUIDToString", &UYvrXRMRFunctionLibrary::execYvrXRFromUUIDToString },
		{ "YvrXRGetAnchorBoundingBox2D", &UYvrXRMRFunctionLibrary::execYvrXRGetAnchorBoundingBox2D },
		{ "YvrXRGetAnchorBoundingBox3D", &UYvrXRMRFunctionLibrary::execYvrXRGetAnchorBoundingBox3D },
		{ "YvrXRGetAnchorEntityUuid", &UYvrXRMRFunctionLibrary::execYvrXRGetAnchorEntityUuid },
		{ "YvrXRGetAnchorPoseByActor", &UYvrXRMRFunctionLibrary::execYvrXRGetAnchorPoseByActor },
		{ "YvrXRGetAnchorPoseByComponent", &UYvrXRMRFunctionLibrary::execYvrXRGetAnchorPoseByComponent },
		{ "YvrXRGetAnchorSemanticLabels", &UYvrXRMRFunctionLibrary::execYvrXRGetAnchorSemanticLabels },
		{ "YvrXRIsAnchorValidForActor", &UYvrXRMRFunctionLibrary::execYvrXRIsAnchorValidForActor },
		{ "YvrXRIsAnchorValidForComponent", &UYvrXRMRFunctionLibrary::execYvrXRIsAnchorValidForComponent },
		{ "YvrXRSetMarkerEnabled", &UYvrXRMRFunctionLibrary::execYvrXRSetMarkerEnabled },
		{ "YvrXRSpawnActorFromLoadResult", &UYvrXRMRFunctionLibrary::execYvrXRSpawnActorFromLoadResult },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrXRMRFunctionLibrary);
UClass* Z_Construct_UClass_UYvrXRMRFunctionLibrary_NoRegister()
{
	return UYvrXRMRFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UYvrXRMRFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "YvrXRMRFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/YvrXRMRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRCreateMeshDetector, "YvrXRCreateMeshDetector" }, // 1128910198
		{ &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRDestroyMeshDetector, "YvrXRDestroyMeshDetector" }, // 2706804421
		{ &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromAnchorToString, "YvrXRFromAnchorToString" }, // 1156250059
		{ &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRFromUUIDToString, "YvrXRFromUUIDToString" }, // 914692084
		{ &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox2D, "YvrXRGetAnchorBoundingBox2D" }, // 2651478022
		{ &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorBoundingBox3D, "YvrXRGetAnchorBoundingBox3D" }, // 2747023597
		{ &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorEntityUuid, "YvrXRGetAnchorEntityUuid" }, // 972872863
		{ &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByActor, "YvrXRGetAnchorPoseByActor" }, // 3365533225
		{ &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorPoseByComponent, "YvrXRGetAnchorPoseByComponent" }, // 3340342818
		{ &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRGetAnchorSemanticLabels, "YvrXRGetAnchorSemanticLabels" }, // 2916902170
		{ &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForActor, "YvrXRIsAnchorValidForActor" }, // 1117480687
		{ &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRIsAnchorValidForComponent, "YvrXRIsAnchorValidForComponent" }, // 5685274
		{ &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSetMarkerEnabled, "YvrXRSetMarkerEnabled" }, // 336407140
		{ &Z_Construct_UFunction_UYvrXRMRFunctionLibrary_YvrXRSpawnActorFromLoadResult, "YvrXRSpawnActorFromLoadResult" }, // 920632441
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrXRMRFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UYvrXRMRFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRMR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRMRFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrXRMRFunctionLibrary_Statics::ClassParams = {
	&UYvrXRMRFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrXRMRFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrXRMRFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrXRMRFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UYvrXRMRFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrXRMRFunctionLibrary.OuterSingleton, Z_Construct_UClass_UYvrXRMRFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrXRMRFunctionLibrary.OuterSingleton;
}
template<> YVRXRMR_API UClass* StaticClass<UYvrXRMRFunctionLibrary>()
{
	return UYvrXRMRFunctionLibrary::StaticClass();
}
UYvrXRMRFunctionLibrary::UYvrXRMRFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrXRMRFunctionLibrary);
UYvrXRMRFunctionLibrary::~UYvrXRMRFunctionLibrary() {}
// End Class UYvrXRMRFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYvrXRMRFunctionLibrary, UYvrXRMRFunctionLibrary::StaticClass, TEXT("UYvrXRMRFunctionLibrary"), &Z_Registration_Info_UClass_UYvrXRMRFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrXRMRFunctionLibrary), 2860341768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRFunctionLibrary_h_4205430181(TEXT("/Script/YvrXRMR"),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRMRFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
