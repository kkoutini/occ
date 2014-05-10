#include "Selector.h"


Selector::Selector(string name, vector<Variable*> vars) :Symbol(name), _vars(vars)
{
	updateTypesFromVars();
}
Selector::Selector(string name) : Symbol(name)
{
}
Selector::Selector(Selector * selector) : Symbol(selector->get_name()), _vars(selector -> _vars){

	updateTypesFromVars();
}


bool Selector:: compareSelector(Selector* selector1,Selector* selector2)
{
	return (*selector1)==(*selector2);
}
Selector::~Selector(void)
{
}
void Selector::updateTypesFromVars() {
	_types.clear();

	for (auto c : _vars){
		_types.push_back(c->getType());
	}
}