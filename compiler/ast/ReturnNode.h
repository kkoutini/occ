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
			 MIPS_ASM::printComment("return node");
			 this->_returnexp->generateCode();
			 MIPS_ASM::pop("v0");
			 MIPS_ASM::move("sp","fp");
			 MIPS_ASM::jr();


		}
	virtual bool typeCheck()
	{
		//todo use cancast like assign for warnings and errors
		if (_method->getReturnType()==_returnexp->getType())
		{
			return true;
		}
		else
		{
		//////////////////////////////////
			/////////////
			///////////////////////////////////
			string error = "ERROR return type mismatch  ";
			addError(error);
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

