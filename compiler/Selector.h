#pragma once
#ifndef SELECTOR_H
#define SELECTOR_H
#include<string>
#include<vector>
using namespace std;
#include "ST\variable.h"
#include "ST\Symbol.h"
class Method;
class Variable;

class Selector :public Symbol
{
private:
	string name;
	vector<Variable*> _vars;
	Variable* variable;
public:
	Selector(string, vector<Variable*> vars);
		Selector(Selector*);
		static bool compareSelectorName(Selector*,Selector*);
		Variable* getVariable();
		void setVariable(Variable*);

	~Selector(void);
};

#endif;