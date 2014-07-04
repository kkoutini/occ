#include "MethodsIndexer.h"
#include <string>
using namespace std;
map<Method*, int, methodCmp> MethodsIndexer::methods;
MethodItems MethodsIndexer::mi;

int MethodsIndexer::methodsCount;
MethodsIndexer::MethodsIndexer()
{
	
}


int MethodsIndexer::getMethodIndex(Method* m)
{
	if (methods.find(m) == methods.end())
	{
		methods[m] = ++methodsCount;
		mi.addMethod(m);
	}
	return  methods[m];
}

int MethodsIndexer::getMethodIndex(string message, vector<CallSelector*> v)
{
	Method* m = mi.getMethod(message, v);
	if (methods.find(m) == methods.end())
	{
		return -1;
	}
	return  methods[m];
}