#pragma once
#ifndef STRUCT_H
#define STRUCT_H
#include "ST\Type.h"
#include "VariableItems.h"
class Struct :public Type
{
private:
		
	VariableItems* varItems;
	//multimap< string, Method*> methods;
	
public:
	Struct(string name);
	Struct(Struct*);
	VariableItems* getVariableItems();
	void setVariableItems(VariableItems*);





	/*void add_Method(Method*);
	Method* Get_Method(string name,Type* type ,vector<Variable*> parameter);*/
	string getTypeName();
	void toString();
	
};

#endif;