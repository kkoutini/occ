#pragma once

#include "scoopnode.h"
#include "../ST/Method.h"
#include "../ST/SymbolTable.h"
extern SymbolTable* symbolTable;
class Interface;
class FunctionNode :
	public ScoopNode
{
protected:
	Method* _method;
	Interface* _interface;

public:
	FunctionNode(ScoopNode* scoop,Method* method):ScoopNode(scoop),_method(method)
	{
	//	_method->setFunctionNode(this);
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
		MIPS_ASM::printComment("moving the stack back because args are in scoop");
		MIPS_ASM::add_instruction(string("add $sp,$sp,") + to_string(_method->get_params_num()*4) + string("\n"));
		MIPS_ASM::move("fp","sp");
		//MIPS_ASM::operation()
	//_method->get_Scoop()->generateCode();
		//////////////////////////////////////////////////////////////////////////
		////deal with params
		ScoopNode::generateCode();
	};
	virtual Type* generateType()
	{
		return symbolTable->getType("void");
	}
	 Interface* getInterface()
	{
		return _interface;
	}
	 void setInterface(Interface*i)
	{
		 _interface=i;
	}

	virtual ~FunctionNode(void)
	{
	}
};

