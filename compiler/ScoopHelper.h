#pragma once
#include "ast\ScoopNode.h"
#include "ST\Method.h"
#include"ST\Array.h"
#include "Program.h"
#include "ST\Interface.h"

static class ScoopHelper
{
public:
	
	static FunctionNode* createNewFunctionNode( Method*, Interface*);
	static ScoopNode* createNewScoop(ScoopNode*);
	static void addVariables(vector<string>, vector<Array*>, Type*, bool, ScoopNode*);
		
};

