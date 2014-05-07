#pragma once
#include "mips_asm.h"
extern int lineNum;
extern int colNum;
class ScoopNode;
class Type;
class Node
{
protected:
		int _line;
		int _col;
		
		Type* type;

public:
	ScoopNode* _scoop;
	virtual void toString(){
	}
	Node(ScoopNode* scoop):_scoop(scoop)
	{
		this->_line = ::lineNum;
		this->_col = ::colNum;

	}
	
	virtual void generateCode (){
		cout<<"Not implmented yet!!!!!!!!!!\n";
	}
	virtual bool typeCheck()
	{
		cout<<"Not implmented yet!!!!!!!!!!\n";
		return true;
	}

	/**
	*	generate type for the node based on it's children 
	*	SHOULD be overriden
	*/
	virtual Type* generateType(){
		
		//cout<<"Not getType implmented yet!!!!!!!!!!\n";
		return type;
	}
	/**
	*	if type isn't gerated yet generate it and cach it
	*/
	virtual Type* getType(){
		if (type != NULL)
			return type;
		return type=generateType();
	}

	virtual ~Node(void)
	{
	}
};

