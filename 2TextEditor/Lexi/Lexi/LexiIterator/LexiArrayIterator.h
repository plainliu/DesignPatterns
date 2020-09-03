#pragma once

#include "stdafx.h"
#include "LexiIterator.h"

class LexiArrayIterator : LexiIterator
{
public:
	LexiArrayIterator( );
	~LexiArrayIterator( );

	void First( );
	void Next( );
	bool IsDone( );
	LexiGlyph* CurrentItem( );

private:

};
