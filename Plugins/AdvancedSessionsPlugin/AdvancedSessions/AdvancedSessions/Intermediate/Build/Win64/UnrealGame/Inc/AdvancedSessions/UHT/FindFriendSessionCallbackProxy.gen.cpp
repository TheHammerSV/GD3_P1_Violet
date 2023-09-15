// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/FindFriendSessionCallbackProxy.h"
#include "AdvancedSessions/Classes/BlueprintDataDefinitions.h"
#include "FindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindFriendSessionCallbackProxy() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy_NoRegister();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics
	{
		struct _Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms
		{
			TArray<FBlueprintSessionResult> SessionInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::NewProp_SessionInfo_Inner = { "SessionInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) }; // 399430119
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::NewProp_SessionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::NewProp_SessionInfo = { "SessionInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms, SessionInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::NewProp_SessionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::NewProp_SessionInfo_MetaData)) }; // 399430119
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::NewProp_SessionInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::NewProp_SessionInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FindFriendSessionCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions, nullptr, "BlueprintFindFriendSessionDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::_Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBlueprintFindFriendSessionDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintFindFriendSessionDelegate, TArray<FBlueprintSessionResult> const& SessionInfo)
{
	struct _Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms
	{
		TArray<FBlueprintSessionResult> SessionInfo;
	};
	_Script_AdvancedSessions_eventBlueprintFindFriendSessionDelegate_Parms Parms;
	Parms.SessionInfo=SessionInfo;
	BlueprintFindFriendSessionDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UFindFriendSessionCallbackProxy::execFindFriendSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_FriendUniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFindFriendSessionCallbackProxy**)Z_Param__Result=UFindFriendSessionCallbackProxy::FindFriendSession(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_Out_FriendUniqueNetId);
		P_NATIVE_END;
	}
	void UFindFriendSessionCallbackProxy::StaticRegisterNativesUFindFriendSessionCallbackProxy()
	{
		UClass* Class = UFindFriendSessionCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindFriendSession", &UFindFriendSessionCallbackProxy::execFindFriendSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics
	{
		struct FindFriendSessionCallbackProxy_eventFindFriendSession_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			FBPUniqueNetId FriendUniqueNetId;
			UFindFriendSessionCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendUniqueNetId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendUniqueNetId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindFriendSessionCallbackProxy_eventFindFriendSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindFriendSessionCallbackProxy_eventFindFriendSession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_FriendUniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_FriendUniqueNetId = { "FriendUniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindFriendSessionCallbackProxy_eventFindFriendSession_Parms, FriendUniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_FriendUniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_FriendUniqueNetId_MetaData)) }; // 766028705
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindFriendSessionCallbackProxy_eventFindFriendSession_Parms, ReturnValue), Z_Construct_UClass_UFindFriendSessionCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_FriendUniqueNetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|AdvancedFriends" },
		{ "Comment", "// Attempts to get the current session that a friend is in\n" },
		{ "ModuleRelativePath", "Classes/FindFriendSessionCallbackProxy.h" },
		{ "ToolTip", "Attempts to get the current session that a friend is in" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindFriendSessionCallbackProxy, nullptr, "FindFriendSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::FindFriendSessionCallbackProxy_eventFindFriendSession_Parms), Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFindFriendSessionCallbackProxy);
	UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy_NoRegister()
	{
		return UFindFriendSessionCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession, "FindFriendSession" }, // 3976551156
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FindFriendSessionCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/FindFriendSessionCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when the friends list successfully was retrieved\n" },
		{ "ModuleRelativePath", "Classes/FindFriendSessionCallbackProxy.h" },
		{ "ToolTip", "Called when the friends list successfully was retrieved" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFindFriendSessionCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 1282594126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there was an error retrieving the friends list\n" },
		{ "ModuleRelativePath", "Classes/FindFriendSessionCallbackProxy.h" },
		{ "ToolTip", "Called when there was an error retrieving the friends list" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFindFriendSessionCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 1282594126
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindFriendSessionCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::ClassParams = {
		&UFindFriendSessionCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UFindFriendSessionCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFindFriendSessionCallbackProxy.OuterSingleton, Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFindFriendSessionCallbackProxy.OuterSingleton;
	}
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UFindFriendSessionCallbackProxy>()
	{
		return UFindFriendSessionCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindFriendSessionCallbackProxy);
	UFindFriendSessionCallbackProxy::~UFindFriendSessionCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_Users_logan_Documents_GitHub_GD3_P1_Violet_Plugins_AdvancedSessionsPlugin_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_logan_Documents_GitHub_GD3_P1_Violet_Plugins_AdvancedSessionsPlugin_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFindFriendSessionCallbackProxy, UFindFriendSessionCallbackProxy::StaticClass, TEXT("UFindFriendSessionCallbackProxy"), &Z_Registration_Info_UClass_UFindFriendSessionCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFindFriendSessionCallbackProxy), 1156107567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_logan_Documents_GitHub_GD3_P1_Violet_Plugins_AdvancedSessionsPlugin_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_1178672606(TEXT("/Script/AdvancedSessions"),
		Z_CompiledInDeferFile_FID_Users_logan_Documents_GitHub_GD3_P1_Violet_Plugins_AdvancedSessionsPlugin_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_logan_Documents_GitHub_GD3_P1_Violet_Plugins_AdvancedSessionsPlugin_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_FindFriendSessionCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
