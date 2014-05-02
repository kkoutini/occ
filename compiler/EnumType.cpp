#include "EnumType.h"


EnumType::EnumType(string name):Type(name)
{
	varItems=new VariableItems();
}


EnumType::EnumType(EnumType * enumType):Type(enumType->get_name())
{
	this->varItems=enumType->varItems;
	varItems=new VariableItems(enumType->varItems);
}
VariableItems* EnumType:: getVariableItems(){
		return varItems;
	}
void EnumType::setVariableItems(VariableItems* varItems){
		this->varItems=varItems;
	}


void EnumType::toString(){
	Type::toString();
	cout<<"Identifiers:\n";
	varItems->toString();
		cout<<"\nend enum: "<<get_name()<<"----------------------------\n";
}

string EnumType::getTypeName(){
	return "Enum";
}