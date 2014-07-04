#pragma once
#include "ast\Node.h"
#include <list>
using namespace std;

class SwitchNode :
	public VoidNode
{
protected:
	Node* _expr;
	list<pair<Node*,Node*>>_cases;
public:
	SwitchNode(Node* expr,list<pair<Node*,Node*>>cases,ScoopNode* scoop )
		:VoidNode(scoop), _expr(expr), _cases(cases)
	{
	}
	void setExpr(Node* expr){
		this->_expr=expr;
	}
	void addCase(Node* expr,Node* statement){
		_cases.push_back(make_pair(expr,statement));
	}
	virtual bool typeCheck()
	{
		

		/*list<pair<Node*,Node*>>::iterator itr=_cases.begin();
		bool f = true;
		for(;itr<_cases.end();itr++)
		{
			if((*itr).first->getType==_expr->getType)
			{

			}
			else
			{
				f=false;
				////////////////////////////////
				//////error
				///////////////////////
			}
		}
		return f;*/
		return false;
	}
	virtual Type* generateType()
	{
		return symbolTable->getType("void");
	}
	virtual ~SwitchNode(void)
	{
	}



};