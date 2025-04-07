// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "acdGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACD_acdGameMode_generated_h
#error "acdGameMode.generated.h already included, missing '#pragma once' in acdGameMode.h"
#endif
#define ACD_acdGameMode_generated_h

#define FID_acd_Source_acd_acdGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAacdGameMode(); \
	friend struct Z_Construct_UClass_AacdGameMode_Statics; \
public: \
	DECLARE_CLASS(AacdGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/acd"), ACD_API) \
	DECLARE_SERIALIZER(AacdGameMode)


#define FID_acd_Source_acd_acdGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AacdGameMode(AacdGameMode&&); \
	AacdGameMode(const AacdGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACD_API, AacdGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AacdGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AacdGameMode) \
	ACD_API virtual ~AacdGameMode();


#define FID_acd_Source_acd_acdGameMode_h_9_PROLOG
#define FID_acd_Source_acd_acdGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_acd_Source_acd_acdGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_acd_Source_acd_acdGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACD_API UClass* StaticClass<class AacdGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_acd_Source_acd_acdGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
