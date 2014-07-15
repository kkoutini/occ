#pragma once
#include "node.h"
#include "../ST/Type.h"
#include "../ST/SymbolTable.h"
#include "TypeChecker.h"
extern SymbolTable* symbolTable;
class CastNode :
	public Node
{
	Type* _toType;
	Node* _node;
	static int count;
public:

	CastNode(ScoopNode* scoop,Type* toType,Node* node):Node(scoop),_toType(toType),_node(node)
	{
	}
	virtual void generateCode()
	{
		
		if (getType()== symbolTable->getType("error_type"))
			return;
		MIPS_ASM::printComment("cast node");
		MIPS_ASM::printComment("code for node");
		_node->generateCode();
		MIPS_ASM::printComment("casting");

		Type* intType = symbolTable->getType("int");
		Type* boolType = symbolTable->getType("bool");
		Type* floatType = symbolTable->getType("float");
		auto fromt = _node->getType();
		if (_toType == intType && fromt==floatType)
		{
			MIPS_ASM::popf("f1");
			MIPS_ASM::add_instruction("cvt.w.s $f1,$f1\n");
			MIPS_ASM::pushf("f1");
			return;
		}
		if (_toType == floatType && fromt == intType)
		{
			MIPS_ASM::popf("f1");
			MIPS_ASM::add_instruction("cvt.s.w $f1,$f1\n");
			MIPS_ASM::pushf("f1");
			return;
		}
		auto ifs = dynamic_cast<Interface*>(fromt);
		auto its = dynamic_cast<Interface*>(_toType);
		++count;
		if (ifs){
			MIPS_ASM::top("t0");
			MIPS_ASM::beq("t0", "0", "cast_label" + std::to_string(count));
			MIPS_ASM::lw("t0", 0, "t0");
			MIPS_ASM::add_instruction("beq $t0," + std::to_string(its->getId()) + ",cast_label" + std::to_string(count));
			MIPS_ASM::pop("t0");
			MIPS_ASM::push("0");

			MIPS_ASM::label("cast_label" + std::to_string(count));

		}
	}
	virtual Type* generateType()
	{
		if (_node->getType()==NULL)
		{
			string error = "ERROR in cast NODE type is null   ";
			addError((error));
			symbolTable->getType("error_type");
		}
		else
		{


			int res = TypeChecker::canCast(_node->getType(), _toType);
			if (res == 1)
				return _toType;
			else if (res == 2)
			{
				/////////WARNING
				string error = "WARNING in convert from " + (_node->getType()->get_name()) + " To " + _toType->get_name();
				addWarning(error);
				return _toType;

			}
			else if (dynamic_cast<Interface*>(_node->getType()) && dynamic_cast<Interface*>(_toType))
			{
				return _toType;
			}
			else
			{
				//throw error
				string error = "ERROR in convert from " + (_node->getType()->get_name()) + " To " + _toType->get_name();
				addError(error);
				symbolTable->getType("error_type");
			}
		}
	}

	virtual ~CastNode(void)
	{
	}
};

