#pragma once
#include "Error.h"
class SyntaxError :
	public Error
{
public:
	SyntaxError(string);
	virtual void toString();
	virtual ~SyntaxError();
};

