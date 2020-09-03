#pragma once

#include "stdafx.h"
#include "LexiIterator.h"

class LexiListIterator : LexiIterator
{
public:
	LexiListIterator( );
	~LexiListIterator( );

	void First( );
	void Next( );
	bool IsDone( );
	LexiGlyph* CurrentItem( );

private:

};
