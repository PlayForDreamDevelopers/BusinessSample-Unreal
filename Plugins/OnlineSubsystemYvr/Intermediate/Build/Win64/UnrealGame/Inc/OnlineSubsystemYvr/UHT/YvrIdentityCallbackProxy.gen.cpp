// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Classes/YvrIdentityCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYvrIdentityCallbackProxy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ONLINESUBSYSTEMYVR_API UClass* Z_Construct_UClass_UYvrIdentityCallbackProxy();
ONLINESUBSYSTEMYVR_API UClass* Z_Construct_UClass_UYvrIdentityCallbackProxy_NoRegister();
ONLINESUBSYSTEMYVR_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentityFailureResult__DelegateSignature();
ONLINESUBSYSTEMYVR_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemYvr();
// End Cross Module References

// Begin Delegate FYvrIdentitySuccessResult
struct Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemYvr_eventYvrIdentitySuccessResult_Parms
	{
		FString YvrId;
		FString YvrName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/YvrIdentityCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_YvrId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_YvrName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature_Statics::NewProp_YvrId = { "YvrId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemYvr_eventYvrIdentitySuccessResult_Parms, YvrId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature_Statics::NewProp_YvrName = { "YvrName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemYvr_eventYvrIdentitySuccessResult_Parms, YvrName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature_Statics::NewProp_YvrId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature_Statics::NewProp_YvrName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemYvr, nullptr, "YvrIdentitySuccessResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature_Statics::_Script_OnlineSubsystemYvr_eventYvrIdentitySuccessResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature_Statics::_Script_OnlineSubsystemYvr_eventYvrIdentitySuccessResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FYvrIdentitySuccessResult_DelegateWrapper(const FMulticastScriptDelegate& YvrIdentitySuccessResult, const FString& YvrId, const FString& YvrName)
{
	struct _Script_OnlineSubsystemYvr_eventYvrIdentitySuccessResult_Parms
	{
		FString YvrId;
		FString YvrName;
	};
	_Script_OnlineSubsystemYvr_eventYvrIdentitySuccessResult_Parms Parms;
	Parms.YvrId=YvrId;
	Parms.YvrName=YvrName;
	YvrIdentitySuccessResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FYvrIdentitySuccessResult

// Begin Delegate FYvrIdentityFailureResult
struct Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentityFailureResult__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/YvrIdentityCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentityFailureResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemYvr, nullptr, "YvrIdentityFailureResult__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentityFailureResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentityFailureResult__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentityFailureResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentityFailureResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FYvrIdentityFailureResult_DelegateWrapper(const FMulticastScriptDelegate& YvrIdentityFailureResult)
{
	YvrIdentityFailureResult.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FYvrIdentityFailureResult

// Begin Class UYvrIdentityCallbackProxy Function GetYvrIdentity
struct Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity_Statics
{
	struct YvrIdentityCallbackProxy_eventGetYvrIdentity_Parms
	{
		int32 LocalUserNum;
		UYvrIdentityCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Yvr|Identity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Kick off GetYvrIdentity. Asynchronous-- see OnLoginCompleteDelegate for results.\n" },
#endif
		{ "ModuleRelativePath", "Classes/YvrIdentityCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Kick off GetYvrIdentity. Asynchronous-- see OnLoginCompleteDelegate for results." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrIdentityCallbackProxy_eventGetYvrIdentity_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrIdentityCallbackProxy_eventGetYvrIdentity_Parms, ReturnValue), Z_Construct_UClass_UYvrIdentityCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrIdentityCallbackProxy, nullptr, "GetYvrIdentity", nullptr, nullptr, Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity_Statics::YvrIdentityCallbackProxy_eventGetYvrIdentity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity_Statics::YvrIdentityCallbackProxy_eventGetYvrIdentity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrIdentityCallbackProxy::execGetYvrIdentity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UYvrIdentityCallbackProxy**)Z_Param__Result=UYvrIdentityCallbackProxy::GetYvrIdentity(Z_Param_LocalUserNum);
	P_NATIVE_END;
}
// End Class UYvrIdentityCallbackProxy Function GetYvrIdentity

// Begin Class UYvrIdentityCallbackProxy
void UYvrIdentityCallbackProxy::StaticRegisterNativesUYvrIdentityCallbackProxy()
{
	UClass* Class = UYvrIdentityCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetYvrIdentity", &UYvrIdentityCallbackProxy::execGetYvrIdentity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrIdentityCallbackProxy);
UClass* Z_Construct_UClass_UYvrIdentityCallbackProxy_NoRegister()
{
	return UYvrIdentityCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UYvrIdentityCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Exposes the yvr id of the Platform SDK for blueprint use.\n */" },
#endif
		{ "IncludePath", "YvrIdentityCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/YvrIdentityCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exposes the yvr id of the Platform SDK for blueprint use." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when it successfully gets back the yvr id\n" },
#endif
		{ "ModuleRelativePath", "Classes/YvrIdentityCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when it successfully gets back the yvr id" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when it fails to get the yvr id\n" },
#endif
		{ "ModuleRelativePath", "Classes/YvrIdentityCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when it fails to get the yvr id" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYvrIdentityCallbackProxy_GetYvrIdentity, "GetYvrIdentity" }, // 1599776011
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrIdentityCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrIdentityCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrIdentityCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentitySuccessResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 989242523
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrIdentityCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrIdentityCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrIdentityFailureResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2628530276
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYvrIdentityCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrIdentityCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrIdentityCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrIdentityCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYvrIdentityCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemYvr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrIdentityCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrIdentityCallbackProxy_Statics::ClassParams = {
	&UYvrIdentityCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UYvrIdentityCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UYvrIdentityCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrIdentityCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrIdentityCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrIdentityCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UYvrIdentityCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrIdentityCallbackProxy.OuterSingleton, Z_Construct_UClass_UYvrIdentityCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrIdentityCallbackProxy.OuterSingleton;
}
template<> ONLINESUBSYSTEMYVR_API UClass* StaticClass<UYvrIdentityCallbackProxy>()
{
	return UYvrIdentityCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrIdentityCallbackProxy);
UYvrIdentityCallbackProxy::~UYvrIdentityCallbackProxy() {}
// End Class UYvrIdentityCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrIdentityCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYvrIdentityCallbackProxy, UYvrIdentityCallbackProxy::StaticClass, TEXT("UYvrIdentityCallbackProxy"), &Z_Registration_Info_UClass_UYvrIdentityCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrIdentityCallbackProxy), 300018654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrIdentityCallbackProxy_h_1784251828(TEXT("/Script/OnlineSubsystemYvr"),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrIdentityCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrIdentityCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
