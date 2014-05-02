#pragma once
#ifndef SymbolTable_H
#define SymbolTable_H
#include <stdio.h>
#include <string>
#include <iostream>
#include"Type.h"
#include <hash_map>
#include "Array.h"
#include "../Selector.h"
#include "../Struct.h"
#include "..\EnumType.h"
#include "..\Program.h"
#include "..\ScoopHelper.h"
#include"..\LongIdHelper.h"
#include"..\InterfaceHelper.h"
#include "..\StructHelper.h"
#include "..\ProtocolHelper.h"
#include "..\EnumHelper.h"
#include "..\SemanticError.h"
#include "Interface.h"


using namespace std;


typedef map<string,Type*> TypesMap;

class SymbolTable
{
private:
	TypesMap types;
public:
	SymbolTable(void);
	~SymbolTable(void);
	//hash_map< string, Type*>symbolTable;
	//void addSymbol(Type*);
	//Type* getSymbol(string);
	Type* getType(string name);
	void toString();
	void add_type(Type*);
	bool checkTypeExist(string name);
	void generateCode();
	//int Size;
	//void add(symbol* newItem); //adds a new item to the table
	//int GetIndex (string str); // get Hashing index
};





#endif;