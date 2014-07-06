#include "ArrayType.h"


ArrayType::ArrayType(Type* t, int c) :Type(t->get_name() + "_array"), _type(t), _count(c)
{

}


ArrayType::~ArrayType()
{
}
