
#ifndef VAR_H
#define VAR_H
#include <string>
#include "Type.h"
#include "Symbol.h"
using namespace std;
class Type;
class Variable:public Symbol{
private:
	Type * type;
	enum	AccessModifier accessModifier;
	bool isConst;

public :
	int offset;// offset of the function frame for code generation

	//Variable(string name, string var_type="Variable");
	virtual void toString();
	Variable(string name, Type* type,string="@public");
	Variable(Variable*);
	Variable(string name, Type* type, bool);
	static bool compare (Variable *,Variable*);
	string getAccessModifier();
	void setAccessModifier(string );


	virtual bool getIsConst();
	virtual void setIsConst(bool );
	Type* getType();
	void setType(Type*);
	string to_string();
};
#endif