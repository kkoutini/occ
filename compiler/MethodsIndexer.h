#pragma once
#include <map>
#include "MethodItems.h"

struct methodCmp{
	bool operator()(const Method* const & a, const Method*const& b){
		return *a < *b;
	}
}; 

class MethodsIndexer
{
private:
	MethodsIndexer();
public:
	static map<Method*, int, methodCmp> methods;
	static MethodItems mi;

	static int methodsCount;
	static int getMethodIndex(Method* m);
	static int MethodsIndexer::getMethodIndex(string message, vector<CallSelector*> v);
};

