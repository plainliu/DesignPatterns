#pragma once

#include "LexiWinWindowImp.h"
#include "LexiWindowSystemFactory.h"

class LexiWinWindowSystemFactory : LexiWindowSystemFactory
{
public:
	LexiWinWindowSystemFactory( );
	~LexiWinWindowSystemFactory( );

	LexiWindowImp* CreateWindowImp( );
private:

};
