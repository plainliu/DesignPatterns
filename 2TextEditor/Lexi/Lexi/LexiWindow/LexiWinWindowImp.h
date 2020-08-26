#pragma once

#include "stdafx.h"
#include "LexiWindowImp.h"

class LexiWinWindowImp : public LexiWindowImp {
public:
	void DeviceRaise( );
	void DeviceRect( int x0, int y0, int x1, int y1 );
};
