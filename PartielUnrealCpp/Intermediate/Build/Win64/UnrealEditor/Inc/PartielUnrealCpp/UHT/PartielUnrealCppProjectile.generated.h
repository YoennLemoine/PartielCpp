// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PartielUnrealCppProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PARTIELUNREALCPP_PartielUnrealCppProjectile_generated_h
#error "PartielUnrealCppProjectile.generated.h already included, missing '#pragma once' in PartielUnrealCppProjectile.h"
#endif
#define PARTIELUNREALCPP_PartielUnrealCppProjectile_generated_h

#define FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h_15_SPARSE_DATA
#define FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h_15_ACCESSORS
#define FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPartielUnrealCppProjectile(); \
	friend struct Z_Construct_UClass_APartielUnrealCppProjectile_Statics; \
public: \
	DECLARE_CLASS(APartielUnrealCppProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PartielUnrealCpp"), NO_API) \
	DECLARE_SERIALIZER(APartielUnrealCppProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APartielUnrealCppProjectile(APartielUnrealCppProjectile&&); \
	NO_API APartielUnrealCppProjectile(const APartielUnrealCppProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APartielUnrealCppProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APartielUnrealCppProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APartielUnrealCppProjectile) \
	NO_API virtual ~APartielUnrealCppProjectile();


#define FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h_12_PROLOG
#define FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h_15_SPARSE_DATA \
	FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h_15_ACCESSORS \
	FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTIELUNREALCPP_API UClass* StaticClass<class APartielUnrealCppProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ylemoine_Documents_Unreal_Projects_PartielUnrealCpp_Source_PartielUnrealCpp_PartielUnrealCppProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
