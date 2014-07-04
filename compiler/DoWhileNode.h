#pragma once
#include "voidNode.h"
using namespace std;
class DoWhileNode :
	public VoidNode
{


protected:

Node* _condition;
Node* _statment;

public:
	static	int 	Dowhile_label;
	DoWhileNode(Node* condition, Node* statment, ScoopNode* scoop) :VoidNode(scoop), _statment(statment), _condition(condition)
	{
		
	}

	virtual bool typeCheck()
	{

		if (_condition->getType() == NULL)
		{
			string error = "ERROR in condition in DO While NULL ERROR  line number :" + std::to_string(_line) + " col number :" + std::to_string(_col);
			Program::addError(new SemanticError(error));
			return false;
		}
		Type* boolType=symbolTable->getType("bool");
		if (_condition->getType()==boolType)
		{
			return true;
		}
		else
		{
			/////////// error
			string error = "ERROR Cannot implicitly convert type " + _condition->getType()->get_name() + " to 'bool'  AT Line Number :" + std::to_string(_line) + " Column Number :" + std::to_string(_col);
			Program::addError(new SemanticError(error));
			return false;
		}
		
	}

	 	 virtual void generateCode (){
		
		// 	strcpy(this->loop_end,"");

	string cc  = "";
	cc=std::to_string(DoWhileNode::Dowhile_label++);

	string ccc = "DoWhile";
ccc+=cc;

	string ccc2 = "endDoWhile";
	ccc2+=cc;

	/*Break::set_label(ccc2);

	strcpy(this->loop_end,ccc2);*/


	MIPS_ASM::label(ccc);



	this->_statment->generateCode();
		if(this->_condition != NULL)
		this->_condition->generateCode();

	MIPS_ASM::pop("t0");


	MIPS_ASM::beq("t0","0",ccc2);
	
	MIPS_ASM::jump(ccc);
	MIPS_ASM::label(ccc2);

	}
		 virtual Type* generateType()
		 {
			 return symbolTable->getType("void");
		 }

	virtual ~DoWhileNode(void)
	{
	}
};

__declspec(selectany) int DoWhileNode::Dowhile_label;

