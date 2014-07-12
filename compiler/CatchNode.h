#pragma once
#include "VoidNode.h"
class CatchNode :
	public VoidNode
{

public:
	Node* _statement;
	CatchNode* next = 0;
	Type* exp;
	string idn;
	static int lbl_count ;
	int numId = 0;
	int try_id = 0;
	CatchNode(ScoopNode* scoop, Type* type, string identifier) :VoidNode(scoop), exp(type), idn(identifier)
	{
		scoop->add_variable(new Variable(identifier,type,0));
		//add to scoops
	}
	virtual void generateCode(){
		MIPS_ASM::label(getCatchLabel());
		Variable *var = this->_scoop->get_variable(idn);
		MIPS_ASM::add_instruction(string("addi $v0,$") + var->getOffsetRegister()
			+ "," + std::to_string(-var->getOffset()) + "\n");
		MIPS_ASM::sw("s0", 0, "v0");
		_statement->generateCode();
		MIPS_ASM::jump("tryfree_" + std::to_string(try_id));

	}
	string getCatchLabel(){
		return "catch_" + std::to_string(getNumId());
	}
	int getNumId(){
		if (numId == 0)
			numId = ++lbl_count;
		return numId;
	}
	virtual ~CatchNode()
	{
	}
};

