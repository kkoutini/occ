#pragma once
#include <map>
using namespace std;
#include "../ST/SymbolTable.h"
extern SymbolTable* symbolTable;
#include "../ST/Type.h"
class TypeChecker
{
public:

	static bool isInit;
	static map<Type * ,map<Type *,int > > _castTable; 
	static void initCell(string typeFrom,string typeTo,int val)
	{
		_castTable[symbolTable->getType(typeFrom)][symbolTable->getType(typeTo)]=val;
	}
	static void Init()
	{
		if (isInit)
		{
			return ;

		}
		isInit=true;
		initCell("int","int",1);
		initCell("int","float",1);
		initCell("int","char",1);
		initCell("int","bool",1);
		initCell("int","NSString",0);
		initCell("int", "error_type", 1);
		initCell("int", "id", 0);

		initCell("float","int",2);
		initCell("float","float",1);
		initCell("float","char",0);
		initCell("float","bool",0);
		initCell("float","NSString",0);
		initCell("float", "error_type", 1);
		initCell("float", "id", 0);

		initCell("NSString","int",0);
		initCell("NSString","float",0);
		initCell("NSString","char",0);
		initCell("NSString","bool",0);
		initCell("NSString","NSString",1);
		initCell("NSString", "error_type", 1);
		initCell("NSString", "id", 0);

		initCell("char","int",1);
		initCell("char","float",0);
		initCell("char","char",1);
		initCell("char","bool",0);
		initCell("char","NSString",0);
		initCell("char", "error_type", 1);
		initCell("char", "id", 0);

		initCell("bool","int",1);
		initCell("bool","float",0);
		initCell("bool","char",0);
		initCell("bool","bool",1);
		initCell("bool","NSString",0);
		initCell("bool", "error_type", 1);
		initCell("bool", "id", 0);

		
		

	}
	static int canCast(Type * from,Type *to)
	{
		Interface* ifsf = dynamic_cast<Interface*>(from);
		Interface* ifst = dynamic_cast<Interface*>(to);
		if (ifsf&&ifst)
			return ifsf->isDescendentOf(ifst);
		Init();
		if (to == symbolTable->getType("error_type"))
			return 1;
		if (to == symbolTable->getType("id") && ifsf)
			return 1;
		if (from == symbolTable->getType("id") )
			return 2;
		return _castTable[from][to];
	}

	TypeChecker(void)
	{
	
	}

	virtual ~TypeChecker(void)
	{
	}
};
