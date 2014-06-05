#include "MethodsIndexer.h"

map<Method*, int, methodCmp> MethodsIndexer::methods;

int MethodsIndexer::methodsCount;
MethodsIndexer::MethodsIndexer()
{
}


 int MethodsIndexer::getMethodIndex(Method* m)
{
	 if (methods.find(m) == methods.end())
	 {
		 methods[m] = ++methodsCount;
	 }
	 return  methods[m];
}