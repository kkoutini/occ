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
		 void generate_code (){
			 this->_returnexp->generate_code();
		}
	virtual bool typeCheck()
	{
		if (_method->get_return_type()==_returnexp->get_type())
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

	virtual ~ReturnNode(void)
	{
	}
};

