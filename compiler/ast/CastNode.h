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
		if (_node->getType()==NULL)
		{
			string error = "ERROR in cast NODE type is null   ";
			addError((error));
			symbolTable->getType("error_type");
		}
		else
		{


			int res = TypeChecker::canCast(_node->getType(), _toType);
			if (res == 1)
				return _toType;
			else if (res == 2)
			{
				/////////WARNING
				string error = "WARNING in convert from " + (_node->getType()->get_name()) + " To " + _toType->get_name();
				addWarning(error);
				return _toType;

			}
			else
			{
				//throw error
				string error = "ERROR in convert from " + (_node->getType()->get_name()) + " To " + _toType->get_name();
				addError(error);
				symbolTable->getType("error_type");
			}
		}
	}

	virtual ~CastNode(void)
	{
	}
};

