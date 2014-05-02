#include "SemanticError.h"


SemanticError::SemanticError(string message):Error(message)
{
}

void SemanticError::toString(){
	cout<<"Semantic Issue: ";
	Error::toString();
}
SemanticError::~SemanticError(void)
{
}
