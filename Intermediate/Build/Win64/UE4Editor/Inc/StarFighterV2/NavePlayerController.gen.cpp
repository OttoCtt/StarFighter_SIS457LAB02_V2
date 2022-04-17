// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighterV2/NavePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavePlayerController() {}
// Cross Module References
	STARFIGHTERV2_API UClass* Z_Construct_UClass_ANavePlayerController_NoRegister();
	STARFIGHTERV2_API UClass* Z_Construct_UClass_ANavePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_StarFighterV2();
// End Cross Module References
	DEFINE_FUNCTION(ANavePlayerController::execSetupInputComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInputComponent();
		P_NATIVE_END;
	}
	void ANavePlayerController::StaticRegisterNativesANavePlayerController()
	{
		UClass* Class = ANavePlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupInputComponent", &ANavePlayerController::execSetupInputComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANavePlayerController_SetupInputComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavePlayerController_SetupInputComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NavePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavePlayerController_SetupInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavePlayerController, nullptr, "SetupInputComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavePlayerController_SetupInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavePlayerController_SetupInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavePlayerController_SetupInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANavePlayerController_SetupInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANavePlayerController_NoRegister()
	{
		return ANavePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ANavePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighterV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANavePlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANavePlayerController_SetupInputComponent, "SetupInputComponent" }, // 344689758
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavePlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NavePlayerController.h" },
		{ "ModuleRelativePath", "NavePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavePlayerController_Statics::ClassParams = {
		&ANavePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavePlayerController, 1905972718);
	template<> STARFIGHTERV2_API UClass* StaticClass<ANavePlayerController>()
	{
		return ANavePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavePlayerController(Z_Construct_UClass_ANavePlayerController, &ANavePlayerController::StaticClass, TEXT("/Script/StarFighterV2"), TEXT("ANavePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
