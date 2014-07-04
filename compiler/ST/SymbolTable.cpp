#include"SymbolTable.h"
#include"Symbol.h"
#include "../Streams.h"
#include "../CallNode.h"
#include "../AsmNode.h"
#include "../ast/FunctionNode.h"
#include "../ast/IdentifierNode.h"
extern std::ofstream ofs;
extern ScoopNode* globalScoop;
extern Method * mainMethod;

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
void SymbolTable::generateStatics()
{
	for (auto i = this->types.begin(); i != this->types.end(); i++)
	{
		auto ifs = dynamic_cast<Interface*> (i->second);
		if (ifs){
			 ifs->static_twin->getTypeSize();
			 globalScoop->add_variable(new Variable(ifs->get_name(),ifs->static_twin,0));
			 globalScoop->addNode(new AsmNode(globalScoop, "la $t0," + ifs->getStaticPointerStr() + "\n"));
			 globalScoop->addNode(new AsmNode(globalScoop, "li $t1," + std::to_string(ifs->static_twin->getId()) + "\n"));

			 Variable* var = globalScoop->get_variable(ifs->get_name());
			 globalScoop->addNode(new AsmNode(globalScoop, string("sw $t0,") + std::to_string(-var->getOffset()) + "($"
				 + var->getOffsetRegister() + ")\n"
				 ));
			 globalScoop->addNode(new AsmNode(globalScoop, string("sw $t1,") + std::to_string(0) + "($"
				 + "t0"+ ")\n"
				 ));

			 ifs->static_twin->setStatus(completness::implemented);

			 MIPS_ASM::add_data(ifs->getStaticPointerStr() + ":    .byte   0:" + std::to_string(ifs->static_twin->getTypeSize()) + "\n");
			 Method* method = new Method("alloc", ifs);
			 auto fs = ScoopHelper::createNewFunctionNode(method, ifs->static_twin);
			 fs->addNode(new AsmNode(fs, "li $v0,9"));
			 fs->addNode(new AsmNode(fs, string("li $a0,") + std::to_string(ifs->static_twin->getTypeSize())));
			 fs->addNode(new AsmNode(fs, "syscall"));
			 ifs->static_twin->getMethodsItem()->addMethod(method);

		}

	}

	
		
}
void SymbolTable::generateStaticsCode()
{
	if (mainMethod)
	{
		
		Variable* var = globalScoop->get_variable(mainMethod->getInterface()->get_name());
		globalScoop->addNode(new IdentifierNode(mainMethod->getInterface()->get_name(),globalScoop));
		globalScoop->addNode(new AsmNode(globalScoop, "sub $sp,$sp,4"));
		globalScoop->addNode(new AsmNode(globalScoop, string("jal ") + mainMethod->getLabel()));
		globalScoop->addNode(new AsmNode(globalScoop, "li $v0,10"));
		globalScoop->addNode(new AsmNode(globalScoop, "syscall"));


	}
	else{
		//ToDo error
		Streams::WTF() << "errors null main";
	}
	globalScoop->generateCode();


	MIPS_ASM::add_instruction("\n\n\n\n");
	MIPS_ASM::printComment(string("Global vtable: "));
	MIPS_ASM::add_instruction("\n\n");
	MIPS_ASM::label("global_vtable");

	for (auto i = this->types.begin(); i != this->types.end(); i++)
	{
		auto ifs = dynamic_cast<Interface*> (i->second);
		if (ifs){
			MIPS_ASM::printComment(ifs->get_name());
			MIPS_ASM::add_instruction(string("li $t0,") + std::to_string(ifs->getId()) + "\n");
			MIPS_ASM::add_instruction(string("beq $t0,$a0,") + ifs->getVtableLabel() + "\n");
			ifs = ifs->static_twin;
			MIPS_ASM::printComment(ifs->get_name()+" static");

			MIPS_ASM::add_instruction(string("li $t0,") + std::to_string(ifs->getId()) + "\n");
			MIPS_ASM::add_instruction(string("beq $t0,$a0,") + ifs->getVtableLabel() + "\n");

		}
	}
	MIPS_ASM::jump("type_not_found");
}
void SymbolTable::generateCode()
{
	generateStaticsCode();
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








