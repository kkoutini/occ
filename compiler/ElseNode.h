#pragma once
#include "voidNode.h"

class ElseNode :
	public VoidNode
{
protected:
	Node* _statment;


public:
static	int 	Else_label;
ElseNode(Node* statment, ScoopNode* scoop) :VoidNode(scoop), _statment(statment)
	{
		
		
	}

	  void generateCode ()
	  {
		
	string i = "";
	i=std::to_string(ElseNode::Else_label++);
	
	string endif = "endelse_";
	string end = "end_";
	endif+=i;
	end+=i;
	
	_statment->generateCode();
	}
	 virtual Type* generateType()
	 {
	  return symbolTable->getType("void");
	 }
	virtual ~ElseNode(void)
	{

	}

};

__declspec(selectany) int ElseNode::Else_label;

