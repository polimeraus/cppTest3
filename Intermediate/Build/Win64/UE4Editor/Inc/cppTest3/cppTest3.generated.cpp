// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "cppTest3.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1cppTest3() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();

	CPPTEST3_API class UClass* Z_Construct_UClass_AcppTest3Character_NoRegister();
	CPPTEST3_API class UClass* Z_Construct_UClass_AcppTest3Character();
	CPPTEST3_API class UClass* Z_Construct_UClass_AcppTest3GameMode_NoRegister();
	CPPTEST3_API class UClass* Z_Construct_UClass_AcppTest3GameMode();
	CPPTEST3_API class UClass* Z_Construct_UClass_AMySphere_NoRegister();
	CPPTEST3_API class UClass* Z_Construct_UClass_AMySphere();
	CPPTEST3_API class UClass* Z_Construct_UClass_ASphereSpawner2_NoRegister();
	CPPTEST3_API class UClass* Z_Construct_UClass_ASphereSpawner2();
	CPPTEST3_API class UPackage* Z_Construct_UPackage__Script_cppTest3();
	void AcppTest3Character::StaticRegisterNativesAcppTest3Character()
	{
	}
	UClass* Z_Construct_UClass_AcppTest3Character_NoRegister()
	{
		return AcppTest3Character::StaticClass();
	}
	UClass* Z_Construct_UClass_AcppTest3Character()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_cppTest3();
			OuterClass = AcppTest3Character::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, AcppTest3Character), 0x0010000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, AcppTest3Character), 0x0010000000020015);
				UProperty* NewProp_FollowCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FollowCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FollowCamera, AcppTest3Character), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, AcppTest3Character), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AcppTest3Character> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("cppTest3Character.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("cppTest3Character.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("cppTest3Character.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("cppTest3Character.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ModuleRelativePath"), TEXT("cppTest3Character.h"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ToolTip"), TEXT("Follow camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("cppTest3Character.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera behind the character"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AcppTest3Character, 1140083015);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AcppTest3Character(Z_Construct_UClass_AcppTest3Character, &AcppTest3Character::StaticClass, TEXT("/Script/cppTest3"), TEXT("AcppTest3Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcppTest3Character);
	void AcppTest3GameMode::StaticRegisterNativesAcppTest3GameMode()
	{
	}
	UClass* Z_Construct_UClass_AcppTest3GameMode_NoRegister()
	{
		return AcppTest3GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AcppTest3GameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_cppTest3();
			OuterClass = AcppTest3GameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AcppTest3GameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("cppTest3GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("cppTest3GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AcppTest3GameMode, 1965711166);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AcppTest3GameMode(Z_Construct_UClass_AcppTest3GameMode, &AcppTest3GameMode::StaticClass, TEXT("/Script/cppTest3"), TEXT("AcppTest3GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcppTest3GameMode);
	void AMySphere::StaticRegisterNativesAMySphere()
	{
	}
	UClass* Z_Construct_UClass_AMySphere_NoRegister()
	{
		return AMySphere::StaticClass();
	}
	UClass* Z_Construct_UClass_AMySphere()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_cppTest3();
			OuterClass = AMySphere::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_SphereMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SphereMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SphereMesh, AMySphere), 0x0010000000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_mySphereComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("mySphereComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(mySphereComponent, AMySphere), 0x0010000000080009, Z_Construct_UClass_USphereComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AMySphere> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MySphere.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MySphere.h"));
				MetaData->SetValue(NewProp_SphereMesh, TEXT("Category"), TEXT("Spawn"));
				MetaData->SetValue(NewProp_SphereMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SphereMesh, TEXT("ModuleRelativePath"), TEXT("MySphere.h"));
				MetaData->SetValue(NewProp_mySphereComponent, TEXT("Category"), TEXT("Spawn"));
				MetaData->SetValue(NewProp_mySphereComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_mySphereComponent, TEXT("ModuleRelativePath"), TEXT("MySphere.h"));
				MetaData->SetValue(NewProp_mySphereComponent, TEXT("ToolTip"), TEXT("bisim k\x00fcrenin tan\x0131mlar\x0131 bir k\x00fcre komponenti ve bir mesh"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMySphere, 1134281710);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMySphere(Z_Construct_UClass_AMySphere, &AMySphere::StaticClass, TEXT("/Script/cppTest3"), TEXT("AMySphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMySphere);
	void ASphereSpawner2::StaticRegisterNativesASphereSpawner2()
	{
	}
	UClass* Z_Construct_UClass_ASphereSpawner2_NoRegister()
	{
		return ASphereSpawner2::StaticClass();
	}
	UClass* Z_Construct_UClass_ASphereSpawner2()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_cppTest3();
			OuterClass = ASphereSpawner2::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ASphereSpawner2> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SphereSpawner2.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SphereSpawner2.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASphereSpawner2, 230551312);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASphereSpawner2(Z_Construct_UClass_ASphereSpawner2, &ASphereSpawner2::StaticClass, TEXT("/Script/cppTest3"), TEXT("ASphereSpawner2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASphereSpawner2);
	UPackage* Z_Construct_UPackage__Script_cppTest3()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/cppTest3")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xF4ED78C2;
			Guid.B = 0x13BC3754;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
