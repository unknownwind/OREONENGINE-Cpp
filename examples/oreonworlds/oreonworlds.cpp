#include "pch.h"
#include <iostream>
#include "core\core_engine.h"

int main()
{
	CoreEngine coreEngine = CoreEngine();
	coreEngine.init();
	coreEngine.start();
}