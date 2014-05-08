#pragma once
#include "Node.h"
#include "../yacc.hpp"

#include "TypeChecker.h"
#include "string"
#include "mips_asm.h"
#include "../Warning.h"
using std::string;
#include "../ST/SymbolTable.h"
extern SymbolTable* symbolTable;
class BinaryOperationNode:public Node
{
protected:
	int _op;
	Node* _leftExp;
	Node* _rightExp;
	
public:

	BinaryOperationNode(Node* leftExp,Node* rightExp,int op,ScoopNode *scoop):Node(scoop),_leftExp(leftExp),_rightExp(rightExp),_op(op)
	{
	}
	void setLeftExp(Node* leftExp){
		this->_leftExp=leftExp;
	}
	virtual void generateCode (){
		string t0="t0";
string t1="t1";
_leftExp->generateCode();
MIPS_ASM::pop(t0);
//ofs<<"\nlw $t0, 0($sp)\n";
//ofs<<"add $sp,$sp,4\n";
_rightExp->generateCode();
//ofs<<"lw $t1, 0($sp)\n";
//ofs<<"add $sp,$sp,4\n";
//
//// --- Arithmetic Operation
//// + - * / 
//



MIPS_ASM::pop(t1);

if(_op== PLUS)
{
	MIPS_ASM::operation(t0,t0,t1,1);	
	MIPS_ASM::push(t0);
}

if(_op== MINUS)
{
	MIPS_ASM::operation(t0,t0,t1,2);
	MIPS_ASM::push(t0);
}

if(_op== MULTI)
{
MIPS_ASM::operation(t0,t0,t1,3);
MIPS_ASM::push(t0);
}

if(_op== DIV)
{
	MIPS_ASM::operation(t0,t0,t1,4);
	MIPS_ASM::push(t0);
}
	

//if(_op== M)
//{
//	rem $t0,$t0,$t1
//	sub $sp,$sp,4
//	sw $t0, 0($sp)
//}
//
//// --- Boolean Operation
//// == > < <= >= !=
//
if(_op == EQUAL_EQUAL || _op==NOT_EQUAL)
{
		ofs<<"li $t2,0\n";
	ofs<<"bne $t0,$t1,temp\n";
	ofs<<"li $t2,1\n";
	ofs<<"temp:\n";
		
	if(_op==NOT_EQUAL)
	{
		ofs<<"beq $t2,$0,temp1\n";
		ofs<<"li $t2,0\n";
		ofs<<"j temp2\n";
		ofs<<"temp1:\n";
		ofs<<"li $t2,1\n";
		ofs<<"temp2:\n";
	}
	ofs<<"sub $sp,$sp,4\n";
	ofs<<"sw $t2, 0($sp)\n";
		//ofs<<"move $t0,$t2\n";
}

if(_op==LESS_THAN)
{
	MIPS_ASM::slt("t2","t0","t1");	
	MIPS_ASM::push("t2");
	/*ofs<<"slt $t2,$t0,$t1\n";
	ofs<<"sub $sp,$sp,4\n";
	ofs<<"sw $t2, 0($sp)\n";*/
}

if(_op==MORE_THAN)
{
			MIPS_ASM::slt("t2","t1","t0");		
			MIPS_ASM::push("t2");
			//MIPS_ASM::operation("t0","0","t2",1);
	/*ofs<<"slt $t2,$t1,$t0\n";
	ofs<<"sub $sp,$sp,4\n";
	ofs<<"sw $t2, 0($sp)\n";*/
}


if(_op==LESS_OR_EQUAL)
{
	MIPS_ASM::operation("t2","t1","t0",2);
	MIPS_ASM::beq("t2","0","equalLabel");
	MIPS_ASM::slt("t2","t2","0");
	MIPS_ASM::bne("t2","0","trueLabel");
	MIPS_ASM::label("equalLabel");
	MIPS_ASM::add_instruction("addi $t2,$0,1\n");
	MIPS_ASM::jump("saveLabel");
	MIPS_ASM::label("trueLabel");
	MIPS_ASM::operation("t2","0","0",1);
	MIPS_ASM::label("saveLabel");
	MIPS_ASM::push("t2");
}

if(_op==MORE_OR_EQUAL)
{	
	MIPS_ASM::operation("t2","t0","t1",2);
	MIPS_ASM::beq("t2","0","equalLabel");
	MIPS_ASM::slt("t2","t2","0");
	MIPS_ASM::bne("t2","0","trueLabel");
	MIPS_ASM::label("equalLabel");
	MIPS_ASM::add_instruction("addi $t2,$0,1\n");
	MIPS_ASM::jump("saveLabel");
	MIPS_ASM::label("trueLabel");
	MIPS_ASM::operation("t2","0","0",1);
	MIPS_ASM::label("saveLabel");
	MIPS_ASM::push("t2");
}
//MIPS_ASM::push(t0);
	}
	
	
	virtual Type* generateType()
	{
		

		switch (_op)
		{
		case MULTI:
		case DIV:
		case PLUS:
		case MINUS:
			if (_rightExp->getType() == NULL || _leftExp->getType()==NULL)
			{
				string error = "ERROR in cast in binary operation type is null  line number ";
				Program::addError(new SemanticError(error));
				return false;
			}
			if(TypeChecker::canCast(_rightExp->getType(),_leftExp->getType())==1)
			{
				return _leftExp->getType();
			}else if(TypeChecker::canCast(_rightExp->getType(),_leftExp->getType())==2)
			{
				if(TypeChecker::canCast(_leftExp->getType(),_rightExp->getType())==1)
					return _rightExp->getType();

				////// THROW WARNING
				string error = "WARNING in convert from " + (_rightExp->getType()->get_name()) + " To " + _leftExp->getType()->get_name() + " AT Line Number :" + std::to_string(_line) + " Column Number :" + std::to_string(_col);
				Program::addWarning(new Warning(error));
				return false;
				return _leftExp->getType();

			}else{
				////// THROW ERROR
				string error = "ERROR in convert from " + (_rightExp->getType()->get_name()) + " To " + _leftExp->getType()->get_name() + " AT Line Number :" + std::to_string(_line) + " Column Number :" + std::to_string(_col);
				Program::addError(new SemanticError(error));
				return false;
			
			}
			//////TO DO <= >= ==  !=

		case EQUAL_EQUAL:
		case NOT_EQUAL:
		case MORE_OR_EQUAL:
		case LESS_OR_EQUAL:
		case LESS_THAN:
		case MORE_THAN:
		{
							  Type* t = symbolTable->getType("bool");
							  return t;
		}
		default:
			break;
		} 

	}
	virtual ~BinaryOperationNode(void)
	{
	}
};

