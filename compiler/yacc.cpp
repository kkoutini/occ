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
#line 5 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:339  */

	#include <iostream>
	#include <FlexLexer.h>
	#include <string>
	#include "ast\node.h"
	#include "ST\SymbolTable.h"
	#include "ast\ConstantNode.h"
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
				#include <fstream>
	using namespace std;

	int yylex(void);
	int yyparse();
	void yyerror(const char *);

	//extern int linenum;
	//extern int colno;
	//extern string ytext; 
	extern std::ofstream ofs ("test.txt", std::ofstream::out);
	FlexLexer* lexer = new yyFlexLexer();
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
	vector <Selector *> selectorsList;
	Type* type=NULL;
	vector <Node*>casesNode;
	SwitchNode * tempSwitch=NULL;
	list<pair<string,Node*> > declarationList;
	FunctionNode* functionNode;
Method* nodeXX;
	class Parser{
		public:
		int	parse()
		{
			return yyparse();
		}
	};

#line 133 "yacc.cpp" /* yacc.c:339  */

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
#line 135 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:355  */

#include "ast\node.h"

#line 167 "yacc.cpp" /* yacc.c:355  */

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
    if_h = 320,
    expr_1 = 321,
    p_type_expr_prec = 322,
    long_id_prec = 323,
    try_prec = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 138 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:355  */

	
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
	   

#line 264 "yacc.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 279 "yacc.cpp" /* yacc.c:358  */

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
#define YYLAST   882

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  258
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  469

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

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
      65,    66,    67,    68,    69
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   166,   166,   169,   170,   172,   173,   174,   175,   176,
     178,   186,   189,   193,   194,   196,   198,   204,   208,   213,
     218,   222,   224,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   242,   249,   252,   256,   261,   262,   266,
     267,   268,   269,   270,   271,   274,   275,   278,   279,   280,
     283,   286,   294,   305,   306,   307,   312,   315,   318,   322,
     326,   330,   331,   334,   340,   341,   342,   344,   352,   359,
     363,   369,   370,   371,   372,   373,   374,   375,   376,   379,
     380,   381,   385,   386,   387,   388,   392,   401,   412,   421,
     432,   441,   449,   457,   465,   473,   483,   494,   499,   503,
     504,   507,   511,   517,   520,   522,   526,   531,   537,   545,
     546,   550,   557,   562,   563,   566,   573,   580,   587,   591,
     593,   597,   601,   606,   619,   622,   627,   633,   639,   642,
     648,   651,   652,   655,   656,   659,   667,   674,   683,   692,
     698,   705,   712,   726,   730,   736,   741,   750,   754,   758,
     764,   773,   776,   780,   785,   791,   798,   802,   803,   806,
     809,   816,   825,   828,   833,   836,   839,   844,   849,   852,
     870,   876,   880,   884,   889,   893,   897,   902,   908,   919,
     922,   927,   930,   933,   936,   939,   942,   945,   948,   952,
     955,   958,   963,   966,   971,   978,   979,   980,   990,   993,
     997,  1000,  1003,  1006,  1010,  1014,  1017,  1021,  1022,  1023,
    1024,  1025,  1026,  1033,  1036,  1037,  1042,  1045,  1048,  1049,
    1052,  1053,  1056,  1062,  1067,  1070,  1074,  1079,  1084,  1090,
    1093,  1094,  1095,  1096,  1099,  1100,  1103,  1104,  1105,  1108,
    1109,  1110,  1112,  1120,  1126,  1134,  1142,  1148,  1151,  1157,
    1164,  1169,  1174,  1179,  1186,  1190,  1195,  1196,  1199
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
  "FINALLY", "if_h", "expr_1", "p_type_expr_prec", "long_id_prec",
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
  "method_selector", "parameter_list", "parameter", "class_implementation",
  "class_implementation_header", "class_implementation_body",
  "implementation_definition_list", "implementation_definition",
  "class_implementation_definition",
  "class_implementation_definition_header",
  "instance_implementation_definition",
  "instance_implementation_definition_header", "block_body",
  "block_body_header", "block_body_statements", "statement_list",
  "statement", "variable_declaration_block", "variable_list", "variable",
  "return_statement", "loop_statement", "do_while", "do_header",
  "for_loop", "for_loop_header", "for_initializer", "logic_expr", "expr",
  "assign_expr", "long_id", "simple_expr", "message_call", "sender",
  "message", "argument_list", "argument", "while_loop",
  "while_loop_header", "conditional_statement", "if_header",
  "switch_header", "switch_body_block", "switch_body", "list_of_case",
  "case_body", "default_case", "protocol", "protocol_header",
  "protocol_body", "enum", "list_expr", "try_catch", "catch_list",
  "finally_statement", YY_NULL
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324
};
# endif

#define YYPACT_NINF -338

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-338)))

#define YYTABLE_NINF -65

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-65)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     164,    47,    95,    56,   175,   198,   217,   263,    65,  -338,
    -338,   396,    13,  -338,  -338,   411,  -338,   432,  -338,  -338,
    -338,   266,   274,    53,  -338,  -338,  -338,  -338,   563,   315,
    -338,    18,    18,  -338,   212,   277,   288,  -338,  -338,  -338,
     238,  -338,    18,    18,   310,  -338,   375,  -338,  -338,   309,
    -338,   309,  -338,   382,   434,  -338,   101,   328,  -338,   346,
     322,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
     824,  -338,   380,   389,   462,  -338,   799,   799,  -338,   136,
    -338,  -338,  -338,  -338,  -338,   143,   374,   824,   404,   113,
     404,   405,   470,  -338,   332,   337,  -338,  -338,   348,  -338,
    -338,  -338,   799,   200,   401,  -338,   799,   404,  -338,   404,
    -338,  -338,   487,  -338,  -338,  -338,  -338,   260,  -338,  -338,
     493,  -338,  -338,  -338,  -338,    -2,   409,  -338,   205,   394,
     406,  -338,  -338,  -338,   799,   387,    29,   127,  -338,  -338,
     429,  -338,   442,   444,   115,  -338,  -338,   463,  -338,  -338,
     500,  -338,  -338,   373,  -338,  -338,  -338,  -338,  -338,   148,
     472,  -338,   240,   239,  -338,  -338,  -338,  -338,   247,  -338,
     824,   592,  -338,  -338,  -338,  -338,   454,   466,   471,  -338,
     476,   505,     5,   766,   506,   511,   497,   261,   766,  -338,
    -338,   320,  -338,  -338,  -338,  -338,  -338,   497,  -338,   497,
     515,  -338,   -16,   367,  -338,  -338,   497,  -338,   497,     7,
    -338,  -338,  -338,   346,   766,   516,    29,   157,  -338,  -338,
      38,  -338,  -338,  -338,   128,  -338,   289,  -338,   512,   335,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
     340,   519,  -338,   162,  -338,   248,  -338,  -338,   261,   474,
     425,    27,   668,   668,   518,    25,  -338,  -338,   530,   247,
     524,  -338,  -338,   473,   387,   233,   159,  -338,   367,  -338,
    -338,   495,  -338,  -338,   766,   535,   766,   766,   766,   766,
    -338,   488,  -338,   766,   539,  -338,    10,  -338,   529,  -338,
     531,  -338,  -338,  -338,   498,  -338,   502,  -338,   387,  -338,
    -338,   546,   442,   536,  -338,  -338,  -338,   545,  -338,   216,
    -338,   520,   564,   625,   570,   556,   766,  -338,  -338,   227,
     174,   287,   547,   578,   523,  -338,   568,   304,   548,   766,
     548,  -338,   261,  -338,   261,   581,   367,  -338,   193,   193,
    -338,  -338,   497,   588,   379,  -338,  -338,   577,  -338,   346,
    -338,    17,   442,  -338,  -338,  -338,   766,   562,    57,   121,
     636,   436,   425,  -338,  -338,   668,   668,   766,   766,   766,
     766,   766,  -338,   589,   372,  -338,   824,   595,   497,  -338,
     596,  -338,  -338,  -338,  -338,  -338,  -338,  -338,   438,   586,
     555,  -338,  -338,   567,   573,  -338,  -338,   766,  -338,   593,
     679,   711,   194,  -338,   456,   456,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,   603,   766,   372,  -338,   618,   824,  -338,
     165,  -338,   617,   582,  -338,   619,  -338,  -338,  -338,  -338,
    -338,   605,  -338,   606,   723,   766,  -338,  -338,   620,   630,
     700,  -338,   621,   623,  -338,   624,  -338,  -338,  -338,  -338,
     612,  -338,   497,   627,   628,   631,  -338,   759,  -338,  -338,
    -338,   497,   759,   637,  -338,  -338,  -338,   759,  -338
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       5,     0,     0,     8,     6,     0,     7,     0,     9,    13,
      14,    12,   126,     0,   243,    70,     1,     3,     0,     0,
      23,     0,     0,    10,     0,     0,     0,   108,   109,   110,
       0,   130,     0,     0,     0,   124,     0,   132,   133,     0,
     134,     0,   247,     0,     0,   242,     0,     0,   249,     0,
       0,    93,    92,    91,    95,    90,    55,    54,    53,    46,
       0,    94,     0,     0,     0,    48,    49,     0,    52,     0,
      84,    85,    82,    83,    36,     0,   119,     0,     0,     0,
       0,     0,    26,    20,     0,     0,    31,    21,     0,    32,
      22,   107,     0,     0,     0,    68,    56,     0,   137,     0,
     140,   128,     0,   129,   131,   142,   135,     0,   138,   246,
       0,   245,    15,    11,   125,   252,     0,    96,     0,    88,
      86,    45,    47,    51,    50,    62,     0,     0,    61,    34,
       0,    33,     0,     0,     0,   114,   112,     0,   116,    24,
       0,    28,    17,     0,    29,    18,    30,    19,    69,     0,
      80,    73,     0,     0,    67,   136,   139,   127,   197,   144,
       0,     0,   198,   200,   201,   199,     0,     0,     0,   168,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   151,
     141,     0,   146,   150,   152,   147,   166,     0,   164,     0,
       0,   192,   202,   193,   196,   165,     0,   148,     0,     0,
     156,   153,   244,     0,     0,     0,     0,     0,    89,    87,
       0,    65,    99,    66,     0,    57,     0,    35,     0,   118,
     122,   117,   113,   111,   115,    25,    27,    16,    77,    81,
       0,     0,    71,     0,    74,     0,   208,   209,     0,   202,
       0,     0,     0,     0,     0,    88,   215,   214,     0,   197,
       0,   210,   211,     0,     0,   106,     0,   158,   212,   143,
     145,     0,   169,   149,     0,     0,     0,     0,     0,     0,
     222,   224,   233,     0,     0,   226,     0,   235,     0,   253,
     251,   248,    63,    58,     0,   102,    97,    59,     0,    60,
     123,     0,     0,     0,    79,    75,    78,     0,    72,     0,
     207,   180,     0,     0,     0,     0,     0,   190,   191,     0,
       0,     0,     0,   216,     0,   163,     0,   255,   104,     0,
     104,   161,     0,   154,     0,     0,   194,   195,   203,   204,
     205,   206,     0,     0,     0,   231,   234,     0,   232,     0,
     101,     0,     0,   120,    76,   155,     0,     0,     0,     0,
       0,     0,   193,   186,   223,     0,     0,     0,     0,     0,
       0,     0,   227,     0,     0,   213,     0,     0,     0,   254,
       0,   162,   105,   160,   159,   157,   167,   225,     0,     0,
     240,   230,   250,     0,     0,   121,   179,     0,   177,     0,
       0,     0,     0,   187,   188,   189,   181,   182,   183,   184,
     185,   229,   228,     0,     0,   217,   219,     0,     0,   258,
       0,   103,     0,   237,   241,     0,   100,    98,   178,   176,
     175,     0,   174,     0,     0,     0,   220,   218,     0,     0,
       0,    38,     0,    40,   238,     0,   239,   171,   172,   173,
       0,   221,     0,     0,    41,     0,    37,     0,   236,   170,
     256,     0,     0,    43,    39,   257,    44,     0,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -338,  -338,  -338,   641,  -338,  -338,  -338,   644,  -338,  -338,
    -337,    48,  -338,   571,   597,  -338,  -338,   -30,   526,   437,
    -338,  -338,  -338,  -155,   -28,  -338,  -338,  -338,  -338,  -129,
    -338,  -338,   336,  -338,   137,    -1,  -338,  -338,   -29,    -9,
    -338,  -257,  -338,  -338,  -338,   614,   -26,  -338,  -338,  -338,
    -338,   296,  -338,  -338,  -338,  -180,  -338,   417,   -35,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,  -238,  -182,  -338,  -121,
    -167,   491,  -338,  -338,  -338,   254,  -338,   410,  -338,  -338,
    -338,  -338,  -338,  -338,   391,   398,  -338,  -338,  -338,   195,
    -208,  -338,  -338,  -338
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    33,    34,    85,   421,
     442,    35,    74,    75,    76,    77,   104,    78,   137,   138,
     106,    12,    13,   162,   187,    80,    81,    82,    83,   221,
     296,   222,   381,   331,    36,    37,    38,    39,   188,    89,
     229,   230,    14,    15,    45,    46,    47,    48,    49,    50,
      51,   189,   117,   190,   191,   192,   193,   266,   267,   194,
     195,   196,   197,   198,   199,   314,   319,   200,   201,   202,
     203,   204,   258,   324,   415,   416,   205,   206,   207,   208,
     209,   412,   285,   286,   287,   288,    16,    17,    55,   210,
     126,   211,   327,   379
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,   260,    88,    90,   250,   289,   263,   224,   245,   256,
     105,   270,    79,   107,   109,   321,   213,   271,   393,   272,
     114,   268,    86,    91,   282,   274,   280,   345,   281,    40,
     223,   311,   290,   108,   110,   101,    58,   312,   313,   214,
     -64,    59,   128,   275,    87,   353,   133,   -64,    79,    79,
     249,    19,   394,   101,   283,   284,   182,   283,   284,   143,
      22,   259,   218,    44,    58,    -2,     1,   249,     2,    59,
     320,   320,   158,   294,    79,   359,   164,   361,    79,   144,
     220,   147,    94,   171,   398,   304,   114,   292,   172,   173,
     295,   174,   175,     3,   101,   395,    20,   101,   165,    21,
     166,   343,   122,   455,   133,   123,    79,   336,   182,   338,
     339,   340,   341,   228,   145,     4,   232,   184,   185,   101,
     464,     5,   402,     6,   146,   466,   233,   404,   405,   297,
     468,   320,   400,   320,   363,   328,   330,   135,   225,   -63,
     136,   392,   248,   143,   139,   226,   -63,   382,   362,   101,
     365,   366,   101,   249,    54,   249,   249,   249,   249,   238,
     332,   140,   387,   141,   390,     1,   239,     2,   293,   259,
     333,    95,    98,   306,   396,   226,   399,   334,   320,    23,
     239,   440,   441,   320,   320,   406,   407,   408,   409,   410,
     120,   171,     3,   367,   368,    18,   172,   173,   419,   174,
     175,   159,    24,    18,   160,   434,   135,   369,   423,   216,
     370,   161,   371,    92,     4,   428,   182,   332,   431,   433,
       5,    25,     6,   365,   366,   184,   185,   355,    28,   150,
     278,   153,   436,    93,   334,   279,    31,    32,   443,   102,
     243,   241,    60,   160,    61,    62,    63,    64,    65,   307,
     244,   242,   450,   451,   364,   103,   365,   366,   443,   308,
      70,    71,   264,    26,   168,   265,    61,    62,    63,    64,
      65,    56,   460,   228,   329,   443,   115,   169,    96,    57,
     443,   465,   170,    71,   220,   443,   171,   143,    72,    99,
     298,   172,   173,   216,   174,   175,    73,   384,    97,   385,
     176,    31,    32,   177,   178,   179,   180,   246,   247,   100,
     181,   182,    31,    32,   372,   183,   365,   366,    73,    84,
     184,   185,   186,   228,   168,   115,    61,    62,    63,    64,
      65,   111,   124,   151,    42,    43,   115,   269,   154,   301,
     302,   303,   170,    71,   160,   116,   171,   118,   417,   156,
     125,   172,   173,   152,   174,   175,    31,    32,   155,   127,
     176,    31,    32,   177,   178,   179,   180,   377,   378,   157,
     181,   182,    31,    32,   236,   183,   413,   414,    73,   142,
     184,   185,   186,   168,   129,    61,    62,    63,    64,    65,
     439,   276,   277,   130,   237,   115,   113,    31,    32,    42,
      43,   170,    71,   119,   278,   171,    31,    32,    86,   279,
     172,   173,    28,   174,   175,    29,   148,    30,   163,   176,
      31,    32,   177,   178,   179,   180,   215,    28,   389,   181,
     182,   218,    41,   227,   183,    42,    43,    73,   220,   184,
     185,   186,   168,   219,    61,    62,    63,    64,    65,   276,
     277,    29,   310,    52,   115,   121,    31,    32,    31,    32,
     170,    71,   278,   403,   171,   365,   366,   279,    87,   172,
     173,   231,   174,   175,   234,    66,    67,    68,   176,   131,
     251,   177,   178,   179,   180,   -65,   -65,   422,   181,   182,
     240,   149,   252,   183,    31,    32,    73,   253,   184,   185,
     186,   168,   254,    61,    62,    63,    64,    65,   167,   255,
     261,    42,    43,   115,   212,   262,   300,    31,    32,   170,
      71,   235,   322,   171,    31,    32,   273,   291,   172,   173,
     305,   174,   175,   275,   323,   325,   326,   176,   177,   337,
     177,   178,   179,   180,   344,   342,   348,   181,   182,   349,
     350,   352,   183,   351,   239,    73,   354,   184,   185,   186,
     168,   356,    61,    62,    63,    64,    65,    60,   357,    61,
      62,    63,    64,    65,   373,   375,    66,    67,    68,    71,
      69,   360,   315,   374,   376,    70,    71,   172,   173,   380,
     174,   175,   386,   388,   391,   316,   168,   424,    61,    62,
      63,    64,    65,   397,   425,   411,    72,   182,   435,   317,
     318,   418,   420,    72,    73,    71,   184,   185,   171,   426,
     429,    73,   438,   172,   173,   427,   174,   175,   444,   259,
     446,   445,   447,   448,   453,   458,   358,   452,   456,   459,
     259,   457,    72,   182,   461,   132,   462,   401,   463,    27,
      73,   315,   184,   185,   217,   467,   172,   173,   112,   174,
     175,    53,   315,   299,   316,   309,   383,   172,   173,   437,
     174,   175,   259,   257,   134,   316,   182,   346,   317,   318,
       0,   335,     0,   259,   347,   184,   185,   182,     0,   317,
     318,     0,     0,     0,   315,     0,   184,   185,     0,   172,
     173,     0,   174,   175,   259,   171,   430,   316,     0,     0,
     172,   173,     0,   174,   175,   259,   440,   454,     0,   182,
       0,   317,   318,     0,     0,     0,   171,   259,   184,   185,
     182,   172,   173,     0,   174,   175,     0,   171,   432,   184,
     185,     0,   172,   173,     0,   174,   175,     0,     0,   171,
     449,   182,     0,     0,   172,   173,     0,   174,   175,     0,
     184,   185,   182,   259,     0,     0,     0,     0,     0,     0,
     259,   184,   185,     0,   182,   440,     0,     0,     0,     0,
       0,     0,     0,   184,   185,   171,     0,     0,     0,     0,
     172,   173,   171,   174,   175,     0,     0,   172,   173,     0,
     174,   175,     0,    60,     0,    61,    62,    63,    64,    65,
     182,     0,     0,     0,     0,     0,     0,   182,     0,   184,
     185,    70,    71,     0,     0,     0,   184,   185,    60,     0,
      61,    62,    63,    64,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,    72,
       0,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,     0,     0,     0,     0,     0,
       0,     0,    73
};

static const yytype_int16 yycheck[] =
{
      28,   183,    31,    32,   171,   213,   186,   136,   163,     4,
      40,   191,    40,    42,    43,   253,    18,   197,     1,   199,
      46,   188,     4,    32,    17,    41,   206,    17,   208,    16,
       1,     4,   214,    42,    43,    36,    11,    10,    11,    41,
      11,    16,    70,    59,    26,   302,    76,    18,    76,    77,
     171,     4,    35,    54,    47,    48,    51,    47,    48,    87,
       4,     4,    37,    15,    11,     0,     1,   188,     3,    16,
     252,   253,   102,    35,   102,   313,   106,   315,   106,    88,
      51,    90,    34,    26,    27,   240,   112,   216,    31,    32,
      52,    34,    35,    28,    95,   352,     1,    98,   107,     4,
     109,   283,     1,   440,   134,     4,   134,   274,    51,   276,
     277,   278,   279,   142,     1,    50,     1,    60,    61,   120,
     457,    56,   360,    58,    11,   462,    11,   365,   366,     1,
     467,   313,    11,   315,   316,   264,   265,     1,    11,    11,
       4,   349,   170,   171,     1,    18,    18,   329,   315,   150,
      29,    30,   153,   274,    17,   276,   277,   278,   279,    11,
       1,    18,   342,    20,   344,     1,    18,     3,    11,     4,
      11,    34,    35,    11,   356,    18,   358,    18,   360,     4,
      18,    16,    17,   365,   366,   367,   368,   369,   370,   371,
      53,    26,    28,    19,    20,     0,    31,    32,   378,    34,
      35,     1,     4,     8,     4,    11,     1,    33,   388,     4,
      36,    11,    38,     1,    50,   397,    51,     1,   400,   401,
      56,     4,    58,    29,    30,    60,    61,    11,    16,    92,
      37,    94,   414,    21,    18,    42,    24,    25,   420,     1,
       1,     1,     4,     4,     6,     7,     8,     9,    10,     1,
      11,    11,   434,   435,    27,    17,    29,    30,   440,    11,
      22,    23,     1,     0,     4,     4,     6,     7,     8,     9,
      10,     5,   452,   302,    41,   457,    16,    17,     1,     5,
     462,   461,    22,    23,    51,   467,    26,   315,    50,     1,
       1,    31,    32,     4,    34,    35,    58,   332,    21,   334,
      40,    24,    25,    43,    44,    45,    46,    60,    61,    21,
      50,    51,    24,    25,    27,    55,    29,    30,    58,     4,
      60,    61,    62,   352,     4,    16,     6,     7,     8,     9,
      10,    21,     4,     1,    24,    25,    16,    17,     1,     4,
       5,     1,    22,    23,     4,    49,    26,    51,   376,     1,
       4,    31,    32,    21,    34,    35,    24,    25,    21,    37,
      40,    24,    25,    43,    44,    45,    46,    63,    64,    21,
      50,    51,    24,    25,     1,    55,     4,     5,    58,     5,
      60,    61,    62,     4,     4,     6,     7,     8,     9,    10,
     418,    24,    25,     4,    21,    16,    21,    24,    25,    24,
      25,    22,    23,    21,    37,    26,    24,    25,     4,    42,
      31,    32,    16,    34,    35,    19,    11,    21,    17,    40,
      24,    25,    43,    44,    45,    46,    17,    16,    49,    50,
      51,    37,    21,     4,    55,    24,    25,    58,    51,    60,
      61,    62,     4,    37,     6,     7,     8,     9,    10,    24,
      25,    19,    27,    21,    16,    21,    24,    25,    24,    25,
      22,    23,    37,    27,    26,    29,    30,    42,    26,    31,
      32,    27,    34,    35,    11,    13,    14,    15,    40,    17,
      26,    43,    44,    45,    46,    29,    30,    49,    50,    51,
      18,    21,    26,    55,    24,    25,    58,    26,    60,    61,
      62,     4,    26,     6,     7,     8,     9,    10,    21,     4,
       4,    24,    25,    16,    21,     4,     4,    24,    25,    22,
      23,    21,     4,    26,    24,    25,    11,    11,    31,    32,
      11,    34,    35,    59,     4,    11,    63,    40,    43,     4,
      43,    44,    45,    46,     5,    57,    17,    50,    51,    18,
      52,     5,    55,    51,    18,    58,    11,    60,    61,    62,
       4,    41,     6,     7,     8,     9,    10,     4,     4,     6,
       7,     8,     9,    10,    27,    52,    13,    14,    15,    23,
      17,    11,    26,     5,    16,    22,    23,    31,    32,    41,
      34,    35,    11,     5,    17,    39,     4,    11,     6,     7,
       8,     9,    10,    41,    49,    16,    50,    51,     5,    53,
      54,    16,    16,    50,    58,    23,    60,    61,    26,    52,
      27,    58,     4,    31,    32,    52,    34,    35,    11,     4,
      11,    49,    27,    27,     4,    11,    11,    17,    17,    27,
       4,    18,    50,    51,    17,    74,    18,    11,    17,     8,
      58,    26,    60,    61,   128,    18,    31,    32,    44,    34,
      35,    17,    26,   226,    39,   248,   330,    31,    32,   415,
      34,    35,     4,   182,    77,    39,    51,   286,    53,    54,
      -1,   271,    -1,     4,   286,    60,    61,    51,    -1,    53,
      54,    -1,    -1,    -1,    26,    -1,    60,    61,    -1,    31,
      32,    -1,    34,    35,     4,    26,    27,    39,    -1,    -1,
      31,    32,    -1,    34,    35,     4,    16,    17,    -1,    51,
      -1,    53,    54,    -1,    -1,    -1,    26,     4,    60,    61,
      51,    31,    32,    -1,    34,    35,    -1,    26,    27,    60,
      61,    -1,    31,    32,    -1,    34,    35,    -1,    -1,    26,
      27,    51,    -1,    -1,    31,    32,    -1,    34,    35,    -1,
      60,    61,    51,     4,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    60,    61,    -1,    51,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    26,    -1,    -1,    -1,    -1,
      31,    32,    26,    34,    35,    -1,    -1,    31,    32,    -1,
      34,    35,    -1,     4,    -1,     6,     7,     8,     9,    10,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    60,
      61,    22,    23,    -1,    -1,    -1,    60,    61,     4,    -1,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    28,    50,    56,    58,    71,    72,    73,
      74,    75,    91,    92,   112,   113,   156,   157,   159,     4,
       1,     4,     4,     4,     4,     4,     0,    73,    16,    19,
      21,    24,    25,    76,    77,    81,   104,   105,   106,   107,
      16,    21,    24,    25,    81,   114,   115,   116,   117,   118,
     119,   120,    21,    77,   104,   158,     5,     5,    11,    16,
       4,     6,     7,     8,     9,    10,    13,    14,    15,    17,
      22,    23,    50,    58,    82,    83,    84,    85,    87,    94,
      95,    96,    97,    98,     4,    78,     4,    26,   108,   109,
     108,   109,     1,    21,    81,   104,     1,    21,   104,     1,
      21,   105,     1,    17,    86,    87,    90,   108,   109,   108,
     109,    21,   115,    21,   116,    16,   121,   122,   121,    21,
     104,    21,     1,     4,     4,     4,   160,    37,    94,     4,
       4,    17,    83,    87,    84,     1,     4,    88,    89,     1,
      18,    20,     5,    94,   109,     1,    11,   109,    11,    21,
     104,     1,    21,   104,     1,    21,     1,    21,    87,     1,
       4,    11,    93,    17,    87,   109,   109,    21,     4,    17,
      22,    26,    31,    32,    34,    35,    40,    43,    44,    45,
      46,    50,    51,    55,    60,    61,    62,    94,   108,   121,
     123,   124,   125,   126,   129,   130,   131,   132,   133,   134,
     137,   138,   139,   140,   141,   146,   147,   148,   149,   150,
     159,   161,    21,    18,    41,    17,     4,    88,    37,    37,
      51,    99,   101,     1,    99,    11,    18,     4,   108,   110,
     111,    27,     1,    11,    11,    21,     1,    21,    11,    18,
      18,     1,    11,     1,    11,    93,    60,    61,    94,   139,
     140,    26,    26,    26,    26,     4,     4,   141,   142,     4,
     137,     4,     4,   125,     1,     4,   127,   128,   140,    17,
     125,   125,   125,    11,    41,    59,    24,    25,    37,    42,
     125,   125,    17,    47,    48,   152,   153,   154,   155,   160,
     137,    11,    99,    11,    35,    52,   100,     1,     1,    89,
       4,     4,     5,     1,    93,    11,    11,     1,    11,   127,
      27,     4,    10,    11,   135,    26,    39,    53,    54,   136,
     137,   136,     4,     4,   143,    11,    63,   162,    99,    41,
      99,   103,     1,    11,    18,   147,   140,     4,   140,   140,
     140,   140,    57,   137,     5,    17,   154,   155,    17,    18,
      52,    51,     5,   111,    11,    11,    41,     4,    11,   136,
      11,   136,   140,   137,    27,    29,    30,    19,    20,    33,
      36,    38,    27,    27,     5,    52,    16,    63,    64,   163,
      41,   102,   137,   102,   128,   128,    11,   125,     5,    49,
     125,    17,   160,     1,    35,   111,   137,    41,    27,   137,
      11,    11,   136,    27,   136,   136,   137,   137,   137,   137,
     137,    16,   151,     4,     5,   144,   145,    94,    16,   125,
      16,    79,    49,   125,    11,    49,    52,    52,   137,    27,
      27,   137,    27,   137,    11,     5,   137,   145,     4,    94,
      16,    17,    80,   137,    11,    49,    11,    27,    27,    27,
     137,   137,    17,     4,    17,    80,    17,    18,    11,    27,
     125,    17,    18,    17,    80,   125,    80,    18,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    72,    73,    73,    73,    73,    73,
      74,    75,    75,    75,    75,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    80,    80,    80,    80,    81,    81,    82,    82,    82,
      83,    84,    84,    85,    85,    85,    86,    87,    87,    87,
      88,    88,    88,    89,    89,    89,    89,    90,    90,    90,
      91,    92,    92,    92,    92,    92,    92,    92,    92,    93,
      93,    93,    94,    94,    94,    94,    95,    95,    96,    96,
      97,    97,    97,    97,    97,    97,    98,    99,   100,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     105,   106,   106,   106,   106,   107,   107,   108,   109,   109,
     110,   110,   110,   111,   112,   113,   113,   114,   114,   114,
     114,   115,   115,   116,   116,   117,   118,   118,   119,   120,
     120,   121,   122,   123,   123,   124,   124,   125,   125,   125,
     125,   125,   125,   125,   126,   126,   126,   127,   127,   127,
     128,   128,   128,   129,   130,   130,   130,   131,   132,   133,
     134,   134,   134,   134,   134,   134,   134,   134,   135,   135,
     135,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   137,   137,   138,   139,   139,   139,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   141,   142,   142,   143,   143,   144,   144,
     145,   145,   146,   147,   148,   148,   148,   149,   150,   151,
     152,   152,   152,   152,   153,   153,   154,   154,   154,   155,
     155,   155,   156,   157,   158,   158,   158,   158,   159,   159,
     160,   160,   160,   160,   161,   161,   162,   162,   163
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
       1,     4,     3,     4,     3,     4,     3,     3,     3,     1,
       3,     4,     1,     2,     2,     4,     2,     3,     2,     2,
       1,     2,     1,     1,     1,     2,     3,     2,     2,     3,
       2,     2,     1,     2,     1,     2,     1,     1,     1,     2,
       1,     1,     1,     1,     3,     4,     1,     3,     1,     3,
       3,     2,     3,     3,     1,     1,     1,     4,     1,     2,
       8,     7,     7,     7,     6,     6,     6,     5,     4,     3,
       1,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       1,     1,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     2,     4,     1,     1,     1,     3,     2,     1,
       2,     3,     2,     4,     2,     4,     2,     4,     5,     1,
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
#line 166 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"program: components\n"; 
										 }
#line 2018 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 169 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"components: components component\n";}
#line 2024 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 170 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"components: component\n";}
#line 2030 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 172 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface \n";}
#line 2036 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 173 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation \n";}
#line 2042 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 174 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"protocol \n";}
#line 2048 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 175 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct \n";}
#line 2054 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 176 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum \n";}
#line 2060 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 178 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface: class_interface_header class_interface_body\n";
																 idsList.clear();
																 methodsList.clear();
																 method=NULL;
																}
#line 2070 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 186 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																				interface=InterfaceHelper::createNewInterface((yyvsp[-2].r.text),(yyvsp[0].r.text),symbolTable);
																				}
#line 2078 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 189 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
						
																				 interface=InterfaceHelper::createNewInterface((yyvsp[0].r.text),"",symbolTable);
																				}
#line 2087 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 193 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Unknown type name '"<<(yyvsp[-1].r.text)<<"' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2093 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 194 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2099 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 196 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2105 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 199 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
															
														InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2115 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 205 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														}
#line 2123 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 209 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	protocol_reference_list interface_declaration_list	AT_END\n";
														}
#line 2132 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 214 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2141 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 219 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														}
#line 2149 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 223 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_body:instance_variables		AT_END\n";}
#line 2155 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 225 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {														
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:interface_declaration_list	AT_END\n";
														}
#line 2164 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 229 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_body:AT_END\n";}
#line 2170 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 230 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2176 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 231 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2182 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 232 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2188 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 233 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2194 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 234 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2200 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 235 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2206 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 236 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2212 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 237 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2218 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 238 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2224 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 242 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													if(interface!=NULL){
													InterfaceHelper::addInheritedProtocol(interface,idsList,symbolTable);
														idsList.clear();
													}
													cout<<"protocol_reference_list: LESS_THAN ids_list_identifier MORE_THAN\n";
												}
#line 2236 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 249 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '>' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2242 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 252 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"ids_list:ids_list_identifier COMMA IDENTIFIER\n"; 
													idsList.push_back((yyvsp[0].r.text));
													}
#line 2251 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 256 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"ids_list_identifier:IDENTIFIER\n";
													idsList.push_back((yyvsp[0].r.text));
												    }
#line 2260 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 261 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array with body";}
#line 2266 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 262 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array without elements";}
#line 2272 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 266 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array-element \n";}
#line 2278 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 267 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array-element \n";}
#line 2284 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 268 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"empty element \n";}
#line 2290 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 269 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2296 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 270 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2302 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 271 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2308 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 274 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";}
#line 2314 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 275 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variables:OPEN_S	 CLOSE_S\n";}
#line 2320 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 278 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";}
#line 2326 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 279 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:instance_variable_declaration\n";}
#line 2332 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 280 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:variable_declaration_list\n";}
#line 2338 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 283 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declaration:visibility_specification variable_declaration_list\n";
																	}
#line 2345 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 287 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
											arrayList.clear();
												idsList.clear();
												flag=false;
										}
#line 2357 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 295 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										       InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
												arrayList.clear();
												idsList.clear();
												flag=false;
										cout<<"variable_declaration_list: variable_declaration\n";
										}
#line 2369 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 305 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PRIVATE\n";  visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2375 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 306 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PROTECTED\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2381 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 307 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PUBLIC\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2387 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 312 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct_variable_declaration:struct_declaration_list\n";}
#line 2393 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 315 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
	                                           (yyval.r.text)=(yyvsp[-2].r.text);
												}
#line 2401 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 318 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
													}
#line 2410 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 322 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2416 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 326 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"ids_list:ids_list COMMA id_dec\n"; 

									}
#line 2425 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 330 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"ids_list:id_dec\n"; }
#line 2431 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 331 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2437 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 334 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout <<" data_member: IDENTIFIER array_tag \n";
							 var=new Array((yyvsp[0].r.text),arrayAlloc.size(),NULL);
					       ( dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
						   arrayList.push_back( ( dynamic_cast<Array*>(var)));
						      arrayAlloc.clear();
							}
#line 2448 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 340 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {idsList.push_back((yyvsp[0].r.text)) ;cout <<" data_member: IDENTIFIER  \n";}
#line 2454 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 341 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2460 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 342 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2466 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 344 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {  
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																												idsList.clear();
																												flag=false;
																										  cout<<"struct_declaration_list: struct_declaration_list  variable_declarationxx\n";
																										}
#line 2478 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 352 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																														 	idsList.clear();
																															flag=false;
																										cout<<"struct_declaration_list:  variable_declarationxx\n";
																										}
#line 2490 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 359 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Illigal visibility specification at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2496 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 363 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
					myStruct=StructHelper::createNewStruct((yyvsp[0].r.text),symbolTable);
					cout<<"struct_header: STRUCT  IDENTIFIER\n";
					}
#line 2505 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 369 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S  entity SEMI_COMA\n";}
#line 2511 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 370 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S enteity SEMI_COMA \n";}
#line 2517 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 371 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S SEMI_COMA\n";}
#line 2523 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 372 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S  SEMI_COMA  \n";}
#line 2529 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 373 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2535 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 374 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2541 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 375 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2547 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 376 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2553 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 379 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"entity: IDENTIFIER COMMA  entity\n";}
#line 2559 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 380 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"entity:  IDENTIFIER \n";}
#line 2565 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 381 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2571 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 385 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type:simple type\n";}
#line 2577 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 386 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: complex type\n";}
#line 2583 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 387 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: struct_type\n";}
#line 2589 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 388 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: enum_type\n";}
#line 2595 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 392 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	cout<<"struct_type: STRUCT IDENTIFIER   \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																		string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2609 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 401 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct_type: STRUCT IDENTIFIER  MULTI \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2623 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 412 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum_type: ENUM IDENTIFIER \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2637 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 421 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum_type: ENUM IDENTIFIER  MULTI  \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																									string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2651 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 432 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"int type \n";
																type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
																}
#line 2665 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 441 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"char type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2678 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 449 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"float type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2691 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 457 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"NSString type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2704 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 465 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"void type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2717 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 473 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"bool type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2730 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 483 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 2745 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 494 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_tag: array_first_tag array_tag_list \n"; 
										   }
#line 2753 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 499 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"array_tag_list: array_tag_list OPEN_ARR INT_VAL CLOSE_ARR\n"; 
																arrayAlloc.push_back((yyvsp[-1].r.int_val));
														   }
#line 2762 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 504 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<" Error:missing  dimension in array tag  ";arrayAlloc.clear();}
#line 2768 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 507 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_first_tag: OPEN_ARR INT_VAL CLOSE_ARR\n"; 
											arrayAlloc.push_back((yyvsp[-1].r.int_val));
											}
#line 2777 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 511 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_first_tag: OPEN_ARR  CLOSE_ARR\n"; 
											arrayAlloc.push_back(-1);
											}
#line 2786 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 517 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							   }
#line 2794 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 522 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout <<"with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							 }
#line 2803 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 531 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
															 methodsList.push_back(method);
														
															 
																}
#line 2814 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 537 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																 cout<<"interface_declaration_list:interface_declaration\n";
															 methodsList.push_back(method);
															 
																 	
																 }
#line 2825 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 545 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"interface_declaration: class_method_declaration\n";}
#line 2831 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 546 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"interface_declaration: instance_method_declaration\n";}
#line 2837 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 550 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_method_declaration: PLUS p_type method_selector	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,true);
															
																 selectorsList.clear();
																
																}
#line 2849 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 557 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_method_declaration: PLUS			 method_selector	SEMI_COMA\n";
																		method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																}
#line 2859 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 562 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2865 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 563 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2871 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 566 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															cout<<"instance_method_declaration: MINUS p_type	method_selector		SEMI_COMA\n";
															method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,false);
																 selectorsList.clear();
																
																
															}
#line 2883 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 573 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"instance_method_declaration: MINUS			 method_selector	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																}
#line 2893 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 580 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.r.text)=(yyvsp[-1].r.text);
																}
#line 2902 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 587 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {\
																cout<<"method_selector:IDENTIFIER SEMI_COLUMN parameter_list\n";
																	(yyval.r.text)=(yyvsp[-2].r.text);
																}
#line 2911 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 591 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"method_selector:IDENTIFIER \n";(yyval.r.text)=(yyvsp[0].r.text);}
#line 2917 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 593 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				cout<<"parameter_list:	parameter_list	SEMI_COLUMN	parameter\n";
																				selectorsList.push_back(new Selector("",var));
																			}
#line 2926 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 597 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				cout<<"parameter_list:	parameter_list	IDENTIFIER  SEMI_COLUMN	parameter\n";
																					selectorsList.push_back(new Selector((yyvsp[-2].r.text),var));
																			}
#line 2935 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 601 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				cout<<"parameter_list: parameter\n";
																			selectorsList.push_back(new Selector("",var));
																			}
#line 2944 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 606 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"parameter:  p_type IDENTIFIER\n";
																
																if(type!=NULL){
																var=new Variable((yyvsp[0].r.text),type);
																}
																else{
																cout<<"Error:Type not found.\n";
																}
																}
#line 2959 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 619 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation: class_implementation_header class_implementation_body\n";}
#line 2965 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 622 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																	interface=InterfaceHelper::checkImplementation((yyvsp[-2].r.text),symbolTable,(yyvsp[0].r.text));
																	
																}
#line 2975 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 627 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																interface=InterfaceHelper::checkImplementation((yyvsp[0].r.text),symbolTable,"");
																	
																}
#line 2984 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 633 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";
																			InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														}
#line 2994 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 639 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
																	cout<<"class_implementation_body: instance_variables									AT_END\n";
																}
#line 3002 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 642 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_body:						implementation_definition_list	AT_END\n";
																	InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														
																}
#line 3013 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 648 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation_body:	AT_END\n";}
#line 3019 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 651 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);cout<<"implementation_definition_list: implementation_definition_list implementation_definition\n";}
#line 3025 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 652 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);cout<<"implementation_definition_list: implementation_definition\n";}
#line 3031 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 655 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"implementation_definition: class_implementation_definition	\n";}
#line 3037 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 656 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"implementation_definition: instance_implementation_definition \n";}
#line 3043 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 659 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"class_implementation_definition: class_implementation_definition_header block_body";
														method->setFunctionNode(functionNode);
														functionNode=NULL;
													nodeXX=method;
													}
#line 3054 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 667 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"class_implementation_definition_header: PLUS p_type		 method_selector\n";
															method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																
																
										}
#line 3066 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 674 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"class_implementation_definition_header:  PLUS			 method_selector\n";
													 method =InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
									
										}
#line 3077 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 683 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															scoop=NULL;
															cscoop=NULL;
															cout<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";
															method->setFunctionNode(functionNode);
														functionNode=NULL;
															}
#line 3089 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 692 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											     cout<<"instance_implementation_definition_header:MINUS p_type		method_selector\n";
												 method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
															
												}
#line 3100 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 698 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"instance_implementation_definition_header:MINUS 			method_selector\n";
												 method =InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
												}
#line 3110 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 705 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												
												cout<<"block_body:OPEN_S  block_body_part \n";
												(yyval.r.node)=(yyvsp[-1].r.node);
												}
#line 3120 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 712 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cscoop=scoop;
                                                scoop=ScoopHelper::createNewScoop(cscoop,method);
												if(functionNode==NULL)
													functionNode=new FunctionNode(scoop,method);
													else
													functionNode->addNode(scoop);
												scoopVector.push_back(scoop);
												cout<<"block_body_header:OPEN_S	\n";
												(yyval.r.node)=scoop;
												}
#line 3136 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 726 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												scoop=scoop->getParent();
												cout<<"block_body_statements:statement_list	CLOSE_S	\n";
												}
#line 3145 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 730 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												scoop=scoop->getParent();
												cout<<"block_body_statements:CLOSE_S\n";
												}
#line 3154 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 736 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement_list: statement_list statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3164 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 741 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement_list: statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											(yyval.r.node)=(yyvsp[0].r.node);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3175 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 750 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: loop_statement\n";
											(yyval.r.text)="loop";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3184 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 754 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: conditional_statement\n";
											(yyval.r.text)="cond";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3193 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 758 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"statement: expr\n";
												(yyval.r.text)="expr";
												(yyval.r.node)=(yyvsp[-1].r.node);
												//nodeXX=$<r.node>1;
											}
#line 3204 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 764 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"statement: variable_declaration\n";
											
												ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												(yyval.r.node)=(yyvsp[0].r.node);
										    }
#line 3218 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 773 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: block_body\n";(yyval.r.text)=new char[256];(yyval.r.text)[0]='\0';strcat((yyval.r.text),"Block");
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3226 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 776 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: return_statement\n";
												(yyval.r.text)="return";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3235 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 780 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: try_catch\n";}
#line 3241 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 785 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
														 (yyval.r.text)=(yyvsp[-2].r.text);
														 (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3252 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 791 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
														  (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3264 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 798 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:enum\n";}
#line 3270 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 802 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_list:variable_list COMMA variable\n";}
#line 3276 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 803 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_list:variable\n";
										
										}
#line 3284 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 806 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ',' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3290 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 809 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout <<"variable:  IDENTIFIER array_tag initializer \n";
											 var=new Array((yyvsp[-1].r.text),arrayAlloc.size(),NULL);
											(dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
											 arrayList.push_back( ( dynamic_cast<Array*>(var)));
											 arrayAlloc.clear();
											}
#line 3302 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 816 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
											cout <<"variable:  IDENTIFIER main_initializer \n";
											idsList.push_back((yyvsp[-1].r.text)) ;
											IdentifierNode* identifierNode=new IdentifierNode((yyvsp[-1].r.text),scoop);
											if((yyvsp[0].r.node)!=NULL){
											(dynamic_cast<AssignNode*>((yyvsp[0].r.node)))->setLeftExp(identifierNode);
											}
											declarationList.push_back(make_pair((yyvsp[-1].r.text),(yyvsp[0].r.node)));
											}
#line 3316 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 825 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3322 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 828 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"return_statement: RETURN expr\n";
												 (yyval.r.node)=new ReturnNode(scoop,(yyvsp[-1].r.node));
												}
#line 3330 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 833 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: for_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3338 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 836 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3346 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 839 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: do_while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3354 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 844 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"do_while: do_header   statement   while_loop_header   SEMI_COMMA\n";
													(yyval.r.node)=new DoWhileNode((yyvsp[-1].r.node),(yyvsp[-2].r.node),scoop);
													}
#line 3362 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 849 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"do_header: DO\n";}
#line 3368 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 852 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3389 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 871 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer	SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-5].r.node),(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										//nodeXX=$<r.node>5;
										}
#line 3398 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 877 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3406 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 881 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3414 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 885 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),(yyvsp[-2].r.node),NULL,NULL,scoop);
										}
#line 3422 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 890 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-3].r.node),NULL,NULL,NULL,scoop);
										}
#line 3430 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 894 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA				CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-1].r.node),NULL,NULL,scoop);
										}
#line 3438 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 898 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P";
										(yyval.r.node)=new ForNode(NULL,NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3446 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 903 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_hearder: FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	\n";
											(yyval.r.node)=new ForNode(NULL,NULL,NULL,NULL,scoop);
											}
#line 3454 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 908 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: INT IDENTIFIER EQUAL expr\n";
											AssignNode * temp=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
											
											//temp->add($<r.text>2,);
											
											//temp.push_back(make_pair($<r.text>2,$<r.node>4));
											DeclerationNode* temp1=new DeclerationNode(list<pair<string,Node*>>(),scoop,"int");
											temp1->add((yyvsp[-2].r.text),temp);
										 (yyval.r.node)=temp1; 
										 idsList.push_back((yyvsp[-2].r.text));
										}
#line 3470 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 919 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: IDENTIFIER EQUAL expr\n";
										(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
										}
#line 3478 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 922 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: IDENTIFIER\n";
										(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
										}
#line 3486 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 927 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr LESS_THAN expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_THAN,scoop);
										}
#line 3494 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 930 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr MORE_THAN expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_THAN,scoop);
										}
#line 3502 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 933 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_OR_EQUAL,scoop);
										}
#line 3510 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 936 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_OR_EQUAL,scoop);
										}
#line 3518 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 939 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr EQUAL_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),EQUAL_EQUAL,scoop);
										}
#line 3526 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 942 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:NOT_EQUAL expr\n";
										 (yyval.r.node)=new UnaryNode(scoop,(yyvsp[0].r.node),NOT_EQUAL);
										}
#line 3534 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 945 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";
										 (yyval.r.node)=(yyvsp[-1].r.node);
										}
#line 3542 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 948 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"logic_expr:logic_expr AND_AND logic_expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),AND_AND,scoop);
										}
#line 3551 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 952 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:logic_expr OR_OR logic_expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),OR_OR,scoop);
										}
#line 3559 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 955 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:TRUE\n";
										 (yyval.r.node)=new ConstantNode(true,scoop);
										}
#line 3567 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 958 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:FALSE\n";
											 (yyval.r.node)=new ConstantNode(false,scoop);
										}
#line 3575 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 963 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"expr:assign_expr\n";
										 (yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3583 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 966 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"expr:simple_expr\n";
										(yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3591 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 971 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"assign_expr:long_id EQUAL simple_expr\n";
										//LongIdHelper::checkIdenentifier( scoop, interface,"set1");
										(yyval.r.node)=new AssignNode(scoop,(yyvsp[-2].r.node),(yyvsp[0].r.node));
										}
#line 3601 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 978 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"long_id: long_id.IDENTIFIER\n";LongIdHelper::addIdentifier((yyvsp[-2].r.text));}
#line 3607 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 979 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"long_id: long_id.message_call\n";}
#line 3613 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 980 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																LongIdHelper::addIdentifier((yyvsp[0].r.text)); 
																(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
																cout<<"long_id:IDENTIFIER\n";
															   }
#line 3623 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 990 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:STRING_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.string_val,scoop);
									}
#line 3631 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 993 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"simple_expr:INT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.int_val,scoop);
									}
#line 3640 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 997 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:FLOAT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.float_val,scoop);
									}
#line 3648 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1000 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:CHAR_VAL\n";
										(yyval.r.node)=new ConstantNode(yylval.r.char_val,scoop);
									}
#line 3656 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1003 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:long_id\n";
									//$<r.node>$=new ConstantNode(yylval.r.char_val,scoop);
									}
#line 3664 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1006 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"simple_expr:expr PLUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),PLUS,scoop);
									}
#line 3673 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1010 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"simple_expr:expr MINUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MINUS,scoop);
									}
#line 3682 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1014 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:expr MULTI expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MULTI,scoop);
									}
#line 3690 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1017 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"simple_expr:expr DIV expr\n";
									(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),DIV,scoop);
									}
#line 3699 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1021 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:OPEN_P expr CLOSE_P\n";}
#line 3705 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1022 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:ID++";}
#line 3711 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1023 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:ID--";}
#line 3717 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1024 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:++ID";}
#line 3723 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1025 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:--ID";}
#line 3729 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1026 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"expr:p_type expr\n";
																if(type!=NULL)
																(yyval.r.node)=new CastNode(scoop,type,(yyvsp[0].r.node));
															}
#line 3739 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1033 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";}
#line 3745 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1036 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"sender: message_call\n";}
#line 3751 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1037 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"sender: IDENTIFIER\n";
											(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
											}
#line 3759 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1042 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"message: IDENTIFIER\n";
											(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);	
											}
#line 3767 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1045 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"message: IDENTIFIER SEMI_COLUMN argument_list\n";}
#line 3773 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1048 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"argument_list: argument_list argument\n";}
#line 3779 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1049 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"argument_list: argument\n";}
#line 3785 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1052 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"argument: SEMI_COLUMN expr\n";}
#line 3791 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1053 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"argument: IDENTIFIER SEMI_COLUMN expr\n";}
#line 3797 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1056 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"while_loop:while_loop_header statement\n";
											 (yyval.r.node)=new WhileNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop);
										}
#line 3806 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1062 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3814 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1067 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"conditional_statement: if_header statement\n";
												 (yyval.r.node)=new IfNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop,NULL);
												}
#line 3822 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1070 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"conditional_statement: if_header statement with else\n";
												 (yyval.r.node)=new IfNode((yyvsp[-3].r.node),(yyvsp[-2].r.node),scoop,new ElseNode((yyvsp[0].r.node),scoop));
												}
#line 3831 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1074 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"conditional_statement: switch_header switch_body statement\n";
											(yyval.r.node)=new SwitchNode(tempSwitch);
										}
#line 3839 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1079 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3847 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1084 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"switch_header: SWITCH OPEN_P IDENTIFIER CLOSE_P\n";
										
										tempSwitch->setExpr(new IdentifierNode((yyvsp[-2].r.text),scoop));
									}
#line 3856 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1090 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cscoop=scoop;scoop=new ScoopNode(cscoop);tempSwitch=new SwitchNode(NULL,std::list<pair<Node*,Node*>>(),scoop);}
#line 3862 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1093 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3868 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1094 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3874 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1095 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3880 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1096 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3886 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1099 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3892 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1100 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3898 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1103 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-4].r.node),(yyvsp[-2].r.node));}
#line 3904 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1104 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-2].r.node),(yyvsp[0].r.node));}
#line 3910 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1105 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-3].r.node),NULL);}
#line 3916 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1108 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-2].r.node));}
#line 3922 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1109 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[0].r.node));}
#line 3928 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1110 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-1].r.node));}
#line 3934 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1112 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"protocol: protocol_header protocol_body\n";
										idsList.clear();
										methodsList.clear();
										method=NULL;
										}
#line 3945 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1120 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";
								protocol=ProtocolHelper ::createNewProtocol((yyvsp[0].r.text),symbolTable );
								
								}
#line 3955 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1127 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	protocol_reference_list interface_declaration_list	AT_END\n";
								ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								idsList.clear();
								}
#line 3967 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1135 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	interface_declaration_list	AT_END\n";
									
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								
								}
#line 3979 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1143 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	protocol_reference_list AT_END	\n";
											ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								idsList.clear();
								}
#line 3989 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1149 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"protocol_body:	AT_END\n";}
#line 3995 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1151 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"enum: ENUM IDENTIFIER  OPEN_S list_expr CLOSE_S SEMI_COMA  \n";
																
																EnumHelper::createNewEnum( (yyvsp[-4].r.text),idsList, symbolTable);
																idsList.clear();
															 }
#line 4006 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1157 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"enum: ENUM IDENTIFIER SEMI_COMA\n";
																EnumHelper::createNewEnum( (yyvsp[-1].r.text),idsList, symbolTable);
															  }
#line 4015 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1164 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"list_expr:IDENTIFIER EQUAL expr COMMA list_expr\n";
												idsList.push_back((yyvsp[-4].r.text));
													(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-4].r.text),scoop),(yyvsp[-2].r.node));
												}
#line 4025 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1169 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"list_expr:IDENTIFIER EQUAL expr\n";
												idsList.push_back((yyvsp[-2].r.text));
												(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
												}
#line 4035 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1174 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"list_expr:IDENTIFIER \n";
													idsList.push_back((yyvsp[0].r.text));
													//??
												}
#line 4045 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1179 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  cout<<"list_expr:IDENTIFIER  COMMA list_expr \n";
												  idsList.push_back((yyvsp[-2].r.text));
												  //??
												}
#line 4055 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1186 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  cout<<"try_catch:TRY statement catch_list finally_statement \n";
												}
#line 4063 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1190 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {				  
								cout<<"try_catch:TRY statement catch_list \n";
							  }
#line 4071 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1195 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"catch_list:CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4077 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1196 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"catch_list:catch_list CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4083 "yacc.cpp" /* yacc.c:1646  */
    break;


#line 4087 "yacc.cpp" /* yacc.c:1646  */
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
#line 1201 "D:\\Projects\\compiler\\compiler CG15-4\\compiler CG15-4\\compiler\\compiler\\yacc.y" /* yacc.c:1906  */

void yyerror(const char *s) {
	fprintf (stderr, "%s\n", s);
	;
}

int yylex(){
	return lexer->yylex();

}
void main(void){
freopen("code.txt","r",stdin);
    //yydebug=1;
	Parser* p = new Parser();
	p->parse();
	symbolTable->toString();
	/*for(int i=0;i<scoopVector.size();i++)
	scoopVector.at(i)->toString();*/
	Program::printErrors();
	ofs<<".globl main\nmain:\n";
	//ConstantNode * temp =new ConstantNode(5,NULL);
	//method->getF()->generate_code();
	symbolTable->generateCode();

//	functionNode->toString();
	//functionNode->generate_code();
}

