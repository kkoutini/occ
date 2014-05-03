#pragma once
#include "ast\Node.h"

class ElseNode :
	public Node
{
protected:
	Node* _statment;


public:
static	int 	Else_label;
	ElseNode(Node* statment,ScoopNode* scoop):Node(scoop),_statment(statment)
	{
		
		
	}

	virtual bool typeCheck()
	{
		//Type* boolType=symbolTable->getType("bool");
		//if (_condtion->getType()==boolType)
		//{
		//	return true;
		//}else
		//{
		/////////////////////////////////////////////////////
		//	/////////// error 
		//	///////////////////////////////////////////////
		//
		//}
		return 1;
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
	virtual ~ElseNode(void)
	{

	}

};

__declspec(selectany) int ElseNode::Else_label;

