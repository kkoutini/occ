#include"SymbolTable.h"
#include"Symbol.h"
#include "../Streams.h"
SymbolTable::SymbolTable(void)
{
	this->add_type(new Type("int"));
	this->add_type(new Type("bool"));
	this->add_type(new Type("NSString"));
	this->add_type(new Type("float"));
	this->add_type(new Type("void"));
	this->add_type(new Type("char"));
}
SymbolTable::~SymbolTable(void)
{

}
//void SymbolTable::addSymbol(Type * S)
//	{
//		if (S!=NULL){
//			this->symbolTable.insert(hash_map<const string, Type*>::value_type(S->get_name(), S));
//		}
//	}

//
//Type* SymbolTable::getSymbol(string S){
//	
//	hash_map< string, Type*>::iterator it = this->symbolTable.find(S) ;
//	if (it != this->symbolTable.end()){
//			return it->second;
//		}else{
//			return NULL;
//		}
//
//}

void SymbolTable::toString(){

	for(TypesMap::iterator i = types.begin(); i != types.end(); i++)
	{
		i->second->toString(); 
	}
}
void SymbolTable ::add_type(Type* type){
	if ((type!=NULL)&&(this!=NULL) ){
		//Method* temp = this->getMethod(S->get_name(), S->getReturnType(),S->parameters);
		if (types.find(type->get_name()) != types.end())
		{
			Streams::WTF() << "duplicated addd\n\n";
			throw new exception("deal breaking error,WTF duplicated add");
		}
		types[type->get_name()]=type;

	}
}


Type* SymbolTable::getType(string name)
{

	if((this!=NULL)){
		if (types[name]!=NULL)
		return types[name]; // even if it's not implemented yet it should return object with the default constructer expecting to be defined later (multiparse)
		else
		{
			Streams::verbose() << "Making new interface: "<<name<<"\n\n\n\n";
			Interface* interface = new Interface(name);
			add_interfaceState(name, false);
			return types[name] = interface;
		}
	}
}
bool SymbolTable::checkTypeExist(string name)
{
	Type *type = getType(name);
	if (type != NULL)

		return true;
	return false;
}
void SymbolTable::generateCode()
{
	for (auto i = this->types.begin(); i != this->types.end(); i++)
	{
		i->second->generateCode();
	}
}
bool SymbolTable::getInterfaceState(string name)
{
	return declaredInterfaces[name];
}
void SymbolTable::add_interfaceState(string name, bool state)
{
	declaredInterfaces[name] = state;
}
void SymbolTable::set_interfaceState(string name, bool state)
{
	declaredInterfaces[name] = state;
}


//void SymbolTable::add(symbol* newItem)
//{
//	int index = GetIndex(newItem->get_name());     //////////////   we should use a getter
//	if (hashST[index] == NULL)
//	{
//		hashST[index] = newItem;
//	}
//	else
//	{
//		symbol* temp;
//		temp = hashST[index];
//		hashST[index] = newItem;
//	}
//	Size++;
//}
//int SymbolTable::GetIndex (string str)
//{
//	int h = 0;
//	for (int i=0; i<str.length(); i++)
//		h = h+((int) str[i]);
//
//	return (h % 10);
//}








