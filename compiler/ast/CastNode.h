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
public:

	CastNode(ScoopNode* scoop,Type* toType,Node* node):Node(scoop),_toType(toType),_node(node)
	{
	}
	
	virtual Type* generateType()
	{
		int res=TypeChecker::canCast(_node->getType(),_toType);
		if(res==1)
			return _toType;
		else if(res==2)
		{
				//////////////////////////////////////
			/////////WARNIONOGGNOONG
			//////////////////////////////////
				return _toType;
		
		}
		else 
		{
			//////////////////////////////////////
			/////////ERNONGNOGGNOONG
			//////////////////////////////////
			symbolTable->getType("error_type");
		}
	}

	virtual ~CastNode(void)
	{
	}
};

