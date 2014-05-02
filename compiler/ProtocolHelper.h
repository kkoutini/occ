#pragma once
#ifndef PROTOCOLHELPER_H
#define PROTOCOLHELPER_H
#include "ST\SymbolTable.h"
class SymbolTable;
static class ProtocolHelper
{
public:
	static Protocol* createNewProtocol(string,SymbolTable*);
	static void addInheritedProtocol(Protocol*,vector<string>,SymbolTable*);
		static void addMethods(Protocol*,vector<Method*>);

};

#endif;