#pragma once
#ifndef ENUMTYPE_H
#define ENUMTYPE_H
#include "ST\Type.h"
#include "VariableItems.h"
class EnumType:public Type
{
private:
	VariableItems* varItems;
public:
	EnumType(string);
	EnumType(EnumType*);
	VariableItems* getVariableItems();
	void setVariableItems(VariableItems*);
	void toString();
	string getTypeName();
};

#endif;