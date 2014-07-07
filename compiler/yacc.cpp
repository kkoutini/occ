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
				#include "DotNode.h"
				#include "ArrayAccessNode.h"

				
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
	
extern int lineNum;
extern int colNum;
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

#line 161 "yacc.cpp" /* glr.c:207  */

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

#line 189 "yacc.cpp" /* glr.c:230  */

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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   896

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  272
/* YYNRULES -- Number of states.  */
#define YYNSTATES  496
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 8
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   213,   213,   216,   217,   218,   220,   221,   222,   223,
     224,   226,   235,   240,   245,   246,   248,   250,   256,   260,
     265,   270,   274,   276,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   294,   301,   304,   308,   313,   314,
     318,   319,   320,   321,   322,   323,   326,   327,   330,   331,
     332,   335,   338,   346,   357,   358,   359,   364,   367,   370,
     374,   378,   382,   383,   386,   392,   393,   394,   396,   404,
     411,   415,   421,   422,   423,   424,   425,   426,   427,   428,
     431,   432,   433,   437,   438,   439,   440,   444,   453,   464,
     473,   484,   493,   501,   509,   517,   525,   535,   546,   551,
     555,   556,   559,   563,   569,   572,   574,   579,   584,   590,
     598,   599,   603,   611,   612,   615,   624,   633,   637,   639,
     645,   653,   659,   663,   672,   685,   688,   693,   699,   705,
     708,   714,   717,   718,   721,   722,   725,   734,   745,   755,
     764,   771,   783,   787,   791,   797,   802,   811,   815,   819,
     825,   834,   837,   841,   843,   846,   850,   852,   855,   860,
     866,   872,   879,   883,   884,   887,   890,   897,   906,   909,
     914,   917,   920,   925,   930,   933,   951,   957,   961,   965,
     970,   974,   978,   983,   989,  1000,  1003,  1008,  1011,  1014,
    1020,  1023,  1026,  1029,  1032,  1035,  1038,  1041,  1045,  1048,
    1051,  1057,  1060,  1065,  1072,  1076,  1080,  1085,  1093,  1102,
    1108,  1112,  1115,  1118,  1121,  1125,  1129,  1132,  1136,  1137,
    1138,  1139,  1140,  1141,  1148,  1161,  1173,  1179,  1189,  1193,
    1200,  1205,  1211,  1215,  1217,  1222,  1230,  1236,  1241,  1244,
    1248,  1253,  1258,  1264,  1267,  1268,  1269,  1270,  1273,  1274,
    1277,  1278,  1279,  1282,  1283,  1284,  1286,  1294,  1300,  1308,
    1316,  1322,  1325,  1331,  1338,  1343,  1348,  1353,  1360,  1364,
    1369,  1370,  1373
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
  "DIV", "WHILE", "IF", "DO", "SWITCH", "CASE", "DEFAULT", "BREAK", "ENUM",
  "OPEN_ARR", "CLOSE_ARR", "TRUE", "FALSE", "RETURN", "AT_PROTOCOL",
  "ELSE", "STRUCT", "DOT", "DOUBLEPLUS", "DOUBLEMINUS", "TRY", "CATCH",
  "THROW", "FINALLY", "AT_ASM", "SELF", "IMPORT", "if_h", "expr_1",
  "p_type_expr_prec", "long_id_prec", "try_prec", "$accept", "program",
  "components", "component", "class_interface", "class_interface_header",
  "class_interface_body", "protocol_reference_list", "ids_list_identifier",
  "array_body", "array_ele", "instance_variables",
  "instance_variable_declarations", "instance_variable_declaration",
  "variable_declaration_list", "visibility_specification",
  "struct_variable_declaration", "variable_declarationxx", "ids_list",
  "data_member", "struct_declaration_list", "struct_header", "struct",
  "entity", "type", "struct_type", "enum_type", "simple_type",
  "complex_type", "array_tag", "array_tag_list", "array_first_tag",
  "initializer", "main_initializer", "interface_declaration_list",
  "interface_declaration", "class_method_declaration",
  "instance_method_declaration", "p_type", "method_selectors",
  "selectors_list", "selector_decleration", "parameter_list", "parameter",
  "class_implementation", "class_implementation_header",
  "class_implementation_body", "implementation_definition_list",
  "implementation_definition", "class_implementation_definition",
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
  "finally_statement", YY_NULL
};
#endif

#define YYPACT_NINF -448
#define YYTABLE_NINF -201

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
     122,    44,   138,    79,    95,   120,   164,   153,   188,   129,
    -448,  -448,   474,   181,  -448,  -448,   354,  -448,   424,  -448,
    -448,  -448,   205,   206,   264,  -448,  -448,   218,  -448,  -448,
     632,   242,  -448,    12,   232,  -448,   140,   150,   248,  -448,
    -448,  -448,   185,  -448,   232,   232,   417,  -448,   450,  -448,
    -448,   261,  -448,   261,  -448,   481,   510,  -448,   295,   260,
    -448,   359,  -448,   258,  -448,  -448,  -448,  -448,  -448,  -448,
    -448,  -448,  -448,   838,  -448,   379,   385,   453,  -448,   815,
     815,  -448,   390,  -448,  -448,  -448,  -448,  -448,    43,   403,
     838,   412,   416,   422,  -448,   412,   535,  -448,   285,   291,
    -448,  -448,   312,  -448,  -448,  -448,   815,   233,   429,  -448,
     815,   412,   412,  -448,   555,  -448,  -448,  -448,  -448,   322,
    -448,  -448,   567,  -448,  -448,  -448,  -448,    16,   433,  -448,
     399,   394,   415,  -448,  -448,  -448,   815,   405,     7,    19,
    -448,  -448,   457,  -448,   232,   435,   198,  -448,   403,  -448,
     462,  -448,   576,  -448,  -448,   326,  -448,  -448,  -448,  -448,
    -448,    41,   459,  -448,   282,   342,  -448,  -448,  -448,  -448,
     244,   258,  -448,   838,   455,   465,   470,  -448,   471,   479,
    -448,   780,   503,   477,   484,   488,  -448,  -448,   389,  -448,
    -448,  -448,  -448,  -448,  -448,  -448,   503,  -448,   503,   497,
     118,  -448,     2,   505,  -448,   503,  -448,   503,    22,  -448,
    -448,  -448,   359,   780,   509,     7,    99,  -448,  -448,   161,
    -448,  -448,  -448,    55,  -448,   513,  -448,   526,   527,  -448,
    -448,  -448,  -448,  -448,  -448,  -448,  -448,  -448,  -448,   537,
     528,  -448,   126,  -448,   341,  -448,  -448,   488,   345,   644,
     644,   533,    85,   274,   600,  -448,  -448,  -448,  -448,   541,
     546,   780,   540,  -448,   118,   277,  -448,   552,   489,   506,
     553,   405,   307,   137,  -448,  -448,  -448,   519,  -448,  -448,
     780,   780,   562,  -448,  -448,   571,  -448,  -448,   524,  -448,
     780,   579,  -448,    72,  -448,   572,  -448,   575,  -448,  -448,
    -448,   542,  -448,   554,  -448,   405,  -448,  -448,   232,   595,
    -448,  -448,  -448,   605,  -448,   220,   578,   616,   228,   610,
     564,   780,  -448,  -448,   380,  -448,   321,   171,   398,   601,
    -448,  -448,   274,   111,   377,  -448,  -448,   277,  -448,   780,
     780,   780,   780,   611,   255,   602,  -448,   589,   780,   589,
    -448,   488,  -448,   488,   622,   277,   121,  -448,   638,   604,
     648,  -448,   503,   652,   414,  -448,  -448,   636,  -448,   359,
    -448,    32,  -448,  -448,  -448,   780,   621,   551,   212,   633,
     639,   377,  -448,  -448,   644,   644,   780,   780,   780,   780,
     780,   780,  -448,   647,  -448,   339,   339,  -448,  -448,   838,
     653,   503,  -448,   660,   657,  -448,  -448,  -448,  -448,  -448,
    -448,  -448,   780,  -448,   638,  -448,  -448,   478,   663,   628,
    -448,  -448,   629,   637,  -448,   780,  -448,   658,   716,   727,
     222,  -448,  -448,  -448,  -448,  -448,  -448,  -448,  -448,  -448,
    -448,  -448,   676,   838,  -448,  -448,   684,  -448,  -448,   686,
    -448,   681,   654,  -448,   685,  -448,  -448,  -448,  -448,  -448,
     675,  -448,   679,   748,   690,   704,   695,  -448,   692,   696,
     780,  -448,   702,  -448,  -448,  -448,  -448,   697,   503,   700,
     705,   708,  -448,   769,  -448,  -448,  -448,  -448,   503,   769,
     710,  -448,  -448,  -448,   769,  -448
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     6,     0,     0,     9,     7,     0,     8,     0,    10,
      14,    15,    13,   127,     0,   257,    71,     0,     1,     3,
       0,     0,    24,     0,     0,    11,     0,     0,     0,   109,
     110,   111,     0,   131,     0,     0,     0,   125,     0,   133,
     134,     0,   135,     0,   261,     0,     0,   256,     0,     0,
     263,     0,     5,     0,    94,    93,    92,    96,    91,    56,
      55,    54,    47,     0,    95,     0,     0,     0,    49,    50,
       0,    53,     0,    85,    86,    83,    84,    37,     0,   118,
       0,     0,     0,   117,   120,     0,    27,    21,     0,     0,
      32,    22,     0,    33,    23,   108,     0,     0,     0,    69,
      57,     0,     0,   129,     0,   130,   132,   141,   136,     0,
     138,   260,     0,   259,    16,    12,   126,   266,     0,    97,
       0,    89,    87,    46,    48,    52,    51,    63,     0,     0,
      62,    35,     0,    34,     0,     0,     0,   114,     0,   119,
       0,    25,     0,    29,    18,     0,    30,    19,    31,    20,
      70,     0,    81,    74,     0,     0,    68,   137,   139,   128,
       0,   206,   143,     0,     0,     0,     0,   174,     0,     0,
     224,     0,     0,     0,     0,     0,   151,   140,     0,   146,
     156,   154,   150,   152,   147,   172,     0,   170,     0,     0,
       0,   207,     0,   205,   171,     0,   148,     0,     0,   162,
     153,   258,     0,     0,     0,     0,     0,    90,    88,     0,
      66,   100,    67,     0,    58,     0,    36,     0,   121,   123,
     116,   113,   112,   115,    26,    28,    17,    78,    82,     0,
       0,    72,     0,    75,     0,   157,   144,     0,     0,     0,
       0,     0,    89,   206,     0,   209,   211,   212,   210,     0,
       0,     0,     0,   201,   213,   202,   205,     0,     0,     0,
       0,     0,   107,     0,   164,   142,   145,     0,   175,   149,
       0,     0,     0,   227,   226,     0,   155,   236,   238,   247,
       0,     0,   240,     0,   249,     0,   267,   265,   262,    64,
      59,     0,   103,    98,    60,     0,    61,   124,     0,     0,
      80,    76,    79,     0,    73,     0,   186,     0,     0,     0,
       0,     0,   198,   199,     0,   189,     0,   213,     0,     0,
     219,   220,   206,   213,     0,   221,   222,   223,   169,     0,
       0,     0,     0,     0,   269,     0,   159,   105,     0,   105,
     167,     0,   160,     0,     0,   203,     0,   204,   228,     0,
     229,   231,     0,     0,     0,   245,   248,     0,   246,     0,
     102,     0,   122,    77,   161,     0,     0,     0,     0,     0,
       0,   202,   196,   237,     0,     0,     0,     0,     0,     0,
       0,     0,   241,     0,   218,   214,   215,   216,   217,     0,
       0,     0,   268,     0,     0,   168,   106,   166,   165,   163,
     173,   208,     0,   225,     0,   230,   239,     0,     0,   254,
     244,   264,     0,     0,   185,     0,   183,     0,     0,     0,
       0,   197,   187,   188,   190,   191,   192,   193,   194,   195,
     243,   242,     0,     0,   272,   158,     0,   104,   235,   232,
     234,     0,   251,   255,     0,   101,    99,   184,   182,   181,
       0,   180,     0,     0,     0,     0,     0,    39,     0,    41,
       0,   252,     0,   253,   177,   178,   179,     0,     0,     0,
      42,     0,    38,     0,   233,   250,   176,   270,     0,     0,
      44,    40,   271,    45,     0,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -448,  -448,  -448,   713,  -448,  -448,  -448,   714,  -448,  -448,
    -447,    15,  -448,   656,   659,  -448,  -448,    -2,   606,   512,
    -448,  -448,  -448,  -152,   -30,  -448,  -448,  -448,  -448,  -118,
    -448,  -448,   391,  -448,     9,   -24,  -448,  -448,   -23,   213,
    -448,   641,  -448,   430,  -448,  -448,  -448,   703,   -19,  -448,
    -448,  -448,  -448,   225,  -448,  -448,  -448,  -181,  -448,  -448,
    -448,   494,    34,  -448,  -448,  -448,  -448,  -448,  -448,  -448,
    -246,  -258,  -172,   -96,  -114,  -448,  -226,  -448,  -117,  -448,
    -448,  -448,   397,  -448,   290,  -448,   486,  -448,  -448,  -448,
    -448,  -448,  -448,   472,   473,  -448,  -448,  -448,   103,  -209,
    -448,  -448,  -448
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     8,     9,    10,    11,    12,    35,    36,    88,   447,
     468,    37,    77,    78,    79,    80,   108,    81,   139,   140,
     110,    13,    14,   164,   185,    83,    84,    85,    86,   220,
     303,   221,   405,   350,    38,    39,    40,    41,   261,    92,
      93,    94,   228,   229,    15,    16,    47,    48,    49,    50,
      51,    52,    53,   186,   119,   187,   188,   189,   190,   191,
     192,   273,   274,   193,   194,   195,   196,   197,   198,   319,
     324,   325,   326,   263,   264,   201,   265,   202,   266,   285,
     359,   360,   361,   449,   450,   204,   205,   206,   207,   208,
     441,   292,   293,   294,   295,    17,    18,    57,   209,   128,
     210,   344,   402
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
      82,   268,   203,   296,   328,   200,   283,   276,   222,   262,
      91,    95,    82,   244,   105,   277,    89,   278,   -65,   481,
     223,   111,   112,   199,   287,   -65,   288,    56,   334,   116,
     224,    46,   105,   422,   212,   337,   491,   225,    90,   289,
     109,   297,   493,   130,   141,    99,   102,   495,    20,    82,
      82,    98,   237,   180,   355,   356,   304,   213,   219,   238,
     145,   142,   380,   143,   122,   203,   -64,   423,   200,   290,
     291,   203,   378,   -64,   200,   105,    82,   135,   105,   203,
      82,   203,   200,    23,   200,   284,   199,   310,   203,   365,
     203,   200,   199,   200,   381,   116,    60,   299,   105,    24,
     199,    61,   199,    19,   160,   152,    82,   155,   166,   199,
     300,   199,    19,   395,   396,   397,   398,   225,   363,   290,
     291,   227,   217,     1,    25,     2,   432,   433,   105,    -2,
       1,   105,     2,   430,   135,   327,   327,   312,   351,    21,
     333,    96,    22,   247,   238,   339,   340,   333,   352,   382,
       3,   100,   345,   347,   349,   353,    30,     3,   341,   280,
     421,    97,   281,   342,    33,    34,   333,   333,    26,   281,
     282,   101,     4,   411,    33,    34,   406,   282,     5,     4,
       6,   416,  -200,   419,    27,     5,   106,     6,    28,    63,
       7,    64,    65,    66,    67,    68,   301,    42,  -200,   231,
    -200,  -200,   107,   424,   327,   427,   327,    73,    74,   232,
      58,    59,   280,   302,   434,   435,   436,   437,   438,   439,
     444,   351,   281,   428,   145,   333,   333,   333,   333,    62,
     282,   374,   253,   463,   161,    75,   452,   162,   353,   377,
     448,   384,   385,    76,   163,   203,    87,   203,   200,   103,
     200,   384,   385,   457,   320,   245,   460,   462,    90,   255,
     256,   246,   257,   258,   126,   327,   199,   321,   199,   104,
     327,   327,    33,    34,   469,    60,   118,   117,   120,   180,
      61,   322,   323,   240,   203,   227,   153,   200,   259,   260,
     145,   477,   156,   241,   469,   129,   124,   487,   448,   125,
     203,   339,   340,   200,   146,   199,   154,   492,   150,    33,
      34,   469,   157,   158,   341,    33,    34,   469,   400,   342,
     401,   199,   469,   170,   167,   168,   171,   235,    64,    65,
      66,    67,    68,   159,   330,   331,    33,    34,   117,   172,
     386,   387,   313,   242,   173,    74,   162,   236,   348,   316,
      33,    34,   314,   243,   388,   317,   318,   389,   219,   390,
     391,   203,   174,   127,   200,   175,   176,   177,   178,   442,
      30,   203,   179,   180,   200,    43,   341,   181,    44,    45,
      76,   342,   199,   131,   182,   408,   183,   409,   184,   132,
     267,   137,   199,   171,   138,    64,    65,    66,    67,    68,
     137,   339,   340,   215,   394,   117,   275,   383,   144,   384,
     385,   173,    74,   465,   341,   267,    89,   147,   171,   342,
      64,    65,    66,    67,    68,   392,   148,   384,   385,   174,
     117,   217,   175,   176,   177,   178,   173,    74,   113,   179,
     180,    44,    45,    31,   181,    54,   165,    76,    33,    34,
     214,   182,   218,   183,   174,   184,   219,   175,   176,   177,
     178,   226,   230,   418,   179,   180,    69,    70,    71,   181,
     133,   115,    76,   233,    44,    45,   182,   239,   183,   267,
     184,   248,   171,   252,    64,    65,    66,    67,    68,   271,
      30,   249,   272,    31,   117,    32,   250,   251,    33,    34,
     173,    74,   121,   269,   267,    33,    34,   171,   279,    64,
      65,    66,    67,    68,   305,   270,   286,   215,   174,   117,
     298,   175,   176,   177,   178,   173,    74,   451,   179,   180,
     307,   123,   308,   181,    33,    34,    76,   329,   309,   311,
     182,   162,   183,   174,   184,   335,   175,   176,   177,   178,
     336,   338,   343,   179,   180,   253,   151,   180,   181,    33,
      34,    76,   175,   245,   346,   182,   357,   183,   332,   184,
      64,    65,    66,    67,    68,   358,   169,   254,   426,    44,
      45,   362,   255,   256,   364,   257,   258,    74,   211,   368,
     320,    33,    34,   369,   370,   255,   256,   234,   257,   258,
      33,    34,   180,   321,   332,   371,    64,    65,    66,    67,
      68,   259,   260,   238,    75,   180,   373,   322,   323,   375,
     376,   379,    76,    74,   259,   260,   254,   399,   393,   403,
     404,   255,   256,   410,   257,   258,    63,   253,    64,    65,
      66,    67,    68,   412,   429,    69,    70,    71,   253,    72,
      75,   180,   414,   420,    73,    74,   413,   417,    76,   320,
     259,   260,   425,   440,   255,   256,   431,   257,   258,   443,
     320,   445,   321,   446,   453,   255,   256,   454,   257,   258,
     464,   455,    75,   321,   180,   458,   322,   323,   253,   456,
      76,   470,   471,   259,   260,   180,   473,   322,   323,   253,
     466,   467,   474,   472,   259,   260,   475,   478,   479,   482,
     254,   466,   480,   485,   483,   255,   256,   488,   257,   258,
     253,   254,    29,   489,   486,   490,   255,   256,   494,   257,
     258,   253,    55,   134,   149,   180,   216,   306,   372,   136,
     407,   315,   254,   459,   259,   260,   180,   255,   256,   114,
     257,   258,   253,   254,   461,   259,   260,   415,   255,   256,
     484,   257,   258,   354,     0,   366,   367,   180,     0,     0,
       0,     0,     0,   253,   254,   476,   259,   260,   180,   255,
     256,     0,   257,   258,   253,   466,     0,   259,   260,     0,
       0,     0,     0,     0,     0,   254,     0,     0,     0,   180,
     255,   256,     0,   257,   258,     0,   254,     0,   259,   260,
       0,   255,   256,     0,   257,   258,     0,     0,     0,    63,
     180,    64,    65,    66,    67,    68,     0,     0,     0,   259,
     260,   180,     0,     0,     0,     0,     0,    73,    74,     0,
     259,   260,    63,     0,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,    76
};

static const short int yycheck[] =
{
      30,   182,   119,   212,   250,   119,     4,   188,     1,   181,
      33,    34,    42,   165,    38,   196,     4,   198,    11,   466,
     138,    44,    45,   119,   205,    18,   207,    18,   254,    48,
      11,    16,    56,     1,    18,   261,   483,    18,    26,    17,
      42,   213,   489,    73,     1,    36,    37,   494,     4,    79,
      80,    36,    11,    51,   280,   281,     1,    41,    51,    18,
      90,    18,   320,    20,    55,   182,    11,    35,   182,    47,
      48,   188,   318,    18,   188,    99,   106,    79,   102,   196,
     110,   198,   196,     4,   198,   202,   182,   239,   205,    17,
     207,   205,   188,   207,   320,   114,    11,   215,   122,     4,
     196,    16,   198,     0,   106,    96,   136,    98,   110,   205,
      11,   207,     9,   339,   340,   341,   342,    18,   290,    47,
      48,   144,    37,     1,     4,     3,   384,   385,   152,     0,
       1,   155,     3,   379,   136,   249,   250,    11,     1,     1,
     254,     1,     4,   173,    18,    24,    25,   261,    11,   321,
      28,     1,   269,   271,   272,    18,    16,    28,    37,    41,
     369,    21,    51,    42,    24,    25,   280,   281,     4,    51,
      59,    21,    50,    52,    24,    25,   348,    59,    56,    50,
      58,   362,    11,   364,    31,    56,     1,    58,     0,     4,
      68,     6,     7,     8,     9,    10,    35,    16,    27,     1,
      29,    30,    17,   375,   318,   377,   320,    22,    23,    11,
       5,     5,    41,    52,   386,   387,   388,   389,   390,   391,
     401,     1,    51,    11,   254,   339,   340,   341,   342,    11,
      59,    11,     4,    11,     1,    50,   417,     4,    18,    11,
     412,    29,    30,    58,    11,   362,     4,   364,   362,     1,
     364,    29,    30,   425,    26,    11,   428,   429,    26,    31,
      32,    17,    34,    35,     4,   379,   362,    39,   364,    21,
     384,   385,    24,    25,   446,    11,    51,    16,    53,    51,
      16,    53,    54,     1,   401,   308,     1,   401,    60,    61,
     320,   463,     1,    11,   466,    37,     1,   478,   470,     4,
     417,    24,    25,   417,    91,   401,    21,   488,    95,    24,
      25,   483,    21,     1,    37,    24,    25,   489,    63,    42,
      65,   417,   494,     1,   111,   112,     4,     1,     6,     7,
       8,     9,    10,    21,    60,    61,    24,    25,    16,    17,
      19,    20,     1,     1,    22,    23,     4,    21,    41,     4,
      24,    25,    11,    11,    33,    10,    11,    36,    51,    38,
      39,   478,    40,     4,   478,    43,    44,    45,    46,   399,
      16,   488,    50,    51,   488,    21,    37,    55,    24,    25,
      58,    42,   478,     4,    62,   351,    64,   353,    66,     4,
       1,     1,   488,     4,     4,     6,     7,     8,     9,    10,
       1,    24,    25,     4,    27,    16,    17,    27,     5,    29,
      30,    22,    23,   443,    37,     1,     4,     1,     4,    42,
       6,     7,     8,     9,    10,    27,     4,    29,    30,    40,
      16,    37,    43,    44,    45,    46,    22,    23,    21,    50,
      51,    24,    25,    19,    55,    21,    17,    58,    24,    25,
      17,    62,    37,    64,    40,    66,    51,    43,    44,    45,
      46,     4,    27,    49,    50,    51,    13,    14,    15,    55,
      17,    21,    58,    11,    24,    25,    62,    18,    64,     1,
      66,    26,     4,     4,     6,     7,     8,     9,    10,     1,
      16,    26,     4,    19,    16,    21,    26,    26,    24,    25,
      22,    23,    21,    26,     1,    24,    25,     4,    11,     6,
       7,     8,     9,    10,     1,    31,    11,     4,    40,    16,
      11,    43,    44,    45,    46,    22,    23,    49,    50,    51,
       4,    21,     5,    55,    24,    25,    58,     4,     1,    11,
      62,     4,    64,    40,    66,     4,    43,    44,    45,    46,
       4,    11,    63,    50,    51,     4,    21,    51,    55,    24,
      25,    58,    43,    11,    11,    62,     4,    64,     4,    66,
       6,     7,     8,     9,    10,     4,    21,    26,    27,    24,
      25,    57,    31,    32,     5,    34,    35,    23,    21,    17,
      26,    24,    25,    18,    52,    31,    32,    21,    34,    35,
      24,    25,    51,    39,     4,    51,     6,     7,     8,     9,
      10,    60,    61,    18,    50,    51,    11,    53,    54,    41,
       4,    11,    58,    23,    60,    61,    26,    16,    27,    27,
      41,    31,    32,    11,    34,    35,     4,     4,     6,     7,
       8,     9,    10,     5,    11,    13,    14,    15,     4,    17,
      50,    51,     4,    17,    22,    23,    52,     5,    58,    26,
      60,    61,    41,    16,    31,    32,    27,    34,    35,    16,
      26,    11,    39,    16,    11,    31,    32,    49,    34,    35,
       4,    52,    50,    39,    51,    27,    53,    54,     4,    52,
      58,     5,    11,    60,    61,    51,    11,    53,    54,     4,
      16,    17,    27,    49,    60,    61,    27,    17,     4,    17,
      26,    16,    17,    11,    18,    31,    32,    17,    34,    35,
       4,    26,     9,    18,    27,    17,    31,    32,    18,    34,
      35,     4,    18,    77,    93,    51,   130,   225,   308,    80,
     349,   247,    26,    27,    60,    61,    51,    31,    32,    46,
      34,    35,     4,    26,    27,    60,    61,   360,    31,    32,
     470,    34,    35,   277,    -1,   293,   293,    51,    -1,    -1,
      -1,    -1,    -1,     4,    26,    27,    60,    61,    51,    31,
      32,    -1,    34,    35,     4,    16,    -1,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    51,
      31,    32,    -1,    34,    35,    -1,    26,    -1,    60,    61,
      -1,    31,    32,    -1,    34,    35,    -1,    -1,    -1,     4,
      51,     6,     7,     8,     9,    10,    -1,    -1,    -1,    60,
      61,    51,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      60,    61,     4,    -1,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     1,     3,    28,    50,    56,    58,    68,    75,    76,
      77,    78,    79,    95,    96,   118,   119,   169,   170,   172,
       4,     1,     4,     4,     4,     4,     4,    31,     0,    77,
      16,    19,    21,    24,    25,    80,    81,    85,   108,   109,
     110,   111,    16,    21,    24,    25,    85,   120,   121,   122,
     123,   124,   125,   126,    21,    81,   108,   171,     5,     5,
      11,    16,    11,     4,     6,     7,     8,     9,    10,    13,
      14,    15,    17,    22,    23,    50,    58,    86,    87,    88,
      89,    91,    98,    99,   100,   101,   102,     4,    82,     4,
      26,   112,   113,   114,   115,   112,     1,    21,    85,   108,
       1,    21,   108,     1,    21,   109,     1,    17,    90,    91,
      94,   112,   112,    21,   121,    21,   122,    16,   127,   128,
     127,    21,   108,    21,     1,     4,     4,     4,   173,    37,
      98,     4,     4,    17,    87,    91,    88,     1,     4,    92,
      93,     1,    18,    20,     5,    98,   113,     1,     4,   115,
     113,    21,   108,     1,    21,   108,     1,    21,     1,    21,
      91,     1,     4,    11,    97,    17,    91,   113,   113,    21,
       1,     4,    17,    22,    40,    43,    44,    45,    46,    50,
      51,    55,    62,    64,    66,    98,   127,   129,   130,   131,
     132,   133,   134,   137,   138,   139,   140,   141,   142,   147,
     148,   149,   151,   152,   159,   160,   161,   162,   163,   172,
     174,    21,    18,    41,    17,     4,    92,    37,    37,    51,
     103,   105,     1,   103,    11,    18,     4,   112,   116,   117,
      27,     1,    11,    11,    21,     1,    21,    11,    18,    18,
       1,    11,     1,    11,    97,    11,    17,    98,    26,    26,
      26,    26,     4,     4,    26,    31,    32,    34,    35,    60,
      61,   112,   146,   147,   148,   150,   152,     1,   131,    26,
      31,     1,     4,   135,   136,    17,   131,   131,   131,    11,
      41,    51,    59,     4,   152,   153,    11,   131,   131,    17,
      47,    48,   165,   166,   167,   168,   173,   146,    11,   103,
      11,    35,    52,   104,     1,     1,    93,     4,     5,     1,
      97,    11,    11,     1,    11,   135,     4,    10,    11,   143,
      26,    39,    53,    54,   144,   145,   146,   148,   144,     4,
      60,    61,     4,   148,   150,     4,     4,   150,    11,    24,
      25,    37,    42,    63,   175,   152,    11,   103,    41,   103,
     107,     1,    11,    18,   160,   150,   150,     4,     4,   154,
     155,   156,    57,   146,     5,    17,   167,   168,    17,    18,
      52,    51,   117,    11,    11,    41,     4,    11,   144,    11,
     145,   150,   146,    27,    29,    30,    19,    20,    33,    36,
      38,    39,    27,    27,    27,   150,   150,   150,   150,    16,
      63,    65,   176,    27,    41,   106,   146,   106,   136,   136,
      11,    52,     5,    52,     4,   156,   131,     5,    49,   131,
      17,   173,     1,    35,   146,    41,    27,   146,    11,    11,
     144,    27,   145,   145,   146,   146,   146,   146,   146,   146,
      16,   164,    98,    16,   131,    11,    16,    83,   146,   157,
     158,    49,   131,    11,    49,    52,    52,   146,    27,    27,
     146,    27,   146,    11,     4,    98,    16,    17,    84,   146,
       5,    11,    49,    11,    27,    27,    27,   146,    17,     4,
      17,    84,    17,    18,   158,    11,    27,   131,    17,    18,
      17,    84,   131,    84,    18,    84
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    74,    75,    76,    76,    76,    77,    77,    77,    77,
      77,    78,    79,    79,    79,    79,    79,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    84,    84,    84,    84,    84,    85,    85,    86,    86,
      86,    87,    88,    88,    89,    89,    89,    90,    91,    91,
      91,    92,    92,    92,    93,    93,    93,    93,    94,    94,
      94,    95,    96,    96,    96,    96,    96,    96,    96,    96,
      97,    97,    97,    98,    98,    98,    98,    99,    99,   100,
     100,   101,   101,   101,   101,   101,   101,   102,   103,   104,
     104,   104,   105,   105,   106,   106,   107,   107,   108,   108,
     109,   109,   110,   110,   110,   111,   112,   113,   113,   114,
     114,   115,   116,   116,   117,   118,   119,   119,   120,   120,
     120,   120,   121,   121,   122,   122,   123,   124,   125,   126,
     127,   128,   129,   129,   129,   130,   130,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   132,   133,
     134,   134,   134,   135,   135,   135,   136,   136,   136,   137,
     138,   138,   138,   139,   140,   141,   142,   142,   142,   142,
     142,   142,   142,   142,   143,   143,   143,   144,   144,   144,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   146,   146,   147,   148,   148,   148,   148,   149,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   151,   152,   153,   153,   154,   154,
     155,   155,   156,   157,   157,   158,   159,   160,   161,   161,
     161,   162,   163,   164,   165,   165,   165,   165,   166,   166,
     167,   167,   167,   168,   168,   168,   169,   170,   171,   171,
     171,   171,   172,   172,   173,   173,   173,   173,   174,   174,
     175,   175,   176
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     2,     4,     2,     2,     2,     4,     4,     3,     3,
       3,     2,     2,     2,     1,     3,     4,     2,     4,     3,
       3,     3,     2,     2,     3,     3,     3,     1,     3,     2,
       3,     1,     2,     5,     3,     4,     3,     2,     2,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     3,     4,
       4,     3,     1,     1,     2,     1,     2,     2,     2,     1,
       2,     2,     5,     6,     4,     5,     6,     7,     5,     6,
       3,     1,     2,     1,     1,     1,     1,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     2,     2,     4,
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
       1,     1,     1,     1,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     1,     4,     1,     1,     1,     1,
       2,     1,     3,     3,     1,     1,     2,     4,     2,     4,
       2,     4,     5,     1,     3,     2,     2,     1,     2,     1,
       6,     4,     5,     5,     3,     4,     2,     2,     3,     2,
       2,     1,     6,     3,     5,     3,     1,     3,     4,     3,
       6,     7,     2
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
       0,     0,     0
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
       0,     0,     0
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
       0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
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
       0,   213,     0
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
#line 213 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"program: components\n"; 
										 }
#line 1508 "yacc.cpp" /* glr.c:788  */
    break;

  case 3:
#line 216 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"components: components component\n";}
#line 1514 "yacc.cpp" /* glr.c:788  */
    break;

  case 4:
#line 217 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"components: component\n";}
#line 1520 "yacc.cpp" /* glr.c:788  */
    break;

  case 5:
#line 218 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {addFile(*(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.string_val));}
#line 1526 "yacc.cpp" /* glr.c:788  */
    break;

  case 6:
#line 220 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_interface \n";}
#line 1532 "yacc.cpp" /* glr.c:788  */
    break;

  case 7:
#line 221 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_implementation \n";}
#line 1538 "yacc.cpp" /* glr.c:788  */
    break;

  case 8:
#line 222 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"protocol \n";}
#line 1544 "yacc.cpp" /* glr.c:788  */
    break;

  case 9:
#line 223 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct \n";}
#line 1550 "yacc.cpp" /* glr.c:788  */
    break;

  case 10:
#line 224 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"enum \n";}
#line 1556 "yacc.cpp" /* glr.c:788  */
    break;

  case 11:
#line 226 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_interface: class_interface_header class_interface_body\n";
																classNode=NULL;
																 idsList.clear();
																 methodsList.clear();
																 method=NULL;
																}
#line 1567 "yacc.cpp" /* glr.c:788  */
    break;

  case 12:
#line 235 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																				interface=InterfaceHelper::createNewInterface((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),symbolTable);
																				
																				
																				}
#line 1577 "yacc.cpp" /* glr.c:788  */
    break;

  case 13:
#line 240 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																					Streams::verbose()<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
																				 interface=InterfaceHelper::createNewInterface((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),"",symbolTable);

																				}
#line 1587 "yacc.cpp" /* glr.c:788  */
    break;

  case 14:
#line 245 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Unknown type name '"<<(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text)<<"' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1593 "yacc.cpp" /* glr.c:788  */
    break;

  case 15:
#line 246 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1599 "yacc.cpp" /* glr.c:788  */
    break;

  case 16:
#line 248 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1605 "yacc.cpp" /* glr.c:788  */
    break;

  case 17:
#line 251 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	
															
														InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														}
#line 1615 "yacc.cpp" /* glr.c:788  */
    break;

  case 18:
#line 257 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														}
#line 1623 "yacc.cpp" /* glr.c:788  */
    break;

  case 19:
#line 261 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	protocol_reference_list interface_declaration_list	AT_END\n";
														}
#line 1632 "yacc.cpp" /* glr.c:788  */
    break;

  case 20:
#line 266 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														}
#line 1641 "yacc.cpp" /* glr.c:788  */
    break;

  case 21:
#line 271 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														}
#line 1649 "yacc.cpp" /* glr.c:788  */
    break;

  case 22:
#line 275 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_interface_body:instance_variables		AT_END\n";}
#line 1655 "yacc.cpp" /* glr.c:788  */
    break;

  case 23:
#line 277 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {														
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:interface_declaration_list	AT_END\n";
														}
#line 1664 "yacc.cpp" /* glr.c:788  */
    break;

  case 24:
#line 281 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_interface_body:AT_END\n";}
#line 1670 "yacc.cpp" /* glr.c:788  */
    break;

  case 25:
#line 282 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1676 "yacc.cpp" /* glr.c:788  */
    break;

  case 26:
#line 283 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1682 "yacc.cpp" /* glr.c:788  */
    break;

  case 27:
#line 284 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1688 "yacc.cpp" /* glr.c:788  */
    break;

  case 28:
#line 285 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1694 "yacc.cpp" /* glr.c:788  */
    break;

  case 29:
#line 286 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1700 "yacc.cpp" /* glr.c:788  */
    break;

  case 30:
#line 287 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1706 "yacc.cpp" /* glr.c:788  */
    break;

  case 31:
#line 288 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1712 "yacc.cpp" /* glr.c:788  */
    break;

  case 32:
#line 289 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1718 "yacc.cpp" /* glr.c:788  */
    break;

  case 33:
#line 290 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1724 "yacc.cpp" /* glr.c:788  */
    break;

  case 34:
#line 294 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
													if(interface!=NULL){
													InterfaceHelper::addInheritedProtocol(interface,idsList,symbolTable);
														idsList.clear();
													}
													Streams::verbose()<<"protocol_reference_list: LESS_THAN ids_list_identifier MORE_THAN\n";
												}
#line 1736 "yacc.cpp" /* glr.c:788  */
    break;

  case 35:
#line 301 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected '>' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1742 "yacc.cpp" /* glr.c:788  */
    break;

  case 36:
#line 304 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
													Streams::verbose()<<"ids_list:ids_list_identifier COMMA IDENTIFIER\n"; 
													idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
													}
#line 1751 "yacc.cpp" /* glr.c:788  */
    break;

  case 37:
#line 308 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
													Streams::verbose()<<"ids_list_identifier:IDENTIFIER\n";
													idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
												    }
#line 1760 "yacc.cpp" /* glr.c:788  */
    break;

  case 38:
#line 313 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"array with body";}
#line 1766 "yacc.cpp" /* glr.c:788  */
    break;

  case 39:
#line 314 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"array without elements";}
#line 1772 "yacc.cpp" /* glr.c:788  */
    break;

  case 40:
#line 318 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"array-element \n";}
#line 1778 "yacc.cpp" /* glr.c:788  */
    break;

  case 41:
#line 319 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"array-element \n";}
#line 1784 "yacc.cpp" /* glr.c:788  */
    break;

  case 42:
#line 320 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"empty element \n";}
#line 1790 "yacc.cpp" /* glr.c:788  */
    break;

  case 43:
#line 321 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"inside braces element \n";}
#line 1796 "yacc.cpp" /* glr.c:788  */
    break;

  case 44:
#line 322 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"inside braces element \n";}
#line 1802 "yacc.cpp" /* glr.c:788  */
    break;

  case 45:
#line 323 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"inside braces element \n";}
#line 1808 "yacc.cpp" /* glr.c:788  */
    break;

  case 46:
#line 326 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";}
#line 1814 "yacc.cpp" /* glr.c:788  */
    break;

  case 47:
#line 327 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variables:OPEN_S	 CLOSE_S\n";}
#line 1820 "yacc.cpp" /* glr.c:788  */
    break;

  case 48:
#line 330 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";}
#line 1826 "yacc.cpp" /* glr.c:788  */
    break;

  case 49:
#line 331 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variable_declarations:instance_variable_declaration\n";}
#line 1832 "yacc.cpp" /* glr.c:788  */
    break;

  case 50:
#line 332 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variable_declarations:variable_declaration_list\n";}
#line 1838 "yacc.cpp" /* glr.c:788  */
    break;

  case 51:
#line 335 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variable_declaration:visibility_specification variable_declaration_list\n";
																	}
#line 1845 "yacc.cpp" /* glr.c:788  */
    break;

  case 52:
#line 339 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
											arrayList.clear();
												idsList.clear();
												flag=false;
										}
#line 1857 "yacc.cpp" /* glr.c:788  */
    break;

  case 53:
#line 347 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										       InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
												arrayList.clear();
												idsList.clear();
												flag=false;
										Streams::verbose()<<"variable_declaration_list: variable_declaration\n";
										}
#line 1869 "yacc.cpp" /* glr.c:788  */
    break;

  case 54:
#line 357 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"visibility_specification:AT_PRIVATE\n";  visibility=new char[256]; visibility[0]='\0';strcat(visibility,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));}
#line 1875 "yacc.cpp" /* glr.c:788  */
    break;

  case 55:
#line 358 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"visibility_specification:AT_PROTECTED\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));}
#line 1881 "yacc.cpp" /* glr.c:788  */
    break;

  case 56:
#line 359 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"visibility_specification:AT_PUBLIC\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));}
#line 1887 "yacc.cpp" /* glr.c:788  */
    break;

  case 57:
#line 364 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct_variable_declaration:struct_declaration_list\n";}
#line 1893 "yacc.cpp" /* glr.c:788  */
    break;

  case 58:
#line 367 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
	                                           ((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text);
												}
#line 1901 "yacc.cpp" /* glr.c:788  */
    break;

  case 59:
#line 370 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 ((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text);
													}
#line 1910 "yacc.cpp" /* glr.c:788  */
    break;

  case 60:
#line 374 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1916 "yacc.cpp" /* glr.c:788  */
    break;

  case 61:
#line 378 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									Streams::verbose()<<"ids_list:ids_list COMMA id_dec\n"; 

									}
#line 1925 "yacc.cpp" /* glr.c:788  */
    break;

  case 62:
#line 382 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"ids_list:id_dec\n"; }
#line 1931 "yacc.cpp" /* glr.c:788  */
    break;

  case 63:
#line 383 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1937 "yacc.cpp" /* glr.c:788  */
    break;

  case 64:
#line 386 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose() <<" data_member: IDENTIFIER array_tag \n";
							 var=new Array((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),arrayAlloc.size(),NULL);
					       ( dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
						   arrayList.push_back( ( dynamic_cast<Array*>(var)));
						      arrayAlloc.clear();
							}
#line 1948 "yacc.cpp" /* glr.c:788  */
    break;

  case 65:
#line 392 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text)) ;Streams::verbose() <<" data_member: IDENTIFIER  \n";}
#line 1954 "yacc.cpp" /* glr.c:788  */
    break;

  case 66:
#line 393 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 1960 "yacc.cpp" /* glr.c:788  */
    break;

  case 67:
#line 394 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 1966 "yacc.cpp" /* glr.c:788  */
    break;

  case 68:
#line 396 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {  
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																												idsList.clear();
																												flag=false;
																										  Streams::verbose()<<"struct_declaration_list: struct_declaration_list  variable_declarationxx\n";
																										}
#line 1978 "yacc.cpp" /* glr.c:788  */
    break;

  case 69:
#line 404 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																														 	idsList.clear();
																															flag=false;
																										Streams::verbose()<<"struct_declaration_list:  variable_declarationxx\n";
																										}
#line 1990 "yacc.cpp" /* glr.c:788  */
    break;

  case 70:
#line 411 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Illigal visibility specification at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1996 "yacc.cpp" /* glr.c:788  */
    break;

  case 71:
#line 415 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
					myStruct=StructHelper::createNewStruct((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),symbolTable);
					Streams::verbose()<<"struct_header: STRUCT  IDENTIFIER\n";
					}
#line 2005 "yacc.cpp" /* glr.c:788  */
    break;

  case 72:
#line 421 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S  entity SEMI_COMA\n";}
#line 2011 "yacc.cpp" /* glr.c:788  */
    break;

  case 73:
#line 422 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S enteity SEMI_COMA \n";}
#line 2017 "yacc.cpp" /* glr.c:788  */
    break;

  case 74:
#line 423 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S SEMI_COMA\n";}
#line 2023 "yacc.cpp" /* glr.c:788  */
    break;

  case 75:
#line 424 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S  SEMI_COMA  \n";}
#line 2029 "yacc.cpp" /* glr.c:788  */
    break;

  case 76:
#line 425 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2035 "yacc.cpp" /* glr.c:788  */
    break;

  case 77:
#line 426 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2041 "yacc.cpp" /* glr.c:788  */
    break;

  case 78:
#line 427 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2047 "yacc.cpp" /* glr.c:788  */
    break;

  case 79:
#line 428 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2053 "yacc.cpp" /* glr.c:788  */
    break;

  case 80:
#line 431 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"entity: IDENTIFIER COMMA  entity\n";}
#line 2059 "yacc.cpp" /* glr.c:788  */
    break;

  case 81:
#line 432 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"entity:  IDENTIFIER \n";}
#line 2065 "yacc.cpp" /* glr.c:788  */
    break;

  case 82:
#line 433 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2071 "yacc.cpp" /* glr.c:788  */
    break;

  case 83:
#line 437 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"type:simple type\n";}
#line 2077 "yacc.cpp" /* glr.c:788  */
    break;

  case 84:
#line 438 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"type: complex type\n";}
#line 2083 "yacc.cpp" /* glr.c:788  */
    break;

  case 85:
#line 439 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"type: struct_type\n";}
#line 2089 "yacc.cpp" /* glr.c:788  */
    break;

  case 86:
#line 440 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"type: enum_type\n";}
#line 2095 "yacc.cpp" /* glr.c:788  */
    break;

  case 87:
#line 444 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	Streams::verbose()<<"struct_type: STRUCT IDENTIFIER   \n";
													 type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																		string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2109 "yacc.cpp" /* glr.c:788  */
    break;

  case 88:
#line 453 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct_type: STRUCT IDENTIFIER  MULTI \n";
													 type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2123 "yacc.cpp" /* glr.c:788  */
    break;

  case 89:
#line 464 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"enum_type: ENUM IDENTIFIER \n";
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

  case 90:
#line 473 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"enum_type: ENUM IDENTIFIER  MULTI  \n";
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

  case 91:
#line 484 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"int type \n";
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

  case 92:
#line 493 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"char type\n";
	type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2178 "yacc.cpp" /* glr.c:788  */
    break;

  case 93:
#line 501 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"float type\n";
	type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2191 "yacc.cpp" /* glr.c:788  */
    break;

  case 94:
#line 509 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"NSString type\n";
	type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2204 "yacc.cpp" /* glr.c:788  */
    break;

  case 95:
#line 517 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"void type\n";
	type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2217 "yacc.cpp" /* glr.c:788  */
    break;

  case 96:
#line 525 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"bool type\n";
	type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2230 "yacc.cpp" /* glr.c:788  */
    break;

  case 97:
#line 535 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
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
#line 2245 "yacc.cpp" /* glr.c:788  */
    break;

  case 98:
#line 546 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"array_tag: array_first_tag array_tag_list \n"; 
										   }
#line 2253 "yacc.cpp" /* glr.c:788  */
    break;

  case 99:
#line 551 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"array_tag_list: array_tag_list OPEN_ARR INT_VAL CLOSE_ARR\n"; 
																arrayAlloc.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.int_val));
														   }
#line 2262 "yacc.cpp" /* glr.c:788  */
    break;

  case 101:
#line 556 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<" Error:missing  dimension in array tag  ";arrayAlloc.clear();}
#line 2268 "yacc.cpp" /* glr.c:788  */
    break;

  case 102:
#line 559 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"array_first_tag: OPEN_ARR INT_VAL CLOSE_ARR\n"; 
											arrayAlloc.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.int_val));
											}
#line 2277 "yacc.cpp" /* glr.c:788  */
    break;

  case 103:
#line 563 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"array_first_tag: OPEN_ARR  CLOSE_ARR\n"; 
											arrayAlloc.push_back(-1);
											}
#line 2286 "yacc.cpp" /* glr.c:788  */
    break;

  case 104:
#line 569 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"array with value\n";
								((*yyvalp).r.node)=new AssignNode(scoop,NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
							   }
#line 2294 "yacc.cpp" /* glr.c:788  */
    break;

  case 106:
#line 574 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
								Streams::verbose() <<"with value\n";
								((*yyvalp).r.node)=new AssignNode(scoop,NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
							 }
#line 2303 "yacc.cpp" /* glr.c:788  */
    break;

  case 107:
#line 579 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {((*yyvalp).r.node)=NULL;}
#line 2309 "yacc.cpp" /* glr.c:788  */
    break;

  case 108:
#line 584 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
															 methodsList.push_back(method);
														
															 
																}
#line 2320 "yacc.cpp" /* glr.c:788  */
    break;

  case 109:
#line 590 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																 Streams::verbose()<<"interface_declaration_list:interface_declaration\n";
															 methodsList.push_back(method);
															 
																 	
																 }
#line 2331 "yacc.cpp" /* glr.c:788  */
    break;

  case 110:
#line 598 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"interface_declaration: class_method_declaration\n";}
#line 2337 "yacc.cpp" /* glr.c:788  */
    break;

  case 111:
#line 599 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"interface_declaration: instance_method_declaration\n";}
#line 2343 "yacc.cpp" /* glr.c:788  */
    break;

  case 112:
#line 603 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"class_method_declaration: PLUS p_type method_selectors	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),selectorsList,true);
															
																 selectorsList.clear();
																
																}
#line 2355 "yacc.cpp" /* glr.c:788  */
    break;

  case 113:
#line 611 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2361 "yacc.cpp" /* glr.c:788  */
    break;

  case 114:
#line 612 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2367 "yacc.cpp" /* glr.c:788  */
    break;

  case 115:
#line 615 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
															Streams::verbose()<<"instance_method_declaration: MINUS p_type	method_selectors		SEMI_COMA\n";
															method=InterfaceHelper::createNewMethod(type,symbolTable,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),selectorsList,false);
																 selectorsList.clear();
																
																
															}
#line 2379 "yacc.cpp" /* glr.c:788  */
    break;

  case 116:
#line 624 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"p_type : OPEN_P type CLOSE_P\n";
																((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text);
																}
#line 2388 "yacc.cpp" /* glr.c:788  */
    break;

  case 117:
#line 633 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"method_selectors: selectors_list\n";
																	((*yyvalp).r.text)="";
																}
#line 2397 "yacc.cpp" /* glr.c:788  */
    break;

  case 118:
#line 637 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"method_selectors:IDENTIFIER \n";((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text);}
#line 2403 "yacc.cpp" /* glr.c:788  */
    break;

  case 119:
#line 639 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
													Streams::verbose()<<"selectors_list:	selectors_list selector_decleration\n";
																
													selectorsList.push_back(tselector);
													tselector=NULL;
											}
#line 2414 "yacc.cpp" /* glr.c:788  */
    break;

  case 120:
#line 645 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"selectors_list:	 selector_decleration\n";
												selectorsList.clear();

												selectorsList.push_back(tselector);
												tselector=NULL;
}
#line 2426 "yacc.cpp" /* glr.c:788  */
    break;

  case 121:
#line 653 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																				Streams::verbose()<<"selector_decleration:	IDENTIFIER	SEMI_COLUMN	parameter_list	\n";
																				tselector=new DeclerationSelector((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),selectorVarList);
																			}
#line 2435 "yacc.cpp" /* glr.c:788  */
    break;

  case 122:
#line 659 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"parameter_list: parameter_list parameter\n";
																	selectorVarList.push_back(var);		
											}
#line 2444 "yacc.cpp" /* glr.c:788  */
    break;

  case 123:
#line 663 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									selectorVarList.clear();
										selectorVarList.push_back(var);		
											
				 
														Streams::verbose()<<"parameter_list:  parameter\n";
						
					}
#line 2457 "yacc.cpp" /* glr.c:788  */
    break;

  case 124:
#line 672 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"parameter:  p_type IDENTIFIER\n";
																
																if(type!=NULL){
																var=new Variable((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),type);
																}
																else{
																Streams::verbose()<<"Error:Type not found.\n";
																}
																}
#line 2472 "yacc.cpp" /* glr.c:788  */
    break;

  case 125:
#line 685 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_implementation: class_implementation_header class_implementation_body\n";}
#line 2478 "yacc.cpp" /* glr.c:788  */
    break;

  case 126:
#line 688 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																	Streams::verbose()<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																	interface=InterfaceHelper::checkImplementation((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),symbolTable,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																	
																}
#line 2488 "yacc.cpp" /* glr.c:788  */
    break;

  case 127:
#line 693 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																interface=InterfaceHelper::checkImplementation((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),symbolTable,"");
																	
																}
#line 2497 "yacc.cpp" /* glr.c:788  */
    break;

  case 128:
#line 699 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																	Streams::verbose()<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";
																			InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														}
#line 2507 "yacc.cpp" /* glr.c:788  */
    break;

  case 129:
#line 705 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    { 
																	Streams::verbose()<<"class_implementation_body: instance_variables									AT_END\n";
																}
#line 2515 "yacc.cpp" /* glr.c:788  */
    break;

  case 130:
#line 708 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																	Streams::verbose()<<"class_implementation_body:						implementation_definition_list	AT_END\n";
																	InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														
																}
#line 2526 "yacc.cpp" /* glr.c:788  */
    break;

  case 131:
#line 714 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_implementation_body:	AT_END\n";}
#line 2532 "yacc.cpp" /* glr.c:788  */
    break;

  case 132:
#line 717 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	 methodsList.push_back(method);Streams::verbose()<<"implementation_definition_list: implementation_definition_list implementation_definition\n";}
#line 2538 "yacc.cpp" /* glr.c:788  */
    break;

  case 133:
#line 718 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	 methodsList.push_back(method);Streams::verbose()<<"implementation_definition_list: implementation_definition\n";}
#line 2544 "yacc.cpp" /* glr.c:788  */
    break;

  case 134:
#line 721 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"implementation_definition: class_implementation_definition	\n";}
#line 2550 "yacc.cpp" /* glr.c:788  */
    break;

  case 135:
#line 722 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"implementation_definition: instance_implementation_definition \n";}
#line 2556 "yacc.cpp" /* glr.c:788  */
    break;

  case 136:
#line 725 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"class_implementation_definition: class_implementation_definition_header block_body";
														functionNode->addNode(cscoop);
														functionNode=NULL;
																scoop=NULL;
															scoop=NULL;
													}
#line 2568 "yacc.cpp" /* glr.c:788  */
    break;

  case 137:
#line 734 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"class_implementation_definition_header: PLUS p_type		 method_selectors\n";
										method=InterfaceHelper:: createNewMethod(type,symbolTable,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),selectorsList,true);
																 selectorsList.clear();
									           functionNode= ScoopHelper::createNewFunctionNode(method,interface->static_twin);
												scoop=functionNode;				
																
										}
#line 2581 "yacc.cpp" /* glr.c:788  */
    break;

  case 138:
#line 745 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
															Streams::verbose()<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";
														functionNode->addNode(cscoop);
														functionNode=NULL;
																scoop=NULL;
															scoop=NULL;
										
															}
#line 2594 "yacc.cpp" /* glr.c:788  */
    break;

  case 139:
#line 755 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											     Streams::verbose()<<"instance_implementation_definition_header:MINUS p_type		method_selectors\n";
												 method=InterfaceHelper:: createNewMethod(type,symbolTable,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),selectorsList,false);
																 selectorsList.clear();
									           functionNode= ScoopHelper::createNewFunctionNode(method,interface);
												scoop=functionNode;
												}
#line 2606 "yacc.cpp" /* glr.c:788  */
    break;

  case 140:
#line 764 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												
												Streams::verbose()<<"block_body:OPEN_S  block_body_part \n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
												}
#line 2616 "yacc.cpp" /* glr.c:788  */
    break;

  case 141:
#line 771 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												
                                                scoop=ScoopHelper::createNewScoop(scoop);
												
												
												scoopVector.push_back(scoop);
												Streams::verbose()<<"block_body_header:OPEN_S	\n";
												((*yyvalp).r.node)=scoop;
												}
#line 2630 "yacc.cpp" /* glr.c:788  */
    break;

  case 142:
#line 783 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												cscoop=scoop;scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements:statement_list	CLOSE_S	\n";
												}
#line 2639 "yacc.cpp" /* glr.c:788  */
    break;

  case 143:
#line 787 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												cscoop=scoop;scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements:CLOSE_S\n";
												}
#line 2648 "yacc.cpp" /* glr.c:788  */
    break;

  case 144:
#line 791 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											  cscoop=scoop; scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements: error CLOSE_S\n";
												}
#line 2657 "yacc.cpp" /* glr.c:788  */
    break;

  case 145:
#line 797 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement_list: statement_list statement\n";
											((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text);
											scoop->addNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
											
											}
#line 2667 "yacc.cpp" /* glr.c:788  */
    break;

  case 146:
#line 802 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement_list: statement\n";
											((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text);
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											scoop->addNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
											
											}
#line 2678 "yacc.cpp" /* glr.c:788  */
    break;

  case 147:
#line 811 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: loop_statement\n";
											((*yyvalp).r.text)="loop";
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2687 "yacc.cpp" /* glr.c:788  */
    break;

  case 148:
#line 815 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: conditional_statement\n";
											((*yyvalp).r.text)="cond";
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2696 "yacc.cpp" /* glr.c:788  */
    break;

  case 149:
#line 819 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												Streams::verbose()<<"statement: expr\n";
												((*yyvalp).r.text)="expr";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
												//nodeXX=$<r.node>1;
											}
#line 2707 "yacc.cpp" /* glr.c:788  */
    break;

  case 150:
#line 825 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"statement: variable_declaration\n";
											
												ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
										    }
#line 2721 "yacc.cpp" /* glr.c:788  */
    break;

  case 151:
#line 834 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: block_body\n";((*yyvalp).r.text)=new char[256];((*yyvalp).r.text)[0]='\0';strcat(((*yyvalp).r.text),"Block");
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2729 "yacc.cpp" /* glr.c:788  */
    break;

  case 152:
#line 837 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: return_statement\n";
												((*yyvalp).r.text)="return";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2738 "yacc.cpp" /* glr.c:788  */
    break;

  case 153:
#line 841 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: try_catch\n";}
#line 2744 "yacc.cpp" /* glr.c:788  */
    break;

  case 154:
#line 843 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
	                                            ((*yyvalp).r.text)="asm";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);}
#line 2752 "yacc.cpp" /* glr.c:788  */
    break;

  case 155:
#line 846 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
	 ((*yyvalp).r.text)="call";
	((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
	}
#line 2761 "yacc.cpp" /* glr.c:788  */
    break;

  case 156:
#line 850 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    { Streams::verbose()<<"statement: THROW\n";((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);}
#line 2767 "yacc.cpp" /* glr.c:788  */
    break;

  case 157:
#line 852 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    { Streams::verbose()<<"error SEMI_COMA \n";}
#line 2773 "yacc.cpp" /* glr.c:788  */
    break;

  case 158:
#line 855 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: THROW\n";
														((*yyvalp).r.node)=new ThrowNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node));
														}
#line 2781 "yacc.cpp" /* glr.c:788  */
    break;

  case 159:
#line 860 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"@asm command \n";
	                                         ((*yyvalp).r.node)=new AsmNode(scoop,*(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.string_val));
											 }
#line 2789 "yacc.cpp" /* glr.c:788  */
    break;

  case 160:
#line 866 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
														 ((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text);
														 ((*yyvalp).r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 2800 "yacc.cpp" /* glr.c:788  */
    break;

  case 161:
#line 872 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 ((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text);
														  ((*yyvalp).r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 2812 "yacc.cpp" /* glr.c:788  */
    break;

  case 162:
#line 879 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"variable_declaration:enum\n";}
#line 2818 "yacc.cpp" /* glr.c:788  */
    break;

  case 163:
#line 883 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"variable_list:variable_list COMMA variable\n";}
#line 2824 "yacc.cpp" /* glr.c:788  */
    break;

  case 164:
#line 884 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"variable_list:variable\n";
										
										}
#line 2832 "yacc.cpp" /* glr.c:788  */
    break;

  case 165:
#line 887 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ',' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2838 "yacc.cpp" /* glr.c:788  */
    break;

  case 166:
#line 890 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose() <<"variable:  IDENTIFIER array_tag initializer \n";
											 var=new Array((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),arrayAlloc.size(),NULL);
											(dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
											 arrayList.push_back( ( dynamic_cast<Array*>(var)));
											 arrayAlloc.clear();
											}
#line 2850 "yacc.cpp" /* glr.c:788  */
    break;

  case 167:
#line 897 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    { 
											Streams::verbose() <<"variable:  IDENTIFIER main_initializer \n";
											idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text)) ;
											IdentifierNode* identifierNode=new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),scoop);
											if((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node)!=NULL){
											(dynamic_cast<AssignNode*>((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node)))->setLeftExp(identifierNode);
											}
											declarationList.push_back(make_pair((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node)));
											}
#line 2864 "yacc.cpp" /* glr.c:788  */
    break;

  case 168:
#line 906 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2870 "yacc.cpp" /* glr.c:788  */
    break;

  case 169:
#line 909 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"return_statement: RETURN expr\n";
												 ((*yyvalp).r.node)=new ReturnNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node));
												}
#line 2878 "yacc.cpp" /* glr.c:788  */
    break;

  case 170:
#line 914 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"loop_statement: for_loop\n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2886 "yacc.cpp" /* glr.c:788  */
    break;

  case 171:
#line 917 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"loop_statement: while_loop\n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2894 "yacc.cpp" /* glr.c:788  */
    break;

  case 172:
#line 920 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"loop_statement: do_while_loop\n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2902 "yacc.cpp" /* glr.c:788  */
    break;

  case 173:
#line 925 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"do_while: do_header   statement   while_loop_header   SEMI_COMMA\n";
													((*yyvalp).r.node)=new DoWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),scoop);
													}
#line 2910 "yacc.cpp" /* glr.c:788  */
    break;

  case 174:
#line 930 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"do_header: DO\n";}
#line 2916 "yacc.cpp" /* glr.c:788  */
    break;

  case 175:
#line 933 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
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
#line 2937 "yacc.cpp" /* glr.c:788  */
    break;

  case 176:
#line 952 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer	SEMI_COMA logic_expr1 SEMI_COMA expr			CLOSE_P\n";
										((*yyvalp).r.node)=new ForNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),NULL,scoop);
										//nodeXX=$<r.node>5;
										}
#line 2946 "yacc.cpp" /* glr.c:788  */
    break;

  case 177:
#line 958 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr1 SEMI_COMA expr			CLOSE_P\n";
										((*yyvalp).r.node)=new ForNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),NULL,scoop);
										}
#line 2954 "yacc.cpp" /* glr.c:788  */
    break;

  case 178:
#line 962 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P\n";
										((*yyvalp).r.node)=new ForNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.node),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),NULL,scoop);
										}
#line 2962 "yacc.cpp" /* glr.c:788  */
    break;

  case 179:
#line 966 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr1 SEMI_COMA				CLOSE_P	\n";
										((*yyvalp).r.node)=new ForNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),NULL,NULL,scoop);
										}
#line 2970 "yacc.cpp" /* glr.c:788  */
    break;

  case 180:
#line 971 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	\n";
										((*yyvalp).r.node)=new ForNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),NULL,NULL,NULL,scoop);
										}
#line 2978 "yacc.cpp" /* glr.c:788  */
    break;

  case 181:
#line 975 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr1 SEMI_COMA				CLOSE_P\n";
										((*yyvalp).r.node)=new ForNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),NULL,NULL,scoop);
										}
#line 2986 "yacc.cpp" /* glr.c:788  */
    break;

  case 182:
#line 979 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P";
										((*yyvalp).r.node)=new ForNode(NULL,NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),NULL,scoop);
										}
#line 2994 "yacc.cpp" /* glr.c:788  */
    break;

  case 183:
#line 984 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_hearder: FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	\n";
											((*yyvalp).r.node)=new ForNode(NULL,NULL,NULL,NULL,scoop);
											}
#line 3002 "yacc.cpp" /* glr.c:788  */
    break;

  case 184:
#line 989 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_initializer: INT IDENTIFIER EQUAL expr\n";
											AssignNode * temp=new AssignNode(scoop,new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),scoop),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
											
											//temp->add($<r.text>2,);
											
											//temp.push_back(make_pair($<r.text>2,$<r.node>4));
											DeclerationNode* temp1=new DeclerationNode(list<pair<string,Node*>>(),scoop,"int");
											temp1->add((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),temp);
										 ((*yyvalp).r.node)=temp1; 
										 idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text));
										}
#line 3018 "yacc.cpp" /* glr.c:788  */
    break;

  case 185:
#line 1000 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_initializer: IDENTIFIER EQUAL expr\n";
										((*yyvalp).r.node)=new AssignNode(scoop,new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),scoop),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
										}
#line 3026 "yacc.cpp" /* glr.c:788  */
    break;

  case 186:
#line 1003 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_initializer: IDENTIFIER\n";
										((*yyvalp).r.node)=new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),scoop);
										}
#line 3034 "yacc.cpp" /* glr.c:788  */
    break;

  case 187:
#line 1008 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr AND! expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),AND_AND,scoop);
										}
#line 3042 "yacc.cpp" /* glr.c:788  */
    break;

  case 188:
#line 1011 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:logic_expr OR_OR logic_expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),OR_OR,scoop);
										}
#line 3050 "yacc.cpp" /* glr.c:788  */
    break;

  case 189:
#line 1014 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
										
										}
#line 3058 "yacc.cpp" /* glr.c:788  */
    break;

  case 190:
#line 1020 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr LESS_THAN expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),LESS_THAN,scoop);
										}
#line 3066 "yacc.cpp" /* glr.c:788  */
    break;

  case 191:
#line 1023 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr MORE_THAN expr\n";
										 ((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),MORE_THAN,scoop);
										}
#line 3074 "yacc.cpp" /* glr.c:788  */
    break;

  case 192:
#line 1026 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr LESS_OR_EQUAL expr\n";
										 ((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),LESS_OR_EQUAL,scoop);
										}
#line 3082 "yacc.cpp" /* glr.c:788  */
    break;

  case 193:
#line 1029 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr MORE_OR_EQUAL expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),MORE_OR_EQUAL,scoop);
										}
#line 3090 "yacc.cpp" /* glr.c:788  */
    break;

  case 194:
#line 1032 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr EQUAL_EQUAL expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),EQUAL_EQUAL,scoop);
										}
#line 3098 "yacc.cpp" /* glr.c:788  */
    break;

  case 195:
#line 1035 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr EQUAL_EQUAL expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),NOT_EQUAL,scoop);
										}
#line 3106 "yacc.cpp" /* glr.c:788  */
    break;

  case 196:
#line 1038 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:NOT_EQUAL expr\n";
										 ((*yyvalp).r.node)=new UnaryNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),NOT_EQUAL);
										}
#line 3114 "yacc.cpp" /* glr.c:788  */
    break;

  case 197:
#line 1041 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";
										 ((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
										}
#line 3122 "yacc.cpp" /* glr.c:788  */
    break;

  case 198:
#line 1045 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:TRUE\n";
										 ((*yyvalp).r.node)=new ConstantNode(true,scoop);
										}
#line 3130 "yacc.cpp" /* glr.c:788  */
    break;

  case 199:
#line 1048 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:FALSE\n";
											 ((*yyvalp).r.node)=new ConstantNode(false,scoop);
										}
#line 3138 "yacc.cpp" /* glr.c:788  */
    break;

  case 200:
#line 1051 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:long id\n";
											 ((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
										}
#line 3146 "yacc.cpp" /* glr.c:788  */
    break;

  case 201:
#line 1057 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"expr:assign_expr\n";
										 ((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
										}
#line 3154 "yacc.cpp" /* glr.c:788  */
    break;

  case 202:
#line 1060 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"expr:simple_expr\n";
										((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
										}
#line 3162 "yacc.cpp" /* glr.c:788  */
    break;

  case 203:
#line 1065 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"assign_expr:long_id EQUAL simple_expr\n";
										//LongIdHelper::checkIdenentifier( scoop, interface,"set1");
										((*yyvalp).r.node)=new AssignNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
										}
#line 3172 "yacc.cpp" /* glr.c:788  */
    break;

  case 204:
#line 1072 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"long_id: long_id.IDENTIFIER\n";
																((*yyvalp).r.node)=new DotNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));

											;}
#line 3181 "yacc.cpp" /* glr.c:788  */
    break;

  case 205:
#line 1076 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												Streams::verbose()<<"long_id: long_id.message_call\n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 3190 "yacc.cpp" /* glr.c:788  */
    break;

  case 206:
#line 1080 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																LongIdHelper::addIdentifier((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text)); 
																((*yyvalp).r.node)=new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),scoop);
																Streams::verbose()<<"long_id:IDENTIFIER :"<<(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text)<<"\n";
															   }
#line 3200 "yacc.cpp" /* glr.c:788  */
    break;

  case 207:
#line 1085 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"long_id: long_id.array_access\n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 3209 "yacc.cpp" /* glr.c:788  */
    break;

  case 208:
#line 1093 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
							Streams::verbose()<<"array_access: details\n";

							((*yyvalp).r.node)=new ArrayAccessNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),scoop);

						}
#line 3220 "yacc.cpp" /* glr.c:788  */
    break;

  case 209:
#line 1102 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"simple_expr:STRING_VAL\n";
									((*yyvalp).r.node)=new ConstantNode(*((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.string_val)),scoop);
									Streams::verbose()<<"node typr"<<((*yyvalp).r.node)->generateType()->get_name()<<"\n";
									((*yyvalp).r.string_val)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.string_val);
									}
#line 3231 "yacc.cpp" /* glr.c:788  */
    break;

  case 210:
#line 1108 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									Streams::verbose()<<"simple_expr:INT_VAL\n";
									((*yyvalp).r.node)=new ConstantNode(yylval.r.int_val,scoop);
									}
#line 3240 "yacc.cpp" /* glr.c:788  */
    break;

  case 211:
#line 1112 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:FLOAT_VAL\n";
									((*yyvalp).r.node)=new ConstantNode(yylval.r.float_val,scoop);
									}
#line 3248 "yacc.cpp" /* glr.c:788  */
    break;

  case 212:
#line 1115 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:CHAR_VAL\n";
										((*yyvalp).r.node)=new ConstantNode(yylval.r.char_val,scoop);
									}
#line 3256 "yacc.cpp" /* glr.c:788  */
    break;

  case 213:
#line 1118 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:long_id\n";
									((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
									}
#line 3264 "yacc.cpp" /* glr.c:788  */
    break;

  case 214:
#line 1121 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"simple_expr:expr PLUS expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),PLUS,scoop);
									}
#line 3273 "yacc.cpp" /* glr.c:788  */
    break;

  case 215:
#line 1125 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"simple_expr:expr MINUS expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),MINUS,scoop);
									}
#line 3282 "yacc.cpp" /* glr.c:788  */
    break;

  case 216:
#line 1129 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:expr MULTI expr\n";
											((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),MULTI,scoop);
									}
#line 3290 "yacc.cpp" /* glr.c:788  */
    break;

  case 217:
#line 1132 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									Streams::verbose()<<"simple_expr:expr DIV expr\n";
									((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),DIV,scoop);
									}
#line 3299 "yacc.cpp" /* glr.c:788  */
    break;

  case 218:
#line 1136 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:OPEN_P expr CLOSE_P\n";((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);}
#line 3305 "yacc.cpp" /* glr.c:788  */
    break;

  case 219:
#line 1137 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:ID++";}
#line 3311 "yacc.cpp" /* glr.c:788  */
    break;

  case 220:
#line 1138 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:ID--";}
#line 3317 "yacc.cpp" /* glr.c:788  */
    break;

  case 221:
#line 1139 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:++ID";}
#line 3323 "yacc.cpp" /* glr.c:788  */
    break;

  case 222:
#line 1140 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:--ID";}
#line 3329 "yacc.cpp" /* glr.c:788  */
    break;

  case 223:
#line 1141 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"expr:p_type expr\n";
																if(type!=NULL)
																((*yyvalp).r.node)=new CastNode(scoop,type,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
															}
#line 3339 "yacc.cpp" /* glr.c:788  */
    break;

  case 224:
#line 1148 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
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
#line 3355 "yacc.cpp" /* glr.c:788  */
    break;

  case 225:
#line 1161 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
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
#line 3370 "yacc.cpp" /* glr.c:788  */
    break;

  case 226:
#line 1173 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"sender: message_call\n";
											
											callNode->setSender((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
											 ((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											 
											}
#line 3381 "yacc.cpp" /* glr.c:788  */
    break;

  case 227:
#line 1179 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"sender: IDENTIFIER\n";
											((*yyvalp).r.node)=new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),scoop);
											
											//callNode=new CallNode(scoop);
											
											callNode->setSender(((*yyvalp).r.node));
											
											}
#line 3394 "yacc.cpp" /* glr.c:788  */
    break;

  case 228:
#line 1189 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"message: IDENTIFIER\n";
											((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text);
												
											}
#line 3403 "yacc.cpp" /* glr.c:788  */
    break;

  case 229:
#line 1193 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"message_selectors_list\n";
											//$<r.node>$=$<r.text>1;
											((*yyvalp).r.text)="";
											}
#line 3413 "yacc.cpp" /* glr.c:788  */
    break;

  case 230:
#line 1200 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"message_selectors_list:message_selectors_list message_selector \n";
												callNode->addSelector(cselector);
											cselector=NULL;
												}
#line 3423 "yacc.cpp" /* glr.c:788  */
    break;

  case 231:
#line 1205 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	callNode->addSelector(cselector);
							cselector=NULL;
								Streams::verbose()<<"message_selectors_list: message_selector\n";
											
		}
#line 3433 "yacc.cpp" /* glr.c:788  */
    break;

  case 232:
#line 1211 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									cselector->name=(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text);
							}
#line 3441 "yacc.cpp" /* glr.c:788  */
    break;

  case 233:
#line 1215 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"argument_list: argument_list argument\n";
												cselector->addArg((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));}
#line 3448 "yacc.cpp" /* glr.c:788  */
    break;

  case 234:
#line 1217 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"argument_list: argument\n";
												cselector=new CallSelector("");
											cselector->addArg((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));}
#line 3456 "yacc.cpp" /* glr.c:788  */
    break;

  case 235:
#line 1222 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"argument: SEMI_COLUMN expr\n";
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											//callNode->addArgument($<r.node>1,"");
											
											}
#line 3467 "yacc.cpp" /* glr.c:788  */
    break;

  case 236:
#line 1230 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"while_loop:while_loop_header statement\n";
											 ((*yyvalp).r.node)=new WhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),scoop);
										}
#line 3476 "yacc.cpp" /* glr.c:788  */
    break;

  case 237:
#line 1236 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
											}
#line 3484 "yacc.cpp" /* glr.c:788  */
    break;

  case 238:
#line 1241 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"conditional_statement: if_header statement\n";
												 ((*yyvalp).r.node)=new IfNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),scoop,NULL);
												}
#line 3492 "yacc.cpp" /* glr.c:788  */
    break;

  case 239:
#line 1244 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												Streams::verbose()<<"conditional_statement: if_header statement with else\n";
												 ((*yyvalp).r.node)=new IfNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),scoop,new ElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),scoop));
												}
#line 3501 "yacc.cpp" /* glr.c:788  */
    break;

  case 240:
#line 1248 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"conditional_statement: switch_header switch_body statement\n";
											((*yyvalp).r.node)=tempSwitch;
										}
#line 3509 "yacc.cpp" /* glr.c:788  */
    break;

  case 241:
#line 1253 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
											}
#line 3517 "yacc.cpp" /* glr.c:788  */
    break;

  case 242:
#line 1258 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"switch_header: SWITCH OPEN_P IDENTIFIER CLOSE_P\n";
										
										tempSwitch->setExpr(new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),scoop));
									}
#line 3526 "yacc.cpp" /* glr.c:788  */
    break;

  case 243:
#line 1264 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {scoop=new ScoopNode(scoop);tempSwitch=new SwitchNode(NULL,std::list<pair<Node*,Node*>>(),scoop);}
#line 3532 "yacc.cpp" /* glr.c:788  */
    break;

  case 244:
#line 1267 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3538 "yacc.cpp" /* glr.c:788  */
    break;

  case 245:
#line 1268 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3544 "yacc.cpp" /* glr.c:788  */
    break;

  case 246:
#line 1269 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3550 "yacc.cpp" /* glr.c:788  */
    break;

  case 247:
#line 1270 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3556 "yacc.cpp" /* glr.c:788  */
    break;

  case 248:
#line 1273 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3562 "yacc.cpp" /* glr.c:788  */
    break;

  case 249:
#line 1274 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3568 "yacc.cpp" /* glr.c:788  */
    break;

  case 250:
#line 1277 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node));}
#line 3574 "yacc.cpp" /* glr.c:788  */
    break;

  case 251:
#line 1278 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));}
#line 3580 "yacc.cpp" /* glr.c:788  */
    break;

  case 252:
#line 1279 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),NULL);}
#line 3586 "yacc.cpp" /* glr.c:788  */
    break;

  case 253:
#line 1282 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node));}
#line 3592 "yacc.cpp" /* glr.c:788  */
    break;

  case 254:
#line 1283 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));}
#line 3598 "yacc.cpp" /* glr.c:788  */
    break;

  case 255:
#line 1284 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node));}
#line 3604 "yacc.cpp" /* glr.c:788  */
    break;

  case 256:
#line 1286 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"protocol: protocol_header protocol_body\n";
										idsList.clear();
										methodsList.clear();
										method=NULL;
										}
#line 3615 "yacc.cpp" /* glr.c:788  */
    break;

  case 257:
#line 1294 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
								Streams::verbose()<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";
								protocol=ProtocolHelper ::createNewProtocol((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),symbolTable );
								
								}
#line 3625 "yacc.cpp" /* glr.c:788  */
    break;

  case 258:
#line 1301 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
								Streams::verbose()<<"protocol_body:	protocol_reference_list interface_declaration_list	AT_END\n";
								ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								idsList.clear();
								}
#line 3637 "yacc.cpp" /* glr.c:788  */
    break;

  case 259:
#line 1309 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
								Streams::verbose()<<"protocol_body:	interface_declaration_list	AT_END\n";
									
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								
								}
#line 3649 "yacc.cpp" /* glr.c:788  */
    break;

  case 260:
#line 1317 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
								Streams::verbose()<<"protocol_body:	protocol_reference_list AT_END	\n";
											ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								idsList.clear();
								}
#line 3659 "yacc.cpp" /* glr.c:788  */
    break;

  case 261:
#line 1323 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"protocol_body:	AT_END\n";}
#line 3665 "yacc.cpp" /* glr.c:788  */
    break;

  case 262:
#line 1325 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"enum: ENUM IDENTIFIER  OPEN_S list_expr CLOSE_S SEMI_COMA  \n";
																
																EnumHelper::createNewEnum( (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.text),idsList, symbolTable);
																idsList.clear();
															 }
#line 3676 "yacc.cpp" /* glr.c:788  */
    break;

  case 263:
#line 1331 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"enum: ENUM IDENTIFIER SEMI_COMA\n";
																EnumHelper::createNewEnum( (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),idsList, symbolTable);
															  }
#line 3685 "yacc.cpp" /* glr.c:788  */
    break;

  case 264:
#line 1338 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												Streams::verbose()<<"list_expr:IDENTIFIER EQUAL expr COMMA list_expr\n";
												idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.text));
													((*yyvalp).r.node)=new AssignNode(scoop,new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.text),scoop),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node));
												}
#line 3695 "yacc.cpp" /* glr.c:788  */
    break;

  case 265:
#line 1343 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												Streams::verbose()<<"list_expr:IDENTIFIER EQUAL expr\n";
												idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text));
												((*yyvalp).r.node)=new AssignNode(scoop,new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),scoop),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
												}
#line 3705 "yacc.cpp" /* glr.c:788  */
    break;

  case 266:
#line 1348 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
													Streams::verbose()<<"list_expr:IDENTIFIER \n";
													idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
													//??
												}
#line 3715 "yacc.cpp" /* glr.c:788  */
    break;

  case 267:
#line 1353 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												  Streams::verbose()<<"list_expr:IDENTIFIER  COMMA list_expr \n";
												  idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text));
												  //??
												}
#line 3725 "yacc.cpp" /* glr.c:788  */
    break;

  case 268:
#line 1360 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												  Streams::verbose()<<"try_catch:TRY statement catch_list finally_statement \n";
												}
#line 3733 "yacc.cpp" /* glr.c:788  */
    break;

  case 269:
#line 1364 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {				  
								Streams::verbose()<<"try_catch:TRY statement catch_list \n";
							  }
#line 3741 "yacc.cpp" /* glr.c:788  */
    break;

  case 270:
#line 1369 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"catch_list:CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 3747 "yacc.cpp" /* glr.c:788  */
    break;

  case 271:
#line 1370 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"catch_list:catch_list CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 3753 "yacc.cpp" /* glr.c:788  */
    break;


#line 3757 "yacc.cpp" /* glr.c:788  */
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
  (!!((Yystate) == (-448)))

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



#line 1375 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:2549  */

void yyerror(const char *s) {

Program::addError(new SyntaxError(s));

	fprintf (stderr, "%s\n", s);
	;
}

int yylex(){
	return lexer->yylex();

}
void main(int argc,      // Number of strings in array argv
          char *argv[]){
  //yydebug=1;
	 	string input = "code.txt";
	bool f = true;

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
		symbolTable->generateStatics();
		symbolTable->generateCode();
	Program::printErrors();
	ofs<<".data\n";
	MIPS_ASM::writeData();
		ofs<<"\n.text\n";

	ofs<<".globl main\n";
		ofs<<"main:\n";
	
	
	MIPS_ASM::writeCode();
	std::ifstream t_common("common.asm");
std::string str_common((std::istreambuf_iterator<char>(t_common)),
                 std::istreambuf_iterator<char>());
	ofs<<str_common<<"\n";
	
}
