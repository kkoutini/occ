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
#line 5 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:339  */

	#include <iostream>
	#include <FlexLexer.h>
	#include <string>
	#include "ast\node.h"
	#include "ST\SymbolTable.h"
	#include "ast\ConstantNode.h"
	#include "CallNode.h"
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
	Selector* tselector=NULL;
	vector <Selector *> selectorsList;
	vector <Variable *> selectorVarList;

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

#line 141 "yacc.cpp" /* yacc.c:339  */

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
#line 145 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:355  */

#include "ast\node.h"

#line 175 "yacc.cpp" /* yacc.c:355  */

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
#line 148 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:355  */

	
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
	   

#line 274 "yacc.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 289 "yacc.cpp" /* yacc.c:358  */

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
#define YYLAST   919

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  264
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  478

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
       0,   178,   178,   181,   182,   184,   185,   186,   187,   188,
     190,   200,   204,   209,   210,   212,   214,   220,   224,   229,
     234,   238,   240,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   258,   265,   268,   272,   277,   278,   282,
     283,   284,   285,   286,   287,   290,   291,   294,   295,   296,
     299,   302,   310,   321,   322,   323,   328,   331,   334,   338,
     342,   346,   347,   350,   356,   357,   358,   360,   368,   375,
     379,   385,   386,   387,   388,   389,   390,   391,   392,   395,
     396,   397,   401,   402,   403,   404,   408,   417,   428,   437,
     448,   457,   465,   473,   481,   489,   499,   510,   515,   519,
     520,   523,   527,   533,   536,   538,   542,   547,   553,   561,
     562,   566,   573,   578,   579,   582,   589,   596,   603,   607,
     609,   615,   623,   629,   633,   642,   655,   658,   663,   669,
     675,   678,   684,   687,   688,   691,   692,   695,   703,   710,
     719,   728,   734,   741,   748,   762,   766,   772,   777,   786,
     790,   794,   800,   809,   812,   816,   818,   821,   830,   836,
     842,   849,   853,   854,   857,   860,   867,   876,   879,   884,
     887,   890,   895,   900,   903,   921,   927,   931,   935,   940,
     944,   948,   953,   959,   970,   973,   978,   981,   984,   987,
     990,   993,   996,   999,  1003,  1006,  1009,  1014,  1017,  1022,
    1029,  1030,  1034,  1044,  1047,  1051,  1054,  1057,  1060,  1064,
    1068,  1071,  1075,  1076,  1077,  1078,  1079,  1080,  1087,  1093,
    1101,  1104,  1109,  1113,  1119,  1120,  1123,  1128,  1135,  1141,
    1146,  1149,  1153,  1158,  1163,  1169,  1172,  1173,  1174,  1175,
    1178,  1179,  1182,  1183,  1184,  1187,  1188,  1189,  1191,  1199,
    1205,  1213,  1221,  1227,  1230,  1236,  1243,  1248,  1253,  1258,
    1265,  1269,  1274,  1275,  1278
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
  "message_call2", "message_call", "sender", "message", "argument_list",
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

#define YYPACT_NINF -330

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-330)))

#define YYTABLE_NINF -65

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-65)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     125,    36,    25,    52,    58,   100,   112,    68,     8,  -330,
    -330,   517,   114,  -330,  -330,   347,  -330,   369,  -330,  -330,
    -330,   160,   177,   238,  -330,  -330,  -330,  -330,   648,   191,
    -330,    29,    29,  -330,   143,   130,   205,  -330,  -330,  -330,
     170,  -330,    29,    29,   337,  -330,   407,  -330,  -330,   194,
    -330,   194,  -330,   425,   439,  -330,   137,   219,  -330,   228,
     206,  -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,
     404,  -330,   282,   283,   388,  -330,   195,   195,  -330,   335,
    -330,  -330,  -330,  -330,  -330,    73,   316,   404,   292,    19,
     325,  -330,   292,   324,   467,  -330,   235,   246,  -330,  -330,
     298,  -330,  -330,  -330,   195,   159,   330,  -330,   195,   292,
    -330,   292,  -330,  -330,   474,  -330,  -330,  -330,  -330,   375,
    -330,  -330,   493,  -330,  -330,  -330,  -330,     3,   358,  -330,
     344,   304,   327,  -330,  -330,  -330,   195,   329,    16,    13,
    -330,  -330,   391,  -330,   374,   380,   187,  -330,  -330,   316,
    -330,   406,  -330,  -330,   524,  -330,  -330,   319,  -330,  -330,
    -330,  -330,  -330,   155,   398,  -330,   210,   196,  -330,  -330,
    -330,  -330,   206,  -330,   404,   397,   403,   408,  -330,   410,
     443,  -330,   851,   581,   444,   373,  -330,  -330,   435,  -330,
    -330,  -330,  -330,  -330,  -330,   581,  -330,   581,   448,    64,
       6,   450,  -330,   581,  -330,   581,     5,  -330,  -330,  -330,
     228,   851,   455,    16,   286,  -330,  -330,   110,  -330,  -330,
    -330,   223,  -330,   405,  -330,   468,   469,  -330,  -330,  -330,
    -330,  -330,  -330,  -330,  -330,  -330,  -330,   434,   462,  -330,
     296,  -330,   251,   373,   291,   753,   753,   472,   124,  -330,
     677,  -330,  -330,  -330,  -330,   478,   483,   851,   485,  -330,
      64,   226,  -330,   431,   491,   329,   239,   224,  -330,  -330,
    -330,   446,  -330,  -330,   851,   499,  -330,  -330,   504,  -330,
    -330,   452,  -330,   851,   508,  -330,    24,  -330,   498,  -330,
     502,  -330,  -330,  -330,   470,  -330,   473,  -330,   329,  -330,
    -330,   374,   503,  -330,  -330,  -330,   528,  -330,   247,   506,
     536,   710,   535,   641,   851,  -330,  -330,   297,   318,   426,
     523,  -330,  -330,    89,   492,   362,  -330,  -330,   226,  -330,
     851,   851,   851,   851,   537,   209,  -330,   511,   851,   511,
    -330,   373,  -330,   373,   543,   226,  -330,   550,   507,   581,
     551,   461,  -330,  -330,   540,  -330,   228,  -330,    12,  -330,
    -330,  -330,   851,   519,   257,   179,   721,   505,   362,  -330,
    -330,   753,   753,   851,   851,   851,   851,   851,  -330,   542,
    -330,   269,   269,  -330,  -330,   404,   546,   581,  -330,   547,
    -330,  -330,  -330,  -330,  -330,  -330,   858,  -330,  -330,   521,
     557,   520,  -330,  -330,   522,   525,  -330,   851,  -330,   548,
     764,   796,   208,  -330,   340,   340,  -330,  -330,  -330,  -330,
    -330,  -330,  -330,   569,   404,  -330,   299,  -330,   573,  -330,
     858,  -330,   570,   531,  -330,   571,  -330,  -330,  -330,  -330,
    -330,   565,  -330,   566,   808,   567,   590,   785,  -330,   578,
     580,   851,  -330,  -330,   585,  -330,  -330,  -330,  -330,   572,
     581,   583,   584,   588,  -330,   844,  -330,  -330,  -330,  -330,
     581,   844,   589,  -330,  -330,  -330,   844,  -330
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       5,     0,     0,     8,     6,     0,     7,     0,     9,    13,
      14,    12,   128,     0,   249,    70,     1,     3,     0,     0,
      23,     0,     0,    10,     0,     0,     0,   108,   109,   110,
       0,   132,     0,     0,     0,   126,     0,   134,   135,     0,
     136,     0,   253,     0,     0,   248,     0,     0,   255,     0,
       0,    93,    92,    91,    95,    90,    55,    54,    53,    46,
       0,    94,     0,     0,     0,    48,    49,     0,    52,     0,
      84,    85,    82,    83,    36,     0,   119,     0,     0,     0,
     118,   121,     0,     0,    26,    20,     0,     0,    31,    21,
       0,    32,    22,   107,     0,     0,     0,    68,    56,     0,
     139,     0,   142,   130,     0,   131,   133,   144,   137,     0,
     140,   252,     0,   251,    15,    11,   127,   258,     0,    96,
       0,    88,    86,    45,    47,    51,    50,    62,     0,     0,
      61,    34,     0,    33,     0,     0,     0,   114,   112,     0,
     120,     0,   116,    24,     0,    28,    17,     0,    29,    18,
      30,    19,    69,     0,    80,    73,     0,     0,    67,   138,
     141,   129,   202,   146,     0,     0,     0,     0,   173,     0,
       0,   218,     0,     0,     0,     0,   153,   143,     0,   148,
     156,   152,   154,   149,   171,     0,   169,     0,     0,     0,
       0,   201,   170,     0,   150,     0,     0,   161,   155,   250,
       0,     0,     0,     0,     0,    89,    87,     0,    65,    99,
      66,     0,    57,     0,    35,     0,   122,   124,   117,   113,
     111,   115,    25,    27,    16,    77,    81,     0,     0,    71,
       0,    74,     0,     0,     0,     0,     0,     0,    88,   202,
       0,   203,   205,   206,   204,     0,     0,     0,     0,   197,
     207,   198,   201,     0,     0,     0,   106,     0,   163,   145,
     147,     0,   174,   151,     0,     0,   221,   220,     0,   157,
     228,   230,   239,     0,     0,   232,     0,   241,     0,   259,
     257,   254,    63,    58,     0,   102,    97,    59,     0,    60,
     125,     0,     0,    79,    75,    78,     0,    72,     0,   185,
       0,     0,     0,     0,     0,   195,   196,     0,     0,     0,
       0,   213,   214,   202,   207,     0,   215,   216,   217,   168,
       0,     0,     0,     0,     0,   261,   158,   104,     0,   104,
     166,     0,   159,     0,     0,   199,   200,   222,     0,     0,
       0,     0,   237,   240,     0,   238,     0,   101,     0,   123,
      76,   160,     0,     0,     0,     0,     0,     0,   198,   191,
     229,     0,     0,     0,     0,     0,     0,     0,   233,     0,
     212,   208,   209,   210,   211,     0,     0,     0,   260,     0,
     167,   105,   165,   164,   162,   172,     0,   219,   231,     0,
       0,   246,   236,   256,     0,     0,   184,     0,   182,     0,
       0,     0,     0,   192,   193,   194,   186,   187,   188,   189,
     190,   235,   234,     0,     0,   264,     0,   103,   202,   226,
     223,   225,     0,   243,   247,     0,   100,    98,   183,   181,
     180,     0,   179,     0,     0,     0,     0,     0,    38,     0,
      40,     0,   224,   244,     0,   245,   176,   177,   178,     0,
       0,     0,    41,     0,    37,     0,   227,   242,   175,   262,
       0,     0,    43,    39,   263,    44,     0,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -330,  -330,  -330,   593,  -330,  -330,  -330,   591,  -330,  -330,
    -329,     4,  -330,   532,   533,  -330,  -330,   -22,   479,   389,
    -330,  -330,  -330,  -164,   -28,  -330,  -330,  -330,  -330,  -132,
    -330,  -330,   272,  -330,    90,    15,  -330,  -330,   -27,    18,
    -330,   526,  -330,   312,  -330,  -330,  -330,   574,   -39,  -330,
    -330,  -330,  -330,   145,  -330,  -330,  -330,  -160,  -330,  -330,
     371,    81,  -330,  -330,  -330,  -330,  -330,  -330,  -330,  -214,
     -98,   -94,  -118,  -211,  -330,  -105,  -330,  -330,  -330,   185,
    -330,   346,  -330,  -330,  -330,  -330,  -330,  -330,   333,   334,
    -330,  -330,  -330,    88,  -208,  -330,  -330,  -330
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    33,    34,    85,   427,
     449,    35,    74,    75,    76,    77,   106,    78,   139,   140,
     108,    12,    13,   166,   185,    80,    81,    82,    83,   218,
     296,   219,   390,   340,    36,    37,    38,    39,   257,    89,
      90,    91,   226,   227,    14,    15,    45,    46,    47,    48,
      49,    50,    51,   186,   119,   187,   188,   189,   190,   191,
     267,   268,   192,   193,   194,   195,   196,   197,   312,   317,
     318,   259,   260,   261,   200,   262,   278,   348,   430,   431,
     202,   203,   204,   205,   206,   422,   285,   286,   287,   288,
      16,    17,    55,   207,   128,   208,   335,   388
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,   199,   289,   242,    88,    92,   221,   116,    -2,     1,
     276,     2,    79,   404,   201,   109,   111,   220,   107,    44,
     147,   210,   282,   263,   222,   198,    20,   -64,   270,    21,
     148,   223,   319,    86,   -64,   271,     3,   272,    96,   325,
      19,   352,   130,   280,   211,   281,   328,   405,    79,    79,
      93,   103,   283,   284,   135,    87,    22,   181,     4,   145,
     110,   112,    23,   345,     5,   199,     6,   217,    26,   103,
     199,   283,   284,   303,   141,   116,    79,   199,   201,   199,
      79,   292,   162,   201,   258,   199,   168,   199,    18,   198,
     201,   142,   201,   143,   198,   277,    18,   365,   201,   367,
     201,   198,   368,   198,    24,   274,   146,    54,    79,   198,
     151,   198,   103,   290,   135,   103,    25,   225,   463,   381,
     382,   383,   384,   275,    97,   100,     1,   169,     2,   170,
      40,    98,   324,   337,   339,    58,   473,   103,   124,   324,
      59,   125,   475,   122,    94,   294,   243,   477,   403,   321,
     322,    99,   412,     3,    31,    32,   324,   414,   415,    28,
     163,   215,   295,   164,    95,    56,   235,    31,    32,   103,
     165,   104,   103,   236,    60,     4,    61,    62,    63,    64,
      65,     5,    57,     6,   154,   350,   157,   105,   229,   398,
     410,   401,    70,    71,   118,    84,   120,   240,   230,    60,
     164,    61,    62,    63,    64,    65,   101,   241,   371,   372,
     117,   238,   324,   324,   324,   324,   369,    70,    71,   444,
      72,   239,   145,   126,   297,   341,   102,   425,    73,    31,
      32,   199,   127,   199,   -63,   342,   155,   371,   372,   433,
     391,   -63,   343,   129,   201,    72,   201,   158,   341,    58,
     330,   331,   306,    73,    59,   198,   156,   198,   361,    31,
      32,   249,   307,   332,   406,   343,   409,   159,   333,   199,
      31,    32,   386,   387,   225,   416,   417,   418,   419,   420,
     338,   199,   201,   250,   408,   145,   131,   132,   251,   252,
     217,   253,   254,   198,   201,   309,    86,   293,   429,   160,
     469,   310,   311,   249,   223,   198,   332,   305,   181,   438,
     474,   333,   441,   443,   236,   447,   448,   255,   256,   161,
     233,   144,    31,    32,   370,   250,   371,   372,   450,   149,
     251,   252,   429,   253,   254,   152,   137,   373,   374,   138,
     234,   215,   199,    31,    32,   137,   459,   167,   213,   450,
     181,   375,   199,   466,   376,   201,   377,   423,   113,   255,
     256,    42,    43,    28,   216,   201,   198,   450,    41,   -65,
     -65,    42,    43,   450,   265,   212,   198,   266,   450,   172,
     217,    61,    62,    63,    64,    65,   330,   331,    29,   380,
      52,   117,   173,    31,    32,   224,   446,   174,    71,   332,
      87,    66,    67,    68,   333,   133,   298,   228,    60,   213,
      61,    62,    63,    64,    65,   175,   237,   231,   176,   177,
     178,   179,   393,   244,   394,   180,   181,    71,   115,   245,
     182,    42,    43,    73,   246,   302,   247,   183,   164,   172,
     184,    61,    62,    63,    64,    65,   121,   248,   264,    31,
      32,   117,   269,   378,    72,   371,   372,   174,    71,   273,
     123,   279,    73,    31,    32,   172,   291,    61,    62,    63,
      64,    65,   300,   304,   301,   175,   320,   117,   176,   177,
     178,   179,   326,   174,    71,   180,   181,   327,   153,   176,
     182,    31,    32,    73,   334,   171,   329,   183,    42,    43,
     184,   175,   336,   346,   176,   177,   178,   179,   347,   349,
     400,   180,   181,   351,   209,   355,   182,    31,    32,    73,
     356,   236,   357,   183,   358,   172,   184,    61,    62,    63,
      64,    65,   413,    28,   371,   372,    29,   117,    30,   360,
     363,    31,    32,   174,    71,   232,   366,   362,    31,    32,
     379,   275,   389,   385,   395,   396,   399,   402,   421,   397,
     407,   175,   424,   426,   176,   177,   178,   179,   434,   435,
     432,   180,   181,   445,   436,   439,   182,   437,   451,    73,
     454,   453,   455,   183,   460,   172,   184,    61,    62,    63,
      64,    65,   456,   457,   461,   464,   467,   117,   465,   468,
     470,    27,   471,   174,    71,   472,   134,   476,    53,   214,
     136,   392,   299,   359,   308,   452,   150,   344,   114,   353,
     354,   175,     0,     0,   176,   177,   178,   179,     0,     0,
       0,   180,   181,     0,     0,     0,   182,     0,     0,    73,
       0,     0,     0,   183,     0,   323,   184,    61,    62,    63,
      64,    65,    60,     0,    61,    62,    63,    64,    65,     0,
       0,    66,    67,    68,    71,    69,     0,   313,     0,     0,
      70,    71,   251,   252,     0,   253,   254,     0,     0,     0,
     314,   323,     0,    61,    62,    63,    64,    65,     0,     0,
       0,    72,   181,     0,   315,   316,     0,     0,    72,    73,
      71,   255,   256,   250,     0,     0,    73,     0,   251,   252,
       0,   253,   254,     0,   249,     0,     0,     0,     0,     0,
       0,   364,     0,     0,     0,   249,     0,    72,   181,     0,
       0,     0,   411,     0,     0,    73,   313,   255,   256,     0,
       0,   251,   252,     0,   253,   254,     0,   313,     0,   314,
       0,     0,   251,   252,     0,   253,   254,   249,     0,     0,
     314,   181,     0,   315,   316,     0,     0,     0,   249,     0,
     255,   256,   181,     0,   315,   316,     0,     0,     0,   313,
       0,   255,   256,     0,   251,   252,     0,   253,   254,   249,
     250,   440,   314,     0,     0,   251,   252,     0,   253,   254,
     249,   447,   462,     0,   181,     0,   315,   316,     0,     0,
       0,   250,   249,   255,   256,   181,   251,   252,     0,   253,
     254,     0,   250,   442,   255,   256,     0,   251,   252,     0,
     253,   254,     0,     0,   250,   458,   181,     0,     0,   251,
     252,     0,   253,   254,     0,   255,   256,   181,   249,     0,
       0,     0,     0,     0,     0,   249,   255,   256,     0,   181,
     447,     0,   428,     0,     0,     0,     0,     0,   255,   256,
     250,     0,     0,     0,     0,   251,   252,   250,   253,   254,
       0,     0,   251,   252,   250,   253,   254,     0,     0,   251,
     252,     0,   253,   254,     0,   181,     0,     0,     0,     0,
       0,     0,   181,     0,   255,   256,     0,     0,     0,   181,
       0,   255,   256,     0,     0,     0,     0,     0,   255,   256
};

static const yytype_int16 yycheck[] =
{
      28,   119,   210,   167,    31,    32,   138,    46,     0,     1,
       4,     3,    40,     1,   119,    42,    43,     1,    40,    15,
       1,    18,    17,   183,    11,   119,     1,    11,   188,     4,
      11,    18,   246,     4,    18,   195,    28,   197,    34,   250,
       4,    17,    70,   203,    41,   205,   257,    35,    76,    77,
      32,    36,    47,    48,    76,    26,     4,    51,    50,    87,
      42,    43,     4,   274,    56,   183,    58,    51,     0,    54,
     188,    47,    48,   237,     1,   114,   104,   195,   183,   197,
     108,   213,   104,   188,   182,   203,   108,   205,     0,   183,
     195,    18,   197,    20,   188,   200,     8,   311,   203,   313,
     205,   195,   313,   197,     4,    41,    88,    17,   136,   203,
      92,   205,    97,   211,   136,   100,     4,   144,   447,   330,
     331,   332,   333,    59,    34,    35,     1,   109,     3,   111,
      16,     1,   250,   265,   266,    11,   465,   122,     1,   257,
      16,     4,   471,    53,     1,    35,   174,   476,   356,    60,
      61,    21,   366,    28,    24,    25,   274,   371,   372,    16,
       1,    37,    52,     4,    21,     5,    11,    24,    25,   154,
      11,     1,   157,    18,     4,    50,     6,     7,     8,     9,
      10,    56,     5,    58,    94,   283,    96,    17,     1,   349,
      11,   351,    22,    23,    49,     4,    51,     1,    11,     4,
       4,     6,     7,     8,     9,    10,     1,    11,    29,    30,
      16,     1,   330,   331,   332,   333,   314,    22,    23,    11,
      50,    11,   250,     4,     1,     1,    21,   387,    58,    24,
      25,   349,     4,   351,    11,    11,     1,    29,    30,   399,
     338,    18,    18,    37,   349,    50,   351,     1,     1,    11,
      24,    25,     1,    58,    16,   349,    21,   351,    11,    24,
      25,     4,    11,    37,   362,    18,   364,    21,    42,   387,
      24,    25,    63,    64,   301,   373,   374,   375,   376,   377,
      41,   399,   387,    26,    27,   313,     4,     4,    31,    32,
      51,    34,    35,   387,   399,     4,     4,    11,   396,     1,
     460,    10,    11,     4,    18,   399,    37,    11,    51,   407,
     470,    42,   410,   411,    18,    16,    17,    60,    61,    21,
       1,     5,    24,    25,    27,    26,    29,    30,   426,     4,
      31,    32,   430,    34,    35,    11,     1,    19,    20,     4,
      21,    37,   460,    24,    25,     1,   444,    17,     4,   447,
      51,    33,   470,   451,    36,   460,    38,   385,    21,    60,
      61,    24,    25,    16,    37,   470,   460,   465,    21,    29,
      30,    24,    25,   471,     1,    17,   470,     4,   476,     4,
      51,     6,     7,     8,     9,    10,    24,    25,    19,    27,
      21,    16,    17,    24,    25,     4,   424,    22,    23,    37,
      26,    13,    14,    15,    42,    17,     1,    27,     4,     4,
       6,     7,     8,     9,    10,    40,    18,    11,    43,    44,
      45,    46,   341,    26,   343,    50,    51,    23,    21,    26,
      55,    24,    25,    58,    26,     1,    26,    62,     4,     4,
      65,     6,     7,     8,     9,    10,    21,     4,     4,    24,
      25,    16,    17,    27,    50,    29,    30,    22,    23,    11,
      21,    11,    58,    24,    25,     4,    11,     6,     7,     8,
       9,    10,     4,    11,     5,    40,     4,    16,    43,    44,
      45,    46,     4,    22,    23,    50,    51,     4,    21,    43,
      55,    24,    25,    58,    63,    21,    11,    62,    24,    25,
      65,    40,    11,     4,    43,    44,    45,    46,     4,    57,
      49,    50,    51,     5,    21,    17,    55,    24,    25,    58,
      18,    18,    52,    62,    51,     4,    65,     6,     7,     8,
       9,    10,    27,    16,    29,    30,    19,    16,    21,    11,
       4,    24,    25,    22,    23,    21,    11,    41,    24,    25,
      27,    59,    41,    16,    11,     5,     5,    17,    16,    52,
      41,    40,    16,    16,    43,    44,    45,    46,    11,    49,
      49,    50,    51,     4,    52,    27,    55,    52,     5,    58,
      49,    11,    11,    62,    17,     4,    65,     6,     7,     8,
       9,    10,    27,    27,     4,    17,    11,    16,    18,    27,
      17,     8,    18,    22,    23,    17,    74,    18,    17,   130,
      77,   339,   223,   301,   243,   430,    90,   271,    44,   286,
     286,    40,    -1,    -1,    43,    44,    45,    46,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    -1,    -1,    58,
      -1,    -1,    -1,    62,    -1,     4,    65,     6,     7,     8,
       9,    10,     4,    -1,     6,     7,     8,     9,    10,    -1,
      -1,    13,    14,    15,    23,    17,    -1,    26,    -1,    -1,
      22,    23,    31,    32,    -1,    34,    35,    -1,    -1,    -1,
      39,     4,    -1,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    50,    51,    -1,    53,    54,    -1,    -1,    50,    58,
      23,    60,    61,    26,    -1,    -1,    58,    -1,    31,    32,
      -1,    34,    35,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    -1,     4,    -1,    50,    51,    -1,
      -1,    -1,    11,    -1,    -1,    58,    26,    60,    61,    -1,
      -1,    31,    32,    -1,    34,    35,    -1,    26,    -1,    39,
      -1,    -1,    31,    32,    -1,    34,    35,     4,    -1,    -1,
      39,    51,    -1,    53,    54,    -1,    -1,    -1,     4,    -1,
      60,    61,    51,    -1,    53,    54,    -1,    -1,    -1,    26,
      -1,    60,    61,    -1,    31,    32,    -1,    34,    35,     4,
      26,    27,    39,    -1,    -1,    31,    32,    -1,    34,    35,
       4,    16,    17,    -1,    51,    -1,    53,    54,    -1,    -1,
      -1,    26,     4,    60,    61,    51,    31,    32,    -1,    34,
      35,    -1,    26,    27,    60,    61,    -1,    31,    32,    -1,
      34,    35,    -1,    -1,    26,    27,    51,    -1,    -1,    31,
      32,    -1,    34,    35,    -1,    60,    61,    51,     4,    -1,
      -1,    -1,    -1,    -1,    -1,     4,    60,    61,    -1,    51,
      16,    -1,     4,    -1,    -1,    -1,    -1,    -1,    60,    61,
      26,    -1,    -1,    -1,    -1,    31,    32,    26,    34,    35,
      -1,    -1,    31,    32,    26,    34,    35,    -1,    -1,    31,
      32,    -1,    34,    35,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    60,    61,    -1,    -1,    -1,    51,
      -1,    60,    61,    -1,    -1,    -1,    -1,    -1,    60,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    28,    50,    56,    58,    73,    74,    75,
      76,    77,    93,    94,   116,   117,   162,   163,   165,     4,
       1,     4,     4,     4,     4,     4,     0,    75,    16,    19,
      21,    24,    25,    78,    79,    83,   106,   107,   108,   109,
      16,    21,    24,    25,    83,   118,   119,   120,   121,   122,
     123,   124,    21,    79,   106,   164,     5,     5,    11,    16,
       4,     6,     7,     8,     9,    10,    13,    14,    15,    17,
      22,    23,    50,    58,    84,    85,    86,    87,    89,    96,
      97,    98,    99,   100,     4,    80,     4,    26,   110,   111,
     112,   113,   110,   111,     1,    21,    83,   106,     1,    21,
     106,     1,    21,   107,     1,    17,    88,    89,    92,   110,
     111,   110,   111,    21,   119,    21,   120,    16,   125,   126,
     125,    21,   106,    21,     1,     4,     4,     4,   166,    37,
      96,     4,     4,    17,    85,    89,    86,     1,     4,    90,
      91,     1,    18,    20,     5,    96,   111,     1,    11,     4,
     113,   111,    11,    21,   106,     1,    21,   106,     1,    21,
       1,    21,    89,     1,     4,    11,    95,    17,    89,   111,
     111,    21,     4,    17,    22,    40,    43,    44,    45,    46,
      50,    51,    55,    62,    65,    96,   125,   127,   128,   129,
     130,   131,   134,   135,   136,   137,   138,   139,   143,   144,
     146,   147,   152,   153,   154,   155,   156,   165,   167,    21,
      18,    41,    17,     4,    90,    37,    37,    51,   101,   103,
       1,   101,    11,    18,     4,   110,   114,   115,    27,     1,
      11,    11,    21,     1,    21,    11,    18,    18,     1,    11,
       1,    11,    95,    96,    26,    26,    26,    26,     4,     4,
      26,    31,    32,    34,    35,    60,    61,   110,   142,   143,
     144,   145,   147,   129,     4,     1,     4,   132,   133,    17,
     129,   129,   129,    11,    41,    59,     4,   147,   148,    11,
     129,   129,    17,    47,    48,   158,   159,   160,   161,   166,
     142,    11,   101,    11,    35,    52,   102,     1,     1,    91,
       4,     5,     1,    95,    11,    11,     1,    11,   132,     4,
      10,    11,   140,    26,    39,    53,    54,   141,   142,   141,
       4,    60,    61,     4,   144,   145,     4,     4,   145,    11,
      24,    25,    37,    42,    63,   168,    11,   101,    41,   101,
     105,     1,    11,    18,   153,   145,     4,     4,   149,    57,
     142,     5,    17,   160,   161,    17,    18,    52,    51,   115,
      11,    11,    41,     4,    11,   141,    11,   141,   145,   142,
      27,    29,    30,    19,    20,    33,    36,    38,    27,    27,
      27,   145,   145,   145,   145,    16,    63,    64,   169,    41,
     104,   142,   104,   133,   133,    11,     5,    52,   129,     5,
      49,   129,    17,   166,     1,    35,   142,    41,    27,   142,
      11,    11,   141,    27,   141,   141,   142,   142,   142,   142,
     142,    16,   157,    96,    16,   129,    16,    81,     4,   142,
     150,   151,    49,   129,    11,    49,    52,    52,   142,    27,
      27,   142,    27,   142,    11,     4,    96,    16,    17,    82,
     142,     5,   151,    11,    49,    11,    27,    27,    27,   142,
      17,     4,    17,    82,    17,    18,   142,    11,    27,   129,
      17,    18,    17,    82,   129,    82,    18,    82
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
     123,   124,   124,   125,   126,   127,   127,   128,   128,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   130,   131,
     131,   131,   132,   132,   132,   133,   133,   133,   134,   135,
     135,   135,   136,   137,   138,   139,   139,   139,   139,   139,
     139,   139,   139,   140,   140,   140,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   142,   142,   143,
     144,   144,   144,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   146,   147,
     148,   148,   149,   149,   150,   150,   151,   151,   152,   153,
     154,   154,   154,   155,   156,   157,   158,   158,   158,   158,
     159,   159,   160,   160,   160,   161,   161,   161,   162,   163,
     164,   164,   164,   164,   165,   165,   166,   166,   166,   166,
     167,   167,   168,   168,   169
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
       2,     3,     2,     2,     1,     2,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     2,     3,     3,
       4,     1,     3,     1,     3,     3,     2,     3,     3,     1,
       1,     1,     4,     1,     2,     8,     7,     7,     7,     6,
       6,     6,     5,     4,     3,     1,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     1,     4,
       1,     1,     1,     3,     2,     1,     1,     3,     2,     4,
       2,     4,     2,     4,     5,     1,     3,     2,     2,     1,
       2,     1,     6,     4,     5,     5,     3,     4,     2,     2,
       3,     2,     2,     1,     6,     3,     5,     3,     1,     3,
       4,     3,     6,     7,     2
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
#line 178 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"program: components\n"; 
										 }
#line 2042 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 181 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"components: components component\n";}
#line 2048 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 182 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"components: component\n";}
#line 2054 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 184 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface \n";}
#line 2060 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 185 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation \n";}
#line 2066 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 186 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"protocol \n";}
#line 2072 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 187 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct \n";}
#line 2078 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 188 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum \n";}
#line 2084 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 190 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface: class_interface_header class_interface_body\n";
																interface->setClassNode(classNode);
																classNode=NULL;
																 idsList.clear();
																 methodsList.clear();
																 method=NULL;
																}
#line 2096 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 200 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																				interface=InterfaceHelper::createNewInterface((yyvsp[-2].r.text),(yyvsp[0].r.text),symbolTable);
																				classNode=new ClassNode(NULL,interface);
																				}
#line 2105 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 204 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																					cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
																				 interface=InterfaceHelper::createNewInterface((yyvsp[0].r.text),"",symbolTable);
																				 	classNode=new ClassNode(NULL,interface);
																				}
#line 2115 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 209 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Unknown type name '"<<(yyvsp[-1].r.text)<<"' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2121 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 210 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2127 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 212 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2133 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 215 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
															
														InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2143 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 221 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														}
#line 2151 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 225 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	protocol_reference_list interface_declaration_list	AT_END\n";
														}
#line 2160 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 230 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2169 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 235 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														}
#line 2177 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 239 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_body:instance_variables		AT_END\n";}
#line 2183 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 241 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {														
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:interface_declaration_list	AT_END\n";
														}
#line 2192 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 245 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_body:AT_END\n";}
#line 2198 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 246 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2204 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 247 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2210 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 248 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2216 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 249 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2222 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 250 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2228 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 251 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2234 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 252 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2240 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 253 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2246 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 254 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2252 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 258 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													if(interface!=NULL){
													InterfaceHelper::addInheritedProtocol(interface,idsList,symbolTable);
														idsList.clear();
													}
													cout<<"protocol_reference_list: LESS_THAN ids_list_identifier MORE_THAN\n";
												}
#line 2264 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 265 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '>' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2270 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 268 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"ids_list:ids_list_identifier COMMA IDENTIFIER\n"; 
													idsList.push_back((yyvsp[0].r.text));
													}
#line 2279 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 272 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"ids_list_identifier:IDENTIFIER\n";
													idsList.push_back((yyvsp[0].r.text));
												    }
#line 2288 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 277 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array with body";}
#line 2294 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 278 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array without elements";}
#line 2300 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 282 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array-element \n";}
#line 2306 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 283 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array-element \n";}
#line 2312 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 284 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"empty element \n";}
#line 2318 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 285 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2324 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 286 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2330 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 287 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2336 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 290 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";}
#line 2342 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 291 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variables:OPEN_S	 CLOSE_S\n";}
#line 2348 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 294 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";}
#line 2354 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 295 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:instance_variable_declaration\n";}
#line 2360 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 296 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:variable_declaration_list\n";}
#line 2366 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 299 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declaration:visibility_specification variable_declaration_list\n";
																	}
#line 2373 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 303 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
											arrayList.clear();
												idsList.clear();
												flag=false;
										}
#line 2385 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 311 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										       InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
												arrayList.clear();
												idsList.clear();
												flag=false;
										cout<<"variable_declaration_list: variable_declaration\n";
										}
#line 2397 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 321 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PRIVATE\n";  visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2403 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 322 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PROTECTED\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2409 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 323 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PUBLIC\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2415 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 328 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct_variable_declaration:struct_declaration_list\n";}
#line 2421 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 331 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
	                                           (yyval.r.text)=(yyvsp[-2].r.text);
												}
#line 2429 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 334 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
													}
#line 2438 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 338 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2444 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 342 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"ids_list:ids_list COMMA id_dec\n"; 

									}
#line 2453 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 346 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"ids_list:id_dec\n"; }
#line 2459 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 347 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2465 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 350 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout <<" data_member: IDENTIFIER array_tag \n";
							 var=new Array((yyvsp[0].r.text),arrayAlloc.size(),NULL);
					       ( dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
						   arrayList.push_back( ( dynamic_cast<Array*>(var)));
						      arrayAlloc.clear();
							}
#line 2476 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 356 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {idsList.push_back((yyvsp[0].r.text)) ;cout <<" data_member: IDENTIFIER  \n";}
#line 2482 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 357 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2488 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 358 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2494 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 360 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {  
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																												idsList.clear();
																												flag=false;
																										  cout<<"struct_declaration_list: struct_declaration_list  variable_declarationxx\n";
																										}
#line 2506 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 368 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																														 	idsList.clear();
																															flag=false;
																										cout<<"struct_declaration_list:  variable_declarationxx\n";
																										}
#line 2518 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 375 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Illigal visibility specification at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2524 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 379 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
					myStruct=StructHelper::createNewStruct((yyvsp[0].r.text),symbolTable);
					cout<<"struct_header: STRUCT  IDENTIFIER\n";
					}
#line 2533 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 385 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S  entity SEMI_COMA\n";}
#line 2539 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 386 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S enteity SEMI_COMA \n";}
#line 2545 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 387 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S SEMI_COMA\n";}
#line 2551 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 388 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S  SEMI_COMA  \n";}
#line 2557 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 389 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2563 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 390 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2569 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 391 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2575 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 392 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2581 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 395 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"entity: IDENTIFIER COMMA  entity\n";}
#line 2587 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 396 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"entity:  IDENTIFIER \n";}
#line 2593 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 397 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2599 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 401 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type:simple type\n";}
#line 2605 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 402 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: complex type\n";}
#line 2611 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 403 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: struct_type\n";}
#line 2617 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 404 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: enum_type\n";}
#line 2623 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 408 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	cout<<"struct_type: STRUCT IDENTIFIER   \n";
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

  case 87:
#line 417 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct_type: STRUCT IDENTIFIER  MULTI \n";
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

  case 88:
#line 428 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum_type: ENUM IDENTIFIER \n";
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

  case 89:
#line 437 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum_type: ENUM IDENTIFIER  MULTI  \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																									string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2679 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 448 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"int type \n";
																type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
																}
#line 2693 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 457 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"char type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2706 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 465 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"float type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2719 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 473 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"NSString type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2732 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 481 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"void type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2745 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 489 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"bool type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2758 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 499 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 2773 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 510 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_tag: array_first_tag array_tag_list \n"; 
										   }
#line 2781 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 515 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"array_tag_list: array_tag_list OPEN_ARR INT_VAL CLOSE_ARR\n"; 
																arrayAlloc.push_back((yyvsp[-1].r.int_val));
														   }
#line 2790 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 520 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<" Error:missing  dimension in array tag  ";arrayAlloc.clear();}
#line 2796 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 523 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_first_tag: OPEN_ARR INT_VAL CLOSE_ARR\n"; 
											arrayAlloc.push_back((yyvsp[-1].r.int_val));
											}
#line 2805 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 527 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_first_tag: OPEN_ARR  CLOSE_ARR\n"; 
											arrayAlloc.push_back(-1);
											}
#line 2814 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 533 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							   }
#line 2822 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 538 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout <<"with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							 }
#line 2831 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 547 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
															 methodsList.push_back(method);
														
															 
																}
#line 2842 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 553 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																 cout<<"interface_declaration_list:interface_declaration\n";
															 methodsList.push_back(method);
															 
																 	
																 }
#line 2853 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 561 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"interface_declaration: class_method_declaration\n";}
#line 2859 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 562 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"interface_declaration: instance_method_declaration\n";}
#line 2865 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 566 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_method_declaration: PLUS p_type method_selectors	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,true);
															
																 selectorsList.clear();
																
																}
#line 2877 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 573 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_method_declaration: PLUS			 method_selectors	SEMI_COMA\n";
																		method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																}
#line 2887 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 578 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2893 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 579 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2899 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 582 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															cout<<"instance_method_declaration: MINUS p_type	method_selectors		SEMI_COMA\n";
															method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,false);
																 selectorsList.clear();
																
																
															}
#line 2911 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 589 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"instance_method_declaration: MINUS			 method_selectors	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																}
#line 2921 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 596 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.r.text)=(yyvsp[-1].r.text);
																}
#line 2930 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 603 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"method_selectors:IDENTIFIER SEMI_COLUMN selectors_list\n";
																	(yyval.r.text)="";
																}
#line 2939 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 607 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"method_selectors:IDENTIFIER \n";(yyval.r.text)=(yyvsp[0].r.text);}
#line 2945 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 609 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"selectors_list:	selectors_list selector_decleration\n";
																
													selectorsList.push_back(tselector);
													tselector=NULL;
											}
#line 2956 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 615 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"selectors_list:	 selector_decleration\n";
												selectorsList.clear();

												selectorsList.push_back(tselector);
												tselector=NULL;
}
#line 2968 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 623 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				cout<<"selector_decleration:	IDENTIFIER	SEMI_COLUMN	parameter_list	\n";
																				tselector=new Selector((yyvsp[-2].r.text),selectorVarList);
																			}
#line 2977 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 629 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"parameter_list: parameter_list parameter\n";
																	selectorVarList.push_back(var);		
											}
#line 2986 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 633 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									selectorVarList.clear();
										selectorVarList.push_back(var);		
											
				 
														cout<<"parameter_list:  parameter\n";
						
					}
#line 2999 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 642 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"parameter:  p_type IDENTIFIER\n";
																
																if(type!=NULL){
																var=new Variable((yyvsp[0].r.text),type);
																}
																else{
																cout<<"Error:Type not found.\n";
																}
																}
#line 3014 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 655 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation: class_implementation_header class_implementation_body\n";}
#line 3020 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 658 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																	interface=InterfaceHelper::checkImplementation((yyvsp[-2].r.text),symbolTable,(yyvsp[0].r.text));
																	
																}
#line 3030 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 663 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																interface=InterfaceHelper::checkImplementation((yyvsp[0].r.text),symbolTable,"");
																	
																}
#line 3039 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 669 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";
																			InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														}
#line 3049 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 675 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
																	cout<<"class_implementation_body: instance_variables									AT_END\n";
																}
#line 3057 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 678 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_body:						implementation_definition_list	AT_END\n";
																	InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														
																}
#line 3068 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 684 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation_body:	AT_END\n";}
#line 3074 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 687 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);cout<<"implementation_definition_list: implementation_definition_list implementation_definition\n";}
#line 3080 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 688 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);cout<<"implementation_definition_list: implementation_definition\n";}
#line 3086 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 691 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"implementation_definition: class_implementation_definition	\n";}
#line 3092 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 692 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"implementation_definition: instance_implementation_definition \n";}
#line 3098 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 695 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"class_implementation_definition: class_implementation_definition_header block_body";
														method->setFunctionNode(functionNode);
														functionNode=NULL;
													nodeXX=method;
													}
#line 3109 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 703 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"class_implementation_definition_header: PLUS p_type		 method_selectors\n";
															method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																
																
										}
#line 3121 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 710 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"class_implementation_definition_header:  PLUS			 method_selectors\n";
													 method =InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
									
										}
#line 3132 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 719 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															scoop=NULL;
															cscoop=NULL;
															cout<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";
															method->setFunctionNode(functionNode);
														functionNode=NULL;
															}
#line 3144 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 728 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											     cout<<"instance_implementation_definition_header:MINUS p_type		method_selectors\n";
												 method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
															
												}
#line 3155 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 734 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"instance_implementation_definition_header:MINUS 			method_selectors\n";
												 method =InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
												}
#line 3165 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 741 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												
												cout<<"block_body:OPEN_S  block_body_part \n";
												(yyval.r.node)=(yyvsp[-1].r.node);
												}
#line 3175 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 748 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3191 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 762 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												scoop=scoop->getParent();
												cout<<"block_body_statements:statement_list	CLOSE_S	\n";
												}
#line 3200 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 766 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												scoop=scoop->getParent();
												cout<<"block_body_statements:CLOSE_S\n";
												}
#line 3209 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 772 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement_list: statement_list statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3219 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 777 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement_list: statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											(yyval.r.node)=(yyvsp[0].r.node);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3230 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 786 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: loop_statement\n";
											(yyval.r.text)="loop";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3239 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 790 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: conditional_statement\n";
											(yyval.r.text)="cond";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3248 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 794 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"statement: expr\n";
												(yyval.r.text)="expr";
												(yyval.r.node)=(yyvsp[-1].r.node);
												//nodeXX=$<r.node>1;
											}
#line 3259 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 800 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"statement: variable_declaration\n";
											
												ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												(yyval.r.node)=(yyvsp[0].r.node);
										    }
#line 3273 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 809 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: block_body\n";(yyval.r.text)=new char[256];(yyval.r.text)[0]='\0';strcat((yyval.r.text),"Block");
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3281 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 812 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: return_statement\n";
												(yyval.r.text)="return";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3290 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 816 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: try_catch\n";}
#line 3296 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 818 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	                                            (yyval.r.text)="asm";
												(yyval.r.node)=(yyvsp[0].r.node);}
#line 3304 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 821 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	 (yyval.r.text)="call";
	(yyval.r.node)=(yyvsp[-1].r.node);
	}
#line 3313 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 830 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"@asm command \n";
	                                         (yyval.r.node)=new AsmNode(scoop,(yyvsp[-1].r.text));
											 }
#line 3321 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 836 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
														 (yyval.r.text)=(yyvsp[-2].r.text);
														 (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3332 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 842 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
														  (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3344 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 849 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:enum\n";}
#line 3350 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 853 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_list:variable_list COMMA variable\n";}
#line 3356 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 854 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_list:variable\n";
										
										}
#line 3364 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 857 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ',' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3370 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 860 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout <<"variable:  IDENTIFIER array_tag initializer \n";
											 var=new Array((yyvsp[-1].r.text),arrayAlloc.size(),NULL);
											(dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
											 arrayList.push_back( ( dynamic_cast<Array*>(var)));
											 arrayAlloc.clear();
											}
#line 3382 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 867 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
											cout <<"variable:  IDENTIFIER main_initializer \n";
											idsList.push_back((yyvsp[-1].r.text)) ;
											IdentifierNode* identifierNode=new IdentifierNode((yyvsp[-1].r.text),scoop);
											if((yyvsp[0].r.node)!=NULL){
											(dynamic_cast<AssignNode*>((yyvsp[0].r.node)))->setLeftExp(identifierNode);
											}
											declarationList.push_back(make_pair((yyvsp[-1].r.text),(yyvsp[0].r.node)));
											}
#line 3396 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 876 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3402 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 879 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"return_statement: RETURN expr\n";
												 (yyval.r.node)=new ReturnNode(scoop,(yyvsp[-1].r.node));
												}
#line 3410 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 884 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: for_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3418 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 887 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3426 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 890 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: do_while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3434 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 895 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"do_while: do_header   statement   while_loop_header   SEMI_COMMA\n";
													(yyval.r.node)=new DoWhileNode((yyvsp[-1].r.node),(yyvsp[-2].r.node),scoop);
													}
#line 3442 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 900 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"do_header: DO\n";}
#line 3448 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 903 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3469 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 922 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer	SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-5].r.node),(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										//nodeXX=$<r.node>5;
										}
#line 3478 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 928 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3486 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 932 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3494 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 936 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),(yyvsp[-2].r.node),NULL,NULL,scoop);
										}
#line 3502 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 941 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-3].r.node),NULL,NULL,NULL,scoop);
										}
#line 3510 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 945 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA				CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-1].r.node),NULL,NULL,scoop);
										}
#line 3518 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 949 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P";
										(yyval.r.node)=new ForNode(NULL,NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3526 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 954 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_hearder: FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	\n";
											(yyval.r.node)=new ForNode(NULL,NULL,NULL,NULL,scoop);
											}
#line 3534 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 959 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: INT IDENTIFIER EQUAL expr\n";
											AssignNode * temp=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
											
											//temp->add($<r.text>2,);
											
											//temp.push_back(make_pair($<r.text>2,$<r.node>4));
											DeclerationNode* temp1=new DeclerationNode(list<pair<string,Node*>>(),scoop,"int");
											temp1->add((yyvsp[-2].r.text),temp);
										 (yyval.r.node)=temp1; 
										 idsList.push_back((yyvsp[-2].r.text));
										}
#line 3550 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 970 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: IDENTIFIER EQUAL expr\n";
										(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
										}
#line 3558 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 973 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: IDENTIFIER\n";
										(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
										}
#line 3566 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 978 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr LESS_THAN expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_THAN,scoop);
										}
#line 3574 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 981 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr MORE_THAN expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_THAN,scoop);
										}
#line 3582 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 984 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_OR_EQUAL,scoop);
										}
#line 3590 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 987 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_OR_EQUAL,scoop);
										}
#line 3598 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 990 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr EQUAL_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),EQUAL_EQUAL,scoop);
										}
#line 3606 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 993 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:NOT_EQUAL expr\n";
										 (yyval.r.node)=new UnaryNode(scoop,(yyvsp[0].r.node),NOT_EQUAL);
										}
#line 3614 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 996 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";
										 (yyval.r.node)=(yyvsp[-1].r.node);
										}
#line 3622 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 999 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"logic_expr:logic_expr AND_AND logic_expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),AND_AND,scoop);
										}
#line 3631 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1003 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:logic_expr OR_OR logic_expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),OR_OR,scoop);
										}
#line 3639 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1006 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:TRUE\n";
										 (yyval.r.node)=new ConstantNode(true,scoop);
										}
#line 3647 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1009 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:FALSE\n";
											 (yyval.r.node)=new ConstantNode(false,scoop);
										}
#line 3655 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1014 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"expr:assign_expr\n";
										 (yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3663 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1017 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"expr:simple_expr\n";
										(yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3671 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1022 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"assign_expr:long_id EQUAL simple_expr\n";
										//LongIdHelper::checkIdenentifier( scoop, interface,"set1");
										(yyval.r.node)=new AssignNode(scoop,(yyvsp[-2].r.node),(yyvsp[0].r.node));
										}
#line 3681 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1029 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"long_id: long_id.IDENTIFIER\n";LongIdHelper::addIdentifier((yyvsp[-2].r.text));}
#line 3687 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1030 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"long_id: long_id.message_call\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3696 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1034 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																LongIdHelper::addIdentifier((yyvsp[0].r.text)); 
																(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
																cout<<"long_id:IDENTIFIER\n";
															   }
#line 3706 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1044 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:STRING_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.string_val,scoop);
									}
#line 3714 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1047 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"simple_expr:INT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.int_val,scoop);
									}
#line 3723 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1051 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:FLOAT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.float_val,scoop);
									}
#line 3731 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1054 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:CHAR_VAL\n";
										(yyval.r.node)=new ConstantNode(yylval.r.char_val,scoop);
									}
#line 3739 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1057 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:long_id\n";
									(yyval.r.node)=(yyvsp[0].r.node);
									}
#line 3747 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1060 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"simple_expr:expr PLUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),PLUS,scoop);
									}
#line 3756 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1064 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"simple_expr:expr MINUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MINUS,scoop);
									}
#line 3765 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1068 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:expr MULTI expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MULTI,scoop);
									}
#line 3773 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1071 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"simple_expr:expr DIV expr\n";
									(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),DIV,scoop);
									}
#line 3782 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1075 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:OPEN_P expr CLOSE_P\n";}
#line 3788 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1076 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:ID++";}
#line 3794 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1077 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:ID--";}
#line 3800 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1078 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:++ID";}
#line 3806 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1079 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:--ID";}
#line 3812 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1080 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"expr:p_type expr\n";
																if(type!=NULL)
																(yyval.r.node)=new CastNode(scoop,type,(yyvsp[0].r.node));
															}
#line 3822 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1087 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
							cout<<"message_call2: OPEN_ARR\n";
							callNode=new CallNode(scoop);
						 }
#line 3831 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1093 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";
												callNode->setSender((yyvsp[-2].r.node));
												callNode->setMessage((yyvsp[-1].r.text));
												(yyval.r.node)=callNode;
												}
#line 3842 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1101 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"sender: message_call\n";
											 (yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3850 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1104 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"sender: IDENTIFIER\n";
											(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
											}
#line 3858 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1109 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"message: IDENTIFIER\n";
											//$<r.node>$=$<r.text>1;
												
											}
#line 3867 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1113 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"message: IDENTIFIER SEMI_COLUMN argument_list\n";
											//$<r.node>$=$<r.text>1;
											}
#line 3876 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1119 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"argument_list: argument_list argument\n";}
#line 3882 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1120 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"argument_list: argument\n";}
#line 3888 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1123 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"argument: SEMI_COLUMN expr\n";
											(yyval.r.node)=(yyvsp[0].r.node);
											callNode->addArgument((yyvsp[0].r.node),"");
											}
#line 3898 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1128 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											 cout<<"argument: IDENTIFIER SEMI_COLUMN expr\n";
											 callNode->addArgument((yyvsp[0].r.node),(yyvsp[-2].r.text));
											 (yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3908 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1135 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"while_loop:while_loop_header statement\n";
											 (yyval.r.node)=new WhileNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop);
										}
#line 3917 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1141 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3925 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1146 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"conditional_statement: if_header statement\n";
												 (yyval.r.node)=new IfNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop,NULL);
												}
#line 3933 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1149 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"conditional_statement: if_header statement with else\n";
												 (yyval.r.node)=new IfNode((yyvsp[-3].r.node),(yyvsp[-2].r.node),scoop,new ElseNode((yyvsp[0].r.node),scoop));
												}
#line 3942 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1153 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"conditional_statement: switch_header switch_body statement\n";
											(yyval.r.node)=new SwitchNode(tempSwitch);
										}
#line 3950 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1158 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3958 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1163 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"switch_header: SWITCH OPEN_P IDENTIFIER CLOSE_P\n";
										
										tempSwitch->setExpr(new IdentifierNode((yyvsp[-2].r.text),scoop));
									}
#line 3967 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1169 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cscoop=scoop;scoop=new ScoopNode(cscoop);tempSwitch=new SwitchNode(NULL,std::list<pair<Node*,Node*>>(),scoop);}
#line 3973 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1172 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3979 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1173 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3985 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1174 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3991 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1175 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3997 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1178 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4003 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1179 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4009 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1182 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-4].r.node),(yyvsp[-2].r.node));}
#line 4015 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1183 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-2].r.node),(yyvsp[0].r.node));}
#line 4021 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1184 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-3].r.node),NULL);}
#line 4027 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1187 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-2].r.node));}
#line 4033 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1188 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[0].r.node));}
#line 4039 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1189 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-1].r.node));}
#line 4045 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1191 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"protocol: protocol_header protocol_body\n";
										idsList.clear();
										methodsList.clear();
										method=NULL;
										}
#line 4056 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1199 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";
								protocol=ProtocolHelper ::createNewProtocol((yyvsp[0].r.text),symbolTable );
								
								}
#line 4066 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1206 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	protocol_reference_list interface_declaration_list	AT_END\n";
								ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								idsList.clear();
								}
#line 4078 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1214 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	interface_declaration_list	AT_END\n";
									
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								
								}
#line 4090 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1222 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	protocol_reference_list AT_END	\n";
											ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								idsList.clear();
								}
#line 4100 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1228 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"protocol_body:	AT_END\n";}
#line 4106 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1230 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"enum: ENUM IDENTIFIER  OPEN_S list_expr CLOSE_S SEMI_COMA  \n";
																
																EnumHelper::createNewEnum( (yyvsp[-4].r.text),idsList, symbolTable);
																idsList.clear();
															 }
#line 4117 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1236 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"enum: ENUM IDENTIFIER SEMI_COMA\n";
																EnumHelper::createNewEnum( (yyvsp[-1].r.text),idsList, symbolTable);
															  }
#line 4126 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1243 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"list_expr:IDENTIFIER EQUAL expr COMMA list_expr\n";
												idsList.push_back((yyvsp[-4].r.text));
													(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-4].r.text),scoop),(yyvsp[-2].r.node));
												}
#line 4136 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1248 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"list_expr:IDENTIFIER EQUAL expr\n";
												idsList.push_back((yyvsp[-2].r.text));
												(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
												}
#line 4146 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1253 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"list_expr:IDENTIFIER \n";
													idsList.push_back((yyvsp[0].r.text));
													//??
												}
#line 4156 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1258 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  cout<<"list_expr:IDENTIFIER  COMMA list_expr \n";
												  idsList.push_back((yyvsp[-2].r.text));
												  //??
												}
#line 4166 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1265 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  cout<<"try_catch:TRY statement catch_list finally_statement \n";
												}
#line 4174 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1269 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {				  
								cout<<"try_catch:TRY statement catch_list \n";
							  }
#line 4182 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1274 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"catch_list:CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4188 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1275 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"catch_list:catch_list CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4194 "yacc.cpp" /* yacc.c:1646  */
    break;


#line 4198 "yacc.cpp" /* yacc.c:1646  */
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
#line 1280 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1906  */

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
	//method->getF()->generateCode();
	symbolTable->generateCode();

//	functionNode->toString();
	//functionNode->generateCode();
}

