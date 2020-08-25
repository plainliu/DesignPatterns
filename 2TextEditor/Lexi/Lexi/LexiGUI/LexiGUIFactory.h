#pragma once

#include "stdafx.h"
#include "LexiDecorate\LexiScroller.h"

class LexiGUIFactory {
public:
	virtual LexiScroller* CreateScrollBar( ) = 0;
	//virtual LexiButton* CreateButton( );
	//virtual LexiMenu* CreateMenu( );
};
