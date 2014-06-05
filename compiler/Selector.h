#pragma once
#ifndef SELECTOR_H
#define SELECTOR_H
#include<string>
#include<vector>
using namespace std;
#include "ST\variable.h"
#include "ST\Symbol.h"

class Method;
class Variable;
class Type;
class Selector :public Symbol
{
public:
	string name;
	
	
		Selector(string name);
		static bool compareSelector(Selector*,Selector*);
		virtual  int getTypesSize() const = 0;
		virtual Type* getTypeAt(int i)const = 0;

		bool operator==(const Selector &b){
			if (name != b.name)
				return false;
			if (getTypesSize() != b.getTypesSize())
				return false;
			for (int i = 0; i < getTypesSize(); i++)
			{
				if (b.getTypeAt(i) != getTypeAt(i))
					return false;
			}
			return true;

		}
		bool operator<(const Selector &b)const;
	~Selector(void);
};

#endif;