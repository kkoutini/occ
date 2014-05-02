#pragma once
#ifndef LONGIDHELPER_H
#define LONGIDHELPER_H
#include<string>
#include<vector>
#include "ST\Interface.h"
#include "ast\ScoopNode.h"
using namespace std;
static class LongIdHelper
{
private:
	static vector<string>identifierList;
public:
	static void addIdentifier(string);
	static Variable* checkIdenentifier(ScoopNode*,Interface*,string);
};

#endif;