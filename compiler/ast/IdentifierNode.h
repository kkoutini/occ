#pragma once
#include "node.h"
#include "string"
using std::string;
class IdentifierNode:
	public Node
{
protected:
	string _name;
public:
	void toString(){
		cout<<"IdentifierNode\n";
	}
	IdentifierNode(string name,ScoopNode* scoop):Node(scoop),_name(name)
	{
		
	}
	int getOffset(){
		return this->_scoop->offset+this->_scoop->get_variable(_name)->offset;
	}
virtual void generateCode(){
		MIPS_ASM::printComment("identifier "+_name);
		MIPS_ASM::lw_fp("t9",this->_scoop->offset+this->_scoop->get_variable(_name)->offset);
		MIPS_ASM::push("t9");

		//for(int i=0;i<=(this->_scoop->offset+this->_scoop->get_variable(_name)->offset)/4;i++)
		//MIPS_ASM::add_instruction("sub $sp,$sp,4\n");

		//MIPS_ASM::sw("t0",0,"sp");
	}
	virtual ~IdentifierNode(void)
	{
	}
};

