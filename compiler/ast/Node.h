#pragma once
#include "mips_asm.h"
#include <string>
#include "../SemanticError.h";
#include "../Warning.h";
#include "../Program.h";

extern bool Garbage_Collect ;

class ScoopNode;
class Type;
class Node
{
protected:
	int _line;
	int _col;
	string _filename;
	Type* type;


public:
	bool _has_return;

	int value_int;
	float value_float;
	bool constant;
	ScoopNode* _scoop;
	virtual void toString(){
	}
	Node(ScoopNode* scoop) :_scoop(scoop)
	{
		this->_line = ::lineNum;
		this->_col = ::colNum;
		this->_filename = ::sourceFile;
	}

	virtual void generateCode(){
		cout << "Not implmented yet!!!!!!!!!!\n";
	}
	virtual bool typeCheck()
	{
		cout << "Not implmented yet!!!!!!!!!!\n";
		return true;
	}

	void addError(string error)
	{
		Program::addError(new SemanticError(error,_col,_line,_filename));
	}
	void addWarning(string error)
	{
		Program::addWarning(new Warning(error, _col, _line, _filename));
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
	virtual string getDebugString()
	{
		return string("#F:") + _filename + string(" #L:") + std::to_string(_line);
		//+string(" #C:") + std::to_string(_col);
	}
	virtual Node* copySourceInfo(Node* a)
	{
		_line = a->_line;
		_col = a->_col;
		_filename = a->_filename;
		return this;
	}
	//remove node evaluation from stack
	// should always be done unleess you need the val
	void dispose(Node* n);
	virtual ~Node(void)
	{
	}
};

