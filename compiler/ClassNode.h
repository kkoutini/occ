#pragma once

#include "ast\scoopnode.h"
#include "ST\Interface.h"
class ClassNode :
	public ScoopNode
{
protected:
	Interface* _interface;
public:
	
	ClassNode(ScoopNode* scoop,Interface* interf):ScoopNode(scoop),_interface(interf)
	{
	}
	void toString(){
		for(map<string, Variable*>::iterator it=_variables.begin();it!=_variables.end();it++)
	it->second->toString();
for(auto i=_nodes.begin();i!=_nodes.end();i++)
	(*i)->toString();
	}
	ClassNode(ClassNode* temp):ScoopNode(temp->_scoop),_interface(temp->_interface)
	{
	}
	Interface* getInterface(){
		return _interface;
	}
	virtual void generateCode(){
	
	};
	virtual ~ClassNode(void)
	{
	}
};

