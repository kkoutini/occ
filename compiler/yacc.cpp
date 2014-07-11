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

#line 167 "yacc.cpp" /* glr.c:207  */

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

#line 195 "yacc.cpp" /* glr.c:230  */

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
#define YYLAST   889

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  105
/* YYNRULES -- Number of rules.  */
#define YYNRULES  274
/* YYNRULES -- Number of states.  */
#define YYNSTATES  492
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 8
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   220,   220,   223,   224,   225,   227,   228,   229,   230,
     231,   233,   242,   247,   252,   254,   256,   262,   266,   271,
     276,   280,   282,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   300,   307,   310,   314,   319,   320,   324,
     325,   326,   327,   328,   329,   332,   333,   336,   337,   338,
     341,   344,   352,   363,   364,   365,   370,   373,   376,   380,
     384,   388,   389,   392,   398,   399,   400,   402,   410,   417,
     421,   427,   428,   429,   430,   431,   432,   433,   434,   437,
     438,   439,   443,   444,   445,   446,   450,   459,   470,   479,
     490,   499,   507,   515,   523,   531,   541,   552,   557,   561,
     562,   565,   569,   575,   578,   580,   585,   590,   596,   604,
     605,   609,   617,   618,   621,   630,   639,   643,   645,   651,
     659,   665,   669,   678,   691,   694,   699,   705,   711,   714,
     720,   723,   724,   727,   728,   731,   740,   751,   761,   770,
     777,   789,   793,   797,   803,   808,   817,   821,   825,   831,
     840,   843,   847,   849,   852,   856,   858,   861,   866,   872,
     878,   885,   889,   890,   893,   896,   903,   912,   915,   920,
     923,   926,   931,   936,   939,   957,   963,   967,   971,   976,
     980,   984,   989,   995,  1006,  1009,  1014,  1017,  1020,  1026,
    1029,  1032,  1035,  1038,  1041,  1044,  1047,  1051,  1054,  1057,
    1063,  1066,  1071,  1078,  1082,  1086,  1091,  1099,  1108,  1114,
    1120,  1124,  1127,  1130,  1134,  1138,  1141,  1145,  1149,  1150,
    1151,  1152,  1153,  1154,  1161,  1174,  1186,  1192,  1202,  1206,
    1213,  1218,  1224,  1228,  1230,  1235,  1243,  1249,  1254,  1257,
    1261,  1266,  1271,  1277,  1280,  1281,  1282,  1283,  1286,  1287,
    1290,  1291,  1292,  1295,  1296,  1297,  1299,  1307,  1313,  1321,
    1329,  1335,  1338,  1344,  1351,  1356,  1361,  1366,  1373,  1377,
    1383,  1385,  1390,  1394,  1397
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
  "TRY", "CATCH", "THROW", "FINALLY", "AT_ASM", "SELF", "IMPORT", "if_h",
  "expr_1", "p_type_expr_prec", "long_id_prec", "try_prec", "$accept",
  "program", "components", "component", "class_interface",
  "class_interface_header", "class_interface_body",
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

#define YYPACT_NINF -307
#define YYTABLE_NINF -200

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
       6,   222,    41,    63,   106,   146,   135,    55,    38,  -307,
    -307,   568,   162,  -307,  -307,   332,  -307,   388,  -307,  -307,
     188,   201,   284,  -307,  -307,   302,  -307,  -307,   805,   315,
    -307,    21,   334,  -307,   281,    83,   151,  -307,  -307,  -307,
     639,  -307,   334,   334,   304,  -307,   358,  -307,  -307,   325,
    -307,   325,  -307,   423,   518,  -307,   236,   364,  -307,   383,
    -307,   356,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,   830,  -307,   393,   416,   253,  -307,   355,   355,  -307,
     283,  -307,  -307,  -307,  -307,  -307,   100,   449,   830,   452,
     461,   464,  -307,   452,   540,  -307,   346,   365,  -307,  -307,
     398,  -307,  -307,  -307,   355,    28,   456,  -307,   355,   452,
     452,  -307,   576,  -307,  -307,  -307,  -307,   329,  -307,  -307,
     585,  -307,  -307,  -307,  -307,    -3,   467,  -307,   295,   432,
     444,  -307,  -307,  -307,   355,   436,    12,   214,  -307,  -307,
     493,  -307,   334,   475,   127,  -307,   449,  -307,   494,  -307,
     597,  -307,  -307,   479,  -307,  -307,  -307,  -307,  -307,   254,
     491,  -307,   168,   306,  -307,  -307,  -307,  -307,     5,   356,
    -307,   830,   487,   490,   496,  -307,   497,   507,  -307,   259,
     511,   498,   495,   404,  -307,  -307,   394,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,   511,  -307,   511,   517,    51,  -307,
      44,  -307,  -307,   511,  -307,   511,    73,  -307,  -307,  -307,
     383,   259,   527,    12,   316,  -307,  -307,    70,  -307,  -307,
    -307,   140,  -307,   414,  -307,   536,   541,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,  -307,   454,   534,  -307,
     373,  -307,   270,  -307,  -307,   404,   421,   647,   647,   543,
      15,   293,   607,  -307,  -307,  -307,  -307,   545,   549,   259,
     548,  -307,    -1,   307,   555,   504,   502,   558,   436,   112,
     170,  -307,  -307,  -307,   516,  -307,  -307,  -307,   259,   259,
     569,  -307,  -307,   571,  -307,   528,  -307,   259,   589,  -307,
      81,  -307,   578,  -307,   580,  -307,  -307,  -307,   550,  -307,
     567,  -307,   436,  -307,  -307,   334,   584,  -307,  -307,  -307,
     609,  -307,   244,   582,   622,   128,   618,   573,   259,  -307,
    -307,   448,  -307,   552,   422,   469,   604,  -307,  -307,   293,
     105,   177,  -307,  -307,   307,  -307,   259,   259,   259,   259,
     259,   610,    50,  -307,   511,   617,  -307,   596,   259,   596,
    -307,   404,  -307,   404,   641,   307,   131,  -307,   645,   600,
     650,  -307,   511,   652,   420,  -307,  -307,   638,  -307,   383,
    -307,    23,  -307,  -307,  -307,   259,   619,   212,   166,   196,
     636,   177,  -307,  -307,   647,   647,   259,   259,   259,   259,
     259,   259,  -307,   648,  -307,   272,   272,  -307,  -307,  -307,
     830,   511,  -307,  -307,  -307,   654,   651,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,   259,  -307,   645,  -307,  -307,   485,
     659,   621,  -307,  -307,   623,   624,  -307,   259,  -307,   653,
     722,   733,   204,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,   668,  -307,  -307,   679,  -307,  -307,
     669,  -307,   664,   634,  -307,   674,  -307,  -307,  -307,  -307,
    -307,   660,  -307,   661,   746,   662,   690,  -307,   675,   673,
     259,  -307,   682,  -307,  -307,  -307,  -307,   670,  -307,   685,
     683,  -307,   771,  -307,  -307,  -307,   771,   686,  -307,  -307,
     771,  -307
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     2,     4,
       6,     0,     0,     9,     7,     0,     8,     0,    10,    14,
      13,   126,     0,   257,    70,     0,     1,     3,     0,     0,
      23,     0,     0,    11,     0,     0,     0,   108,   109,   110,
       0,   130,     0,     0,     0,   124,     0,   132,   133,     0,
     134,     0,   261,     0,     0,   256,     0,     0,   263,     0,
       5,     0,    93,    92,    91,    95,    90,    55,    54,    53,
      46,     0,    94,     0,     0,     0,    48,    49,     0,    52,
       0,    84,    85,    82,    83,    36,     0,   117,     0,     0,
       0,   116,   119,     0,    26,    20,     0,     0,    31,    21,
       0,    32,    22,   107,     0,     0,     0,    68,    56,     0,
       0,   128,     0,   129,   131,   140,   135,     0,   137,   260,
       0,   259,    15,    12,   125,   266,     0,    96,     0,    88,
      86,    45,    47,    51,    50,    62,     0,     0,    61,    34,
       0,    33,     0,     0,     0,   113,     0,   118,     0,    24,
       0,    28,    17,     0,    29,    18,    30,    19,    69,     0,
      80,    73,     0,     0,    67,   136,   138,   127,     0,   205,
     142,     0,     0,     0,     0,   173,     0,     0,   224,     0,
       0,     0,     0,     0,   150,   139,     0,   145,   155,   153,
     149,   151,   146,   171,     0,   169,     0,     0,     0,   206,
       0,   204,   170,     0,   147,     0,     0,   161,   152,   258,
       0,     0,     0,     0,     0,    89,    87,     0,    65,    99,
      66,     0,    57,     0,    35,     0,   120,   122,   115,   112,
     111,   114,    25,    27,    16,    77,    81,     0,     0,    71,
       0,    74,     0,   156,   143,     0,     0,     0,     0,     0,
      88,   205,     0,   208,   210,   211,   209,     0,     0,     0,
       0,   200,   212,   201,     0,     0,     0,     0,     0,   106,
       0,   163,   141,   144,     0,   174,   148,   154,     0,     0,
       0,   227,   226,     0,   236,   238,   247,     0,     0,   240,
       0,   249,     0,   267,   265,   262,    63,    58,     0,   102,
      97,    59,     0,    60,   123,     0,     0,    79,    75,    78,
       0,    72,     0,   185,     0,     0,     0,     0,     0,   197,
     198,     0,   188,     0,   212,     0,     0,   219,   220,   205,
     212,     0,   221,   222,   223,   168,     0,     0,     0,     0,
       0,     0,   269,   270,     0,     0,   158,   104,     0,   104,
     166,     0,   159,     0,     0,   202,     0,   203,   228,     0,
     229,   231,     0,     0,     0,   245,   248,     0,   246,     0,
     101,     0,   121,    76,   160,     0,     0,     0,     0,     0,
       0,   201,   195,   237,     0,     0,     0,     0,     0,     0,
       0,     0,   241,     0,   218,   213,   214,   215,   216,   217,
       0,     0,   271,   268,   272,     0,     0,   167,   105,   165,
     164,   162,   172,   207,     0,   225,     0,   230,   239,     0,
       0,   254,   244,   264,     0,     0,   184,     0,   182,     0,
       0,     0,     0,   196,   186,   187,   189,   190,   191,   192,
     193,   194,   243,   242,     0,   274,   157,     0,   103,   235,
     232,   234,     0,   251,   255,     0,   100,    98,   183,   181,
     180,     0,   179,     0,     0,     0,     0,    38,     0,    40,
       0,   252,     0,   253,   176,   177,   178,     0,   273,    41,
       0,    37,     0,   233,   250,   175,     0,    43,    39,    44,
       0,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -307,  -307,  -307,   704,  -307,  -307,  -307,   698,  -307,  -307,
      24,    97,  -307,   642,   640,  -307,  -307,   -35,   591,   500,
    -307,  -307,  -307,  -155,   -28,  -307,  -307,  -307,  -307,  -132,
    -307,  -307,   371,  -307,    19,   -26,  -307,  -307,   -25,   233,
    -307,   637,  -307,   424,  -307,  -307,  -307,   688,   -27,  -307,
    -307,  -307,  -307,   143,  -307,  -307,  -307,  -159,  -307,  -307,
    -307,   482,    84,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -245,  -306,  -178,  -103,   -61,  -307,  -191,  -307,  -180,  -307,
    -307,  -307,   370,  -307,   263,  -307,   460,  -307,  -307,  -307,
    -307,  -307,  -307,   445,   446,  -307,  -307,  -307,   221,  -208,
    -307,  -307,   396,  -307,  -307
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    33,    34,    86,   448,
     468,    35,    75,    76,    77,    78,   106,    79,   137,   138,
     108,    12,    13,   162,   183,    81,    82,    83,    84,   218,
     300,   219,   407,   350,    36,    37,    38,    39,   259,    90,
      91,    92,   226,   227,    14,    15,    45,    46,    47,    48,
      49,    50,    51,   184,   117,   185,   186,   187,   188,   189,
     190,   270,   271,   191,   192,   193,   194,   195,   196,   316,
     321,   322,   323,   261,   262,   199,   263,   200,   201,   283,
     359,   360,   361,   450,   451,   202,   203,   204,   205,   206,
     443,   289,   290,   291,   292,    16,    17,    55,   207,   126,
     208,   342,   343,   344,   403
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
      80,   260,   293,   325,   221,   107,    89,    93,   242,     1,
     103,   380,    80,   220,   197,   210,   243,   109,   110,   114,
     282,   265,   244,   -64,   424,    87,    58,   273,   103,   159,
     -64,    59,   160,   294,     2,   274,    54,   275,   211,   161,
     278,     1,   133,   128,   284,    21,   285,    88,   281,    80,
      80,   279,   215,    97,   100,    26,   198,     3,   425,   280,
     143,   331,   277,     4,   217,     5,     2,    22,   334,   158,
     378,   103,   120,   164,   103,     6,    80,   197,   434,   435,
      80,   296,   307,   197,    98,   114,   345,   355,   356,     3,
     286,   197,   278,   197,   103,     4,   178,     5,   365,   133,
     197,   139,   197,   279,    99,   298,    80,    31,    32,   363,
      23,   280,    44,   150,   341,   153,   401,   225,   140,   198,
     141,   287,   288,   299,   103,   198,   381,   103,   229,   287,
     288,    96,   251,   198,   432,   198,   347,   349,   230,   377,
     382,   301,   198,   245,   198,   395,   396,   397,   398,   399,
      24,   -63,   101,   348,   317,   336,   337,   279,   -63,   253,
     254,   423,   255,   256,   217,   280,    25,   318,   338,   238,
     408,   351,   102,   339,   340,    31,    32,   430,    40,   239,
     178,   352,   319,   320,   413,   404,   324,   324,   353,   257,
     258,   330,   116,    56,   118,   384,   385,   426,   330,   429,
     251,   336,   337,   418,   394,   421,    57,   431,   436,   437,
     438,   439,   440,   441,   338,   464,   251,   330,   330,   339,
     340,    18,   317,    19,   143,   222,    20,   253,   254,    18,
     255,   256,   223,   384,   385,   318,   449,   122,   252,   428,
     123,   197,   445,   253,   254,   351,   255,   256,   178,   458,
     319,   320,   461,   463,   324,   374,   324,   257,   258,   197,
     453,   197,   353,   251,   178,   235,    67,    68,    69,   469,
     131,   310,   236,   257,   258,   330,   330,   330,   330,   330,
     225,   311,    94,   198,   135,   252,   477,   136,   469,   143,
     253,   254,   449,   255,   256,    58,   135,    28,   197,   213,
      59,   198,    95,   198,   469,    31,    32,   240,   469,   338,
     160,   178,   469,    60,   339,   340,   197,   241,   324,    85,
     257,   258,   144,   324,   324,   111,   148,   297,    42,    43,
     168,   336,   337,   169,   223,    62,    63,    64,    65,    66,
     198,   115,   165,   166,   338,   115,   170,   151,    28,   339,
     340,   171,    72,    41,   327,   328,    42,    43,   198,    61,
      88,    62,    63,    64,    65,    66,   154,   152,   124,   172,
      31,    32,   444,   173,   174,   175,   176,    71,    72,   113,
     177,   178,    42,    43,   309,   179,   155,   125,    74,    31,
      32,   236,   180,   127,   181,   264,   182,   129,   169,   156,
      62,    63,    64,    65,    66,   268,    73,    29,   269,    52,
     115,   272,    31,    32,    74,   302,   171,    72,   213,   157,
     130,   264,    31,    32,   169,   313,    62,    63,    64,    65,
      66,   314,   315,  -199,   172,   410,   115,   411,   173,   174,
     175,   176,   171,    72,   119,   177,   178,    31,    32,  -199,
     179,  -199,  -199,    74,   142,   306,    87,   180,   160,   181,
     172,   182,   145,   278,   173,   174,   175,   176,   146,   215,
     420,   177,   178,   163,   279,   383,   179,   384,   385,    74,
     233,   216,   280,   180,   212,   181,   264,   182,   217,   169,
     480,    62,    63,    64,    65,    66,   392,   224,   384,   385,
     234,   115,   228,    31,    32,   231,   488,   171,    72,   237,
     489,   250,   264,   246,   491,   169,   247,    62,    63,    64,
      65,    66,   248,   249,   266,   172,   267,   115,   276,   173,
     174,   175,   176,   171,    72,   452,   177,   178,   295,   121,
     304,   179,    31,    32,    74,   308,   305,   326,   180,   332,
     181,   172,   182,   333,   178,   173,   174,   175,   176,   335,
     173,   149,   177,   178,    31,    32,   243,   179,   341,   346,
      74,   386,   387,   357,   180,   358,   181,   329,   182,    62,
      63,    64,    65,    66,    28,   388,   362,    29,   389,    30,
     390,   391,    31,    32,   364,   368,    72,   167,   369,   317,
      42,    43,   236,   370,   253,   254,   209,   255,   256,    31,
      32,   329,   318,    62,    63,    64,    65,    66,   232,   371,
     373,    31,    32,   375,    73,   178,   376,   319,   320,   379,
      72,   393,    74,   252,   257,   258,   400,   406,   253,   254,
     104,   255,   256,    61,   405,    62,    63,    64,    65,    66,
     414,   251,   412,   415,   416,   422,   105,   419,    73,   178,
     427,    71,    72,   433,   442,   446,    74,   447,   257,   258,
     454,   455,   465,   317,   470,   471,   456,   457,   253,   254,
     459,   255,   256,   251,   472,   473,   318,   474,   475,   478,
      73,   482,   481,   484,   251,   466,   467,   485,    74,   178,
     487,   319,   320,   486,   490,   252,   466,   479,   257,   258,
     253,   254,    27,   255,   256,    53,   252,   132,   134,   214,
     409,   253,   254,   303,   255,   256,   251,   312,   147,   372,
     417,   178,   112,   483,   354,   366,   367,   251,   402,     0,
     257,   258,   178,     0,     0,     0,     0,     0,   252,   460,
     251,   257,   258,   253,   254,     0,   255,   256,     0,   252,
     462,     0,     0,     0,   253,   254,     0,   255,   256,     0,
       0,     0,   252,   476,   178,   251,     0,   253,   254,     0,
     255,   256,     0,   257,   258,   178,     0,   466,     0,     0,
       0,     0,     0,     0,   257,   258,     0,   252,   178,     0,
       0,     0,   253,   254,     0,   255,   256,   257,   258,    61,
       0,    62,    63,    64,    65,    66,     0,     0,    67,    68,
      69,     0,    70,   178,     0,     0,     0,    71,    72,     0,
       0,     0,   257,   258,    61,     0,    62,    63,    64,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,     0,    73,     0,     0,     0,
       0,     0,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,     0,     0,     0,    74
};

static const short int yycheck[] =
{
      28,   179,   210,   248,   136,    40,    31,    32,   163,     3,
      36,   317,    40,     1,   117,    18,    11,    42,    43,    46,
     200,   180,    17,    11,     1,     4,    11,   186,    54,     1,
      18,    16,     4,   211,    28,   194,    17,   196,    41,    11,
      41,     3,    77,    71,   203,     4,   205,    26,     4,    77,
      78,    52,    37,    34,    35,     0,   117,    51,    35,    60,
      88,   252,    11,    57,    52,    59,    28,     4,   259,   104,
     315,    97,    53,   108,   100,    69,   104,   180,   384,   385,
     108,   213,   237,   186,     1,   112,   266,   278,   279,    51,
      17,   194,    41,   196,   120,    57,    52,    59,    17,   134,
     203,     1,   205,    52,    21,    35,   134,    24,    25,   287,
       4,    60,    15,    94,    64,    96,    66,   142,    18,   180,
      20,    48,    49,    53,   150,   186,   317,   153,     1,    48,
      49,    34,     4,   194,   379,   196,   268,   269,    11,    11,
     318,     1,   203,   171,   205,   336,   337,   338,   339,   340,
       4,    11,     1,    41,    26,    24,    25,    52,    18,    31,
      32,   369,    34,    35,    52,    60,    31,    39,    37,     1,
     348,     1,    21,    42,    43,    24,    25,    11,    16,    11,
      52,    11,    54,    55,    53,   344,   247,   248,    18,    61,
      62,   252,    49,     5,    51,    29,    30,   375,   259,   377,
       4,    24,    25,   362,    27,   364,     5,    11,   386,   387,
     388,   389,   390,   391,    37,    11,     4,   278,   279,    42,
      43,     0,    26,     1,   252,    11,     4,    31,    32,     8,
      34,    35,    18,    29,    30,    39,   414,     1,    26,    27,
       4,   344,   401,    31,    32,     1,    34,    35,    52,   427,
      54,    55,   430,   431,   315,    11,   317,    61,    62,   362,
     419,   364,    18,     4,    52,    11,    13,    14,    15,   447,
      17,     1,    18,    61,    62,   336,   337,   338,   339,   340,
     305,    11,     1,   344,     1,    26,   464,     4,   466,   317,
      31,    32,   470,    34,    35,    11,     1,    16,   401,     4,
      16,   362,    21,   364,   482,    24,    25,     1,   486,    37,
       4,    52,   490,    11,    42,    43,   419,    11,   379,     4,
      61,    62,    89,   384,   385,    21,    93,    11,    24,    25,
       1,    24,    25,     4,    18,     6,     7,     8,     9,    10,
     401,    16,   109,   110,    37,    16,    17,     1,    16,    42,
      43,    22,    23,    21,    61,    62,    24,    25,   419,     4,
      26,     6,     7,     8,     9,    10,     1,    21,     4,    40,
      24,    25,   400,    44,    45,    46,    47,    22,    23,    21,
      51,    52,    24,    25,    11,    56,    21,     4,    59,    24,
      25,    18,    63,    37,    65,     1,    67,     4,     4,     1,
       6,     7,     8,     9,    10,     1,    51,    19,     4,    21,
      16,    17,    24,    25,    59,     1,    22,    23,     4,    21,
       4,     1,    24,    25,     4,     4,     6,     7,     8,     9,
      10,    10,    11,    11,    40,   351,    16,   353,    44,    45,
      46,    47,    22,    23,    21,    51,    52,    24,    25,    27,
      56,    29,    30,    59,     5,     1,     4,    63,     4,    65,
      40,    67,     1,    41,    44,    45,    46,    47,     4,    37,
      50,    51,    52,    17,    52,    27,    56,    29,    30,    59,
       1,    37,    60,    63,    17,    65,     1,    67,    52,     4,
     466,     6,     7,     8,     9,    10,    27,     4,    29,    30,
      21,    16,    27,    24,    25,    11,   482,    22,    23,    18,
     486,     4,     1,    26,   490,     4,    26,     6,     7,     8,
       9,    10,    26,    26,    26,    40,    31,    16,    11,    44,
      45,    46,    47,    22,    23,    50,    51,    52,    11,    21,
       4,    56,    24,    25,    59,    11,     5,     4,    63,     4,
      65,    40,    67,     4,    52,    44,    45,    46,    47,    11,
      44,    21,    51,    52,    24,    25,    11,    56,    64,    11,
      59,    19,    20,     4,    63,     4,    65,     4,    67,     6,
       7,     8,     9,    10,    16,    33,    58,    19,    36,    21,
      38,    39,    24,    25,     5,    17,    23,    21,    18,    26,
      24,    25,    18,    53,    31,    32,    21,    34,    35,    24,
      25,     4,    39,     6,     7,     8,     9,    10,    21,    52,
      11,    24,    25,    41,    51,    52,     4,    54,    55,    11,
      23,    27,    59,    26,    61,    62,    26,    41,    31,    32,
       1,    34,    35,     4,    27,     6,     7,     8,     9,    10,
       5,     4,    11,    53,     4,    17,    17,     5,    51,    52,
      41,    22,    23,    27,    16,    11,    59,    16,    61,    62,
      11,    50,     4,    26,     5,    11,    53,    53,    31,    32,
      27,    34,    35,     4,    50,    11,    39,    27,    27,    27,
      51,    18,    17,    11,     4,    16,    17,    27,    59,    52,
      17,    54,    55,    18,    18,    26,    16,    17,    61,    62,
      31,    32,     8,    34,    35,    17,    26,    75,    78,   128,
     349,    31,    32,   223,    34,    35,     4,   245,    91,   305,
     360,    52,    44,   470,   274,   290,   290,     4,   342,    -1,
      61,    62,    52,    -1,    -1,    -1,    -1,    -1,    26,    27,
       4,    61,    62,    31,    32,    -1,    34,    35,    -1,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    34,    35,    -1,
      -1,    -1,    26,    27,    52,     4,    -1,    31,    32,    -1,
      34,    35,    -1,    61,    62,    52,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    26,    52,    -1,
      -1,    -1,    31,    32,    -1,    34,    35,    61,    62,     4,
      -1,     6,     7,     8,     9,    10,    -1,    -1,    13,    14,
      15,    -1,    17,    52,    -1,    -1,    -1,    22,    23,    -1,
      -1,    -1,    61,    62,     4,    -1,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,    28,    51,    57,    59,    69,    76,    77,    78,
      79,    80,    96,    97,   119,   120,   170,   171,   173,     1,
       4,     4,     4,     4,     4,    31,     0,    78,    16,    19,
      21,    24,    25,    81,    82,    86,   109,   110,   111,   112,
      16,    21,    24,    25,    86,   121,   122,   123,   124,   125,
     126,   127,    21,    82,   109,   172,     5,     5,    11,    16,
      11,     4,     6,     7,     8,     9,    10,    13,    14,    15,
      17,    22,    23,    51,    59,    87,    88,    89,    90,    92,
      99,   100,   101,   102,   103,     4,    83,     4,    26,   113,
     114,   115,   116,   113,     1,    21,    86,   109,     1,    21,
     109,     1,    21,   110,     1,    17,    91,    92,    95,   113,
     113,    21,   122,    21,   123,    16,   128,   129,   128,    21,
     109,    21,     1,     4,     4,     4,   174,    37,    99,     4,
       4,    17,    88,    92,    89,     1,     4,    93,    94,     1,
      18,    20,     5,    99,   114,     1,     4,   116,   114,    21,
     109,     1,    21,   109,     1,    21,     1,    21,    92,     1,
       4,    11,    98,    17,    92,   114,   114,    21,     1,     4,
      17,    22,    40,    44,    45,    46,    47,    51,    52,    56,
      63,    65,    67,    99,   128,   130,   131,   132,   133,   134,
     135,   138,   139,   140,   141,   142,   143,   148,   149,   150,
     152,   153,   160,   161,   162,   163,   164,   173,   175,    21,
      18,    41,    17,     4,    93,    37,    37,    52,   104,   106,
       1,   104,    11,    18,     4,   113,   117,   118,    27,     1,
      11,    11,    21,     1,    21,    11,    18,    18,     1,    11,
       1,    11,    98,    11,    17,    99,    26,    26,    26,    26,
       4,     4,    26,    31,    32,    34,    35,    61,    62,   113,
     147,   148,   149,   151,     1,   132,    26,    31,     1,     4,
     136,   137,    17,   132,   132,   132,    11,    11,    41,    52,
      60,     4,   153,   154,   132,   132,    17,    48,    49,   166,
     167,   168,   169,   174,   147,    11,   104,    11,    35,    53,
     105,     1,     1,    94,     4,     5,     1,    98,    11,    11,
       1,    11,   136,     4,    10,    11,   144,    26,    39,    54,
      55,   145,   146,   147,   149,   145,     4,    61,    62,     4,
     149,   151,     4,     4,   151,    11,    24,    25,    37,    42,
      43,    64,   176,   177,   178,   153,    11,   104,    41,   104,
     108,     1,    11,    18,   161,   151,   151,     4,     4,   155,
     156,   157,    58,   147,     5,    17,   168,   169,    17,    18,
      53,    52,   118,    11,    11,    41,     4,    11,   145,    11,
     146,   151,   147,    27,    29,    30,    19,    20,    33,    36,
      38,    39,    27,    27,    27,   151,   151,   151,   151,   151,
      26,    66,   177,   179,   132,    27,    41,   107,   147,   107,
     137,   137,    11,    53,     5,    53,     4,   157,   132,     5,
      50,   132,    17,   174,     1,    35,   147,    41,    27,   147,
      11,    11,   145,    27,   146,   146,   147,   147,   147,   147,
     147,   147,    16,   165,    99,   132,    11,    16,    84,   147,
     158,   159,    50,   132,    11,    50,    53,    53,   147,    27,
      27,   147,    27,   147,    11,     4,    16,    17,    85,   147,
       5,    11,    50,    11,    27,    27,    27,   147,    27,    17,
      85,    17,    18,   159,    11,    27,    18,    17,    85,    85,
      18,    85
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    75,    76,    77,    77,    77,    78,    78,    78,    78,
      78,    79,    80,    80,    80,    80,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    85,    85,    85,    85,    86,    86,    87,    87,    87,
      88,    89,    89,    90,    90,    90,    91,    92,    92,    92,
      93,    93,    93,    94,    94,    94,    94,    95,    95,    95,
      96,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      98,    98,    99,    99,    99,    99,   100,   100,   101,   101,
     102,   102,   102,   102,   102,   102,   103,   104,   105,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   111,   112,   113,   114,   114,   115,   115,
     116,   117,   117,   118,   119,   120,   120,   121,   121,   121,
     121,   122,   122,   123,   123,   124,   125,   126,   127,   128,
     129,   130,   130,   130,   131,   131,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   133,   134,   135,
     135,   135,   136,   136,   136,   137,   137,   137,   138,   139,
     139,   139,   140,   141,   142,   143,   143,   143,   143,   143,
     143,   143,   143,   144,   144,   144,   145,   145,   145,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     147,   147,   148,   149,   149,   149,   149,   150,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   152,   153,   154,   154,   155,   155,
     156,   156,   157,   158,   158,   159,   160,   161,   162,   162,
     162,   163,   164,   165,   166,   166,   166,   166,   167,   167,
     168,   168,   168,   169,   169,   169,   170,   171,   172,   172,
     172,   172,   173,   173,   174,   174,   174,   174,   175,   175,
     176,   176,   177,   178,   179
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
       1,     1,     1,     1,     1,     1,     2,     2,     4,     0,
       4,     3,     2,     2,     0,     2,     0,     2,     1,     1,
       1,     4,     4,     3,     4,     3,     1,     1,     2,     1,
       3,     3,     1,     2,     2,     4,     2,     3,     2,     2,
       1,     2,     1,     1,     1,     2,     3,     2,     3,     2,
       1,     2,     1,     2,     2,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     2,     1,     2,     5,     3,     3,
       4,     1,     3,     1,     3,     3,     2,     3,     3,     1,
       1,     1,     4,     1,     2,     8,     7,     7,     7,     6,
       6,     6,     5,     4,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     1,     4,     1,     1,     1,     1,
       2,     1,     3,     3,     1,     1,     2,     4,     2,     4,
       2,     4,     5,     1,     3,     2,     2,     1,     2,     1,
       6,     4,     5,     5,     3,     4,     2,     2,     3,     2,
       2,     1,     6,     3,     5,     3,     1,     3,     4,     3,
       1,     2,     2,     5,     2
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
       0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   212,     0
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
#line 220 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"program: components\n"; 
										 }
#line 1512 "yacc.cpp" /* glr.c:788  */
    break;

  case 3:
#line 223 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"components: components component\n";}
#line 1518 "yacc.cpp" /* glr.c:788  */
    break;

  case 4:
#line 224 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"components: component\n";}
#line 1524 "yacc.cpp" /* glr.c:788  */
    break;

  case 5:
#line 225 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {addFile(*(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.string_val));}
#line 1530 "yacc.cpp" /* glr.c:788  */
    break;

  case 6:
#line 227 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_interface \n";}
#line 1536 "yacc.cpp" /* glr.c:788  */
    break;

  case 7:
#line 228 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_implementation \n";}
#line 1542 "yacc.cpp" /* glr.c:788  */
    break;

  case 8:
#line 229 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"protocol \n";}
#line 1548 "yacc.cpp" /* glr.c:788  */
    break;

  case 9:
#line 230 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct \n";}
#line 1554 "yacc.cpp" /* glr.c:788  */
    break;

  case 10:
#line 231 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"enum \n";}
#line 1560 "yacc.cpp" /* glr.c:788  */
    break;

  case 11:
#line 233 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_interface: class_interface_header class_interface_body\n";
																classNode=NULL;
																 idsList.clear();
																 methodsList.clear();
																 method=NULL;
																}
#line 1571 "yacc.cpp" /* glr.c:788  */
    break;

  case 12:
#line 242 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																				interface=InterfaceHelper::createNewInterface((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),symbolTable);
																				
																				
																				}
#line 1581 "yacc.cpp" /* glr.c:788  */
    break;

  case 13:
#line 247 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																					Streams::verbose()<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
																				 interface=InterfaceHelper::createNewInterface((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),"",symbolTable);

																				}
#line 1591 "yacc.cpp" /* glr.c:788  */
    break;

  case 14:
#line 252 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1597 "yacc.cpp" /* glr.c:788  */
    break;

  case 15:
#line 254 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1603 "yacc.cpp" /* glr.c:788  */
    break;

  case 16:
#line 257 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	
															
														InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														}
#line 1613 "yacc.cpp" /* glr.c:788  */
    break;

  case 17:
#line 263 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														}
#line 1621 "yacc.cpp" /* glr.c:788  */
    break;

  case 18:
#line 267 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	protocol_reference_list interface_declaration_list	AT_END\n";
														}
#line 1630 "yacc.cpp" /* glr.c:788  */
    break;

  case 19:
#line 272 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														}
#line 1639 "yacc.cpp" /* glr.c:788  */
    break;

  case 20:
#line 277 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														}
#line 1647 "yacc.cpp" /* glr.c:788  */
    break;

  case 21:
#line 281 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_interface_body:instance_variables		AT_END\n";}
#line 1653 "yacc.cpp" /* glr.c:788  */
    break;

  case 22:
#line 283 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {														
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:interface_declaration_list	AT_END\n";
														}
#line 1662 "yacc.cpp" /* glr.c:788  */
    break;

  case 23:
#line 287 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_interface_body:AT_END\n";}
#line 1668 "yacc.cpp" /* glr.c:788  */
    break;

  case 24:
#line 288 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1674 "yacc.cpp" /* glr.c:788  */
    break;

  case 25:
#line 289 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1680 "yacc.cpp" /* glr.c:788  */
    break;

  case 26:
#line 290 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1686 "yacc.cpp" /* glr.c:788  */
    break;

  case 27:
#line 291 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1692 "yacc.cpp" /* glr.c:788  */
    break;

  case 28:
#line 292 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1698 "yacc.cpp" /* glr.c:788  */
    break;

  case 29:
#line 293 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1704 "yacc.cpp" /* glr.c:788  */
    break;

  case 30:
#line 294 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1710 "yacc.cpp" /* glr.c:788  */
    break;

  case 31:
#line 295 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1716 "yacc.cpp" /* glr.c:788  */
    break;

  case 32:
#line 296 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1722 "yacc.cpp" /* glr.c:788  */
    break;

  case 33:
#line 300 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
													if(interface!=NULL){
													InterfaceHelper::addInheritedProtocol(interface,idsList,symbolTable);
														idsList.clear();
													}
													Streams::verbose()<<"protocol_reference_list: LESS_THAN ids_list_identifier MORE_THAN\n";
												}
#line 1734 "yacc.cpp" /* glr.c:788  */
    break;

  case 34:
#line 307 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected '>' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1740 "yacc.cpp" /* glr.c:788  */
    break;

  case 35:
#line 310 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
													Streams::verbose()<<"ids_list:ids_list_identifier COMMA IDENTIFIER\n"; 
													idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
													}
#line 1749 "yacc.cpp" /* glr.c:788  */
    break;

  case 36:
#line 314 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
													Streams::verbose()<<"ids_list_identifier:IDENTIFIER\n";
													idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
												    }
#line 1758 "yacc.cpp" /* glr.c:788  */
    break;

  case 37:
#line 319 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"array with body";}
#line 1764 "yacc.cpp" /* glr.c:788  */
    break;

  case 38:
#line 320 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"array without elements";}
#line 1770 "yacc.cpp" /* glr.c:788  */
    break;

  case 39:
#line 324 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"array-element \n";}
#line 1776 "yacc.cpp" /* glr.c:788  */
    break;

  case 40:
#line 325 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"array-element \n";}
#line 1782 "yacc.cpp" /* glr.c:788  */
    break;

  case 41:
#line 326 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"empty element \n";}
#line 1788 "yacc.cpp" /* glr.c:788  */
    break;

  case 42:
#line 327 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"inside braces element \n";}
#line 1794 "yacc.cpp" /* glr.c:788  */
    break;

  case 43:
#line 328 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"inside braces element \n";}
#line 1800 "yacc.cpp" /* glr.c:788  */
    break;

  case 44:
#line 329 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"inside braces element \n";}
#line 1806 "yacc.cpp" /* glr.c:788  */
    break;

  case 45:
#line 332 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";}
#line 1812 "yacc.cpp" /* glr.c:788  */
    break;

  case 46:
#line 333 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variables:OPEN_S	 CLOSE_S\n";}
#line 1818 "yacc.cpp" /* glr.c:788  */
    break;

  case 47:
#line 336 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";}
#line 1824 "yacc.cpp" /* glr.c:788  */
    break;

  case 48:
#line 337 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variable_declarations:instance_variable_declaration\n";}
#line 1830 "yacc.cpp" /* glr.c:788  */
    break;

  case 49:
#line 338 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variable_declarations:variable_declaration_list\n";}
#line 1836 "yacc.cpp" /* glr.c:788  */
    break;

  case 50:
#line 341 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"instance_variable_declaration:visibility_specification variable_declaration_list\n";
																	}
#line 1843 "yacc.cpp" /* glr.c:788  */
    break;

  case 51:
#line 345 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
											arrayList.clear();
												idsList.clear();
												flag=false;
										}
#line 1855 "yacc.cpp" /* glr.c:788  */
    break;

  case 52:
#line 353 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										       InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
												arrayList.clear();
												idsList.clear();
												flag=false;
										Streams::verbose()<<"variable_declaration_list: variable_declaration\n";
										}
#line 1867 "yacc.cpp" /* glr.c:788  */
    break;

  case 53:
#line 363 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"visibility_specification:AT_PRIVATE\n";  visibility=new char[256]; visibility[0]='\0';strcat(visibility,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));}
#line 1873 "yacc.cpp" /* glr.c:788  */
    break;

  case 54:
#line 364 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"visibility_specification:AT_PROTECTED\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));}
#line 1879 "yacc.cpp" /* glr.c:788  */
    break;

  case 55:
#line 365 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"visibility_specification:AT_PUBLIC\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));}
#line 1885 "yacc.cpp" /* glr.c:788  */
    break;

  case 56:
#line 370 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct_variable_declaration:struct_declaration_list\n";}
#line 1891 "yacc.cpp" /* glr.c:788  */
    break;

  case 57:
#line 373 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
	                                           ((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text);
												}
#line 1899 "yacc.cpp" /* glr.c:788  */
    break;

  case 58:
#line 376 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 ((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text);
													}
#line 1908 "yacc.cpp" /* glr.c:788  */
    break;

  case 59:
#line 380 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1914 "yacc.cpp" /* glr.c:788  */
    break;

  case 60:
#line 384 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									Streams::verbose()<<"ids_list:ids_list COMMA id_dec\n"; 

									}
#line 1923 "yacc.cpp" /* glr.c:788  */
    break;

  case 61:
#line 388 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"ids_list:id_dec\n"; }
#line 1929 "yacc.cpp" /* glr.c:788  */
    break;

  case 62:
#line 389 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1935 "yacc.cpp" /* glr.c:788  */
    break;

  case 63:
#line 392 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose() <<" data_member: IDENTIFIER array_tag \n";
							 var=new Array((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),arrayAlloc.size(),NULL);
					       ( dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
						   arrayList.push_back( ( dynamic_cast<Array*>(var)));
						      arrayAlloc.clear();
							}
#line 1946 "yacc.cpp" /* glr.c:788  */
    break;

  case 64:
#line 398 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text)) ;Streams::verbose() <<" data_member: IDENTIFIER  \n";}
#line 1952 "yacc.cpp" /* glr.c:788  */
    break;

  case 65:
#line 399 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 1958 "yacc.cpp" /* glr.c:788  */
    break;

  case 66:
#line 400 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 1964 "yacc.cpp" /* glr.c:788  */
    break;

  case 67:
#line 402 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {  
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																												idsList.clear();
																												flag=false;
																										  Streams::verbose()<<"struct_declaration_list: struct_declaration_list  variable_declarationxx\n";
																										}
#line 1976 "yacc.cpp" /* glr.c:788  */
    break;

  case 68:
#line 410 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																														 	idsList.clear();
																															flag=false;
																										Streams::verbose()<<"struct_declaration_list:  variable_declarationxx\n";
																										}
#line 1988 "yacc.cpp" /* glr.c:788  */
    break;

  case 69:
#line 417 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Illigal visibility specification at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 1994 "yacc.cpp" /* glr.c:788  */
    break;

  case 70:
#line 421 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
					myStruct=StructHelper::createNewStruct((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),symbolTable);
					Streams::verbose()<<"struct_header: STRUCT  IDENTIFIER\n";
					}
#line 2003 "yacc.cpp" /* glr.c:788  */
    break;

  case 71:
#line 427 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S  entity SEMI_COMA\n";}
#line 2009 "yacc.cpp" /* glr.c:788  */
    break;

  case 72:
#line 428 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S enteity SEMI_COMA \n";}
#line 2015 "yacc.cpp" /* glr.c:788  */
    break;

  case 73:
#line 429 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S SEMI_COMA\n";}
#line 2021 "yacc.cpp" /* glr.c:788  */
    break;

  case 74:
#line 430 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S  SEMI_COMA  \n";}
#line 2027 "yacc.cpp" /* glr.c:788  */
    break;

  case 75:
#line 431 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2033 "yacc.cpp" /* glr.c:788  */
    break;

  case 76:
#line 432 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2039 "yacc.cpp" /* glr.c:788  */
    break;

  case 77:
#line 433 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2045 "yacc.cpp" /* glr.c:788  */
    break;

  case 78:
#line 434 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2051 "yacc.cpp" /* glr.c:788  */
    break;

  case 79:
#line 437 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"entity: IDENTIFIER COMMA  entity\n";}
#line 2057 "yacc.cpp" /* glr.c:788  */
    break;

  case 80:
#line 438 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"entity:  IDENTIFIER \n";}
#line 2063 "yacc.cpp" /* glr.c:788  */
    break;

  case 81:
#line 439 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2069 "yacc.cpp" /* glr.c:788  */
    break;

  case 82:
#line 443 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"type:simple type\n";}
#line 2075 "yacc.cpp" /* glr.c:788  */
    break;

  case 83:
#line 444 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"type: complex type\n";}
#line 2081 "yacc.cpp" /* glr.c:788  */
    break;

  case 84:
#line 445 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"type: struct_type\n";}
#line 2087 "yacc.cpp" /* glr.c:788  */
    break;

  case 85:
#line 446 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"type: enum_type\n";}
#line 2093 "yacc.cpp" /* glr.c:788  */
    break;

  case 86:
#line 450 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	Streams::verbose()<<"struct_type: STRUCT IDENTIFIER   \n";
													 type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																		string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2107 "yacc.cpp" /* glr.c:788  */
    break;

  case 87:
#line 459 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"struct_type: STRUCT IDENTIFIER  MULTI \n";
													 type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2121 "yacc.cpp" /* glr.c:788  */
    break;

  case 88:
#line 470 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"enum_type: ENUM IDENTIFIER \n";
													 type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2135 "yacc.cpp" /* glr.c:788  */
    break;

  case 89:
#line 479 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"enum_type: ENUM IDENTIFIER  MULTI  \n";
													 type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																									string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2149 "yacc.cpp" /* glr.c:788  */
    break;

  case 90:
#line 490 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"int type \n";
																type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
																}
#line 2163 "yacc.cpp" /* glr.c:788  */
    break;

  case 91:
#line 499 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"char type\n";
	type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2176 "yacc.cpp" /* glr.c:788  */
    break;

  case 92:
#line 507 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"float type\n";
	type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2189 "yacc.cpp" /* glr.c:788  */
    break;

  case 93:
#line 515 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"NSString type\n";
	type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2202 "yacc.cpp" /* glr.c:788  */
    break;

  case 94:
#line 523 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"void type\n";
	type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2215 "yacc.cpp" /* glr.c:788  */
    break;

  case 95:
#line 531 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"bool type\n";
	type=symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2228 "yacc.cpp" /* glr.c:788  */
    break;

  case 96:
#line 541 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
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
#line 2243 "yacc.cpp" /* glr.c:788  */
    break;

  case 97:
#line 552 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"array_tag: array_first_tag array_tag_list \n"; 
										   }
#line 2251 "yacc.cpp" /* glr.c:788  */
    break;

  case 98:
#line 557 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"array_tag_list: array_tag_list OPEN_ARR INT_VAL CLOSE_ARR\n"; 
																arrayAlloc.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.int_val));
														   }
#line 2260 "yacc.cpp" /* glr.c:788  */
    break;

  case 100:
#line 562 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<" Error:missing  dimension in array tag  ";arrayAlloc.clear();}
#line 2266 "yacc.cpp" /* glr.c:788  */
    break;

  case 101:
#line 565 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"array_first_tag: OPEN_ARR INT_VAL CLOSE_ARR\n"; 
											arrayAlloc.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.int_val));
											}
#line 2275 "yacc.cpp" /* glr.c:788  */
    break;

  case 102:
#line 569 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"array_first_tag: OPEN_ARR  CLOSE_ARR\n"; 
											arrayAlloc.push_back(-1);
											}
#line 2284 "yacc.cpp" /* glr.c:788  */
    break;

  case 103:
#line 575 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"array with value\n";
								((*yyvalp).r.node)=new AssignNode(scoop,NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
							   }
#line 2292 "yacc.cpp" /* glr.c:788  */
    break;

  case 105:
#line 580 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
								Streams::verbose() <<"with value\n";
								((*yyvalp).r.node)=new AssignNode(scoop,NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
							 }
#line 2301 "yacc.cpp" /* glr.c:788  */
    break;

  case 106:
#line 585 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {((*yyvalp).r.node)=NULL;}
#line 2307 "yacc.cpp" /* glr.c:788  */
    break;

  case 107:
#line 590 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
															 methodsList.push_back(method);
														
															 
																}
#line 2318 "yacc.cpp" /* glr.c:788  */
    break;

  case 108:
#line 596 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																 Streams::verbose()<<"interface_declaration_list:interface_declaration\n";
															 methodsList.push_back(method);
															 
																 	
																 }
#line 2329 "yacc.cpp" /* glr.c:788  */
    break;

  case 109:
#line 604 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"interface_declaration: class_method_declaration\n";}
#line 2335 "yacc.cpp" /* glr.c:788  */
    break;

  case 110:
#line 605 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"interface_declaration: instance_method_declaration\n";}
#line 2341 "yacc.cpp" /* glr.c:788  */
    break;

  case 111:
#line 609 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"class_method_declaration: PLUS p_type method_selectors	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text)),symbolTable,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),selectorsList,true);
															
																 selectorsList.clear();
																
																}
#line 2353 "yacc.cpp" /* glr.c:788  */
    break;

  case 112:
#line 617 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2359 "yacc.cpp" /* glr.c:788  */
    break;

  case 113:
#line 618 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2365 "yacc.cpp" /* glr.c:788  */
    break;

  case 114:
#line 621 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
															Streams::verbose()<<"instance_method_declaration: MINUS p_type	method_selectors		SEMI_COMA\n";
															method=InterfaceHelper::createNewMethod(symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text)),symbolTable,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),selectorsList,false);
																 selectorsList.clear();
																
																
															}
#line 2377 "yacc.cpp" /* glr.c:788  */
    break;

  case 115:
#line 630 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"p_type : OPEN_P type CLOSE_P\n";
																((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text);
																}
#line 2386 "yacc.cpp" /* glr.c:788  */
    break;

  case 116:
#line 639 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"method_selectors: selectors_list\n";
																	((*yyvalp).r.text)="";
																}
#line 2395 "yacc.cpp" /* glr.c:788  */
    break;

  case 117:
#line 643 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"method_selectors:IDENTIFIER \n";((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text);}
#line 2401 "yacc.cpp" /* glr.c:788  */
    break;

  case 118:
#line 645 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
													Streams::verbose()<<"selectors_list:	selectors_list selector_decleration\n";
																
													selectorsList.push_back(tselector);
													tselector=NULL;
											}
#line 2412 "yacc.cpp" /* glr.c:788  */
    break;

  case 119:
#line 651 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"selectors_list:	 selector_decleration\n";
												selectorsList.clear();

												selectorsList.push_back(tselector);
												tselector=NULL;
}
#line 2424 "yacc.cpp" /* glr.c:788  */
    break;

  case 120:
#line 659 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																				Streams::verbose()<<"selector_decleration:	IDENTIFIER	SEMI_COLUMN	parameter_list	\n";
																				tselector=new DeclerationSelector((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),selectorVarList);
																			}
#line 2433 "yacc.cpp" /* glr.c:788  */
    break;

  case 121:
#line 665 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"parameter_list: parameter_list parameter\n";
																	selectorVarList.push_back(var);		
											}
#line 2442 "yacc.cpp" /* glr.c:788  */
    break;

  case 122:
#line 669 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									selectorVarList.clear();
										selectorVarList.push_back(var);		
											
				 
														Streams::verbose()<<"parameter_list:  parameter\n";
						
					}
#line 2455 "yacc.cpp" /* glr.c:788  */
    break;

  case 123:
#line 678 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"parameter:  p_type IDENTIFIER\n";
																
																if(type!=NULL){
																var=new Variable((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),type);
																}
																else{
																Streams::verbose()<<"Error:Type not found.\n";
																}
																}
#line 2470 "yacc.cpp" /* glr.c:788  */
    break;

  case 124:
#line 691 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_implementation: class_implementation_header class_implementation_body\n";}
#line 2476 "yacc.cpp" /* glr.c:788  */
    break;

  case 125:
#line 694 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																	Streams::verbose()<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																	interface=InterfaceHelper::checkImplementation((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),symbolTable,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
																	
																}
#line 2486 "yacc.cpp" /* glr.c:788  */
    break;

  case 126:
#line 699 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																interface=InterfaceHelper::checkImplementation((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),symbolTable,"");
																	
																}
#line 2495 "yacc.cpp" /* glr.c:788  */
    break;

  case 127:
#line 705 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																	Streams::verbose()<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";
																			InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														}
#line 2505 "yacc.cpp" /* glr.c:788  */
    break;

  case 128:
#line 711 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    { 
																	Streams::verbose()<<"class_implementation_body: instance_variables									AT_END\n";
																}
#line 2513 "yacc.cpp" /* glr.c:788  */
    break;

  case 129:
#line 714 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																	Streams::verbose()<<"class_implementation_body:						implementation_definition_list	AT_END\n";
																	InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														
																}
#line 2524 "yacc.cpp" /* glr.c:788  */
    break;

  case 130:
#line 720 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"class_implementation_body:	AT_END\n";}
#line 2530 "yacc.cpp" /* glr.c:788  */
    break;

  case 131:
#line 723 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	 methodsList.push_back(method);Streams::verbose()<<"implementation_definition_list: implementation_definition_list implementation_definition\n";}
#line 2536 "yacc.cpp" /* glr.c:788  */
    break;

  case 132:
#line 724 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	 methodsList.push_back(method);Streams::verbose()<<"implementation_definition_list: implementation_definition\n";}
#line 2542 "yacc.cpp" /* glr.c:788  */
    break;

  case 133:
#line 727 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"implementation_definition: class_implementation_definition	\n";}
#line 2548 "yacc.cpp" /* glr.c:788  */
    break;

  case 134:
#line 728 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"implementation_definition: instance_implementation_definition \n";}
#line 2554 "yacc.cpp" /* glr.c:788  */
    break;

  case 135:
#line 731 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"class_implementation_definition: class_implementation_definition_header block_body";
														functionNode->addNode(cscoop);
														functionNode=NULL;
																scoop=NULL;
															scoop=NULL;
													}
#line 2566 "yacc.cpp" /* glr.c:788  */
    break;

  case 136:
#line 740 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"class_implementation_definition_header: PLUS p_type		 method_selectors\n";
										method=InterfaceHelper:: createNewMethod(symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text)),symbolTable,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),selectorsList,true);
																 selectorsList.clear();
									           functionNode= ScoopHelper::createNewFunctionNode(method,interface->static_twin);
												scoop=functionNode;				
																
										}
#line 2579 "yacc.cpp" /* glr.c:788  */
    break;

  case 137:
#line 751 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
															Streams::verbose()<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";
														functionNode->addNode(cscoop);
														functionNode=NULL;
																scoop=NULL;
															scoop=NULL;
										
															}
#line 2592 "yacc.cpp" /* glr.c:788  */
    break;

  case 138:
#line 761 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											     Streams::verbose()<<"instance_implementation_definition_header:MINUS p_type		method_selectors\n";
												 method=InterfaceHelper:: createNewMethod(symbolTable->getType((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text)),symbolTable,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),selectorsList,false);
																 selectorsList.clear();
									           functionNode= ScoopHelper::createNewFunctionNode(method,interface);
												scoop=functionNode;
												}
#line 2604 "yacc.cpp" /* glr.c:788  */
    break;

  case 139:
#line 770 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												
												Streams::verbose()<<"block_body:OPEN_S  block_body_part \n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
												}
#line 2614 "yacc.cpp" /* glr.c:788  */
    break;

  case 140:
#line 777 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												
                                                scoop=ScoopHelper::createNewScoop(scoop);
												
												
												scoopVector.push_back(scoop);
												Streams::verbose()<<"block_body_header:OPEN_S	\n";
												((*yyvalp).r.node)=scoop;
												}
#line 2628 "yacc.cpp" /* glr.c:788  */
    break;

  case 141:
#line 789 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												cscoop=scoop;scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements:statement_list	CLOSE_S	\n";
												}
#line 2637 "yacc.cpp" /* glr.c:788  */
    break;

  case 142:
#line 793 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												cscoop=scoop;scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements:CLOSE_S\n";
												}
#line 2646 "yacc.cpp" /* glr.c:788  */
    break;

  case 143:
#line 797 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											  cscoop=scoop; scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements: error CLOSE_S\n";
												}
#line 2655 "yacc.cpp" /* glr.c:788  */
    break;

  case 144:
#line 803 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement_list: statement_list statement\n";
											((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text);
											scoop->addNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
											
											}
#line 2665 "yacc.cpp" /* glr.c:788  */
    break;

  case 145:
#line 808 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement_list: statement\n";
											((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text);
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											scoop->addNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
											
											}
#line 2676 "yacc.cpp" /* glr.c:788  */
    break;

  case 146:
#line 817 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: loop_statement\n";
											((*yyvalp).r.text)="loop";
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2685 "yacc.cpp" /* glr.c:788  */
    break;

  case 147:
#line 821 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: conditional_statement\n";
											((*yyvalp).r.text)="cond";
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2694 "yacc.cpp" /* glr.c:788  */
    break;

  case 148:
#line 825 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												Streams::verbose()<<"statement: expr\n";
												((*yyvalp).r.text)="expr";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
												//nodeXX=$<r.node>1;
											}
#line 2705 "yacc.cpp" /* glr.c:788  */
    break;

  case 149:
#line 831 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"statement: variable_declaration\n";
											
												ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
										    }
#line 2719 "yacc.cpp" /* glr.c:788  */
    break;

  case 150:
#line 840 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: block_body\n";((*yyvalp).r.text)=new char[256];((*yyvalp).r.text)[0]='\0';strcat(((*yyvalp).r.text),"Block");
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2727 "yacc.cpp" /* glr.c:788  */
    break;

  case 151:
#line 843 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: return_statement\n";
												((*yyvalp).r.text)="return";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2736 "yacc.cpp" /* glr.c:788  */
    break;

  case 152:
#line 847 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: try_catch\n";((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);}
#line 2742 "yacc.cpp" /* glr.c:788  */
    break;

  case 153:
#line 849 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
	                                            ((*yyvalp).r.text)="asm";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);}
#line 2750 "yacc.cpp" /* glr.c:788  */
    break;

  case 154:
#line 852 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
	 ((*yyvalp).r.text)="call";
	((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
	}
#line 2759 "yacc.cpp" /* glr.c:788  */
    break;

  case 155:
#line 856 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    { Streams::verbose()<<"statement: THROW\n";((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);}
#line 2765 "yacc.cpp" /* glr.c:788  */
    break;

  case 156:
#line 858 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    { Streams::verbose()<<"error SEMI_COMA \n";}
#line 2771 "yacc.cpp" /* glr.c:788  */
    break;

  case 157:
#line 861 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"statement: THROW\n";
														((*yyvalp).r.node)=new ThrowNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node));
														}
#line 2779 "yacc.cpp" /* glr.c:788  */
    break;

  case 158:
#line 866 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"@asm command \n";
	                                         ((*yyvalp).r.node)=new AsmNode(scoop,*(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.string_val));
											 }
#line 2787 "yacc.cpp" /* glr.c:788  */
    break;

  case 159:
#line 872 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
														 ((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text);
														 ((*yyvalp).r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 2798 "yacc.cpp" /* glr.c:788  */
    break;

  case 160:
#line 878 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
														Streams::verbose()<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 ((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text);
														  ((*yyvalp).r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 2810 "yacc.cpp" /* glr.c:788  */
    break;

  case 161:
#line 885 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"variable_declaration:enum\n";}
#line 2816 "yacc.cpp" /* glr.c:788  */
    break;

  case 162:
#line 889 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"variable_list:variable_list COMMA variable\n";}
#line 2822 "yacc.cpp" /* glr.c:788  */
    break;

  case 163:
#line 890 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"variable_list:variable\n";
										
										}
#line 2830 "yacc.cpp" /* glr.c:788  */
    break;

  case 164:
#line 893 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected ',' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2836 "yacc.cpp" /* glr.c:788  */
    break;

  case 165:
#line 896 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose() <<"variable:  IDENTIFIER array_tag initializer \n";
											 var=new Array((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),arrayAlloc.size(),NULL);
											(dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
											 arrayList.push_back( ( dynamic_cast<Array*>(var)));
											 arrayAlloc.clear();
											}
#line 2848 "yacc.cpp" /* glr.c:788  */
    break;

  case 166:
#line 903 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    { 
											Streams::verbose() <<"variable:  IDENTIFIER main_initializer \n";
											idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text)) ;
											IdentifierNode* identifierNode=new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),scoop);
											if((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node)!=NULL){
											(dynamic_cast<AssignNode*>((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node)))->setLeftExp(identifierNode);
											}
											declarationList.push_back(make_pair((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node)));
											}
#line 2862 "yacc.cpp" /* glr.c:788  */
    break;

  case 167:
#line 912 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2868 "yacc.cpp" /* glr.c:788  */
    break;

  case 168:
#line 915 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"return_statement: RETURN expr\n";
												 ((*yyvalp).r.node)=new ReturnNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node));
												}
#line 2876 "yacc.cpp" /* glr.c:788  */
    break;

  case 169:
#line 920 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"loop_statement: for_loop\n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2884 "yacc.cpp" /* glr.c:788  */
    break;

  case 170:
#line 923 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"loop_statement: while_loop\n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2892 "yacc.cpp" /* glr.c:788  */
    break;

  case 171:
#line 926 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"loop_statement: do_while_loop\n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 2900 "yacc.cpp" /* glr.c:788  */
    break;

  case 172:
#line 931 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"do_while: do_header   statement   while_loop_header   SEMI_COMMA\n";
													((*yyvalp).r.node)=new DoWhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),scoop);
													}
#line 2908 "yacc.cpp" /* glr.c:788  */
    break;

  case 173:
#line 936 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"do_header: DO\n";}
#line 2914 "yacc.cpp" /* glr.c:788  */
    break;

  case 174:
#line 939 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
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
#line 2935 "yacc.cpp" /* glr.c:788  */
    break;

  case 175:
#line 958 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer	SEMI_COMA logic_expr1 SEMI_COMA expr			CLOSE_P\n";
										((*yyvalp).r.node)=new ForNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),NULL,scoop);
										//nodeXX=$<r.node>5;
										}
#line 2944 "yacc.cpp" /* glr.c:788  */
    break;

  case 176:
#line 964 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr1 SEMI_COMA expr			CLOSE_P\n";
										((*yyvalp).r.node)=new ForNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),NULL,scoop);
										}
#line 2952 "yacc.cpp" /* glr.c:788  */
    break;

  case 177:
#line 968 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P\n";
										((*yyvalp).r.node)=new ForNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.node),NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),NULL,scoop);
										}
#line 2960 "yacc.cpp" /* glr.c:788  */
    break;

  case 178:
#line 972 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr1 SEMI_COMA				CLOSE_P	\n";
										((*yyvalp).r.node)=new ForNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),NULL,NULL,scoop);
										}
#line 2968 "yacc.cpp" /* glr.c:788  */
    break;

  case 179:
#line 977 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	\n";
										((*yyvalp).r.node)=new ForNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),NULL,NULL,NULL,scoop);
										}
#line 2976 "yacc.cpp" /* glr.c:788  */
    break;

  case 180:
#line 981 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr1 SEMI_COMA				CLOSE_P\n";
										((*yyvalp).r.node)=new ForNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),NULL,NULL,scoop);
										}
#line 2984 "yacc.cpp" /* glr.c:788  */
    break;

  case 181:
#line 985 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P";
										((*yyvalp).r.node)=new ForNode(NULL,NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),NULL,scoop);
										}
#line 2992 "yacc.cpp" /* glr.c:788  */
    break;

  case 182:
#line 990 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_loop_hearder: FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	\n";
											((*yyvalp).r.node)=new ForNode(NULL,NULL,NULL,NULL,scoop);
											}
#line 3000 "yacc.cpp" /* glr.c:788  */
    break;

  case 183:
#line 995 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_initializer: INT IDENTIFIER EQUAL expr\n";
											AssignNode * temp=new AssignNode(scoop,new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),scoop),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
											
											//temp->add($<r.text>2,);
											
											//temp.push_back(make_pair($<r.text>2,$<r.node>4));
											DeclerationNode* temp1=new DeclerationNode(list<pair<string,Node*>>(),scoop,"int");
											temp1->add((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),temp);
										 ((*yyvalp).r.node)=temp1; 
										 idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text));
										}
#line 3016 "yacc.cpp" /* glr.c:788  */
    break;

  case 184:
#line 1006 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_initializer: IDENTIFIER EQUAL expr\n";
										((*yyvalp).r.node)=new AssignNode(scoop,new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),scoop),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
										}
#line 3024 "yacc.cpp" /* glr.c:788  */
    break;

  case 185:
#line 1009 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"for_initializer: IDENTIFIER\n";
										((*yyvalp).r.node)=new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),scoop);
										}
#line 3032 "yacc.cpp" /* glr.c:788  */
    break;

  case 186:
#line 1014 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr AND! expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),AND_AND,scoop);
										}
#line 3040 "yacc.cpp" /* glr.c:788  */
    break;

  case 187:
#line 1017 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:logic_expr OR_OR logic_expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),OR_OR,scoop);
										}
#line 3048 "yacc.cpp" /* glr.c:788  */
    break;

  case 188:
#line 1020 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
										
										}
#line 3056 "yacc.cpp" /* glr.c:788  */
    break;

  case 189:
#line 1026 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr LESS_THAN expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),LESS_THAN,scoop);
										}
#line 3064 "yacc.cpp" /* glr.c:788  */
    break;

  case 190:
#line 1029 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr MORE_THAN expr\n";
										 ((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),MORE_THAN,scoop);
										}
#line 3072 "yacc.cpp" /* glr.c:788  */
    break;

  case 191:
#line 1032 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr LESS_OR_EQUAL expr\n";
										 ((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),LESS_OR_EQUAL,scoop);
										}
#line 3080 "yacc.cpp" /* glr.c:788  */
    break;

  case 192:
#line 1035 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr MORE_OR_EQUAL expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),MORE_OR_EQUAL,scoop);
										}
#line 3088 "yacc.cpp" /* glr.c:788  */
    break;

  case 193:
#line 1038 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr EQUAL_EQUAL expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),EQUAL_EQUAL,scoop);
										}
#line 3096 "yacc.cpp" /* glr.c:788  */
    break;

  case 194:
#line 1041 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:expr EQUAL_EQUAL expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),NOT_EQUAL,scoop);
										}
#line 3104 "yacc.cpp" /* glr.c:788  */
    break;

  case 195:
#line 1044 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:NOT_EQUAL expr\n";
										 ((*yyvalp).r.node)=new UnaryNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),NOT_EQUAL);
										}
#line 3112 "yacc.cpp" /* glr.c:788  */
    break;

  case 196:
#line 1047 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";
										 ((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
										}
#line 3120 "yacc.cpp" /* glr.c:788  */
    break;

  case 197:
#line 1051 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:TRUE\n";
										 ((*yyvalp).r.node)=new ConstantNode(true,scoop);
										}
#line 3128 "yacc.cpp" /* glr.c:788  */
    break;

  case 198:
#line 1054 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:FALSE\n";
											 ((*yyvalp).r.node)=new ConstantNode(false,scoop);
										}
#line 3136 "yacc.cpp" /* glr.c:788  */
    break;

  case 199:
#line 1057 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"logic_expr:long id\n";
											 ((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
										}
#line 3144 "yacc.cpp" /* glr.c:788  */
    break;

  case 200:
#line 1063 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"expr:assign_expr\n";
										 ((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
										}
#line 3152 "yacc.cpp" /* glr.c:788  */
    break;

  case 201:
#line 1066 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"expr:simple_expr\n";
										((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
										}
#line 3160 "yacc.cpp" /* glr.c:788  */
    break;

  case 202:
#line 1071 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"assign_expr:long_id EQUAL simple_expr\n";
										//LongIdHelper::checkIdenentifier( scoop, interface,"set1");
										((*yyvalp).r.node)=new AssignNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
										}
#line 3170 "yacc.cpp" /* glr.c:788  */
    break;

  case 203:
#line 1078 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"long_id: long_id.IDENTIFIER\n";
																((*yyvalp).r.node)=new DotNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));

											;}
#line 3179 "yacc.cpp" /* glr.c:788  */
    break;

  case 204:
#line 1082 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												Streams::verbose()<<"long_id: long_id.message_call\n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 3188 "yacc.cpp" /* glr.c:788  */
    break;

  case 205:
#line 1086 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																LongIdHelper::addIdentifier((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text)); 
																((*yyvalp).r.node)=new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),scoop);
																Streams::verbose()<<"long_id:IDENTIFIER :"<<(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text)<<"\n";
															   }
#line 3198 "yacc.cpp" /* glr.c:788  */
    break;

  case 206:
#line 1091 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"long_id: long_id.array_access\n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											}
#line 3207 "yacc.cpp" /* glr.c:788  */
    break;

  case 207:
#line 1099 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
							Streams::verbose()<<"array_access: details\n";

							((*yyvalp).r.node)=new ArrayAccessNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),scoop);

						}
#line 3218 "yacc.cpp" /* glr.c:788  */
    break;

  case 208:
#line 1108 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"simple_expr:STRING_VAL\n";
									((*yyvalp).r.node)=new ConstantNode(*((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.string_val)),scoop);
									Streams::verbose()<<"node typr"<<((*yyvalp).r.node)->generateType()->get_name()<<"\n";
									((*yyvalp).r.string_val)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.string_val);
									}
#line 3229 "yacc.cpp" /* glr.c:788  */
    break;

  case 209:
#line 1114 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									Streams::verbose()<<"simple_expr:INT_VAL\n";
									((*yyvalp).r.node)=new ConstantNode(yylval.r.int_val,scoop);
									isconst=1;
									
									}
#line 3240 "yacc.cpp" /* glr.c:788  */
    break;

  case 210:
#line 1120 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:FLOAT_VAL\n";
									((*yyvalp).r.node)=new ConstantNode(yylval.r.float_val,scoop);
										isconst=1;
									}
#line 3249 "yacc.cpp" /* glr.c:788  */
    break;

  case 211:
#line 1124 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:CHAR_VAL\n";
										((*yyvalp).r.node)=new ConstantNode(yylval.r.char_val,scoop);
									}
#line 3257 "yacc.cpp" /* glr.c:788  */
    break;

  case 212:
#line 1127 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:long_id\n";
									((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
									}
#line 3265 "yacc.cpp" /* glr.c:788  */
    break;

  case 213:
#line 1130 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"simple_expr:expr PLUS expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),PLUS,scoop);
									}
#line 3274 "yacc.cpp" /* glr.c:788  */
    break;

  case 214:
#line 1134 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"simple_expr:expr MINUS expr\n";
										((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),MINUS,scoop);
									}
#line 3283 "yacc.cpp" /* glr.c:788  */
    break;

  case 215:
#line 1138 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:expr MULTI expr\n";
											((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),MULTI,scoop);
									}
#line 3291 "yacc.cpp" /* glr.c:788  */
    break;

  case 216:
#line 1141 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									Streams::verbose()<<"simple_expr:expr DIV expr\n";
									((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),DIV,scoop);
									}
#line 3300 "yacc.cpp" /* glr.c:788  */
    break;

  case 217:
#line 1145 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									Streams::verbose()<<"simple_expr:expr DIV expr\n";
									((*yyvalp).r.node)=new BinaryOperationNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),DIV_R,scoop);
									}
#line 3309 "yacc.cpp" /* glr.c:788  */
    break;

  case 218:
#line 1149 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:OPEN_P expr CLOSE_P\n";((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);}
#line 3315 "yacc.cpp" /* glr.c:788  */
    break;

  case 219:
#line 1150 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:ID++";}
#line 3321 "yacc.cpp" /* glr.c:788  */
    break;

  case 220:
#line 1151 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:ID--";}
#line 3327 "yacc.cpp" /* glr.c:788  */
    break;

  case 221:
#line 1152 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:++ID";}
#line 3333 "yacc.cpp" /* glr.c:788  */
    break;

  case 222:
#line 1153 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"simple_expr:--ID";}
#line 3339 "yacc.cpp" /* glr.c:788  */
    break;

  case 223:
#line 1154 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"expr:p_type expr\n";
																if(type!=NULL)
																((*yyvalp).r.node)=new CastNode(scoop,type,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
															}
#line 3349 "yacc.cpp" /* glr.c:788  */
    break;

  case 224:
#line 1161 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
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
#line 3365 "yacc.cpp" /* glr.c:788  */
    break;

  case 225:
#line 1174 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
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
#line 3380 "yacc.cpp" /* glr.c:788  */
    break;

  case 226:
#line 1186 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"sender: message_call\n";
											
											callNode->setSender((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
											 ((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											 
											}
#line 3391 "yacc.cpp" /* glr.c:788  */
    break;

  case 227:
#line 1192 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"sender: IDENTIFIER\n";
											((*yyvalp).r.node)=new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),scoop);
											
											//callNode=new CallNode(scoop);
											
											callNode->setSender(((*yyvalp).r.node));
											
											}
#line 3404 "yacc.cpp" /* glr.c:788  */
    break;

  case 228:
#line 1202 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"message: IDENTIFIER\n";
											((*yyvalp).r.text)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text);
												
											}
#line 3413 "yacc.cpp" /* glr.c:788  */
    break;

  case 229:
#line 1206 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"message_selectors_list\n";
											//$<r.node>$=$<r.text>1;
											((*yyvalp).r.text)="";
											}
#line 3423 "yacc.cpp" /* glr.c:788  */
    break;

  case 230:
#line 1213 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"message_selectors_list:message_selectors_list message_selector \n";
												callNode->addSelector(cselector);
											cselector=NULL;
												}
#line 3433 "yacc.cpp" /* glr.c:788  */
    break;

  case 231:
#line 1218 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {	callNode->addSelector(cselector);
							cselector=NULL;
								Streams::verbose()<<"message_selectors_list: message_selector\n";
											
		}
#line 3443 "yacc.cpp" /* glr.c:788  */
    break;

  case 232:
#line 1224 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
									cselector->name=(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text);
							}
#line 3451 "yacc.cpp" /* glr.c:788  */
    break;

  case 233:
#line 1228 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"argument_list: argument_list argument\n";
												cselector->addArg((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));}
#line 3458 "yacc.cpp" /* glr.c:788  */
    break;

  case 234:
#line 1230 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"argument_list: argument\n";
												cselector=new CallSelector("");
											cselector->addArg((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));}
#line 3466 "yacc.cpp" /* glr.c:788  */
    break;

  case 235:
#line 1235 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"argument: SEMI_COLUMN expr\n";
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
											//callNode->addArgument($<r.node>1,"");
											
											}
#line 3477 "yacc.cpp" /* glr.c:788  */
    break;

  case 236:
#line 1243 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
											Streams::verbose()<<"while_loop:while_loop_header statement\n";
											 ((*yyvalp).r.node)=new WhileNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),scoop);
										}
#line 3486 "yacc.cpp" /* glr.c:788  */
    break;

  case 237:
#line 1249 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
											}
#line 3494 "yacc.cpp" /* glr.c:788  */
    break;

  case 238:
#line 1254 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"conditional_statement: if_header statement\n";
												 ((*yyvalp).r.node)=new IfNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),scoop,NULL);
												}
#line 3502 "yacc.cpp" /* glr.c:788  */
    break;

  case 239:
#line 1257 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												Streams::verbose()<<"conditional_statement: if_header statement with else\n";
												 ((*yyvalp).r.node)=new IfNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),scoop,new ElseNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node),scoop));
												}
#line 3511 "yacc.cpp" /* glr.c:788  */
    break;

  case 240:
#line 1261 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"conditional_statement: switch_header switch_body statement\n";
											((*yyvalp).r.node)=tempSwitch;
										}
#line 3519 "yacc.cpp" /* glr.c:788  */
    break;

  case 241:
#line 1266 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";
											((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);
											}
#line 3527 "yacc.cpp" /* glr.c:788  */
    break;

  case 242:
#line 1271 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"switch_header: SWITCH OPEN_P IDENTIFIER CLOSE_P\n";
										
										tempSwitch->setExpr(new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),scoop));
									}
#line 3536 "yacc.cpp" /* glr.c:788  */
    break;

  case 243:
#line 1277 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {scoop=new ScoopNode(scoop);tempSwitch=new SwitchNode(NULL,std::list<pair<Node*,Node*>>(),scoop);}
#line 3542 "yacc.cpp" /* glr.c:788  */
    break;

  case 244:
#line 1280 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3548 "yacc.cpp" /* glr.c:788  */
    break;

  case 245:
#line 1281 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3554 "yacc.cpp" /* glr.c:788  */
    break;

  case 246:
#line 1282 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3560 "yacc.cpp" /* glr.c:788  */
    break;

  case 247:
#line 1283 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3566 "yacc.cpp" /* glr.c:788  */
    break;

  case 248:
#line 1286 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3572 "yacc.cpp" /* glr.c:788  */
    break;

  case 249:
#line 1287 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {;}
#line 3578 "yacc.cpp" /* glr.c:788  */
    break;

  case 250:
#line 1290 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node));}
#line 3584 "yacc.cpp" /* glr.c:788  */
    break;

  case 251:
#line 1291 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));}
#line 3590 "yacc.cpp" /* glr.c:788  */
    break;

  case 252:
#line 1292 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.r.node),NULL);}
#line 3596 "yacc.cpp" /* glr.c:788  */
    break;

  case 253:
#line 1295 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node));}
#line 3602 "yacc.cpp" /* glr.c:788  */
    break;

  case 254:
#line 1296 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));}
#line 3608 "yacc.cpp" /* glr.c:788  */
    break;

  case 255:
#line 1297 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {tempSwitch->addCase(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node));}
#line 3614 "yacc.cpp" /* glr.c:788  */
    break;

  case 256:
#line 1299 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
										Streams::verbose()<<"protocol: protocol_header protocol_body\n";
										idsList.clear();
										methodsList.clear();
										method=NULL;
										}
#line 3625 "yacc.cpp" /* glr.c:788  */
    break;

  case 257:
#line 1307 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
								Streams::verbose()<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";
								protocol=ProtocolHelper ::createNewProtocol((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text),symbolTable );
								
								}
#line 3635 "yacc.cpp" /* glr.c:788  */
    break;

  case 258:
#line 1314 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
								Streams::verbose()<<"protocol_body:	protocol_reference_list interface_declaration_list	AT_END\n";
								ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								idsList.clear();
								}
#line 3647 "yacc.cpp" /* glr.c:788  */
    break;

  case 259:
#line 1322 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
								Streams::verbose()<<"protocol_body:	interface_declaration_list	AT_END\n";
									
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								
								}
#line 3659 "yacc.cpp" /* glr.c:788  */
    break;

  case 260:
#line 1330 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
								Streams::verbose()<<"protocol_body:	protocol_reference_list AT_END	\n";
											ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								idsList.clear();
								}
#line 3669 "yacc.cpp" /* glr.c:788  */
    break;

  case 261:
#line 1336 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"protocol_body:	AT_END\n";}
#line 3675 "yacc.cpp" /* glr.c:788  */
    break;

  case 262:
#line 1338 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"enum: ENUM IDENTIFIER  OPEN_S list_expr CLOSE_S SEMI_COMA  \n";
																
																EnumHelper::createNewEnum( (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.text),idsList, symbolTable);
																idsList.clear();
															 }
#line 3686 "yacc.cpp" /* glr.c:788  */
    break;

  case 263:
#line 1344 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
																Streams::verbose()<<"enum: ENUM IDENTIFIER SEMI_COMA\n";
																EnumHelper::createNewEnum( (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text),idsList, symbolTable);
															  }
#line 3695 "yacc.cpp" /* glr.c:788  */
    break;

  case 264:
#line 1351 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												Streams::verbose()<<"list_expr:IDENTIFIER EQUAL expr COMMA list_expr\n";
												idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.text));
													((*yyvalp).r.node)=new AssignNode(scoop,new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.r.text),scoop),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.node));
												}
#line 3705 "yacc.cpp" /* glr.c:788  */
    break;

  case 265:
#line 1356 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												Streams::verbose()<<"list_expr:IDENTIFIER EQUAL expr\n";
												idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text));
												((*yyvalp).r.node)=new AssignNode(scoop,new IdentifierNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text),scoop),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node));
												}
#line 3715 "yacc.cpp" /* glr.c:788  */
    break;

  case 266:
#line 1361 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
													Streams::verbose()<<"list_expr:IDENTIFIER \n";
													idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.text));
													//??
												}
#line 3725 "yacc.cpp" /* glr.c:788  */
    break;

  case 267:
#line 1366 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												  Streams::verbose()<<"list_expr:IDENTIFIER  COMMA list_expr \n";
												  idsList.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.r.text));
												  //??
												}
#line 3735 "yacc.cpp" /* glr.c:788  */
    break;

  case 268:
#line 1373 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {
												  Streams::verbose()<<"try_catch:TRY statement catch_list finally_statement \n";
												}
#line 3743 "yacc.cpp" /* glr.c:788  */
    break;

  case 269:
#line 1377 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {		
	((*yyvalp).r.node)=new TryNode(scoop,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node),dynamic_cast<CatchNode*>((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node)))		;		  
								Streams::verbose()<<"try_catch:TRY statement catch_list \n";
							  }
#line 3752 "yacc.cpp" /* glr.c:788  */
    break;

  case 270:
#line 1383 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"catch_list:one_catch \n";((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
													}
#line 3759 "yacc.cpp" /* glr.c:788  */
    break;

  case 271:
#line 1385 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"catch_list:catch_list CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);
												dynamic_cast<CatchNode*>(((*yyvalp).r.node))->next=dynamic_cast<CatchNode*>((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node));
												}
#line 3768 "yacc.cpp" /* glr.c:788  */
    break;

  case 272:
#line 1390 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    {Streams::verbose()<<"catch_list:CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";
												((*yyvalp).r.node)=(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.node);dynamic_cast<CatchNode*>(((*yyvalp).r.node))->_statement=(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.r.node);	}
#line 3775 "yacc.cpp" /* glr.c:788  */
    break;

  case 273:
#line 1394 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:788  */
    { ((*yyvalp).r.node)=new CatchNode(scoop,type,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.r.text));Streams::verbose()<<"now";}
#line 3781 "yacc.cpp" /* glr.c:788  */
    break;


#line 3785 "yacc.cpp" /* glr.c:788  */
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
  (!!((Yystate) == (-307)))

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



#line 1399 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* glr.c:2549  */

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
