#pragma once

#include "ast\Node.h"
#include "ST\SymbolTable.h"
using std::string;
extern SymbolTable* symbolTable;

class AsmNode :public Node
{
protected:
	string _command;
public:
	AsmNode(ScoopNode* scoope, string command) :Node(scoope), _command(command)
	{
	
	}
	virtual void generateCode()
	{
		MIPS_ASM::printComment(string("asm node :") + _command);
		MIPS_ASM::add_instruction(_command+"\n");
	}
	virtual Type* generateType()
	{
		return symbolTable->getType("void");
	}

};