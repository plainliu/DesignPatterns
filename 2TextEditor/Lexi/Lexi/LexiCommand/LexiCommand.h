#pragma once

#include "stdafx.h"

class LexiCommand
{
public:
	LexiCommand( );
	~LexiCommand( );

	virtual void Execute( ) = 0;

private:

};
