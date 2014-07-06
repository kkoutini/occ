#pragma once
#include "Error.h"
class Warning :
	public Error
{
public:

	Warning(string message) :Error(message)
	{

	}
	Warning(string message,int col ,int line,string _file) :Error(message)
	{
		colNo = col;
		lineNo = line;
		file = _file;
	}

	void Warning::toString(){
		cout << "Warning"<<"::";
		Error::toString();
	}
	virtual ~Warning()
	{
	}
};

