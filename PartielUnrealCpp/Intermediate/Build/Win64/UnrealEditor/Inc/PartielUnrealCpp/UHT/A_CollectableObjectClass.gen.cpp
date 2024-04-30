// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartielUnrealCpp/Public/A_CollectableObjectClass.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA_CollectableObjectClass() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PARTIELUNREALCPP_API UClass* Z_Construct_UClass_AA_CollectableObjectClass();
	PARTIELUNREALCPP_API UClass* Z_Construct_UClass_AA_CollectableObjectClass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PartielUnrealCpp();
// End Cross Module References
	DEFINE_FUNCTION(AA_CollectableObjectClass::execOnSphereBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSphereBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AA_CollectableObjectClass::StaticRegisterNativesAA_CollectableObjectClass()
	{
		UClass* Class = AA_CollectableObjectClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSphereBeginOverlap", &AA_CollectableObjectClass::execOnSphereBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics
	{
		struct A_CollectableObjectClass_eventOnSphereBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(A_CollectableObjectClass_eventOnSphereBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(A_CollectableObjectClass_eventOnSphereBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(A_CollectableObjectClass_eventOnSphereBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(A_CollectableObjectClass_eventOnSphereBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((A_CollectableObjectClass_eventOnSphereBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(A_CollectableObjectClass_eventOnSphereBeginOverlap_Parms), &Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(A_CollectableObjectClass_eventOnSphereBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/A_CollectableObjectClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AA_CollectableObjectClass, nullptr, "OnSphereBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::A_CollectableObjectClass_eventOnSphereBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::A_CollectableObjectClass_eventOnSphereBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AA_CollectableObjectClass);
	UClass* Z_Construct_UClass_AA_CollectableObjectClass_NoRegister()
	{
		return AA_CollectableObjectClass::StaticClass();
	}
	struct Z_Construct_UClass_AA_CollectableObjectClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AA_CollectableObjectClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PartielUnrealCpp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AA_CollectableObjectClass_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AA_CollectableObjectClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AA_CollectableObjectClass_OnSphereBeginOverlap, "OnSphereBeginOverlap" }, // 3814482667
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AA_CollectableObjectClass_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_CollectableObjectClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "A_CollectableObjectClass.h" },
		{ "ModuleRelativePath", "Public/A_CollectableObjectClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_CollectableObjectClass_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "A_CollectableObjectClass" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/A_CollectableObjectClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_CollectableObjectClass_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_CollectableObjectClass, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AA_CollectableObjectClass_Statics::NewProp_SphereComponent_MetaData), Z_Construct_UClass_AA_CollectableObjectClass_Statics::NewProp_SphereComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_CollectableObjectClass_Statics::NewProp_SphereMeshComponent_MetaData[] = {
		{ "Category", "A_CollectableObjectClass" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/A_CollectableObjectClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_CollectableObjectClass_Statics::NewProp_SphereMeshComponent = { "SphereMeshComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AA_CollectableObjectClass, SphereMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AA_CollectableObjectClass_Statics::NewProp_SphereMeshComponent_MetaData), Z_Construct_UClass_AA_CollectableObjectClass_Statics::NewProp_SphereMeshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AA_CollectableObjectClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_CollectableObjectClass_Statics::NewProp_SphereComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_CollectableObjectClass_Statics::NewProp_SphereMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AA_CollectableObjectClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_CollectableObjectClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AA_CollectableObjectClass_Statics::ClassParams = {
		&AA_CollectableObjectClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AA_CollectableObjectClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AA_CollectableObjectClass_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AA_CollectableObjectClass_Statics::Class_MetaDataParams), Z_Construct_UClass_AA_CollectableObjectClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AA_CollectableObjectClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AA_CollectableObjectClass()
	{
		if (!Z_Registration_Info_UClass_AA_CollectableObjectClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AA_CollectableObjectClass.OuterSingleton, Z_Construct_UClass_AA_CollectableObjectClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AA_CollectableObjectClass.OuterSingleton;
	}
	template<> PARTIELUNREALCPP_API UClass* StaticClass<AA_CollectableObjectClass>()
	{
		return AA_CollectableObjectClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AA_CollectableObjectClass);
	AA_CollectableObjectClass::~AA_CollectableObjectClass() {}
	struct Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_Public_A_CollectableObjectClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_Public_A_CollectableObjectClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AA_CollectableObjectClass, AA_CollectableObjectClass::StaticClass, TEXT("AA_CollectableObjectClass"), &Z_Registration_Info_UClass_AA_CollectableObjectClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AA_CollectableObjectClass), 1271755205U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_Public_A_CollectableObjectClass_h_2118447551(TEXT("/Script/PartielUnrealCpp"),
		Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_Public_A_CollectableObjectClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_Public_A_CollectableObjectClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
