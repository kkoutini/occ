#pragma once
#include "Node.h"
#include "../ST/Method.h"
class ReturnNode :
	public VoidNode
{

protected:
	Node* _returnexp;
	Method* _method;

public:

	ReturnNode(ScoopNode* scope, Node* returnexp) :VoidNode(scope), _returnexp(returnexp)
	{
	}
		 void generateCode (){
			 this->_returnexp->generateCode();
		}
	virtual bool typeCheck()
	{
		if (_method->getReturnType()==_returnexp->getType())
		{
			return true;
		}
		else
		{
		//////////////////////////////////
			/////////////
			///////////////////////////////////
			string error = "ERROR return type mismatch  line number :" + std::to_string(_line) + " col number :" + std::to_string(_col);
			Program::addError(new SemanticError(error));
			return false;
		}

	}
	virtual Type* generateType()
	{
		return symbolTable->getType("void");
	}

	virtual ~ReturnNode(void)
	{
	}
};

