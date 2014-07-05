#pragma once
#include "Node.h"
#include "TypeChecker.h"
#include "../Warning.h"

class AssignNode: public Node
{
public:

	Node* _rightExp;
	Node* _leftExp;

	AssignNode(ScoopNode* scoope,Node* leftExp,Node* rightexp):Node(scoope),_rightExp(rightexp),_leftExp(leftExp)
	{

	}
	 void setLeftExp(Node * leftExp){
		 this->_leftExp=leftExp;
	}
	 void generateCode(){
		 if (typeCheck()==true)
		 {
			 

		 }
		 string t1="t1";
		  string t0="t0";
		  string mem_addr = "sp";
		  MIPS_ASM::printComment("Assign node");
		  MIPS_ASM::printComment("RHS:");
		  _rightExp->generateCode();
		 
		  MIPS_ASM::printComment("Assign node lHS:");

		 _leftExp->generateCode();

		 MIPS_ASM::printComment("Assign node poping old val:");

		 MIPS_ASM::pop(t0);
		 MIPS_ASM::printComment("Assign node getting RHS val:");

		 MIPS_ASM::top(t0);// not poping in order to keep value in stack
		 // todo check if v0 isnot null in run time
		 // todo check if we can assign 
		 MIPS_ASM::printComment("Assign node storing in position val:");
		 MIPS_ASM::sw(t0,0,"v0");


	 }
	 void toString(){
		 cout<<"AssignNode\n";
		 _rightExp->toString();
		 _leftExp->toString();
	 }
	virtual bool typeCheck()
	{
		if (_rightExp->getType() == NULL || _leftExp->getType()==NULL)
		{
			string error = "ERROR some type in assign Node is null  ";
			addError((error));
			return false;
		}
		else{
			if (TypeChecker::canCast(_rightExp->getType(), _leftExp->getType()) == 1)
			{
				return true;
			}
			else if (TypeChecker::canCast(_rightExp->getType(), _leftExp->getType()) == 2)
			{
				//////THROW WARNING	
				string error = "WARNING in convert from " + (_rightExp->getType()->get_name()) + " To " + _leftExp->getType()->get_name();
				addWarning(error);
				return true;

			}
			else{
				////// THROW ERROR
				string error = "ERROR in convert from " + (_rightExp->getType()->get_name()) + " To " + _leftExp->getType()->get_name();
				addError(error);
				return false;
			}
		}
	}
	virtual Type* generateType()
	{

		return _leftExp->getType();

	}
	virtual ~AssignNode(void)
	{
	}
};

