#pragma once

#include "scoopnode.h"
#include "../ST/Method.h"
class FunctionNode :
	public ScoopNode
{
protected:
	Method* _method;
public:
	
	FunctionNode(ScoopNode* scoop,Method* method):ScoopNode(scoop),_method(method)
	{
	}
	void toString(){
		for(map<string, Variable*>::iterator it=_variables.begin();it!=_variables.end();it++)
	it->second->toString();
for(auto i=_nodes.begin();i!=_nodes.end();i++)
	(*i)->toString();
	}
	FunctionNode(FunctionNode* temp):ScoopNode(temp->_scoop),_method(temp->_method)
	{
	}
	Method* getMethod(){
		return _method;
	}
	virtual void generateCode(){
		MIPS_ASM::label(_method->getLabel());
		MIPS_ASM::move("fp","sp");
		
	//_method->get_Scoop()->generateCode();
		//////////////////////////////////////////////////////////////////////////
		////deal with params
		ScoopNode::generateCode();
	};
	virtual Type* generateType()
	{
		return symbolTable->getType("void");
	}
	virtual ~FunctionNode(void)
	{
	}
};

