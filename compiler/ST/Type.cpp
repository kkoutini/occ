#include "Type.h"
#include "Method.h"
#include "Interface.h"
#include "..\Struct.h"
#include "..\EnumType.h"
Type::Type(string name,int typeSize):Symbol(name),_typeSize(typeSize){
	declared=0;
	this->status = completness::under_constraction;
}
Type::Type(Type* type):Symbol(type->get_name()){
	this->setStatus(type->status);
}

	void Type::setImplemented(){
		this->status = completness::implemented;
	}
	completness Type::getStatus(){
		return status;
	}

 void Type:: toString(){
	 	if(this!=NULL){
		if(dynamic_cast<Interface*>(this))
			cout<<"Type: Interface\t\t"<<"Type name: "<<get_name()<<endl;
		else if(dynamic_cast<Protocol*>(this))
		cout<<"Type: Protocol\t\t"<<"Type name: "<<get_name()<<endl;
		else if(dynamic_cast<Struct*>(this))	cout<<"Type: Struct\t\t"<<"Type name: "<<get_name()<<endl;
		else if(dynamic_cast<EnumType*>(this))	cout<<"Type: Enum\t\t"<<"Type name: "<<get_name()<<endl;
	///*	if(methods.size()>0)
	//	{
	//	cout<<"\n Methods:\n";
	//	for(multimap<const string, Method*>::iterator it = this->methods.begin(); it!=this->methods.end(); it++ ){
	//		it->second->toString();
	//	}*/
	//	}	
	}
 }


 bool Type:: equal(Type* type1,Type* type2){
	 if(type1==NULL)
		 return false;
	 if(type2==NULL)
		 return false;
	 return type1->get_name()==type2->get_name();
 }
string Type::getTypeName(){
	if(get_name()=="int")
		return "int";
	if(get_name()=="float")
		return "float";
	if(get_name()=="char")
		return "char";
	if(get_name()=="void")
		return "void";
	if(get_name()=="bool")
		return "bool";
}

void Type::setStatus(completness comp){
	if(this!=NULL){	
		this->status = comp;
	}
}

int Type::getTypeSize()
{
	return _typeSize;
}

//void Type::to_string(){
//	if(this!=NULL){
//		if(dynamic_cast<Class*>(this))
//			out<<"class ";
//		else
//			out<<"interface ";
//		out<<this->get_name()<<" ;in namespace : "<<this->get_prev()->get_name()<<" @full path : "<<this->get_path()<<" with access "<<this->get_access_modifier()<<" & "<<this<<endl;
//		for(multimap<const string, Method*>::iterator it = this->Methods.begin(); it!=this->Methods.end(); it++ ){
//			it->second->to_string();
//		}	
//	}
//}
//multimap<const string, Method*> Type::get_methods(){
//	if(this!=NULL){
//		return this->Methods;
//	}

