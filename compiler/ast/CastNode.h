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
			string error = "ERROR in cast NODE type is null  in  line number ";
			Program::addError(new SemanticError(error));
			symbolTable->getType("error_type");
		}
		else
		{


			int res = TypeChecker::canCast(_node->getType(), _toType);
			if (res == 1)
				return _toType;
			else if (res == 2)
			{
				//////////////////////////////////////
				/////////WARNIONOGGNOONG
				//////////////////////////////////

				string error = "Warning in cast NODE can't cast in  line number ";
				Program::addWarning(new Warning(error));
				return _toType;

			}
			else
			{
				//throw error
				string error = "ERROR in cast NODE can't cast in  line number ";
				Program::addError(new SemanticError(error));
				symbolTable->getType("error_type");
			}
		}
	}

	virtual ~CastNode(void)
	{
	}
};

