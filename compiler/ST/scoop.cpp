#include "scoop.h"


Scoop::Scoop(Scoop* scoop):Symbol(scoop->get_name())
{
	this->parent=scoop->parent;
	this->internal_variables=scoop->internal_variables;

}
Scoop::Scoop(Scoop* parent,string name):Symbol(name){
	this->parent=parent;
}
vector<Scoop*>Scoop::getInternalScoops(){
	return internalScoops;
}
Scoop* Scoop::getParent(){
	return parent;
}
void Scoop::addInternalScoop(Scoop* scoop){
	this->internalScoops.push_back(scoop);
}
void Scoop::setInternalScoops(vector<Scoop*>scoops){
	this->internalScoops=scoops;
}
void Scoop::setParent(Scoop* parent){
	this->parent=parent;
}
bool Scoop::add_variable(Variable* the_variable)
{
	if ((this!=NULL)&&(the_variable!= NULL)&&(!checkVariableExistance(the_variable->get_name())))
	{
		this->internal_variables.insert(hash_map<string, Variable*>::value_type(the_variable->get_name(), the_variable));
		return true;
	}else {
		return false;
	}					
}
	bool Scoop::checkVariableExistance(string variableName){
		if(variableName!="")
		{
			hash_map<string, Variable*>::iterator it = this->internal_variables.find(variableName);
			if (it != this->internal_variables.end()){
			return true;
		}else{
			return false;
		}

		}
		return true;
	}
Variable* Scoop::get_variable(string variable_name){	
	if ((this!=NULL)||(variable_name!="")){
		if(variable_name.find(".")==-1){
			hash_map<string, Variable*>::iterator it = this->internal_variables.find(variable_name);
			Scoop* father = this;
			while(father!=NULL){
				it = father->internal_variables.find(variable_name);
				if ((it!=father->internal_variables.end())&&(it->first==variable_name)){
					return it->second;
				}
				father = father->parent;
			}
			if(father==NULL)
				return NULL;				
		}else{
			return NULL;			
		}
	
	}else {
		return NULL;
	}
}

void Scoop::toString(){
cout<<"Scoop name: "<<get_name()<<"\n variables:\n";
for(hash_map<string, Variable*>::iterator it=internal_variables.begin();it!=internal_variables.end();it++)
	it->second->toString();
for(int i=0;i<internalScoops.size();i++)
	internalScoops.at(i)->toString();
cout<<"end scooooooooooooop\n";

}