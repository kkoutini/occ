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
			 cout << "dddd";

		 }
		 string t1="t1";
		  string t0="t0";
		 string mem_addr="sp";
		  _rightExp->generateCode();
		 
		
		 MIPS_ASM::pop(t1);
		// lw $t1, 0($sp)
	//add $sp,$sp,4
		 _leftExp->generateCode();
		 MIPS_ASM::pop(t0);
	//lw $t0, 0($sp)
	//add $sp,$sp,4
			MIPS_ASM::operation(t0,"0",t1,1);

	//add $t0,$0,$t1
			if(dynamic_cast<IdentifierNode*>(_leftExp))
			MIPS_ASM::sw_fp(t0,dynamic_cast<IdentifierNode*>(_leftExp)->getOffset());
			//else
			//	MIPS_ASM::sw_fp(t0,dynamic_cast<IdentifierNode*>(dynamic_cast<DeclerationNode*>(_leftExp)->)->getOffset());
	//sw $t0, 0($this->left->offset)
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
			string error = "ERROR some type in assign Node is null at line ";
			Program::addError(new SemanticError(error));
			return false;
		}
		else{
			if (TypeChecker::canCast(_rightExp->getType(), _leftExp->getType()) == 1)
			{
				return true;
			}
			else if (TypeChecker::canCast(_rightExp->getType(), _leftExp->getType()) == 2)
			{

				////////////////////////////////////////////////////////////
				//////THROW WARNING
				///////////////////////////////////////////////////////////
				string error = "Warning in cast line number ";
				Program::addWarning(new Warning(error));
				return true;

			}
			else{
				////////////////////////////////////////////////////////////
				////// THROW ERROR
				///////////////////////////////////////////////////////////
				string error = "ERROR in cast in assign  line number :" + std::to_string(_line)+" col number :"+std::to_string(_col);
				Program::addError(new SemanticError(error));
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

