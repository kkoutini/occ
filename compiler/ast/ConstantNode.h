#pragma once
//#include "node.h"
//#include "../ST/SymbolTable.h";
#include <fstream>
#include "string"
using std::string;
class SymbolTable;
class Node;
extern SymbolTable* symbolTable;
extern std::ofstream ofs;
typedef struct primitive
{
int int_val;
float float_val;
bool bool_val;
char char_val;
string  string_val;
};

class ConstantNode :
	public Node
{
protected:
	primitive  value;

public:


	ConstantNode(int val, ScoopNode* scoop):Node(scoop){
		value.int_val=val;
		type=symbolTable->getType("int");
	}
	ConstantNode(float val, ScoopNode* scoop):Node(scoop){
		value.float_val=val;
		type=symbolTable->getType("float");
	}
	ConstantNode(bool val, ScoopNode* scoop):Node(scoop){
		value.bool_val=val;
		type=symbolTable->getType("bool");
	}
	ConstantNode(string  val, ScoopNode* scoop):Node(scoop){
		value.string_val=val;
		type=symbolTable->getType("string");
	}
	ConstantNode(char val, ScoopNode* scoop):Node(scoop){
		value.char_val=val;
		type=symbolTable->getType("char");
	}
	virtual Type* get_type(){
		
		return this->get_type();
	}
		virtual void generate_code (){
			MIPS_ASM::li("t9",this->value.int_val);
			//ofs<<"li $a0,"<<this->value.int_val<<"\n";
			MIPS_ASM::push("t9");
			//ofs<<"sub $sp,$sp,4\n";
			//ofs<<"sw $a0, 0($sp)\n";
			
	}
	virtual ~ConstantNode(void)
	{
	}
};

