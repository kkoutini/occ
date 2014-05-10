#pragma once
#include "Selector.h"
#include "ast\Node.h"
class CallSelector :
	public Selector
{
public:
	vector<Node*> _args;

	CallSelector(string name);
	void addArg(Node* n);
	virtual ~CallSelector();
};

