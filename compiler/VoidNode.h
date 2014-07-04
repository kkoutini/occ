#pragma once
#include "ast\Node.h"
class VoidNode :
	public Node
{
public:
	VoidNode(ScoopNode* scoop);
	virtual ~VoidNode();
};

