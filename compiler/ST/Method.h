#ifndef METHOD_H
#define METHOD_H
#include "Symbol.h"
#include "Type.h"
#include <hash_map>
#include <vector>
#include "../Selector.h"
extern int line;
extern int col;
class Variable;
class ScoopNode;
class FunctionNode;
class Method:public Symbol{
public:

	Type* return_type;
	ScoopNode* scoopBody;
	bool is_static;
	bool is_virtual;
	bool is_abstract;
	bool is_override;
	bool is_final;
	string label;
	vector<Selector*> parameters;
	FunctionNode* node;
	public:
		FunctionNode* getF(){
			return this->node;
		}
	Method(string name);
	Method(string name, Type* return_type);
	Method(string name, string access_modifier);	
		Method(Method*);	

//	access_type get_access_modifier();
		void setFunctionNode(FunctionNode*);
	Type* get_return_type();
	void set_return_type(Type* returnType);
	Variable* getParameter(string);
	bool addParameter(Selector*);
	void toString();
	bool static checkReturnType(Method*,Method*);
	void static checkParameters(Method*,Method*);
	string getSignature();
	//variable* get_var_at(int var_index);	
	//int get_para_num();
	//bool equal_parameter(Method*);
	//bool can_overload(Method*);
	//bool can_override(Method*);
	//variable* Get_Intern_Vars(string*);
	//bool Add_Intern_Vars(symbol*);
	//void Set_access_modifier (string Acss_mod);
	//string* Get_access_modifier ();
	bool set_scoop(ScoopNode*);
	ScoopNode* get_Scoop();
	
	
	void set_static(bool);
	bool get_static();
	/*void set_virtual();
	bool get_virtual();
	void set_abstract();
	bool get_abstract();
	void set_override();
	bool get_override();
	void set_final();
	bool get_final();
	void Do_attr(vector<string>);*/
	bool static compare(Method*,Method*);
	void set_variables(vector<Selector*>);
	vector<Selector*> get_variables();

	string getLabel();
	FunctionNode* getNode();
	FunctionNode* Node() const { return node; }
	void Node(FunctionNode* val) { node = val; }
};
#endif