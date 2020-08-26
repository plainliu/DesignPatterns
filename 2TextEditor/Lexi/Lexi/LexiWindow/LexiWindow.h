#pragma once

#include "stdafx.h"
#include "LexiWindowImp.h"

class LexiWindow {
public:
	LexiWindow( );
	~LexiWindow( );

	// 图形
	virtual void DrawCharacter( char );
	virtual void DrawRect( int, int, int, int );
	virtual void DrawLine( );
	virtual void DrawPolygon( );

	// 窗口管理
	virtual void Redraw( );
	virtual void Raise( );
	virtual void Lower( );
	virtual void Iconify( );
	virtual void Deiconify( );

private:
	LexiWindowImp * mImp;
};
