#include "Method.h"
#include "variable.h"
#include "../ast/ScoopNode.h"
#include "Type.h"
#include <string>
#include <sstream>
#include "../ast/FunctionNode.h"
	void Method:: setFunctionNode(FunctionNode* fNode){
		this->node=new FunctionNode(fNode);
		}
Method::Method(string name):Symbol(name)
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
Method::Method(string name,  Type* return_type):Symbol(name){
		

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
Method::Method(string name, string Acssess_modifier):Symbol(name)
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
Method ::Method(Method * method):Symbol(method->get_name()){
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
		if (this!=NULL){
		return this->return_type;
		}else{
			return NULL;
		}
	}

	void Method ::set_return_type(Type* returnType){
		this->return_type=returnType;
	}

		Variable* Method:: getParameter(string para_name){
			for(int i=0;i<parameters.size();i++){
				if (parameters.at(i)->get_name()== para_name){
				return parameters.at(i)->getVariable();
		}
			return NULL;
	}
			return NULL;	
		}

		bool Method:: addParameter(Selector* selector){
			if (getParameter(selector->getVariable()->get_name())==NULL){
				this->parameters.push_back(selector);
			return true;
		}
			return false;
		}
			bool Method::set_scoop(ScoopNode* scoop){
				if(scoop!=NULL)
				{
					this->scoopBody=scoop;
					return true;
				}
				else return false;
			}
			ScoopNode* Method::get_Scoop(){
				return scoopBody;
			}
		bool Method:: checkReturnType(Method*method1 ,Method* method2) {
			return Type::equal(method1->return_type,method2->return_type);
		}
		void Method:: checkParameters(Method*method1,Method*method2){
			int j=0;
		
			for (int i=0;i<method1->parameters.size();i++)
			{
				if(Type::equal(method1->parameters.at(i)->getVariable()->getType(),method2->parameters.at(j)->getVariable()->getType()))
					j++;
				else cout<<"Error:Conflicting parameter type in implementation of '"<<method1->parameters.at(i)->get_name()<<"': '"<<method1->parameters.at(i)->getVariable()->getType()->get_name()<<"' vs '"<<method2->parameters.at(j)->getVariable()->getType()->get_name()<<"'.\n";
			}
		}
	bool Method:: compare(Method* method1,Method* method2){
		if(method1->parameters.size()==method2->parameters.size()  && method1->get_static()==method2->get_static())
		{
				int j=0;
			
			for (int i=0;i<method1->parameters.size();i++)
		{
			
				if(!Selector::compareSelectorName(method1->parameters.at(i),method2->parameters.at(j)))
					return false;
			j++;
		}
			return true;
		}
		 return false;
	}
		string Method::getSignature(){
			string signature=get_name();
			for (int i=1;i<parameters.size();i++)
		{
			signature.append(":");
			signature.append(parameters.at(i)->get_name());
		}
			return signature;
		}
	void Method::toString(){
		cout<<"Name: "<<get_name()<<"\t Return Type: "<<get_return_type()->get_name()<<"\tIsStatic: "<<get_static()<<endl;
		if(parameters.size()>0)
		{
		cout<<"Selectors: ";
		for (int i=0;i<parameters.size();i++)
		{
			cout<<parameters.at(i)->get_name()<<":("<<parameters.at(i)->getVariable()->getType()->get_name()<<") "<<parameters.at(i)->getVariable()->get_name()<<"\t";
		}
		cout<<endl;
		}
		if(scoopBody!=NULL)
		{
			scoopBody->toString();
		}
		if(node!=NULL)
		node->toString();
		cout<<"\nend method: "<<get_name()<<endl;
	}

	void Method::set_variables(vector<Selector*>parameters){
		for(int i=0;i<parameters.size();i++)
		{
			addParameter(parameters.at(i));
		}
	
	}
	vector<Selector*> Method::get_variables(){
		return parameters;
	}

	void Method::set_static(bool isStatic){
		this->is_static=isStatic;
	}

	bool Method::get_static(){
		return this->is_static;
	}

	string Method::getLabel()
	{
		if(label=="")
		{
			//@toDO
			label=string("__")+get_name();
		}
		return label;
	}
