// Plugins/GameGenieBFL/Source/GameGenieBFLEditor/Private/GameGenieBFLEditorModule.cpp
#include "Modules/ModuleManager.h"

class FGameGenieBFLEditorModule : public IModuleInterface
{
public:
	virtual void StartupModule() override {}
	virtual void ShutdownModule() override {}
};

IMPLEMENT_MODULE(FGameGenieBFLEditorModule, GameGenieBFLEditor)
