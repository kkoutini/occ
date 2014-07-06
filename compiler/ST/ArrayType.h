#pragma once
#include "Type.h"
class ArrayType :
	public Type
{
public:

	int _count=0;
	Type* _type;
	ArrayType(Type* type,int count);
	virtual ~ArrayType();
	virtual int getTypeSize(){
		return _type->getTypeSize()*_count;
	}

};

