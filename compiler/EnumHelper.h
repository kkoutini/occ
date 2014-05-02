#pragma once
#ifndef ENUMHELPER_H
#define ENUMHELPER_H
#include "ST\SymbolTable.h"
class SymbolTable;
static class EnumHelper
{
public:
	static void createNewEnum(string,vector<string>,SymbolTable*);
	static void addInheritedProtocol(Protocol*,vector<string>,SymbolTable*);
		static void addMethods(Protocol*,vector<Method*>);

};

#endif;