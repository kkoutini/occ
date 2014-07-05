/* A Bison parser, made by GNU Bison 3.0.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 5 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:339  */

	#include <iostream>
	#include <FlexLexer.h>
	#include <string>
	#include <stack>
	#include "ast\node.h"
	#include "ST\SymbolTable.h"
	#include "ast\ConstantNode.h"
	#include "SyntaxError.h"

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

#line 169 "yacc.cpp" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "yacc.hpp".  */
#ifndef YY_YY_YACC_HPP_INCLUDED
# define YY_YY_YACC_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 173 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:355  */

#include "ast\node.h"

#line 203 "yacc.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AT_INTERFACE = 258,
    IDENTIFIER = 259,
    SEMI_COLUMN = 260,
    NSSTRING = 261,
    FLOAT = 262,
    CHAR = 263,
    BOOL = 264,
    INT = 265,
    SEMI_COMA = 266,
    ID = 267,
    AT_PUBLIC = 268,
    AT_PROTECTED = 269,
    AT_PRIVATE = 270,
    OPEN_S = 271,
    CLOSE_S = 272,
    COMMA = 273,
    LESS_THAN = 274,
    MORE_THAN = 275,
    AT_END = 276,
    CONST = 277,
    VOID = 278,
    PLUS = 279,
    MINUS = 280,
    OPEN_P = 281,
    CLOSE_P = 282,
    AT_IMPLEMENTATION = 283,
    AND_AND = 284,
    OR_OR = 285,
    STRING_VAL = 286,
    FLOAT_VAL = 287,
    LESS_OR_EQUAL = 288,
    CHAR_VAL = 289,
    INT_VAL = 290,
    MORE_OR_EQUAL = 291,
    MULTI = 292,
    EQUAL_EQUAL = 293,
    NOT_EQUAL = 294,
    FOR = 295,
    EQUAL = 296,
    DIV = 297,
    WHILE = 298,
    IF = 299,
    DO = 300,
    SWITCH = 301,
    CASE = 302,
    DEFAULT = 303,
    BREAK = 304,
    ENUM = 305,
    OPEN_ARR = 306,
    CLOSE_ARR = 307,
    TRUE = 308,
    FALSE = 309,
    RETURN = 310,
    AT_PROTOCOL = 311,
    ELSE = 312,
    STRUCT = 313,
    DOT = 314,
    DOUBLEPLUS = 315,
    DOUBLEMINUS = 316,
    TRY = 317,
    CATCH = 318,
    FINALLY = 319,
    AT_ASM = 320,
    SELF = 321,
    if_h = 322,
    expr_1 = 323,
    p_type_expr_prec = 324,
    long_id_prec = 325,
    try_prec = 326
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 176 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:355  */

	
	struct R {
		int colNo;
		int lineNo;
		int int_val;
		char char_val;	
		string* string_val;
		float float_val;
		char* text;
		Node* node;
			      }r;
	   

#line 302 "yacc.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 317 "yacc.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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


#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
# define YYCOPY_NEEDED 1
#endif


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  26
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   921

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  265
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  481

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   326

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   206,   206,   209,   210,   212,   213,   214,   215,   216,
     218,   227,   232,   237,   238,   240,   242,   248,   252,   257,
     262,   266,   268,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   286,   293,   296,   300,   305,   306,   310,
     311,   312,   313,   314,   315,   318,   319,   322,   323,   324,
     327,   330,   338,   349,   350,   351,   356,   359,   362,   366,
     370,   374,   375,   378,   384,   385,   386,   388,   396,   403,
     407,   413,   414,   415,   416,   417,   418,   419,   420,   423,
     424,   425,   429,   430,   431,   432,   436,   445,   456,   465,
     476,   485,   493,   501,   509,   517,   527,   538,   543,   547,
     548,   551,   555,   561,   564,   566,   571,   576,   582,   590,
     591,   595,   603,   604,   607,   616,   625,   629,   631,   637,
     645,   651,   655,   664,   677,   680,   685,   691,   697,   700,
     706,   709,   710,   713,   714,   717,   726,   737,   747,   756,
     763,   775,   779,   783,   789,   794,   803,   807,   811,   817,
     826,   829,   833,   835,   838,   843,   848,   854,   860,   867,
     871,   872,   875,   878,   885,   894,   897,   902,   905,   908,
     913,   918,   921,   939,   945,   949,   953,   958,   962,   966,
     971,   977,   988,   991,   996,   999,  1002,  1005,  1008,  1011,
    1014,  1017,  1020,  1024,  1027,  1030,  1035,  1038,  1043,  1050,
    1054,  1058,  1068,  1074,  1078,  1081,  1084,  1087,  1091,  1095,
    1098,  1102,  1103,  1104,  1105,  1106,  1107,  1114,  1127,  1139,
    1145,  1155,  1159,  1166,  1171,  1177,  1181,  1183,  1188,  1196,
    1202,  1207,  1210,  1214,  1219,  1224,  1230,  1233,  1234,  1235,
    1236,  1239,  1240,  1243,  1244,  1245,  1248,  1249,  1250,  1252,
    1260,  1266,  1274,  1282,  1288,  1291,  1297,  1304,  1309,  1314,
    1319,  1326,  1330,  1335,  1336,  1339
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
  "FINALLY", "AT_ASM", "SELF", "if_h", "expr_1", "p_type_expr_prec",
  "long_id_prec", "try_prec", "$accept", "program", "components",
  "component", "class_interface", "class_interface_header",
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
  "statement", "asm", "variable_declaration_block", "variable_list",
  "variable", "return_statement", "loop_statement", "do_while",
  "do_header", "for_loop", "for_loop_header", "for_initializer",
  "logic_expr", "expr", "assign_expr", "long_id", "simple_expr",
  "message_call2", "message_call", "sender", "message",
  "message_selectors_list", "message_selector", "argument_list",
  "argument", "while_loop", "while_loop_header", "conditional_statement",
  "if_header", "switch_header", "switch_body_block", "switch_body",
  "list_of_case", "case_body", "default_case", "protocol",
  "protocol_header", "protocol_body", "enum", "list_expr", "try_catch",
  "catch_list", "finally_statement", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326
};
# endif

#define YYPACT_NINF -378

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-378)))

#define YYTABLE_NINF -65

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-65)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     169,    33,   269,    58,    67,   108,   126,   152,   117,  -378,
    -378,   297,   172,  -378,  -378,   390,  -378,   332,  -378,  -378,
    -378,   208,   213,   138,  -378,  -378,  -378,  -378,   599,   218,
    -378,    31,   217,  -378,   177,   107,   113,  -378,  -378,  -378,
     246,  -378,   217,   217,   418,  -378,   425,  -378,  -378,   245,
    -378,   245,  -378,   444,   462,  -378,   308,   230,  -378,   285,
     278,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
     501,  -378,   289,   298,   363,  -378,   863,   863,  -378,   334,
    -378,  -378,  -378,  -378,  -378,    26,   280,   501,   339,   349,
     351,  -378,   339,   468,  -378,   179,   256,  -378,  -378,   266,
    -378,  -378,  -378,   863,   135,   366,  -378,   863,   339,   339,
    -378,   475,  -378,  -378,  -378,  -378,   324,  -378,  -378,   477,
    -378,  -378,  -378,  -378,   -10,   367,  -378,   341,   354,   361,
    -378,  -378,  -378,   863,   372,    12,   233,  -378,  -378,   401,
    -378,   217,   398,   114,  -378,   280,  -378,   406,  -378,   504,
    -378,  -378,   282,  -378,  -378,  -378,  -378,  -378,   248,   415,
    -378,   188,   175,  -378,  -378,  -378,  -378,    72,   278,  -378,
     501,   414,   419,   421,  -378,   427,   434,  -378,   805,   532,
     428,   384,  -378,  -378,   386,  -378,  -378,  -378,  -378,  -378,
    -378,   532,  -378,   532,   443,    13,     0,   449,  -378,   532,
    -378,   532,     5,  -378,  -378,  -378,   285,   805,   453,    12,
     253,  -378,  -378,   -19,  -378,  -378,  -378,    49,  -378,   403,
    -378,   467,   461,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,   423,   464,  -378,   254,  -378,   210,  -378,
    -378,   384,   173,   704,   704,   480,     4,   263,   628,  -378,
    -378,  -378,  -378,   481,   486,   805,   492,  -378,    13,   312,
    -378,   493,   409,   495,   372,   185,   163,  -378,  -378,  -378,
     448,  -378,  -378,   805,   509,  -378,  -378,   510,  -378,  -378,
     440,  -378,   805,   514,  -378,     8,  -378,   503,  -378,   508,
    -378,  -378,  -378,   479,  -378,   484,  -378,   372,  -378,  -378,
     217,   526,  -378,  -378,  -378,   521,  -378,   222,   506,   545,
     661,   539,   592,   805,  -378,  -378,   336,   281,   370,   525,
    -378,  -378,   263,   494,   302,  -378,  -378,   312,  -378,   805,
     805,   805,   805,   540,   309,  -378,   517,   805,   517,  -378,
     384,  -378,   384,   546,   312,  -378,   555,   511,   557,  -378,
     532,   559,   412,  -378,  -378,   548,  -378,   285,  -378,    10,
    -378,  -378,  -378,   805,   527,   715,   201,   672,   516,   302,
    -378,  -378,   704,   704,   805,   805,   805,   805,   805,   805,
    -378,   550,  -378,   153,   153,  -378,  -378,   501,   551,   532,
    -378,   553,  -378,  -378,  -378,  -378,  -378,  -378,   805,  -378,
     555,  -378,  -378,   472,   560,   513,  -378,  -378,   518,   522,
    -378,   805,  -378,   552,   747,   759,   265,  -378,   331,   331,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,   569,   501,
    -378,   131,  -378,  -378,   575,  -378,   570,   535,  -378,   574,
    -378,  -378,  -378,  -378,  -378,   561,  -378,   562,   791,   576,
     582,   736,  -378,   578,   573,   805,  -378,   581,  -378,  -378,
    -378,  -378,   577,   532,   593,   601,   594,  -378,   798,  -378,
    -378,  -378,  -378,   532,   798,   602,  -378,  -378,  -378,   798,
    -378
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       5,     0,     0,     8,     6,     0,     7,     0,     9,    13,
      14,    12,   126,     0,   250,    70,     1,     3,     0,     0,
      23,     0,     0,    10,     0,     0,     0,   108,   109,   110,
       0,   130,     0,     0,     0,   124,     0,   132,   133,     0,
     134,     0,   254,     0,     0,   249,     0,     0,   256,     0,
       0,    93,    92,    91,    95,    90,    55,    54,    53,    46,
       0,    94,     0,     0,     0,    48,    49,     0,    52,     0,
      84,    85,    82,    83,    36,     0,   117,     0,     0,     0,
     116,   119,     0,    26,    20,     0,     0,    31,    21,     0,
      32,    22,   107,     0,     0,     0,    68,    56,     0,     0,
     128,     0,   129,   131,   140,   135,     0,   137,   253,     0,
     252,    15,    11,   125,   259,     0,    96,     0,    88,    86,
      45,    47,    51,    50,    62,     0,     0,    61,    34,     0,
      33,     0,     0,     0,   113,     0,   118,     0,    24,     0,
      28,    17,     0,    29,    18,    30,    19,    69,     0,    80,
      73,     0,     0,    67,   136,   138,   127,     0,   201,   142,
       0,     0,     0,     0,   171,     0,     0,   217,     0,     0,
       0,     0,   150,   139,     0,   145,   153,   149,   151,   146,
     169,     0,   167,     0,     0,     0,     0,   200,   168,     0,
     147,     0,     0,   159,   152,   251,     0,     0,     0,     0,
       0,    89,    87,     0,    65,    99,    66,     0,    57,     0,
      35,     0,   120,   122,   115,   112,   111,   114,    25,    27,
      16,    77,    81,     0,     0,    71,     0,    74,     0,   155,
     143,     0,     0,     0,     0,     0,    88,   201,     0,   202,
     204,   205,   203,     0,     0,     0,     0,   196,   206,   197,
     200,     0,     0,     0,     0,   106,     0,   161,   141,   144,
       0,   172,   148,     0,     0,   220,   219,     0,   154,   229,
     231,   240,     0,     0,   233,     0,   242,     0,   260,   258,
     255,    63,    58,     0,   102,    97,    59,     0,    60,   123,
       0,     0,    79,    75,    78,     0,    72,     0,   183,     0,
       0,     0,     0,     0,   194,   195,     0,     0,     0,     0,
     212,   213,   201,   206,     0,   214,   215,   216,   166,     0,
       0,     0,     0,     0,   262,   156,   104,     0,   104,   164,
       0,   157,     0,     0,   198,   199,   221,     0,   222,   224,
       0,     0,     0,   238,   241,     0,   239,     0,   101,     0,
     121,    76,   158,     0,     0,     0,     0,     0,     0,   197,
     190,   230,     0,     0,     0,     0,     0,     0,     0,     0,
     234,     0,   211,   207,   208,   209,   210,     0,     0,     0,
     261,     0,   165,   105,   163,   162,   160,   170,     0,   218,
       0,   223,   232,     0,     0,   247,   237,   257,     0,     0,
     182,     0,   180,     0,     0,     0,     0,   191,   192,   193,
     184,   185,   186,   187,   188,   189,   236,   235,     0,     0,
     265,     0,   103,   228,   225,   227,     0,   244,   248,     0,
     100,    98,   181,   179,   178,     0,   177,     0,     0,     0,
       0,     0,    38,     0,    40,     0,   245,     0,   246,   174,
     175,   176,     0,     0,     0,    41,     0,    37,     0,   226,
     243,   173,   263,     0,     0,    43,    39,   264,    44,     0,
      42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -378,  -378,  -378,   609,  -378,  -378,  -378,   608,  -378,  -378,
    -377,    43,  -378,   554,   556,  -378,  -378,   -37,   502,   411,
    -378,  -378,  -378,  -152,   -28,  -378,  -378,  -378,  -378,  -114,
    -378,  -378,   301,  -378,    76,     7,  -378,  -378,   -25,   140,
    -378,   558,  -378,   340,  -378,  -378,  -378,   597,   -17,  -378,
    -378,  -378,  -378,    92,  -378,  -378,  -378,  -165,  -378,  -378,
     417,    70,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -212,
    -169,   -92,  -115,  -208,  -378,  -111,  -378,  -378,  -378,   296,
    -378,   192,  -378,   385,  -378,  -378,  -378,  -378,  -378,  -378,
     371,   376,  -378,  -378,  -378,   119,  -204,  -378,  -378,  -378
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    33,    34,    85,   432,
     453,    35,    74,    75,    76,    77,   105,    78,   136,   137,
     107,    12,    13,   161,   181,    80,    81,    82,    83,   214,
     295,   215,   392,   339,    36,    37,    38,    39,   255,    89,
      90,    91,   222,   223,    14,    15,    45,    46,    47,    48,
      49,    50,    51,   182,   116,   183,   184,   185,   186,   187,
     266,   267,   188,   189,   190,   191,   192,   193,   311,   316,
     317,   257,   258,   259,   196,   260,   277,   347,   348,   349,
     434,   435,   198,   199,   200,   201,   202,   427,   284,   285,
     286,   287,    16,    17,    55,   203,   125,   204,   334,   390
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,   195,   288,   106,   275,   197,    88,    92,   206,   256,
     238,   408,    79,   216,   262,    58,   293,   108,   109,   269,
      59,   217,   281,   -64,   194,   353,   270,   138,   271,   113,
     -64,   207,   318,   294,   279,    86,   280,    19,   289,   132,
     324,   211,   127,   102,   139,   409,   140,   327,    79,    79,
     296,   177,   282,   283,   273,   282,   283,    87,    44,   142,
     -63,   102,    22,   213,   195,   344,   157,   -63,   197,   195,
     163,    23,   274,   197,   466,    79,   195,    95,   195,    79,
     197,   302,   197,   239,   195,   276,   195,   194,   197,   240,
     197,   476,   194,    54,   113,   291,   132,   478,   366,   194,
     368,   194,   480,   102,   369,    79,   102,   194,    97,   194,
      96,    99,    24,   351,   100,   225,   221,    -2,     1,    18,
       2,   383,   384,   385,   386,   226,   102,    18,    98,   119,
      25,    31,    32,   323,   101,   247,   158,    31,    32,   159,
     323,   115,   241,   117,   370,     3,   160,   451,   452,    58,
     336,   338,    26,   407,    59,   416,   102,   248,   323,   102,
     418,   419,   249,   250,   340,   251,   252,     4,   393,   149,
       1,   152,     2,     5,   341,     6,   236,   308,    93,   159,
     150,   342,   177,   309,   310,   402,   237,   405,    40,   234,
     331,   253,   254,    28,   410,   332,   413,     3,    94,   235,
     151,    31,    32,    31,    32,   420,   421,   422,   423,   424,
     425,   305,   414,    56,   323,   323,   323,   323,    57,     4,
     142,   306,    84,   340,   430,     5,   337,     6,   143,   433,
     372,   373,   147,   362,   123,   195,   213,   195,   437,   197,
     342,   197,   442,    87,   218,   445,   447,   103,   164,   165,
      60,   219,    61,    62,    63,    64,    65,   153,   194,   231,
     194,   114,   454,   104,   292,   304,   232,   155,    70,    71,
      20,   219,   232,    21,   195,   221,   448,   154,   197,   462,
      31,    32,   454,   229,   142,   141,   433,   156,   195,   124,
      31,    32,   197,   128,   372,   373,    72,   194,   472,   454,
     374,   375,   129,   230,    73,   454,    31,    32,   477,   121,
     454,   194,   122,    28,   376,   126,    29,   377,    30,   378,
     379,    31,    32,   320,   321,   167,   329,   330,   168,   382,
      61,    62,    63,    64,    65,   134,   329,   330,   135,   331,
     114,   169,   134,    86,   332,   209,   170,    71,   195,   331,
     144,    29,   197,    52,   332,   145,    31,    32,   195,   428,
     -65,   -65,   197,   371,   171,   372,   373,   172,   173,   174,
     175,   194,   388,   389,   176,   177,    66,    67,    68,   178,
     130,   194,    73,   162,   208,   264,   179,   261,   265,   180,
     168,   211,    61,    62,    63,    64,    65,   380,   212,   372,
     373,   450,   114,   268,   297,   220,    28,   209,   170,    71,
     395,    41,   396,   261,    42,    43,   168,   227,    61,    62,
      63,    64,    65,   213,   301,   224,   171,   159,   114,   172,
     173,   174,   175,   233,   170,    71,   176,   177,   246,   110,
     242,   178,    42,    43,    73,   243,   112,   244,   179,    42,
      43,   180,   171,   245,   272,   172,   173,   174,   175,   263,
     278,   404,   176,   177,   290,   118,   300,   178,    31,    32,
      73,   299,   333,   261,   179,   303,   168,   180,    61,    62,
      63,    64,    65,   120,   319,   325,    31,    32,   114,   148,
     326,   172,    31,    32,   170,    71,   166,   350,   205,    42,
      43,    31,    32,   328,   239,    60,   335,    61,    62,    63,
      64,    65,   171,   345,   346,   172,   173,   174,   175,   352,
     356,   436,   176,   177,    71,   228,   357,   178,    31,    32,
      73,   358,   361,   261,   179,   359,   168,   180,    61,    62,
      63,    64,    65,   417,   232,   372,   373,   363,   114,   364,
     367,    72,   381,   274,   170,    71,   387,   397,   391,    73,
     398,   400,   439,   399,   403,   406,   426,   429,   411,   431,
     440,   438,   171,   449,   441,   172,   173,   174,   175,   443,
     455,   456,   176,   177,   457,   458,   464,   178,   459,   460,
      73,   468,   470,   463,   179,   467,   322,   180,    61,    62,
      63,    64,    65,    60,   471,    61,    62,    63,    64,    65,
     473,   475,    66,    67,    68,    71,    69,    27,   312,   474,
     479,    70,    71,   249,   250,    53,   251,   252,   131,   210,
     298,   313,   322,   133,    61,    62,    63,    64,    65,   394,
     360,   111,    72,   177,   401,   314,   315,   469,   146,    72,
      73,    71,   253,   254,   248,   343,   354,    73,   307,   249,
     250,   355,   251,   252,     0,   247,     0,     0,     0,     0,
       0,     0,   365,     0,     0,     0,   247,     0,    72,   177,
       0,     0,     0,   415,     0,     0,    73,   312,   253,   254,
       0,     0,   249,   250,     0,   251,   252,     0,   312,     0,
     313,     0,     0,   249,   250,     0,   251,   252,   247,     0,
       0,   313,   177,     0,   314,   315,     0,     0,     0,   247,
       0,   253,   254,   177,     0,   314,   315,     0,     0,     0,
     312,     0,   253,   254,     0,   249,   250,     0,   251,   252,
     247,   248,   412,   313,     0,     0,   249,   250,     0,   251,
     252,   247,   451,   465,     0,   177,     0,   314,   315,     0,
       0,     0,   248,   247,   253,   254,   177,   249,   250,     0,
     251,   252,     0,   248,   444,   253,   254,     0,   249,   250,
       0,   251,   252,     0,     0,   248,   446,   177,     0,     0,
     249,   250,     0,   251,   252,   247,   253,   254,   177,     0,
       0,     0,   247,     0,     0,     0,     0,   253,   254,   247,
     177,     0,     0,     0,   451,     0,     0,   248,   461,   253,
     254,     0,   249,   250,   248,   251,   252,     0,     0,   249,
     250,   248,   251,   252,     0,     0,   249,   250,     0,   251,
     252,     0,   177,     0,     0,     0,     0,     0,     0,   177,
       0,   253,   254,     0,     0,     0,   177,     0,   253,   254,
       0,     0,     0,     0,     0,   253,   254,    60,     0,    61,
      62,    63,    64,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,    73
};

static const yytype_int16 yycheck[] =
{
      28,   116,   206,    40,     4,   116,    31,    32,    18,   178,
     162,     1,    40,     1,   179,    11,    35,    42,    43,   184,
      16,   135,    17,    11,   116,    17,   191,     1,   193,    46,
      18,    41,   244,    52,   199,     4,   201,     4,   207,    76,
     248,    37,    70,    36,    18,    35,    20,   255,    76,    77,
       1,    51,    47,    48,    41,    47,    48,    26,    15,    87,
      11,    54,     4,    51,   179,   273,   103,    18,   179,   184,
     107,     4,    59,   184,   451,   103,   191,    34,   193,   107,
     191,   233,   193,    11,   199,   196,   201,   179,   199,    17,
     201,   468,   184,    17,   111,   209,   133,   474,   310,   191,
     312,   193,   479,    96,   312,   133,    99,   199,     1,   201,
      34,    35,     4,   282,     1,     1,   141,     0,     1,     0,
       3,   329,   330,   331,   332,    11,   119,     8,    21,    53,
       4,    24,    25,   248,    21,     4,     1,    24,    25,     4,
     255,    49,   170,    51,   313,    28,    11,    16,    17,    11,
     264,   265,     0,   357,    16,   367,   149,    26,   273,   152,
     372,   373,    31,    32,     1,    34,    35,    50,   337,    93,
       1,    95,     3,    56,    11,    58,     1,     4,     1,     4,
       1,    18,    51,    10,    11,   350,    11,   352,    16,     1,
      37,    60,    61,    16,   363,    42,   365,    28,    21,    11,
      21,    24,    25,    24,    25,   374,   375,   376,   377,   378,
     379,     1,    11,     5,   329,   330,   331,   332,     5,    50,
     248,    11,     4,     1,   389,    56,    41,    58,    88,   398,
      29,    30,    92,    11,     4,   350,    51,   352,   403,   350,
      18,   352,   411,    26,    11,   414,   415,     1,   108,   109,
       4,    18,     6,     7,     8,     9,    10,     1,   350,    11,
     352,    16,   431,    17,    11,    11,    18,     1,    22,    23,
       1,    18,    18,     4,   389,   300,    11,    21,   389,   448,
      24,    25,   451,     1,   312,     5,   455,    21,   403,     4,
      24,    25,   403,     4,    29,    30,    50,   389,   463,   468,
      19,    20,     4,    21,    58,   474,    24,    25,   473,     1,
     479,   403,     4,    16,    33,    37,    19,    36,    21,    38,
      39,    24,    25,    60,    61,     1,    24,    25,     4,    27,
       6,     7,     8,     9,    10,     1,    24,    25,     4,    37,
      16,    17,     1,     4,    42,     4,    22,    23,   463,    37,
       1,    19,   463,    21,    42,     4,    24,    25,   473,   387,
      29,    30,   473,    27,    40,    29,    30,    43,    44,    45,
      46,   463,    63,    64,    50,    51,    13,    14,    15,    55,
      17,   473,    58,    17,    17,     1,    62,     1,     4,    65,
       4,    37,     6,     7,     8,     9,    10,    27,    37,    29,
      30,   429,    16,    17,     1,     4,    16,     4,    22,    23,
     340,    21,   342,     1,    24,    25,     4,    11,     6,     7,
       8,     9,    10,    51,     1,    27,    40,     4,    16,    43,
      44,    45,    46,    18,    22,    23,    50,    51,     4,    21,
      26,    55,    24,    25,    58,    26,    21,    26,    62,    24,
      25,    65,    40,    26,    11,    43,    44,    45,    46,    31,
      11,    49,    50,    51,    11,    21,     5,    55,    24,    25,
      58,     4,    63,     1,    62,    11,     4,    65,     6,     7,
       8,     9,    10,    21,     4,     4,    24,    25,    16,    21,
       4,    43,    24,    25,    22,    23,    21,    57,    21,    24,
      25,    24,    25,    11,    11,     4,    11,     6,     7,     8,
       9,    10,    40,     4,     4,    43,    44,    45,    46,     5,
      17,    49,    50,    51,    23,    21,    18,    55,    24,    25,
      58,    52,    11,     1,    62,    51,     4,    65,     6,     7,
       8,     9,    10,    27,    18,    29,    30,    41,    16,     4,
      11,    50,    27,    59,    22,    23,    16,    11,    41,    58,
       5,     4,    49,    52,     5,    17,    16,    16,    41,    16,
      52,    11,    40,     4,    52,    43,    44,    45,    46,    27,
       5,    11,    50,    51,    49,    11,     4,    55,    27,    27,
      58,    18,    11,    17,    62,    17,     4,    65,     6,     7,
       8,     9,    10,     4,    27,     6,     7,     8,     9,    10,
      17,    17,    13,    14,    15,    23,    17,     8,    26,    18,
      18,    22,    23,    31,    32,    17,    34,    35,    74,   127,
     219,    39,     4,    77,     6,     7,     8,     9,    10,   338,
     300,    44,    50,    51,   348,    53,    54,   455,    90,    50,
      58,    23,    60,    61,    26,   270,   285,    58,   241,    31,
      32,   285,    34,    35,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    -1,    -1,    -1,     4,    -1,    50,    51,
      -1,    -1,    -1,    11,    -1,    -1,    58,    26,    60,    61,
      -1,    -1,    31,    32,    -1,    34,    35,    -1,    26,    -1,
      39,    -1,    -1,    31,    32,    -1,    34,    35,     4,    -1,
      -1,    39,    51,    -1,    53,    54,    -1,    -1,    -1,     4,
      -1,    60,    61,    51,    -1,    53,    54,    -1,    -1,    -1,
      26,    -1,    60,    61,    -1,    31,    32,    -1,    34,    35,
       4,    26,    27,    39,    -1,    -1,    31,    32,    -1,    34,
      35,     4,    16,    17,    -1,    51,    -1,    53,    54,    -1,
      -1,    -1,    26,     4,    60,    61,    51,    31,    32,    -1,
      34,    35,    -1,    26,    27,    60,    61,    -1,    31,    32,
      -1,    34,    35,    -1,    -1,    26,    27,    51,    -1,    -1,
      31,    32,    -1,    34,    35,     4,    60,    61,    51,    -1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    60,    61,     4,
      51,    -1,    -1,    -1,    16,    -1,    -1,    26,    27,    60,
      61,    -1,    31,    32,    26,    34,    35,    -1,    -1,    31,
      32,    26,    34,    35,    -1,    -1,    31,    32,    -1,    34,
      35,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    60,    61,    -1,    -1,    -1,    51,    -1,    60,    61,
      -1,    -1,    -1,    -1,    -1,    60,    61,     4,    -1,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    28,    50,    56,    58,    73,    74,    75,
      76,    77,    93,    94,   116,   117,   164,   165,   167,     4,
       1,     4,     4,     4,     4,     4,     0,    75,    16,    19,
      21,    24,    25,    78,    79,    83,   106,   107,   108,   109,
      16,    21,    24,    25,    83,   118,   119,   120,   121,   122,
     123,   124,    21,    79,   106,   166,     5,     5,    11,    16,
       4,     6,     7,     8,     9,    10,    13,    14,    15,    17,
      22,    23,    50,    58,    84,    85,    86,    87,    89,    96,
      97,    98,    99,   100,     4,    80,     4,    26,   110,   111,
     112,   113,   110,     1,    21,    83,   106,     1,    21,   106,
       1,    21,   107,     1,    17,    88,    89,    92,   110,   110,
      21,   119,    21,   120,    16,   125,   126,   125,    21,   106,
      21,     1,     4,     4,     4,   168,    37,    96,     4,     4,
      17,    85,    89,    86,     1,     4,    90,    91,     1,    18,
      20,     5,    96,   111,     1,     4,   113,   111,    21,   106,
       1,    21,   106,     1,    21,     1,    21,    89,     1,     4,
      11,    95,    17,    89,   111,   111,    21,     1,     4,    17,
      22,    40,    43,    44,    45,    46,    50,    51,    55,    62,
      65,    96,   125,   127,   128,   129,   130,   131,   134,   135,
     136,   137,   138,   139,   143,   144,   146,   147,   154,   155,
     156,   157,   158,   167,   169,    21,    18,    41,    17,     4,
      90,    37,    37,    51,   101,   103,     1,   101,    11,    18,
       4,   110,   114,   115,    27,     1,    11,    11,    21,     1,
      21,    11,    18,    18,     1,    11,     1,    11,    95,    11,
      17,    96,    26,    26,    26,    26,     4,     4,    26,    31,
      32,    34,    35,    60,    61,   110,   142,   143,   144,   145,
     147,     1,   129,    31,     1,     4,   132,   133,    17,   129,
     129,   129,    11,    41,    59,     4,   147,   148,    11,   129,
     129,    17,    47,    48,   160,   161,   162,   163,   168,   142,
      11,   101,    11,    35,    52,   102,     1,     1,    91,     4,
       5,     1,    95,    11,    11,     1,    11,   132,     4,    10,
      11,   140,    26,    39,    53,    54,   141,   142,   141,     4,
      60,    61,     4,   144,   145,     4,     4,   145,    11,    24,
      25,    37,    42,    63,   170,    11,   101,    41,   101,   105,
       1,    11,    18,   155,   145,     4,     4,   149,   150,   151,
      57,   142,     5,    17,   162,   163,    17,    18,    52,    51,
     115,    11,    11,    41,     4,    11,   141,    11,   141,   145,
     142,    27,    29,    30,    19,    20,    33,    36,    38,    39,
      27,    27,    27,   145,   145,   145,   145,    16,    63,    64,
     171,    41,   104,   142,   104,   133,   133,    11,     5,    52,
       4,   151,   129,     5,    49,   129,    17,   168,     1,    35,
     142,    41,    27,   142,    11,    11,   141,    27,   141,   141,
     142,   142,   142,   142,   142,   142,    16,   159,    96,    16,
     129,    16,    81,   142,   152,   153,    49,   129,    11,    49,
      52,    52,   142,    27,    27,   142,    27,   142,    11,     4,
      96,    16,    17,    82,   142,     5,    11,    49,    11,    27,
      27,    27,   142,    17,     4,    17,    82,    17,    18,   153,
      11,    27,   129,    17,    18,    17,    82,   129,    82,    18,
      82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    74,    74,    75,    75,    75,    75,    75,
      76,    77,    77,    77,    77,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    79,    79,    80,    80,    81,    81,    82,
      82,    82,    82,    82,    82,    83,    83,    84,    84,    84,
      85,    86,    86,    87,    87,    87,    88,    89,    89,    89,
      90,    90,    90,    91,    91,    91,    91,    92,    92,    92,
      93,    94,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    95,    96,    96,    96,    96,    97,    97,    98,    98,
      99,    99,    99,    99,    99,    99,   100,   101,   102,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   108,   108,   108,   109,   110,   111,   111,   112,   112,
     113,   114,   114,   115,   116,   117,   117,   118,   118,   118,
     118,   119,   119,   120,   120,   121,   122,   123,   124,   125,
     126,   127,   127,   127,   128,   128,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   130,   131,   131,   131,
     132,   132,   132,   133,   133,   133,   134,   135,   135,   135,
     136,   137,   138,   139,   139,   139,   139,   139,   139,   139,
     139,   140,   140,   140,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   142,   142,   143,   144,
     144,   144,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   146,   147,   148,
     148,   149,   149,   150,   150,   151,   152,   152,   153,   154,
     155,   156,   156,   156,   157,   158,   159,   160,   160,   160,
     160,   161,   161,   162,   162,   162,   163,   163,   163,   164,
     165,   166,   166,   166,   166,   167,   167,   168,   168,   168,
     168,   169,   169,   170,   170,   171
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       2,     4,     2,     2,     2,     4,     4,     3,     3,     3,
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
       1,     1,     1,     1,     2,     2,     3,     3,     4,     1,
       3,     1,     3,     3,     2,     3,     3,     1,     1,     1,
       4,     1,     2,     8,     7,     7,     7,     6,     6,     6,
       5,     4,     3,     1,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     1,     1,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     1,     4,     1,
       1,     1,     1,     2,     1,     3,     3,     1,     1,     2,
       4,     2,     4,     2,     4,     5,     1,     3,     2,     2,
       1,     2,     1,     6,     4,     5,     5,     3,     4,     2,
       2,     3,     2,     2,     1,     6,     3,     5,     3,     1,
       3,     4,     3,     6,     7,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      YY_LAC_DISCARD ("YYBACKUP");                              \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
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
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
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

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYSIZE_T *yycapacity, YYSIZE_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yytype_int16 **yybottom,
                      yytype_int16 *yybottom_no_free,
                      yytype_int16 **yytop, yytype_int16 *yytop_empty)
{
  YYSIZE_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYSIZE_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYSIZE_T yyalloc = 2 * yysize_new;
      yytype_int16 *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        (yytype_int16*) YYSTACK_ALLOC (yyalloc * sizeof *yybottom_new);
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yytype_int16 *yyesa, yytype_int16 **yyes,
        YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  yytype_int16 *yyes_prev = yyssp;
  yytype_int16 *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYSIZE_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYSIZE_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        int yystate;
        {
          int yylhs = yyr1[yyrule] - YYNTOKENS;
          yystate = yypgoto[yylhs] + *yyesp;
          if (yystate < 0 || YYLAST < yystate
              || yycheck[yystate] != *yyesp)
            yystate = yydefgoto[yylhs];
          else
            yystate = yytable[yystate];
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            *yyesp = yystate;
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            *++yyesp = yystate;
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyesa, yytype_int16 **yyes,
                YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
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
  return 0;
}
#endif /* YYERROR_VERBOSE */

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




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

    yytype_int16 yyesa[20];
    yytype_int16 *yyes;
    YYSIZE_T yyes_capacity;

  int yy_lac_established = 0;
  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  yyes = yyesa;
  yyes_capacity = sizeof yyesa / sizeof *yyes;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
          case 2:
#line 206 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"program: components\n"; 
										 }
#line 2076 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 209 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"components: components component\n";}
#line 2082 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 210 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"components: component\n";}
#line 2088 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 212 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface \n";}
#line 2094 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 213 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_implementation \n";}
#line 2100 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 214 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"protocol \n";}
#line 2106 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 215 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct \n";}
#line 2112 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 216 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"enum \n";}
#line 2118 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 218 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface: class_interface_header class_interface_body\n";
																classNode=NULL;
																 idsList.clear();
																 methodsList.clear();
																 method=NULL;
																}
#line 2129 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 227 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																				interface=InterfaceHelper::createNewInterface((yyvsp[-2].r.text),(yyvsp[0].r.text),symbolTable);
																				
																				
																				}
#line 2139 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 232 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																					Streams::verbose()<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
																				 interface=InterfaceHelper::createNewInterface((yyvsp[0].r.text),"",symbolTable);

																				}
#line 2149 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 237 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Unknown type name '"<<(yyvsp[-1].r.text)<<"' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2155 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 238 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2161 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 240 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2167 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 243 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
															
														InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2177 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 249 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														}
#line 2185 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 253 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	protocol_reference_list interface_declaration_list	AT_END\n";
														}
#line 2194 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 258 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2203 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 263 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														}
#line 2211 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 267 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface_body:instance_variables		AT_END\n";}
#line 2217 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 269 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {														
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:interface_declaration_list	AT_END\n";
														}
#line 2226 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 273 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface_body:AT_END\n";}
#line 2232 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 274 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2238 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 275 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2244 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 276 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2250 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 277 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2256 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 278 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2262 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 279 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2268 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 280 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2274 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 281 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2280 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 282 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2286 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 286 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													if(interface!=NULL){
													InterfaceHelper::addInheritedProtocol(interface,idsList,symbolTable);
														idsList.clear();
													}
													Streams::verbose()<<"protocol_reference_list: LESS_THAN ids_list_identifier MORE_THAN\n";
												}
#line 2298 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 293 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected '>' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2304 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 296 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													Streams::verbose()<<"ids_list:ids_list_identifier COMMA IDENTIFIER\n"; 
													idsList.push_back((yyvsp[0].r.text));
													}
#line 2313 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 300 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													Streams::verbose()<<"ids_list_identifier:IDENTIFIER\n";
													idsList.push_back((yyvsp[0].r.text));
												    }
#line 2322 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 305 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array with body";}
#line 2328 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 306 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array without elements";}
#line 2334 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 310 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array-element \n";}
#line 2340 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 311 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array-element \n";}
#line 2346 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 312 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"empty element \n";}
#line 2352 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 313 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"inside braces element \n";}
#line 2358 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 314 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"inside braces element \n";}
#line 2364 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 315 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"inside braces element \n";}
#line 2370 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 318 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";}
#line 2376 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 319 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variables:OPEN_S	 CLOSE_S\n";}
#line 2382 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 322 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";}
#line 2388 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 323 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variable_declarations:instance_variable_declaration\n";}
#line 2394 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 324 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variable_declarations:variable_declaration_list\n";}
#line 2400 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 327 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variable_declaration:visibility_specification variable_declaration_list\n";
																	}
#line 2407 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 331 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
											arrayList.clear();
												idsList.clear();
												flag=false;
										}
#line 2419 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 339 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										       InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
												arrayList.clear();
												idsList.clear();
												flag=false;
										Streams::verbose()<<"variable_declaration_list: variable_declaration\n";
										}
#line 2431 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 349 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"visibility_specification:AT_PRIVATE\n";  visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2437 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 350 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"visibility_specification:AT_PROTECTED\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2443 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 351 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"visibility_specification:AT_PUBLIC\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2449 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 356 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct_variable_declaration:struct_declaration_list\n";}
#line 2455 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 359 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
	                                           (yyval.r.text)=(yyvsp[-2].r.text);
												}
#line 2463 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 362 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
													}
#line 2472 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 366 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2478 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 370 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									Streams::verbose()<<"ids_list:ids_list COMMA id_dec\n"; 

									}
#line 2487 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 374 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"ids_list:id_dec\n"; }
#line 2493 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 375 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2499 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 378 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose() <<" data_member: IDENTIFIER array_tag \n";
							 var=new Array((yyvsp[0].r.text),arrayAlloc.size(),NULL);
					       ( dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
						   arrayList.push_back( ( dynamic_cast<Array*>(var)));
						      arrayAlloc.clear();
							}
#line 2510 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 384 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {idsList.push_back((yyvsp[0].r.text)) ;Streams::verbose() <<" data_member: IDENTIFIER  \n";}
#line 2516 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 385 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2522 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 386 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2528 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 388 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {  
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																												idsList.clear();
																												flag=false;
																										  Streams::verbose()<<"struct_declaration_list: struct_declaration_list  variable_declarationxx\n";
																										}
#line 2540 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 396 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																														 	idsList.clear();
																															flag=false;
																										Streams::verbose()<<"struct_declaration_list:  variable_declarationxx\n";
																										}
#line 2552 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 403 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Illigal visibility specification at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2558 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 407 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
					myStruct=StructHelper::createNewStruct((yyvsp[0].r.text),symbolTable);
					Streams::verbose()<<"struct_header: STRUCT  IDENTIFIER\n";
					}
#line 2567 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 413 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S  entity SEMI_COMA\n";}
#line 2573 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 414 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S enteity SEMI_COMA \n";}
#line 2579 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 415 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S SEMI_COMA\n";}
#line 2585 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 416 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S  SEMI_COMA  \n";}
#line 2591 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 417 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2597 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 418 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2603 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 419 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2609 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 420 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2615 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 423 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"entity: IDENTIFIER COMMA  entity\n";}
#line 2621 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 424 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"entity:  IDENTIFIER \n";}
#line 2627 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 425 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2633 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 429 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"type:simple type\n";}
#line 2639 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 430 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"type: complex type\n";}
#line 2645 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 431 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"type: struct_type\n";}
#line 2651 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 432 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"type: enum_type\n";}
#line 2657 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 436 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	Streams::verbose()<<"struct_type: STRUCT IDENTIFIER   \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																		string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2671 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 445 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct_type: STRUCT IDENTIFIER  MULTI \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2685 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 456 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"enum_type: ENUM IDENTIFIER \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2699 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 465 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"enum_type: ENUM IDENTIFIER  MULTI  \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																									string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2713 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 476 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"int type \n";
																type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
																}
#line 2727 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 485 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"char type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2740 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 493 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"float type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2753 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 501 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"NSString type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2766 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 509 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"void type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2779 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 517 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"bool type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2792 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 527 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"complex_type:	IDENTIFIER	MULTI\n";
 {
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}}
#line 2807 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 538 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"array_tag: array_first_tag array_tag_list \n"; 
										   }
#line 2815 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 543 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"array_tag_list: array_tag_list OPEN_ARR INT_VAL CLOSE_ARR\n"; 
																arrayAlloc.push_back((yyvsp[-1].r.int_val));
														   }
#line 2824 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 548 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<" Error:missing  dimension in array tag  ";arrayAlloc.clear();}
#line 2830 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 551 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"array_first_tag: OPEN_ARR INT_VAL CLOSE_ARR\n"; 
											arrayAlloc.push_back((yyvsp[-1].r.int_val));
											}
#line 2839 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 555 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"array_first_tag: OPEN_ARR  CLOSE_ARR\n"; 
											arrayAlloc.push_back(-1);
											}
#line 2848 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 561 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							   }
#line 2856 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 566 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose() <<"with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							 }
#line 2865 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 571 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {(yyval.r.node)=NULL;}
#line 2871 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 576 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
															 methodsList.push_back(method);
														
															 
																}
#line 2882 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 582 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																 Streams::verbose()<<"interface_declaration_list:interface_declaration\n";
															 methodsList.push_back(method);
															 
																 	
																 }
#line 2893 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 590 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"interface_declaration: class_method_declaration\n";}
#line 2899 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 591 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"interface_declaration: instance_method_declaration\n";}
#line 2905 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 595 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"class_method_declaration: PLUS p_type method_selectors	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,true);
															
																 selectorsList.clear();
																
																}
#line 2917 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 603 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2923 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 604 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2929 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 607 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															Streams::verbose()<<"instance_method_declaration: MINUS p_type	method_selectors		SEMI_COMA\n";
															method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,false);
																 selectorsList.clear();
																
																
															}
#line 2941 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 616 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.r.text)=(yyvsp[-1].r.text);
																}
#line 2950 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 625 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"method_selectors: selectors_list\n";
																	(yyval.r.text)="";
																}
#line 2959 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 629 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"method_selectors:IDENTIFIER \n";(yyval.r.text)=(yyvsp[0].r.text);}
#line 2965 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 631 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													Streams::verbose()<<"selectors_list:	selectors_list selector_decleration\n";
																
													selectorsList.push_back(tselector);
													tselector=NULL;
											}
#line 2976 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 637 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"selectors_list:	 selector_decleration\n";
												selectorsList.clear();

												selectorsList.push_back(tselector);
												tselector=NULL;
}
#line 2988 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 645 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				Streams::verbose()<<"selector_decleration:	IDENTIFIER	SEMI_COLUMN	parameter_list	\n";
																				tselector=new DeclerationSelector((yyvsp[-2].r.text),selectorVarList);
																			}
#line 2997 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 651 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"parameter_list: parameter_list parameter\n";
																	selectorVarList.push_back(var);		
											}
#line 3006 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 655 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									selectorVarList.clear();
										selectorVarList.push_back(var);		
											
				 
														Streams::verbose()<<"parameter_list:  parameter\n";
						
					}
#line 3019 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 664 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"parameter:  p_type IDENTIFIER\n";
																
																if(type!=NULL){
																var=new Variable((yyvsp[0].r.text),type);
																}
																else{
																Streams::verbose()<<"Error:Type not found.\n";
																}
																}
#line 3034 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 677 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_implementation: class_implementation_header class_implementation_body\n";}
#line 3040 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 680 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	Streams::verbose()<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																	interface=InterfaceHelper::checkImplementation((yyvsp[-2].r.text),symbolTable,(yyvsp[0].r.text));
																	
																}
#line 3050 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 685 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																interface=InterfaceHelper::checkImplementation((yyvsp[0].r.text),symbolTable,"");
																	
																}
#line 3059 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 691 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	Streams::verbose()<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";
																			InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														}
#line 3069 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 697 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
																	Streams::verbose()<<"class_implementation_body: instance_variables									AT_END\n";
																}
#line 3077 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 700 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	Streams::verbose()<<"class_implementation_body:						implementation_definition_list	AT_END\n";
																	InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														
																}
#line 3088 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 706 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_implementation_body:	AT_END\n";}
#line 3094 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 709 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);Streams::verbose()<<"implementation_definition_list: implementation_definition_list implementation_definition\n";}
#line 3100 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 710 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);Streams::verbose()<<"implementation_definition_list: implementation_definition\n";}
#line 3106 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 713 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"implementation_definition: class_implementation_definition	\n";}
#line 3112 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 714 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"implementation_definition: instance_implementation_definition \n";}
#line 3118 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 717 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"class_implementation_definition: class_implementation_definition_header block_body";
														functionNode->addNode(cscoop);
														functionNode=NULL;
																scoop=NULL;
															scoop=NULL;
													}
#line 3130 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 726 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"class_implementation_definition_header: PLUS p_type		 method_selectors\n";
										method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
									           functionNode= ScoopHelper::createNewFunctionNode(method,interface->static_twin);
												scoop=functionNode;				
																
										}
#line 3143 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 737 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															Streams::verbose()<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";
														functionNode->addNode(cscoop);
														functionNode=NULL;
																scoop=NULL;
															scoop=NULL;
										
															}
#line 3156 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 747 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											     Streams::verbose()<<"instance_implementation_definition_header:MINUS p_type		method_selectors\n";
												 method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
									           functionNode= ScoopHelper::createNewFunctionNode(method,interface);
												scoop=functionNode;
												}
#line 3168 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 756 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												
												Streams::verbose()<<"block_body:OPEN_S  block_body_part \n";
												(yyval.r.node)=(yyvsp[-1].r.node);
												}
#line 3178 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 763 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												
                                                scoop=ScoopHelper::createNewScoop(scoop);
												
												
												scoopVector.push_back(scoop);
												Streams::verbose()<<"block_body_header:OPEN_S	\n";
												(yyval.r.node)=scoop;
												}
#line 3192 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 775 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cscoop=scoop;scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements:statement_list	CLOSE_S	\n";
												}
#line 3201 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 779 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cscoop=scoop;scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements:CLOSE_S\n";
												}
#line 3210 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 783 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											  cscoop=scoop; scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements: error CLOSE_S\n";
												}
#line 3219 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 789 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement_list: statement_list statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3229 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 794 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement_list: statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											(yyval.r.node)=(yyvsp[0].r.node);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3240 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 803 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: loop_statement\n";
											(yyval.r.text)="loop";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3249 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 807 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: conditional_statement\n";
											(yyval.r.text)="cond";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3258 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 811 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"statement: expr\n";
												(yyval.r.text)="expr";
												(yyval.r.node)=(yyvsp[-1].r.node);
												//nodeXX=$<r.node>1;
											}
#line 3269 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 817 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"statement: variable_declaration\n";
											
												ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												(yyval.r.node)=(yyvsp[0].r.node);
										    }
#line 3283 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 826 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: block_body\n";(yyval.r.text)=new char[256];(yyval.r.text)[0]='\0';strcat((yyval.r.text),"Block");
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3291 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 829 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: return_statement\n";
												(yyval.r.text)="return";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3300 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 833 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: try_catch\n";}
#line 3306 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 835 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	                                            (yyval.r.text)="asm";
												(yyval.r.node)=(yyvsp[0].r.node);}
#line 3314 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 838 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	 (yyval.r.text)="call";
	(yyval.r.node)=(yyvsp[-1].r.node);
	}
#line 3323 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 843 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    { Streams::verbose()<<"error SEMI_COMA \n";}
#line 3329 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 848 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"@asm command \n";
	                                         (yyval.r.node)=new AsmNode(scoop,*(yyvsp[-1].r.string_val));
											 }
#line 3337 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 854 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
														 (yyval.r.text)=(yyvsp[-2].r.text);
														 (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3348 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 860 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
														  (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3360 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 867 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_declaration:enum\n";}
#line 3366 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 871 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_list:variable_list COMMA variable\n";}
#line 3372 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 872 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_list:variable\n";
										
										}
#line 3380 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 875 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ',' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3386 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 878 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose() <<"variable:  IDENTIFIER array_tag initializer \n";
											 var=new Array((yyvsp[-1].r.text),arrayAlloc.size(),NULL);
											(dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
											 arrayList.push_back( ( dynamic_cast<Array*>(var)));
											 arrayAlloc.clear();
											}
#line 3398 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 885 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
											Streams::verbose() <<"variable:  IDENTIFIER main_initializer \n";
											idsList.push_back((yyvsp[-1].r.text)) ;
											IdentifierNode* identifierNode=new IdentifierNode((yyvsp[-1].r.text),scoop);
											if((yyvsp[0].r.node)!=NULL){
											(dynamic_cast<AssignNode*>((yyvsp[0].r.node)))->setLeftExp(identifierNode);
											}
											declarationList.push_back(make_pair((yyvsp[-1].r.text),(yyvsp[0].r.node)));
											}
#line 3412 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 894 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3418 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 897 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"return_statement: RETURN expr\n";
												 (yyval.r.node)=new ReturnNode(scoop,(yyvsp[-1].r.node));
												}
#line 3426 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 902 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"loop_statement: for_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3434 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 905 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"loop_statement: while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3442 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 908 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"loop_statement: do_while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3450 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 913 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"do_while: do_header   statement   while_loop_header   SEMI_COMMA\n";
													(yyval.r.node)=new DoWhileNode((yyvsp[-1].r.node),(yyvsp[-2].r.node),scoop);
													}
#line 3458 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 918 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"do_header: DO\n";}
#line 3464 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 921 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop: for_loop_header statement\n";
												type=symbolTable->getType("int");
											if(type==NULL){
											  	string error="Unknown type name '";
												error.append((yyvsp[-1].r.text));
												error.append("'.");
												Program::addError(new SemanticError(error));
											}	
											ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												(dynamic_cast<ForNode*>((yyvsp[-1].r.node)))->setStatement((yyvsp[0].r.node));
												(yyvsp[0].r.node)->toString();
												(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3485 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 940 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer	SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-5].r.node),(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										//nodeXX=$<r.node>5;
										}
#line 3494 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 946 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3502 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 950 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3510 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 954 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),(yyvsp[-2].r.node),NULL,NULL,scoop);
										}
#line 3518 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 959 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-3].r.node),NULL,NULL,NULL,scoop);
										}
#line 3526 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 963 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA				CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-1].r.node),NULL,NULL,scoop);
										}
#line 3534 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 967 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P";
										(yyval.r.node)=new ForNode(NULL,NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3542 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 972 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_hearder: FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	\n";
											(yyval.r.node)=new ForNode(NULL,NULL,NULL,NULL,scoop);
											}
#line 3550 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 977 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_initializer: INT IDENTIFIER EQUAL expr\n";
											AssignNode * temp=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
											
											//temp->add($<r.text>2,);
											
											//temp.push_back(make_pair($<r.text>2,$<r.node>4));
											DeclerationNode* temp1=new DeclerationNode(list<pair<string,Node*>>(),scoop,"int");
											temp1->add((yyvsp[-2].r.text),temp);
										 (yyval.r.node)=temp1; 
										 idsList.push_back((yyvsp[-2].r.text));
										}
#line 3566 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 988 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_initializer: IDENTIFIER EQUAL expr\n";
										(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
										}
#line 3574 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 991 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_initializer: IDENTIFIER\n";
										(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
										}
#line 3582 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 996 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr LESS_THAN expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_THAN,scoop);
										}
#line 3590 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 999 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr MORE_THAN expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_THAN,scoop);
										}
#line 3598 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1002 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr LESS_OR_EQUAL expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_OR_EQUAL,scoop);
										}
#line 3606 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1005 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr MORE_OR_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_OR_EQUAL,scoop);
										}
#line 3614 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1008 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr EQUAL_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),EQUAL_EQUAL,scoop);
										}
#line 3622 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1011 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr EQUAL_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),NOT_EQUAL,scoop);
										}
#line 3630 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1014 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:NOT_EQUAL expr\n";
										 (yyval.r.node)=new UnaryNode(scoop,(yyvsp[0].r.node),NOT_EQUAL);
										}
#line 3638 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1017 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";
										 (yyval.r.node)=(yyvsp[-1].r.node);
										}
#line 3646 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1020 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"logic_expr:logic_expr AND_AND logic_expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),AND_AND,scoop);
										}
#line 3655 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1024 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:logic_expr OR_OR logic_expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),OR_OR,scoop);
										}
#line 3663 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1027 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:TRUE\n";
										 (yyval.r.node)=new ConstantNode(true,scoop);
										}
#line 3671 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1030 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:FALSE\n";
											 (yyval.r.node)=new ConstantNode(false,scoop);
										}
#line 3679 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1035 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"expr:assign_expr\n";
										 (yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3687 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1038 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"expr:simple_expr\n";
										(yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3695 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1043 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"assign_expr:long_id EQUAL simple_expr\n";
										//LongIdHelper::checkIdenentifier( scoop, interface,"set1");
										(yyval.r.node)=new AssignNode(scoop,(yyvsp[-2].r.node),(yyvsp[0].r.node));
										}
#line 3705 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1050 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"long_id: long_id.IDENTIFIER\n";
																(yyval.r.node)=new DotNode(scoop,(yyvsp[-2].r.node),(yyvsp[0].r.text));

											;}
#line 3714 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1054 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"long_id: long_id.message_call\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3723 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1058 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																LongIdHelper::addIdentifier((yyvsp[0].r.text)); 
																(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
																Streams::verbose()<<"long_id:IDENTIFIER\n";
															   }
#line 3733 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1068 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"simple_expr:STRING_VAL\n";
									(yyval.r.node)=new ConstantNode(*((yyvsp[0].r.string_val)),scoop);
									Streams::verbose()<<"node typr"<<(yyval.r.node)->generateType()->get_name()<<"\n";
									(yyval.r.string_val)=(yyvsp[0].r.string_val);
									}
#line 3744 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1074 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									Streams::verbose()<<"simple_expr:INT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.int_val,scoop);
									}
#line 3753 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1078 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:FLOAT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.float_val,scoop);
									}
#line 3761 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1081 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:CHAR_VAL\n";
										(yyval.r.node)=new ConstantNode(yylval.r.char_val,scoop);
									}
#line 3769 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1084 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:long_id\n";
									(yyval.r.node)=(yyvsp[0].r.node);
									}
#line 3777 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1087 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"simple_expr:expr PLUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),PLUS,scoop);
									}
#line 3786 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1091 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"simple_expr:expr MINUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MINUS,scoop);
									}
#line 3795 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1095 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:expr MULTI expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MULTI,scoop);
									}
#line 3803 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1098 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									Streams::verbose()<<"simple_expr:expr DIV expr\n";
									(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),DIV,scoop);
									}
#line 3812 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1102 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:OPEN_P expr CLOSE_P\n";(yyval.r.node)=(yyvsp[-1].r.node);}
#line 3818 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1103 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:ID++";}
#line 3824 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1104 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:ID--";}
#line 3830 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1105 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:++ID";}
#line 3836 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1106 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:--ID";}
#line 3842 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1107 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"expr:p_type expr\n";
																if(type!=NULL)
																(yyval.r.node)=new CastNode(scoop,type,(yyvsp[0].r.node));
															}
#line 3852 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1114 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3868 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1127 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";
												callNode->setMessage((yyvsp[-1].r.text));
												(yyval.r.node)=callNode;
												callNode=NULL;
														if(callNodeStack.size()!=0){
														callNode=callNodeStack.top();
														callNodeStack.pop();
														}
												}
#line 3883 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1139 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"sender: message_call\n";
											
											callNode->setSender((yyvsp[0].r.node));
											 (yyval.r.node)=(yyvsp[0].r.node);
											 
											}
#line 3894 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1145 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"sender: IDENTIFIER\n";
											(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
											
											//callNode=new CallNode(scoop);
											
											callNode->setSender((yyval.r.node));
											
											}
#line 3907 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1155 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"message: IDENTIFIER\n";
											(yyval.r.text)=(yyvsp[0].r.text);
												
											}
#line 3916 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1159 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"message_selectors_list\n";
											//$<r.node>$=$<r.text>1;
											(yyval.r.text)="";
											}
#line 3926 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1166 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"message_selectors_list:message_selectors_list message_selector \n";
												callNode->addSelector(cselector);
											cselector=NULL;
												}
#line 3936 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1171 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	callNode->addSelector(cselector);
							cselector=NULL;
								Streams::verbose()<<"message_selectors_list: message_selector\n";
											
		}
#line 3946 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1177 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cselector->name=(yyvsp[-2].r.text);
							}
#line 3954 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1181 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"argument_list: argument_list argument\n";
												cselector->addArg((yyvsp[0].r.node));}
#line 3961 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1183 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"argument_list: argument\n";
												cselector=new CallSelector("");
											cselector->addArg((yyvsp[0].r.node));}
#line 3969 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1188 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"argument: SEMI_COLUMN expr\n";
											(yyval.r.node)=(yyvsp[0].r.node);
											//callNode->addArgument($<r.node>1,"");
											
											}
#line 3980 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1196 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"while_loop:while_loop_header statement\n";
											 (yyval.r.node)=new WhileNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop);
										}
#line 3989 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1202 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3997 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1207 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"conditional_statement: if_header statement\n";
												 (yyval.r.node)=new IfNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop,NULL);
												}
#line 4005 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1210 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"conditional_statement: if_header statement with else\n";
												 (yyval.r.node)=new IfNode((yyvsp[-3].r.node),(yyvsp[-2].r.node),scoop,new ElseNode((yyvsp[0].r.node),scoop));
												}
#line 4014 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1214 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"conditional_statement: switch_header switch_body statement\n";
											(yyval.r.node)=tempSwitch;
										}
#line 4022 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1219 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 4030 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1224 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"switch_header: SWITCH OPEN_P IDENTIFIER CLOSE_P\n";
										
										tempSwitch->setExpr(new IdentifierNode((yyvsp[-2].r.text),scoop));
									}
#line 4039 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1230 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {scoop=new ScoopNode(scoop);tempSwitch=new SwitchNode(NULL,std::list<pair<Node*,Node*>>(),scoop);}
#line 4045 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1233 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4051 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1234 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4057 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1235 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4063 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1236 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4069 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1239 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4075 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1240 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4081 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1243 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-4].r.node),(yyvsp[-2].r.node));}
#line 4087 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1244 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-2].r.node),(yyvsp[0].r.node));}
#line 4093 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1245 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-3].r.node),NULL);}
#line 4099 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1248 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-2].r.node));}
#line 4105 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1249 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[0].r.node));}
#line 4111 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1250 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-1].r.node));}
#line 4117 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1252 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"protocol: protocol_header protocol_body\n";
										idsList.clear();
										methodsList.clear();
										method=NULL;
										}
#line 4128 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1260 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose()<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";
								protocol=ProtocolHelper ::createNewProtocol((yyvsp[0].r.text),symbolTable );
								
								}
#line 4138 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1267 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose()<<"protocol_body:	protocol_reference_list interface_declaration_list	AT_END\n";
								ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								idsList.clear();
								}
#line 4150 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1275 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose()<<"protocol_body:	interface_declaration_list	AT_END\n";
									
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								
								}
#line 4162 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1283 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose()<<"protocol_body:	protocol_reference_list AT_END	\n";
											ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								idsList.clear();
								}
#line 4172 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1289 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"protocol_body:	AT_END\n";}
#line 4178 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1291 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"enum: ENUM IDENTIFIER  OPEN_S list_expr CLOSE_S SEMI_COMA  \n";
																
																EnumHelper::createNewEnum( (yyvsp[-4].r.text),idsList, symbolTable);
																idsList.clear();
															 }
#line 4189 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1297 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"enum: ENUM IDENTIFIER SEMI_COMA\n";
																EnumHelper::createNewEnum( (yyvsp[-1].r.text),idsList, symbolTable);
															  }
#line 4198 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1304 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"list_expr:IDENTIFIER EQUAL expr COMMA list_expr\n";
												idsList.push_back((yyvsp[-4].r.text));
													(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-4].r.text),scoop),(yyvsp[-2].r.node));
												}
#line 4208 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1309 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"list_expr:IDENTIFIER EQUAL expr\n";
												idsList.push_back((yyvsp[-2].r.text));
												(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
												}
#line 4218 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1314 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													Streams::verbose()<<"list_expr:IDENTIFIER \n";
													idsList.push_back((yyvsp[0].r.text));
													//??
												}
#line 4228 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1319 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  Streams::verbose()<<"list_expr:IDENTIFIER  COMMA list_expr \n";
												  idsList.push_back((yyvsp[-2].r.text));
												  //??
												}
#line 4238 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1326 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  Streams::verbose()<<"try_catch:TRY statement catch_list finally_statement \n";
												}
#line 4246 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1330 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {				  
								Streams::verbose()<<"try_catch:TRY statement catch_list \n";
							  }
#line 4254 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1335 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"catch_list:CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4260 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1336 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"catch_list:catch_list CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4266 "yacc.cpp" /* yacc.c:1646  */
    break;


#line 4270 "yacc.cpp" /* yacc.c:1646  */
        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
  }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1341 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1906  */

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
	   for(int i = 0; i < argc; i++) 
		{
			if(string(argv[i])=="-o")
			{
				if(i+1<argc)
				{
						  ofs=std::ofstream(string(argv[i]), std::ofstream::out);
				}	
			}

		}
	globalScoop=new ScoopNode(NULL);
	globalScoop->setOffsetRegister("gp");

	addFile("nsobject.oc");

	addFile("system.oc");

	addFile("code.txt");
		for(string sf:sfiles){
	
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
