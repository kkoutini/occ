#pragma once
#include"ast\Node.h"
#include <vector>
#include "Selector.h"
#include "ST\Interface.h"

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
	//	Interface* type=obj->getType();
	//	type->getMethodByName
		_sender->generateCode();
		Type* senderType = _sender->getType();
		
		//TODO: check if sender isn't interface
		Interface* sender_interface=(dynamic_cast<Interface*>(senderType));
		if (sender_interface == NULL)
		{
			//todo
			//ERRor
		}
		Method* method = sender_interface->getMethod(_message, _selcs,false);

		if (method == NULL){
			//ERROR no method
			return;
		}

		MIPS_ASM::printComment(string("CALLING A METHOD ")+method->to_string());
		MIPS_ASM::printComment("generating code for the sender");
		_sender->generateCode();

		MIPS_ASM::printComment("generating code for Args");
		
		for (auto selector : _selcs){
			MIPS_ASM::printComment(string("generating code for selector:") + selector->get_name());
			int argcount=0;
			for (auto arg : selector->_args){;
				MIPS_ASM::printComment(string("generating  for var #")+std::to_string(argcount++));

				arg->generateCode();
			}
		}
		MIPS_ASM::jal(method->getLabel());

	}
	virtual Type* generateType()
	{
		Type* senderType = _sender->getType();
		Interface* sender_interface = (dynamic_cast<Interface*>(senderType));
		if (sender_interface == NULL)
		{
			//throw error
			string error = "ERROR in call NODE generate type in  line number ";
			Program::addError(new SemanticError(error));
			return false;
		}
		Method* method = NULL; //sender_interface->getMethod(_message, _params, _types, false);
		if (method == NULL)
		{
			//throw error
			string error = "ERROR in call NODE generate type in  line number ";
			Program::addError(new SemanticError(error));
		}
		return method->get_return_type();
	}
	virtual ~CallNode(void)
	{
	}
};

