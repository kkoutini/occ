#pragma once
#ifndef STRUCTHELPER_H
#define STRUCTHELPER_H
#include "ST\SymbolTable.h"
class SymbolTable;
static class StructHelper
{
public:
	static Struct* createNewStruct(string,SymbolTable*);
	static void addDataMembers(Struct*,vector<string>,Type*,vector<Array*>,bool,SymbolTable*);
};

#endif;