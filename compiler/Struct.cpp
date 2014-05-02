#include "Struct.h"


Struct::Struct(string name):Type(name)
{
	varItems=new VariableItems();
}

VariableItems* Struct:: getVariableItems(){
		return varItems;
	}
void Struct::setVariableItems(VariableItems* varItems){
		this->varItems=varItems;
	}
Struct::Struct(Struct* myStruct):Type(myStruct->get_name())
{
	this->varItems=new VariableItems(myStruct->varItems);
}
		void Struct:: toString(){
			Type::toString();
			varItems->toString();
		cout<<"\nend struct: "<<get_name()<<"----------------------------\n";
		}


string Struct::getTypeName(){
	return "Struct";
}