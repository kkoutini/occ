#pragma once
#include "Node.h"
class WhileNode :
	public Node
{


protected:

Node* _condition;
Node* _statment;

public:
	static	int 	while_label;
	WhileNode(Node* condition,Node* statment,ScoopNode* scoop):Node(scoop),_statment(statment),_condition(condition)
	{
	}

	virtual bool typeCheck()
	{
		Type* boolType=symbolTable->getType("bool");
		if (_condition->getType()==boolType)
		{
			return true;
		}else
		{
		///////////////////////////////////////////////////
			/////////// error 
			///////////////////////////////////////////////
		
		}

	}

	 	 virtual void generateCode (){
		
		// 	strcpy(this->loop_end,"");

	string cc  = "";
	cc=std::to_string(WhileNode::while_label++);

	string ccc = "While";
ccc+=cc;

	string ccc2 = "endWhile";
	ccc2+=cc;

	/*Break::set_label(ccc2);

	strcpy(this->loop_end,ccc2);*/


	MIPS_ASM::label(ccc);

	if(this->_condition != NULL)
		this->_condition->generateCode();

	MIPS_ASM::pop("t0");


	MIPS_ASM::beq("t0","0",ccc2);

	this->_statment->generateCode();
	
	MIPS_ASM::jump(ccc);
	MIPS_ASM::label(ccc2);

	}


	virtual ~WhileNode(void)
	{
	}
};

__declspec(selectany) int WhileNode::while_label;

