#pragma once
#include "node.h"

class IfNode :
	public VoidNode
{
protected:
	Node* _condtion;
	Node* _statment;
	Node* _elseNode;

public:
	static	int 	if_label;
	IfNode(Node* condition, Node* statment, ScoopNode* scoop, Node* elseNode) :VoidNode(scoop), _condtion(condition), _statment(statment), _elseNode(elseNode)
	{


	}

	virtual bool typeCheck()
	{
		Type* boolType = symbolTable->getType("bool");
		if (_condtion != NULL)
		{


			if (_condtion->getType() == NULL)
			{
				string error = "ERROR TYPE NULL in IF NODE  ";
				addError(error);
				return false;
			}

			if (_condtion->getType() == boolType)
			{
				return true;
			}
			else
			{
				/////////// error 
				string error = "ERROR Cannot implicitly convert type " + _condtion->getType()->get_name() + " to 'bool' ";
				addError(error);
				return false;
			}
		}
		else
			return false;
	}

	void generateCode()
	{

		if (!typeCheck())
		{
			return;
		}
		MIPS_ASM::printComment("ifNode");
		string i = "";
		i = std::to_string(IfNode::if_label++);

		string endif = "else_";
		string end = "endif_";
		endif += i;
		end += i;

		_condtion->generateCode();

		MIPS_ASM::pop("t0");
		MIPS_ASM::beq("t0", "0", endif);
		int st_count = 0;
		if (_statment!=NULL)
		{
			MIPS_ASM::printComment("ifstatment");
			_statment->generateCode();
			if (_statment->_has_return)
				++st_count;
			dispose(_statment);
		}
		
		MIPS_ASM::jump(end);
		MIPS_ASM::label(endif);
		if (_elseNode != NULL){
			_elseNode->generateCode();
			if (_elseNode->_has_return)
				++st_count;

			dispose(_elseNode);

		}
		if (st_count == 2)
			_has_return = true;
		MIPS_ASM::label(end);
	}
	virtual Type* generateType()
	{
		return symbolTable->getType("void");
	}
	virtual ~IfNode(void)
	{

	}

};

__declspec(selectany) int IfNode::if_label;

