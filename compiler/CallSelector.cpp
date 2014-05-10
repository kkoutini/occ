#include "CallSelector.h"


CallSelector::CallSelector(string name) :Selector(name)
{
}

void CallSelector::addArg(Node* n){
	_args.push_back(n);
}
CallSelector::~CallSelector()
{
}
