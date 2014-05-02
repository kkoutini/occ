#pragma once
#include "ast\node.h"
class ReturnNode :
	public Node
{

protected:
	Node* _returnexp;

public:

	ReturnNode(ScoopNode* scope,Node* returnexp):Node(scope),_returnexp(returnexp)
	{
	}

	virtual ~ReturnNode(void)
	{
	}
};

