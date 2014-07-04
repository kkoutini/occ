#include "MethodItems.h"
#include<iostream>
using namespace std;


MethodItems::MethodItems(void)
{
}
void MethodItems::toString(){
	if(methods.size()>0)
		{
		cout<<"\n Methods:\n";
		for(multimap<const string, Method*>::iterator it = this->methods.begin(); it!=this->methods.end(); it++ ){
			it->second->toString();
		}
}
	cout<<"\n";
}
void MethodItems ::setMethods(multimap<const string,Method*> methods){
		this->methods=methods;
	}
bool MethodItems::addMethod(Method* S)
{
	if ((S!=NULL)&&(this!=NULL) ){
		Method* temp = this->getMethod(S->get_name(), S->getReturnType(),S->get_variables(),S->get_static());
		if ((temp==NULL)){				
		this->methods.insert(hash_map<const string, Method*>::value_type(S->get_name(), S));
		return true;
			}
		return false;
		}
		return false;
	
}
MethodItems::MethodItems(MethodItems* methodItems){
	this->methods=methodItems->methods;
}

Method* MethodItems::getMethod(string name, Type* type, vector<DeclerationSelector*>parameter, bool isStatic)
	{
		multimap<const string, Method*>::iterator it = this->methods.find(name);
		Method* tempMethod=new Method(name,type);
		tempMethod->set_variables(parameter);
		tempMethod->set_static(isStatic);
	while (it != this->methods.end()){
			if (Method::compare(tempMethod,(Method*)it->second)){
			return (Method*)it->second;
		}else{
			it++;
		}
	}
	if (it==this->methods.end()){
		return NULL;
	}
}

Method* MethodItems::getMethod(string message, vector<CallSelector*> selectors )
{
	auto it = this->methods.find(message);
	while (it != this->methods.end()){
		Method& m =*( it->second);
		int i = 0;
		if (m.parameters.size()==selectors.size())
		{
			bool match = true;
			for (auto p : m.parameters){

				if ((*p) == (*selectors[i]))
					++i;
				else
				{
					match = false;
					break;
				}
				

			}
			if (match)
				return it->second;
		}
		++it;
	}
	if (it == this->methods.end()){
		return NULL;
	}

}
MethodItems::~MethodItems(void)
{
}
