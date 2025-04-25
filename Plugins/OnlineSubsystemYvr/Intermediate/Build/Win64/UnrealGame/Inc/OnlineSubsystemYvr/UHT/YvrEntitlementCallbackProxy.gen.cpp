// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Classes/YvrEntitlementCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYvrEntitlementCallbackProxy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ONLINESUBSYSTEMYVR_API UClass* Z_Construct_UClass_UYvrEntitlementCallbackProxy();
ONLINESUBSYSTEMYVR_API UClass* Z_Construct_UClass_UYvrEntitlementCallbackProxy_NoRegister();
ONLINESUBSYSTEMYVR_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrEntitlementCheckResult__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemYvr();
// End Cross Module References

// Begin Delegate FYvrEntitlementCheckResult
struct Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrEntitlementCheckResult__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/YvrEntitlementCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrEntitlementCheckResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemYvr, nullptr, "YvrEntitlementCheckResult__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrEntitlementCheckResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrEntitlementCheckResult__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrEntitlementCheckResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrEntitlementCheckResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FYvrEntitlementCheckResult_DelegateWrapper(const FMulticastScriptDelegate& YvrEntitlementCheckResult)
{
	YvrEntitlementCheckResult.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FYvrEntitlementCheckResult

// Begin Class UYvrEntitlementCallbackProxy Function VerifyEntitlement
struct Z_Construct_UFunction_UYvrEntitlementCallbackProxy_VerifyEntitlement_Statics
{
	struct YvrEntitlementCallbackProxy_eventVerifyEntitlement_Parms
	{
		UYvrEntitlementCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Yvr|Entitlement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Kick off entitlement check. Asynchronous-- see OnUserPrivilegeCompleteDelegate for results.\n" },
#endif
		{ "ModuleRelativePath", "Classes/YvrEntitlementCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Kick off entitlement check. Asynchronous-- see OnUserPrivilegeCompleteDelegate for results." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYvrEntitlementCallbackProxy_VerifyEntitlement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YvrEntitlementCallbackProxy_eventVerifyEntitlement_Parms, ReturnValue), Z_Construct_UClass_UYvrEntitlementCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYvrEntitlementCallbackProxy_VerifyEntitlement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYvrEntitlementCallbackProxy_VerifyEntitlement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrEntitlementCallbackProxy_VerifyEntitlement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYvrEntitlementCallbackProxy_VerifyEntitlement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYvrEntitlementCallbackProxy, nullptr, "VerifyEntitlement", nullptr, nullptr, Z_Construct_UFunction_UYvrEntitlementCallbackProxy_VerifyEntitlement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrEntitlementCallbackProxy_VerifyEntitlement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYvrEntitlementCallbackProxy_VerifyEntitlement_Statics::YvrEntitlementCallbackProxy_eventVerifyEntitlement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYvrEntitlementCallbackProxy_VerifyEntitlement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYvrEntitlementCallbackProxy_VerifyEntitlement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYvrEntitlementCallbackProxy_VerifyEntitlement_Statics::YvrEntitlementCallbackProxy_eventVerifyEntitlement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYvrEntitlementCallbackProxy_VerifyEntitlement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYvrEntitlementCallbackProxy_VerifyEntitlement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYvrEntitlementCallbackProxy::execVerifyEntitlement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UYvrEntitlementCallbackProxy**)Z_Param__Result=UYvrEntitlementCallbackProxy::VerifyEntitlement();
	P_NATIVE_END;
}
// End Class UYvrEntitlementCallbackProxy Function VerifyEntitlement

// Begin Class UYvrEntitlementCallbackProxy
void UYvrEntitlementCallbackProxy::StaticRegisterNativesUYvrEntitlementCallbackProxy()
{
	UClass* Class = UYvrEntitlementCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "VerifyEntitlement", &UYvrEntitlementCallbackProxy::execVerifyEntitlement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYvrEntitlementCallbackProxy);
UClass* Z_Construct_UClass_UYvrEntitlementCallbackProxy_NoRegister()
{
	return UYvrEntitlementCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UYvrEntitlementCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Exposes some of the Platform SDK for blueprint use.\n */" },
#endif
		{ "IncludePath", "YvrEntitlementCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/YvrEntitlementCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exposes some of the Platform SDK for blueprint use." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is a successful entitlement check\n" },
#endif
		{ "ModuleRelativePath", "Classes/YvrEntitlementCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there is a successful entitlement check" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when there is an unsuccessful entitlement check\n" },
#endif
		{ "ModuleRelativePath", "Classes/YvrEntitlementCallbackProxy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when there is an unsuccessful entitlement check" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYvrEntitlementCallbackProxy_VerifyEntitlement, "VerifyEntitlement" }, // 123500164
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYvrEntitlementCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrEntitlementCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrEntitlementCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrEntitlementCheckResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 944782245
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYvrEntitlementCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYvrEntitlementCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemYvr_YvrEntitlementCheckResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 944782245
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYvrEntitlementCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrEntitlementCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYvrEntitlementCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrEntitlementCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYvrEntitlementCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemYvr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrEntitlementCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYvrEntitlementCallbackProxy_Statics::ClassParams = {
	&UYvrEntitlementCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UYvrEntitlementCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UYvrEntitlementCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYvrEntitlementCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UYvrEntitlementCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYvrEntitlementCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UYvrEntitlementCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYvrEntitlementCallbackProxy.OuterSingleton, Z_Construct_UClass_UYvrEntitlementCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYvrEntitlementCallbackProxy.OuterSingleton;
}
template<> ONLINESUBSYSTEMYVR_API UClass* StaticClass<UYvrEntitlementCallbackProxy>()
{
	return UYvrEntitlementCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYvrEntitlementCallbackProxy);
UYvrEntitlementCallbackProxy::~UYvrEntitlementCallbackProxy() {}
// End Class UYvrEntitlementCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrEntitlementCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYvrEntitlementCallbackProxy, UYvrEntitlementCallbackProxy::StaticClass, TEXT("UYvrEntitlementCallbackProxy"), &Z_Registration_Info_UClass_UYvrEntitlementCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYvrEntitlementCallbackProxy), 2766225513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrEntitlementCallbackProxy_h_4179891505(TEXT("/Script/OnlineSubsystemYvr"),
	Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrEntitlementCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Project_VSTTest_Plugins_OnlineSubsystemYvr_Source_Classes_YvrEntitlementCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
