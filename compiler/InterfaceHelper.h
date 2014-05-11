#pragma once
#ifndef INTERFACEHELPER_H
#define INTERFACEHELPER_H
#include "ST\SymbolTable.h"


class SymbolTable;
static class InterfaceHelper
{
public:
	static Interface* createNewInterface(string,string,SymbolTable*);
	static void addMethods(Interface*,vector<Method*>);
	static void addInheritedProtocol(Interface*,vector<string>,SymbolTable*);
	static void addDataMembers(Interface*,vector<string>,Type*,vector<Array*>,bool,SymbolTable*,string);
	static Method* createNewMethod(Type*, SymbolTable*, string, vector<DeclerationSelector*>, bool);
		static Interface* checkImplementation(string,SymbolTable*,string);
		static void implementMethods(vector<Method*>,Interface*);
};

#endif;