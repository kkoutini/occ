#ifndef TYPE_H
#define TYPE_H
#include "Symbol.h"
#include "..\Selector.h"
#include <map>
#include<hash_map>
#include <vector>
#include <iostream>
class Method;
class Prog;
class Variable;
class Selector;
enum AccessModifier{
	Public = 0,
	Private,
	Protected
};
enum completness{
	under_constraction=0,
	implemented,
	finished
};
static int method_id = 0;
class Type : public Symbol{

protected:
	int _typeSize; // the size of an instance from this type in memory
public:
	completness status;
	bool declared;/// multi-parse

	Type(string name,int typeSize =4);
	Type(Type*);

	virtual void toString();
	//virtual Method* get_method(string name, Symbol* return_type);
	//virtual Method* get_method (Method*);

	virtual string getTypeName();
	virtual int getTypeSize();
	void setImplemented();
	completness getStatus();
	void setStatus(completness);
	virtual void generateCode(){
		
	}
	bool static equal(Type*,Type*);
	//virtual void to_string();	
//protected:
//	multimap<const string, Method*> get_methods();

};



#endif