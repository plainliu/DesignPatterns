#include "stdafx.h"
#include "LexiBorder.h"

void LexiBorder::Draw( LexiWindow* w )
{
	LexiMonoGlyph::Draw( w );
	DrawBorder( w );
}

void LexiBorder::DrawBorder( LexiWindow* w )
{
}
