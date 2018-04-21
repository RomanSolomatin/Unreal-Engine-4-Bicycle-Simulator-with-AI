#pragma once

#include "EngineMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(ModuleLog, Log, All)

class UE4DuinoModule : public IModuleInterface
{
private:

public:
	UE4DuinoModule();
	
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};