#ifndef ERROR_H
#define ERROR_H
#include <string>
#include <iostream>
using namespace std;
//enum ErrorType{WARNING=0,ERROR};
 class Error
{
protected:
	string message;
	int lineNo,colNo;
	string file;
//	ErrorType errorType;
	
public:
	Error(string);
	void virtual toString()=0;
	
};

#endif;