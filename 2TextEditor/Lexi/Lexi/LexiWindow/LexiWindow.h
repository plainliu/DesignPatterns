#pragma once

#include "stdafx.h"
#include "LexiWindowImp.h"

class LexiWindow {
public:
	LexiWindow( );
	~LexiWindow( );

	// ͼ��
	virtual void DrawCharacter( char );
	virtual void DrawRect( int, int, int, int );
	virtual void DrawLine( );
	virtual void DrawPolygon( );

	// ���ڹ���
	virtual void Redraw( );
	virtual void Raise( );
	virtual void Lower( );
	virtual void Iconify( );
	virtual void Deiconify( );

private:
	LexiWindowImp * mImp;
};
