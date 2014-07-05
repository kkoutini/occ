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
	//	static_bind();
		dynamic_bind();
	}
	virtual void dynamic_bind(){

		Type* senderType = _sender->getType();
		
		//TODO: check if sender isn't interface
		Interface* sender_interface = (dynamic_cast<Interface*>(senderType));
		if (sender_interface == NULL)
		{
			//todo
			//ERRor
		}
		
		int method = MethodsIndexer::getMethodIndex(_message, _selcs);

		if (method == -1){

			//ERROR no method found
			
			return;
		}

		MIPS_ASM::printComment(string("Dynamically CALLING A METHOD ") + std::to_string( method));
		MIPS_ASM::printComment("preserving registers");
		MIPS_ASM::push("ra");
		MIPS_ASM::push("fp");
		MIPS_ASM::printComment("generating code for the sender");
		_sender->generateCode();
		MIPS_ASM::printComment("generating code for Args");
		int sender_sh = 0;
		for (auto selector : _selcs){
			MIPS_ASM::printComment(string("generating code for selector:") + selector->get_name());
			int argcount = 0;
			for (auto arg : selector->_args){
				sender_sh += 4;
				MIPS_ASM::printComment(string("generating  for var #") + std::to_string(argcount++));

				arg->generateCode();
			}
		}
		MIPS_ASM::lw("t0", sender_sh, "sp");
		MIPS_ASM::lw("a0", 0, "t0");
		MIPS_ASM::li("a1",method);

		MIPS_ASM::jal("global_vtable");

		MIPS_ASM::pop("fp");
		MIPS_ASM::pop("ra");
		MIPS_ASM::push("v0");
	}
	virtual void static_bind(){
		//	Interface* type=obj->getType();
		//	type->getMethodByName
		Type* senderType = _sender->getType();

		//TODO: check if sender isn't interface
		Interface* sender_interface = (dynamic_cast<Interface*>(senderType));
		if (sender_interface == NULL)
		{
			//todo
			//ERRor
		}
		Method* method = sender_interface->getMethod(_message, _selcs);

		if (method == NULL){
			//ERROR no method
			return;
		}

		MIPS_ASM::printComment(string("CALLING A METHOD ") + method->to_string());
		MIPS_ASM::printComment("preserving registers");
		MIPS_ASM::push("ra");
		MIPS_ASM::push("fp");
		MIPS_ASM::printComment("generating code for the sender");
		_sender->generateCode();

		MIPS_ASM::printComment("generating code for Args");

		for (auto selector : _selcs){
			MIPS_ASM::printComment(string("generating code for selector:") + selector->get_name());
			int argcount = 0;
			for (auto arg : selector->_args){
				;
				MIPS_ASM::printComment(string("generating  for var #") + std::to_string(argcount++));

				arg->generateCode();
			}
		}
		MIPS_ASM::jal(method->getLabel());

		MIPS_ASM::pop("fp");
		MIPS_ASM::pop("ra");
		MIPS_ASM::push("v0");
	}
	virtual Type* generateType()
	{
		Type* senderType = _sender->getType();
		Interface* sender_interface = (dynamic_cast<Interface*>(senderType));
		if (sender_interface == NULL)
		{
			//throw error
			string error = "ERROR in call NODE generate type sender is null in  line number ";
			Program::addError(new SemanticError(error));
			return false;
		}
		Method* method = sender_interface->getMethod(_message, _selcs);
		; //sender_interface->getMethod(_message, _params, _types, false);
		if (method == NULL)
		{
			//throw error
			string error = "ERROR in call NODE generate type null  line number ";
			Program::addError(new SemanticError(error));
		}
		return method->getReturnType();
	}
	virtual ~CallNode(void)
	{
	}
};

