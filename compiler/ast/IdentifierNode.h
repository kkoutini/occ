#pragma once
#include "node.h"
#include "string"
#include "../ClassNode.h"
#include "../SemanticError.h"
using std::string;
extern int lineNum;
extern int colNum;
extern string sourceFile;
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
	if (getType() == symbolTable->getType("error_type"))
		return;
	string vname = _name;
	if (vname == "super")
		vname = "self";
		MIPS_ASM::printComment("identifier "+vname);
		Variable *var = this->_scoop->get_variable(vname);
		ClassNode* cn = dynamic_cast<ClassNode*>(var->_scoop);
		
		if (cn!=NULL){
			Variable* self = this->_scoop->get_variable("self");

			if (var->getAccessModifier() == "private")
			{
				if (var->_scoop != dynamic_cast<Interface*>( self->getType())->getScoop()){
					string error = "cannot access " + var->getAccessModifier() + " data memeber from a child class! ";
					addError((error));
					return;
				}

			}

			MIPS_ASM::lw("t0", -self->getOffset(), self->getOffsetRegister());
			//v0 contains the address in memorry to be used later in assignment
			MIPS_ASM::add_instruction(string("addi $v0,$") + "t0"
				+ "," + std::to_string(var->getOffset()) + "\n");

			MIPS_ASM::lw("t0", var->getOffset(), "t0");

		}
		else{
			MIPS_ASM::lw("t0", -var->getOffset(), var->getOffsetRegister());

			//v0 contains the address in memorry to be used later in assignment
			MIPS_ASM::add_instruction(string("addi $v0,$") + var->getOffsetRegister()
				+ "," + std::to_string(-var->getOffset()) + "\n");

		}

		MIPS_ASM::push("t0");

		//for(int i=0;i<=(this->_scoop->offset+this->_scoop->get_variable(vname)->offset)/4;i++)
		//MIPS_ASM::add_instruction("sub $sp,$sp,4\n");

		//MIPS_ASM::sw("t0",0,"sp");
	}
  virtual Type* generateType()
  {
		
	  if (_name == "super"){
		  if (this->_scoop->get_variable("self") && dynamic_cast<Interface*>(this->_scoop->get_variable("self")->getType())&&
			  dynamic_cast<Interface*>(this->_scoop->get_variable("self")->getType())->getInheretInterface()
			  ){
			  return dynamic_cast<Interface*>(this->_scoop->get_variable("self")->getType())->getInheretInterface();
		  }
		  else{
			  addError("this interface has no super interface  ");
			  return symbolTable->getType("error_type");

		  }
	  }
		
	  if (this->_scoop->get_variable(_name) == NULL)
		{
		  addError("undeclare variable "+_name+" ");
		  return symbolTable->getType("error_type");
		}
		else
			return  this->_scoop->get_variable(_name)->getType();;

  }
  virtual bool isSuper(){
	  return _name == "super";
  }
  virtual Variable* getVar()
  {
	  return this->_scoop->get_variable(_name);
  }
  virtual ~IdentifierNode(void)
	{
	}
};

