#pragma once
#include "node.h"

#include "string"
#include<list>
#include<map>
using namespace std;

class DeclerationNode :
	public Node
{
protected:
	string _typename;
	list<pair<string,Node*> > _identifires;// list of pairs if vars name and intitlaizers nodes
public:
	void add(string name,Node* node){
		_identifires.push_back(make_pair(name,node));
	}
	void generateCode(){
		/*for(auto i=_identifires.begin();i!=_identifires.end();i++){
		(*i).second->generateCode();
		}*/
	}
	DeclerationNode(list<pair<string,Node*> > identifires,ScoopNode* scoop,string typeName):Node(scoop),_identifires(identifires)
	{
		_typename=typeName;
	}
	DeclerationNode(DeclerationNode* temp):Node(temp->_scoop),_identifires(temp->_identifires),_typename(temp->_typename)
	{
	
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

