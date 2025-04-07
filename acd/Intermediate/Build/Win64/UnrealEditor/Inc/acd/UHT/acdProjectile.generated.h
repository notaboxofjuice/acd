// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "acdProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ACD_acdProjectile_generated_h
#error "acdProjectile.generated.h already included, missing '#pragma once' in acdProjectile.h"
#endif
#define ACD_acdProjectile_generated_h

#define FID_acd_Source_acd_acdProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_acd_Source_acd_acdProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAacdProjectile(); \
	friend struct Z_Construct_UClass_AacdProjectile_Statics; \
public: \
	DECLARE_CLASS(AacdProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/acd"), NO_API) \
	DECLARE_SERIALIZER(AacdProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_acd_Source_acd_acdProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AacdProjectile(AacdProjectile&&); \
	AacdProjectile(const AacdProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AacdProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AacdProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AacdProjectile) \
	NO_API virtual ~AacdProjectile();


#define FID_acd_Source_acd_acdProjectile_h_12_PROLOG
#define FID_acd_Source_acd_acdProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_acd_Source_acd_acdProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_acd_Source_acd_acdProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_acd_Source_acd_acdProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACD_API UClass* StaticClass<class AacdProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_acd_Source_acd_acdProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
