#ifndef SCOOP_H
#define SCOOP_H
#include <string>
#include "Symbol.h"
#include <vector>
#include <hash_map>
#include "variable.h"
class Scoop: public Symbol{
private:	
	hash_map<string, Variable*> internal_variables;
	Scoop* parent;
	vector<Scoop*>internalScoops;
public:
	Scoop(Scoop*);
	Scoop(Scoop*,string);
	void setParent(Scoop* parent);
	bool add_variable(Variable*);
	Variable* get_variable(string name);
		bool checkVariableExistance(string);
	void toString();
	void addInternalScoop(Scoop*);
	vector<Scoop*>getInternalScoops();
	Scoop* getParent();
	void setInternalScoops(vector<Scoop*>);

};
#endif;