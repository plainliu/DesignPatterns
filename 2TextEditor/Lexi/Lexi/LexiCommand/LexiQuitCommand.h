#pragma once

#include "stdafx.h"
#include "LexiCommand.h"

class LexiQuitCommand : LexiCommand
{
public:
	LexiQuitCommand( );
	~LexiQuitCommand( );

	void Execute( );

private:

};
