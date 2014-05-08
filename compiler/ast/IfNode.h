#pragma once
#include "node.h"

class IfNode :
	public Node
{
protected:
	Node* _condtion;
	Node* _statment;
	Node* _elseNode;

public:
static	int 	if_label;
IfNode(Node* condition,Node* statment,ScoopNode* scoop,Node* elseNode):Node(scoop),_condtion(condition),_statment(statment),_elseNode(elseNode)
	{
		
		
	}

	virtual bool typeCheck()
	{
		Type* boolType=symbolTable->getType("bool");
		
		if (_condtion->getType()==NULL)
		{
			string error = "ERROR TYPE NULL in IF NODE  AT Line Number :" + std::to_string(_line) + " Column Number :" + std::to_string(_col);
			Program::addError(new SemanticError(error));
			return false;
		}

		if (_condtion->getType()==boolType)
		{
			return true;
		}else
		{
			/////////// error 
			string error = "ERROR Cannot implicitly convert type " + _condtion->getType()->get_name() + " to 'bool'  AT Line Number :" + std::to_string(_line) + " Column Number :" + std::to_string(_col);
			Program::addError(new SemanticError(error));
			return false;
		}

	}

	  void generateCode ()
	  {
		
	string i = "";
	i=std::to_string(IfNode::if_label++);
	
	string endif = "endif_";
	string end = "end_";
	endif+=i;
	end+=i;

	_condtion->generateCode();

	MIPS_ASM::pop("t0");
	MIPS_ASM::beq("t0","0",endif);
	
	_statment->generateCode();
	MIPS_ASM::jump(end);
	MIPS_ASM::label(endif);
	if(_elseNode!=NULL)
		_elseNode->generateCode();
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

