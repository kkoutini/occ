#pragma once
#include "VoidNode.h"
class CatchNode :
	public VoidNode
{

public:
	Node* _statement;
	CatchNode* next = 0;
	Type* exp;
	string idn;
	static int lbl_count ;
	int numId=0;
	CatchNode(ScoopNode* scoop, Type* type, string identifier) :VoidNode(scoop), exp(type), idn(identifier)
	{
		//add to scoops
	}
	string getCatchLabel(){
		return "catch_" + std::to_string(getNumId());
	}
	int getNumId(){
		if (numId == 0)
			numId = ++lbl_count;
		return numId;
	}
	virtual ~CatchNode()
	{
	}
};

int CatchNode::lbl_count = 0;
