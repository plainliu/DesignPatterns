#pragma once

#include "stdafx.h"
#include "LexiWindow.h"

class LexiGlyph {
public:
	// ����
	virtual void Draw( LexiWindow* ) = 0;
	//virtual void Bounds( Rect* ) = 0;

	// ������
	//virtual bool Intersects( Const Point& ) = 0;

	// �ṹ
	//virtual void Insert( Glyph*, int ) = 0;
	//virtual Vvoid Remove( Glyph* ) = 0;
	//virtual Glyph* Child( int ) = 0;
	//virtual Glyph* Parent( ) = 0;
};
