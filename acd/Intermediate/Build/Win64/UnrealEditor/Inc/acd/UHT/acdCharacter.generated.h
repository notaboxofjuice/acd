// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "acdCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACD_acdCharacter_generated_h
#error "acdCharacter.generated.h already included, missing '#pragma once' in acdCharacter.h"
#endif
#define ACD_acdCharacter_generated_h

#define FID_acd_Source_acd_acdCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAacdCharacter(); \
	friend struct Z_Construct_UClass_AacdCharacter_Statics; \
public: \
	DECLARE_CLASS(AacdCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/acd"), NO_API) \
	DECLARE_SERIALIZER(AacdCharacter)


#define FID_acd_Source_acd_acdCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AacdCharacter(AacdCharacter&&); \
	AacdCharacter(const AacdCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AacdCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AacdCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AacdCharacter) \
	NO_API virtual ~AacdCharacter();


#define FID_acd_Source_acd_acdCharacter_h_19_PROLOG
#define FID_acd_Source_acd_acdCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_acd_Source_acd_acdCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_acd_Source_acd_acdCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACD_API UClass* StaticClass<class AacdCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_acd_Source_acd_acdCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
