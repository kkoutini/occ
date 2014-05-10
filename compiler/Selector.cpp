#include "Selector.h"


Selector::Selector(string name, vector<Variable*> vars) :Symbol(name), _vars(vars)
{

}

Selector::Selector(Selector * selector):Symbol(name){
	setVariable(selector->variable);
}

void Selector::setVariable(Variable* variable){
		this->variable=new Variable(variable);
}

Variable* Selector::getVariable(){
	return variable;
}
bool Selector:: compareSelectorName(Selector* selector1,Selector* selector2)
{
	return selector1->get_name()==selector2->get_name();
}
Selector::~Selector(void)
{
}
