#pragma once

#include "stdafx.h"
#include "LexiWindow\LexiWindow.h"

class LexiGlyph {
public:
	// 表现
	virtual void Draw( LexiWindow* ) = 0;
	//virtual void Bounds( Rect* ) = 0;

	// 点击检测
	//virtual bool Intersects( Const Point& ) = 0;

	// 结构
	virtual void Insert( LexiGlyph*, int );
	//virtual Vvoid Remove( Glyph* ) = 0;
	//virtual Glyph* Child( int ) = 0;
	//virtual Glyph* Parent( ) = 0;
};
