#pragma once
#include "ast\Node.h"
#include "ST\ArrayType.h"
class ArrayAccessNode :
	public Node
{
public:
	Node* _array;
	Node* _expr;
	void toString(){
		cout << "ArrayAccessNode\n";
	}
	ArrayAccessNode(Node* array, Node* expr, ScoopNode* scoop) :Node(scoop), _array(array), _expr(expr)
	{

	}
	
	virtual void generateCode(){
		if (getType() == symbolTable->getType("error_type")){
			//todo add errro not an array hason

			return;
		}
		MIPS_ASM::printComment("array access  ");
		MIPS_ASM::printComment("array code:  ");

		_array->generateCode();
		MIPS_ASM::printComment("saving regs  ");

		MIPS_ASM::pop();
		MIPS_ASM::push("v0");
		MIPS_ASM::printComment("expr code:  ");

		_expr->generateCode();
		MIPS_ASM::printComment("doing index:  ");

		MIPS_ASM::pop("t0");
		//exception
		MIPS_ASM::add_instruction("bge $t0," + std::to_string(dynamic_cast<ArrayType*> (_array->getType())->_count)
			+ ", arrayout_exp\n");

		////
		MIPS_ASM::pop("t1");
		MIPS_ASM::add_instruction("mul $t0, $t0," + std::to_string(getType()->getTypeSize())+"\n");

		MIPS_ASM::add_instruction("sub $v0,$t1,$t0\n");
		MIPS_ASM::lw("t0", 0, "v0");
		MIPS_ASM::push("t0");
	}
	virtual Type* generateType()
	{
		if (dynamic_cast<ArrayType*> (_array->getType()))
		{
			return dynamic_cast<ArrayType*> (_array->getType())->_type;
		}
		else{
			return symbolTable->getType("error_type");
		}
			
	//	return this->_scoop->get_variable(_name)->getType();
	}

	virtual ~ArrayAccessNode()
	{
	}
};

