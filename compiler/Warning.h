#pragma once
#include "Error.h"
class Warning :
	public Error
{
public:

	Warning(string message) :Error(message)
	{

	}

	void Warning::toString(){
		cout << "Warning Issue: ";
		Error::toString();
	}
	virtual ~Warning()
	{
	}
};

