// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YvrXRMR/Public/YvrXRAnchorComponent.h"
#include "YvrXRMR/Public/YvrXRMRTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYvrXRAnchorComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_YvrXRMR();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrAnchorComponent();
YVRXRMR_API UClass* Z_Construct_UClass_UYvrAnchorComponent_NoRegister();
YVRXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FYvrAnchor();
YVRXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FYvrAnchorUUID();
// End Cross Module References

// Begin Class UYvrAnchorComponent Function GetAnchorHandle
struct Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandle_Statics
{
	struct YvrAnchorComponent_eventGetAnchorHandle_Parms
	{
		FYvrAnchor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRAnchorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrAnchorComponent_eventGetAnchorHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FYvrAnchor, METADATA_PARAMS(0, nullptr) }; // 2475124470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrAnchorComponent, nullptr, "GetAnchorHandle", nullptr, nullptr, Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandle_Statics::YvrAnchorComponent_eventGetAnchorHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandle_Statics::YvrAnchorComponent_eventGetAnchorHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrAnchorComponent::execGetAnchorHandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FYvrAnchor*)Z_Param__Result=P_THIS->GetAnchorHandle();
	P_NATIVE_END;
}
// End Class UYvrAnchorComponent Function GetAnchorHandle

// Begin Class UYvrAnchorComponent Function GetAnchorHandleString
struct Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandleString_Statics
{
	struct YvrAnchorComponent_eventGetAnchorHandleString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRAnchorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandleString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrAnchorComponent_eventGetAnchorHandleString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandleString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandleString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandleString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandleString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrAnchorComponent, nullptr, "GetAnchorHandleString", nullptr, nullptr, Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandleString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandleString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandleString_Statics::YvrAnchorComponent_eventGetAnchorHandleString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandleString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandleString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandleString_Statics::YvrAnchorComponent_eventGetAnchorHandleString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandleString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandleString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrAnchorComponent::execGetAnchorHandleString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAnchorHandleString();
	P_NATIVE_END;
}
// End Class UYvrAnchorComponent Function GetAnchorHandleString

// Begin Class UYvrAnchorComponent Function GetAnchorUUID
struct Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUID_Statics
{
	struct YvrAnchorComponent_eventGetAnchorUUID_Parms
	{
		FYvrAnchorUUID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRAnchorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrAnchorComponent_eventGetAnchorUUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FYvrAnchorUUID, METADATA_PARAMS(0, nullptr) }; // 277093096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrAnchorComponent, nullptr, "GetAnchorUUID", nullptr, nullptr, Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUID_Statics::YvrAnchorComponent_eventGetAnchorUUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUID_Statics::YvrAnchorComponent_eventGetAnchorUUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrAnchorComponent::execGetAnchorUUID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FYvrAnchorUUID*)Z_Param__Result=P_THIS->GetAnchorUUID();
	P_NATIVE_END;
}
// End Class UYvrAnchorComponent Function GetAnchorUUID

// Begin Class UYvrAnchorComponent Function GetAnchorUUIDString
struct Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUIDString_Statics
{
	struct YvrAnchorComponent_eventGetAnchorUUIDString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRAnchorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUIDString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrAnchorComponent_eventGetAnchorUUIDString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUIDString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUIDString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUIDString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUIDString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrAnchorComponent, nullptr, "GetAnchorUUIDString", nullptr, nullptr, Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUIDString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUIDString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUIDString_Statics::YvrAnchorComponent_eventGetAnchorUUIDString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUIDString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUIDString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUIDString_Statics::YvrAnchorComponent_eventGetAnchorUUIDString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUIDString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUIDString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrAnchorComponent::execGetAnchorUUIDString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAnchorUUIDString();
	P_NATIVE_END;
}
// End Class UYvrAnchorComponent Function GetAnchorUUIDString

// Begin Class UYvrAnchorComponent Function IsAnchorValid
struct Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid_Statics
{
	struct YvrAnchorComponent_eventIsAnchorValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRAnchorComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YvrAnchorComponent_eventIsAnchorValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YvrAnchorComponent_eventIsAnchorValid_Parms), &Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrAnchorComponent, nullptr, "IsAnchorValid", nullptr, nullptr, Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid_Statics::YvrAnchorComponent_eventIsAnchorValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid_Statics::YvrAnchorComponent_eventIsAnchorValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrAnchorComponent::execIsAnchorValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAnchorValid();
	P_NATIVE_END;
}
// End Class UYvrAnchorComponent Function IsAnchorValid

// Begin Class UYvrAnchorComponent Function SetAnchorHandle
struct Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorHandle_Statics
{
	struct YvrAnchorComponent_eventSetAnchorHandle_Parms
	{
		FYvrAnchor NewAnchorHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRAnchorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewAnchorHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorHandle_Statics::NewProp_NewAnchorHandle = { "NewAnchorHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrAnchorComponent_eventSetAnchorHandle_Parms, NewAnchorHandle), Z_Construct_UScriptStruct_FYvrAnchor, METADATA_PARAMS(0, nullptr) }; // 2475124470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorHandle_Statics::NewProp_NewAnchorHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrAnchorComponent, nullptr, "SetAnchorHandle", nullptr, nullptr, Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorHandle_Statics::YvrAnchorComponent_eventSetAnchorHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorHandle_Statics::YvrAnchorComponent_eventSetAnchorHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrAnchorComponent::execSetAnchorHandle)
{
	P_GET_STRUCT(FYvrAnchor,Z_Param_NewAnchorHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnchorHandle(Z_Param_NewAnchorHandle);
	P_NATIVE_END;
}
// End Class UYvrAnchorComponent Function SetAnchorHandle

// Begin Class UYvrAnchorComponent Function SetAnchorUUID
struct Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorUUID_Statics
{
	struct YvrAnchorComponent_eventSetAnchorUUID_Parms
	{
		FYvrAnchorUUID NewAnchorUUID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "YvrXRLibrary|MR" },
		{ "ModuleRelativePath", "Public/YvrXRAnchorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewAnchorUUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorUUID_Statics::NewProp_NewAnchorUUID = { "NewAnchorUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrAnchorComponent_eventSetAnchorUUID_Parms, NewAnchorUUID), Z_Construct_UScriptStruct_FYvrAnchorUUID, METADATA_PARAMS(0, nullptr) }; // 277093096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorUUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorUUID_Statics::NewProp_NewAnchorUUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorUUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorUUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrAnchorComponent, nullptr, "SetAnchorUUID", nullptr, nullptr, Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorUUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorUUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorUUID_Statics::YvrAnchorComponent_eventSetAnchorUUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorUUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorUUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorUUID_Statics::YvrAnchorComponent_eventSetAnchorUUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorUUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorUUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrAnchorComponent::execSetAnchorUUID)
{
	P_GET_STRUCT(FYvrAnchorUUID,Z_Param_NewAnchorUUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnchorUUID(Z_Param_NewAnchorUUID);
	P_NATIVE_END;
}
// End Class UYvrAnchorComponent Function SetAnchorUUID

// Begin Class UYvrAnchorComponent
void UYvrAnchorComponent::StaticRegisterNativesUYvrAnchorComponent()
{
	UClass* Class = UYvrAnchorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAnchorHandle", &UYvrAnchorComponent::execGetAnchorHandle },
		{ "GetAnchorHandleString", &UYvrAnchorComponent::execGetAnchorHandleString },
		{ "GetAnchorUUID", &UYvrAnchorComponent::execGetAnchorUUID },
		{ "GetAnchorUUIDString", &UYvrAnchorComponent::execGetAnchorUUIDString },
		{ "IsAnchorValid", &UYvrAnchorComponent::execIsAnchorValid },
		{ "SetAnchorHandle", &UYvrAnchorComponent::execSetAnchorHandle },
		{ "SetAnchorUUID", &UYvrAnchorComponent::execSetAnchorUUID },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrAnchorComponent);
UClass* Z_Construct_UClass_UYvrAnchorComponent_NoRegister()
{
	return UYvrAnchorComponent::StaticClass();
}
struct Z_Construct_UClass_UYvrAnchorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YvrXRAnchorComponent.h" },
		{ "ModuleRelativePath", "Public/YvrXRAnchorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandle, "GetAnchorHandle" }, // 3053188126
		{ &Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorHandleString, "GetAnchorHandleString" }, // 3993736868
		{ &Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUID, "GetAnchorUUID" }, // 3807972890
		{ &Z_Construct_UFunction_UYvrAnchorComponent_GetAnchorUUIDString, "GetAnchorUUIDString" }, // 2087862641
		{ &Z_Construct_UFunction_UYvrAnchorComponent_IsAnchorValid, "IsAnchorValid" }, // 2706096383
		{ &Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorHandle, "SetAnchorHandle" }, // 608859500
		{ &Z_Construct_UFunction_UYvrAnchorComponent_SetAnchorUUID, "SetAnchorUUID" }, // 2158946649
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrAnchorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UYvrAnchorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_YvrXRMR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrAnchorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrAnchorComponent_Statics::ClassParams = {
	&UYvrAnchorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrAnchorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrAnchorComponent()
{
	if (!Z_Registration_Info_UClass_UYvrAnchorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrAnchorComponent.OuterSingleton, Z_Construct_UClass_UYvrAnchorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrAnchorComponent.OuterSingleton;
}
template<> YVRXRMR_API UClass* StaticClass<UYvrAnchorComponent>()
{
	return UYvrAnchorComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrAnchorComponent);
UYvrAnchorComponent::~UYvrAnchorComponent() {}
// End Class UYvrAnchorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAnchorComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYvrAnchorComponent, UYvrAnchorComponent::StaticClass, TEXT("UYvrAnchorComponent"), &Z_Registration_Info_UClass_UYvrAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrAnchorComponent), 3317609905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAnchorComponent_h_1607532872(TEXT("/Script/YvrXRMR"),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAnchorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_YvrXR_Source_YvrXRMR_Public_YvrXRAnchorComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
