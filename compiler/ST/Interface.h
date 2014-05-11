#ifndef INTERFACE_H
#define INTERFACE_H
#include "Type.h"
#include <hash_map>
#include <map>
#include "Symbol.h"
#include "Protocol.h"
#include "../VariableItems.h"
#include "../MethodItems.h"
class ClassNode;

class Interface:public Type{
private:
		
	VariableItems* varItems;
	MethodItems* methodsItem;
	hash_map< string, Protocol*> son_protocols;
	ClassNode *classNode;
	Interface* inherit_interface;
	
public:
	Interface(string name);
	void setClassNode(ClassNode*);
	Interface(Interface*);
	MethodItems* getMethodsItem();
	void setMethodsItem(MethodItems*);
	VariableItems* getVariableItems();
	void setVariableItems(VariableItems*);

	void setInheritInterface(Interface*);
	Interface* getInheretInterface();

	virtual void generateCode();


	void add_son_protocol(Protocol*);
	Protocol* get_son_protocol(string);

	Method* getMethodByName(string name, Type* type, vector<DeclerationSelector*> v, bool isStatic);

	Method* getMethod(string name, vector<string> selectors, vector<Type*> types, bool isStatic=false);

	/*void add_Method(Method*);
	Method* Get_Method(string name,Type* type ,vector<Variable*> parameter);*/
	string getTypeName();
	void toString();
	
};
#endif