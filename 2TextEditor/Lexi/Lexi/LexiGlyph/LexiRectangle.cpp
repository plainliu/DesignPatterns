#include "stdafx.h"
#include "LexiRectangle.h"

void LexiRectangle::Draw( LexiWindow* w ) {
	w->DrawRect( _x0, _y0, _x1, _y1 );
}
