#pragma once
#include "ast\Node.h"
#include "ST\SymbolTable.h"
extern SymbolTable* symbolTable;

class NullNode :
	public Node
{
public:

	NullNode(ScoopNode* scoop) :Node(scoop)
	{
		value_int = 0;
		constant = 1;

	}
	virtual void generateCode()
	{
		MIPS_ASM::push("0");
	}
	virtual Type* generateType()
	{
		return symbolTable->getType("null");
	}

	virtual ~NullNode()
	{
	}
};

