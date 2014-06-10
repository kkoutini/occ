%output "yacc.cpp"
%define parse.lac full
%define parse.error verbose

%{
	#include <iostream>
	#include <FlexLexer.h>
	#include <string>
	#include <stack>
	#include "ast\node.h"
	#include "ST\SymbolTable.h"
	#include "ast\ConstantNode.h"
	#include "CallNode.h"
		#include "CallSelector.h"
		#include "DeclerationSelector.h"
		#include "ast\IdentifierNode.h"
				#include "ast\BinaryOperationNode.h"
				#include "ast\CastNode.h"
				#include "ast\UnaryNode.h"
				#include "ast\WhileNode.h"
				#include "ast\ForNode.h"
				#include "ast\IfNode.h"
				#include "ast\ReturnNode.h"
				#include "ast\ScoopNode.h"
						#include "ast\AssignNode.h"
				#include "SwitchNode.h"
				#include "ast/DeclerationNode.h"
				#include "ast/FunctionNode.h"
				#include "DoWhileNode.h"
				#include "ElseNode.h"
				#include "ClassNode.h"
				#include "AsmNode.h"
				#include "DotNode.h"
				#include <fstream>
	using namespace std;
	
    extern string sourceFile="";
	int yylex(void);
	int yyparse();
	void yyerror(const char *);

	//extern int linenum;
	//extern int colno;
	//extern string ytext; 
	extern std::ofstream ofs ("test.txt", std::ofstream::out);
	FlexLexer* lexer ;
	SymbolTable * symbolTable =new SymbolTable();
	Variable * var=NULL;
	Protocol * protocol=NULL;
	Struct* myStruct=NULL;
	char * visibility="@public";
	Array * var1=NULL;
	Interface* interface=NULL;
	vector<int>arrayAlloc;
	vector<string>idsList;
	vector<Array*>arrayList;
	vector<Method*>methodsList;
	vector <ScoopNode*>scoopVector;
	ScoopNode* scoop=NULL;
	ScoopNode* cscoop=NULL;
	bool flag=false;
	Node* tempNode;
	Method * method=NULL;
	DeclerationSelector* tselector=NULL;
	
	CallSelector* cselector=NULL;
	vector <DeclerationSelector *> selectorsList;
	vector <Variable *> selectorVarList;
	stack<CallNode*>callNodeStack;
	Type* type=NULL;
	vector <Node*>casesNode;
	SwitchNode * tempSwitch=NULL;
	list<pair<string,Node*> > declarationList;
	FunctionNode* functionNode;
	ClassNode* classNode;
	CallNode* callNode;
Method* nodeXX;
	class Parser{
		public:
		int	parse()
		{
			return yyparse();
		}
	};
%}

%token AT_INTERFACE //@interface
%token IDENTIFIER 	//any identifier
%token SEMI_COLUMN //:
%token NSSTRING		//NSString keyword
%token FLOAT		//float keyword
%token CHAR		//char keyword
%token BOOL    //bool keyword
%token INT			//int keyword
%token SEMI_COMA	//;
%token ID			//id keyword
%token AT_PUBLIC	//@public
%token AT_PROTECTED	//@protected
%token AT_PRIVATE		//@private
%token OPEN_S			//{
%token CLOSE_S			//}
%token COMMA			//,
%token LESS_THAN 		//<
%token MORE_THAN		//>
%token AT_END			//@end
%token CONST			//const key word
%token VOID				//void keyword
%token PLUS				//+
%token MINUS			//-
%token OPEN_P			//(
%token CLOSE_P			//)
%token AT_IMPLEMENTATION	//@implementation
%token AND_AND			//&&
%token OR_OR			//||
%token STRING_VAL		//any string value starts with " or @" and ends with "
%token FLOAT_VAL		//any float value 
%token LESS_OR_EQUAL	//<=
%token CHAR_VAL			//'any_char_value'
%token INT_VAL			//any integer value
%token MORE_OR_EQUAL	//>=
%token MULTI			//*
%token EQUAL_EQUAL		//==
%token	NOT_EQUAL		//!=
%token	FOR				//for keyword
%token	EQUAL			//=
%token  DIV				//%
%token  WHILE			//while
%token  IF				//if
%token  DO              //do
%token SWITCH           //switch
%token CASE             //case
%token DEFAULT          //default
%token BREAK            //break
%token ENUM             //enum
%token  OPEN_ARR		//[
%token  CLOSE_ARR		//]
%token  TRUE			//true
%token  FALSE			//false
%token  RETURN			//return
%token AT_PROTOCOL		//@protocol
%token ELSE            //else
%token STRUCT		//struct
%token error		//@error
%token DOT          //.
%token DOUBLEPLUS //++
%token DOUBLEMINUS //--
%token TRY //try
%token CATCH //catch
%token FINALLY //finally
%token AT_ASM  //@asm
%token SELF   //self pointer
%code requires {
#include "ast\node.h"
}
%union {
	
	struct R {
		int colNo;
		int lineNo;
		int int_val;
		char char_val;	
		char* string_val;
		float float_val;
		char* text;
		Node* node;
			      }r;
	   }
%nonassoc if_h
%nonassoc ELSE
%nonassoc AND_AND OR_OR
%nonassoc expr_1
%nonassoc STRING_VAL INT_VAL FLOAT_VAL CLOSE_ARR CHAR_VAL
%nonassoc p_type_expr_prec
%nonassoc DOUBLEPLUS
%nonassoc DOUBLEMINUS
%left PLUS MINUS
%left MULTI DIV
%nonassoc long_id_prec
%nonassoc DOT
%nonassoc try_prec
%nonassoc CATCH
%nonassoc FINALLY

%%
program: components	                     {cout<<"program: components\n"; 
										 }       
;
components: components component		 {cout<<"components: components component\n";}
			|component				   	{cout<<"components: component\n";}
;
component:	class_interface				{cout<<"class_interface \n";}
			|class_implementation		{cout<<"class_implementation \n";}
			|protocol					{cout<<"protocol \n";}
			|struct						{cout<<"struct \n";}
			|enum						{cout<<"enum \n";}
;
class_interface: class_interface_header class_interface_body	{cout<<"class_interface: class_interface_header class_interface_body\n";
																interface->setClassNode(classNode);
																classNode=NULL;
																 idsList.clear();
																 methodsList.clear();
																 method=NULL;
																}
                	
						
;
class_interface_header:  AT_INTERFACE IDENTIFIER		SEMI_COLUMN IDENTIFIER	{cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																				interface=InterfaceHelper::createNewInterface($<r.text>2,$<r.text>4,symbolTable);
																				classNode=new ClassNode(NULL,interface);
																				}
						|AT_INTERFACE IDENTIFIER								{
																					cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
																				 interface=InterfaceHelper::createNewInterface($<r.text>2,"",symbolTable);
																				 	classNode=new ClassNode(NULL,interface);
																				}
						|error IDENTIFIER								{cout<<"Error: Unknown type name '"<<$<r.text>1<<"' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}	
						|AT_INTERFACE error					{cout<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}	
						
						|AT_INTERFACE IDENTIFIER SEMI_COLUMN 	error  		{cout<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}		
;
class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END	
														{	
															
														InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														}
						|protocol_reference_list instance_variables								AT_END	
														{
														cout<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														}
						|protocol_reference_list 					interface_declaration_list	AT_END	
														{	
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	protocol_reference_list interface_declaration_list	AT_END\n";
														}
						|						instance_variables	interface_declaration_list	AT_END	
														{	
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														}
						|protocol_reference_list 												AT_END	 
														{
																cout<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														}
						|						instance_variables								AT_END	 
														{cout<<"class_interface_body:instance_variables		AT_END\n";}
						|											interface_declaration_list	AT_END	 
														{														
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:interface_declaration_list	AT_END\n";
														}
						|AT_END	                    {cout<<"class_interface_body:AT_END\n";} 
						| protocol_reference_list error AT_END {cout<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}	
						| protocol_reference_list error  interface_declaration_list AT_END {cout<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}	
						|protocol_reference_list error {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
						|protocol_reference_list instance_variables interface_declaration_list error{cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}	
							|protocol_reference_list instance_variables  error{cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
								|protocol_reference_list  interface_declaration_list error{cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
									| instance_variables interface_declaration_list error{cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
										| instance_variables  error{cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
											|  interface_declaration_list error{cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}												
										
;
protocol_reference_list:
	LESS_THAN ids_list_identifier MORE_THAN		{
													if(interface!=NULL){
													InterfaceHelper::addInheritedProtocol(interface,idsList,symbolTable);
														idsList.clear();
													}
													cout<<"protocol_reference_list: LESS_THAN ids_list_identifier MORE_THAN\n";
												}
	| LESS_THAN ids_list_identifier error        {cout<<"Error: Expected '>' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}	
;
ids_list_identifier:
	ids_list_identifier COMMA IDENTIFIER			{
													cout<<"ids_list:ids_list_identifier COMMA IDENTIFIER\n"; 
													idsList.push_back($<r.text>3);
													}
	|IDENTIFIER										{
													cout<<"ids_list_identifier:IDENTIFIER\n";
													idsList.push_back($<r.text>1);
												    }
;
array_body : OPEN_S array_ele CLOSE_S  {cout<<"array with body";}
|OPEN_S  CLOSE_S  {cout<<"array without elements";}
;


array_ele: expr COMMA array_ele {cout<<"array-element \n";}
           |expr {cout<<"array-element \n";}
		   | OPEN_S CLOSE_S {cout<<"empty element \n";}
		   |OPEN_S array_ele CLOSE_S COMMA array_ele {cout<<"inside braces element \n";}
		   |OPEN_S array_ele CLOSE_S {cout<<"inside braces element \n";}
		   |OPEN_S CLOSE_S COMMA array_ele   {cout<<"inside braces element \n";}
;
instance_variables:
	OPEN_S	instance_variable_declarations	CLOSE_S	{cout<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";}
	| OPEN_S CLOSE_S  {cout<<"instance_variables:OPEN_S	 CLOSE_S\n";}
;
instance_variable_declarations:
	instance_variable_declarations instance_variable_declaration		{cout<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";}
	|instance_variable_declaration										{cout<<"instance_variable_declarations:instance_variable_declaration\n";}
	|variable_declaration_list											{cout<<"instance_variable_declarations:variable_declaration_list\n";}
;
instance_variable_declaration:
	visibility_specification variable_declaration_list				{cout<<"instance_variable_declaration:visibility_specification variable_declaration_list\n";
																	}
;
variable_declaration_list: variable_declaration_list variable_declarationxx		
										{
										cout<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
											arrayList.clear();
												idsList.clear();
												flag=false;
										}
						|variable_declarationxx									
										{
										       InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
												arrayList.clear();
												idsList.clear();
												flag=false;
										cout<<"variable_declaration_list: variable_declaration\n";
										}
;

visibility_specification:
	AT_PRIVATE		{cout<<"visibility_specification:AT_PRIVATE\n";  visibility=new char[256]; visibility[0]='\0';strcat(visibility,$<r.text>1);}
	|AT_PROTECTED	{cout<<"visibility_specification:AT_PROTECTED\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,$<r.text>1);}
	|AT_PUBLIC		{cout<<"visibility_specification:AT_PUBLIC\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,$<r.text>1);}
	
;
struct_variable_declaration:
														
	struct_declaration_list													{cout<<"struct_variable_declaration:struct_declaration_list\n";}
;
variable_declarationxx:
	type ids_list	SEMI_COMA					{cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
	                                           $<r.text>$=$<r.text>1;
												}
	|CONST type ids_list	SEMI_COMA				{cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 $<r.text>$=$<r.text>2;
													}
	|type IDENTIFIER array_tag error{cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}	

;
ids_list:
	ids_list COMMA data_member			{
									cout<<"ids_list:ids_list COMMA id_dec\n"; 

									}
	|data_member							{cout<<"ids_list:id_dec\n"; }
	 |error							{cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
;
data_member:
 IDENTIFIER array_tag  {cout <<" data_member: IDENTIFIER array_tag \n";
							 var=new Array($<r.text>2,arrayAlloc.size(),NULL);
					       ( dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
						   arrayList.push_back( ( dynamic_cast<Array*>(var)));
						      arrayAlloc.clear();
							}
 |IDENTIFIER  {idsList.push_back($<r.text>1) ;cout <<" data_member: IDENTIFIER  \n";}
 |error array_tag 				{cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
 |IDENTIFIER error              {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
;
struct_declaration_list:  struct_declaration_list  variable_declarationxx		{  
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																												idsList.clear();
																												flag=false;
																										  cout<<"struct_declaration_list: struct_declaration_list  variable_declarationxx\n";
																										}

						| variable_declarationxx									{	
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																														 	idsList.clear();
																															flag=false;
																										cout<<"struct_declaration_list:  variable_declarationxx\n";
																										}
						|error variable_declarationxx {cout<<"Error: Illigal visibility specification at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
					
;
struct_header: 
STRUCT IDENTIFIER {
					myStruct=StructHelper::createNewStruct($<r.text>2,symbolTable);
					cout<<"struct_header: STRUCT  IDENTIFIER\n";
					}
;
struct:
    struct_header OPEN_S   CLOSE_S entity SEMI_COMA    {cout<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S  entity SEMI_COMA\n";}
	| struct_header OPEN_S struct_variable_declaration  CLOSE_S entity SEMI_COMA   {cout<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S enteity SEMI_COMA \n";}
	|  struct_header OPEN_S   CLOSE_S  SEMI_COMA    {cout<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S SEMI_COMA\n";}
	| struct_header OPEN_S struct_variable_declaration  CLOSE_S  SEMI_COMA    {cout<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S  SEMI_COMA  \n";}
	|struct_header OPEN_S   CLOSE_S entity error SEMI_COMA  	{cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
	|struct_header OPEN_S struct_variable_declaration  CLOSE_S entity error SEMI_COMA 	{cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
	|struct_header OPEN_S   CLOSE_S error SEMI_COMA  {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
		|struct_header OPEN_S struct_variable_declaration  CLOSE_S error SEMI_COMA {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
;
entity:
	 IDENTIFIER COMMA  entity   {cout<<"entity: IDENTIFIER COMMA  entity\n";}
	|IDENTIFIER                {cout<<"entity:  IDENTIFIER \n";}
	|error  COMMA                {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}

	
;
type: simple_type									{cout<<"type:simple type\n";}
	  |complex_type									{cout<<"type: complex type\n";}
	  |struct_type									{cout<<"type: struct_type\n";}
	  |enum_type									{cout<<"type: enum_type\n";}
	  
;
struct_type:
STRUCT IDENTIFIER                        {	cout<<"struct_type: STRUCT IDENTIFIER   \n";
													 type=symbolTable->getType($<r.text>2);
																if(type==NULL){
																		string error="Unknown type name '";
		error.append($<r.text>2);
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
|STRUCT IDENTIFIER  MULTI 				 {cout<<"struct_type: STRUCT IDENTIFIER  MULTI \n";
													 type=symbolTable->getType($<r.text>2);
																if(type==NULL){
																										string error="Unknown type name '";
		error.append($<r.text>2);
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
;
enum_type:
ENUM IDENTIFIER                            {cout<<"enum_type: ENUM IDENTIFIER \n";
													 type=symbolTable->getType($<r.text>2);
																if(type==NULL){
																										string error="Unknown type name '";
		error.append($<r.text>2);
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
|ENUM IDENTIFIER  MULTI                   {cout<<"enum_type: ENUM IDENTIFIER  MULTI  \n";
													 type=symbolTable->getType($<r.text>2);
																if(type==NULL){
																									string error="Unknown type name '";
		error.append($<r.text>2);
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
;
simple_type:
	INT												{cout<<"int type \n";
																type=symbolTable->getType($<r.text>1);
																if(type==NULL){
																										string error="Unknown type name '";
		error.append($<r.text>1);
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
																}
	|CHAR											{cout<<"char type\n";
	type=symbolTable->getType($<r.text>1);
																if(type==NULL){
																										string error="Unknown type name '";
		error.append($<r.text>1);
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
	|FLOAT											{cout<<"float type\n";
	type=symbolTable->getType($<r.text>1);
																if(type==NULL){
																										string error="Unknown type name '";
		error.append($<r.text>1);
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
	|NSSTRING											{cout<<"NSString type\n";
	type=symbolTable->getType($<r.text>1);
																if(type==NULL){
																										string error="Unknown type name '";
		error.append($<r.text>1);
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
	|VOID											{cout<<"void type\n";
	type=symbolTable->getType($<r.text>1);
																if(type==NULL){
																										string error="Unknown type name '";
		error.append($<r.text>1);
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
	|BOOL                                           {cout<<"bool type\n";
	type=symbolTable->getType($<r.text>1);
																if(type==NULL){
																										string error="Unknown type name '";
		error.append($<r.text>1);
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
	
;
complex_type:	IDENTIFIER	MULTI 					{cout<<"complex_type:	IDENTIFIER	MULTI\n";
 {
													 type=symbolTable->getType($<r.text>1);
																if(type==NULL){
																										string error="Unknown type name '";
		error.append($<r.text>1);
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}}
;
array_tag: array_first_tag array_tag_list  {
											cout<<"array_tag: array_first_tag array_tag_list \n"; 
										   }
;

array_tag_list:  array_tag_list OPEN_ARR INT_VAL CLOSE_ARR {
																cout<<"array_tag_list: array_tag_list OPEN_ARR INT_VAL CLOSE_ARR\n"; 
																arrayAlloc.push_back($<r.int_val>3);
														   }
| //epsilon  
|array_tag_list OPEN_ARR error CLOSE_ARR {cout<<" Error:missing  dimension in array tag  ";arrayAlloc.clear();}
;

array_first_tag: OPEN_ARR INT_VAL CLOSE_ARR {
											cout<<"array_first_tag: OPEN_ARR INT_VAL CLOSE_ARR\n"; 
											arrayAlloc.push_back($<r.int_val>2);
											}
| OPEN_ARR CLOSE_ARR					    {
											cout<<"array_first_tag: OPEN_ARR  CLOSE_ARR\n"; 
											arrayAlloc.push_back(-1);
											}
;

initializer:  EQUAL array_body {cout<<"array with value\n";
								$<r.node>$=new AssignNode(scoop,NULL,$<r.node>2);
							   }
| //epsilon
;
main_initializer: EQUAL expr {
								cout <<"with value\n";
								$<r.node>$=new AssignNode(scoop,NULL,$<r.node>2);
							 }
| //epsilon
;


interface_declaration_list:
	interface_declaration_list interface_declaration			{
																cout<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
															 methodsList.push_back(method);
														
															 
																}
	|interface_declaration										{
																 cout<<"interface_declaration_list:interface_declaration\n";
															 methodsList.push_back(method);
															 
																 	
																 }
;
interface_declaration:
	class_method_declaration									{cout<<"interface_declaration: class_method_declaration\n";}
	|instance_method_declaration								{cout<<"interface_declaration: instance_method_declaration\n";}
	
;
class_method_declaration:
	PLUS p_type		 method_selectors	SEMI_COMA				{
																cout<<"class_method_declaration: PLUS p_type method_selectors	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,$<r.text>3,selectorsList,true);
															
																 selectorsList.clear();
																
																}
	|PLUS			 method_selectors	SEMI_COMA				{
																cout<<"class_method_declaration: PLUS			 method_selectors	SEMI_COMA\n";
																		method=InterfaceHelper::createNewMethod(type,symbolTable,$<r.text>3,selectorsList,true);
																 selectorsList.clear();
																}
	|PLUS p_type		 method_selectors error	   {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
	|PLUS			 method_selectors error		{cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
	;
instance_method_declaration:
	MINUS p_type	method_selectors		SEMI_COMA			{
															cout<<"instance_method_declaration: MINUS p_type	method_selectors		SEMI_COMA\n";
															method=InterfaceHelper::createNewMethod(type,symbolTable,$<r.text>3,selectorsList,false);
																 selectorsList.clear();
																
																
															}
	|MINUS			 method_selectors	SEMI_COMA				{
																	cout<<"instance_method_declaration: MINUS			 method_selectors	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,$<r.text>3,selectorsList,true);
																 selectorsList.clear();
																}
	;
p_type:
	OPEN_P type CLOSE_P											{
																cout<<"p_type : OPEN_P type CLOSE_P\n";
																$<r.text>$=$<r.text>2;
																}
   
;


method_selectors:
	 selectors_list						{
																cout<<"method_selectors: selectors_list\n";
																	$<r.text>$="";
																}
	|IDENTIFIER													{cout<<"method_selectors:IDENTIFIER \n";$<r.text>$=$<r.text>1;}
;
selectors_list:	selectors_list selector_decleration{
													cout<<"selectors_list:	selectors_list selector_decleration\n";
																
													selectorsList.push_back(tselector);
													tselector=NULL;
											}
				|	selector_decleration			{
														cout<<"selectors_list:	 selector_decleration\n";
												selectorsList.clear();

												selectorsList.push_back(tselector);
												tselector=NULL;
}
;
selector_decleration:	IDENTIFIER	SEMI_COLUMN	parameter_list						{
																				cout<<"selector_decleration:	IDENTIFIER	SEMI_COLUMN	parameter_list	\n";
																				tselector=new DeclerationSelector($<r.text>1,selectorVarList);
																			}
		
;
parameter_list: parameter_list SEMI_COLUMN parameter {
														cout<<"parameter_list: parameter_list parameter\n";
																	selectorVarList.push_back(var);		
											}
				|	parameter {
									selectorVarList.clear();
										selectorVarList.push_back(var);		
											
				 
														cout<<"parameter_list:  parameter\n";
						
					}		
		;
parameter:  p_type IDENTIFIER									{
																cout<<"parameter:  p_type IDENTIFIER\n";
																
																if(type!=NULL){
																var=new Variable($<r.text>2,type);
																}
																else{
																cout<<"Error:Type not found.\n";
																}
																}
		                            
;
class_implementation:
	class_implementation_header class_implementation_body		{cout<<"class_implementation: class_implementation_header class_implementation_body\n";}
;
class_implementation_header: 
	AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER			{
																	cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																	interface=InterfaceHelper::checkImplementation($<r.text>2,symbolTable,$<r.text>4);
																	
																}
	|AT_IMPLEMENTATION IDENTIFIER 								{
																interface=InterfaceHelper::checkImplementation($<r.text>2,symbolTable,"");
																	
																}
;
class_implementation_body:
	instance_variables	implementation_definition_list	AT_END	{
																	cout<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";
																			InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														}
																
	|instance_variables									AT_END	{ 
																	cout<<"class_implementation_body: instance_variables									AT_END\n";
																}
	|					implementation_definition_list	AT_END	{
																	cout<<"class_implementation_body:						implementation_definition_list	AT_END\n";
																	InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														
																}
	|						AT_END	{cout<<"class_implementation_body:	AT_END\n";}
;
implementation_definition_list:
	implementation_definition_list implementation_definition	{	 methodsList.push_back(method);cout<<"implementation_definition_list: implementation_definition_list implementation_definition\n";}
	|implementation_definition									{	 methodsList.push_back(method);cout<<"implementation_definition_list: implementation_definition\n";}
;
implementation_definition:
	class_implementation_definition		{cout<<"implementation_definition: class_implementation_definition	\n";}
	|instance_implementation_definition	{cout<<"implementation_definition: instance_implementation_definition \n";}
;
class_implementation_definition:
	class_implementation_definition_header block_body {
														cout<<"class_implementation_definition: class_implementation_definition_header block_body";
														//method->setFunctionNode(functionNode);
														functionNode=NULL;
													nodeXX=method;
													}
;
class_implementation_definition_header:
	PLUS p_type		 method_selectors	{
										cout<<"class_implementation_definition_header: PLUS p_type		 method_selectors\n";
															method=InterfaceHelper:: createNewMethod(type,symbolTable,$<r.text>3,selectorsList,true);
																 selectorsList.clear();
																
																
										}
	|PLUS			 method_selectors	{
											cout<<"class_implementation_definition_header:  PLUS			 method_selectors\n";
													 method =InterfaceHelper:: createNewMethod(type,symbolTable,$<r.text>2,selectorsList,true);
																 selectorsList.clear();
									
										}
;

instance_implementation_definition:
	instance_implementation_definition_header block_body	{
															scoop=NULL;
															cscoop=NULL;
															cout<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";
															//method->setFunctionNode(functionNode);
														functionNode=NULL;
															}	
;
instance_implementation_definition_header:
	MINUS p_type		method_selectors			{
											     cout<<"instance_implementation_definition_header:MINUS p_type		method_selectors\n";
												 method=InterfaceHelper:: createNewMethod(type,symbolTable,$<r.text>3,selectorsList,false);
																 selectorsList.clear();
															
												}
	|MINUS				method_selectors			{
												cout<<"instance_implementation_definition_header:MINUS 			method_selectors\n";
												 method =InterfaceHelper:: createNewMethod(type,symbolTable,$<r.text>2,selectorsList,false);
																 selectorsList.clear();
												}
;
block_body:
	block_body_header block_body_statements		{
												
												cout<<"block_body:OPEN_S  block_body_part \n";
												$<r.node>$=$<r.node>1;
												}
;
block_body_header:
OPEN_S											{
												cscoop=scoop;
                                                scoop=ScoopHelper::createNewScoop(cscoop,method,interface);
												
												if(functionNode==NULL){
												functionNode=dynamic_cast<FunctionNode*>(scoop);
												if(functionNode==NULL)
													cout<<"SHould never happpppen\n\n\n\n\n\n";
													
													//functionNode=new FunctionNode(scoop,method);
													}else
													functionNode->addNode(scoop);
												scoopVector.push_back(scoop);
												cout<<"block_body_header:OPEN_S	\n";
												$<r.node>$=scoop;
												}
;
block_body_statements:

statement_list	CLOSE_S							{
												scoop=scoop->getParent();
												cout<<"block_body_statements:statement_list	CLOSE_S	\n";
												}
|CLOSE_S                                        {
												scoop=scoop->getParent();
												cout<<"block_body_statements:CLOSE_S\n";
												}
|error CLOSE_S                                        {
												scoop=scoop->getParent();
												cout<<"block_body_statements: error CLOSE_S\n";
												}
;
statement_list:
		statement_list statement			{cout<<"statement_list: statement_list statement\n";
											$<r.text>$=$<r.text>2;
											scoop->addNode($<r.node>2);
											
											}
		|statement							{cout<<"statement_list: statement\n";
											$<r.text>$=$<r.text>1;
											$<r.node>$=$<r.node>1;
											scoop->addNode($<r.node>1);
											
											}
;

statement:
	loop_statement							{cout<<"statement: loop_statement\n";
											$<r.text>$="loop";
											$<r.node>$=$<r.node>1;
											}
	|conditional_statement					{cout<<"statement: conditional_statement\n";
											$<r.text>$="cond";
											$<r.node>$=$<r.node>1;
											}
	|assign_expr SEMI_COMA							{
												cout<<"statement: expr\n";
												$<r.text>$="expr";
												$<r.node>$=$<r.node>1;
												//nodeXX=$<r.node>1;
											}
	|variable_declaration_block				{
											cout<<"statement: variable_declaration\n";
											
												ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												$<r.node>$=$<r.node>1;
										    }
	|block_body								{cout<<"statement: block_body\n";$<r.text>$=new char[256];$<r.text>$[0]='\0';strcat($<r.text>$,"Block");
												$<r.node>$=$<r.node>1;
											}
	|return_statement						{cout<<"statement: return_statement\n";
												$<r.text>$="return";
												$<r.node>$=$<r.node>1;
											}
	|try_catch								{cout<<"statement: try_catch\n";}

	|asm                                    {
	                                            $<r.text>$="asm";
												$<r.node>$=$<r.node>1;}	
    |message_call SEMI_COMA{
	 $<r.text>$="call";
	$<r.node>$=$<r.node>1;
	}
	
	| error SEMI_COMA { cout<<"error SEMI_COMA \n";}

;

asm:
	AT_ASM STRING_VAL SEMI_COMA              {cout<<"@asm command \n";
	                                         $<r.node>$=new AsmNode(scoop,$<r.text>2);
											 }

;
variable_declaration_block:
	type variable_list	SEMI_COMA						{
														cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
														 $<r.text>$=$<r.text>1;
														 $<r.node>$=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
	|CONST type variable_list	SEMI_COMA				{
														cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 $<r.text>$=$<r.text>2;
														  $<r.node>$=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
	|enum                                            {cout<<"variable_declaration:enum\n";}
	
;
variable_list:
	variable_list COMMA variable			{cout<<"variable_list:variable_list COMMA variable\n";}
	|variable							{cout<<"variable_list:variable\n";
										
										}
	|variable_list error variable					{cout<<"Error: Expected ',' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
;
variable:
 IDENTIFIER array_tag initializer			{
											cout <<"variable:  IDENTIFIER array_tag initializer \n";
											 var=new Array($<r.text>2,arrayAlloc.size(),NULL);
											(dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
											 arrayList.push_back( ( dynamic_cast<Array*>(var)));
											 arrayAlloc.clear();
											}
 |IDENTIFIER main_initializer				{ 
											cout <<"variable:  IDENTIFIER main_initializer \n";
											idsList.push_back($<r.text>1) ;
											IdentifierNode* identifierNode=new IdentifierNode($<r.text>1,scoop);
											if($<r.node>2!=NULL){
											(dynamic_cast<AssignNode*>($<r.node>2))->setLeftExp(identifierNode);
											}
											declarationList.push_back(make_pair($<r.text>1,$<r.node>2));
											}
 |error array_tag initializer 				{cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
;
return_statement:
	RETURN expr SEMI_COMA						{cout<<"return_statement: RETURN expr\n";
												 $<r.node>$=new ReturnNode(scoop,$<r.node>2);
												}
;
loop_statement:
	for_loop								{cout<<"loop_statement: for_loop\n";
												$<r.node>$=$<r.node>1;
											}
	|while_loop								{cout<<"loop_statement: while_loop\n";
												$<r.node>$=$<r.node>1;
											}
	|do_while								 {cout<<"loop_statement: do_while_loop\n";
												$<r.node>$=$<r.node>1;
											}                                
;
do_while:
 do_header statement while_loop_header SEMI_COMA	{cout<<"do_while: do_header   statement   while_loop_header   SEMI_COMMA\n";
													$<r.node>$=new DoWhileNode($<r.node>3,$<r.node>2,scoop);
													}
;
do_header:
   DO						 {cout<<"do_header: DO\n";}
;
for_loop:
	for_loop_header statement				{cout<<"for_loop: for_loop_header statement\n";
												type=symbolTable->getType("int");
											if(type==NULL){
											  	string error="Unknown type name '";
												error.append($<r.text>1);
												error.append("'.");
												Program::addError(new SemanticError(error));
											}	
											ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												(dynamic_cast<ForNode*>($<r.node>1))->setStatement($<r.node>2);
												$<r.node>2->toString();
												$<r.node>$=$<r.node>1;
											}
;
for_loop_header:
	FOR OPEN_P for_initializer	SEMI_COMA logic_expr SEMI_COMA expr  			CLOSE_P	
										{cout<<"for_loop_header: FOR OPEN_P for_initializer	SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										$<r.node>$=new ForNode($<r.node>3,$<r.node>5,$<r.node>7,NULL,scoop);
										//nodeXX=$<r.node>5;
										}
	
	|FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P	
										{cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										$<r.node>$=new ForNode(NULL,$<r.node>4,$<r.node>6,NULL,scoop);
										}
	|FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P	
										{cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P\n";
										$<r.node>$=new ForNode($<r.node>3,NULL,$<r.node>6,NULL,scoop);
										}
	|FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA				CLOSE_P	
										{cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA				CLOSE_P	\n";
										$<r.node>$=new ForNode($<r.node>3,$<r.node>5,NULL,NULL,scoop);
										}
	
	|FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	
										{cout<<"for_loop_header: FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	\n";
										$<r.node>$=new ForNode($<r.node>3,NULL,NULL,NULL,scoop);
										}
	|FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA				CLOSE_P	
										{cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA				CLOSE_P\n";
										$<r.node>$=new ForNode(NULL,$<r.node>5,NULL,NULL,scoop);
										}
	|FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P	
										{cout<<"for_loop_header: FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P";
										$<r.node>$=new ForNode(NULL,NULL,$<r.node>5,NULL,scoop);
										}
	
	|FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	
											{cout<<"for_loop_hearder: FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	\n";
											$<r.node>$=new ForNode(NULL,NULL,NULL,NULL,scoop);
											}
;
for_initializer:
	INT IDENTIFIER EQUAL expr			{cout<<"for_initializer: INT IDENTIFIER EQUAL expr\n";
											AssignNode * temp=new AssignNode(scoop,new IdentifierNode($<r.text>2,scoop),$<r.node>4);
											
											//temp->add($<r.text>2,);
											
											//temp.push_back(make_pair($<r.text>2,$<r.node>4));
											DeclerationNode* temp1=new DeclerationNode(list<pair<string,Node*>>(),scoop,"int");
											temp1->add($<r.text>2,temp);
										 $<r.node>$=temp1; 
										 idsList.push_back($<r.text>2);
										}
	|IDENTIFIER EQUAL expr				{cout<<"for_initializer: IDENTIFIER EQUAL expr\n";
										$<r.node>$=new AssignNode(scoop,new IdentifierNode($<r.text>1,scoop),$<r.node>3);
										}
	|IDENTIFIER							{cout<<"for_initializer: IDENTIFIER\n";
										$<r.node>$=new IdentifierNode($<r.text>1,scoop);
										}
;
logic_expr:
	 expr LESS_THAN expr				{cout<<"logic_expr:expr LESS_THAN expr\n";
										$<r.node>$=new BinaryOperationNode($<r.node>1,$<r.node>3,LESS_THAN,scoop);
										}
	|expr MORE_THAN expr				{cout<<"logic_expr:expr MORE_THAN expr\n";
										 $<r.node>$=new BinaryOperationNode($<r.node>1,$<r.node>3,MORE_THAN,scoop);
										}
	|expr LESS_OR_EQUAL expr			{cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";
										 $<r.node>$=new BinaryOperationNode($<r.node>1,$<r.node>3,LESS_OR_EQUAL,scoop);
										}
	|expr MORE_OR_EQUAL expr			{cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";
										$<r.node>$=new BinaryOperationNode($<r.node>1,$<r.node>3,MORE_OR_EQUAL,scoop);
										}
	|expr EQUAL_EQUAL expr				{cout<<"logic_expr:expr EQUAL_EQUAL expr\n";
										$<r.node>$=new BinaryOperationNode($<r.node>1,$<r.node>3,EQUAL_EQUAL,scoop);
										}
	|NOT_EQUAL expr						{cout<<"logic_expr:NOT_EQUAL expr\n";
										 $<r.node>$=new UnaryNode(scoop,$<r.node>2,NOT_EQUAL);
										}
	|OPEN_P logic_expr CLOSE_P			{cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";
										 $<r.node>$=$<r.node>2;
										}
	|logic_expr AND_AND logic_expr		{
											cout<<"logic_expr:logic_expr AND_AND logic_expr\n";
											$<r.node>$=new BinaryOperationNode($<r.node>1,$<r.node>3,AND_AND,scoop);
										}
	|logic_expr OR_OR logic_expr		{cout<<"logic_expr:logic_expr OR_OR logic_expr\n";
										$<r.node>$=new BinaryOperationNode($<r.node>1,$<r.node>3,OR_OR,scoop);
										}
	|TRUE								{cout<<"logic_expr:TRUE\n";
										 $<r.node>$=new ConstantNode(true,scoop);
										}
	|FALSE								{cout<<"logic_expr:FALSE\n";
											 $<r.node>$=new ConstantNode(false,scoop);
										}
;
expr:
	assign_expr							{cout<<"expr:assign_expr\n";
										 $<r.node>$=$<r.node>1;
										}
	|simple_expr						{cout<<"expr:simple_expr\n";
										$<r.node>$=$<r.node>1;
										}
;
assign_expr: 
	long_id EQUAL simple_expr			{
										cout<<"assign_expr:long_id EQUAL simple_expr\n";
										//LongIdHelper::checkIdenentifier( scoop, interface,"set1");
										$<r.node>$=new AssignNode(scoop,$<r.node>1,$<r.node>3);
										}
;
long_id:
	long_id DOT IDENTIFIER					{cout<<"long_id: long_id.IDENTIFIER\n";
																$<r.node>$=new DotNode(scoop,$<r.node>1,$<r.text>3);

											;}
	|message_call							{
												cout<<"long_id: long_id.message_call\n";
												$<r.node>$=$<r.node>1;
											}
	|IDENTIFIER								%prec long_id_prec{
																LongIdHelper::addIdentifier($<r.text>1); 
																$<r.node>$=new IdentifierNode($<r.text>1,scoop);
																cout<<"long_id:IDENTIFIER\n";
															   }
;



simple_expr:
	STRING_VAL						{cout<<"simple_expr:STRING_VAL\n";
									$<r.node>$=new ConstantNode(yylval.r.string_val,scoop);
									}
	|INT_VAL						{
									cout<<"simple_expr:INT_VAL\n";
									$<r.node>$=new ConstantNode(yylval.r.int_val,scoop);
									}
	|FLOAT_VAL						{cout<<"simple_expr:FLOAT_VAL\n";
									$<r.node>$=new ConstantNode(yylval.r.float_val,scoop);
									}
	|CHAR_VAL						{cout<<"simple_expr:CHAR_VAL\n";
										$<r.node>$=new ConstantNode(yylval.r.char_val,scoop);
									}
	|long_id						{cout<<"simple_expr:long_id\n";
									$<r.node>$=$<r.node>1;
									}
	|simple_expr PLUS simple_expr	{
										cout<<"simple_expr:expr PLUS expr\n";
										$<r.node>$=new BinaryOperationNode($<r.node>1,$<r.node>3,PLUS,scoop);
									}
	|simple_expr MINUS simple_expr	{
										cout<<"simple_expr:expr MINUS expr\n";
										$<r.node>$=new BinaryOperationNode($<r.node>1,$<r.node>3,MINUS,scoop);
									}
	|simple_expr MULTI simple_expr	{cout<<"simple_expr:expr MULTI expr\n";
											$<r.node>$=new BinaryOperationNode($<r.node>1,$<r.node>3,MULTI,scoop);
									}
	|simple_expr DIV simple_expr	{
									cout<<"simple_expr:expr DIV expr\n";
									$<r.node>$=new BinaryOperationNode($<r.node>1,$<r.node>3,DIV,scoop);
									}
	|OPEN_P simple_expr CLOSE_P		{cout<<"simple_expr:OPEN_P expr CLOSE_P\n";$<r.node>$=$<r.node>2;}
	|IDENTIFIER DOUBLEPLUS          {cout<<"simple_expr:ID++";}
	|IDENTIFIER DOUBLEMINUS         {cout<<"simple_expr:ID--";}
	|DOUBLEPLUS IDENTIFIER         {cout<<"simple_expr:++ID";}
	|DOUBLEMINUS IDENTIFIER        {cout<<"simple_expr:--ID";}
	|p_type simple_expr				%prec p_type_expr_prec	{
																cout<<"expr:p_type expr\n";
																if(type!=NULL)
																$<r.node>$=new CastNode(scoop,type,$<r.node>2);
															}//casting
;
message_call2:
OPEN_ARR {		
			cout<<"message_call2\n";
			if(callNode==NULL)
			callNode=new CallNode(scoop);
			else 
			{
			callNodeStack.push(callNode);
			callNode=new CallNode(scoop);
			}
			cout<<"mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm";
			}
;
message_call:
	message_call2 sender message CLOSE_ARR		{
												cout<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";
												callNode->setMessage($<r.text>3);
												$<r.node>$=callNode;
												callNode=NULL;
														if(callNodeStack.size()!=0){
														callNode=callNodeStack.top();
														callNodeStack.pop();
														}
												}
;
sender:
	message_call							{cout<<"sender: message_call\n";
											
											callNode->setSender($<r.node>1);
											 $<r.node>$=$<r.node>1;
											 
											}
	|IDENTIFIER								{cout<<"sender: IDENTIFIER\n";
											$<r.node>$=new IdentifierNode($<r.text>1,scoop);
											
											//callNode=new CallNode(scoop);
											
											callNode->setSender($<r.node>$);
											
											}
;
message:
	IDENTIFIER								{cout<<"message: IDENTIFIER\n";
											$<r.text>$=$<r.text>1;
												
											}
	|message_selectors_list		{
											cout<<"message_selectors_list\n";
											//$<r.node>$=$<r.text>1;
											$<r.text>$="";
											}
;
message_selectors_list:
	message_selectors_list message_selector {
											cout<<"message_selectors_list:message_selectors_list message_selector \n";
												callNode->addSelector(cselector);
											cselector=NULL;
												}
	|message_selector {	callNode->addSelector(cselector);
							cselector=NULL;
								cout<<"message_selectors_list: message_selector\n";
											
		}
;	
message_selector: IDENTIFIER SEMI_COLUMN argument_list{
									cselector->name=$<r.text>1;
							}
argument_list:
	argument_list SEMI_COLUMN argument					{cout<<"argument_list: argument_list argument\n";
												cselector->addArg($<r.node>3);}
	|argument								{cout<<"argument_list: argument\n";
												cselector=new CallSelector("");
											cselector->addArg($<r.node>1);}
; 
argument:
	 expr									{
											cout<<"argument: SEMI_COLUMN expr\n";
											$<r.node>$=$<r.node>1;
											//callNode->addArgument($<r.node>1,"");
											
											}
;
while_loop:
	while_loop_header statement			{
											cout<<"while_loop:while_loop_header statement\n";
											 $<r.node>$=new WhileNode($<r.node>1,$<r.node>2,scoop);
										}
;
while_loop_header:
	WHILE OPEN_P logic_expr CLOSE_P			{cout<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";
											$<r.node>$=$<r.node>3;
											}
;
conditional_statement:
	if_header statement		%prec if_h			{cout<<"conditional_statement: if_header statement\n";
												 $<r.node>$=new IfNode($<r.node>1,$<r.node>2,scoop,NULL);
												}
	|if_header statement	ELSE 	statement	{
												cout<<"conditional_statement: if_header statement with else\n";
												 $<r.node>$=new IfNode($<r.node>1,$<r.node>2,scoop,new ElseNode($<r.node>4,scoop));
												}
	|switch_header switch_body			{cout<<"conditional_statement: switch_header switch_body statement\n";
											$<r.node>$=new SwitchNode(tempSwitch);
										}
;
if_header:
	IF OPEN_P logic_expr CLOSE_P			{cout<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";
											$<r.node>$=$<r.node>3;
											}
;
switch_header:
 SWITCH OPEN_P IDENTIFIER CLOSE_P switch_body_block  {cout<<"switch_header: SWITCH OPEN_P IDENTIFIER CLOSE_P\n";
										
										tempSwitch->setExpr(new IdentifierNode($<r.text>3,scoop));
									}
;
switch_body_block:
OPEN_S {cscoop=scoop;scoop=new ScoopNode(cscoop);tempSwitch=new SwitchNode(NULL,std::list<pair<Node*,Node*>>(),scoop);}
;
switch_body:
 list_of_case default_case CLOSE_S {;}
| list_of_case CLOSE_S {;}
| default_case CLOSE_S {;}
| CLOSE_S {;}
;
list_of_case:
list_of_case case_body {;}
|case_body {;}
;
case_body:
CASE expr SEMI_COLUMN statement BREAK SEMI_COMA {tempSwitch->addCase($<r.node>2,$<r.node>4);}
|CASE expr SEMI_COLUMN statement {tempSwitch->addCase($<r.node>2,$<r.node>4);}
|CASE expr SEMI_COLUMN BREAK SEMI_COMA {tempSwitch->addCase($<r.node>2,NULL);}
;
default_case:
DEFAULT SEMI_COLUMN statement BREAK SEMI_COMA {tempSwitch->addCase(NULL,$<r.node>3);}
|DEFAULT SEMI_COLUMN statement {tempSwitch->addCase(NULL,$<r.node>3);}
|DEFAULT SEMI_COLUMN BREAK SEMI_COMA {tempSwitch->addCase(NULL,$<r.node>3);}
;
protocol: protocol_header protocol_body	{
										cout<<"protocol: protocol_header protocol_body\n";
										idsList.clear();
										methodsList.clear();
										method=NULL;
										}
;
protocol_header:
		AT_PROTOCOL IDENTIFIER	{
								cout<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";
								protocol=ProtocolHelper ::createNewProtocol($<r.text>2,symbolTable );
								
								}
;
protocol_body:	protocol_reference_list interface_declaration_list	AT_END	
								{
								cout<<"protocol_body:	protocol_reference_list interface_declaration_list	AT_END\n";
								ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								idsList.clear();
								}
				|						interface_declaration_list	AT_END	
								{
								cout<<"protocol_body:	interface_declaration_list	AT_END\n";
									
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								
								}
				|protocol_reference_list 							AT_END	
								{
								cout<<"protocol_body:	protocol_reference_list AT_END	\n";
											ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								idsList.clear();
								}
				|													AT_END	
								{cout<<"protocol_body:	AT_END\n";}
enum:
     ENUM IDENTIFIER  OPEN_S list_expr CLOSE_S SEMI_COMA     {
																cout<<"enum: ENUM IDENTIFIER  OPEN_S list_expr CLOSE_S SEMI_COMA  \n";
																
																EnumHelper::createNewEnum( $<r.text>2,idsList, symbolTable);
																idsList.clear();
															 }
    |ENUM IDENTIFIER SEMI_COMA								 {
																cout<<"enum: ENUM IDENTIFIER SEMI_COMA\n";
																EnumHelper::createNewEnum( $<r.text>2,idsList, symbolTable);
															  }
	
;
list_expr:
     IDENTIFIER EQUAL expr COMMA list_expr      {
												cout<<"list_expr:IDENTIFIER EQUAL expr COMMA list_expr\n";
												idsList.push_back($<r.text>1);
													$<r.node>$=new AssignNode(scoop,new IdentifierNode($<r.text>1,scoop),$<r.node>3);
												}
	| IDENTIFIER EQUAL expr						{
												cout<<"list_expr:IDENTIFIER EQUAL expr\n";
												idsList.push_back($<r.text>1);
												$<r.node>$=new AssignNode(scoop,new IdentifierNode($<r.text>1,scoop),$<r.node>3);
												}
	|IDENTIFIER									{
													cout<<"list_expr:IDENTIFIER \n";
													idsList.push_back($<r.text>1);
													//??
												}
	|IDENTIFIER  COMMA list_expr				{
												  cout<<"list_expr:IDENTIFIER  COMMA list_expr \n";
												  idsList.push_back($<r.text>1);
												  //??
												}
;
try_catch:
	TRY statement catch_list finally_statement{
												  cout<<"try_catch:TRY statement catch_list finally_statement \n";
												}

	| TRY statement catch_list %prec try_prec{				  
								cout<<"try_catch:TRY statement catch_list \n";
							  }
;
catch_list:
	CATCH OPEN_S type IDENTIFIER CLOSE_S statement {cout<<"catch_list:CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
	|catch_list CATCH OPEN_S type IDENTIFIER CLOSE_S statement {cout<<"catch_list:catch_list CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
;
finally_statement:
	FINALLY statement
;
%%
void yyerror(const char *s) {
	fprintf (stderr, "%s\n", s);
	;
}

int yylex(){
	return lexer->yylex();

}
void main(void){
//freopen("code.txt","r",stdin);
//yyin = fopen("code.txt","r");
    //yydebug=1;
	vector<string> sfiles;
		sfiles.push_back("system.oc");

	sfiles.push_back("code.txt");
	for(string sf:sfiles){
	sourceFile=sf;
	ifstream inf(sf);
	lexer = new yyFlexLexer(&inf);
	Parser* p = new Parser();
	p->parse();
	}
//	symbolTable->toString();
	/*for(int i=0;i<scoopVector.size();i++)
	scoopVector.at(i)->toString();*/
	Program::printErrors();
	ofs<<".globl main\nmain:\n";
	//ConstantNode * temp =new ConstantNode(5,NULL);
	//method->getF()->generateCode();
	symbolTable->generateCode();

//	functionNode->toString();
	//functionNode->generateCode();
	
}

