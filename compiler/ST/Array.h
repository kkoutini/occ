#ifndef ARRAY_H
#define ARRAY_H
#include "variable.h"
#include <vector>
//#include "Symbol.h"
class Type;
using namespace std;
class Array : public Variable{
	
public:
	int Dimention;
	vector<int> array_alloc;

	Array(string name,int Dim ,Type* var_type);
	void set_alloc(vector<int>);
	void toString();

};
#endif