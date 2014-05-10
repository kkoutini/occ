#include "Selector.h"


Selector::Selector(string name, vector<Variable*> vars) :Symbol(name), _vars(vars)
{
	updateTypesFromVars();
}

Selector::Selector(Selector * selector) : Symbol(selector->get_name()), _vars(selector -> _vars){

	updateTypesFromVars();
}

void Selector::setVariable(Variable* variable){
		this->variable=new Variable(variable);
}

Variable* Selector::getVariable(){
	return variable;
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