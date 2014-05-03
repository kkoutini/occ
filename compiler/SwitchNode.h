#pragma once
#include "ast\Node.h"
#include <list>
using namespace std;

class SwitchNode :
	public Node
{
protected:
	Node* _expr;
	list<pair<Node*,Node*>>_cases;
public:
	SwitchNode(Node* expr,list<pair<Node*,Node*>>cases,ScoopNode* scoop )
		:Node(scoop),_expr(expr),_cases(cases)
	{
	}
	SwitchNode(SwitchNode* temp):Node(temp->_scoop){
		SwitchNode(temp->_expr,temp->_cases,temp->_scoop);
	}
	void setExpr(Node* expr){
		this->_expr=new Node(expr);
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
			if((*itr).first->get_type==_expr->get_type)
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
	virtual ~SwitchNode(void)
	{
	}



};