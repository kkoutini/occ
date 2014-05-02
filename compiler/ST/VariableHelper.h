#ifndef VARIABLEHELPER_H
#define VARIABLEHELPER_H

#include <vector>
#include "variable.h"


class VariableHelper{
private:
		
	vector<char*>variablesNames;
	
	
public:
	void addVariable(char* id);	
	
};
#endif