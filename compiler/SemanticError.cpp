#include "SemanticError.h"


SemanticError::SemanticError(string message):Error(message)
{
}
SemanticError::SemanticError(string message,int col,int num,string _file) : Error(message)
{
	file = _file;
	lineNo = num;
	colNo = col;
}


void SemanticError::toString(){
	cout<<"Error"<<"::";
	Error::toString();
}
SemanticError::~SemanticError(void)
{
}
