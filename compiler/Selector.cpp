#include "Selector.h"


Selector::Selector(string name) : Symbol(name)
{
}


bool Selector:: compareSelector(Selector* selector1,Selector* selector2)
{
	return (*selector1)==(*selector2);
}
Selector::~Selector(void)
{
}