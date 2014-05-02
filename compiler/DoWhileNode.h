#pragma once
#include "ast\Node.h"
using namespace std;
class DoWhileNode :
	public Node
{


protected:

Node* _condition;
Node* _statment;

public:
	static	int 	Dowhile_label;
	DoWhileNode(Node* condition,Node* statment,ScoopNode* scoop):Node(scoop),_statment(statment),_condition(condition)
	{
	}

	 bool type_check()
	{
		//Type* boolType=symbolTable->getType("bool");
		//if (_condition->get_type()==boolType)
		//{
		//	return true;
		//}else
		//{
		/////////////////////////////////////////////////////
		//	/////////// error 
		//	///////////////////////////////////////////////
		//
		//}
		return 1;
	}

	 	 virtual void generate_code (){
		
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



	this->_statment->generate_code();
		if(this->_condition != NULL)
		this->_condition->generate_code();

	MIPS_ASM::pop("t0");


	MIPS_ASM::beq("t0","0",ccc2);
	
	MIPS_ASM::jump(ccc);
	MIPS_ASM::label(ccc2);

	}


	virtual ~DoWhileNode(void)
	{
	}
};

__declspec(selectany) int DoWhileNode::Dowhile_label;

