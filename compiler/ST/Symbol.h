#ifndef Symbol_H
#define Symbol_H
#include <string>

//#include "../yacc.hpp"
extern std::ofstream out;
using namespace std;


class Symbol{
private:
	
	//Symbol* prev;
	string name;
	
	//string path;
public:
	//Symbol();	
	Symbol(string);
	Symbol(Symbol*);
//	Symbol(string, string);
	//virtual void set_prev(Symbol* next);	
	//virtual Symbol* get_prev();	
	virtual string get_name();
	virtual void set_name(string name);
	//virtual void set_path(string path);
	//virtual string get_path();
	//virtual void set_full_path(string path);
	//virtual void to_string();
	
};
#endif 