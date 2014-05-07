#pragma once
#include"ast\Node.h"
#include <vector>
#include "Selector.h"
#include "ST\Interface.h"

#include "ST/SymbolTable.h"
extern SymbolTable* symbolTable;
#include "ST/Type.h"
class CallNode :
	public Node
{
public:

		list<pair<string,Node*>> arguments;
		vector<string> _params;
		vector<Type*> _types;

		Node* _sender;
		string _message;
	CallNode(ScoopNode* scoop,Node* sender,string message):Node(scoop),_sender(sender),_message(message)
	{

	}
	CallNode(ScoopNode* scoop):Node(scoop)
	{
		 
	}
	void setSender(Node* sender){
		this->_sender=sender;
	}
	void setMessage(string message){
		this->_message=message;
	}
	void addArgument(Node* argumentNode,string name){
		this->arguments.push_back({ name, argumentNode });
	}
	void updateParams(){
		_params.clear();
		for (auto a : arguments){
			_params.push_back(a.first);
		}
	}
	void updateTypes(){
		_types.clear();
		for (auto a : arguments){
			_types.push_back(a.second->getType());
		}
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
			//ERRor
		}
		Method* method=sender_interface->getMethod(_message, _params, _types,false);
		if (method == NULL){
			//ERROR no method
		}

		
	}
	virtual ~CallNode(void)
	{
	}
};

