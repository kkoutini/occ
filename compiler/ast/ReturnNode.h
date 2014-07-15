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

	ReturnNode(ScoopNode* scope, Node* returnexp, Method* method) :VoidNode(scope), _returnexp(returnexp), _method(method)
	{
		_has_return = true;
	}
		 void generateCode (){
			 if (!typeCheck())
				 return;
			 MIPS_ASM::printComment("return node");
			 this->_returnexp->generateCode();
			 MIPS_ASM::pop("v0");
			 MIPS_ASM::move("sp","fp");
			 MIPS_ASM::jr();


		}
	virtual bool typeCheck()
	{
		if (!_returnexp){
			addError("illegal return expertion");
			return false;
		}
		if (!_method){
			addError("method not determined");
			return false;
		}

		//todo use cancast like assign for warnings and errors
		if (_method->getReturnType()==_returnexp->getType())
		{
			return true;
		}
		else
		{
			if (TypeChecker::canCast(_returnexp->getType(), _method->getReturnType()) == 1)
			{
				return true;
			}
			else if (TypeChecker::canCast(_returnexp->getType(), _method->getReturnType()) == 2)
			{
				//////THROW WARNING	
				string error = "WARNING in convert from " + (_returnexp->getType()->get_name()) + " To " + _method->getReturnType()->get_name();
				addWarning(error);
				return true;

			}
			else{
				////// THROW ERROR
				string error = "cannot convert convert from " + (_returnexp->getType()->get_name()) + " To " + _method->getReturnType()->get_name();
				addError(error);
				return false;
			}
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

