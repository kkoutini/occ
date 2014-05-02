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

	 bool type_check()
	{
		Type* boolType=symbolTable->getType("bool");
		if (_condtion->get_type()==boolType)
		{
			return true;
		}else
		{
		///////////////////////////////////////////////////
			/////////// error 
			///////////////////////////////////////////////
		
		}

	}

	  void generate_code ()
	  {
		
	string i = "";
	i=std::to_string(IfNode::if_label++);
	
	string endif = "endif_";
	string end = "end_";
	endif+=i;
	end+=i;

	_condtion->generate_code();

	MIPS_ASM::pop("t0");
	MIPS_ASM::beq("t0","0",endif);
	
	_statment->generate_code();
	MIPS_ASM::jump(end);
	MIPS_ASM::label(endif);
	if(_elseNode!=NULL)
		_elseNode->generate_code();
	MIPS_ASM::label(end);
	}
	virtual ~IfNode(void)
	{

	}

};

__declspec(selectany) int IfNode::if_label;

