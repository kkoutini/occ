#pragma once
#include"ast\Node.h"
#include <vector>
#include "Selector.h"
#include "ST\Interface.h"
 
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
	virtual void generate_code(){
	//	Interface* type=obj->getType();
	//	type->getMethodByName
	}
	virtual ~CallNode(void)
	{
	}
};

