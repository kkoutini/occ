#include "SyntaxError.h"

extern int lineNum;
extern int colNum;
extern string sourceFile;

SyntaxError::SyntaxError(string e) :Error(e)
{
	lineNo = lineNum;
	colNo = colNum;
	file=sourceFile;


}


SyntaxError::~SyntaxError()
{
}

void SyntaxError::toString(){
	cout << "Syntax Error::";
	Error::toString();
//	cout << "file:" << file << " line:" << lineNo << " col:" << colNo;
}