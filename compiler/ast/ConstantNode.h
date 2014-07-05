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
		type=symbolTable->getType("NSString");
	}
	ConstantNode(char val, ScoopNode* scoop):Node(scoop){
		value.char_val=val;
		type=symbolTable->getType("char");
	}
		virtual void generateCode (){
			if (type == symbolTable->getType("int")){
				MIPS_ASM::li("t9", this->value.int_val);
				MIPS_ASM::push("t9");
			}
			if (type == symbolTable->getType("bool")){
				MIPS_ASM::li("t9", this->value.bool_val);
				MIPS_ASM::push("t9");
			}
			if (type == symbolTable->getType("float")){
				// todo don't cast keep the bits only
				MIPS_ASM::li("t9", this->value.float_val);
				MIPS_ASM::push("t9");
			}
			if (type == symbolTable->getType("char")){
				MIPS_ASM::li("t9", this->value.char_val);
				MIPS_ASM::push("t9");
			}
			if (type == symbolTable->getType("NSString")){
				MIPS_ASM::la("t9", MIPS_ASM::getStringAdressLabel(this->value.string_val));
				MIPS_ASM::push("t9");
			}

			
	}
		virtual Type* generateType()
		{
			return type;
		}
	virtual ~ConstantNode(void)
	{
	}
};

