#include "stdafx.h"
#include "LexiMotifFactory.h"

LexiScroller* LexiMotifFactory::CreateScrollBar( )
{
	return new LexiScroller( );
}
