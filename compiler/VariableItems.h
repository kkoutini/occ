#ifndef VARIABLEITEMS_H
#define VARIABLEITEMS_H

#include <hash_map>
#include "ST\variable.h"

#pragma once
class VariableItems
{
public:
	VariableItems(void);
	VariableItems(VariableItems*);
	hash_map< string, Variable*>variables;
			void add_variable(Variable*);
	Variable* get_variable(string);
	void toString();
	~VariableItems(void);
};

#endif;