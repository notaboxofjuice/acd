// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "acdPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AacdCharacter;
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ACD_acdPickUpComponent_generated_h
#error "acdPickUpComponent.generated.h already included, missing '#pragma once' in acdPickUpComponent.h"
#endif
#define ACD_acdPickUpComponent_generated_h

#define FID_acd_Source_acd_acdPickUpComponent_h_12_DELEGATE \
ACD_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AacdCharacter* PickUpCharacter);


#define FID_acd_Source_acd_acdPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_acd_Source_acd_acdPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUacdPickUpComponent(); \
	friend struct Z_Construct_UClass_UacdPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UacdPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/acd"), NO_API) \
	DECLARE_SERIALIZER(UacdPickUpComponent)


#define FID_acd_Source_acd_acdPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UacdPickUpComponent(UacdPickUpComponent&&); \
	UacdPickUpComponent(const UacdPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UacdPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UacdPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UacdPickUpComponent) \
	NO_API virtual ~UacdPickUpComponent();


#define FID_acd_Source_acd_acdPickUpComponent_h_14_PROLOG
#define FID_acd_Source_acd_acdPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_acd_Source_acd_acdPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_acd_Source_acd_acdPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_acd_Source_acd_acdPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACD_API UClass* StaticClass<class UacdPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_acd_Source_acd_acdPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
