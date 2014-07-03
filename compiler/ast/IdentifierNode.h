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
		return this->_scoop->get_variable(_name)->getOffset();
	}
virtual void generateCode(){
		MIPS_ASM::printComment("identifier "+_name);
		Variable *var = this->_scoop->get_variable(_name);
		MIPS_ASM::lw("t0",-var->getOffset(), var->getOffsetRegister());

		//v0 contains the address in memorry to be used later in assignment
		MIPS_ASM::add_instruction(string("addi $v0,$") + var->getOffsetRegister()
			+ "," + std::to_string(-var->getOffset())+"\n");
		MIPS_ASM::push("t0");

		//for(int i=0;i<=(this->_scoop->offset+this->_scoop->get_variable(_name)->offset)/4;i++)
		//MIPS_ASM::add_instruction("sub $sp,$sp,4\n");

		//MIPS_ASM::sw("t0",0,"sp");
	}
  virtual Type* generateType()
  {
	 return this->_scoop->get_variable(_name)->getType();
  }
	virtual ~IdentifierNode(void)
	{
	}
};

