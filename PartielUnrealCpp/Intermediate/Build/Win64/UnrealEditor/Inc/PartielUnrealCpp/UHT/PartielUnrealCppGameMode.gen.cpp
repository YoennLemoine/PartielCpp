// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PartielUnrealCpp/PartielUnrealCppGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartielUnrealCppGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PARTIELUNREALCPP_API UClass* Z_Construct_UClass_APartielUnrealCppGameMode();
	PARTIELUNREALCPP_API UClass* Z_Construct_UClass_APartielUnrealCppGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PartielUnrealCpp();
// End Cross Module References
	void APartielUnrealCppGameMode::StaticRegisterNativesAPartielUnrealCppGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APartielUnrealCppGameMode);
	UClass* Z_Construct_UClass_APartielUnrealCppGameMode_NoRegister()
	{
		return APartielUnrealCppGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APartielUnrealCppGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APartielUnrealCppGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PartielUnrealCpp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APartielUnrealCppGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartielUnrealCppGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PartielUnrealCppGameMode.h" },
		{ "ModuleRelativePath", "PartielUnrealCppGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APartielUnrealCppGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APartielUnrealCppGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APartielUnrealCppGameMode_Statics::ClassParams = {
		&APartielUnrealCppGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APartielUnrealCppGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APartielUnrealCppGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APartielUnrealCppGameMode()
	{
		if (!Z_Registration_Info_UClass_APartielUnrealCppGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APartielUnrealCppGameMode.OuterSingleton, Z_Construct_UClass_APartielUnrealCppGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APartielUnrealCppGameMode.OuterSingleton;
	}
	template<> PARTIELUNREALCPP_API UClass* StaticClass<APartielUnrealCppGameMode>()
	{
		return APartielUnrealCppGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APartielUnrealCppGameMode);
	APartielUnrealCppGameMode::~APartielUnrealCppGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APartielUnrealCppGameMode, APartielUnrealCppGameMode::StaticClass, TEXT("APartielUnrealCppGameMode"), &Z_Registration_Info_UClass_APartielUnrealCppGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APartielUnrealCppGameMode), 1398903687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppGameMode_h_3811369559(TEXT("/Script/PartielUnrealCpp"),
		Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
