// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "acdWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AacdCharacter;
#ifdef ACD_acdWeaponComponent_generated_h
#error "acdWeaponComponent.generated.h already included, missing '#pragma once' in acdWeaponComponent.h"
#endif
#define ACD_acdWeaponComponent_generated_h

#define FID_acd_Source_acd_acdWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_acd_Source_acd_acdWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUacdWeaponComponent(); \
	friend struct Z_Construct_UClass_UacdWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UacdWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/acd"), NO_API) \
	DECLARE_SERIALIZER(UacdWeaponComponent)


#define FID_acd_Source_acd_acdWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UacdWeaponComponent(UacdWeaponComponent&&); \
	UacdWeaponComponent(const UacdWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UacdWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UacdWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UacdWeaponComponent) \
	NO_API virtual ~UacdWeaponComponent();


#define FID_acd_Source_acd_acdWeaponComponent_h_11_PROLOG
#define FID_acd_Source_acd_acdWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_acd_Source_acd_acdWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_acd_Source_acd_acdWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_acd_Source_acd_acdWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACD_API UClass* StaticClass<class UacdWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_acd_Source_acd_acdWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
