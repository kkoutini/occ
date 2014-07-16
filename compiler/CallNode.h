#pragma once
#include"ast\Node.h"
#include <vector>
#include "Selector.h"
#include "ST\Interface.h"
#include "MethodsIndexer.h"
#include "ST/SymbolTable.h"
extern SymbolTable* symbolTable;
#include "ST/Type.h"
#include "CallSelector.h"
#include "ast\IdentifierNode.h"
extern int Iskernal;
extern bool Optimize;

class CallNode :
	public Node
{
public:

		vector<CallSelector*> _selcs;
		Node* _sender;
		string _message;
	CallNode(ScoopNode* scoop,Node* sender,string message):Node(scoop),_sender(sender),_message(message)
	{

	}
	CallNode(ScoopNode* scoop):Node(scoop)
	{

		int x;
	}
	void setSender(Node* sender){
		this->_sender=sender;
	}
	void setMessage(string message){
		this->_message=message;
	}
	void addSelector(CallSelector* c){
		_selcs.push_back(c);
	}
	virtual void generateCode(){
		if (getType() == symbolTable->getType("error_type"))
			return;
		if (getType() == symbolTable->getType("id")||!Optimize)
		{
			dynamic_bind();
			return;

		}Type* senderType = _sender->getType();
		Interface* sender_interface = (dynamic_cast<Interface*>(senderType));
		Method* method = sender_interface->getMethodOverloaded(_message, _selcs);
		; //sender_interface->getMethod(_message, _params, _types, false);
		if (method->hasBeenInhereted){
			dynamic_bind();

		}
		else{
			static_bind();
		}

	//	static_bind();
	}
	virtual void dynamic_bind(){
		if (getType()==symbolTable->getType("error_type"))
			return;
		Type* senderType = _sender->getType();
		
		//TODO: check if sender isn't interface
		Interface* sender_interface = (dynamic_cast<Interface*>(senderType));
	

		int method = MethodsIndexer::getMethodIndex(_message, _selcs);

		if (method == -1){
			//khaled
			//ERROR no method found
			Method* mm = sender_interface->getMethodsItem()->getOverloadedMethod(_message, _selcs);

			if (mm == NULL){
				//khaled
				//ERROR no method
				string error = "ERROR no matching method found";
				addError(error);
				

				return;
			}
			else{
				method = mm->getId();
				///TODo runtime overloading
				//todo after selecting method add warnings
			}
		}

		MIPS_ASM::printComment(string("Dynamically CALLING A METHOD ") + std::to_string( method));
		MIPS_ASM::printComment("preserving registers");
		MIPS_ASM::push("ra");
		MIPS_ASM::push("fp");
		MIPS_ASM::printComment("generating code for the sender");
		_sender->generateCode();
		/// checking for null pointer exception
		MIPS_ASM::top("t0");
		MIPS_ASM::beq("t0", "0", "nullpointer_exp");

		if (Garbage_Collect && !Iskernal){

			MIPS_ASM::top("a0");
			MIPS_ASM::push("ra");

			MIPS_ASM::jal("increase_rc");//-4 is rc
			MIPS_ASM::pop("ra");

		}
		MIPS_ASM::printComment("generating code for Args");
		int sender_sh = 0;
		for (auto selector : _selcs){
			MIPS_ASM::printComment(string("generating code for selector:") + selector->get_name());
			int argcount = 0;
			for (auto arg : selector->_args){
				sender_sh += 4;
				MIPS_ASM::printComment(string("generating  for var #") + std::to_string(argcount++));

				arg->generateCode();
				if (Garbage_Collect && dynamic_cast<Interface*>(arg->getType()) && ! Iskernal){
					MIPS_ASM::top("a0");
					MIPS_ASM::push("ra");

					MIPS_ASM::jal("increase_rc");//-4 is rc
					MIPS_ASM::pop("ra");

		//			MIPS_ASM::top("a0");
			//		MIPS_ASM::jal("increase_rc");//-4 is rc

				}
			}
		}
		MIPS_ASM::lw("t0", sender_sh, "sp");
		if (dynamic_cast<IdentifierNode*>(_sender) && dynamic_cast<IdentifierNode*>(_sender)->isSuper())
		{
			MIPS_ASM::li("a0", sender_interface->getId());

		}
		else{
			MIPS_ASM::lw("a0", 0, "t0");
		}
		MIPS_ASM::li("a1",method);
		if (Iskernal)
		{
			MIPS_ASM::la("k0", "global_vtable");
			MIPS_ASM::add_instruction("mtc0 $k0,$14\n");

			MIPS_ASM::add_instruction("eret\n");
		}
		else
			MIPS_ASM::jal("global_vtable");
		// todo add gc here for sender
		MIPS_ASM::pop("fp");
		MIPS_ASM::pop("ra");
		MIPS_ASM::push("v0");
	}
	virtual void static_bind(){
		if (getType() == symbolTable->getType("error_type"))
			return;
		Type* senderType = _sender->getType();

		//TODO: check if sender isn't interface
		Interface* sender_interface = (dynamic_cast<Interface*>(senderType));

		Method* method = sender_interface->getMethodOverloaded(_message, _selcs);


		MIPS_ASM::printComment(string("Static CALLING A METHOD ") +(method->to_string()));
		MIPS_ASM::printComment("preserving registers");
		MIPS_ASM::push("ra");
		MIPS_ASM::push("fp");
		MIPS_ASM::printComment("generating code for the sender");
		_sender->generateCode();
		/// checking for null pointer exception
		MIPS_ASM::top("t0");
		MIPS_ASM::beq("t0", "0", "nullpointer_exp");

		if (Garbage_Collect && !Iskernal){

			MIPS_ASM::top("a0");
			MIPS_ASM::push("ra");

			MIPS_ASM::jal("increase_rc");//-4 is rc
			MIPS_ASM::pop("ra");

		}
		MIPS_ASM::printComment("generating code for Args");
		int sender_sh = 0;
		for (auto selector : _selcs){
			MIPS_ASM::printComment(string("generating code for selector:") + selector->get_name());
			int argcount = 0;
			for (auto arg : selector->_args){
				sender_sh += 4;
				MIPS_ASM::printComment(string("generating  for var #") + std::to_string(argcount++));

				arg->generateCode();
				if (Garbage_Collect && dynamic_cast<Interface*>(arg->getType()) && !Iskernal){
					MIPS_ASM::top("a0");
					MIPS_ASM::push("ra");

					MIPS_ASM::jal("increase_rc");//-4 is rc
					MIPS_ASM::pop("ra");

					//			MIPS_ASM::top("a0");
					//		MIPS_ASM::jal("increase_rc");//-4 is rc

				}
			}
		}
		MIPS_ASM::lw("t0", sender_sh, "sp");
		if (dynamic_cast<IdentifierNode*>(_sender) && dynamic_cast<IdentifierNode*>(_sender)->isSuper())
		{
			MIPS_ASM::li("a0", sender_interface->getId());

		}
		else{
			MIPS_ASM::lw("a0", 0, "t0");
		}
		//MIPS_ASM::li("a1", method);
		if (Iskernal)
		{
			MIPS_ASM::la("k0", method->getLabel());
			MIPS_ASM::add_instruction("mtc0 $k0,$14\n");

			MIPS_ASM::add_instruction("eret\n");
		}
		else
			MIPS_ASM::jal(method->getLabel());
		// todo add gc here for sender
		MIPS_ASM::pop("fp");
		MIPS_ASM::pop("ra");
		MIPS_ASM::push("v0");
	}
	virtual Type* generateType()
	{
		Type* senderType = _sender->getType();
		if (_sender->getType() == symbolTable->getType("id"))
			return symbolTable->getType("id");
		Interface* sender_interface = (dynamic_cast<Interface*>(senderType));
		if (sender_interface == NULL)
		{
			//throw error
			string error = "ERROR in method call, sender is not compatible  ";
			addError(error);
			return symbolTable->getType("error_type");
		}
		Method* method = sender_interface->getMethodOverloaded(_message, _selcs);
		; //sender_interface->getMethod(_message, _params, _types, false);
		if (method == NULL)
		{
			//throw error
			string error = "ERROR in method call method not found ";
			addError(error);
			return symbolTable->getType("error_type");
		}
		return method->getReturnType();
	}
	virtual ~CallNode(void)
	{
	}
};

