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
		Node* _sender;
		Node* _message;
	CallNode(ScoopNode* scoop,Node* sender,Node* message):Node(scoop),_sender(sender),_message(message)
	{

	}
	CallNode(ScoopNode* scoop):Node(scoop)
	{
		 
	}
	void setSender(Node* sender){
		this->_sender=new Node(sender);
	}
	void setMessage(Node* message){
		this->_message=new Node(message);
	}
	void addArgument(Node* argumentNode,string name){
		this->arguments.push_back({ name, argumentNode });
	}
	virtual void generateCode(){
	//	Interface* type=obj->getType();
	//	type->getMethodByName
		_sender->generateCode();
		Type* senderType = _sender->getType();

		//TODO: check if sender isn't interface
		(dynamic_cast<Interface*>(senderType));
	}
	virtual Type* generateType()
	{

	}
	virtual ~CallNode(void)
	{
	}
};

