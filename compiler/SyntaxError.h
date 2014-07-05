#pragma once
#include "Error.h"
class SyntaxError :
	public Error
{
public:
	SyntaxError(string);
	SyntaxError(string,int ,int ,string);
	virtual void toString();
	virtual ~SyntaxError();
};

