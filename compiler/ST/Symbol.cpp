#include "Symbol.h"

//#include "primitive.h"
//#include "Interface.h"
//union f_type{
//	primitive* prim;
//	Class* f_class;
//	Interface* f_interface;
//};
	//Symbol::Symbol(){
	//	
	//	this->name = "";
	//	this->prev = NULL;
	//}
	Symbol::Symbol(string name)
	{
		this->name = name;
	}
		Symbol::Symbol(Symbol* symbol)
	{
		this->name=symbol->name;
	}
	/*Symbol::Symbol(string name, string type){
		this->type=type;
		this->name=name;
	
	}*/
	/*void Symbol::set_prev(Symbol* prev)
	{	
		this->prev = prev;
	}*/
	string Symbol::get_name()
	const{
		if (this!=NULL){
			return this->name;
		}else{
			return "no name";
		}
	}

	/*Symbol* Symbol::get_prev()
	{
		if (this!= NULL){
			return this->prev;
		}else{
			return NULL;
		}
			
		
	}*/
	/*void Symbol::set_path(string path){
		if (this!=NULL){
			if (this->path.size()!=0)
			{
				this->path.append(".");
			}
			this->path.append(path);
		}
	}
	string Symbol::get_path(){
		if (this!=NULL){
			return this->path;
		}
	
	}
	void Symbol::set_full_path(string path){
		if ((this!=NULL)&&(path!="")){
			this->path = path;		
		}
	}*/
	void Symbol::set_name(string name){
		if ((this!=NULL)&&(name!="")){
			this->name = name;		
		}
	
	}
	//void Symbol::to_string(){
//return;
//}