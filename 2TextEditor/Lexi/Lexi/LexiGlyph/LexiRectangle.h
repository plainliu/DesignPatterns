#pragma once

#include "LexiGlyph.h"

class LexiRectangle : LexiGlyph {
private:
	int _x0, _y0, _x1, _y1;
public:
	void Draw( LexiWindow* );
};
