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

#line 147 "yacc.cpp" /* yacc.c:339  */

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
#line 151 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:355  */

#include "ast\node.h"

#line 181 "yacc.cpp" /* yacc.c:355  */

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
#line 154 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:355  */

	
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
	   

#line 280 "yacc.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 295 "yacc.cpp" /* yacc.c:358  */

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
#define YYLAST   874

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  268
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  484

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
       0,   184,   184,   187,   188,   190,   191,   192,   193,   194,
     196,   206,   210,   215,   216,   218,   220,   226,   230,   235,
     240,   244,   246,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   264,   271,   274,   278,   283,   284,   288,
     289,   290,   291,   292,   293,   296,   297,   300,   301,   302,
     305,   308,   316,   327,   328,   329,   334,   337,   340,   344,
     348,   352,   353,   356,   362,   363,   364,   366,   374,   381,
     385,   391,   392,   393,   394,   395,   396,   397,   398,   401,
     402,   403,   407,   408,   409,   410,   414,   423,   434,   443,
     454,   463,   471,   479,   487,   495,   505,   516,   521,   525,
     526,   529,   533,   539,   542,   544,   548,   553,   559,   567,
     568,   572,   579,   584,   585,   588,   595,   602,   611,   615,
     617,   623,   631,   637,   641,   650,   663,   666,   671,   677,
     683,   686,   692,   695,   696,   699,   700,   703,   711,   718,
     727,   736,   742,   749,   756,   771,   775,   779,   785,   790,
     799,   803,   807,   813,   822,   825,   829,   831,   834,   839,
     844,   850,   856,   863,   867,   868,   871,   874,   881,   890,
     893,   898,   901,   904,   909,   914,   917,   935,   941,   945,
     949,   954,   958,   962,   967,   973,   984,   987,   992,   995,
     998,  1001,  1004,  1007,  1010,  1013,  1017,  1020,  1023,  1028,
    1031,  1036,  1043,  1044,  1048,  1058,  1061,  1065,  1068,  1071,
    1074,  1078,  1082,  1085,  1089,  1090,  1091,  1092,  1093,  1094,
    1101,  1114,  1126,  1132,  1142,  1146,  1153,  1158,  1164,  1168,
    1170,  1175,  1183,  1189,  1194,  1197,  1201,  1206,  1211,  1217,
    1220,  1221,  1222,  1223,  1226,  1227,  1230,  1231,  1232,  1235,
    1236,  1237,  1239,  1247,  1253,  1261,  1269,  1275,  1278,  1284,
    1291,  1296,  1301,  1306,  1313,  1317,  1322,  1323,  1326
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

#define YYPACT_NINF -428

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-428)))

#define YYTABLE_NINF -65

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-65)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     176,    58,    31,    90,   122,   131,   158,   153,   130,  -428,
    -428,   287,   211,  -428,  -428,   340,  -428,   366,  -428,  -428,
    -428,   230,   247,    50,  -428,  -428,  -428,  -428,   604,   282,
    -428,    14,    14,  -428,   143,    98,   150,  -428,  -428,  -428,
     249,  -428,    14,    14,   303,  -428,   381,  -428,  -428,   278,
    -428,   278,  -428,   423,   430,  -428,   111,   301,  -428,   306,
     292,  -428,  -428,  -428,  -428,  -428,  -428,  -428,  -428,  -428,
     506,  -428,   330,   342,   402,  -428,   665,   665,  -428,   408,
    -428,  -428,  -428,  -428,  -428,    84,   345,   506,   358,    23,
     363,  -428,   358,   361,   449,  -428,   175,   212,  -428,  -428,
     267,  -428,  -428,  -428,   665,   201,   367,  -428,   665,   358,
    -428,   358,  -428,  -428,   470,  -428,  -428,  -428,  -428,   331,
    -428,  -428,   509,  -428,  -428,  -428,  -428,     2,   371,  -428,
     428,   343,   357,  -428,  -428,  -428,   665,   352,     3,   205,
    -428,  -428,   406,  -428,   385,   393,    59,  -428,  -428,   345,
    -428,   411,  -428,  -428,   527,  -428,  -428,   272,  -428,  -428,
    -428,  -428,  -428,   252,   410,  -428,   116,   243,  -428,  -428,
    -428,  -428,   137,   292,  -428,   506,   404,   412,   419,  -428,
     424,   439,  -428,   799,   537,   421,   476,  -428,  -428,   391,
    -428,  -428,  -428,  -428,  -428,  -428,   537,  -428,   537,   447,
      27,     7,   448,  -428,   537,  -428,   537,    -2,  -428,  -428,
    -428,   306,   799,   453,     3,   266,  -428,  -428,   146,  -428,
    -428,  -428,   145,  -428,   497,  -428,   461,   464,  -428,  -428,
    -428,  -428,  -428,  -428,  -428,  -428,  -428,  -428,   502,   460,
    -428,   302,  -428,   183,  -428,  -428,   476,    19,   677,   677,
     472,    20,   255,   633,  -428,  -428,  -428,  -428,   486,   488,
     799,   485,  -428,    27,   206,  -428,   493,   434,   498,   352,
     224,   154,  -428,  -428,  -428,   465,  -428,  -428,   799,   507,
    -428,  -428,   514,  -428,  -428,   462,  -428,   799,   519,  -428,
       5,  -428,   508,  -428,   513,  -428,  -428,  -428,   484,  -428,
     489,  -428,   352,  -428,  -428,   385,   531,  -428,  -428,  -428,
     526,  -428,   210,   516,   546,   291,   543,   597,   799,  -428,
    -428,   253,   469,   328,   528,  -428,  -428,   255,   499,   294,
    -428,  -428,   206,  -428,   799,   799,   799,   799,   545,   151,
    -428,   521,   799,   521,  -428,   476,  -428,   476,   552,   206,
    -428,   560,   515,   562,  -428,   537,   563,   417,  -428,  -428,
     553,  -428,   306,  -428,     6,  -428,  -428,  -428,   799,   530,
     749,     8,   666,   339,   294,  -428,  -428,   677,   677,   799,
     799,   799,   799,   799,  -428,   556,  -428,   141,   141,  -428,
    -428,   506,   557,   537,  -428,   558,  -428,  -428,  -428,  -428,
    -428,  -428,   799,  -428,   560,  -428,  -428,   477,   564,   520,
    -428,  -428,   524,   532,  -428,   799,  -428,   551,   760,   781,
      77,  -428,   349,   349,  -428,  -428,  -428,  -428,  -428,  -428,
    -428,   575,   506,  -428,   717,  -428,  -428,   580,  -428,   578,
     541,  -428,   582,  -428,  -428,  -428,  -428,  -428,   559,  -428,
     567,   792,   574,   592,   728,  -428,   581,   579,   799,  -428,
     589,  -428,  -428,  -428,  -428,   588,   537,   599,   591,   605,
    -428,   813,  -428,  -428,  -428,  -428,   537,   813,   606,  -428,
    -428,  -428,   813,  -428
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       5,     0,     0,     8,     6,     0,     7,     0,     9,    13,
      14,    12,   128,     0,   253,    70,     1,     3,     0,     0,
      23,     0,     0,    10,     0,     0,     0,   108,   109,   110,
       0,   132,     0,     0,     0,   126,     0,   134,   135,     0,
     136,     0,   257,     0,     0,   252,     0,     0,   259,     0,
       0,    93,    92,    91,    95,    90,    55,    54,    53,    46,
       0,    94,     0,     0,     0,    48,    49,     0,    52,     0,
      84,    85,    82,    83,    36,     0,   119,     0,     0,     0,
     118,   121,     0,     0,    26,    20,     0,     0,    31,    21,
       0,    32,    22,   107,     0,     0,     0,    68,    56,     0,
     139,     0,   142,   130,     0,   131,   133,   144,   137,     0,
     140,   256,     0,   255,    15,    11,   127,   262,     0,    96,
       0,    88,    86,    45,    47,    51,    50,    62,     0,     0,
      61,    34,     0,    33,     0,     0,     0,   114,   112,     0,
     120,     0,   116,    24,     0,    28,    17,     0,    29,    18,
      30,    19,    69,     0,    80,    73,     0,     0,    67,   138,
     141,   129,     0,   204,   146,     0,     0,     0,     0,   175,
       0,     0,   220,     0,     0,     0,     0,   154,   143,     0,
     149,   157,   153,   155,   150,   173,     0,   171,     0,     0,
       0,     0,   203,   172,     0,   151,     0,     0,   163,   156,
     254,     0,     0,     0,     0,     0,    89,    87,     0,    65,
      99,    66,     0,    57,     0,    35,     0,   122,   124,   117,
     113,   111,   115,    25,    27,    16,    77,    81,     0,     0,
      71,     0,    74,     0,   159,   147,     0,     0,     0,     0,
       0,    88,   204,     0,   205,   207,   208,   206,     0,     0,
       0,     0,   199,   209,   200,   203,     0,     0,     0,     0,
     106,     0,   165,   145,   148,     0,   176,   152,     0,     0,
     223,   222,     0,   158,   232,   234,   243,     0,     0,   236,
       0,   245,     0,   263,   261,   258,    63,    58,     0,   102,
      97,    59,     0,    60,   125,     0,     0,    79,    75,    78,
       0,    72,     0,   187,     0,     0,     0,     0,     0,   197,
     198,     0,     0,     0,     0,   215,   216,   204,   209,     0,
     217,   218,   219,   170,     0,     0,     0,     0,     0,   265,
     160,   104,     0,   104,   168,     0,   161,     0,     0,   201,
     202,   224,     0,   225,   227,     0,     0,     0,   241,   244,
       0,   242,     0,   101,     0,   123,    76,   162,     0,     0,
       0,     0,     0,     0,   200,   193,   233,     0,     0,     0,
       0,     0,     0,     0,   237,     0,   214,   210,   211,   212,
     213,     0,     0,     0,   264,     0,   169,   105,   167,   166,
     164,   174,     0,   221,     0,   226,   235,     0,     0,   250,
     240,   260,     0,     0,   186,     0,   184,     0,     0,     0,
       0,   194,   195,   196,   188,   189,   190,   191,   192,   239,
     238,     0,     0,   268,     0,   103,   231,   228,   230,     0,
     247,   251,     0,   100,    98,   185,   183,   182,     0,   181,
       0,     0,     0,     0,     0,    38,     0,    40,     0,   248,
       0,   249,   178,   179,   180,     0,     0,     0,    41,     0,
      37,     0,   229,   246,   177,   266,     0,     0,    43,    39,
     267,    44,     0,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -428,  -428,  -428,   617,  -428,  -428,  -428,   613,  -428,  -428,
    -427,    13,  -428,   561,   568,  -428,  -428,    -7,   503,   414,
    -428,  -428,  -428,  -164,   -28,  -428,  -428,  -428,  -428,  -130,
    -428,  -428,   309,  -428,   107,    28,  -428,  -428,   -26,    78,
    -428,   544,  -428,   341,  -428,  -428,  -428,   600,   -21,  -428,
    -428,  -428,  -428,   190,  -428,  -428,  -428,  -133,  -428,  -428,
     403,   -78,  -428,  -428,  -428,  -428,  -428,  -428,  -428,  -240,
    -173,   -93,  -117,  -144,  -428,  -106,  -428,  -428,  -428,   300,
    -428,   202,  -428,   386,  -428,  -428,  -428,  -428,  -428,  -428,
     373,   376,  -428,  -428,  -428,   149,  -210,  -428,  -428,  -428
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    33,    34,    85,   435,
     456,    35,    74,    75,    76,    77,   106,    78,   139,   140,
     108,    12,    13,   166,   186,    80,    81,    82,    83,   219,
     300,   220,   396,   344,    36,    37,    38,    39,   260,    89,
      90,    91,   227,   228,    14,    15,    45,    46,    47,    48,
      49,    50,    51,   187,   119,   188,   189,   190,   191,   192,
     271,   272,   193,   194,   195,   196,   197,   198,   316,   321,
     322,   262,   263,   264,   201,   265,   282,   352,   353,   354,
     437,   438,   203,   204,   205,   206,   207,   430,   289,   290,
     291,   292,    16,    17,    55,   208,   128,   209,   339,   394
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,   293,   200,   243,   221,    88,    92,   412,   222,   323,
     261,   280,    79,   202,   -64,   286,   109,   111,    86,   418,
     211,   -64,   358,   313,   147,   116,   199,   469,    44,   314,
     315,    58,    20,   107,   148,    21,    59,   377,   378,   294,
      87,   413,   130,   212,   479,   287,   288,    96,    79,    79,
     481,   267,   287,   288,   218,   483,   274,   216,   182,   145,
     230,    58,    19,   275,   103,   276,    59,   200,   278,   135,
     231,   284,   200,   285,   307,   371,    79,   373,   202,   200,
      79,   200,   103,   202,   296,   141,   279,   200,   451,   200,
     202,   199,   202,   116,    22,   281,   199,   162,   202,    98,
     202,   168,   142,   199,   143,   199,   377,   378,    79,   329,
      93,   199,   124,   199,   356,   125,   332,   239,   226,    99,
     110,   112,    31,    32,    54,   103,    23,   240,   103,   135,
      -2,     1,   420,     2,   349,    24,   328,   422,   423,   341,
     343,    97,   100,   328,    94,   375,   301,   246,   244,    18,
     103,   101,   411,    26,   245,   345,   -63,    18,     3,    28,
     122,   328,    25,   -63,    95,   346,   146,    31,    32,   397,
     151,   102,   347,   374,    31,    32,   155,     1,   336,     2,
       4,   298,   103,   337,   310,   103,     5,   169,     6,   170,
     387,   388,   389,   390,   311,   414,   156,   417,   299,    31,
      32,   154,   163,   157,     3,   164,   424,   425,   426,   427,
     428,   345,   165,   158,   392,   393,   223,   328,   328,   328,
     328,   367,   406,   224,   409,   145,     4,    40,   347,   436,
     334,   335,     5,   159,     6,    56,    31,    32,   200,   118,
     200,   120,   445,   336,   241,   448,   450,   164,   337,   202,
     104,   202,    57,    60,   242,    61,    62,    63,    64,    65,
     433,   457,   199,   236,   199,   342,   105,   399,   160,   400,
     237,    70,    71,   234,   440,   218,   200,   297,   465,   226,
     376,   457,   377,   378,   224,   436,    84,   202,   161,   145,
     200,    31,    32,   235,   117,   252,    31,    32,   457,    72,
     199,   202,   370,    28,   457,   126,    29,    73,    30,   457,
     127,    31,    32,   309,   199,   325,   326,   317,   334,   335,
     237,   386,   254,   255,   113,   256,   257,    42,    43,   129,
     318,   336,   172,   475,   131,   173,   337,    61,    62,    63,
      64,    65,   182,   480,   319,   320,   132,   117,   174,   200,
     144,   258,   259,   175,    71,   384,    28,   377,   378,   200,
     202,    41,    86,   431,    42,    43,   421,   149,   377,   378,
     202,   176,   152,   199,   177,   178,   179,   180,   -65,   -65,
     216,   181,   182,   199,   167,    29,   183,    52,   213,    73,
      31,    32,   266,   184,   217,   173,   185,    61,    62,    63,
      64,    65,   115,   218,   453,    42,    43,   117,   273,   137,
     225,    87,   138,   175,    71,    66,    67,    68,   266,   133,
     229,   173,   232,    61,    62,    63,    64,    65,   238,   137,
     247,   176,   214,   117,   177,   178,   179,   180,   248,   175,
      71,   181,   182,   251,   121,   249,   183,    31,    32,    73,
     250,   123,   268,   184,    31,    32,   185,   176,   277,   283,
     177,   178,   179,   180,   295,   304,   408,   181,   182,   305,
     153,   308,   183,    31,    32,    73,   324,   269,   266,   184,
     270,   173,   185,    61,    62,    63,    64,    65,   379,   380,
     330,   171,   331,   117,    42,    43,   333,   338,   302,   175,
      71,   214,   381,   306,   244,   382,   164,   383,   177,   340,
      60,   350,    61,    62,    63,    64,    65,   176,   351,   355,
     177,   178,   179,   180,   357,   361,   439,   181,   182,    71,
     210,   362,   183,    31,    32,    73,   363,   366,   266,   184,
     364,   173,   185,    61,    62,    63,    64,    65,   233,   237,
     369,    31,    32,   117,   372,   385,    72,   368,   279,   175,
      71,   391,   395,   401,    73,   402,   404,   403,   407,   442,
     410,   415,   429,   432,   434,   441,   443,   176,   446,   452,
     177,   178,   179,   180,   444,   458,   462,   181,   182,   459,
     460,   466,   183,   461,   463,    73,   467,   471,   470,   184,
     473,   327,   185,    61,    62,    63,    64,    65,    60,   477,
      61,    62,    63,    64,    65,   474,   476,    66,    67,    68,
      71,    69,   478,   317,   482,    27,    70,    71,   254,   255,
      53,   256,   257,   215,   150,   134,   318,   327,   303,    61,
      62,    63,    64,    65,   114,   136,   365,    72,   182,   312,
     319,   320,   398,   405,    72,    73,    71,   258,   259,   253,
     472,   348,    73,   359,   254,   255,   360,   256,   257,    60,
     252,    61,    62,    63,    64,    65,     0,   419,     0,     0,
       0,   252,     0,    72,   182,     0,     0,    70,    71,     0,
       0,    73,   317,   258,   259,     0,     0,   254,   255,     0,
     256,   257,     0,   317,     0,   318,     0,     0,   254,   255,
       0,   256,   257,     0,     0,    72,   318,   182,     0,   319,
     320,   252,     0,    73,     0,     0,   258,   259,   182,     0,
     319,   320,   252,   454,   455,     0,     0,   258,   259,     0,
       0,     0,     0,   253,   454,   468,     0,     0,   254,   255,
       0,   256,   257,   252,   253,     0,     0,     0,     0,   254,
     255,     0,   256,   257,   252,     0,     0,     0,   182,     0,
       0,     0,     0,     0,     0,   253,   416,   258,   259,   182,
     254,   255,     0,   256,   257,   252,   253,   447,   258,   259,
       0,   254,   255,     0,   256,   257,   252,     0,     0,     0,
     182,     0,     0,   252,     0,     0,     0,   253,   449,   258,
     259,   182,   254,   255,     0,   256,   257,   252,   253,   464,
     258,   259,     0,   254,   255,   253,   256,   257,     0,   454,
     254,   255,   182,   256,   257,     0,     0,     0,     0,   253,
       0,   258,   259,   182,   254,   255,     0,   256,   257,     0,
     182,     0,   258,   259,     0,     0,     0,     0,     0,   258,
     259,     0,     0,     0,   182,     0,     0,     0,     0,     0,
       0,     0,     0,   258,   259
};

static const yytype_int16 yycheck[] =
{
      28,   211,   119,   167,     1,    31,    32,     1,   138,   249,
     183,     4,    40,   119,    11,    17,    42,    43,     4,    11,
      18,    18,    17,     4,     1,    46,   119,   454,    15,    10,
      11,    11,     1,    40,    11,     4,    16,    29,    30,   212,
      26,    35,    70,    41,   471,    47,    48,    34,    76,    77,
     477,   184,    47,    48,    51,   482,   189,    37,    51,    87,
       1,    11,     4,   196,    36,   198,    16,   184,    41,    76,
      11,   204,   189,   206,   238,   315,   104,   317,   184,   196,
     108,   198,    54,   189,   214,     1,    59,   204,    11,   206,
     196,   184,   198,   114,     4,   201,   189,   104,   204,     1,
     206,   108,    18,   196,    20,   198,    29,    30,   136,   253,
      32,   204,     1,   206,   287,     4,   260,     1,   144,    21,
      42,    43,    24,    25,    17,    97,     4,    11,   100,   136,
       0,     1,   372,     3,   278,     4,   253,   377,   378,   269,
     270,    34,    35,   260,     1,   318,     1,   175,    11,     0,
     122,     1,   362,     0,    17,     1,    11,     8,    28,    16,
      53,   278,     4,    18,    21,    11,    88,    24,    25,   342,
      92,    21,    18,   317,    24,    25,     1,     1,    37,     3,
      50,    35,   154,    42,     1,   157,    56,   109,    58,   111,
     334,   335,   336,   337,    11,   368,    21,   370,    52,    24,
      25,    94,     1,    96,    28,     4,   379,   380,   381,   382,
     383,     1,    11,     1,    63,    64,    11,   334,   335,   336,
     337,    11,   355,    18,   357,   253,    50,    16,    18,   402,
      24,    25,    56,    21,    58,     5,    24,    25,   355,    49,
     357,    51,   415,    37,     1,   418,   419,     4,    42,   355,
       1,   357,     5,     4,    11,     6,     7,     8,     9,    10,
     393,   434,   355,    11,   357,    41,    17,   345,     1,   347,
      18,    22,    23,     1,   407,    51,   393,    11,   451,   305,
      27,   454,    29,    30,    18,   458,     4,   393,    21,   317,
     407,    24,    25,    21,    16,     4,    24,    25,   471,    50,
     393,   407,    11,    16,   477,     4,    19,    58,    21,   482,
       4,    24,    25,    11,   407,    60,    61,    26,    24,    25,
      18,    27,    31,    32,    21,    34,    35,    24,    25,    37,
      39,    37,     1,   466,     4,     4,    42,     6,     7,     8,
       9,    10,    51,   476,    53,    54,     4,    16,    17,   466,
       5,    60,    61,    22,    23,    27,    16,    29,    30,   476,
     466,    21,     4,   391,    24,    25,    27,     4,    29,    30,
     476,    40,    11,   466,    43,    44,    45,    46,    29,    30,
      37,    50,    51,   476,    17,    19,    55,    21,    17,    58,
      24,    25,     1,    62,    37,     4,    65,     6,     7,     8,
       9,    10,    21,    51,   432,    24,    25,    16,    17,     1,
       4,    26,     4,    22,    23,    13,    14,    15,     1,    17,
      27,     4,    11,     6,     7,     8,     9,    10,    18,     1,
      26,    40,     4,    16,    43,    44,    45,    46,    26,    22,
      23,    50,    51,     4,    21,    26,    55,    24,    25,    58,
      26,    21,    31,    62,    24,    25,    65,    40,    11,    11,
      43,    44,    45,    46,    11,     4,    49,    50,    51,     5,
      21,    11,    55,    24,    25,    58,     4,     1,     1,    62,
       4,     4,    65,     6,     7,     8,     9,    10,    19,    20,
       4,    21,     4,    16,    24,    25,    11,    63,     1,    22,
      23,     4,    33,     1,    11,    36,     4,    38,    43,    11,
       4,     4,     6,     7,     8,     9,    10,    40,     4,    57,
      43,    44,    45,    46,     5,    17,    49,    50,    51,    23,
      21,    18,    55,    24,    25,    58,    52,    11,     1,    62,
      51,     4,    65,     6,     7,     8,     9,    10,    21,    18,
       4,    24,    25,    16,    11,    27,    50,    41,    59,    22,
      23,    16,    41,    11,    58,     5,     4,    52,     5,    49,
      17,    41,    16,    16,    16,    11,    52,    40,    27,     4,
      43,    44,    45,    46,    52,     5,    27,    50,    51,    11,
      49,    17,    55,    11,    27,    58,     4,    18,    17,    62,
      11,     4,    65,     6,     7,     8,     9,    10,     4,    18,
       6,     7,     8,     9,    10,    27,    17,    13,    14,    15,
      23,    17,    17,    26,    18,     8,    22,    23,    31,    32,
      17,    34,    35,   130,    90,    74,    39,     4,   224,     6,
       7,     8,     9,    10,    44,    77,   305,    50,    51,   246,
      53,    54,   343,   353,    50,    58,    23,    60,    61,    26,
     458,   275,    58,   290,    31,    32,   290,    34,    35,     4,
       4,     6,     7,     8,     9,    10,    -1,    11,    -1,    -1,
      -1,     4,    -1,    50,    51,    -1,    -1,    22,    23,    -1,
      -1,    58,    26,    60,    61,    -1,    -1,    31,    32,    -1,
      34,    35,    -1,    26,    -1,    39,    -1,    -1,    31,    32,
      -1,    34,    35,    -1,    -1,    50,    39,    51,    -1,    53,
      54,     4,    -1,    58,    -1,    -1,    60,    61,    51,    -1,
      53,    54,     4,    16,    17,    -1,    -1,    60,    61,    -1,
      -1,    -1,    -1,    26,    16,    17,    -1,    -1,    31,    32,
      -1,    34,    35,     4,    26,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,     4,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    60,    61,    51,
      31,    32,    -1,    34,    35,     4,    26,    27,    60,    61,
      -1,    31,    32,    -1,    34,    35,     4,    -1,    -1,    -1,
      51,    -1,    -1,     4,    -1,    -1,    -1,    26,    27,    60,
      61,    51,    31,    32,    -1,    34,    35,     4,    26,    27,
      60,    61,    -1,    31,    32,    26,    34,    35,    -1,    16,
      31,    32,    51,    34,    35,    -1,    -1,    -1,    -1,    26,
      -1,    60,    61,    51,    31,    32,    -1,    34,    35,    -1,
      51,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,    60,
      61,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61
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
     112,   113,   110,   111,     1,    21,    83,   106,     1,    21,
     106,     1,    21,   107,     1,    17,    88,    89,    92,   110,
     111,   110,   111,    21,   119,    21,   120,    16,   125,   126,
     125,    21,   106,    21,     1,     4,     4,     4,   168,    37,
      96,     4,     4,    17,    85,    89,    86,     1,     4,    90,
      91,     1,    18,    20,     5,    96,   111,     1,    11,     4,
     113,   111,    11,    21,   106,     1,    21,   106,     1,    21,
       1,    21,    89,     1,     4,    11,    95,    17,    89,   111,
     111,    21,     1,     4,    17,    22,    40,    43,    44,    45,
      46,    50,    51,    55,    62,    65,    96,   125,   127,   128,
     129,   130,   131,   134,   135,   136,   137,   138,   139,   143,
     144,   146,   147,   154,   155,   156,   157,   158,   167,   169,
      21,    18,    41,    17,     4,    90,    37,    37,    51,   101,
     103,     1,   101,    11,    18,     4,   110,   114,   115,    27,
       1,    11,    11,    21,     1,    21,    11,    18,    18,     1,
      11,     1,    11,    95,    11,    17,    96,    26,    26,    26,
      26,     4,     4,    26,    31,    32,    34,    35,    60,    61,
     110,   142,   143,   144,   145,   147,     1,   129,    31,     1,
       4,   132,   133,    17,   129,   129,   129,    11,    41,    59,
       4,   147,   148,    11,   129,   129,    17,    47,    48,   160,
     161,   162,   163,   168,   142,    11,   101,    11,    35,    52,
     102,     1,     1,    91,     4,     5,     1,    95,    11,    11,
       1,    11,   132,     4,    10,    11,   140,    26,    39,    53,
      54,   141,   142,   141,     4,    60,    61,     4,   144,   145,
       4,     4,   145,    11,    24,    25,    37,    42,    63,   170,
      11,   101,    41,   101,   105,     1,    11,    18,   155,   145,
       4,     4,   149,   150,   151,    57,   142,     5,    17,   162,
     163,    17,    18,    52,    51,   115,    11,    11,    41,     4,
      11,   141,    11,   141,   145,   142,    27,    29,    30,    19,
      20,    33,    36,    38,    27,    27,    27,   145,   145,   145,
     145,    16,    63,    64,   171,    41,   104,   142,   104,   133,
     133,    11,     5,    52,     4,   151,   129,     5,    49,   129,
      17,   168,     1,    35,   142,    41,    27,   142,    11,    11,
     141,    27,   141,   141,   142,   142,   142,   142,   142,    16,
     159,    96,    16,   129,    16,    81,   142,   152,   153,    49,
     129,    11,    49,    52,    52,   142,    27,    27,   142,    27,
     142,    11,     4,    96,    16,    17,    82,   142,     5,    11,
      49,    11,    27,    27,    27,   142,    17,     4,    17,    82,
      17,    18,   153,    11,    27,   129,    17,    18,    17,    82,
     129,    82,    18,    82
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
     107,   108,   108,   108,   108,   109,   109,   110,   111,   111,
     112,   112,   113,   114,   114,   115,   116,   117,   117,   118,
     118,   118,   118,   119,   119,   120,   120,   121,   122,   122,
     123,   124,   124,   125,   126,   127,   127,   127,   128,   128,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     130,   131,   131,   131,   132,   132,   132,   133,   133,   133,
     134,   135,   135,   135,   136,   137,   138,   139,   139,   139,
     139,   139,   139,   139,   139,   140,   140,   140,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   142,
     142,   143,   144,   144,   144,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     146,   147,   148,   148,   149,   149,   150,   150,   151,   152,
     152,   153,   154,   155,   156,   156,   156,   157,   158,   159,
     160,   160,   160,   160,   161,   161,   162,   162,   162,   163,
     163,   163,   164,   165,   166,   166,   166,   166,   167,   167,
     168,   168,   168,   168,   169,   169,   170,   170,   171
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
       1,     4,     3,     4,     3,     4,     3,     3,     1,     1,
       2,     1,     3,     3,     1,     2,     2,     4,     2,     3,
       2,     2,     1,     2,     1,     1,     1,     2,     3,     2,
       2,     3,     2,     2,     1,     2,     1,     2,     2,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     2,     2,
       3,     3,     4,     1,     3,     1,     3,     3,     2,     3,
       3,     1,     1,     1,     4,     1,     2,     8,     7,     7,
       7,     6,     6,     6,     5,     4,     3,     1,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     1,     1,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       1,     4,     1,     1,     1,     1,     2,     1,     3,     3,
       1,     1,     2,     4,     2,     4,     2,     4,     5,     1,
       3,     2,     2,     1,     2,     1,     6,     4,     5,     5,
       3,     4,     2,     2,     3,     2,     2,     1,     6,     3,
       5,     3,     1,     3,     4,     3,     6,     7,     2
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
#line 184 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"program: components\n"; 
										 }
#line 2044 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 187 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"components: components component\n";}
#line 2050 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 188 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"components: component\n";}
#line 2056 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 190 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface \n";}
#line 2062 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 191 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation \n";}
#line 2068 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 192 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"protocol \n";}
#line 2074 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 193 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct \n";}
#line 2080 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 194 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum \n";}
#line 2086 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 196 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface: class_interface_header class_interface_body\n";
																interface->setClassNode(classNode);
																classNode=NULL;
																 idsList.clear();
																 methodsList.clear();
																 method=NULL;
																}
#line 2098 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 206 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																				interface=InterfaceHelper::createNewInterface((yyvsp[-2].r.text),(yyvsp[0].r.text),symbolTable);
																				classNode=new ClassNode(NULL,interface);
																				}
#line 2107 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 210 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																					cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
																				 interface=InterfaceHelper::createNewInterface((yyvsp[0].r.text),"",symbolTable);
																				 	classNode=new ClassNode(NULL,interface);
																				}
#line 2117 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 215 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Unknown type name '"<<(yyvsp[-1].r.text)<<"' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2123 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 216 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2129 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 218 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2135 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 221 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
															
														InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2145 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 227 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														}
#line 2153 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 231 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	protocol_reference_list interface_declaration_list	AT_END\n";
														}
#line 2162 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 236 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2171 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 241 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														}
#line 2179 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 245 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_body:instance_variables		AT_END\n";}
#line 2185 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 247 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {														
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:interface_declaration_list	AT_END\n";
														}
#line 2194 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 251 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_body:AT_END\n";}
#line 2200 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 252 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2206 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 253 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2212 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 254 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2218 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 255 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2224 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 256 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2230 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 257 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2236 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 258 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2242 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 259 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2248 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 260 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2254 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 264 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													if(interface!=NULL){
													InterfaceHelper::addInheritedProtocol(interface,idsList,symbolTable);
														idsList.clear();
													}
													cout<<"protocol_reference_list: LESS_THAN ids_list_identifier MORE_THAN\n";
												}
#line 2266 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 271 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '>' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2272 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 274 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"ids_list:ids_list_identifier COMMA IDENTIFIER\n"; 
													idsList.push_back((yyvsp[0].r.text));
													}
#line 2281 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 278 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"ids_list_identifier:IDENTIFIER\n";
													idsList.push_back((yyvsp[0].r.text));
												    }
#line 2290 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 283 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array with body";}
#line 2296 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 284 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array without elements";}
#line 2302 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 288 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array-element \n";}
#line 2308 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 289 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array-element \n";}
#line 2314 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 290 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"empty element \n";}
#line 2320 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 291 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2326 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 292 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2332 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 293 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2338 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 296 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";}
#line 2344 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 297 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variables:OPEN_S	 CLOSE_S\n";}
#line 2350 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 300 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";}
#line 2356 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 301 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:instance_variable_declaration\n";}
#line 2362 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 302 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:variable_declaration_list\n";}
#line 2368 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 305 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declaration:visibility_specification variable_declaration_list\n";
																	}
#line 2375 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 309 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
											arrayList.clear();
												idsList.clear();
												flag=false;
										}
#line 2387 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 317 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										       InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
												arrayList.clear();
												idsList.clear();
												flag=false;
										cout<<"variable_declaration_list: variable_declaration\n";
										}
#line 2399 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 327 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PRIVATE\n";  visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2405 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 328 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PROTECTED\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2411 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 329 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PUBLIC\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2417 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 334 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct_variable_declaration:struct_declaration_list\n";}
#line 2423 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 337 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
	                                           (yyval.r.text)=(yyvsp[-2].r.text);
												}
#line 2431 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 340 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
													}
#line 2440 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 344 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2446 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 348 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"ids_list:ids_list COMMA id_dec\n"; 

									}
#line 2455 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 352 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"ids_list:id_dec\n"; }
#line 2461 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 353 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2467 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 356 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout <<" data_member: IDENTIFIER array_tag \n";
							 var=new Array((yyvsp[0].r.text),arrayAlloc.size(),NULL);
					       ( dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
						   arrayList.push_back( ( dynamic_cast<Array*>(var)));
						      arrayAlloc.clear();
							}
#line 2478 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 362 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {idsList.push_back((yyvsp[0].r.text)) ;cout <<" data_member: IDENTIFIER  \n";}
#line 2484 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 363 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2490 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 364 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2496 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 366 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {  
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																												idsList.clear();
																												flag=false;
																										  cout<<"struct_declaration_list: struct_declaration_list  variable_declarationxx\n";
																										}
#line 2508 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 374 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																														 	idsList.clear();
																															flag=false;
																										cout<<"struct_declaration_list:  variable_declarationxx\n";
																										}
#line 2520 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 381 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Illigal visibility specification at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2526 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 385 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
					myStruct=StructHelper::createNewStruct((yyvsp[0].r.text),symbolTable);
					cout<<"struct_header: STRUCT  IDENTIFIER\n";
					}
#line 2535 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 391 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S  entity SEMI_COMA\n";}
#line 2541 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 392 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S enteity SEMI_COMA \n";}
#line 2547 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 393 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S SEMI_COMA\n";}
#line 2553 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 394 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S  SEMI_COMA  \n";}
#line 2559 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 395 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2565 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 396 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2571 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 397 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2577 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 398 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2583 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 401 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"entity: IDENTIFIER COMMA  entity\n";}
#line 2589 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 402 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"entity:  IDENTIFIER \n";}
#line 2595 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 403 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2601 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 407 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type:simple type\n";}
#line 2607 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 408 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: complex type\n";}
#line 2613 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 409 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: struct_type\n";}
#line 2619 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 410 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: enum_type\n";}
#line 2625 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 414 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	cout<<"struct_type: STRUCT IDENTIFIER   \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																		string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2639 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 423 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct_type: STRUCT IDENTIFIER  MULTI \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2653 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 434 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum_type: ENUM IDENTIFIER \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2667 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 443 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum_type: ENUM IDENTIFIER  MULTI  \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																									string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2681 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 454 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"int type \n";
																type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
																}
#line 2695 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 463 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"char type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2708 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 471 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"float type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2721 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 479 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"NSString type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2734 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 487 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"void type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2747 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 495 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"bool type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2760 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 505 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"complex_type:	IDENTIFIER	MULTI\n";
 {
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}}
#line 2775 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 516 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_tag: array_first_tag array_tag_list \n"; 
										   }
#line 2783 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 521 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"array_tag_list: array_tag_list OPEN_ARR INT_VAL CLOSE_ARR\n"; 
																arrayAlloc.push_back((yyvsp[-1].r.int_val));
														   }
#line 2792 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 526 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<" Error:missing  dimension in array tag  ";arrayAlloc.clear();}
#line 2798 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 529 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_first_tag: OPEN_ARR INT_VAL CLOSE_ARR\n"; 
											arrayAlloc.push_back((yyvsp[-1].r.int_val));
											}
#line 2807 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 533 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_first_tag: OPEN_ARR  CLOSE_ARR\n"; 
											arrayAlloc.push_back(-1);
											}
#line 2816 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 539 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							   }
#line 2824 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 544 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout <<"with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							 }
#line 2833 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 553 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
															 methodsList.push_back(method);
														
															 
																}
#line 2844 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 559 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																 cout<<"interface_declaration_list:interface_declaration\n";
															 methodsList.push_back(method);
															 
																 	
																 }
#line 2855 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 567 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"interface_declaration: class_method_declaration\n";}
#line 2861 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 568 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"interface_declaration: instance_method_declaration\n";}
#line 2867 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 572 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_method_declaration: PLUS p_type method_selectors	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,true);
															
																 selectorsList.clear();
																
																}
#line 2879 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 579 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_method_declaration: PLUS			 method_selectors	SEMI_COMA\n";
																		method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																}
#line 2889 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 584 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2895 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 585 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2901 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 588 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															cout<<"instance_method_declaration: MINUS p_type	method_selectors		SEMI_COMA\n";
															method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,false);
																 selectorsList.clear();
																
																
															}
#line 2913 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 595 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"instance_method_declaration: MINUS			 method_selectors	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																}
#line 2923 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 602 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.r.text)=(yyvsp[-1].r.text);
																}
#line 2932 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 611 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"method_selectors: selectors_list\n";
																	(yyval.r.text)="";
																}
#line 2941 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 615 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"method_selectors:IDENTIFIER \n";(yyval.r.text)=(yyvsp[0].r.text);}
#line 2947 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 617 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"selectors_list:	selectors_list selector_decleration\n";
																
													selectorsList.push_back(tselector);
													tselector=NULL;
											}
#line 2958 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 623 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"selectors_list:	 selector_decleration\n";
												selectorsList.clear();

												selectorsList.push_back(tselector);
												tselector=NULL;
}
#line 2970 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 631 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				cout<<"selector_decleration:	IDENTIFIER	SEMI_COLUMN	parameter_list	\n";
																				tselector=new DeclerationSelector((yyvsp[-2].r.text),selectorVarList);
																			}
#line 2979 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 637 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"parameter_list: parameter_list parameter\n";
																	selectorVarList.push_back(var);		
											}
#line 2988 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 641 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									selectorVarList.clear();
										selectorVarList.push_back(var);		
											
				 
														cout<<"parameter_list:  parameter\n";
						
					}
#line 3001 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 650 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"parameter:  p_type IDENTIFIER\n";
																
																if(type!=NULL){
																var=new Variable((yyvsp[0].r.text),type);
																}
																else{
																cout<<"Error:Type not found.\n";
																}
																}
#line 3016 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 663 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation: class_implementation_header class_implementation_body\n";}
#line 3022 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 666 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																	interface=InterfaceHelper::checkImplementation((yyvsp[-2].r.text),symbolTable,(yyvsp[0].r.text));
																	
																}
#line 3032 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 671 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																interface=InterfaceHelper::checkImplementation((yyvsp[0].r.text),symbolTable,"");
																	
																}
#line 3041 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 677 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";
																			InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														}
#line 3051 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 683 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
																	cout<<"class_implementation_body: instance_variables									AT_END\n";
																}
#line 3059 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 686 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_body:						implementation_definition_list	AT_END\n";
																	InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														
																}
#line 3070 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 692 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation_body:	AT_END\n";}
#line 3076 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 695 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);cout<<"implementation_definition_list: implementation_definition_list implementation_definition\n";}
#line 3082 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 696 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);cout<<"implementation_definition_list: implementation_definition\n";}
#line 3088 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 699 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"implementation_definition: class_implementation_definition	\n";}
#line 3094 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 700 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"implementation_definition: instance_implementation_definition \n";}
#line 3100 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 703 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"class_implementation_definition: class_implementation_definition_header block_body";
														//method->setFunctionNode(functionNode);
														functionNode=NULL;
													nodeXX=method;
													}
#line 3111 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 711 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"class_implementation_definition_header: PLUS p_type		 method_selectors\n";
															method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																
																
										}
#line 3123 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 718 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"class_implementation_definition_header:  PLUS			 method_selectors\n";
													 method =InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
									
										}
#line 3134 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 727 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															scoop=NULL;
															cscoop=NULL;
															cout<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";
															//method->setFunctionNode(functionNode);
														functionNode=NULL;
															}
#line 3146 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 736 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											     cout<<"instance_implementation_definition_header:MINUS p_type		method_selectors\n";
												 method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
															
												}
#line 3157 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 742 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"instance_implementation_definition_header:MINUS 			method_selectors\n";
												 method =InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
												}
#line 3167 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 749 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												
												cout<<"block_body:OPEN_S  block_body_part \n";
												(yyval.r.node)=(yyvsp[-1].r.node);
												}
#line 3177 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 756 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cscoop=scoop;
                                                scoop=ScoopHelper::createNewScoop(cscoop,method,interface);
												
												if(functionNode==NULL)
													functionNode=new FunctionNode(scoop,method);
													else
													functionNode->addNode(scoop);
												scoopVector.push_back(scoop);
												cout<<"block_body_header:OPEN_S	\n";
												(yyval.r.node)=scoop;
												}
#line 3194 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 771 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												scoop=scoop->getParent();
												cout<<"block_body_statements:statement_list	CLOSE_S	\n";
												}
#line 3203 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 775 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												scoop=scoop->getParent();
												cout<<"block_body_statements:CLOSE_S\n";
												}
#line 3212 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 779 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												scoop=scoop->getParent();
												cout<<"block_body_statements: error CLOSE_S\n";
												}
#line 3221 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 785 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement_list: statement_list statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3231 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 790 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement_list: statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											(yyval.r.node)=(yyvsp[0].r.node);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3242 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 799 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: loop_statement\n";
											(yyval.r.text)="loop";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3251 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 803 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: conditional_statement\n";
											(yyval.r.text)="cond";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3260 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 807 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"statement: expr\n";
												(yyval.r.text)="expr";
												(yyval.r.node)=(yyvsp[-1].r.node);
												//nodeXX=$<r.node>1;
											}
#line 3271 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 813 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"statement: variable_declaration\n";
											
												ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												(yyval.r.node)=(yyvsp[0].r.node);
										    }
#line 3285 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 822 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: block_body\n";(yyval.r.text)=new char[256];(yyval.r.text)[0]='\0';strcat((yyval.r.text),"Block");
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3293 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 825 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: return_statement\n";
												(yyval.r.text)="return";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3302 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 829 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: try_catch\n";}
#line 3308 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 831 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	                                            (yyval.r.text)="asm";
												(yyval.r.node)=(yyvsp[0].r.node);}
#line 3316 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 834 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	 (yyval.r.text)="call";
	(yyval.r.node)=(yyvsp[-1].r.node);
	}
#line 3325 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 839 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    { cout<<"error SEMI_COMA \n";}
#line 3331 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 844 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"@asm command \n";
	                                         (yyval.r.node)=new AsmNode(scoop,(yyvsp[-1].r.text));
											 }
#line 3339 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 850 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
														 (yyval.r.text)=(yyvsp[-2].r.text);
														 (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3350 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 856 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
														  (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3362 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 863 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:enum\n";}
#line 3368 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 867 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_list:variable_list COMMA variable\n";}
#line 3374 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 868 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_list:variable\n";
										
										}
#line 3382 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 871 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ',' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3388 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 874 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout <<"variable:  IDENTIFIER array_tag initializer \n";
											 var=new Array((yyvsp[-1].r.text),arrayAlloc.size(),NULL);
											(dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
											 arrayList.push_back( ( dynamic_cast<Array*>(var)));
											 arrayAlloc.clear();
											}
#line 3400 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 881 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
											cout <<"variable:  IDENTIFIER main_initializer \n";
											idsList.push_back((yyvsp[-1].r.text)) ;
											IdentifierNode* identifierNode=new IdentifierNode((yyvsp[-1].r.text),scoop);
											if((yyvsp[0].r.node)!=NULL){
											(dynamic_cast<AssignNode*>((yyvsp[0].r.node)))->setLeftExp(identifierNode);
											}
											declarationList.push_back(make_pair((yyvsp[-1].r.text),(yyvsp[0].r.node)));
											}
#line 3414 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 890 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3420 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 893 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"return_statement: RETURN expr\n";
												 (yyval.r.node)=new ReturnNode(scoop,(yyvsp[-1].r.node));
												}
#line 3428 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 898 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: for_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3436 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 901 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3444 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 904 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: do_while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3452 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 909 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"do_while: do_header   statement   while_loop_header   SEMI_COMMA\n";
													(yyval.r.node)=new DoWhileNode((yyvsp[-1].r.node),(yyvsp[-2].r.node),scoop);
													}
#line 3460 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 914 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"do_header: DO\n";}
#line 3466 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 917 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop: for_loop_header statement\n";
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
#line 3487 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 936 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer	SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-5].r.node),(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										//nodeXX=$<r.node>5;
										}
#line 3496 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 942 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3504 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 946 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3512 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 950 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),(yyvsp[-2].r.node),NULL,NULL,scoop);
										}
#line 3520 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 955 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-3].r.node),NULL,NULL,NULL,scoop);
										}
#line 3528 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 959 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA				CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-1].r.node),NULL,NULL,scoop);
										}
#line 3536 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 963 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P";
										(yyval.r.node)=new ForNode(NULL,NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3544 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 968 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_hearder: FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	\n";
											(yyval.r.node)=new ForNode(NULL,NULL,NULL,NULL,scoop);
											}
#line 3552 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 973 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: INT IDENTIFIER EQUAL expr\n";
											AssignNode * temp=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
											
											//temp->add($<r.text>2,);
											
											//temp.push_back(make_pair($<r.text>2,$<r.node>4));
											DeclerationNode* temp1=new DeclerationNode(list<pair<string,Node*>>(),scoop,"int");
											temp1->add((yyvsp[-2].r.text),temp);
										 (yyval.r.node)=temp1; 
										 idsList.push_back((yyvsp[-2].r.text));
										}
#line 3568 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 984 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: IDENTIFIER EQUAL expr\n";
										(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
										}
#line 3576 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 987 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: IDENTIFIER\n";
										(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
										}
#line 3584 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 992 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr LESS_THAN expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_THAN,scoop);
										}
#line 3592 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 995 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr MORE_THAN expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_THAN,scoop);
										}
#line 3600 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 998 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_OR_EQUAL,scoop);
										}
#line 3608 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1001 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_OR_EQUAL,scoop);
										}
#line 3616 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1004 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr EQUAL_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),EQUAL_EQUAL,scoop);
										}
#line 3624 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1007 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:NOT_EQUAL expr\n";
										 (yyval.r.node)=new UnaryNode(scoop,(yyvsp[0].r.node),NOT_EQUAL);
										}
#line 3632 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1010 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";
										 (yyval.r.node)=(yyvsp[-1].r.node);
										}
#line 3640 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1013 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"logic_expr:logic_expr AND_AND logic_expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),AND_AND,scoop);
										}
#line 3649 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1017 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:logic_expr OR_OR logic_expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),OR_OR,scoop);
										}
#line 3657 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1020 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:TRUE\n";
										 (yyval.r.node)=new ConstantNode(true,scoop);
										}
#line 3665 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1023 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:FALSE\n";
											 (yyval.r.node)=new ConstantNode(false,scoop);
										}
#line 3673 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1028 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"expr:assign_expr\n";
										 (yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3681 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1031 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"expr:simple_expr\n";
										(yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3689 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1036 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"assign_expr:long_id EQUAL simple_expr\n";
										//LongIdHelper::checkIdenentifier( scoop, interface,"set1");
										(yyval.r.node)=new AssignNode(scoop,(yyvsp[-2].r.node),(yyvsp[0].r.node));
										}
#line 3699 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1043 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"long_id: long_id.IDENTIFIER\n";LongIdHelper::addIdentifier((yyvsp[-2].r.text));}
#line 3705 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1044 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"long_id: long_id.message_call\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3714 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1048 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																LongIdHelper::addIdentifier((yyvsp[0].r.text)); 
																(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
																cout<<"long_id:IDENTIFIER\n";
															   }
#line 3724 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1058 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:STRING_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.string_val,scoop);
									}
#line 3732 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1061 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"simple_expr:INT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.int_val,scoop);
									}
#line 3741 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1065 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:FLOAT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.float_val,scoop);
									}
#line 3749 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1068 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:CHAR_VAL\n";
										(yyval.r.node)=new ConstantNode(yylval.r.char_val,scoop);
									}
#line 3757 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1071 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:long_id\n";
									(yyval.r.node)=(yyvsp[0].r.node);
									}
#line 3765 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1074 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"simple_expr:expr PLUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),PLUS,scoop);
									}
#line 3774 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1078 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"simple_expr:expr MINUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MINUS,scoop);
									}
#line 3783 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1082 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:expr MULTI expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MULTI,scoop);
									}
#line 3791 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1085 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"simple_expr:expr DIV expr\n";
									(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),DIV,scoop);
									}
#line 3800 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1089 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:OPEN_P expr CLOSE_P\n";}
#line 3806 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1090 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:ID++";}
#line 3812 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1091 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:ID--";}
#line 3818 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1092 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:++ID";}
#line 3824 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1093 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:--ID";}
#line 3830 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1094 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"expr:p_type expr\n";
																if(type!=NULL)
																(yyval.r.node)=new CastNode(scoop,type,(yyvsp[0].r.node));
															}
#line 3840 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1101 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {		
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
#line 3856 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1114 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";
												callNode->setMessage((yyvsp[-1].r.text));
												(yyval.r.node)=callNode;
												callNode=NULL;
														if(callNodeStack.size()!=0){
														callNode=callNodeStack.top();
														callNodeStack.pop();
														}
												}
#line 3871 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1126 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"sender: message_call\n";
											
											callNode->setSender((yyvsp[0].r.node));
											 (yyval.r.node)=(yyvsp[0].r.node);
											 
											}
#line 3882 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1132 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"sender: IDENTIFIER\n";
											(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
											
											//callNode=new CallNode(scoop);
											
											callNode->setSender((yyval.r.node));
											
											}
#line 3895 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1142 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"message: IDENTIFIER\n";
											(yyval.r.text)=(yyvsp[0].r.text);
												
											}
#line 3904 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1146 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"message_selectors_list\n";
											//$<r.node>$=$<r.text>1;
											(yyval.r.text)="";
											}
#line 3914 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1153 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"message_selectors_list:message_selectors_list message_selector \n";
												callNode->addSelector(cselector);
											cselector=NULL;
												}
#line 3924 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1158 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	callNode->addSelector(cselector);
							cselector=NULL;
								cout<<"message_selectors_list: message_selector\n";
											
		}
#line 3934 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1164 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cselector->name=(yyvsp[-2].r.text);
							}
#line 3942 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1168 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"argument_list: argument_list argument\n";
												cselector->addArg((yyvsp[0].r.node));}
#line 3949 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1170 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"argument_list: argument\n";
												cselector=new CallSelector("");
											cselector->addArg((yyvsp[0].r.node));}
#line 3957 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1175 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"argument: SEMI_COLUMN expr\n";
											(yyval.r.node)=(yyvsp[0].r.node);
											//callNode->addArgument($<r.node>1,"");
											
											}
#line 3968 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1183 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"while_loop:while_loop_header statement\n";
											 (yyval.r.node)=new WhileNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop);
										}
#line 3977 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1189 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3985 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1194 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"conditional_statement: if_header statement\n";
												 (yyval.r.node)=new IfNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop,NULL);
												}
#line 3993 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1197 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"conditional_statement: if_header statement with else\n";
												 (yyval.r.node)=new IfNode((yyvsp[-3].r.node),(yyvsp[-2].r.node),scoop,new ElseNode((yyvsp[0].r.node),scoop));
												}
#line 4002 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1201 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"conditional_statement: switch_header switch_body statement\n";
											(yyval.r.node)=new SwitchNode(tempSwitch);
										}
#line 4010 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1206 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 4018 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1211 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"switch_header: SWITCH OPEN_P IDENTIFIER CLOSE_P\n";
										
										tempSwitch->setExpr(new IdentifierNode((yyvsp[-2].r.text),scoop));
									}
#line 4027 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1217 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cscoop=scoop;scoop=new ScoopNode(cscoop);tempSwitch=new SwitchNode(NULL,std::list<pair<Node*,Node*>>(),scoop);}
#line 4033 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1220 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4039 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1221 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4045 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1222 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4051 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1223 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4057 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1226 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4063 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1227 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4069 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1230 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-4].r.node),(yyvsp[-2].r.node));}
#line 4075 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1231 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-2].r.node),(yyvsp[0].r.node));}
#line 4081 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1232 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-3].r.node),NULL);}
#line 4087 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1235 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-2].r.node));}
#line 4093 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1236 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[0].r.node));}
#line 4099 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1237 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-1].r.node));}
#line 4105 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1239 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"protocol: protocol_header protocol_body\n";
										idsList.clear();
										methodsList.clear();
										method=NULL;
										}
#line 4116 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1247 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";
								protocol=ProtocolHelper ::createNewProtocol((yyvsp[0].r.text),symbolTable );
								
								}
#line 4126 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1254 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	protocol_reference_list interface_declaration_list	AT_END\n";
								ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								idsList.clear();
								}
#line 4138 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1262 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	interface_declaration_list	AT_END\n";
									
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								
								}
#line 4150 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1270 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	protocol_reference_list AT_END	\n";
											ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								idsList.clear();
								}
#line 4160 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1276 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"protocol_body:	AT_END\n";}
#line 4166 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1278 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"enum: ENUM IDENTIFIER  OPEN_S list_expr CLOSE_S SEMI_COMA  \n";
																
																EnumHelper::createNewEnum( (yyvsp[-4].r.text),idsList, symbolTable);
																idsList.clear();
															 }
#line 4177 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1284 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"enum: ENUM IDENTIFIER SEMI_COMA\n";
																EnumHelper::createNewEnum( (yyvsp[-1].r.text),idsList, symbolTable);
															  }
#line 4186 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1291 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"list_expr:IDENTIFIER EQUAL expr COMMA list_expr\n";
												idsList.push_back((yyvsp[-4].r.text));
													(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-4].r.text),scoop),(yyvsp[-2].r.node));
												}
#line 4196 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1296 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"list_expr:IDENTIFIER EQUAL expr\n";
												idsList.push_back((yyvsp[-2].r.text));
												(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
												}
#line 4206 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1301 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"list_expr:IDENTIFIER \n";
													idsList.push_back((yyvsp[0].r.text));
													//??
												}
#line 4216 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1306 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  cout<<"list_expr:IDENTIFIER  COMMA list_expr \n";
												  idsList.push_back((yyvsp[-2].r.text));
												  //??
												}
#line 4226 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1313 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  cout<<"try_catch:TRY statement catch_list finally_statement \n";
												}
#line 4234 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1317 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {				  
								cout<<"try_catch:TRY statement catch_list \n";
							  }
#line 4242 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1322 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"catch_list:CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4248 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1323 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"catch_list:catch_list CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4254 "yacc.cpp" /* yacc.c:1646  */
    break;


#line 4258 "yacc.cpp" /* yacc.c:1646  */
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
#line 1328 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1906  */

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

