#pragma once

#include "LexiWindowImp.h"

class LexiWindowSystemFactory {
public:
	virtual LexiWindowImp* CreateWindowImp( ) = 0;
	// virtual LexiWindowImp* CreateColorImp( ) = 0;
	// virtual LexiWindowImp* CreateFontImp( ) = 0;
};