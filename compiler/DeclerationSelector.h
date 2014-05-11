#pragma once
#include "Selector.h"
class DeclerationSelector :
	public Selector
{
public:
	vector<Variable*> _vars;

	DeclerationSelector(string, vector<Variable*> vars);
	virtual  int getTypesSize() const{
		return _vars.size();
	}
	virtual Type* getTypeAt(int i)const
	{
		return _vars.at(i)->getType();
	}

	~DeclerationSelector();
	
};

