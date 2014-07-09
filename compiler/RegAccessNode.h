#pragma once
#include "ast\Node.h"


class RegAccessNode :public Node
{
public:
	string reg; Type* dt;
	RegAccessNode(ScoopNode* scoop, string r, Type* t) :Node(scoop), reg(r), dt(t)
	{

	}
	virtual void generateCode(){
		MIPS_ASM::push(reg);
	}
	virtual Type* generateType(){
		return dt;
	}
};
