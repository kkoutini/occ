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
	map<string, bool> declaredInterfaces;
public:
	SymbolTable(void);
	~SymbolTable(void);
	//hash_map< string, Type*>symbolTable;
	//void addSymbol(Type*);
	//Type* getSymbol(string);
	Type* getType(string name);
	bool checkTypeProtocol(string name);
	bool getInterfaceState(string name);
	void add_interfaceState(string, bool);
	void set_interfaceState(string, bool);
	void toString();
	void add_type(Type*);
	bool checkTypeExist(string name);
	void generateCode();
	void SymbolTable::generateStatics();
	void SymbolTable::generateStaticsCode();
	void generateKernalCode();
	bool checkInhertanceLoop();


	//int Size;
	//void add(symbol* newItem); //adds a new item to the table
	//int GetIndex (string str); // get Hashing index
};





#endif;