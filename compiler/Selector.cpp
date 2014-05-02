#include "Selector.h"


Selector::Selector(string name,Variable* variable):Symbol(name)
{
	setVariable(variable);
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
