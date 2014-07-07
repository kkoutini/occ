#pragma once
#include "../voidnode.h"
#include "string"
#include<list>
#include<map>
using namespace std;

class DeclerationNode :
	public VoidNode
{
protected:
	string _typename;
	list<pair<string,Node*> > _identifires;// list of pairs if vars name and intitlaizers nodes
public:
	void add(string name,Node* node){
		_identifires.push_back(make_pair(name,node));
	}
	virtual void generateCode();
	DeclerationNode(list<pair<string, Node*> > identifires, ScoopNode* scoop, string typeName) :VoidNode(scoop), _identifires(identifires)
	{
		_typename=typeName;
	}
	void toString(){
		cout<<"DeclarationNode\n";
		cout<<"type:"<<_typename<<endl;
	
	}
	virtual Type* generateType()
	{
		return symbolTable->getType("void");
	}
	virtual ~DeclerationNode(void)
	{
	}
}; 

