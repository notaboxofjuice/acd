// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "acd/acdGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeacdGameMode() {}

// Begin Cross Module References
ACD_API UClass* Z_Construct_UClass_AacdGameMode();
ACD_API UClass* Z_Construct_UClass_AacdGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_acd();
// End Cross Module References

// Begin Class AacdGameMode
void AacdGameMode::StaticRegisterNativesAacdGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AacdGameMode);
UClass* Z_Construct_UClass_AacdGameMode_NoRegister()
{
	return AacdGameMode::StaticClass();
}
struct Z_Construct_UClass_AacdGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "acdGameMode.h" },
		{ "ModuleRelativePath", "acdGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AacdGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AacdGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_acd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AacdGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AacdGameMode_Statics::ClassParams = {
	&AacdGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AacdGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AacdGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AacdGameMode()
{
	if (!Z_Registration_Info_UClass_AacdGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AacdGameMode.OuterSingleton, Z_Construct_UClass_AacdGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AacdGameMode.OuterSingleton;
}
template<> ACD_API UClass* StaticClass<AacdGameMode>()
{
	return AacdGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AacdGameMode);
AacdGameMode::~AacdGameMode() {}
// End Class AacdGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_acd_Source_acd_acdGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AacdGameMode, AacdGameMode::StaticClass, TEXT("AacdGameMode"), &Z_Registration_Info_UClass_AacdGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AacdGameMode), 3585407035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_acd_Source_acd_acdGameMode_h_752448073(TEXT("/Script/acd"),
	Z_CompiledInDeferFile_FID_acd_Source_acd_acdGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_acd_Source_acd_acdGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
