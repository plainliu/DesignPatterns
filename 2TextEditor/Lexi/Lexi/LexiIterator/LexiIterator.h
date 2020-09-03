#pragma once

#include "stdafx.h"
#include "LexiGlyph\LexiGlyph.h"

class LexiIterator
{
public:
	virtual void First( ) = 0;
	virtual void Next( ) = 0;
	virtual bool IsDone( ) = 0;
	virtual LexiGlyph* CurrentItem( ) = 0;

private:

};
