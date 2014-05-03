#include "Symbol.h"
#include "Method.h"
#include "Interface.h"
#include<string.h>

#include "../ClassNode.h"
#include "../ast/FunctionNode.h"
using namespace std;

Interface::Interface(string name):Type(name)
{
	varItems=new VariableItems();
	methodsItem=new MethodItems();
}
	void Interface::setClassNode(ClassNode* classNode){
		this->classNode=new ClassNode(classNode);
	}
Interface::Interface(Interface* interf):Type(interf->get_name())
{
	//this->setInheritInterface(interf->inherit_interface);
	this->methodsItem=interf->methodsItem;
	this->varItems=new VariableItems(interf->varItems);
	this->son_protocols=interf->son_protocols;
	this->inherit_interface=interf->getInheretInterface();
	methodsItem=new MethodItems(interf->methodsItem);
}
	Interface* Interface::getInheretInterface(){
		return this->inherit_interface;
	}

	VariableItems* Interface:: getVariableItems(){
		
		return varItems;
		
	}
	void Interface::setVariableItems(VariableItems* varItems){
		this->varItems=varItems;
	}
		MethodItems* Interface::getMethodsItem(){
			return methodsItem;
		}
	void Interface::setMethodsItem(MethodItems* methodsItems){
		this->methodsItem=methodsItem;
	}
		void Interface:: toString(){
			Type::toString();
			varItems->toString();
			methodsItem->toString();
			
			if(inherit_interface!=NULL)
			{
				cout<<"\n Inherits From: ";
				inherit_interface->toString();
				cout<<endl<<endl;
			}
			if(son_protocols.size()>0){
				cout<<"Implements: \n";
				for(hash_map<const string, Protocol*>::iterator it = this->son_protocols.begin(); it!=this->son_protocols.end(); it++ ){
					it->second->toString();
			}
			}	cout<<"end interface  "<<get_name() <<" -----------------------------------------------------\n";
		}

	void Interface ::setInheritInterface(Interface* interf)
	{
		this->inherit_interface=new Interface(interf);
	}
	
//void Interface::add_Method(Method* S)
//	{
//		if (S!=NULL){
//			this->methods.insert(multimap<const string, Method*>::value_type(S->get_name(), S));
//		}
//	}
void Interface::add_son_protocol(Protocol * S)
	{
		if (S!=NULL){
			this->son_protocols.insert(hash_map<const string, Protocol*>::value_type(S->get_name(), S));
		}
	}
//Method* Interface::Get_Method(string name,Type* type ,vector<Variable*> parameter)
//	{
//		multimap<const string, Method*>::iterator it = this->methods.find(name);
//		Method* tempMethod=new Method(name,type);
//		tempMethod->set_variables(parameter);
//	while (it != this->methods.end()){
//			if (Method::compare(tempMethod,(Method*)it->second)){
//			return (Method*)it->second;
//		}else{
//			it++;
//		}
//	}
//	if (it==this->methods.end()){
//		return NULL;
//	}
//}

Protocol* Interface::get_son_protocol(string S){
	
	hash_map< string, Protocol*>::iterator it = this->son_protocols.find(S) ;
	if (it != this->son_protocols.end()){
			return it->second;
		}else{
			return NULL;
		}

}


string Interface::getTypeName(){
	return "Interface";
}

Method* Interface::getMethodByName(string name,Type* type,vector<Selector*> v,bool isStatic)
{
	return methodsItem->getMethod(name,type,v,isStatic);
}


void Interface::generateCode(){
	for (auto i = this->methodsItem->methods.begin(); i != this->methodsItem->methods.end(); i++)
	{
		MIPS_ASM::printComment(string( "generating code for Method:")+ i->first);
		if (i->second->getF() != NULL){
			i->second->getF()->generateCode();
		}
		else{
			MIPS_ASM::printComment(string("Something wrong this method's node is NULL :") + i->first);

		}
	}
}

Method* Interface::getMethod(string name, vector<string> selectors, vector<Type*> types, bool isStatic)
{
	return methodsItem->getMethod(name, selectors, types, isStatic);
}