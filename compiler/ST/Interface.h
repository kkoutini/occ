#ifndef INTERFACE_H
#define INTERFACE_H
#include "Type.h"
#include <hash_map>
#include <map>
#include "Symbol.h"
#include "Protocol.h"
#include "../VariableItems.h"
#include "../MethodItems.h"
#include "../CallSelector.h"
extern ScoopNode* globalScoop;

class ClassNode;

class Interface:public Type{
private:
	VariableItems* varItems;
	MethodItems* methodsItem;
	hash_map< string, Protocol*> son_protocols;
	ClassNode *classNode;
	Interface* inherit_interface;
	int _id=-1;
public:
	Interface* static_twin;

	static int interfacesCount;

	Interface(string name,bool is_static_twin=false);
	ClassNode* getScoop(){
		return classNode;
	}
	string Interface::getVtableLabel();
	string Interface::getVtableString();
	bool isDescendentOf(Interface* i);

	int Interface::getObjectIdentifiersSize();

	string Interface::getStaticPointerStr();
	int  Interface::getObjectSize();
	int  Interface::getDataMembersSize();

	int getId();
	MethodItems* getMethodsItem();
	void setMethodsItem(MethodItems*);
	VariableItems* getVariableItems();
	void setVariableItems(VariableItems*);

	void setInheritInterface(Interface*);
	Interface* getInheretInterface();

	virtual void generateCode();


	void add_son_protocol(Protocol*);
	Protocol* get_son_protocol(string);
	Variable* Interface::getVariableByName(string name);

	Method* getMethodByName(string name, Type* type, vector<DeclerationSelector*> v, bool isStatic);

	Method* getMethod(string message, vector<CallSelector*> v);

	/*void add_Method(Method*);
	Method* Get_Method(string name,Type* type ,vector<Variable*> parameter);*/
	string getTypeName();
	void toString();
	
};
#endif