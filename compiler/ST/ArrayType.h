#pragma once
#include "Type.h"
class ArrayType :
	public Type
{
	int _count=0;
	Type* _type;
public:
	ArrayType(Type* type,int count);
	virtual ~ArrayType();
	virtual int getTypeSize(){
		return _type->getTypeSize()*_count;
	}

};

