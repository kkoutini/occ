#pragma once
#include "Node.h"
#include "../ST/Method.h"
class ReturnNode :
	public Node
{

protected:
	Node* _returnexp;
	Method* _method;

public:

	ReturnNode(ScoopNode* scope,Node* returnexp):Node(scope),_returnexp(returnexp)
	{
	}
		 void generateCode (){
			 this->_returnexp->generateCode();
		}
	virtual bool typeCheck()
	{
		if (_method->get_return_type()==_returnexp->getType())
		{
			return true;
		}
		else
		{
		//////////////////////////////////
			/////////////
			///////////////////////////////////
		
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

