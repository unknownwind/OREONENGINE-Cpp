#include "pch.h"
#include <iostream>
#include "core\CoreEngine.h"

int main()
{
	CoreEngine coreEngine = CoreEngine();
	coreEngine.init();
	coreEngine.start();
}