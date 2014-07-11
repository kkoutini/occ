#pragma once
#include "ast/Node.h"

#include "Selector.h"
#include "ST\Interface.h"

#include "ST/SymbolTable.h"
extern SymbolTable* symbolTable;
class DotNode :
	public Node
{
public:
	Node* _sender; string _member;
	DotNode(ScoopNode* scoop, Node* sender, string member) :Node(scoop), _sender(sender), _member(member)
	{
	}
	virtual void generateCode(){
		//	Interface* type=obj->getType();
		//	type->getMethodByName
		if (getType() == symbolTable->getType("error_type"))
			return;
		Type* senderType = _sender->getType();

		//TODO: check if sender isn't interface
		Interface* sender_interface = (dynamic_cast<Interface*>(senderType));
		if (sender_interface == NULL)
		{
			//ERRor
			string error = "ERROR Sender isn't Interface ";
			addError(error);
			return;
		}
		Variable* variable = sender_interface->getScoop()->get_variable(_member);
		//khaled
		if (variable == NULL){
			//ERROR no datamember with the name
			return;
		}

		MIPS_ASM::printComment(string("getting a datamember ") + variable->to_string());
		MIPS_ASM::printComment("generating code for the sender");
		_sender->generateCode();
		
		// now the object address must be in stack
		MIPS_ASM::pop("t1");

		MIPS_ASM::lw("t0",variable->getOffset(),"t1");

		//v0 contains the address in memorry to be used later in assignment
		
		MIPS_ASM::add_instruction(string("addi $v0,$") + "t1"//var->getOffsetRegister()
			+ "," + std::to_string(variable->getOffset()) + "\n");
		MIPS_ASM::push("t0");
		if (Garbage_Collect){

			MIPS_ASM::push("v0");
			MIPS_ASM::push("ra");
			MIPS_ASM::move("a0", "t1");
			MIPS_ASM::jal("global_dispose");
			MIPS_ASM::printComment("checking rc for freeing:");

			MIPS_ASM::pop("ra");
			MIPS_ASM::pop("v0");


		}


	}
	virtual Type* generateType()
	{
		Type* senderType = _sender->getType();
		Interface* sender_interface = (dynamic_cast<Interface*>(senderType));
		if (sender_interface == NULL)
		{
			//throw error
			string error = "ERROR in dot NODE sender is not ";
			addError((error));
			return symbolTable->getType("error_type");;
		}
		Variable* variable = sender_interface->getScoop()->get_variable(_member);
		if (variable == NULL)
		{
			//throw error
			string error = "ERROR in dot NODE variable not found ";
			addError((error));
			return symbolTable->getType("error_type");;

		}
		return variable->getType();
	}

	virtual Variable* getVar()
	{
		Type* senderType = _sender->getType();
		Interface* sender_interface = (dynamic_cast<Interface*>(senderType));
		if (sender_interface == NULL)
		{
			return 0;
		}
		Variable* variable = sender_interface->getScoop()->get_variable(_member);
		
		return variable;
	}
	virtual ~DotNode()
	{
	}
};

