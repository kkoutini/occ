#pragma once
#include "C:\Users\Khaled Kuteini\Source\Repos\occ\compiler\ast\Node.h"
class DotNode :
	public Node
{
public:
	Node* _sender; string _member;
	DotNode(ScoopNode* scoop, Node* sender, string member) :Node(scoop), _sender(sender), _member(member)
	{
	}

	virtual ~DotNode()
	{
	}
};

