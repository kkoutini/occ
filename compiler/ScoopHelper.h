#pragma once
#include "ast\ScoopNode.h"
#include "ST\Method.h"
#include"ST\Array.h"
#include "Program.h"
static class ScoopHelper
{
public:
	static ScoopNode* createNewScoop(ScoopNode*,Method*);
	static void addVariables(vector<string>,vector<Array*>,Type*,bool,ScoopNode*);
		
};

