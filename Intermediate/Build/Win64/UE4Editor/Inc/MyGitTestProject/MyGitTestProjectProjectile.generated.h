// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MYGITTESTPROJECT_MyGitTestProjectProjectile_generated_h
#error "MyGitTestProjectProjectile.generated.h already included, missing '#pragma once' in MyGitTestProjectProjectile.h"
#endif
#define MYGITTESTPROJECT_MyGitTestProjectProjectile_generated_h

#define MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGitTestProjectProjectile(); \
	friend struct Z_Construct_UClass_AMyGitTestProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyGitTestProjectProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyGitTestProject"), NO_API) \
	DECLARE_SERIALIZER(AMyGitTestProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyGitTestProjectProjectile(); \
	friend struct Z_Construct_UClass_AMyGitTestProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyGitTestProjectProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyGitTestProject"), NO_API) \
	DECLARE_SERIALIZER(AMyGitTestProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGitTestProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGitTestProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGitTestProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGitTestProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGitTestProjectProjectile(AMyGitTestProjectProjectile&&); \
	NO_API AMyGitTestProjectProjectile(const AMyGitTestProjectProjectile&); \
public:


#define MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGitTestProjectProjectile(AMyGitTestProjectProjectile&&); \
	NO_API AMyGitTestProjectProjectile(const AMyGitTestProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGitTestProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGitTestProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGitTestProjectProjectile)


#define MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMyGitTestProjectProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMyGitTestProjectProjectile, ProjectileMovement); }


#define MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_9_PROLOG
#define MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_RPC_WRAPPERS \
	MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_INCLASS \
	MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_INCLASS_NO_PURE_DECLS \
	MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyGitTestProject_Source_MyGitTestProject_MyGitTestProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
