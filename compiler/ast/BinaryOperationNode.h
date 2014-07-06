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
class BinaryOperationNode :public Node
{
protected:
	int _op;
	Node* _leftExp;
	Node* _rightExp;
	static int labelCount;
public:

	BinaryOperationNode(Node* leftExp, Node* rightExp, int op, ScoopNode *scoop) :Node(scoop), _leftExp(leftExp), _rightExp(rightExp), _op(op)
	{
	}
	void setLeftExp(Node* leftExp){
		this->_leftExp = leftExp;
	}
	virtual void generateCode(){
		string t0 = "t0";
		string t1 = "t1";
		_leftExp->generateCode();
		//MIPS_ASM::add_instruction("\nlw $t0, 0($sp)\n";
		//MIPS_ASM::add_instruction("add $sp,$sp,4\n";
		_rightExp->generateCode();
		//MIPS_ASM::add_instruction("lw $t1, 0($sp)\n";
		//MIPS_ASM::add_instruction("add $sp,$sp,4\n";
		//
		//// --- Arithmetic Operation
		//// + - * / 
		//
		++labelCount;

		Type* lefttype = _leftExp->getType();
		Type* righttype = _rightExp->getType();
		Type* intType = symbolTable->getType("int");
		Type* floatType = symbolTable->getType("float");

		string f0 = "f0";
		string f1 = "f1";

		if (getHypoType() == floatType)
		{
			MIPS_ASM::popf(f1);
			MIPS_ASM::popf(f0);

			if (righttype == intType)
			{
				MIPS_ASM::add_instruction("cvt.s.w $f1,$f1\n");

			}
			if (lefttype == intType)
			{
				MIPS_ASM::add_instruction("cvt.s.w $f0,$f0\n");

			}
			


			if (_op == PLUS)
			{
				MIPS_ASM::operationf(f0, f0, f1, 1);
				MIPS_ASM::pushf(f0);

			}

			if (_op == MINUS)
			{

				MIPS_ASM::operationf(f0, f0, f1, 2);
				MIPS_ASM::pushf(f0);
			}

			if (_op == MULTI)
			{

				MIPS_ASM::operationf(f0, f0, f1, 3);
				MIPS_ASM::pushf(f0);
			}

			if (_op == DIV)
			{

				MIPS_ASM::operationf(f0, f0, f1, 4);
				MIPS_ASM::pushf(f0);
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
			if (_op == EQUAL_EQUAL || _op == NOT_EQUAL)
			{


				if (_op == EQUAL_EQUAL)
				{
					MIPS_ASM::printComment("equal opf");
					MIPS_ASM::add_instruction("li $t0,0\n");
					MIPS_ASM::add_instruction(string("c.eq.s $f0,$f1 \n"));
					MIPS_ASM::add_instruction("bc1f eqop_temp" + std::to_string(labelCount) + "\n");
					MIPS_ASM::add_instruction("li $t0,1\n");
					MIPS_ASM::add_instruction("eqop_temp" + std::to_string(labelCount) + ":\n");
				}
				else{
					MIPS_ASM::printComment("not equal opf");
					MIPS_ASM::add_instruction("li $t0,1\n");
					MIPS_ASM::add_instruction(string("c.eq.s $f0,$f1 \n"));
					MIPS_ASM::add_instruction("bc1f eqop_temp" + std::to_string(labelCount) + "\n");
					MIPS_ASM::add_instruction("li $t0,0\n");
					MIPS_ASM::add_instruction("eqop_temp" + std::to_string(labelCount) + ":\n");

				}
				MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
				MIPS_ASM::add_instruction("sw $t0, 0($sp)\n");
				//MIPS_ASM::add_instruction("move $t0,$t2\n");
			}

			if (_op == LESS_THAN)
			{
				//MIPS_ASM::slt("t2", "t0", "t1");



				MIPS_ASM::printComment("LESS_THAN opf");
				MIPS_ASM::add_instruction("li $t0,0\n");
				MIPS_ASM::add_instruction(string("c.lt.s $f0,$f1 \n"));
				MIPS_ASM::add_instruction("bc1f eqop_temp" + std::to_string(labelCount) + "\n");
				MIPS_ASM::add_instruction("li $t0,1\n");
				MIPS_ASM::add_instruction("eqop_temp" + std::to_string(labelCount) + ":\n");
				MIPS_ASM::push("t0");
				/*MIPS_ASM::add_instruction("slt $t2,$t0,$t1\n");
				MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
				MIPS_ASM::add_instruction("sw $t2, 0($sp)\n");*/
			}

			if (_op == MORE_THAN)
			{


				MIPS_ASM::printComment("LESS_THAN opf");
				MIPS_ASM::add_instruction("li $t0,1\n");
				MIPS_ASM::add_instruction(string("c.lt.s $f0,$f1 \n"));
				MIPS_ASM::add_instruction("bc1f eqop_temp" + std::to_string(labelCount) + "\n");
				MIPS_ASM::add_instruction("li $t0,0\n");
				MIPS_ASM::add_instruction("eqop_temp" + std::to_string(labelCount) + ":\n");
				MIPS_ASM::push("t0");
				//MIPS_ASM::operation("t0","0","t2",1);
				/*MIPS_ASM::add_instruction("slt $t2,$t1,$t0\n");
				MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
				MIPS_ASM::add_instruction("sw $t2, 0($sp)\n");*/
			}


			if (_op == LESS_OR_EQUAL)
			{


				MIPS_ASM::printComment("LESS_THAN opf");
				MIPS_ASM::add_instruction("li $t0,0\n");
				MIPS_ASM::add_instruction(string("c.le.s $f0,$f1 \n"));
				MIPS_ASM::add_instruction("bc1f eqop_temp" + std::to_string(labelCount) + "\n");
				MIPS_ASM::add_instruction("li $t0,1\n");
				MIPS_ASM::add_instruction("eqop_temp" + std::to_string(labelCount) + ":\n");
				MIPS_ASM::push("t0");
			}

			if (_op == MORE_OR_EQUAL)
			{


				MIPS_ASM::printComment("LESS_THAN opf");
				MIPS_ASM::add_instruction("li $t0,1\n");
				MIPS_ASM::add_instruction(string("c.le.s $f0,$f1 \n"));
				MIPS_ASM::add_instruction("bc1f eqop_temp" + std::to_string(labelCount) + "\n");
				MIPS_ASM::add_instruction("li $t0,0\n");
				MIPS_ASM::add_instruction("eqop_temp" + std::to_string(labelCount) + ":\n");
				MIPS_ASM::push("t0");
			}
		}




		if (getType() == intType)
		{


			MIPS_ASM::pop(t1);
			MIPS_ASM::pop(t0);

			if (_op == PLUS)
			{
				MIPS_ASM::operation(t0, t0, t1, 1);
				MIPS_ASM::push(t0);
			}

			if (_op == MINUS)
			{
				MIPS_ASM::operation(t0, t0, t1, 2);
				MIPS_ASM::push(t0);
			}

			if (_op == MULTI)
			{
				MIPS_ASM::operation(t0, t0, t1, 3);
				MIPS_ASM::push(t0);
			}

			if (_op == DIV)
			{
				MIPS_ASM::operation(t0, t0, t1, 4);
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
			if (_op == EQUAL_EQUAL || _op == NOT_EQUAL)
			{

				if (_op == EQUAL_EQUAL)
				{
					MIPS_ASM::printComment("equal op");
					MIPS_ASM::add_instruction("li $t2,0\n");
					MIPS_ASM::add_instruction(string("bne $t0,$t1,") + "eqop_temp" + std::to_string(labelCount) + "\n");
					MIPS_ASM::add_instruction("li $t2,1\n");
					MIPS_ASM::add_instruction("eqop_temp" + std::to_string(labelCount) + ":\n");
				}
				else{
					MIPS_ASM::printComment("not equal op");
					MIPS_ASM::add_instruction("li $t2,1\n");
					MIPS_ASM::add_instruction(string("bne $t0,$t1,") + "eqop_temp" + std::to_string(labelCount) + "\n");
					MIPS_ASM::add_instruction("li $t2,0\n");
					MIPS_ASM::add_instruction("eqop_temp" + std::to_string(labelCount) + ":\n");

				}
				MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
				MIPS_ASM::add_instruction("sw $t2, 0($sp)\n");
				//MIPS_ASM::add_instruction("move $t0,$t2\n");
			}

			if (_op == LESS_THAN)
			{
				MIPS_ASM::slt("t2", "t0", "t1");
				MIPS_ASM::push("t2");
				/*MIPS_ASM::add_instruction("slt $t2,$t0,$t1\n");
				MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
				MIPS_ASM::add_instruction("sw $t2, 0($sp)\n");*/
			}

			if (_op == MORE_THAN)
			{
				MIPS_ASM::slt("t2", "t1", "t0");
				MIPS_ASM::push("t2");
				//MIPS_ASM::operation("t0","0","t2",1);
				/*MIPS_ASM::add_instruction("slt $t2,$t1,$t0\n");
				MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
				MIPS_ASM::add_instruction("sw $t2, 0($sp)\n");*/
			}


			if (_op == LESS_OR_EQUAL)
			{
				MIPS_ASM::operation("t2", "t1", "t0", 2);
				MIPS_ASM::beq("t2", "0", "equalLabel");
				MIPS_ASM::slt("t2", "t2", "0");
				MIPS_ASM::bne("t2", "0", "trueLabel");
				MIPS_ASM::label("equalLabel");
				MIPS_ASM::add_instruction("addi $t2,$0,1\n");
				MIPS_ASM::jump("saveLabel");
				MIPS_ASM::label("trueLabel");
				MIPS_ASM::operation("t2", "0", "0", 1);
				MIPS_ASM::label("saveLabel");
				MIPS_ASM::push("t2");
			}

			if (_op == MORE_OR_EQUAL)
			{
				MIPS_ASM::operation("t2", "t0", "t1", 2);
				MIPS_ASM::beq("t2", "0", "equalLabel");
				MIPS_ASM::slt("t2", "t2", "0");
				MIPS_ASM::bne("t2", "0", "trueLabel");
				MIPS_ASM::label("equalLabel");
				MIPS_ASM::add_instruction("addi $t2,$0,1\n");
				MIPS_ASM::jump("saveLabel");
				MIPS_ASM::label("trueLabel");
				MIPS_ASM::operation("t2", "0", "0", 1);
				MIPS_ASM::label("saveLabel");
				MIPS_ASM::push("t2");
			}
		}

		//MIPS_ASM::push(t0);
	}

	Type* hypoType = NULL;
	Type* getHypoType(){
		getType();
		if (hypoType)
			return hypoType;
		return getType();
	}
	virtual Type* generateType()
	{


		switch (_op)
		{
		case MULTI:
		case DIV:
		case PLUS:
		case MINUS:

			if (_rightExp->getType() == NULL || _leftExp->getType() == NULL)
			{
				string error = "ERROR in cast in binary operation type is Null ";
				addError(error);
				return symbolTable->getType("error_type");
			}
			if (TypeChecker::canCast(_rightExp->getType(), _leftExp->getType()) == 1)
			{
				return _leftExp->getType();
			}
			else if (TypeChecker::canCast(_rightExp->getType(), _leftExp->getType()) == 2)
			{
				if (TypeChecker::canCast(_leftExp->getType(), _rightExp->getType()) == 1)
					return _rightExp->getType();

				////// THROW WARNING
				string error = "WARNING in convert from " + (_rightExp->getType()->get_name()) + " To " + _leftExp->getType()->get_name();
				addWarning(error);
				return _leftExp->getType();

			}
			else{
				////// THROW ERROR
				string error = "ERROR in convert from " + (_rightExp->getType()->get_name()) + " To " + _leftExp->getType()->get_name();
				addError(error);
				return symbolTable->getType("error_type");;

			}

			//////TO DO <= >= ==  !=

		case EQUAL_EQUAL:
		case NOT_EQUAL:
		case MORE_OR_EQUAL:
		case LESS_OR_EQUAL:
		case LESS_THAN:
		case MORE_THAN:
		{
						  if (_rightExp->getType() == NULL || _leftExp->getType() == NULL)
						  {
							  string error = "ERROR in cast in binary operation type is Null ";
							  addError(error);
							  hypoType = symbolTable->getType("error_type");
						  }
						  if (TypeChecker::canCast(_rightExp->getType(), _leftExp->getType()) == 1)
						  {
							  hypoType = _leftExp->getType();
						  }
						  else if (TypeChecker::canCast(_rightExp->getType(), _leftExp->getType()) == 2)
						  {
							  if (TypeChecker::canCast(_leftExp->getType(), _rightExp->getType()) == 1)
								  hypoType = _rightExp->getType();

							  ////// THROW WARNING
							  string error = "WARNING in convert from " + (_rightExp->getType()->get_name()) + " To " + _leftExp->getType()->get_name();
							  addWarning(error);
							  hypoType = symbolTable->getType("error_type");
						  }
						  else{
							  ////// THROW ERROR
							  string error = "ERROR in convert from " + (_rightExp->getType()->get_name()) + " To " + _leftExp->getType()->get_name();
							  addError(error);
							  hypoType = symbolTable->getType("error_type");

						  }
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

int BinaryOperationNode::labelCount = 0;