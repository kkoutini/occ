/* A Bison parser, made by GNU Bison 3.0.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* First part of user declarations.  */
#line 6 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:207  */

	#include <iostream>
	#include <FlexLexer.h>
	#include <string>
	#include <stack>
	#include "ast\node.h"
	#include "ST\SymbolTable.h"
	#include "ast\ConstantNode.h"
	#include "SyntaxError.h"
	
	#include "CallNode.h"
	#include "ThrowNode.h"
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
				#include "NullNode.h"
				#include "DotNode.h"
				#include "ArrayAccessNode.h"
				#include "CatchNode.h"
#include "TryNode.h"

				
				#include <fstream>
				#include "Streams.h"
#include <string>
#include <fstream>
#include <streambuf>

#include <set>
	using namespace std;
	
set<string> files_set;
vector<string> sfiles;

void addFile(string s){
	if (!files_set.count(s))
	{
		files_set.insert(s);
		sfiles.push_back(s);
	}
}
    extern string sourceFile="";
	extern int isconst=0;
	
extern int Iskernal;
extern int lineNum;
extern int colNum;
extern bool Garbage_Collect;

	int yylex(void);
	int yyparse();
	void yyerror(const char *);

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
	extern ScoopNode* globalScoop=NULL;
	extern Method * mainMethod=NULL;
	//dir var
	string dir_path="";
	////////////
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

#line 170 "yacc.cpp" /* glr.c:207  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

#include "yacc.hpp"

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */

#line 198 "yacc.cpp" /* glr.c:230  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify clang.  */
# define YYLONGJMP(Env, Val) (longjmp (Env, Val), YYASSERT (0))
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#ifndef YYASSERT
# define YYASSERT(Condition) ((void) ((Condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  26
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   946

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  105
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNRULES -- Number of states.  */
#define YYNSTATES  494
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 8
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   225,   225,   228,   229,   230,   240,   241,   242,   243,
     244,   246,   255,   260,   265,   267,   269,   275,   279,   284,
     289,   293,   295,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   313,   320,   323,   327,   332,   333,   337,
     338,   339,   340,   341,   342,   345,   346,   349,   350,   351,
     354,   357,   365,   376,   377,   378,   383,   386,   389,   393,
     397,   401,   402,   405,   411,   412,   413,   415,   423,   430,
     434,   440,   441,   442,   443,   444,   445,   446,   447,   450,
     451,   452,   456,   457,   458,   459,   463,   472,   483,   492,
     503,   512,   520,   528,   536,   544,   552,   562,   573,   578,
     582,   583,   586,   590,   596,   599,   601,   606,   611,   617,
     625,   626,   630,   638,   639,   642,   651,   660,   664,   666,
     672,   680,   686,   690,   699,   712,   715,   720,   726,   732,
     735,   741,   744,   745,   748,   749,   752,   761,   772,   782,
     791,   798,   810,   814,   818,   824,   829,   838,   842,   846,
     852,   861,   864,   868,   870,   873,   877,   879,   882,   887,
     893,   899,   906,   910,   911,   914,   917,   924,   933,   936,
     941,   944,   947,   952,   957,   960,   978,   984,   988,   992,
     997,  1001,  1005,  1010,  1016,  1027,  1030,  1035,  1038,  1041,
    1047,  1050,  1053,  1056,  1059,  1062,  1065,  1068,  1072,  1075,
    1078,  1084,  1087,  1092,  1099,  1103,  1107,  1112,  1120,  1129,
    1135,  1141,  1147,  1151,  1154,  1157,  1161,  1165,  1168,  1172,
    1176,  1177,  1178,  1179,  1180,  1181,  1188,  1201,  1213,  1219,
    1229,  1233,  1240,  1245,  1251,  1255,  1257,  1262,  1270,  1276,
    1281,  1284,  1288,  1293,  1298,  1304,  1307,  1308,  1309,  1310,
    1313,  1314,  1317,  1318,  1319,  1322,  1323,  1324,  1326,  1334,
    1340,  1348,  1356,  1362,  1365,  1371,  1378,  1383,  1388,  1393,
    1400,  1404,  1410,  1412,  1417,  1421,  1424
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AT_INTERFACE", "IDENTIFIER",
  "SEMI_COLUMN", "NSSTRING", "FLOAT", "CHAR", "BOOL", "INT", "SEMI_COMA",
  "ID", "AT_PUBLIC", "AT_PROTECTED", "AT_PRIVATE", "OPEN_S", "CLOSE_S",
  "COMMA", "LESS_THAN", "MORE_THAN", "AT_END", "CONST", "VOID", "PLUS",
  "MINUS", "OPEN_P", "CLOSE_P", "AT_IMPLEMENTATION", "AND_AND", "OR_OR",
  "STRING_VAL", "FLOAT_VAL", "LESS_OR_EQUAL", "CHAR_VAL", "INT_VAL",
  "MORE_OR_EQUAL", "MULTI", "EQUAL_EQUAL", "NOT_EQUAL", "FOR", "EQUAL",
  "DIV", "DIV_R", "WHILE", "IF", "DO", "SWITCH", "CASE", "DEFAULT",
  "BREAK", "ENUM", "OPEN_ARR", "CLOSE_ARR", "TRUE", "FALSE", "RETURN",
  "AT_PROTOCOL", "ELSE", "STRUCT", "DOT", "DOUBLEPLUS", "DOUBLEMINUS",
  "TRY", "CATCH", "THROW", "FINALLY", "AT_ASM", "SELF", "IMPORT",
  "NULL_TOK", "if_h", "expr_1", "p_type_expr_prec", "long_id_prec",
  "try_prec", "$accept", "program", "components", "component",
  "class_interface", "class_interface_header", "class_interface_body",
  "protocol_reference_list", "ids_list_identifier", "array_body",
  "array_ele", "instance_variables", "instance_variable_declarations",
  "instance_variable_declaration", "variable_declaration_list",
  "visibility_specification", "struct_variable_declaration",
  "variable_declarationxx", "ids_list", "data_member",
  "struct_declaration_list", "struct_header", "struct", "entity", "type",
  "struct_type", "enum_type", "simple_type", "complex_type", "array_tag",
  "array_tag_list", "array_first_tag", "initializer", "main_initializer",
  "interface_declaration_list", "interface_declaration",
  "class_method_declaration", "instance_method_declaration", "p_type",
  "method_selectors", "selectors_list", "selector_decleration",
  "parameter_list", "parameter", "class_implementation",
  "class_implementation_header", "class_implementation_body",
  "implementation_definition_list", "implementation_definition",
  "class_implementation_definition",
  "class_implementation_definition_header",
  "instance_implementation_definition",
  "instance_implementation_definition_header", "block_body",
  "block_body_header", "block_body_statements", "statement_list",
  "statement", "throw_statement", "asm", "variable_declaration_block",
  "variable_list", "variable", "return_statement", "loop_statement",
  "do_while", "do_header", "for_loop", "for_loop_header",
  "for_initializer", "logic_expr1", "logic_expr", "expr", "assign_expr",
  "long_id", "array_access", "simple_expr", "message_call2",
  "message_call", "sender", "message", "message_selectors_list",
  "message_selector", "argument_list", "argument", "while_loop",
  "while_loop_header", "conditional_statement", "if_header",
  "switch_header", "switch_body_block", "switch_body", "list_of_case",
  "case_body", "default_case", "protocol", "protocol_header",
  "protocol_body", "enum", "list_expr", "try_catch", "catch_list",
  "one_catch", "one_catch_header", "finally_statement", YY_NULL
};
#endif

#define YYPACT_NINF -315
#define YYTABLE_NINF -201

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
     243,   114,    24,    39,    45,    97,   103,   156,    60,  -315,
    -315,   565,   160,  -315,  -315,   181,  -315,   453,  -315,  -315,
     196,   202,   173,  -315,  -315,   182,  -315,  -315,   847,   228,
    -315,    38,   193,  -315,   161,   142,   148,  -315,  -315,  -315,
     827,  -315,   193,   193,   286,  -315,   472,  -315,  -315,   227,
    -315,   227,  -315,   478,   486,  -315,   241,   259,  -315,   269,
    -315,   218,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,   887,  -315,   275,   312,   431,  -315,   867,   867,
    -315,   256,  -315,  -315,  -315,  -315,  -315,    28,   321,   887,
     333,   345,   348,  -315,   333,   515,  -315,   203,   251,  -315,
    -315,   296,  -315,  -315,  -315,   867,   314,   358,  -315,   867,
     333,   333,  -315,   537,  -315,  -315,  -315,  -315,   326,  -315,
    -315,   544,  -315,  -315,  -315,  -315,   -11,   367,  -315,   340,
     324,   351,  -315,  -315,  -315,   867,   342,    44,   223,  -315,
    -315,   392,  -315,   193,   388,    64,  -315,   321,  -315,   395,
    -315,   567,  -315,  -315,   330,  -315,  -315,  -315,  -315,  -315,
     281,   384,  -315,    98,   379,  -315,  -315,  -315,  -315,    95,
     218,  -315,   887,   396,   402,   404,  -315,   406,   430,  -315,
     757,   508,   415,   418,   361,  -315,  -315,   391,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,   508,  -315,   508,   440,    16,
    -315,     6,  -315,  -315,   508,  -315,   508,    72,  -315,  -315,
    -315,   269,   757,   448,    44,   394,  -315,  -315,    34,  -315,
    -315,  -315,   215,  -315,   375,  -315,   456,   461,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,   542,   464,
    -315,   398,  -315,   134,  -315,  -315,   361,   400,   126,   126,
     475,    15,     9,   604,  -315,  -315,  -315,  -315,   477,   481,
    -315,   757,   476,  -315,   217,   344,   484,   436,   449,   495,
     342,    56,   346,  -315,  -315,  -315,   469,  -315,  -315,  -315,
     757,   757,   504,  -315,  -315,   517,  -315,   465,  -315,   757,
     514,  -315,   105,  -315,   518,  -315,   507,  -315,  -315,  -315,
     489,  -315,   485,  -315,   342,  -315,  -315,   193,   526,  -315,
    -315,  -315,   539,  -315,   349,   510,   552,   615,   546,   570,
     757,  -315,  -315,   390,  -315,   320,   188,   568,   536,  -315,
    -315,     9,    32,   428,  -315,  -315,   344,  -315,   757,   757,
     757,   757,   757,   540,    76,  -315,   508,   543,  -315,   531,
     757,   531,  -315,   361,  -315,   361,   572,   344,   261,  -315,
     580,   534,   590,  -315,   508,   594,   417,  -315,  -315,   583,
    -315,   269,  -315,    18,  -315,  -315,  -315,   757,   562,   693,
      11,   647,   579,   428,  -315,  -315,   126,   126,   757,   757,
     757,   757,   757,   757,  -315,   591,  -315,   253,   253,  -315,
    -315,  -315,   887,   508,  -315,  -315,  -315,   606,   599,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,   757,  -315,   580,  -315,
    -315,   482,   607,   573,  -315,  -315,   575,   581,  -315,   757,
    -315,   593,   712,   725,   102,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,   629,  -315,  -315,   204,
    -315,  -315,   632,  -315,   631,   595,  -315,   633,  -315,  -315,
    -315,  -315,  -315,   616,  -315,   621,   744,   625,   679,  -315,
     636,   639,   757,  -315,   648,  -315,  -315,  -315,  -315,   634,
    -315,   642,   645,  -315,   768,  -315,  -315,  -315,   768,   646,
    -315,  -315,   768,  -315
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     2,     4,
       6,     0,     0,     9,     7,     0,     8,     0,    10,    14,
      13,   127,     0,   259,    70,     0,     1,     3,     0,     0,
      23,     0,     0,    11,     0,     0,     0,   109,   110,   111,
       0,   131,     0,     0,     0,   125,     0,   133,   134,     0,
     135,     0,   263,     0,     0,   258,     0,     0,   265,     0,
       5,     0,    94,    93,    91,    96,    90,    92,    55,    54,
      53,    46,     0,    95,     0,     0,     0,    48,    49,     0,
      52,     0,    84,    85,    82,    83,    36,     0,   118,     0,
       0,     0,   117,   120,     0,    26,    20,     0,     0,    31,
      21,     0,    32,    22,   108,     0,     0,     0,    68,    56,
       0,     0,   129,     0,   130,   132,   141,   136,     0,   138,
     262,     0,   261,    15,    12,   126,   268,     0,    97,     0,
      88,    86,    45,    47,    51,    50,    62,     0,     0,    61,
      34,     0,    33,     0,     0,     0,   114,     0,   119,     0,
      24,     0,    28,    17,     0,    29,    18,    30,    19,    69,
       0,    80,    73,     0,     0,    67,   137,   139,   128,     0,
     206,   143,     0,     0,     0,     0,   174,     0,     0,   226,
       0,     0,     0,     0,     0,   151,   140,     0,   146,   156,
     154,   150,   152,   147,   172,     0,   170,     0,     0,     0,
     207,     0,   205,   171,     0,   148,     0,     0,   162,   153,
     260,     0,     0,     0,     0,     0,    89,    87,     0,    65,
     100,    66,     0,    57,     0,    35,     0,   121,   123,   116,
     113,   112,   115,    25,    27,    16,    77,    81,     0,     0,
      71,     0,    74,     0,   157,   144,     0,     0,     0,     0,
       0,    88,   206,     0,   209,   212,   213,   210,     0,     0,
     211,     0,     0,   201,   214,   202,     0,     0,     0,     0,
       0,   107,     0,   164,   142,   145,     0,   175,   149,   155,
       0,     0,     0,   229,   228,     0,   238,   240,   249,     0,
       0,   242,     0,   251,     0,   269,   267,   264,    63,    58,
       0,   103,    98,    59,     0,    60,   124,     0,     0,    79,
      75,    78,     0,    72,     0,   186,     0,     0,     0,     0,
       0,   198,   199,     0,   189,     0,   214,     0,     0,   221,
     222,   206,   214,     0,   223,   224,   225,   169,     0,     0,
       0,     0,     0,     0,   271,   272,     0,     0,   159,   105,
       0,   105,   167,     0,   160,     0,     0,   203,     0,   204,
     230,     0,   231,   233,     0,     0,     0,   247,   250,     0,
     248,     0,   102,     0,   122,    76,   161,     0,     0,     0,
       0,     0,     0,   202,   196,   239,     0,     0,     0,     0,
       0,     0,     0,     0,   243,     0,   220,   215,   216,   217,
     218,   219,     0,     0,   273,   270,   274,     0,     0,   168,
     106,   166,   165,   163,   173,   208,     0,   227,     0,   232,
     241,     0,     0,   256,   246,   266,     0,     0,   185,     0,
     183,     0,     0,     0,     0,   197,   187,   188,   190,   191,
     192,   193,   194,   195,   245,   244,     0,   276,   158,     0,
     104,   237,   234,   236,     0,   253,   257,     0,   101,    99,
     184,   182,   181,     0,   180,     0,     0,     0,     0,    38,
       0,    40,     0,   254,     0,   255,   177,   178,   179,     0,
     275,    41,     0,    37,     0,   235,   252,   176,     0,    43,
      39,    44,     0,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -315,  -315,  -315,   660,  -315,  -315,  -315,   654,  -315,  -315,
    -309,    20,  -315,   596,   601,  -315,  -315,   -19,   555,   451,
    -315,  -315,  -315,  -156,   -28,  -315,  -315,  -315,  -315,  -120,
    -315,  -315,   336,  -315,     3,   -18,  -315,  -315,   -29,   157,
    -315,   597,  -315,   381,  -315,  -315,  -315,   649,   -35,  -315,
    -315,  -315,  -315,   119,  -315,  -315,  -315,  -172,  -315,  -315,
    -315,   444,   -31,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -243,  -314,  -179,  -102,   -58,  -315,  -214,  -315,  -177,  -315,
    -315,  -315,   329,  -315,   220,  -315,   422,  -315,  -315,  -315,
    -315,  -315,  -315,   408,   411,  -315,  -315,  -315,   147,  -207,
    -315,  -315,   350,  -315,  -315
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    33,    34,    87,   450,
     470,    35,    76,    77,    78,    79,   107,    80,   138,   139,
     109,    12,    13,   163,   184,    82,    83,    84,    85,   219,
     302,   220,   409,   352,    36,    37,    38,    39,   261,    91,
      92,    93,   227,   228,    14,    15,    45,    46,    47,    48,
      49,    50,    51,   185,   118,   186,   187,   188,   189,   190,
     191,   272,   273,   192,   193,   194,   195,   196,   197,   318,
     323,   324,   325,   263,   264,   200,   265,   201,   202,   285,
     361,   362,   363,   452,   453,   203,   204,   205,   206,   207,
     445,   291,   292,   293,   294,    16,    17,    55,   208,   127,
     209,   344,   345,   346,   405
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
      81,   262,    90,    94,   295,   382,   327,   211,   243,   267,
     283,   115,    81,   110,   111,   275,   198,   222,   104,   426,
      54,   108,   432,   276,   284,   277,    58,   279,    21,   140,
     212,    59,   286,   296,   287,    44,   104,    98,   101,   333,
     386,   387,    88,    22,   129,   221,   141,   336,   142,    23,
      81,    81,   216,   427,    97,   -64,   121,   280,   179,   134,
     199,   144,   -64,     1,    89,   230,   357,   358,   281,   300,
     329,   330,   436,   437,   380,   231,   282,    81,   115,   198,
     104,    81,   309,   104,   281,   198,   159,   301,     2,   288,
     165,   347,   282,   198,   298,   198,   218,   350,   151,   239,
     154,    24,   198,   104,   198,   383,   244,    81,   218,   240,
     365,     3,   245,   466,   226,    19,   134,     4,    20,     5,
     289,   290,   367,   199,   397,   398,   399,   400,   401,   199,
     252,   386,   387,   104,    25,   312,   104,   199,   434,   199,
     343,   384,   403,    99,   246,   313,   199,    18,   199,   102,
     349,   351,   319,   289,   290,    18,    26,   254,   255,   482,
     256,   257,    95,   100,   425,   320,    31,    32,   117,   103,
     119,   410,    31,    32,   406,   490,    40,    28,   179,   491,
     321,   322,    96,   493,    58,    31,    32,   258,   259,    59,
     326,   326,   420,    60,   423,   332,   260,    28,   428,  -200,
     431,    56,    41,   332,   152,    42,    43,    57,   252,   438,
     439,   440,   441,   442,   443,  -200,   303,  -200,  -200,    89,
     468,   469,   332,   332,   153,   144,   -63,    31,    32,   280,
     253,   447,    86,   -63,   223,   254,   255,   451,   256,   257,
     281,   224,   123,   116,   198,   124,     1,   145,   282,   455,
     460,   149,   155,   463,   465,   128,   179,   136,   280,   326,
     137,   326,   198,   125,   198,   258,   259,   166,   167,   281,
     471,     2,   156,   126,   260,    31,    32,   282,   226,   130,
     332,   332,   332,   332,   332,   338,   339,   479,   199,   471,
     340,   144,   236,   451,     3,   341,   342,   157,   340,   237,
       4,   198,     5,   341,   342,   471,   199,   112,   199,   471,
      42,    43,     6,   471,   415,   160,   131,   158,   161,   198,
      31,    32,   412,   326,   413,   162,   143,   169,   326,   326,
     170,   234,    62,    63,    64,    65,    66,    88,    67,   388,
     389,   136,   116,   171,   214,   199,   146,   353,   172,    73,
     353,   235,   147,   390,    31,    32,   391,   354,   392,   393,
     376,   216,   270,   199,   355,   271,   173,   355,   338,   339,
     174,   175,   176,   177,   446,   164,   304,   178,   179,   214,
     241,   340,   180,   161,   213,    75,   341,   342,   217,   181,
     242,   182,   266,   183,   218,   170,   225,    62,    63,    64,
      65,    66,   238,    67,   315,   299,   232,   116,   274,   311,
     316,   317,   224,   172,    73,   229,   237,   385,   266,   386,
     387,   170,   247,    62,    63,    64,    65,    66,   248,    67,
     249,   173,   250,   116,   251,   174,   175,   176,   177,   172,
      73,   268,   178,   179,    68,    69,    70,   180,   132,   269,
      75,   278,   338,   339,   181,   396,   182,   173,   183,   297,
     306,   174,   175,   176,   177,   340,   307,   422,   178,   179,
     341,   342,    29,   180,    52,   310,    75,    31,    32,   328,
     181,   334,   182,   266,   183,   335,   170,   337,    62,    63,
      64,    65,    66,   114,    67,   244,    42,    43,   116,   120,
     343,   179,    31,    32,   172,    73,   348,   122,   359,   266,
      31,    32,   170,   174,    62,    63,    64,    65,    66,   366,
      67,   360,   173,   364,   116,   371,   174,   175,   176,   177,
     172,    73,   454,   178,   179,   370,   150,   373,   180,    31,
      32,    75,   372,   308,   237,   181,   161,   182,   173,   183,
     375,   377,   174,   175,   176,   177,   378,   381,   168,   178,
     179,    42,    43,   395,   180,   210,   402,    75,    31,    32,
     407,   181,   408,   182,   331,   183,    62,    63,    64,    65,
      66,    28,    67,   414,    29,   416,    30,   417,   233,    31,
      32,    31,    32,    73,   418,   394,   319,   386,   387,   421,
     424,   254,   255,   429,   256,   257,   435,   444,   331,   320,
      62,    63,    64,    65,    66,   449,    67,   448,   456,   252,
     461,    74,   179,   457,   321,   322,   379,    73,   458,    75,
     253,   258,   259,   467,   459,   254,   255,   472,   256,   257,
     260,   319,   473,   476,   475,   474,   254,   255,   477,   256,
     257,   252,   480,   483,   320,    74,   179,   484,   433,   486,
     488,   487,   489,    75,   492,   258,   259,   179,    27,   321,
     322,    53,   133,   319,   260,   305,   258,   259,   254,   255,
     135,   256,   257,   252,   215,   260,   320,   411,   374,   148,
     314,   419,   485,   113,   404,   468,   481,   252,   356,   179,
     368,   321,   322,   369,     0,   253,     0,     0,   258,   259,
     254,   255,     0,   256,   257,     0,   252,   260,     0,   253,
     430,     0,     0,     0,   254,   255,     0,   256,   257,   252,
       0,   179,     0,     0,     0,     0,     0,     0,   253,   462,
     258,   259,     0,   254,   255,   179,   256,   257,   252,   260,
       0,   253,   464,     0,   258,   259,   254,   255,     0,   256,
     257,   252,     0,   260,   179,     0,     0,     0,     0,     0,
     253,   478,   252,   258,   259,   254,   255,   179,   256,   257,
       0,     0,   260,   253,   468,     0,   258,   259,   254,   255,
       0,   256,   257,     0,   253,   260,   179,     0,     0,   254,
     255,     0,   256,   257,     0,   258,   259,     0,     0,   179,
       0,     0,     0,     0,   260,     0,     0,     0,   258,   259,
     179,     0,     0,     0,     0,     0,     0,   260,   105,   258,
     259,    61,     0,    62,    63,    64,    65,    66,   260,    67,
       0,     0,     0,     0,   106,     0,     0,     0,     0,    72,
      73,    61,     0,    62,    63,    64,    65,    66,     0,    67,
      68,    69,    70,     0,    71,     0,     0,     0,     0,    72,
      73,    61,     0,    62,    63,    64,    65,    66,    74,    67,
       0,     0,     0,     0,     0,     0,    75,     0,     0,    72,
      73,    61,     0,    62,    63,    64,    65,    66,    74,    67,
       0,     0,     0,     0,     0,     0,    75,     0,     0,     0,
      73,     0,     0,     0,     0,     0,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,    75
};

static const short int yycheck[] =
{
      28,   180,    31,    32,   211,   319,   249,    18,   164,   181,
       4,    46,    40,    42,    43,   187,   118,   137,    36,     1,
      17,    40,    11,   195,   201,   197,    11,    11,     4,     1,
      41,    16,   204,   212,   206,    15,    54,    34,    35,   253,
      29,    30,     4,     4,    72,     1,    18,   261,    20,     4,
      78,    79,    37,    35,    34,    11,    53,    41,    52,    78,
     118,    89,    18,     3,    26,     1,   280,   281,    52,    35,
      61,    62,   386,   387,   317,    11,    60,   105,   113,   181,
      98,   109,   238,   101,    52,   187,   105,    53,    28,    17,
     109,   268,    60,   195,   214,   197,    52,    41,    95,     1,
      97,     4,   204,   121,   206,   319,    11,   135,    52,    11,
     289,    51,    17,    11,   143,     1,   135,    57,     4,    59,
      48,    49,    17,   181,   338,   339,   340,   341,   342,   187,
       4,    29,    30,   151,    31,     1,   154,   195,   381,   197,
      64,   320,    66,     1,   172,    11,   204,     0,   206,     1,
     270,   271,    26,    48,    49,     8,     0,    31,    32,   468,
      34,    35,     1,    21,   371,    39,    24,    25,    49,    21,
      51,   350,    24,    25,   346,   484,    16,    16,    52,   488,
      54,    55,    21,   492,    11,    24,    25,    61,    62,    16,
     248,   249,   364,    11,   366,   253,    70,    16,   377,    11,
     379,     5,    21,   261,     1,    24,    25,     5,     4,   388,
     389,   390,   391,   392,   393,    27,     1,    29,    30,    26,
      16,    17,   280,   281,    21,   253,    11,    24,    25,    41,
      26,   403,     4,    18,    11,    31,    32,   416,    34,    35,
      52,    18,     1,    16,   346,     4,     3,    90,    60,   421,
     429,    94,     1,   432,   433,    37,    52,     1,    41,   317,
       4,   319,   364,     4,   366,    61,    62,   110,   111,    52,
     449,    28,    21,     4,    70,    24,    25,    60,   307,     4,
     338,   339,   340,   341,   342,    24,    25,   466,   346,   468,
      37,   319,    11,   472,    51,    42,    43,     1,    37,    18,
      57,   403,    59,    42,    43,   484,   364,    21,   366,   488,
      24,    25,    69,   492,    53,     1,     4,    21,     4,   421,
      24,    25,   353,   381,   355,    11,     5,     1,   386,   387,
       4,     1,     6,     7,     8,     9,    10,     4,    12,    19,
      20,     1,    16,    17,     4,   403,     1,     1,    22,    23,
       1,    21,     4,    33,    24,    25,    36,    11,    38,    39,
      11,    37,     1,   421,    18,     4,    40,    18,    24,    25,
      44,    45,    46,    47,   402,    17,     1,    51,    52,     4,
       1,    37,    56,     4,    17,    59,    42,    43,    37,    63,
      11,    65,     1,    67,    52,     4,     4,     6,     7,     8,
       9,    10,    18,    12,     4,    11,    11,    16,    17,    11,
      10,    11,    18,    22,    23,    27,    18,    27,     1,    29,
      30,     4,    26,     6,     7,     8,     9,    10,    26,    12,
      26,    40,    26,    16,     4,    44,    45,    46,    47,    22,
      23,    26,    51,    52,    13,    14,    15,    56,    17,    31,
      59,    11,    24,    25,    63,    27,    65,    40,    67,    11,
       4,    44,    45,    46,    47,    37,     5,    50,    51,    52,
      42,    43,    19,    56,    21,    11,    59,    24,    25,     4,
      63,     4,    65,     1,    67,     4,     4,    11,     6,     7,
       8,     9,    10,    21,    12,    11,    24,    25,    16,    21,
      64,    52,    24,    25,    22,    23,    11,    21,     4,     1,
      24,    25,     4,    44,     6,     7,     8,     9,    10,     5,
      12,     4,    40,    58,    16,    18,    44,    45,    46,    47,
      22,    23,    50,    51,    52,    17,    21,    52,    56,    24,
      25,    59,    53,     1,    18,    63,     4,    65,    40,    67,
      11,    41,    44,    45,    46,    47,     4,    11,    21,    51,
      52,    24,    25,    27,    56,    21,    26,    59,    24,    25,
      27,    63,    41,    65,     4,    67,     6,     7,     8,     9,
      10,    16,    12,    11,    19,     5,    21,    53,    21,    24,
      25,    24,    25,    23,     4,    27,    26,    29,    30,     5,
      17,    31,    32,    41,    34,    35,    27,    16,     4,    39,
       6,     7,     8,     9,    10,    16,    12,    11,    11,     4,
      27,    51,    52,    50,    54,    55,    11,    23,    53,    59,
      26,    61,    62,     4,    53,    31,    32,     5,    34,    35,
      70,    26,    11,    27,    11,    50,    31,    32,    27,    34,
      35,     4,    27,    17,    39,    51,    52,    18,    11,    11,
      18,    27,    17,    59,    18,    61,    62,    52,     8,    54,
      55,    17,    76,    26,    70,   224,    61,    62,    31,    32,
      79,    34,    35,     4,   129,    70,    39,   351,   307,    92,
     246,   362,   472,    44,   344,    16,    17,     4,   276,    52,
     292,    54,    55,   292,    -1,    26,    -1,    -1,    61,    62,
      31,    32,    -1,    34,    35,    -1,     4,    70,    -1,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    34,    35,     4,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      61,    62,    -1,    31,    32,    52,    34,    35,     4,    70,
      -1,    26,    27,    -1,    61,    62,    31,    32,    -1,    34,
      35,     4,    -1,    70,    52,    -1,    -1,    -1,    -1,    -1,
      26,    27,     4,    61,    62,    31,    32,    52,    34,    35,
      -1,    -1,    70,    26,    16,    -1,    61,    62,    31,    32,
      -1,    34,    35,    -1,    26,    70,    52,    -1,    -1,    31,
      32,    -1,    34,    35,    -1,    61,    62,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    61,    62,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    70,     1,    61,
      62,     4,    -1,     6,     7,     8,     9,    10,    70,    12,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    22,
      23,     4,    -1,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    22,
      23,     4,    -1,     6,     7,     8,     9,    10,    51,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    22,
      23,     4,    -1,     6,     7,     8,     9,    10,    51,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,    28,    51,    57,    59,    69,    77,    78,    79,
      80,    81,    97,    98,   120,   121,   171,   172,   174,     1,
       4,     4,     4,     4,     4,    31,     0,    79,    16,    19,
      21,    24,    25,    82,    83,    87,   110,   111,   112,   113,
      16,    21,    24,    25,    87,   122,   123,   124,   125,   126,
     127,   128,    21,    83,   110,   173,     5,     5,    11,    16,
      11,     4,     6,     7,     8,     9,    10,    12,    13,    14,
      15,    17,    22,    23,    51,    59,    88,    89,    90,    91,
      93,   100,   101,   102,   103,   104,     4,    84,     4,    26,
     114,   115,   116,   117,   114,     1,    21,    87,   110,     1,
      21,   110,     1,    21,   111,     1,    17,    92,    93,    96,
     114,   114,    21,   123,    21,   124,    16,   129,   130,   129,
      21,   110,    21,     1,     4,     4,     4,   175,    37,   100,
       4,     4,    17,    89,    93,    90,     1,     4,    94,    95,
       1,    18,    20,     5,   100,   115,     1,     4,   117,   115,
      21,   110,     1,    21,   110,     1,    21,     1,    21,    93,
       1,     4,    11,    99,    17,    93,   115,   115,    21,     1,
       4,    17,    22,    40,    44,    45,    46,    47,    51,    52,
      56,    63,    65,    67,   100,   129,   131,   132,   133,   134,
     135,   136,   139,   140,   141,   142,   143,   144,   149,   150,
     151,   153,   154,   161,   162,   163,   164,   165,   174,   176,
      21,    18,    41,    17,     4,    94,    37,    37,    52,   105,
     107,     1,   105,    11,    18,     4,   114,   118,   119,    27,
       1,    11,    11,    21,     1,    21,    11,    18,    18,     1,
      11,     1,    11,    99,    11,    17,   100,    26,    26,    26,
      26,     4,     4,    26,    31,    32,    34,    35,    61,    62,
      70,   114,   148,   149,   150,   152,     1,   133,    26,    31,
       1,     4,   137,   138,    17,   133,   133,   133,    11,    11,
      41,    52,    60,     4,   154,   155,   133,   133,    17,    48,
      49,   167,   168,   169,   170,   175,   148,    11,   105,    11,
      35,    53,   106,     1,     1,    95,     4,     5,     1,    99,
      11,    11,     1,    11,   137,     4,    10,    11,   145,    26,
      39,    54,    55,   146,   147,   148,   150,   146,     4,    61,
      62,     4,   150,   152,     4,     4,   152,    11,    24,    25,
      37,    42,    43,    64,   177,   178,   179,   154,    11,   105,
      41,   105,   109,     1,    11,    18,   162,   152,   152,     4,
       4,   156,   157,   158,    58,   148,     5,    17,   169,   170,
      17,    18,    53,    52,   119,    11,    11,    41,     4,    11,
     146,    11,   147,   152,   148,    27,    29,    30,    19,    20,
      33,    36,    38,    39,    27,    27,    27,   152,   152,   152,
     152,   152,    26,    66,   178,   180,   133,    27,    41,   108,
     148,   108,   138,   138,    11,    53,     5,    53,     4,   158,
     133,     5,    50,   133,    17,   175,     1,    35,   148,    41,
      27,   148,    11,    11,   146,    27,   147,   147,   148,   148,
     148,   148,   148,   148,    16,   166,   100,   133,    11,    16,
      85,   148,   159,   160,    50,   133,    11,    50,    53,    53,
     148,    27,    27,   148,    27,   148,    11,     4,    16,    17,
      86,   148,     5,    11,    50,    11,    27,    27,    27,   148,
      27,    17,    86,    17,    18,   160,    11,    27,    18,    17,
      86,    86,    18,    86
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    76,    77,    78,    78,    78,    79,    79,    79,    79,
      79,    80,    81,    81,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    83,    83,    84,    84,    85,    85,    86,
      86,    86,    86,    86,    86,    87,    87,    88,    88,    88,
      89,    90,    90,    91,    91,    91,    92,    93,    93,    93,
      94,    94,    94,    95,    95,    95,    95,    96,    96,    96,
      97,    98,    98,    98,    98,    98,    98,    98,    98,    99,
      99,    99,   100,   100,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   103,   103,   103,   103,   104,   105,   106,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   110,
     111,   111,   112,   112,   112,   113,   114,   115,   115,   116,
     116,   117,   118,   118,   119,   120,   121,   121,   122,   122,
     122,   122,   123,   123,   124,   124,   125,   126,   127,   128,
     129,   130,   131,   131,   131,   132,   132,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   134,   135,
     136,   136,   136,   137,   137,   137,   138,   138,   138,   139,
     140,   140,   140,   141,   142,   143,   144,   144,   144,   144,
     144,   144,   144,   144,   145,   145,   145,   146,   146,   146,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   148,   148,   149,   150,   150,   150,   150,   151,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   153,   154,   155,   155,
     156,   156,   157,   157,   158,   159,   159,   160,   161,   162,
     163,   163,   163,   164,   165,   166,   167,   167,   167,   167,
     168,   168,   169,   169,   169,   170,   170,   170,   171,   172,
     173,   173,   173,   173,   174,   174,   175,   175,   175,   175,
     176,   176,   177,   177,   178,   179,   180
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     2,     4,     2,     2,     4,     4,     3,     3,     3,
       2,     2,     2,     1,     3,     4,     2,     4,     3,     3,
       3,     2,     2,     3,     3,     3,     1,     3,     2,     3,
       1,     2,     5,     3,     4,     3,     2,     2,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     3,     4,     4,
       3,     1,     1,     2,     1,     2,     2,     2,     1,     2,
       2,     5,     6,     4,     5,     6,     7,     5,     6,     3,
       1,     2,     1,     1,     1,     1,     2,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     4,
       0,     4,     3,     2,     2,     0,     2,     0,     2,     1,
       1,     1,     4,     4,     3,     4,     3,     1,     1,     2,
       1,     3,     3,     1,     2,     2,     4,     2,     3,     2,
       2,     1,     2,     1,     1,     1,     2,     3,     2,     3,
       2,     1,     2,     1,     2,     2,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     2,     1,     2,     5,     3,
       3,     4,     1,     3,     1,     3,     3,     2,     3,     3,
       1,     1,     1,     4,     1,     2,     8,     7,     7,     7,
       6,     6,     6,     5,     4,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     2,     3,     1,     1,
       1,     1,     1,     3,     3,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     1,     4,     1,     1,
       1,     1,     2,     1,     3,     3,     1,     1,     2,     4,
       2,     4,     2,     4,     5,     1,     3,     2,     2,     1,
       2,     1,     6,     4,     5,     5,     3,     4,     2,     2,
       3,     2,     2,     1,     6,     3,     5,     3,     1,     3,
       4,     3,     1,     2,     2,     5,     2
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   214,     0
};

/* Error token number */
#define YYTERROR 1



YYSTYPE yylval;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YYDPRINTF(Args)                        \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
  } while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YYFPRINTF (stderr, "%s ", Title);                               \
        yy_symbol_print (stderr, Type, Value);        \
        YYFPRINTF (stderr, "\n");                                       \
      }                                                                 \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

struct yyGLRStack;
static void yypstack (struct yyGLRStack* yystackp, size_t yyk)
  __attribute__ ((__unused__));
static void yypdumpstack (struct yyGLRStack* yystackp)
  __attribute__ ((__unused__));

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif


#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static void yyFail (yyGLRStack* yystackp, const char* yymsg)
  __attribute__ ((__noreturn__));
static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULL)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static void yyMemoryExhausted (yyGLRStack* yystackp)
  __attribute__ ((__noreturn__));
static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) __attribute__ ((__unused__));
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      else
        /* The effect of using yysval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULL;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     __attribute__ ((__unused__));
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, size_t yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp)
{
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == YY_NULL);
  int yylow;
  YYUSE (yyvalp);
  YYUSE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  switch (yyn)
    {
        case 2:
#line 225 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"program: components\n"; 
										 }
#line 1534 "yacc.cpp" /* glr.c:788  */
    break;

  case 3:
#line 228 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"components: components component\n";}
#line 1540 "yacc.cpp" /* glr.c:788  */
    break;

  case 4:
#line 229 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"components: component\n";}
#line 1546 "yacc.cpp" /* glr.c:788  */
    break;

  case 5:
#line 230 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
			string importstring=*(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.string_val);
			if(importstring.size()>2){
			if(importstring[1]==':')
			addFile(*(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.string_val));
			else
			addFile(dir_path+*(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.string_val));
			}
			}
#line 1560 "yacc.cpp" /* glr.c:788  */
    break;

  case 6:
#line 240 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_interface \n";}
#line 1566 "yacc.cpp" /* glr.c:788  */
    break;

  case 7:
#line 241 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_implementation \n";}
#line 1572 "yacc.cpp" /* glr.c:788  */
    break;

  case 8:
#line 242 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"protocol \n";}
#line 1578 "yacc.cpp" /* glr.c:788  */
    break;

  case 9:
#line 243 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct \n";}
#line 1584 "yacc.cpp" /* glr.c:788  */
    break;

  case 10:
#line 244 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"enum \n";}
#line 1590 "yacc.cpp" /* glr.c:788  */
    break;

  case 11:
#line 246 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_interface: class_interface_header class_interface_body\n";
																classNode=NULL;
																 idsList.clear();
																 methodsList.clear();
																 method=NULL;
																}
#line 1601 "yacc.cpp" /* glr.c:788  */
    break;

  case 12:
#line 255 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																				interface=InterfaceHelper::createNewInterface((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),symbolTable);
																				
																				
																				}
#line 1611 "yacc.cpp" /* glr.c:788  */
    break;

  case 13:
#line 260 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																					Streams::verbose()<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
																				 interface=InterfaceHelper::createNewInterface((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),"",symbolTable);

																				}
#line 1621 "yacc.cpp" /* glr.c:788  */
    break;

  case 14:
#line 265 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1627 "yacc.cpp" /* glr.c:788  */
    break;

  case 15:
#line 267 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1633 "yacc.cpp" /* glr.c:788  */
    break;

  case 16:
#line 270 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	
															
														InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														}
#line 1643 "yacc.cpp" /* glr.c:788  */
    break;

  case 17:
#line 276 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														}
#line 1651 "yacc.cpp" /* glr.c:788  */
    break;

  case 18:
#line 280 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	protocol_reference_list interface_declaration_list	AT_END\n";
														}
#line 1660 "yacc.cpp" /* glr.c:788  */
    break;

  case 19:
#line 285 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														}
#line 1669 "yacc.cpp" /* glr.c:788  */
    break;

  case 20:
#line 290 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														}
#line 1677 "yacc.cpp" /* glr.c:788  */
    break;

  case 21:
#line 294 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_interface_body:instance_variables		AT_END\n";}
#line 1683 "yacc.cpp" /* glr.c:788  */
    break;

  case 22:
#line 296 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {														
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:interface_declaration_list	AT_END\n";
														}
#line 1692 "yacc.cpp" /* glr.c:788  */
    break;

  case 23:
#line 300 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_interface_body:AT_END\n";}
#line 1698 "yacc.cpp" /* glr.c:788  */
    break;

  case 24:
#line 301 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1704 "yacc.cpp" /* glr.c:788  */
    break;

  case 25:
#line 302 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1710 "yacc.cpp" /* glr.c:788  */
    break;

  case 26:
#line 303 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1716 "yacc.cpp" /* glr.c:788  */
    break;

  case 27:
#line 304 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1722 "yacc.cpp" /* glr.c:788  */
    break;

  case 28:
#line 305 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1728 "yacc.cpp" /* glr.c:788  */
    break;

  case 29:
#line 306 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1734 "yacc.cpp" /* glr.c:788  */
    break;

  case 30:
#line 307 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1740 "yacc.cpp" /* glr.c:788  */
    break;

  case 31:
#line 308 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1746 "yacc.cpp" /* glr.c:788  */
    break;

  case 32:
#line 309 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1752 "yacc.cpp" /* glr.c:788  */
    break;

  case 33:
#line 313 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
													if(interface!=NULL){
													InterfaceHelper::addInheritedProtocol(interface,idsList,symbolTable);
														idsList.clear();
													}
													Streams::verbose()<<"protocol_reference_list: LESS_THAN ids_list_identifier MORE_THAN\n";
												}
#line 1764 "yacc.cpp" /* glr.c:788  */
    break;

  case 34:
#line 320 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected '>' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1770 "yacc.cpp" /* glr.c:788  */
    break;

  case 35:
#line 323 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
													Streams::verbose()<<"ids_list:ids_list_identifier COMMA IDENTIFIER\n"; 
													idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
													}
#line 1779 "yacc.cpp" /* glr.c:788  */
    break;

  case 36:
#line 327 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
													Streams::verbose()<<"ids_list_identifier:IDENTIFIER\n";
													idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
												    }
#line 1788 "yacc.cpp" /* glr.c:788  */
    break;

  case 37:
#line 332 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"array with body";}
#line 1794 "yacc.cpp" /* glr.c:788  */
    break;

  case 38:
#line 333 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"array without elements";}
#line 1800 "yacc.cpp" /* glr.c:788  */
    break;

  case 39:
#line 337 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"array-element \n";}
#line 1806 "yacc.cpp" /* glr.c:788  */
    break;

  case 40:
#line 338 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"array-element \n";}
#line 1812 "yacc.cpp" /* glr.c:788  */
    break;

  case 41:
#line 339 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"empty element \n";}
#line 1818 "yacc.cpp" /* glr.c:788  */
    break;

  case 42:
#line 340 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"inside braces element \n";}
#line 1824 "yacc.cpp" /* glr.c:788  */
    break;

  case 43:
#line 341 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"inside braces element \n";}
#line 1830 "yacc.cpp" /* glr.c:788  */
    break;

  case 44:
#line 342 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"inside braces element \n";}
#line 1836 "yacc.cpp" /* glr.c:788  */
    break;

  case 45:
#line 345 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";}
#line 1842 "yacc.cpp" /* glr.c:788  */
    break;

  case 46:
#line 346 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variables:OPEN_S	 CLOSE_S\n";}
#line 1848 "yacc.cpp" /* glr.c:788  */
    break;

  case 47:
#line 349 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";}
#line 1854 "yacc.cpp" /* glr.c:788  */
    break;

  case 48:
#line 350 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variable_declarations:instance_variable_declaration\n";}
#line 1860 "yacc.cpp" /* glr.c:788  */
    break;

  case 49:
#line 351 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variable_declarations:variable_declaration_list\n";}
#line 1866 "yacc.cpp" /* glr.c:788  */
    break;

  case 50:
#line 354 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variable_declaration:visibility_specification variable_declaration_list\n";
																	}
#line 1873 "yacc.cpp" /* glr.c:788  */
    break;

  case 51:
#line 358 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
											arrayList.clear();
												idsList.clear();
												flag=false;
										}
#line 1885 "yacc.cpp" /* glr.c:788  */
    break;

  case 52:
#line 366 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										       InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
												arrayList.clear();
												idsList.clear();
												flag=false;
										Streams::verbose()<<"variable_declaration_list: variable_declaration\n";
										}
#line 1897 "yacc.cpp" /* glr.c:788  */
    break;

  case 53:
#line 376 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"visibility_specification:AT_PRIVATE\n";  visibility=new char[256]; visibility[0]='\0';strcat(visibility,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));}
#line 1903 "yacc.cpp" /* glr.c:788  */
    break;

  case 54:
#line 377 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"visibility_specification:AT_PROTECTED\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));}
#line 1909 "yacc.cpp" /* glr.c:788  */
    break;

  case 55:
#line 378 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"visibility_specification:AT_PUBLIC\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));}
#line 1915 "yacc.cpp" /* glr.c:788  */
    break;

  case 56:
#line 383 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct_variable_declaration:struct_declaration_list\n";}
#line 1921 "yacc.cpp" /* glr.c:788  */
    break;

  case 57:
#line 386 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
	                                           ((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text);
												}
#line 1929 "yacc.cpp" /* glr.c:788  */
    break;

  case 58:
#line 389 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 ((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text);
													}
#line 1938 "yacc.cpp" /* glr.c:788  */
    break;

  case 59:
#line 393 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1944 "yacc.cpp" /* glr.c:788  */
    break;

  case 60:
#line 397 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									Streams::verbose()<<"ids_list:ids_list COMMA id_dec\n"; 

									}
#line 1953 "yacc.cpp" /* glr.c:788  */
    break;

  case 61:
#line 401 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"ids_list:id_dec\n"; }
#line 1959 "yacc.cpp" /* glr.c:788  */
    break;

  case 62:
#line 402 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1965 "yacc.cpp" /* glr.c:788  */
    break;

  case 63:
#line 405 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose() <<" data_member: IDENTIFIER array_tag \n";
							 var=new Array((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),arrayAlloc.size(),NULL);
					       ( dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
						   arrayList.push_back( ( dynamic_cast<Array*>(var)));
						      arrayAlloc.clear();
							}
#line 1976 "yacc.cpp" /* glr.c:788  */
    break;

  case 64:
#line 411 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text)) ;Streams::verbose() <<" data_member: IDENTIFIER  \n";}
#line 1982 "yacc.cpp" /* glr.c:788  */
    break;

  case 65:
#line 412 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 1988 "yacc.cpp" /* glr.c:788  */
    break;

  case 66:
#line 413 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 1994 "yacc.cpp" /* glr.c:788  */
    break;

  case 67:
#line 415 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {  
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																												idsList.clear();
																												flag=false;
																										  Streams::verbose()<<"struct_declaration_list: struct_declaration_list  variable_declarationxx\n";
																										}
#line 2006 "yacc.cpp" /* glr.c:788  */
    break;

  case 68:
#line 423 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																														 	idsList.clear();
																															flag=false;
																										Streams::verbose()<<"struct_declaration_list:  variable_declarationxx\n";
																										}
#line 2018 "yacc.cpp" /* glr.c:788  */
    break;

  case 69:
#line 430 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Illigal visibility specification at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2024 "yacc.cpp" /* glr.c:788  */
    break;

  case 70:
#line 434 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
					myStruct=StructHelper::createNewStruct((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),symbolTable);
					Streams::verbose()<<"struct_header: STRUCT  IDENTIFIER\n";
					}
#line 2033 "yacc.cpp" /* glr.c:788  */
    break;

  case 71:
#line 440 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S  entity SEMI_COMA\n";}
#line 2039 "yacc.cpp" /* glr.c:788  */
    break;

  case 72:
#line 441 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S enteity SEMI_COMA \n";}
#line 2045 "yacc.cpp" /* glr.c:788  */
    break;

  case 73:
#line 442 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S SEMI_COMA\n";}
#line 2051 "yacc.cpp" /* glr.c:788  */
    break;

  case 74:
#line 443 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S  SEMI_COMA  \n";}
#line 2057 "yacc.cpp" /* glr.c:788  */
    break;

  case 75:
#line 444 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2063 "yacc.cpp" /* glr.c:788  */
    break;

  case 76:
#line 445 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2069 "yacc.cpp" /* glr.c:788  */
    break;

  case 77:
#line 446 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2075 "yacc.cpp" /* glr.c:788  */
    break;

  case 78:
#line 447 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2081 "yacc.cpp" /* glr.c:788  */
    break;

  case 79:
#line 450 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"entity: IDENTIFIER COMMA  entity\n";}
#line 2087 "yacc.cpp" /* glr.c:788  */
    break;

  case 80:
#line 451 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"entity:  IDENTIFIER \n";}
#line 2093 "yacc.cpp" /* glr.c:788  */
    break;

  case 81:
#line 452 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2099 "yacc.cpp" /* glr.c:788  */
    break;

  case 82:
#line 456 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"type:simple type\n";}
#line 2105 "yacc.cpp" /* glr.c:788  */
    break;

  case 83:
#line 457 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"type: complex type\n";}
#line 2111 "yacc.cpp" /* glr.c:788  */
    break;

  case 84:
#line 458 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"type: struct_type\n";}
#line 2117 "yacc.cpp" /* glr.c:788  */
    break;

  case 85:
#line 459 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"type: enum_type\n";}
#line 2123 "yacc.cpp" /* glr.c:788  */
    break;

  case 86:
#line 463 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	Streams::verbose()<<"struct_type: STRUCT IDENTIFIER   \n";
													 type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																		string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2137 "yacc.cpp" /* glr.c:788  */
    break;

  case 87:
#line 472 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct_type: STRUCT IDENTIFIER  MULTI \n";
													 type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2151 "yacc.cpp" /* glr.c:788  */
    break;

  case 88:
#line 483 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"enum_type: ENUM IDENTIFIER \n";
													 type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2165 "yacc.cpp" /* glr.c:788  */
    break;

  case 89:
#line 492 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"enum_type: ENUM IDENTIFIER  MULTI  \n";
													 type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																									string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2179 "yacc.cpp" /* glr.c:788  */
    break;

  case 90:
#line 503 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"int type \n";
																type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
																}
#line 2193 "yacc.cpp" /* glr.c:788  */
    break;

  case 91:
#line 512 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"char type\n";
	type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2206 "yacc.cpp" /* glr.c:788  */
    break;

  case 92:
#line 520 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"id type\n";
	type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2219 "yacc.cpp" /* glr.c:788  */
    break;

  case 93:
#line 528 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"float type\n";
	type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2232 "yacc.cpp" /* glr.c:788  */
    break;

  case 94:
#line 536 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"NSString type\n";
	type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2245 "yacc.cpp" /* glr.c:788  */
    break;

  case 95:
#line 544 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"void type\n";
	type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2258 "yacc.cpp" /* glr.c:788  */
    break;

  case 96:
#line 552 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"bool type\n";
	type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2271 "yacc.cpp" /* glr.c:788  */
    break;

  case 97:
#line 562 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"complex_type:	IDENTIFIER	MULTI\n";
 {
													 type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}}
#line 2286 "yacc.cpp" /* glr.c:788  */
    break;

  case 98:
#line 573 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"array_tag: array_first_tag array_tag_list \n"; 
										   }
#line 2294 "yacc.cpp" /* glr.c:788  */
    break;

  case 99:
#line 578 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"array_tag_list: array_tag_list OPEN_ARR INT_VAL CLOSE_ARR\n"; 
																arrayAlloc.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.int_val));
														   }
#line 2303 "yacc.cpp" /* glr.c:788  */
    break;

  case 101:
#line 583 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<" Error:missing  dimension in array tag  ";arrayAlloc.clear();}
#line 2309 "yacc.cpp" /* glr.c:788  */
    break;

  case 102:
#line 586 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"array_first_tag: OPEN_ARR INT_VAL CLOSE_ARR\n"; 
											arrayAlloc.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.int_val));
											}
#line 2318 "yacc.cpp" /* glr.c:788  */
    break;

  case 103:
#line 590 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"array_first_tag: OPEN_ARR  CLOSE_ARR\n"; 
											arrayAlloc.push_back(-1);
											}
#line 2327 "yacc.cpp" /* glr.c:788  */
    break;

  case 104:
#line 596 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"array with value\n";
								((*yyvalp).r.node)=new AssignNode(scoop,NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
							   }
#line 2335 "yacc.cpp" /* glr.c:788  */
    break;

  case 106:
#line 601 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
								Streams::verbose() <<"with value\n";
								((*yyvalp).r.node)=new AssignNode(scoop,NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
							 }
#line 2344 "yacc.cpp" /* glr.c:788  */
    break;

  case 107:
#line 606 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {((*yyvalp).r.node)=NULL;}
#line 2350 "yacc.cpp" /* glr.c:788  */
    break;

  case 108:
#line 611 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
															 methodsList.push_back(method);
														
															 
																}
#line 2361 "yacc.cpp" /* glr.c:788  */
    break;

  case 109:
#line 617 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																 Streams::verbose()<<"interface_declaration_list:interface_declaration\n";
															 methodsList.push_back(method);
															 
																 	
																 }
#line 2372 "yacc.cpp" /* glr.c:788  */
    break;

  case 110:
#line 625 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"interface_declaration: class_method_declaration\n";}
#line 2378 "yacc.cpp" /* glr.c:788  */
    break;

  case 111:
#line 626 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"interface_declaration: instance_method_declaration\n";}
#line 2384 "yacc.cpp" /* glr.c:788  */
    break;

  case 112:
#line 630 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"class_method_declaration: PLUS p_type method_selectors	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text)),symbolTable,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),selectorsList,true);
															
																 selectorsList.clear();
																
																}
#line 2396 "yacc.cpp" /* glr.c:788  */
    break;

  case 113:
#line 638 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2402 "yacc.cpp" /* glr.c:788  */
    break;

  case 114:
#line 639 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2408 "yacc.cpp" /* glr.c:788  */
    break;

  case 115:
#line 642 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
															Streams::verbose()<<"instance_method_declaration: MINUS p_type	method_selectors		SEMI_COMA\n";
															method=InterfaceHelper::createNewMethod(symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text)),symbolTable,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),selectorsList,false);
																 selectorsList.clear();
																
																
															}
#line 2420 "yacc.cpp" /* glr.c:788  */
    break;

  case 116:
#line 651 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"p_type : OPEN_P type CLOSE_P\n";
																((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text);
																}
#line 2429 "yacc.cpp" /* glr.c:788  */
    break;

  case 117:
#line 660 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"method_selectors: selectors_list\n";
																	((*yyvalp).r.text)="";
																}
#line 2438 "yacc.cpp" /* glr.c:788  */
    break;

  case 118:
#line 664 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"method_selectors:IDENTIFIER \n";((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text);}
#line 2444 "yacc.cpp" /* glr.c:788  */
    break;

  case 119:
#line 666 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
													Streams::verbose()<<"selectors_list:	selectors_list selector_decleration\n";
																
													selectorsList.push_back(tselector);
													tselector=NULL;
											}
#line 2455 "yacc.cpp" /* glr.c:788  */
    break;

  case 120:
#line 672 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"selectors_list:	 selector_decleration\n";
												selectorsList.clear();

												selectorsList.push_back(tselector);
												tselector=NULL;
}
#line 2467 "yacc.cpp" /* glr.c:788  */
    break;

  case 121:
#line 680 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																				Streams::verbose()<<"selector_decleration:	IDENTIFIER	SEMI_COLUMN	parameter_list	\n";
																				tselector=new DeclerationSelector((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),selectorVarList);
																			}
#line 2476 "yacc.cpp" /* glr.c:788  */
    break;

  case 122:
#line 686 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"parameter_list: parameter_list parameter\n";
																	selectorVarList.push_back(var);		
											}
#line 2485 "yacc.cpp" /* glr.c:788  */
    break;

  case 123:
#line 690 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									selectorVarList.clear();
										selectorVarList.push_back(var);		
											
				 
														Streams::verbose()<<"parameter_list:  parameter\n";
						
					}
#line 2498 "yacc.cpp" /* glr.c:788  */
    break;

  case 124:
#line 699 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"parameter:  p_type IDENTIFIER\n";
																
																if(type!=NULL){
																var=new Variable((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),type);
																}
																else{
																Streams::verbose()<<"Error:Type not found.\n";
																}
																}
#line 2513 "yacc.cpp" /* glr.c:788  */
    break;

  case 125:
#line 712 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_implementation: class_implementation_header class_implementation_body\n";}
#line 2519 "yacc.cpp" /* glr.c:788  */
    break;

  case 126:
#line 715 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																	Streams::verbose()<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																	interface=InterfaceHelper::checkImplementation((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),symbolTable,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																	
																}
#line 2529 "yacc.cpp" /* glr.c:788  */
    break;

  case 127:
#line 720 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																interface=InterfaceHelper::checkImplementation((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),symbolTable,"");
																	
																}
#line 2538 "yacc.cpp" /* glr.c:788  */
    break;

  case 128:
#line 726 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																	Streams::verbose()<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";
																			InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														}
#line 2548 "yacc.cpp" /* glr.c:788  */
    break;

  case 129:
#line 732 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    { 
																	Streams::verbose()<<"class_implementation_body: instance_variables									AT_END\n";
																}
#line 2556 "yacc.cpp" /* glr.c:788  */
    break;

  case 130:
#line 735 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																	Streams::verbose()<<"class_implementation_body:						implementation_definition_list	AT_END\n";
																	InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														
																}
#line 2567 "yacc.cpp" /* glr.c:788  */
    break;

  case 131:
#line 741 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_implementation_body:	AT_END\n";}
#line 2573 "yacc.cpp" /* glr.c:788  */
    break;

  case 132:
#line 744 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	 methodsList.push_back(method);Streams::verbose()<<"implementation_definition_list: implementation_definition_list implementation_definition\n";}
#line 2579 "yacc.cpp" /* glr.c:788  */
    break;

  case 133:
#line 745 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	 methodsList.push_back(method);Streams::verbose()<<"implementation_definition_list: implementation_definition\n";}
#line 2585 "yacc.cpp" /* glr.c:788  */
    break;

  case 134:
#line 748 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"implementation_definition: class_implementation_definition	\n";}
#line 2591 "yacc.cpp" /* glr.c:788  */
    break;

  case 135:
#line 749 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"implementation_definition: instance_implementation_definition \n";}
#line 2597 "yacc.cpp" /* glr.c:788  */
    break;

  case 136:
#line 752 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"class_implementation_definition: class_implementation_definition_header block_body";
														functionNode->addNode(cscoop);
														functionNode=NULL;
																scoop=NULL;
															scoop=NULL;
													}
#line 2609 "yacc.cpp" /* glr.c:788  */
    break;

  case 137:
#line 761 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"class_implementation_definition_header: PLUS p_type		 method_selectors\n";
										method=InterfaceHelper:: createNewMethod(symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text)),symbolTable,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),selectorsList,true);
																 selectorsList.clear();
									           functionNode= ScoopHelper::createNewFunctionNode(method,interface->static_twin);
												scoop=functionNode;				
																
										}
#line 2622 "yacc.cpp" /* glr.c:788  */
    break;

  case 138:
#line 772 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
															Streams::verbose()<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";
														functionNode->addNode(cscoop);
														functionNode=NULL;
																scoop=NULL;
															scoop=NULL;
										
															}
#line 2635 "yacc.cpp" /* glr.c:788  */
    break;

  case 139:
#line 782 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											     Streams::verbose()<<"instance_implementation_definition_header:MINUS p_type		method_selectors\n";
												 method=InterfaceHelper:: createNewMethod(symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text)),symbolTable,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),selectorsList,false);
																 selectorsList.clear();
									           functionNode= ScoopHelper::createNewFunctionNode(method,interface);
												scoop=functionNode;
												}
#line 2647 "yacc.cpp" /* glr.c:788  */
    break;

  case 140:
#line 791 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												
												Streams::verbose()<<"block_body:OPEN_S  block_body_part \n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
												}
#line 2657 "yacc.cpp" /* glr.c:788  */
    break;

  case 141:
#line 798 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												
                                                scoop=ScoopHelper::createNewScoop(scoop);
												
												
												scoopVector.push_back(scoop);
												Streams::verbose()<<"block_body_header:OPEN_S	\n";
												((*yyvalp).r.node)=scoop;
												}
#line 2671 "yacc.cpp" /* glr.c:788  */
    break;

  case 142:
#line 810 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												cscoop=scoop;scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements:statement_list	CLOSE_S	\n";
												}
#line 2680 "yacc.cpp" /* glr.c:788  */
    break;

  case 143:
#line 814 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												cscoop=scoop;scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements:CLOSE_S\n";
												}
#line 2689 "yacc.cpp" /* glr.c:788  */
    break;

  case 144:
#line 818 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											  cscoop=scoop; scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements: error CLOSE_S\n";
												}
#line 2698 "yacc.cpp" /* glr.c:788  */
    break;

  case 145:
#line 824 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement_list: statement_list statement\n";
											((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text);
											scoop->addNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
											
											}
#line 2708 "yacc.cpp" /* glr.c:788  */
    break;

  case 146:
#line 829 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement_list: statement\n";
											((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text);
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											scoop->addNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
											
											}
#line 2719 "yacc.cpp" /* glr.c:788  */
    break;

  case 147:
#line 838 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: loop_statement\n";
											((*yyvalp).r.text)="loop";
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2728 "yacc.cpp" /* glr.c:788  */
    break;

  case 148:
#line 842 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: conditional_statement\n";
											((*yyvalp).r.text)="cond";
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2737 "yacc.cpp" /* glr.c:788  */
    break;

  case 149:
#line 846 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												Streams::verbose()<<"statement: expr\n";
												((*yyvalp).r.text)="expr";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
												//nodeXX=$<r.node>1;
											}
#line 2748 "yacc.cpp" /* glr.c:788  */
    break;

  case 150:
#line 852 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"statement: variable_declaration\n";
											
												ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
										    }
#line 2762 "yacc.cpp" /* glr.c:788  */
    break;

  case 151:
#line 861 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: block_body\n";((*yyvalp).r.text)=new char[256];((*yyvalp).r.text)[0]='\0';strcat(((*yyvalp).r.text),"Block");
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2770 "yacc.cpp" /* glr.c:788  */
    break;

  case 152:
#line 864 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: return_statement\n";
												((*yyvalp).r.text)="return";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2779 "yacc.cpp" /* glr.c:788  */
    break;

  case 153:
#line 868 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: try_catch\n";((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);}
#line 2785 "yacc.cpp" /* glr.c:788  */
    break;

  case 154:
#line 870 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
	                                            ((*yyvalp).r.text)="asm";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);}
#line 2793 "yacc.cpp" /* glr.c:788  */
    break;

  case 155:
#line 873 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
	 ((*yyvalp).r.text)="call";
	((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
	}
#line 2802 "yacc.cpp" /* glr.c:788  */
    break;

  case 156:
#line 877 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    { Streams::verbose()<<"statement: THROW\n";((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);}
#line 2808 "yacc.cpp" /* glr.c:788  */
    break;

  case 157:
#line 879 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    { Streams::verbose()<<"error SEMI_COMA \n";}
#line 2814 "yacc.cpp" /* glr.c:788  */
    break;

  case 158:
#line 882 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: THROW\n";
														((*yyvalp).r.node)=new ThrowNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node));
														}
#line 2822 "yacc.cpp" /* glr.c:788  */
    break;

  case 159:
#line 887 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"@asm command \n";
	                                         ((*yyvalp).r.node)=new AsmNode(scoop,*(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.string_val));
											 }
#line 2830 "yacc.cpp" /* glr.c:788  */
    break;

  case 160:
#line 893 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
														 ((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text);
														 ((*yyvalp).r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 2841 "yacc.cpp" /* glr.c:788  */
    break;

  case 161:
#line 899 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 ((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text);
														  ((*yyvalp).r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 2853 "yacc.cpp" /* glr.c:788  */
    break;

  case 162:
#line 906 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"variable_declaration:enum\n";}
#line 2859 "yacc.cpp" /* glr.c:788  */
    break;

  case 163:
#line 910 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"variable_list:variable_list COMMA variable\n";}
#line 2865 "yacc.cpp" /* glr.c:788  */
    break;

  case 164:
#line 911 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"variable_list:variable\n";
										
										}
#line 2873 "yacc.cpp" /* glr.c:788  */
    break;

  case 165:
#line 914 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ',' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2879 "yacc.cpp" /* glr.c:788  */
    break;

  case 166:
#line 917 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose() <<"variable:  IDENTIFIER array_tag initializer \n";
											 var=new Array((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),arrayAlloc.size(),NULL);
											(dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
											 arrayList.push_back( ( dynamic_cast<Array*>(var)));
											 arrayAlloc.clear();
											}
#line 2891 "yacc.cpp" /* glr.c:788  */
    break;

  case 167:
#line 924 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    { 
											Streams::verbose() <<"variable:  IDENTIFIER main_initializer \n";
											idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text)) ;
											IdentifierNode* identifierNode=new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),scoop);
											if((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node)!=NULL){
											(dynamic_cast<AssignNode*>((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node)))->setLeftExp(identifierNode);
											}
											declarationList.push_back(make_pair((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node)));
											}
#line 2905 "yacc.cpp" /* glr.c:788  */
    break;

  case 168:
#line 933 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2911 "yacc.cpp" /* glr.c:788  */
    break;

  case 169:
#line 936 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"return_statement: RETURN expr\n";
												 ((*yyvalp).r.node)=new ReturnNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),method);
												}
#line 2919 "yacc.cpp" /* glr.c:788  */
    break;

  case 170:
#line 941 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"loop_statement: for_loop\n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2927 "yacc.cpp" /* glr.c:788  */
    break;

  case 171:
#line 944 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"loop_statement: while_loop\n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2935 "yacc.cpp" /* glr.c:788  */
    break;

  case 172:
#line 947 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"loop_statement: do_while_loop\n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2943 "yacc.cpp" /* glr.c:788  */
    break;

  case 173:
#line 952 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"do_while: do_header   statement   while_loop_header   SEMI_COMMA\n";
													((*yyvalp).r.node)=new DoWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),scoop);
													}
#line 2951 "yacc.cpp" /* glr.c:788  */
    break;

  case 174:
#line 957 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"do_header: DO\n";}
#line 2957 "yacc.cpp" /* glr.c:788  */
    break;

  case 175:
#line 960 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop: for_loop_header statement\n";
												type=symbolTable->getType("int");
											if(type==NULL){
											  	string error="Unknown type name '";
												error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text));
												error.append("'.");
												Program::addError(new SemanticError(error));
											}	
											ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												(dynamic_cast<ForNode*>((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node)))->setStatement((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
												(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node)->toString();
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
											}
#line 2978 "yacc.cpp" /* glr.c:788  */
    break;

  case 176:
#line 979 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer	SEMI_COMA logic_expr1 SEMI_COMA expr			CLOSE_P\n";
										((*yyvalp).r.node)=new ForNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),NULL,scoop);
										//nodeXX=$<r.node>5;
										}
#line 2987 "yacc.cpp" /* glr.c:788  */
    break;

  case 177:
#line 985 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr1 SEMI_COMA expr			CLOSE_P\n";
										((*yyvalp).r.node)=new ForNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),NULL,scoop);
										}
#line 2995 "yacc.cpp" /* glr.c:788  */
    break;

  case 178:
#line 989 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P\n";
										((*yyvalp).r.node)=new ForNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.node),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),NULL,scoop);
										}
#line 3003 "yacc.cpp" /* glr.c:788  */
    break;

  case 179:
#line 993 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr1 SEMI_COMA				CLOSE_P	\n";
										((*yyvalp).r.node)=new ForNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),NULL,NULL,scoop);
										}
#line 3011 "yacc.cpp" /* glr.c:788  */
    break;

  case 180:
#line 998 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	\n";
										((*yyvalp).r.node)=new ForNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),NULL,NULL,NULL,scoop);
										}
#line 3019 "yacc.cpp" /* glr.c:788  */
    break;

  case 181:
#line 1002 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr1 SEMI_COMA				CLOSE_P\n";
										((*yyvalp).r.node)=new ForNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),NULL,NULL,scoop);
										}
#line 3027 "yacc.cpp" /* glr.c:788  */
    break;

  case 182:
#line 1006 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P";
										((*yyvalp).r.node)=new ForNode(NULL,NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),NULL,scoop);
										}
#line 3035 "yacc.cpp" /* glr.c:788  */
    break;

  case 183:
#line 1011 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_hearder: FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	\n";
											((*yyvalp).r.node)=new ForNode(NULL,NULL,NULL,NULL,scoop);
											}
#line 3043 "yacc.cpp" /* glr.c:788  */
    break;

  case 184:
#line 1016 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_initializer: INT IDENTIFIER EQUAL expr\n";
											AssignNode * temp=new AssignNode(scoop,new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),scoop),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
											
											//temp->add($<r.text>2,);
											
											//temp.push_back(make_pair($<r.text>2,$<r.node>4));
											DeclerationNode* temp1=new DeclerationNode(list<pair<string,Node*>>(),scoop,"int");
											temp1->add((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),temp);
										 ((*yyvalp).r.node)=temp1; 
										 idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text));
										}
#line 3059 "yacc.cpp" /* glr.c:788  */
    break;

  case 185:
#line 1027 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_initializer: IDENTIFIER EQUAL expr\n";
										((*yyvalp).r.node)=new AssignNode(scoop,new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),scoop),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
										}
#line 3067 "yacc.cpp" /* glr.c:788  */
    break;

  case 186:
#line 1030 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_initializer: IDENTIFIER\n";
										((*yyvalp).r.node)=new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),scoop);
										}
#line 3075 "yacc.cpp" /* glr.c:788  */
    break;

  case 187:
#line 1035 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr AND! expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),AND_AND,scoop);
										}
#line 3083 "yacc.cpp" /* glr.c:788  */
    break;

  case 188:
#line 1038 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:logic_expr OR_OR logic_expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),OR_OR,scoop);
										}
#line 3091 "yacc.cpp" /* glr.c:788  */
    break;

  case 189:
#line 1041 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
										
										}
#line 3099 "yacc.cpp" /* glr.c:788  */
    break;

  case 190:
#line 1047 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr LESS_THAN expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),LESS_THAN,scoop);
										}
#line 3107 "yacc.cpp" /* glr.c:788  */
    break;

  case 191:
#line 1050 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr MORE_THAN expr\n";
										 ((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),MORE_THAN,scoop);
										}
#line 3115 "yacc.cpp" /* glr.c:788  */
    break;

  case 192:
#line 1053 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr LESS_OR_EQUAL expr\n";
										 ((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),LESS_OR_EQUAL,scoop);
										}
#line 3123 "yacc.cpp" /* glr.c:788  */
    break;

  case 193:
#line 1056 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr MORE_OR_EQUAL expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),MORE_OR_EQUAL,scoop);
										}
#line 3131 "yacc.cpp" /* glr.c:788  */
    break;

  case 194:
#line 1059 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr EQUAL_EQUAL expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),EQUAL_EQUAL,scoop);
										}
#line 3139 "yacc.cpp" /* glr.c:788  */
    break;

  case 195:
#line 1062 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr EQUAL_EQUAL expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),NOT_EQUAL,scoop);
										}
#line 3147 "yacc.cpp" /* glr.c:788  */
    break;

  case 196:
#line 1065 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:NOT_EQUAL expr\n";
										 ((*yyvalp).r.node)=new UnaryNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),NOT_EQUAL);
										}
#line 3155 "yacc.cpp" /* glr.c:788  */
    break;

  case 197:
#line 1068 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";
										 ((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
										}
#line 3163 "yacc.cpp" /* glr.c:788  */
    break;

  case 198:
#line 1072 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:TRUE\n";
										 ((*yyvalp).r.node)=new ConstantNode(true,scoop);
										}
#line 3171 "yacc.cpp" /* glr.c:788  */
    break;

  case 199:
#line 1075 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:FALSE\n";
											 ((*yyvalp).r.node)=new ConstantNode(false,scoop);
										}
#line 3179 "yacc.cpp" /* glr.c:788  */
    break;

  case 200:
#line 1078 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:long id\n";
											 ((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
										}
#line 3187 "yacc.cpp" /* glr.c:788  */
    break;

  case 201:
#line 1084 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"expr:assign_expr\n";
										 ((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
										}
#line 3195 "yacc.cpp" /* glr.c:788  */
    break;

  case 202:
#line 1087 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"expr:simple_expr\n";
										((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
										}
#line 3203 "yacc.cpp" /* glr.c:788  */
    break;

  case 203:
#line 1092 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"assign_expr:long_id EQUAL simple_expr\n";
										//LongIdHelper::checkIdenentifier( scoop, interface,"set1");
										((*yyvalp).r.node)=new AssignNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
										}
#line 3213 "yacc.cpp" /* glr.c:788  */
    break;

  case 204:
#line 1099 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"long_id: long_id.IDENTIFIER\n";
																((*yyvalp).r.node)=new DotNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));

											;}
#line 3222 "yacc.cpp" /* glr.c:788  */
    break;

  case 205:
#line 1103 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												Streams::verbose()<<"long_id: long_id.message_call\n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 3231 "yacc.cpp" /* glr.c:788  */
    break;

  case 206:
#line 1107 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																LongIdHelper::addIdentifier((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text)); 
																((*yyvalp).r.node)=new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),scoop);
																Streams::verbose()<<"long_id:IDENTIFIER :"<<(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text)<<"\n";
															   }
#line 3241 "yacc.cpp" /* glr.c:788  */
    break;

  case 207:
#line 1112 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"long_id: long_id.array_access\n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 3250 "yacc.cpp" /* glr.c:788  */
    break;

  case 208:
#line 1120 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
							Streams::verbose()<<"array_access: details\n";

							((*yyvalp).r.node)=new ArrayAccessNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),scoop);

						}
#line 3261 "yacc.cpp" /* glr.c:788  */
    break;

  case 209:
#line 1129 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"simple_expr:STRING_VAL\n";
									((*yyvalp).r.node)=new ConstantNode(*((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.string_val)),scoop);
									Streams::verbose()<<"node typr"<<((*yyvalp).r.node)->generateType()->get_name()<<"\n";
									((*yyvalp).r.string_val)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.string_val);
									}
#line 3272 "yacc.cpp" /* glr.c:788  */
    break;

  case 210:
#line 1135 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									Streams::verbose()<<"simple_expr:INT_VAL\n";
									((*yyvalp).r.node)=new ConstantNode(yylval.r.int_val,scoop);
									isconst=1;
									
									}
#line 3283 "yacc.cpp" /* glr.c:788  */
    break;

  case 211:
#line 1141 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									Streams::verbose()<<"simple_expr:NULL\n";
									((*yyvalp).r.node)=new NullNode(scoop);
									isconst=1;
									
									}
#line 3294 "yacc.cpp" /* glr.c:788  */
    break;

  case 212:
#line 1147 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:FLOAT_VAL\n";
									((*yyvalp).r.node)=new ConstantNode(yylval.r.float_val,scoop);
										isconst=1;
									}
#line 3303 "yacc.cpp" /* glr.c:788  */
    break;

  case 213:
#line 1151 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:CHAR_VAL\n";
										((*yyvalp).r.node)=new ConstantNode(yylval.r.char_val,scoop);
									}
#line 3311 "yacc.cpp" /* glr.c:788  */
    break;

  case 214:
#line 1154 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:long_id\n";
									((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
									}
#line 3319 "yacc.cpp" /* glr.c:788  */
    break;

  case 215:
#line 1157 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"simple_expr:expr PLUS expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),PLUS,scoop);
									}
#line 3328 "yacc.cpp" /* glr.c:788  */
    break;

  case 216:
#line 1161 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"simple_expr:expr MINUS expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),MINUS,scoop);
									}
#line 3337 "yacc.cpp" /* glr.c:788  */
    break;

  case 217:
#line 1165 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:expr MULTI expr\n";
											((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),MULTI,scoop);
									}
#line 3345 "yacc.cpp" /* glr.c:788  */
    break;

  case 218:
#line 1168 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									Streams::verbose()<<"simple_expr:expr DIV expr\n";
									((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),DIV,scoop);
									}
#line 3354 "yacc.cpp" /* glr.c:788  */
    break;

  case 219:
#line 1172 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									Streams::verbose()<<"simple_expr:expr DIV expr\n";
									((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),DIV_R,scoop);
									}
#line 3363 "yacc.cpp" /* glr.c:788  */
    break;

  case 220:
#line 1176 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:OPEN_P expr CLOSE_P\n";((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);}
#line 3369 "yacc.cpp" /* glr.c:788  */
    break;

  case 221:
#line 1177 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:ID++";}
#line 3375 "yacc.cpp" /* glr.c:788  */
    break;

  case 222:
#line 1178 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:ID--";}
#line 3381 "yacc.cpp" /* glr.c:788  */
    break;

  case 223:
#line 1179 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:++ID";}
#line 3387 "yacc.cpp" /* glr.c:788  */
    break;

  case 224:
#line 1180 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:--ID";}
#line 3393 "yacc.cpp" /* glr.c:788  */
    break;

  case 225:
#line 1181 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"expr:p_type expr\n";
																if(type!=NULL)
																((*yyvalp).r.node)=new CastNode(scoop,type,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
															}
#line 3403 "yacc.cpp" /* glr.c:788  */
    break;

  case 226:
#line 1188 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {		
			Streams::verbose()<<"message_call2\n";
			if(callNode==NULL)
			callNode=new CallNode(scoop);
			else 
			{
			callNodeStack.push(callNode);
			callNode=new CallNode(scoop);
			}
			Streams::verbose()<<"mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm";
			}
#line 3419 "yacc.cpp" /* glr.c:788  */
    break;

  case 227:
#line 1201 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												Streams::verbose()<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";
												callNode->setMessage((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text));
												((*yyvalp).r.node)=callNode;
												callNode=NULL;
														if(callNodeStack.size()!=0){
														callNode=callNodeStack.top();
														callNodeStack.pop();
														}
												}
#line 3434 "yacc.cpp" /* glr.c:788  */
    break;

  case 228:
#line 1213 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"sender: message_call\n";
											
											callNode->setSender((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
											 ((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											 
											}
#line 3445 "yacc.cpp" /* glr.c:788  */
    break;

  case 229:
#line 1219 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"sender: IDENTIFIER\n";
											((*yyvalp).r.node)=new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),scoop);
											
											//callNode=new CallNode(scoop);
											
											callNode->setSender(((*yyvalp).r.node));
											
											}
#line 3458 "yacc.cpp" /* glr.c:788  */
    break;

  case 230:
#line 1229 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"message: IDENTIFIER\n";
											((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text);
												
											}
#line 3467 "yacc.cpp" /* glr.c:788  */
    break;

  case 231:
#line 1233 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"message_selectors_list\n";
											//$<r.node>$=$<r.text>1;
											((*yyvalp).r.text)="";
											}
#line 3477 "yacc.cpp" /* glr.c:788  */
    break;

  case 232:
#line 1240 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"message_selectors_list:message_selectors_list message_selector \n";
												callNode->addSelector(cselector);
											cselector=NULL;
												}
#line 3487 "yacc.cpp" /* glr.c:788  */
    break;

  case 233:
#line 1245 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	callNode->addSelector(cselector);
							cselector=NULL;
								Streams::verbose()<<"message_selectors_list: message_selector\n";
											
		}
#line 3497 "yacc.cpp" /* glr.c:788  */
    break;

  case 234:
#line 1251 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									cselector->name=(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text);
							}
#line 3505 "yacc.cpp" /* glr.c:788  */
    break;

  case 235:
#line 1255 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"argument_list: argument_list argument\n";
												cselector->addArg((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));}
#line 3512 "yacc.cpp" /* glr.c:788  */
    break;

  case 236:
#line 1257 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"argument_list: argument\n";
												cselector=new CallSelector("");
											cselector->addArg((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));}
#line 3520 "yacc.cpp" /* glr.c:788  */
    break;

  case 237:
#line 1262 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"argument: SEMI_COLUMN expr\n";
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											//callNode->addArgument($<r.node>1,"");
											
											}
#line 3531 "yacc.cpp" /* glr.c:788  */
    break;

  case 238:
#line 1270 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"while_loop:while_loop_header statement\n";
											 ((*yyvalp).r.node)=new WhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),scoop);
										}
#line 3540 "yacc.cpp" /* glr.c:788  */
    break;

  case 239:
#line 1276 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
											}
#line 3548 "yacc.cpp" /* glr.c:788  */
    break;

  case 240:
#line 1281 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"conditional_statement: if_header statement\n";
												 ((*yyvalp).r.node)=new IfNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),scoop,NULL);
												}
#line 3556 "yacc.cpp" /* glr.c:788  */
    break;

  case 241:
#line 1284 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												Streams::verbose()<<"conditional_statement: if_header statement with else\n";
												 ((*yyvalp).r.node)=new IfNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),scoop,new ElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),scoop));
												}
#line 3565 "yacc.cpp" /* glr.c:788  */
    break;

  case 242:
#line 1288 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"conditional_statement: switch_header switch_body statement\n";
											((*yyvalp).r.node)=tempSwitch;
										}
#line 3573 "yacc.cpp" /* glr.c:788  */
    break;

  case 243:
#line 1293 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
											}
#line 3581 "yacc.cpp" /* glr.c:788  */
    break;

  case 244:
#line 1298 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"switch_header: SWITCH OPEN_P IDENTIFIER CLOSE_P\n";
										
										tempSwitch->setExpr(new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),scoop));
									}
#line 3590 "yacc.cpp" /* glr.c:788  */
    break;

  case 245:
#line 1304 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {scoop=new ScoopNode(scoop);tempSwitch=new SwitchNode(NULL,std::list<pair<Node*,Node*>>(),scoop);}
#line 3596 "yacc.cpp" /* glr.c:788  */
    break;

  case 246:
#line 1307 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3602 "yacc.cpp" /* glr.c:788  */
    break;

  case 247:
#line 1308 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3608 "yacc.cpp" /* glr.c:788  */
    break;

  case 248:
#line 1309 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3614 "yacc.cpp" /* glr.c:788  */
    break;

  case 249:
#line 1310 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3620 "yacc.cpp" /* glr.c:788  */
    break;

  case 250:
#line 1313 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3626 "yacc.cpp" /* glr.c:788  */
    break;

  case 251:
#line 1314 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3632 "yacc.cpp" /* glr.c:788  */
    break;

  case 252:
#line 1317 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node));}
#line 3638 "yacc.cpp" /* glr.c:788  */
    break;

  case 253:
#line 1318 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));}
#line 3644 "yacc.cpp" /* glr.c:788  */
    break;

  case 254:
#line 1319 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),NULL);}
#line 3650 "yacc.cpp" /* glr.c:788  */
    break;

  case 255:
#line 1322 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node));}
#line 3656 "yacc.cpp" /* glr.c:788  */
    break;

  case 256:
#line 1323 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));}
#line 3662 "yacc.cpp" /* glr.c:788  */
    break;

  case 257:
#line 1324 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node));}
#line 3668 "yacc.cpp" /* glr.c:788  */
    break;

  case 258:
#line 1326 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"protocol: protocol_header protocol_body\n";
										idsList.clear();
										methodsList.clear();
										method=NULL;
										}
#line 3679 "yacc.cpp" /* glr.c:788  */
    break;

  case 259:
#line 1334 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
								Streams::verbose()<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";
								protocol=ProtocolHelper ::createNewProtocol((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),symbolTable );
								
								}
#line 3689 "yacc.cpp" /* glr.c:788  */
    break;

  case 260:
#line 1341 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
								Streams::verbose()<<"protocol_body:	protocol_reference_list interface_declaration_list	AT_END\n";
								ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								idsList.clear();
								}
#line 3701 "yacc.cpp" /* glr.c:788  */
    break;

  case 261:
#line 1349 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
								Streams::verbose()<<"protocol_body:	interface_declaration_list	AT_END\n";
									
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								
								}
#line 3713 "yacc.cpp" /* glr.c:788  */
    break;

  case 262:
#line 1357 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
								Streams::verbose()<<"protocol_body:	protocol_reference_list AT_END	\n";
											ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								idsList.clear();
								}
#line 3723 "yacc.cpp" /* glr.c:788  */
    break;

  case 263:
#line 1363 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"protocol_body:	AT_END\n";}
#line 3729 "yacc.cpp" /* glr.c:788  */
    break;

  case 264:
#line 1365 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"enum: ENUM IDENTIFIER  OPEN_S list_expr CLOSE_S SEMI_COMA  \n";
																
																EnumHelper::createNewEnum( (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.text),idsList, symbolTable);
																idsList.clear();
															 }
#line 3740 "yacc.cpp" /* glr.c:788  */
    break;

  case 265:
#line 1371 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"enum: ENUM IDENTIFIER SEMI_COMA\n";
																EnumHelper::createNewEnum( (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),idsList, symbolTable);
															  }
#line 3749 "yacc.cpp" /* glr.c:788  */
    break;

  case 266:
#line 1378 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												Streams::verbose()<<"list_expr:IDENTIFIER EQUAL expr COMMA list_expr\n";
												idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.text));
													((*yyvalp).r.node)=new AssignNode(scoop,new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.text),scoop),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node));
												}
#line 3759 "yacc.cpp" /* glr.c:788  */
    break;

  case 267:
#line 1383 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												Streams::verbose()<<"list_expr:IDENTIFIER EQUAL expr\n";
												idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text));
												((*yyvalp).r.node)=new AssignNode(scoop,new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),scoop),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
												}
#line 3769 "yacc.cpp" /* glr.c:788  */
    break;

  case 268:
#line 1388 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
													Streams::verbose()<<"list_expr:IDENTIFIER \n";
													idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
													//??
												}
#line 3779 "yacc.cpp" /* glr.c:788  */
    break;

  case 269:
#line 1393 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												  Streams::verbose()<<"list_expr:IDENTIFIER  COMMA list_expr \n";
												  idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text));
												  //??
												}
#line 3789 "yacc.cpp" /* glr.c:788  */
    break;

  case 270:
#line 1400 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												  Streams::verbose()<<"try_catch:TRY statement catch_list finally_statement \n";
												}
#line 3797 "yacc.cpp" /* glr.c:788  */
    break;

  case 271:
#line 1404 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {		
	((*yyvalp).r.node)=new TryNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),dynamic_cast<CatchNode*>((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node)))		;		  
								Streams::verbose()<<"try_catch:TRY statement catch_list \n";
							  }
#line 3806 "yacc.cpp" /* glr.c:788  */
    break;

  case 272:
#line 1410 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"catch_list:one_catch \n";((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
													}
#line 3813 "yacc.cpp" /* glr.c:788  */
    break;

  case 273:
#line 1412 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"catch_list:catch_list CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
												dynamic_cast<CatchNode*>(((*yyvalp).r.node))->next=dynamic_cast<CatchNode*>((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node));
												}
#line 3822 "yacc.cpp" /* glr.c:788  */
    break;

  case 274:
#line 1417 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"catch_list:CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);dynamic_cast<CatchNode*>(((*yyvalp).r.node))->_statement=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);	}
#line 3829 "yacc.cpp" /* glr.c:788  */
    break;

  case 275:
#line 1421 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    { ((*yyvalp).r.node)=new CatchNode(scoop,type,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text));Streams::verbose()<<"now";}
#line 3835 "yacc.cpp" /* glr.c:788  */
    break;


#line 3839 "yacc.cpp" /* glr.c:788  */
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
                &yys->yysemantics.yysval);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YYFPRINTF (stderr, "%s unresolved ", yymsg);
          else
            YYFPRINTF (stderr, "%s incomplete ", yymsg);
          yy_symbol_print (stderr, yystos[yys->yylrState],
                           YY_NULL);
          YYFPRINTF (stderr, "\n");
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-315)))

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yytable_value) \
  0

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
                int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yypact_value_is_default (yypact[yystate])
      || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yylhs)
{
  int yyr = yypgoto[yylhs - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yylhs - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULL;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULL;
  yystackp->yylastDeleted = YY_NULL;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yynewSize;
  size_t yyn;
  size_t yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULL)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULL)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULL)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULL)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULL)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                 yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULL)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULL && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULL)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULL;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULL || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULL;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULL)
        {
          if (yyi == yyj)
            {
              YYDPRINTF ((stderr, "Removing dead stacks.\n"));
            }
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            {
              YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
                          (unsigned long int) yyi, (unsigned long int) yyj));
            }
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
            size_t yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
                 size_t yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULL;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print Args;               \
} while (0)

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (int yynormal, yyGLRStackItem* yyvsp, size_t yyk,
                 yyRuleNum yyrule)
{
  int yynrhs = yyrhsLength (yyrule);
  int yyi;
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
             (unsigned long int) yyk, yyrule - 1,
             (unsigned long int) yyrline[yyrule]);
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyvsp[yyi - yynrhs + 1].yystate.yylrState],
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yysval
                                              );
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YYFPRINTF (stderr, " (unresolved)");
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULL)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      YY_REDUCE_PRINT ((1, yyrhs, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp,
                           yyvalp);
    }
  else
    {
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      YY_REDUCE_PRINT ((0, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULL)
    {
      YYRESULTTAG yyflag;
      YYSTYPE yysval;

      yyflag = yydoAction (yystackp, yyk, yyrule, &yysval);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULL)
        {
          YYDPRINTF ((stderr, "Parse on stack %lu rejected by rule #%d.\n",
                     (unsigned long int) yyk, yyrule - 1));
        }
      if (yyflag != yyok)
        return yyflag;
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
                  "Reduced stack %lu by rule #%d; action deferred.  "
                  "Now in state %d.\n",
                  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULL)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
                                (unsigned long int) yyk,
                                (unsigned long int) yyi));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == YY_NULL)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = YY_NULL;

      if (yystackp->yytops.yycapacity
          > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
        (yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
                                  (yystackp->yytops.yycapacity
                                   * sizeof yynewStates[0]));
      if (yynewStates == YY_NULL)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
        (yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                             (yystackp->yytops.yycapacity
                              * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == YY_NULL)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULL)
                break;
              else if (*yyz0p == YY_NULL)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULL)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
               (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]));
          else
            YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]),
                       (unsigned long int) (yystates[yyi-1]->yyposn + 1),
                       (unsigned long int) yystates[yyi]->yyposn);
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULL; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YYASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULL; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yystos[yys->yylrState],
                                &yysval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULL;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULL)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULL)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULL;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULL;
  yystackp->yylastDeleted = YY_NULL;

  while (yyr != YY_NULL)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
                   size_t yyposn)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULL)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
                  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule]);
          if (yyflag == yyerr)
            {
              YYDPRINTF ((stderr,
                          "Stack %lu dies "
                          "(predicate failure or explicit user error).\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yySymbol yytoken;
          int yyaction;
          const short int* yyconflicts;

          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
          if (yychar == YYEMPTY)
            {
              YYDPRINTF ((stderr, "Reading a token: "));
              yychar = yylex ();
            }

          if (yychar <= YYEOF)
            {
              yychar = yytoken = YYEOF;
              YYDPRINTF ((stderr, "Now at end of input.\n"));
            }
          else
            {
              yytoken = YYTRANSLATE (yychar);
              YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
            }

          yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

          while (*yyconflicts != 0)
            {
              YYRESULTTAG yyflag;
              size_t yynewStack = yysplitStack (yystackp, yyk);
              YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
                          (unsigned long int) yynewStack,
                          (unsigned long int) yyk));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts]);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn));
              else if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr, "Stack %lu dies.\n",
                              (unsigned long int) yynewStack));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
              yyconflicts += 1;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction]);
              if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr,
                              "Stack %lu dies "
                              "(predicate failure or explicit user error).\n",
                              (unsigned long int) yyk));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
#if ! YYERROR_VERBOSE
  yyerror (YY_("syntax error"));
#else
  {
  yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
  size_t yysize0 = yytnamerr (YY_NULL, yytokenName (yytoken));
  size_t yysize = yysize0;
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULL;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected").  */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      yyarg[yycount++] = yytokenName (yytoken);
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for this
             state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;
          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytokenName (yyx);
                {
                  size_t yysz = yysize + yytnamerr (YY_NULL, yytokenName (yyx));
                  yysize_overflow |= yysz < yysize;
                  yysize = yysz;
                }
              }
        }
    }

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  {
    size_t yysz = yysize + strlen (yyformat);
    yysize_overflow |= yysz < yysize;
    yysize = yysz;
  }

  if (!yysize_overflow)
    yymsg = (char *) YYMALLOC (yysize);

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
          if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
            {
              yyp += yytnamerr (yyp, yyarg[yyi++]);
              yyformat += 2;
            }
          else
            {
              yyp++;
              yyformat++;
            }
        }
      yyerror (yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yySymbol yytoken;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULL);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
          }
        YYDPRINTF ((stderr, "Reading a token: "));
        yychar = yylex ();
        if (yychar <= YYEOF)
          {
            yychar = yytoken = YYEOF;
            YYDPRINTF ((stderr, "Now at end of input.\n"));
          }
        else
          {
            yytoken = YYTRANSLATE (yychar);
            YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
          }
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != YY_NULL)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, YY_NULL);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULL)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYTERROR;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yytable[yyj],
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULL)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULL)
    yyFail (yystackp, YY_NULL);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode */
      while (yytrue)
        {
          yyRuleNum yyrule;
          int yyaction;
          const short int* yyconflicts;

          yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
          YYDPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yySymbol yytoken;
              if (yychar == YYEMPTY)
                {
                  YYDPRINTF ((stderr, "Reading a token: "));
                  yychar = yylex ();
                }

              if (yychar <= YYEOF)
                {
                  yychar = yytoken = YYEOF;
                  YYDPRINTF ((stderr, "Now at end of input.\n"));
                }
              else
                {
                  yytoken = YYTRANSLATE (yychar);
                  YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
                }

              yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
              if (*yyconflicts != 0)
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      while (yytrue)
        {
          yySymbol yytoken_to_shift;
          size_t yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));

              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              int yyaction;
              const short int* yyconflicts;
              yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
              yygetLRActions (yystate, yytoken_to_shift, &yyaction,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
                          (unsigned long int) yys,
                          yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          size_t yysize = yystack.yytops.yysize;
          size_t yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                  if (yys->yypred != YY_NULL)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULL)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)                                                         \
    ((YYX) == YY_NULL ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
        {
          YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
                     yyp->yystate.yyresolved, yyp->yystate.yylrState,
                     (unsigned long int) yyp->yystate.yyposn,
                     (long int) YYINDEX (yyp->yystate.yypred));
          if (! yyp->yystate.yyresolved)
            YYFPRINTF (stderr, ", firstVal: %ld",
                       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
        }
      else
        {
          YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
                     yyp->yyoption.yyrule - 1,
                     (long int) YYINDEX (yyp->yyoption.yystate),
                     (long int) YYINDEX (yyp->yyoption.yynext));
        }
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
               (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif

#undef yylval
#undef yychar
#undef yynerrs



#line 1426 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:2549  */

void yyerror(const char *s) {

Program::addError(new SyntaxError(s));

	//fprintf (stderr, "%s\n", s);
	
}

int yylex(){
	return lexer->yylex();

}
void main(int argc,      // Number of strings in array argv
          char *argv[]){
  //yydebug=1;
	 	string input = "code.txt";
		dir_path="";
	bool f = true;
	Garbage_Collect=1;
	   for(int i = 0; i < argc; i++) 
		{
			if(string(argv[i])=="-o")
			{
				if(i+1<argc)
				{
						  ofs=std::ofstream(string(argv[i+1]), std::ofstream::out);
				}	
			}
			if (string(argv[i]) == "-i")
			{
				if (i + 1<argc)
				{
				//	ofs = std::ofstream(string(argv[i]), std::ofstream::out);
					input = string(argv[i+1]);
					addFile(input);
					f = false;
				}
			}
	    	if (string(argv[i]) == "-gc")
			{
					Garbage_Collect=1;

			}
			if (string(argv[i])=="-d")
			{
			        dir_path=string(argv[i+1]);
			}

		}
	globalScoop=new ScoopNode(NULL);
	globalScoop->setOffsetRegister("gp");

	addFile("nsobject.oc");

	addFile("system.oc");
	if (f)
	{
		addFile(input);
	}
	
	for(int i=0;i<sfiles.size();i++)
		{
	    string sf=sfiles[i];
		lineNum=colNum=1;
		sourceFile=sf;
		ifstream inf(sf);
		lexer = new yyFlexLexer(&inf);
		Parser* p = new Parser();
		p->parse();
	}
		if(!symbolTable->checkInhertanceLoop()){
			cout<<"inherit loop detected, can't recover\n";
			Program::printErrors();
			return ;
		}
			MIPS_ASM::add_data("\nblock_head:    .byte   0:8\n");
	MIPS_ASM::add_data("\nalign_to:  .word 4\n");
		symbolTable->generateStatics();
		symbolTable->generateCode();
	ofs<<".data\n";
	MIPS_ASM::add_data("\nnewline: .asciiz \"\\n\"\n");

	
	MIPS_ASM::writeData();
		ofs<<"\n.text\n";

	ofs<<".globl main\n";
		ofs<<"main:\n";
	
	
	MIPS_ASM::writeCode();
	std::ifstream t_common("common.asm");
std::string str_common((std::istreambuf_iterator<char>(t_common)),
                 std::istreambuf_iterator<char>());
	ofs<<str_common<<"\n";

	Iskernal=1;
	symbolTable->generateKernalCode();

		ofs<<".ktext 0x80000180\n";

 t_common =	std::ifstream("exception.asm");
 str_common=string((std::istreambuf_iterator<char>(t_common)),
                 std::istreambuf_iterator<char>());
	ofs<<str_common<<"\n";
	MIPS_ASM::writeCode();

	MIPS_ASM::add_data("msg:   .asciiz \"Trap generated \\n\"\n");
	MIPS_ASM::add_data("ure_msg:   .asciiz \"unhandled runtime error \\n\"\n");
	ofs<<".kdata\n";
	MIPS_ASM::writeData();
		Program::printErrors();

}
