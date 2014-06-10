#include "Method.h"
#include "variable.h"
#include "../ast/ScoopNode.h"
#include "Type.h"
#include <string>
#include <sstream>
#include "../ast/FunctionNode.h"
#include "../MethodsIndexer.h"
#include "Interface.h"
void Method::setFunctionNode(FunctionNode* fNode){
	this->scoopBody = fNode;
}
Method::Method(string name) :Symbol(name)
{

	//this->AccessModifier = Public;	


	this->return_type = NULL;

	this->parameters.clear();
	this->scoopBody = NULL;
	this->is_abstract = false;
	this->is_final = false;
	this->is_override = false;
	this->is_static = false;
	this->is_virtual = false;

}
Method::Method(string name, Type* return_type) :Symbol(name){


	//this->Access_Modifier = Public;	

	this->set_return_type(return_type);
	this->parameters.clear();
	this->scoopBody = NULL;
	this->is_abstract = false;
	this->is_final = false;
	this->is_override = false;
	this->is_static = false;
	this->is_virtual = false;

}
Method::Method(string name, string Acssess_modifier) :Symbol(name)
{

	this->return_type = NULL;
	this->parameters.clear();
	this->scoopBody = NULL;
	this->is_abstract = false;
	this->is_final = false;
	this->is_override = false;
	this->is_static = false;
	this->is_virtual = false;


}
Method::Method(Method * method) :Symbol(method->get_name()){
	this->set_return_type(return_type);
	this->set_variables(method->get_variables());
	this->scoopBody = method->scoopBody;
	this->is_abstract = false;
	this->is_final = false;
	this->is_override = false;
	this->is_static = method->is_static;
	this->is_virtual = false;
}
//access_type Method:: get_access_modifier(){
//	return Access_Modifier;
//}

Type* Method::get_return_type()
{
	if (this != NULL){
		return this->return_type;
	}
	else{
		return NULL;
	}
}

void Method::set_return_type(Type* returnType){
	this->return_type = returnType;
}

DeclerationSelector* Method::getSelector(string para_name){
	for (int i = 0; i < parameters.size(); i++){
		if (parameters.at(i)->get_name() == para_name){
			return parameters.at(i);
		}
		return NULL;
	}
	return NULL;
}

bool Method::addSelector(DeclerationSelector* selector){
	if (getSelector(selector->get_name()) == NULL){
		this->parameters.push_back(selector);
		return true;
	}
	return false;
}
bool Method::set_scoop(FunctionNode* scoop){
	if (scoop != NULL)
	{
		this->scoopBody = scoop;
		return true;
	}
	else return false;
}
ScoopNode* Method::get_Scoop(){
	return scoopBody;
}
bool Method::checkReturnType(Method*method1, Method* method2) {
	return Type::equal(method1->return_type, method2->return_type);
}
void Method::checkParameters(Method*method1, Method*method2){
	int j = 0;

	for (int i = 0; i < method1->parameters.size(); i++)
	{
		if (Selector::compareSelector(method1->parameters.at(i), method2->parameters.at(j)))
			j++;
		else
		{
			//TODO make error not cout
			cout << "Error:Conflicting parameter type in implementation of '" << method1->parameters.at(i)->get_name() << "': '";
		}
	}
}
bool Method::compare(Method* method1, Method* method2){
	if (method1->parameters.size() == method2->parameters.size() && method1->get_static() == method2->get_static())
	{
		int j = 0;

		for (int i = 0; i < method1->parameters.size(); i++)
		{

			if (!Selector::compareSelector(method1->parameters.at(i), method2->parameters.at(j)))
				return false;
			j++;
		}
		return method1-> get_name()==method2->get_name();
	}
	return false;
}
string Method::getSignature(){
	string signature = get_name();
	for (int i = 1; i<parameters.size(); i++)
	{
		signature.append(":");
		signature.append(parameters.at(i)->get_name());
	}
	return signature;
}
void Method::toString(){
	cout << "Name: " << get_name() << "\t Return Type: " << get_return_type()->get_name() << "\tIsStatic: " << get_static() << endl;
	if (parameters.size()>0)
	{
		cout << "Selectors: ";
		for (int i = 0; i < parameters.size(); i++)
		{
			cout << parameters.at(i)->get_name() << ":";
			for (auto c : parameters.at(i)->_vars)
				cout << " (" << c->getType()->get_name() << ") " << c->get_name() << "\t";
		}
		cout << endl;
	}
	if (scoopBody != NULL)
	{
		scoopBody->toString();
	}
	if (scoopBody != NULL)
		scoopBody->toString();
	cout << "\nend method: " << get_name() << endl;
}
string Method::	to_string(){
	string s=get_name();
	if (parameters.size()>0)
	{
		
		for (int i = 0; i < parameters.size(); i++)
		{
			s+= parameters.at(i)->get_name() + ":";
			for (auto c : parameters.at(i)->_vars)
				s +=string(" (") + c->getType()->get_name() + string( ") ")+ c->get_name() +string( " ");
		}
	
	}
	return s;
}
void Method::set_variables(vector<DeclerationSelector*>parameters){
	for (int i = 0; i < parameters.size(); i++)
	{
		addSelector(parameters.at(i));
	}

}
vector<DeclerationSelector*> Method::get_variables(){
	return parameters;
}
int Method::get_params_num(){
	int sum = 0;
	for (auto p : parameters){
		sum += p->getTypesSize();
	}
	return sum;
}

void Method::set_static(bool isStatic){
	this->is_static = isStatic;
}

bool Method::get_static(){
	return this->is_static;
}
int Method::getId()
{
	return MethodsIndexer::getMethodIndex(this);
}
Interface* Method::getInterface()
{
	return 	this->getF()->getInterface();
}
string Method::getLabel()
{
	if (label == "")
	{
		label = string("_c") + std::to_string(getInterface()->getId()) + "_method_" + std::to_string(getId());
	}
	return label;
}
