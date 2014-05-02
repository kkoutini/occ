#include "Variable.h"
#include "Array.h"
//setters and getters
//Variable::Variable(string name, symbol* Variable_type):symbol(name, NULL){
//	this->var_type = Variable_type;
//}

//Variable::Variable(string name, string Variable_type): Type(name,Variable_type){
//	
//}
Variable::Variable(string name, Type* type,string accessModifier):Symbol(name){
	this->type=type;
	this->isConst = false;
	this->setAccessModifier(accessModifier);
	offset=-1;
	}

string Variable:: getAccessModifier(){
	if (this!=NULL){
		switch (this->accessModifier){
		case(AccessModifier::Protected):{return "protected";}
		case(AccessModifier::Public):{return "public";}
			default: return "private";
		};
	}
}

void Variable::setAccessModifier(string accessModifier){
	if (accessModifier == "@public") {
		this->accessModifier = Public;
	}else if (accessModifier == "@protected") {
		this->accessModifier = Protected;
	}else if (accessModifier == "@private"){
		this->accessModifier = Private;
	}else{ this->accessModifier = Public;}
}
	void Variable ::toString(){
			if(this!=NULL){
				if(dynamic_cast<Variable*>(this))
				cout<<this->get_name()<<" type: "<<this->type->get_name()<<"\t\tVisibility: "<<(dynamic_cast<Variable*>(this))->getAccessModifier()<<"      isConst: "<<isConst<<endl;
				else if(dynamic_cast<Variable*>(this)&&dynamic_cast<Array*>(this))
					cout<<this->get_name()<<" type: "<<this->type->get_name()<<"\t\tVisibility: "<<(dynamic_cast<Variable*>(this))->getAccessModifier()<<"\t\t Array\t\t"<<"isConst: "<<isConst<<endl;
				else cout<<this->get_name()<<" type: "<<this->type->get_name()<<"      isConst: "<<isConst<<endl;
	
	}
	}
Variable::Variable( Variable* variable):Symbol(variable->get_name()){
	this->type=variable->type;
	this->isConst=variable->isConst;
}
bool Variable::getIsConst(){
	if (this!=NULL){
		return this->isConst;
	}else{
		return NULL;
	}
}
void Variable::setIsConst(bool isConst){
	if (this!=NULL){
		
		this->isConst = isConst;
		
	}
}
Type* Variable::getType(){
	return this->type;
}

void Variable::setType(Type * type){
	this->type=type;
}
//void Variable::set_type(Type* Variable_type){
//	if (this!=NULL){
//		this->var_type = Variable_type;
//	}else {
//		this->var_type  = NULL;
//	}
//}
//Type* Variable::get_Type(){
//	if (this!=NULL){
//		return this->var_type;
//	}else {
//		return NULL;
//	}
//}

//string Variable::getTypeName(){
//	if (var_type!=NULL){
//		
//		return this->var_type->getTypeName();
//	}
//
//}

bool Variable ::compare(Variable* var1 ,Variable* var2){
	return var1->type->get_name()==var2->type->get_name();
}

