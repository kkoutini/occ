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
class Type;
class Selector :public Symbol
{
public:
	string name;
	vector<Variable*> _vars;

	vector<Type*> _types;

	Selector(string, vector<Variable*> vars);
		Selector(Selector*);
		static bool compareSelector(Selector*,Selector*);
		void updateTypesFromVars();
		bool operator==(const Selector &b){
			if (name != b.name)
				return false;
			if (_vars.size() != b._vars.size())
				return false;
			for (int i = 0; i < _types.size(); i++)
			{
				if (b._types[i] != _types[i])
					return false;
			}
			return true;

		}
	~Selector(void);
};

#endif;