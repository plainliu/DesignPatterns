#pragma once

#include "LexiGlyph.h"

class LexiRow : LexiGlyph {
private:
	char c;
public:
	void Draw( LexiWindow* );
};
