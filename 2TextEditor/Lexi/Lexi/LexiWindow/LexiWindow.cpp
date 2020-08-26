#include "stdafx.h"
#include "LexiWindow.h"

LexiWindow::LexiWindow( )
{
	// windowSystemFactoryÎªµ¥Àý
	// mImp = windowSystemFactory->CreateWindowImp( );
}

LexiWindow::~LexiWindow( )
{
}

void LexiWindow::DrawCharacter( char c )
{

}

void LexiWindow::DrawRect( int x0, int y0, int x1, int y1 ) {
	mImp->DeviceRect( x0, y0, x1, y1 );
}

void LexiWindow::DrawLine( )
{

}

void LexiWindow::DrawPolygon( )
{

}

void LexiWindow::Redraw( )
{

}

void LexiWindow::Raise( )
{

}

void LexiWindow::Lower( )
{

}

void LexiWindow::Iconify( )
{

}

void LexiWindow::Deiconify( )
{

}