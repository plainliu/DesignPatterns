#pragma once

#include "stdafx.h"

class LexiWindowImp {
public:
	virtual void DeviceRaise( ) = 0;
	virtual void DeviceRect( int x0, int y0, int x1, int y1 ) = 0;
};
