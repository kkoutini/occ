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
	virtual  int getTypesSize() const{
		return _args.size();
	}
	virtual Type* getTypeAt(int i)const
	{
		return _args.at(i)->getType();
	}

	
	virtual ~CallSelector();
};

