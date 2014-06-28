#ifndef METHOD_H
#define METHOD_H
#include "Symbol.h"
#include "Type.h"
#include <hash_map>
#include <vector>
#include "../Selector.h"

#include "../DeclerationSelector.h"
extern int line;
extern int col;
class Variable;
class ScoopNode;
class Interface;
class FunctionNode;
class Method:public Symbol{
public:

	Type* return_type;
	//ScoopNode* scoopBody;
	bool is_static;
	bool is_virtual;
	bool is_abstract;
	bool is_override;
	bool is_final;
	string label;
	vector<DeclerationSelector*> parameters;
	FunctionNode* scoopBody;
	public:
		FunctionNode* getFunctionNode(){
			return this->scoopBody;
		}
	Method(string name);
	Method(string name, Type* return_type);
	Method(string name, string access_modifier);	
		Method(Method*);	

//	access_type get_access_modifier();
		void setFunctionNode(FunctionNode*);
	Type* getReturnType();
	Interface* Method::getInterface();

	void set_return_type(Type* returnType);
	DeclerationSelector* getSelector(string);
	bool addSelector(DeclerationSelector*);
	void toString();
	string to_string();
	bool static checkReturnType(Method*,Method*);
	void static checkParameters(Method*,Method*);
	string getSignature();
	int Method::getId();

	//variable* get_var_at(int var_index);	
	//int get_para_num();
	//bool equal_parameter(Method*);
	//bool can_overload(Method*);
	//bool can_override(Method*);
	//variable* Get_Intern_Vars(string*);
	//bool Add_Intern_Vars(symbol*);
	//void Set_access_modifier (string Acss_mod);
	//string* Get_access_modifier ();
	bool set_scoop(FunctionNode*);
	ScoopNode* get_Scoop();

	int get_params_num();
	
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
	void set_variables(vector<DeclerationSelector*>);
	vector<DeclerationSelector*> get_variables();

	string getLabel();
	FunctionNode* getNode();
	FunctionNode* Node() const { return scoopBody; }
	void Node(FunctionNode* val) { scoopBody = val; }

	// compare only the method signature
	bool operator<(const Method& method2)const{
		if (parameters.size() == method2.parameters.size() )
		{
			int j = 0;

			for (int i = 0; i < parameters.size(); i++)
			{

				if (!Selector::compareSelector(parameters.at(i), method2.parameters.at(j)))
					return *parameters.at(i)<* method2.parameters.at(j);
				j++;
			}
			return get_name()<method2.get_name();
		}
		// to do mwssages case
		return parameters.size() < method2.parameters.size();

	}
	
};
#endif