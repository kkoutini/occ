#pragma once
#include "Node.h"
#include "../ST/variable.h"


class ScoopNode :
	public Node
{
protected:
	map<string, Variable*> _variables;
	list<Node *> _nodes;
	int _currentInnerOffset;


public:

	virtual int getVarsOffset()
	{
		return getParent()==NULL?0:getParent()->getFrameSize() + getParent()->getVarsOffset();
	}
	int getNextOffset(int newSize){
		int t=_currentInnerOffset;
		_currentInnerOffset+=newSize;
		return t;
	}
	void addNode(Node* node){
		this->_nodes.push_back(node);
	}
	int getFrameSize(){
		return _currentInnerOffset;
	}
	ScoopNode(ScoopNode * parent) :Node(parent)
	{
		_currentInnerOffset=0;
	}
	/*
	copy constructer shouldn't be used
	ScoopNode(ScoopNode* scoop):Node(scoop)
	{
		//TODO this may cause problems for later defined vars
		if(scoop!=NULL){
			offset=scoop->offset;
		_currentInnerOffset=scoop->_currentInnerOffset;
		}
		else{ _currentInnerOffset=0; offset=0;}
		if(scoop!=NULL){
		for(auto i=scoop->_nodes.begin();i!=scoop->_nodes.end();i++){
			_nodes.push_back(*i);
		}
		for(map<string, Variable*>::iterator it=scoop->_variables.begin();it!=scoop->_variables.end();it++)
			_variables.insert(make_pair(it->first, it->second));
		}
	}*/
	ScoopNode* getParent(){
		return this->_scoop;
	}
	bool add_variable(Variable* variable)
	{
		if ((this!=NULL)&&(variable!= NULL)&&(!checkVariableExistance(variable->get_name())))
		{
			variable->setOffset( getNextOffset(variable->getType()->getTypeSize()));
			variable->_scoop = this;
			_variables.insert(make_pair(variable->get_name(), variable));

			return true;
		}else {
			//
			////should throw error
			/////////
			return false;
		}			
	}
	Variable* get_variable(string variable_name)
	{
		if ((this!=NULL)||(variable_name!="")){
			if(variable_name.find(".")==-1){
				map<string, Variable*>::iterator it = this->_variables.find(variable_name);
				ScoopNode* father = this;
				while(father!=NULL){
					it = father->_variables.find(variable_name);
					if ((it!=father->_variables.end())&&(it->first==variable_name)){
						return it->second;
					}
					father = father->_scoop;
				}
				if(father==NULL)
					return NULL;				
			}else{
				return NULL;			
			}

		}else {
			return NULL;
		}
	}
	bool checkVariableExistance(string name){
		if(name!="")
		{
			map<string, Variable*>::iterator it = this->_variables.find(name);
			if (it != this->_variables.end()){
				return true;
			}else{
				return false;
			}

		}
		return true;
	}
	//virtual Type* generateType()
	//{
	//return symbolTable->getType("void");
	//}

	virtual ~ScoopNode(void)
	{
	}
	void toString(){
cout<<"begin Scoop name: "<<"\n variables:\n";
for(map<string, Variable*>::iterator it=_variables.begin();it!=_variables.end();it++)
	it->second->toString();
for(auto i=_nodes.begin();i!=_nodes.end();i++){
	(*i)->toString();
}
cout<<"end scooooooooooooop\n";

}
	virtual void generateCode()
	{
		MIPS_ASM::reserveStack(getFrameSize());
		for(auto i=_nodes.begin();i!=_nodes.end();i++){
			(*i)->generateCode();
		}
		//TODO collecting garbage
		MIPS_ASM::releaseStack(getFrameSize());

	}
	virtual bool typeCheck()
	{
		return 1;
	}	
};

