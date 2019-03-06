// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProjectSettingsBPLibrary.h"
#include "ProjectSettings.h"

UProjectSettingsBPLibrary::UProjectSettingsBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FString UProjectSettingsBPLibrary::GetProjectVersionFunction()
{
	FString ProjectVersion;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectVersion"),
		ProjectVersion,
		GGameIni
		);
	return ProjectVersion;
}

FString UProjectSettingsBPLibrary::GetProjectNameFunction()
{
	FString ProjectName;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectName"),
		ProjectName,
		GGameIni
	);
	return ProjectName;
}

FString UProjectSettingsBPLibrary::GetProjectCompanyNameFunction()
{
	FString ProjectCompanyName;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectCompanyName"),
		ProjectCompanyName,
		GGameIni
	);
	return ProjectCompanyName;
}
