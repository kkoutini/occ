#include "VariableItems.h"
#include <iostream>
using namespace std;
VariableItems::VariableItems(void)
{
}

void VariableItems::add_variable(Variable * S)
	{
		if (S!=NULL){
			this->variables.insert(hash_map<const string, Variable*>::value_type(S->get_name(), S));
		}
	}

void VariableItems::toString(){
	if(variables.size()>0){ 
		cout<<"\nVariables:\n";
	for(hash_map< string,Variable*>::iterator it = variables.begin(); it != variables.end(); it++)
			{
				it->second->toString(); 
			}
	}
	cout<<"\n";
		
}
VariableItems::VariableItems(VariableItems* varItems){
	this->variables=varItems->variables;
}
Variable* VariableItems::get_variable(string S){
	if(this!=NULL){
	hash_map< string, Variable*>::iterator it = this->variables.find(S) ;
	if (it != this->variables.end()){
			return it->second;
		}else{
			return NULL;
		}
	}else return NULL;

}


VariableItems::~VariableItems(void)
{
}
