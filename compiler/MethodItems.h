#ifndef METHODITEMS_H
#define METHODITEMS_H
#pragma once
#include<map>
#include<hash_map>
#include "ST\Method.h"
#include"CallSelector.h"
class MethodItems
{
public:
		multimap<const string, Method*> methods;
	MethodItems(void);
	MethodItems(MethodItems*);
	bool addMethod(Method*);
	void setMethods(multimap<const string,Method*>);
	Method* getMethod(string name, Type* type, vector<DeclerationSelector*>, bool isStatic);
	Method* MethodItems::getOverloadedMethod(string message, vector<CallSelector*> selectors);

	
	Method* getMethod(string message, vector<CallSelector*> v);
	void toString();
	~MethodItems(void);
};

#endif;