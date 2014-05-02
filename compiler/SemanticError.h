#pragma once
#ifndef SEMANTICERROR_H
#define SEMANTICERROR_H
#include "Error.h"
#include<string>
class SemanticError :public Error
{
public:
	SemanticError(string);
	void toString();
	~SemanticError(void);
};

#endif;