#pragma once
#ifndef SELECTOR_H
#define SELECTOR_H
#include<string>
#include "ST\variable.h"
#include "ST\Symbol.h"
class Method;
class Variable;

class Selector :public Symbol
{
private:
	string name;
	Variable* variable;
public:
	Selector(string,Variable*);
		Selector(Selector*);
		static bool compareSelectorName(Selector*,Selector*);
		Variable* getVariable();
		void setVariable(Variable*);

	~Selector(void);
};

#endif;