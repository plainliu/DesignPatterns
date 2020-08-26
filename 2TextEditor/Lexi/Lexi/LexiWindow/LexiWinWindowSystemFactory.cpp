#include "stdafx.h"
#include "LexiWinWindowSystemFactory.h"

LexiWinWindowSystemFactory::LexiWinWindowSystemFactory( )
{
}

LexiWinWindowSystemFactory::~LexiWinWindowSystemFactory( )
{
}

LexiWindowImp* LexiWinWindowSystemFactory::CreateWindowImp( )
{
	LexiWindowImp* imp = new LexiWinWindowImp( );
	return imp;
}
