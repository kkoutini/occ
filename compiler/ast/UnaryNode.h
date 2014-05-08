#pragma once
#include "node.h"
class UnaryNode :
	public Node
{

protected:
	int _op;
	Node* _exp;

public:

	UnaryNode(ScoopNode* scoop,Node* exp,int op):Node(scoop),_exp(exp),_op(op)
	{
	}
	virtual Type* generateType()
	{

		return _exp->getType();
	}

	virtual ~UnaryNode(void)
	{
	}
};

