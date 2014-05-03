#ifndef METHODITEMS_H
#define METHODITEMS_H
#pragma once
#include<map>
#include<hash_map>
#include "ST\Method.h"
class MethodItems
{
public:
		multimap<const string, Method*> methods;
	MethodItems(void);
	MethodItems(MethodItems*);
	bool addMethod(Method*);
	void setMethods(multimap<const string,Method*>);
	Method* getMethod(string name,Type* type ,vector<Selector*>,bool isStatic);
	Method* MethodItems::getMethod(string name, vector<string> selectors, vector<Type*> types, bool isStatic);
	void toString();
	~MethodItems(void);
};

#endif;