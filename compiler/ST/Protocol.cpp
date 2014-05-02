#include "Protocol.h"
#include "Interface.h"
using namespace std;



Protocol::Protocol(string name):Type(name)
{
	methodsItem=new MethodItems();
}



MethodItems* Protocol::getMethodsItem(){
			return methodsItem;
		}
		void Protocol::setMethodsItem(MethodItems* methodsItems){
		this->methodsItem=methodsItem;
	}

//void Protocol::add_Method(Method* S)
//	{
//		if (S!=NULL){
//			this->methods.insert(multimap<const string, Method*>::value_type(S->get_name(), S));
//		}
//	}
	void Protocol ::toString(){
		Type::toString();
		methodsItem->toString();
		if(inheritedProtocols.size()>0)
		{
			cout<<"Inherits From:\t";
			for(hash_map<const string, Protocol*>::iterator it = this->inheritedProtocols.begin(); it!=this->inheritedProtocols.end(); it++ ){
				cout<<it->first<<" ,  ";
		}
			cout<<endl;
		}

	}
void Protocol::add_inherited_protocol(Protocol* S)
	{
		if (S!=NULL){
			this->inheritedProtocols.insert(hash_map<const string, Protocol*>::value_type(S->get_name(), S));
		}
	}
//Method* Protocol::Get_Method(string name,Type* type ,vector<Variable*> parameter)
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

Protocol* Protocol::get_inherited_protocol(string S){
	
	hash_map< string, Protocol*>::iterator it = this->inheritedProtocols.find(S) ;
	if (it != this->inheritedProtocols.end()){
			return it->second;
		}else{
			return NULL;
	}

}
string Protocol::getTypeName(){
	return "Protocol";
}
