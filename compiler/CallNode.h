#pragma once
#include"ast\Node.h"
#include <vector>
#include "Selector.h"
#include "ST\Interface.h"
 
class CallNode :
	public Node
{
public:

		vector<Selector*> parameters;
		Variable* obj;
	CallNode(ScoopNode* scoop,Variable* obj):Node(scoop)
	{

	}
	virtual void generate_code(){
	//	Interface* type=obj->getType();
	//	type->getMethodByName
	}
	virtual ~CallNode(void)
	{
	}
};

