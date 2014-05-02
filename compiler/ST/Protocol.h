#pragma once
#ifndef Protocol_H
#define Protocol_H
#include <hash_map>
#include <map>
#include "Symbol.h"
#include "variable.h"
#include "Method.h"
#include "../MethodItems.h"




class Protocol:public Type{
private:
		
	hash_map< string, Protocol*> inheritedProtocols;
	MethodItems* methodsItem;
	
public:
		MethodItems* getMethodsItem();
	void setMethodsItem(MethodItems*);
	Protocol(string name);
	void setMethods(multimap<string,Method*> methods);
	void add_inherited_protocol(Protocol*);
	Protocol* get_inherited_protocol(string);
	string getTypeName();
/*	void add_Method(Method*);
	Method* Get_Method(string name,Type* type ,vector<Variable*> parameter);*/		
	void toString();
};
#endif