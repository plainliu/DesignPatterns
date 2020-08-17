#pragma once

#include "LexiGlyph.h"

class LexiCharacter : LexiGlyph {
private:
	char c;
public:
	void Draw( LexiWindow* );
};
