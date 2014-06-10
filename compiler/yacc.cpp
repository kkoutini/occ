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
				#include "DotNode.h"
				#include <fstream>
				#include "Streams.h"

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
	ScoopNode* globalScoop=NULL;

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

#line 152 "yacc.cpp" /* yacc.c:339  */

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
#line 156 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:355  */

#include "ast\node.h"

#line 186 "yacc.cpp" /* yacc.c:355  */

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
#line 159 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:355  */

	
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
	   

#line 285 "yacc.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 300 "yacc.cpp" /* yacc.c:358  */

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
#define YYLAST   866

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  264
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  479

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
       0,   189,   189,   192,   193,   195,   196,   197,   198,   199,
     201,   210,   217,   224,   225,   227,   229,   235,   239,   244,
     249,   253,   255,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   273,   280,   283,   287,   292,   293,   297,
     298,   299,   300,   301,   302,   305,   306,   309,   310,   311,
     314,   317,   325,   336,   337,   338,   343,   346,   349,   353,
     357,   361,   362,   365,   371,   372,   373,   375,   383,   390,
     394,   400,   401,   402,   403,   404,   405,   406,   407,   410,
     411,   412,   416,   417,   418,   419,   423,   432,   443,   452,
     463,   472,   480,   488,   496,   504,   514,   525,   530,   534,
     535,   538,   542,   548,   551,   553,   557,   562,   568,   576,
     577,   581,   589,   590,   593,   602,   611,   615,   617,   623,
     631,   637,   641,   650,   663,   666,   671,   677,   683,   686,
     692,   695,   696,   699,   700,   703,   711,   721,   731,   740,
     747,   759,   763,   767,   773,   778,   787,   791,   795,   801,
     810,   813,   817,   819,   822,   827,   832,   838,   844,   851,
     855,   856,   859,   862,   869,   878,   881,   886,   889,   892,
     897,   902,   905,   923,   929,   933,   937,   942,   946,   950,
     955,   961,   972,   975,   980,   983,   986,   989,   992,   995,
     998,  1001,  1005,  1008,  1011,  1016,  1019,  1024,  1031,  1035,
    1039,  1049,  1055,  1059,  1062,  1065,  1068,  1072,  1076,  1079,
    1083,  1084,  1085,  1086,  1087,  1088,  1095,  1108,  1120,  1126,
    1136,  1140,  1147,  1152,  1158,  1162,  1164,  1169,  1177,  1183,
    1188,  1191,  1195,  1200,  1205,  1211,  1214,  1215,  1216,  1217,
    1220,  1221,  1224,  1225,  1226,  1229,  1230,  1231,  1233,  1241,
    1247,  1255,  1263,  1269,  1272,  1278,  1285,  1290,  1295,  1300,
    1307,  1311,  1316,  1317,  1320
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

#define YYPACT_NINF -352

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-352)))

#define YYTABLE_NINF -65

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-65)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     262,     4,   336,    13,    63,    79,    98,   168,   122,  -352,
    -352,   478,   100,  -352,  -352,   276,  -352,   487,  -352,  -352,
    -352,   208,   216,    42,  -352,  -352,  -352,  -352,   597,   181,
    -352,    12,   199,  -352,   243,   255,   350,  -352,  -352,  -352,
     658,  -352,   199,   199,   427,  -352,   480,  -352,  -352,   233,
    -352,   233,  -352,   502,   520,  -352,   348,   236,  -352,   271,
     229,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,
     224,  -352,   279,   290,   423,  -352,   808,   808,  -352,   382,
    -352,  -352,  -352,  -352,  -352,   174,   264,   224,   299,   310,
     315,  -352,   299,   526,  -352,   388,   420,  -352,  -352,   442,
    -352,  -352,  -352,   808,   137,   331,  -352,   808,   299,   299,
    -352,   533,  -352,  -352,  -352,  -352,   322,  -352,  -352,   535,
    -352,  -352,  -352,  -352,    19,   338,  -352,   421,   320,   324,
    -352,  -352,  -352,   808,   308,     3,   117,  -352,  -352,   366,
    -352,   199,   351,    95,  -352,   264,  -352,   371,  -352,   540,
    -352,  -352,   463,  -352,  -352,  -352,  -352,  -352,   146,   378,
    -352,   182,   200,  -352,  -352,  -352,  -352,   240,   229,  -352,
     224,   377,   389,   397,  -352,   405,   404,  -352,   773,   530,
     379,   469,  -352,  -352,   384,  -352,  -352,  -352,  -352,  -352,
    -352,   530,  -352,   530,   436,    54,    -1,   451,  -352,   530,
    -352,   530,    -2,  -352,  -352,  -352,   271,   773,   485,     3,
     180,  -352,  -352,    20,  -352,  -352,  -352,   237,  -352,   529,
    -352,   465,   476,  -352,  -352,  -352,  -352,  -352,  -352,  -352,
    -352,  -352,  -352,   578,   496,  -352,   304,  -352,   201,  -352,
    -352,   469,   343,   659,   659,   494,   150,   116,   626,  -352,
    -352,  -352,  -352,   505,   513,   773,   507,  -352,    54,   339,
    -352,   511,   428,   518,   308,   221,   288,  -352,  -352,  -352,
     481,  -352,  -352,   773,   538,  -352,  -352,   544,  -352,  -352,
     486,  -352,   773,   550,  -352,     9,  -352,   532,  -352,   545,
    -352,  -352,  -352,   510,  -352,   516,  -352,   308,  -352,  -352,
     199,   553,  -352,  -352,  -352,   561,  -352,   323,   536,   574,
     128,   572,   590,   773,  -352,  -352,   368,   111,   375,   557,
    -352,  -352,   116,   527,   458,  -352,  -352,   339,  -352,   773,
     773,   773,   773,   571,   394,  -352,   548,   773,   548,  -352,
     469,  -352,   469,   579,   339,  -352,   586,   541,   598,  -352,
     530,   603,   410,  -352,  -352,   592,  -352,   271,  -352,     5,
    -352,  -352,  -352,   773,   576,   192,    33,   282,   539,   458,
    -352,  -352,   659,   659,   773,   773,   773,   773,   773,  -352,
     599,  -352,   265,   265,  -352,  -352,   224,   602,   530,  -352,
     607,  -352,  -352,  -352,  -352,  -352,  -352,   773,  -352,   586,
    -352,  -352,   470,   615,   582,  -352,  -352,   575,   585,  -352,
     773,  -352,   601,   691,   730,    36,  -352,   460,   460,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,   634,   224,  -352,   139,
    -352,  -352,   637,  -352,   628,   596,  -352,   635,  -352,  -352,
    -352,  -352,  -352,   627,  -352,   629,   741,   636,   665,   698,
    -352,   653,   654,   773,  -352,   660,  -352,  -352,  -352,  -352,
     646,   530,   657,   661,   666,  -352,   762,  -352,  -352,  -352,
    -352,   530,   762,   664,  -352,  -352,  -352,   762,  -352
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       5,     0,     0,     8,     6,     0,     7,     0,     9,    13,
      14,    12,   126,     0,   249,    70,     1,     3,     0,     0,
      23,     0,     0,    10,     0,     0,     0,   108,   109,   110,
       0,   130,     0,     0,     0,   124,     0,   132,   133,     0,
     134,     0,   253,     0,     0,   248,     0,     0,   255,     0,
       0,    93,    92,    91,    95,    90,    55,    54,    53,    46,
       0,    94,     0,     0,     0,    48,    49,     0,    52,     0,
      84,    85,    82,    83,    36,     0,   117,     0,     0,     0,
     116,   119,     0,    26,    20,     0,     0,    31,    21,     0,
      32,    22,   107,     0,     0,     0,    68,    56,     0,     0,
     128,     0,   129,   131,   140,   135,     0,   137,   252,     0,
     251,    15,    11,   125,   258,     0,    96,     0,    88,    86,
      45,    47,    51,    50,    62,     0,     0,    61,    34,     0,
      33,     0,     0,     0,   113,     0,   118,     0,    24,     0,
      28,    17,     0,    29,    18,    30,    19,    69,     0,    80,
      73,     0,     0,    67,   136,   138,   127,     0,   200,   142,
       0,     0,     0,     0,   171,     0,     0,   216,     0,     0,
       0,     0,   150,   139,     0,   145,   153,   149,   151,   146,
     169,     0,   167,     0,     0,     0,     0,   199,   168,     0,
     147,     0,     0,   159,   152,   250,     0,     0,     0,     0,
       0,    89,    87,     0,    65,    99,    66,     0,    57,     0,
      35,     0,   120,   122,   115,   112,   111,   114,    25,    27,
      16,    77,    81,     0,     0,    71,     0,    74,     0,   155,
     143,     0,     0,     0,     0,     0,    88,   200,     0,   201,
     203,   204,   202,     0,     0,     0,     0,   195,   205,   196,
     199,     0,     0,     0,     0,   106,     0,   161,   141,   144,
       0,   172,   148,     0,     0,   219,   218,     0,   154,   228,
     230,   239,     0,     0,   232,     0,   241,     0,   259,   257,
     254,    63,    58,     0,   102,    97,    59,     0,    60,   123,
       0,     0,    79,    75,    78,     0,    72,     0,   183,     0,
       0,     0,     0,     0,   193,   194,     0,     0,     0,     0,
     211,   212,   200,   205,     0,   213,   214,   215,   166,     0,
       0,     0,     0,     0,   261,   156,   104,     0,   104,   164,
       0,   157,     0,     0,   197,   198,   220,     0,   221,   223,
       0,     0,     0,   237,   240,     0,   238,     0,   101,     0,
     121,    76,   158,     0,     0,     0,     0,     0,     0,   196,
     189,   229,     0,     0,     0,     0,     0,     0,     0,   233,
       0,   210,   206,   207,   208,   209,     0,     0,     0,   260,
       0,   165,   105,   163,   162,   160,   170,     0,   217,     0,
     222,   231,     0,     0,   246,   236,   256,     0,     0,   182,
       0,   180,     0,     0,     0,     0,   190,   191,   192,   184,
     185,   186,   187,   188,   235,   234,     0,     0,   264,     0,
     103,   227,   224,   226,     0,   243,   247,     0,   100,    98,
     181,   179,   178,     0,   177,     0,     0,     0,     0,     0,
      38,     0,    40,     0,   244,     0,   245,   174,   175,   176,
       0,     0,     0,    41,     0,    37,     0,   225,   242,   173,
     262,     0,     0,    43,    39,   263,    44,     0,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -352,  -352,  -352,   670,  -352,  -352,  -352,   671,  -352,  -352,
    -351,    -6,  -352,   618,   612,  -352,  -352,     1,   569,   482,
    -352,  -352,  -352,  -140,   -28,  -352,  -352,  -352,  -352,  -128,
    -352,  -352,   359,  -352,    17,   -25,  -352,  -352,   -12,   162,
    -352,   609,  -352,   400,  -352,  -352,  -352,   662,   -14,  -352,
    -352,  -352,  -352,   154,  -352,  -352,  -352,  -166,  -352,  -352,
     462,   -15,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -221,
    -168,   -92,  -115,  -212,  -352,  -111,  -352,  -352,  -352,   356,
    -352,   252,  -352,   437,  -352,  -352,  -352,  -352,  -352,  -352,
     424,   426,  -352,  -352,  -352,   103,  -204,  -352,  -352,  -352
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    33,    34,    85,   430,
     451,    35,    74,    75,    76,    77,   105,    78,   136,   137,
     107,    12,    13,   161,   181,    80,    81,    82,    83,   214,
     295,   215,   391,   339,    36,    37,    38,    39,   255,    89,
      90,    91,   222,   223,    14,    15,    45,    46,    47,    48,
      49,    50,    51,   182,   116,   183,   184,   185,   186,   187,
     266,   267,   188,   189,   190,   191,   192,   193,   311,   316,
     317,   257,   258,   259,   196,   260,   277,   347,   348,   349,
     432,   433,   198,   199,   200,   201,   202,   425,   284,   285,
     286,   287,    16,    17,    55,   203,   125,   204,   334,   389
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,   195,   288,   275,   216,   197,   407,   217,    19,    44,
     256,   102,    79,   262,   -64,   281,    86,    22,   269,    88,
      92,   -64,   238,   318,   194,   270,   353,   271,    95,   102,
     108,   109,   113,   279,    54,   280,   324,   206,    87,   289,
     408,   106,   127,   327,   413,   282,   283,   446,    79,    79,
     177,    96,    99,    58,   213,   293,   282,   283,    59,   142,
     207,   344,   372,   373,   195,   372,   373,    23,   197,   195,
     119,   102,   294,   197,   102,    79,   195,   132,   195,    79,
     197,   291,   197,    24,   195,   276,   195,   194,   197,   366,
     197,   368,   194,   302,   102,   273,   225,   113,   464,   194,
     369,   194,    25,    18,   157,    79,   226,   194,   163,   194,
     149,    18,   152,   274,   351,   474,    40,   382,   383,   384,
     385,   476,    -2,     1,   102,     2,   478,   102,   218,   221,
     374,   375,   247,   323,   132,   219,   336,   338,   158,   365,
     323,   159,   241,   247,   376,   370,   415,   377,   160,   378,
       3,   417,   418,   406,   312,   449,   450,   231,   323,   249,
     250,    58,   251,   252,   232,   248,    59,   313,    26,   392,
     249,   250,     4,   251,   252,   138,   320,   321,     5,   177,
       6,   314,   315,   234,   401,    84,   404,   211,   253,   254,
     177,   292,   139,   235,   140,   409,   247,   412,   219,   253,
     254,   236,   305,   115,   159,   117,   419,   420,   421,   422,
     423,   237,   306,    56,   323,   323,   323,   323,   248,   411,
     142,    57,   428,   249,   250,    87,   251,   252,    60,   431,
      61,    62,    63,    64,    65,   195,   435,   195,   296,   197,
     123,   197,   440,   177,    93,   443,   445,    71,   -63,   114,
     143,   239,   253,   254,   147,   -63,    97,   240,   194,    28,
     194,   452,   337,     1,    94,     2,   126,    31,    32,   141,
     164,   165,   213,   195,    72,   124,    98,   197,   460,    31,
      32,   452,    73,   128,   142,   431,   247,   195,   221,   340,
       3,   197,    28,   414,   129,   470,   194,    41,   452,   341,
      42,    43,   331,    86,   452,   475,   342,   332,   312,   452,
     194,   144,     4,   249,   250,   304,   251,   252,     5,   145,
       6,   313,   232,   167,   340,   394,   168,   395,    61,    62,
      63,    64,    65,   177,   362,   314,   315,    20,   114,   169,
      21,   342,   253,   254,   170,    71,   195,   308,   162,   121,
     197,   100,   122,   309,   310,   208,   195,   211,   426,   213,
     197,   212,   171,   329,   330,   172,   173,   174,   175,   194,
     220,   101,   176,   177,    31,    32,   331,   178,   224,   194,
      73,   332,   227,   134,   179,   261,   135,   180,   168,   150,
      61,    62,    63,    64,    65,   371,   233,   372,   373,   448,
     114,   268,   379,   242,   372,   373,   170,    71,   246,   151,
     263,   261,    31,    32,   168,   243,    61,    62,    63,    64,
      65,   153,   134,   244,   171,   209,   114,   172,   173,   174,
     175,   245,   170,    71,   176,   177,    66,    67,    68,   178,
     130,   154,    73,   155,    31,    32,   179,   272,   110,   180,
     171,    42,    43,   172,   173,   174,   175,   387,   388,   403,
     176,   177,   278,   156,   229,   178,    31,    32,    73,   299,
     264,   261,   179,   265,   168,   180,    61,    62,    63,    64,
      65,   300,   329,   330,   230,   381,   114,    31,    32,   -65,
     -65,   333,   170,    71,    28,   331,   290,    29,   319,    30,
     332,   112,    31,    32,    42,    43,    29,   303,    52,   325,
     171,    31,    32,   172,   173,   174,   175,   326,   328,   434,
     176,   177,   239,   118,   172,   178,    31,    32,    73,   335,
     297,   261,   179,   209,   168,   180,    61,    62,    63,    64,
      65,   120,   345,   350,    31,    32,   114,   148,   346,   356,
      31,    32,   170,    71,   166,   352,   205,    42,    43,    31,
      32,   228,   358,   357,    31,    32,   416,   359,   372,   373,
     171,   232,   361,   172,   173,   174,   175,   363,   364,   301,
     176,   177,   159,   367,   380,   178,   274,   386,    73,   390,
     396,   397,   179,   398,   322,   180,    61,    62,    63,    64,
      65,    60,   399,    61,    62,    63,    64,    65,   402,   405,
      66,    67,    68,    71,    69,   424,   312,   410,   427,    70,
      71,   249,   250,   429,   251,   252,   436,   438,   441,   313,
     322,   437,    61,    62,    63,    64,    65,   439,   447,   454,
      72,   177,   453,   314,   315,   455,   456,    72,    73,    71,
     253,   254,   248,   461,   457,    73,   458,   249,   250,   103,
     251,   252,    60,   247,    61,    62,    63,    64,    65,   462,
     465,   468,   466,   469,   471,   104,    72,   177,    27,   472,
      70,    71,   477,   473,    73,   312,   253,   254,    53,   133,
     249,   250,   131,   251,   252,   247,   210,   393,   313,   146,
     360,   298,   247,   307,   400,   467,   111,   343,    72,   354,
     177,   355,   314,   315,   449,   463,    73,   248,   442,   253,
     254,     0,   249,   250,   248,   251,   252,     0,     0,   249,
     250,     0,   251,   252,   247,     0,     0,     0,     0,     0,
       0,     0,   177,     0,     0,   247,     0,     0,     0,   177,
       0,   253,   254,     0,     0,     0,   248,   444,   253,   254,
       0,   249,   250,     0,   251,   252,   247,   248,   459,     0,
       0,     0,   249,   250,     0,   251,   252,   247,   449,     0,
       0,   177,     0,     0,     0,     0,     0,     0,   248,     0,
     253,   254,   177,   249,   250,     0,   251,   252,     0,   248,
       0,   253,   254,     0,   249,   250,     0,   251,   252,     0,
       0,     0,    60,   177,    61,    62,    63,    64,    65,     0,
       0,     0,   253,   254,   177,     0,     0,     0,     0,     0,
      70,    71,     0,   253,   254,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,     0,    73
};

static const yytype_int16 yycheck[] =
{
      28,   116,   206,     4,     1,   116,     1,   135,     4,    15,
     178,    36,    40,   179,    11,    17,     4,     4,   184,    31,
      32,    18,   162,   244,   116,   191,    17,   193,    34,    54,
      42,    43,    46,   199,    17,   201,   248,    18,    26,   207,
      35,    40,    70,   255,    11,    47,    48,    11,    76,    77,
      51,    34,    35,    11,    51,    35,    47,    48,    16,    87,
      41,   273,    29,    30,   179,    29,    30,     4,   179,   184,
      53,    96,    52,   184,    99,   103,   191,    76,   193,   107,
     191,   209,   193,     4,   199,   196,   201,   179,   199,   310,
     201,   312,   184,   233,   119,    41,     1,   111,   449,   191,
     312,   193,     4,     0,   103,   133,    11,   199,   107,   201,
      93,     8,    95,    59,   282,   466,    16,   329,   330,   331,
     332,   472,     0,     1,   149,     3,   477,   152,    11,   141,
      19,    20,     4,   248,   133,    18,   264,   265,     1,    11,
     255,     4,   170,     4,    33,   313,   367,    36,    11,    38,
      28,   372,   373,   357,    26,    16,    17,    11,   273,    31,
      32,    11,    34,    35,    18,    26,    16,    39,     0,   337,
      31,    32,    50,    34,    35,     1,    60,    61,    56,    51,
      58,    53,    54,     1,   350,     4,   352,    37,    60,    61,
      51,    11,    18,    11,    20,   363,     4,   365,    18,    60,
      61,     1,     1,    49,     4,    51,   374,   375,   376,   377,
     378,    11,    11,     5,   329,   330,   331,   332,    26,    27,
     248,     5,   388,    31,    32,    26,    34,    35,     4,   397,
       6,     7,     8,     9,    10,   350,   402,   352,     1,   350,
       4,   352,   410,    51,     1,   413,   414,    23,    11,    16,
      88,    11,    60,    61,    92,    18,     1,    17,   350,    16,
     352,   429,    41,     1,    21,     3,    37,    24,    25,     5,
     108,   109,    51,   388,    50,     4,    21,   388,   446,    24,
      25,   449,    58,     4,   312,   453,     4,   402,   300,     1,
      28,   402,    16,    11,     4,   461,   388,    21,   466,    11,
      24,    25,    37,     4,   472,   471,    18,    42,    26,   477,
     402,     1,    50,    31,    32,    11,    34,    35,    56,     4,
      58,    39,    18,     1,     1,   340,     4,   342,     6,     7,
       8,     9,    10,    51,    11,    53,    54,     1,    16,    17,
       4,    18,    60,    61,    22,    23,   461,     4,    17,     1,
     461,     1,     4,    10,    11,    17,   471,    37,   386,    51,
     471,    37,    40,    24,    25,    43,    44,    45,    46,   461,
       4,    21,    50,    51,    24,    25,    37,    55,    27,   471,
      58,    42,    11,     1,    62,     1,     4,    65,     4,     1,
       6,     7,     8,     9,    10,    27,    18,    29,    30,   427,
      16,    17,    27,    26,    29,    30,    22,    23,     4,    21,
      31,     1,    24,    25,     4,    26,     6,     7,     8,     9,
      10,     1,     1,    26,    40,     4,    16,    43,    44,    45,
      46,    26,    22,    23,    50,    51,    13,    14,    15,    55,
      17,    21,    58,     1,    24,    25,    62,    11,    21,    65,
      40,    24,    25,    43,    44,    45,    46,    63,    64,    49,
      50,    51,    11,    21,     1,    55,    24,    25,    58,     4,
       1,     1,    62,     4,     4,    65,     6,     7,     8,     9,
      10,     5,    24,    25,    21,    27,    16,    24,    25,    29,
      30,    63,    22,    23,    16,    37,    11,    19,     4,    21,
      42,    21,    24,    25,    24,    25,    19,    11,    21,     4,
      40,    24,    25,    43,    44,    45,    46,     4,    11,    49,
      50,    51,    11,    21,    43,    55,    24,    25,    58,    11,
       1,     1,    62,     4,     4,    65,     6,     7,     8,     9,
      10,    21,     4,    57,    24,    25,    16,    21,     4,    17,
      24,    25,    22,    23,    21,     5,    21,    24,    25,    24,
      25,    21,    52,    18,    24,    25,    27,    51,    29,    30,
      40,    18,    11,    43,    44,    45,    46,    41,     4,     1,
      50,    51,     4,    11,    27,    55,    59,    16,    58,    41,
      11,     5,    62,    52,     4,    65,     6,     7,     8,     9,
      10,     4,     4,     6,     7,     8,     9,    10,     5,    17,
      13,    14,    15,    23,    17,    16,    26,    41,    16,    22,
      23,    31,    32,    16,    34,    35,    11,    52,    27,    39,
       4,    49,     6,     7,     8,     9,    10,    52,     4,    11,
      50,    51,     5,    53,    54,    49,    11,    50,    58,    23,
      60,    61,    26,    17,    27,    58,    27,    31,    32,     1,
      34,    35,     4,     4,     6,     7,     8,     9,    10,     4,
      17,    11,    18,    27,    17,    17,    50,    51,     8,    18,
      22,    23,    18,    17,    58,    26,    60,    61,    17,    77,
      31,    32,    74,    34,    35,     4,   127,   338,    39,    90,
     300,   219,     4,   241,   348,   453,    44,   270,    50,   285,
      51,   285,    53,    54,    16,    17,    58,    26,    27,    60,
      61,    -1,    31,    32,    26,    34,    35,    -1,    -1,    31,
      32,    -1,    34,    35,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,     4,    -1,    -1,    -1,    51,
      -1,    60,    61,    -1,    -1,    -1,    26,    27,    60,    61,
      -1,    31,    32,    -1,    34,    35,     4,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    34,    35,     4,    16,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      60,    61,    51,    31,    32,    -1,    34,    35,    -1,    26,
      -1,    60,    61,    -1,    31,    32,    -1,    34,    35,    -1,
      -1,    -1,     4,    51,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    60,    61,    51,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58
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
     142,    27,    29,    30,    19,    20,    33,    36,    38,    27,
      27,    27,   145,   145,   145,   145,    16,    63,    64,   171,
      41,   104,   142,   104,   133,   133,    11,     5,    52,     4,
     151,   129,     5,    49,   129,    17,   168,     1,    35,   142,
      41,    27,   142,    11,    11,   141,    27,   141,   141,   142,
     142,   142,   142,   142,    16,   159,    96,    16,   129,    16,
      81,   142,   152,   153,    49,   129,    11,    49,    52,    52,
     142,    27,    27,   142,    27,   142,    11,     4,    96,    16,
      17,    82,   142,     5,    11,    49,    11,    27,    27,    27,
     142,    17,     4,    17,    82,    17,    18,   153,    11,    27,
     129,    17,    18,    17,    82,   129,    82,    18,    82
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
     141,   141,   141,   141,   141,   142,   142,   143,   144,   144,
     144,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   146,   147,   148,   148,
     149,   149,   150,   150,   151,   152,   152,   153,   154,   155,
     156,   156,   156,   157,   158,   159,   160,   160,   160,   160,
     161,   161,   162,   162,   162,   163,   163,   163,   164,   165,
     166,   166,   166,   166,   167,   167,   168,   168,   168,   168,
     169,   169,   170,   170,   171
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
       5,     4,     3,     1,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     1,     1,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     1,     4,     1,     1,
       1,     1,     2,     1,     3,     3,     1,     1,     2,     4,
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
#line 189 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"program: components\n"; 
										 }
#line 2044 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 192 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"components: components component\n";}
#line 2050 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 193 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"components: component\n";}
#line 2056 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 195 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface \n";}
#line 2062 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 196 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_implementation \n";}
#line 2068 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 197 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"protocol \n";}
#line 2074 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 198 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct \n";}
#line 2080 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 199 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"enum \n";}
#line 2086 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 201 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface: class_interface_header class_interface_body\n";
																classNode=NULL;
																 idsList.clear();
																 methodsList.clear();
																 method=NULL;
																}
#line 2097 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 210 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																				interface=InterfaceHelper::createNewInterface((yyvsp[-2].r.text),(yyvsp[0].r.text),symbolTable);
																				
																				classNode=new ClassNode(globalScoop,interface);
																				interface->setClassNode(classNode);
																				
																				}
#line 2109 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 217 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																					Streams::verbose()<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
																				 interface=InterfaceHelper::createNewInterface((yyvsp[0].r.text),"",symbolTable);
																				 	classNode=new ClassNode(globalScoop,interface);
																				interface->setClassNode(classNode);

																				}
#line 2121 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 224 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Unknown type name '"<<(yyvsp[-1].r.text)<<"' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2127 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 225 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2133 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 227 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2139 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 230 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
															
														InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2149 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 236 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														}
#line 2157 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 240 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	protocol_reference_list interface_declaration_list	AT_END\n";
														}
#line 2166 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 245 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2175 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 250 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														}
#line 2183 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 254 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface_body:instance_variables		AT_END\n";}
#line 2189 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 256 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {														
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:interface_declaration_list	AT_END\n";
														}
#line 2198 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 260 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface_body:AT_END\n";}
#line 2204 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 261 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2210 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 262 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2216 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 263 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2222 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 264 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2228 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 265 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2234 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 266 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2240 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 267 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2246 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 268 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2252 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 269 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2258 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 273 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													if(interface!=NULL){
													InterfaceHelper::addInheritedProtocol(interface,idsList,symbolTable);
														idsList.clear();
													}
													Streams::verbose()<<"protocol_reference_list: LESS_THAN ids_list_identifier MORE_THAN\n";
												}
#line 2270 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 280 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected '>' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2276 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 283 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													Streams::verbose()<<"ids_list:ids_list_identifier COMMA IDENTIFIER\n"; 
													idsList.push_back((yyvsp[0].r.text));
													}
#line 2285 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 287 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													Streams::verbose()<<"ids_list_identifier:IDENTIFIER\n";
													idsList.push_back((yyvsp[0].r.text));
												    }
#line 2294 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 292 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array with body";}
#line 2300 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 293 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array without elements";}
#line 2306 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 297 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array-element \n";}
#line 2312 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 298 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array-element \n";}
#line 2318 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 299 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"empty element \n";}
#line 2324 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 300 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"inside braces element \n";}
#line 2330 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 301 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"inside braces element \n";}
#line 2336 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 302 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"inside braces element \n";}
#line 2342 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 305 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";}
#line 2348 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 306 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variables:OPEN_S	 CLOSE_S\n";}
#line 2354 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 309 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";}
#line 2360 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 310 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variable_declarations:instance_variable_declaration\n";}
#line 2366 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 311 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variable_declarations:variable_declaration_list\n";}
#line 2372 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 314 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variable_declaration:visibility_specification variable_declaration_list\n";
																	}
#line 2379 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 318 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
											arrayList.clear();
												idsList.clear();
												flag=false;
										}
#line 2391 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 326 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										       InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
												arrayList.clear();
												idsList.clear();
												flag=false;
										Streams::verbose()<<"variable_declaration_list: variable_declaration\n";
										}
#line 2403 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 336 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"visibility_specification:AT_PRIVATE\n";  visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2409 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 337 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"visibility_specification:AT_PROTECTED\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2415 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 338 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"visibility_specification:AT_PUBLIC\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2421 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 343 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct_variable_declaration:struct_declaration_list\n";}
#line 2427 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 346 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
	                                           (yyval.r.text)=(yyvsp[-2].r.text);
												}
#line 2435 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 349 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
													}
#line 2444 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 353 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2450 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 357 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									Streams::verbose()<<"ids_list:ids_list COMMA id_dec\n"; 

									}
#line 2459 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 361 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"ids_list:id_dec\n"; }
#line 2465 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 362 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2471 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 365 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose() <<" data_member: IDENTIFIER array_tag \n";
							 var=new Array((yyvsp[0].r.text),arrayAlloc.size(),NULL);
					       ( dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
						   arrayList.push_back( ( dynamic_cast<Array*>(var)));
						      arrayAlloc.clear();
							}
#line 2482 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 371 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {idsList.push_back((yyvsp[0].r.text)) ;Streams::verbose() <<" data_member: IDENTIFIER  \n";}
#line 2488 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 372 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2494 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 373 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2500 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 375 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {  
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																												idsList.clear();
																												flag=false;
																										  Streams::verbose()<<"struct_declaration_list: struct_declaration_list  variable_declarationxx\n";
																										}
#line 2512 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 383 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																														 	idsList.clear();
																															flag=false;
																										Streams::verbose()<<"struct_declaration_list:  variable_declarationxx\n";
																										}
#line 2524 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 390 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Illigal visibility specification at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2530 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 394 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
					myStruct=StructHelper::createNewStruct((yyvsp[0].r.text),symbolTable);
					Streams::verbose()<<"struct_header: STRUCT  IDENTIFIER\n";
					}
#line 2539 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 400 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S  entity SEMI_COMA\n";}
#line 2545 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 401 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S enteity SEMI_COMA \n";}
#line 2551 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 402 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S SEMI_COMA\n";}
#line 2557 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 403 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S  SEMI_COMA  \n";}
#line 2563 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 404 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2569 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 405 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2575 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 406 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2581 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 407 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2587 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 410 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"entity: IDENTIFIER COMMA  entity\n";}
#line 2593 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 411 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"entity:  IDENTIFIER \n";}
#line 2599 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 412 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2605 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 416 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"type:simple type\n";}
#line 2611 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 417 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"type: complex type\n";}
#line 2617 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 418 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"type: struct_type\n";}
#line 2623 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 419 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"type: enum_type\n";}
#line 2629 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 423 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	Streams::verbose()<<"struct_type: STRUCT IDENTIFIER   \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																		string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2643 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 432 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct_type: STRUCT IDENTIFIER  MULTI \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2657 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 443 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"enum_type: ENUM IDENTIFIER \n";
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

  case 89:
#line 452 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"enum_type: ENUM IDENTIFIER  MULTI  \n";
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

  case 90:
#line 463 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"int type \n";
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

  case 91:
#line 472 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"char type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2712 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 480 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"float type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2725 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 488 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"NSString type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2738 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 496 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"void type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2751 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 504 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"bool type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2764 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 514 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 2779 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 525 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"array_tag: array_first_tag array_tag_list \n"; 
										   }
#line 2787 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 530 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"array_tag_list: array_tag_list OPEN_ARR INT_VAL CLOSE_ARR\n"; 
																arrayAlloc.push_back((yyvsp[-1].r.int_val));
														   }
#line 2796 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 535 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<" Error:missing  dimension in array tag  ";arrayAlloc.clear();}
#line 2802 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 538 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"array_first_tag: OPEN_ARR INT_VAL CLOSE_ARR\n"; 
											arrayAlloc.push_back((yyvsp[-1].r.int_val));
											}
#line 2811 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 542 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"array_first_tag: OPEN_ARR  CLOSE_ARR\n"; 
											arrayAlloc.push_back(-1);
											}
#line 2820 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 548 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							   }
#line 2828 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 553 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose() <<"with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							 }
#line 2837 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 562 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
															 methodsList.push_back(method);
														
															 
																}
#line 2848 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 568 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																 Streams::verbose()<<"interface_declaration_list:interface_declaration\n";
															 methodsList.push_back(method);
															 
																 	
																 }
#line 2859 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 576 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"interface_declaration: class_method_declaration\n";}
#line 2865 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 577 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"interface_declaration: instance_method_declaration\n";}
#line 2871 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 581 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"class_method_declaration: PLUS p_type method_selectors	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,true);
															
																 selectorsList.clear();
																
																}
#line 2883 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 589 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2889 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 590 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2895 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 593 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															Streams::verbose()<<"instance_method_declaration: MINUS p_type	method_selectors		SEMI_COMA\n";
															method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,false);
																 selectorsList.clear();
																
																
															}
#line 2907 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 602 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.r.text)=(yyvsp[-1].r.text);
																}
#line 2916 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 611 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"method_selectors: selectors_list\n";
																	(yyval.r.text)="";
																}
#line 2925 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 615 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"method_selectors:IDENTIFIER \n";(yyval.r.text)=(yyvsp[0].r.text);}
#line 2931 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 617 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													Streams::verbose()<<"selectors_list:	selectors_list selector_decleration\n";
																
													selectorsList.push_back(tselector);
													tselector=NULL;
											}
#line 2942 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 623 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"selectors_list:	 selector_decleration\n";
												selectorsList.clear();

												selectorsList.push_back(tselector);
												tselector=NULL;
}
#line 2954 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 631 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				Streams::verbose()<<"selector_decleration:	IDENTIFIER	SEMI_COLUMN	parameter_list	\n";
																				tselector=new DeclerationSelector((yyvsp[-2].r.text),selectorVarList);
																			}
#line 2963 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 637 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"parameter_list: parameter_list parameter\n";
																	selectorVarList.push_back(var);		
											}
#line 2972 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 641 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									selectorVarList.clear();
										selectorVarList.push_back(var);		
											
				 
														Streams::verbose()<<"parameter_list:  parameter\n";
						
					}
#line 2985 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 650 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"parameter:  p_type IDENTIFIER\n";
																
																if(type!=NULL){
																var=new Variable((yyvsp[0].r.text),type);
																}
																else{
																Streams::verbose()<<"Error:Type not found.\n";
																}
																}
#line 3000 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 663 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_implementation: class_implementation_header class_implementation_body\n";}
#line 3006 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 666 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	Streams::verbose()<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																	interface=InterfaceHelper::checkImplementation((yyvsp[-2].r.text),symbolTable,(yyvsp[0].r.text));
																	
																}
#line 3016 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 671 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																interface=InterfaceHelper::checkImplementation((yyvsp[0].r.text),symbolTable,"");
																	
																}
#line 3025 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 677 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	Streams::verbose()<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";
																			InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														}
#line 3035 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 683 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
																	Streams::verbose()<<"class_implementation_body: instance_variables									AT_END\n";
																}
#line 3043 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 686 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	Streams::verbose()<<"class_implementation_body:						implementation_definition_list	AT_END\n";
																	InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														
																}
#line 3054 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 692 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_implementation_body:	AT_END\n";}
#line 3060 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 695 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);Streams::verbose()<<"implementation_definition_list: implementation_definition_list implementation_definition\n";}
#line 3066 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 696 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);Streams::verbose()<<"implementation_definition_list: implementation_definition\n";}
#line 3072 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 699 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"implementation_definition: class_implementation_definition	\n";}
#line 3078 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 700 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"implementation_definition: instance_implementation_definition \n";}
#line 3084 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 703 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"class_implementation_definition: class_implementation_definition_header block_body";
														//method->setFunctionNode(functionNode);
														functionNode=NULL;
													nodeXX=method;
													}
#line 3095 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 711 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"class_implementation_definition_header: PLUS p_type		 method_selectors\n";
															method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																
																
										}
#line 3107 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 721 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															Streams::verbose()<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";
														functionNode->addNode(cscoop);
														functionNode=NULL;
																scoop=NULL;
															scoop=NULL;
										
															}
#line 3120 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 731 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											     Streams::verbose()<<"instance_implementation_definition_header:MINUS p_type		method_selectors\n";
												 method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
									           functionNode= ScoopHelper::createNewFunctionNode(method,interface);
												scoop=functionNode;
												}
#line 3132 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 740 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												
												Streams::verbose()<<"block_body:OPEN_S  block_body_part \n";
												(yyval.r.node)=(yyvsp[-1].r.node);
												}
#line 3142 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 747 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												
                                                scoop=ScoopHelper::createNewScoop(scoop);
												
												
												scoopVector.push_back(scoop);
												Streams::verbose()<<"block_body_header:OPEN_S	\n";
												(yyval.r.node)=scoop;
												}
#line 3156 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 759 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cscoop=scoop;scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements:statement_list	CLOSE_S	\n";
												}
#line 3165 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 763 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cscoop=scoop;scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements:CLOSE_S\n";
												}
#line 3174 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 767 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											  cscoop=scoop; scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements: error CLOSE_S\n";
												}
#line 3183 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 773 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement_list: statement_list statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3193 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 778 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement_list: statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											(yyval.r.node)=(yyvsp[0].r.node);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3204 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 787 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: loop_statement\n";
											(yyval.r.text)="loop";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3213 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 791 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: conditional_statement\n";
											(yyval.r.text)="cond";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3222 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 795 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"statement: expr\n";
												(yyval.r.text)="expr";
												(yyval.r.node)=(yyvsp[-1].r.node);
												//nodeXX=$<r.node>1;
											}
#line 3233 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 801 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"statement: variable_declaration\n";
											
												ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												(yyval.r.node)=(yyvsp[0].r.node);
										    }
#line 3247 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 810 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: block_body\n";(yyval.r.text)=new char[256];(yyval.r.text)[0]='\0';strcat((yyval.r.text),"Block");
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3255 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 813 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: return_statement\n";
												(yyval.r.text)="return";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3264 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 817 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: try_catch\n";}
#line 3270 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 819 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	                                            (yyval.r.text)="asm";
												(yyval.r.node)=(yyvsp[0].r.node);}
#line 3278 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 822 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	 (yyval.r.text)="call";
	(yyval.r.node)=(yyvsp[-1].r.node);
	}
#line 3287 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 827 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    { Streams::verbose()<<"error SEMI_COMA \n";}
#line 3293 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 832 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"@asm command \n";
	                                         (yyval.r.node)=new AsmNode(scoop,*(yyvsp[-1].r.string_val));
											 }
#line 3301 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 838 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
														 (yyval.r.text)=(yyvsp[-2].r.text);
														 (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3312 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 844 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
														  (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3324 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 851 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_declaration:enum\n";}
#line 3330 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 855 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_list:variable_list COMMA variable\n";}
#line 3336 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 856 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_list:variable\n";
										
										}
#line 3344 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 859 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ',' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3350 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 862 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose() <<"variable:  IDENTIFIER array_tag initializer \n";
											 var=new Array((yyvsp[-1].r.text),arrayAlloc.size(),NULL);
											(dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
											 arrayList.push_back( ( dynamic_cast<Array*>(var)));
											 arrayAlloc.clear();
											}
#line 3362 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 869 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
											Streams::verbose() <<"variable:  IDENTIFIER main_initializer \n";
											idsList.push_back((yyvsp[-1].r.text)) ;
											IdentifierNode* identifierNode=new IdentifierNode((yyvsp[-1].r.text),scoop);
											if((yyvsp[0].r.node)!=NULL){
											(dynamic_cast<AssignNode*>((yyvsp[0].r.node)))->setLeftExp(identifierNode);
											}
											declarationList.push_back(make_pair((yyvsp[-1].r.text),(yyvsp[0].r.node)));
											}
#line 3376 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 878 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3382 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 881 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"return_statement: RETURN expr\n";
												 (yyval.r.node)=new ReturnNode(scoop,(yyvsp[-1].r.node));
												}
#line 3390 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 886 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"loop_statement: for_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3398 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 889 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"loop_statement: while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3406 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 892 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"loop_statement: do_while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3414 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 897 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"do_while: do_header   statement   while_loop_header   SEMI_COMMA\n";
													(yyval.r.node)=new DoWhileNode((yyvsp[-1].r.node),(yyvsp[-2].r.node),scoop);
													}
#line 3422 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 902 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"do_header: DO\n";}
#line 3428 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 905 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3449 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 924 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer	SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-5].r.node),(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										//nodeXX=$<r.node>5;
										}
#line 3458 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 930 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3466 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 934 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3474 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 938 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),(yyvsp[-2].r.node),NULL,NULL,scoop);
										}
#line 3482 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 943 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-3].r.node),NULL,NULL,NULL,scoop);
										}
#line 3490 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 947 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA				CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-1].r.node),NULL,NULL,scoop);
										}
#line 3498 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 951 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P";
										(yyval.r.node)=new ForNode(NULL,NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3506 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 956 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_hearder: FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	\n";
											(yyval.r.node)=new ForNode(NULL,NULL,NULL,NULL,scoop);
											}
#line 3514 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 961 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_initializer: INT IDENTIFIER EQUAL expr\n";
											AssignNode * temp=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
											
											//temp->add($<r.text>2,);
											
											//temp.push_back(make_pair($<r.text>2,$<r.node>4));
											DeclerationNode* temp1=new DeclerationNode(list<pair<string,Node*>>(),scoop,"int");
											temp1->add((yyvsp[-2].r.text),temp);
										 (yyval.r.node)=temp1; 
										 idsList.push_back((yyvsp[-2].r.text));
										}
#line 3530 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 972 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_initializer: IDENTIFIER EQUAL expr\n";
										(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
										}
#line 3538 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 975 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_initializer: IDENTIFIER\n";
										(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
										}
#line 3546 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 980 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr LESS_THAN expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_THAN,scoop);
										}
#line 3554 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 983 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr MORE_THAN expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_THAN,scoop);
										}
#line 3562 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 986 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr LESS_OR_EQUAL expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_OR_EQUAL,scoop);
										}
#line 3570 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 989 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr MORE_OR_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_OR_EQUAL,scoop);
										}
#line 3578 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 992 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr EQUAL_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),EQUAL_EQUAL,scoop);
										}
#line 3586 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 995 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:NOT_EQUAL expr\n";
										 (yyval.r.node)=new UnaryNode(scoop,(yyvsp[0].r.node),NOT_EQUAL);
										}
#line 3594 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 998 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";
										 (yyval.r.node)=(yyvsp[-1].r.node);
										}
#line 3602 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1001 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"logic_expr:logic_expr AND_AND logic_expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),AND_AND,scoop);
										}
#line 3611 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1005 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:logic_expr OR_OR logic_expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),OR_OR,scoop);
										}
#line 3619 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1008 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:TRUE\n";
										 (yyval.r.node)=new ConstantNode(true,scoop);
										}
#line 3627 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1011 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:FALSE\n";
											 (yyval.r.node)=new ConstantNode(false,scoop);
										}
#line 3635 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1016 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"expr:assign_expr\n";
										 (yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3643 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1019 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"expr:simple_expr\n";
										(yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3651 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1024 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"assign_expr:long_id EQUAL simple_expr\n";
										//LongIdHelper::checkIdenentifier( scoop, interface,"set1");
										(yyval.r.node)=new AssignNode(scoop,(yyvsp[-2].r.node),(yyvsp[0].r.node));
										}
#line 3661 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1031 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"long_id: long_id.IDENTIFIER\n";
																(yyval.r.node)=new DotNode(scoop,(yyvsp[-2].r.node),(yyvsp[0].r.text));

											;}
#line 3670 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1035 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"long_id: long_id.message_call\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3679 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1039 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																LongIdHelper::addIdentifier((yyvsp[0].r.text)); 
																(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
																Streams::verbose()<<"long_id:IDENTIFIER\n";
															   }
#line 3689 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1049 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"simple_expr:STRING_VAL\n";
									(yyval.r.node)=new ConstantNode(*((yyvsp[0].r.string_val)),scoop);
									Streams::verbose()<<"node typr"<<(yyval.r.node)->generateType()->get_name()<<"\n";
									(yyval.r.string_val)=(yyvsp[0].r.string_val);
									}
#line 3700 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1055 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									Streams::verbose()<<"simple_expr:INT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.int_val,scoop);
									}
#line 3709 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1059 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:FLOAT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.float_val,scoop);
									}
#line 3717 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1062 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:CHAR_VAL\n";
										(yyval.r.node)=new ConstantNode(yylval.r.char_val,scoop);
									}
#line 3725 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1065 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:long_id\n";
									(yyval.r.node)=(yyvsp[0].r.node);
									}
#line 3733 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1068 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"simple_expr:expr PLUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),PLUS,scoop);
									}
#line 3742 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1072 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"simple_expr:expr MINUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MINUS,scoop);
									}
#line 3751 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1076 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:expr MULTI expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MULTI,scoop);
									}
#line 3759 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1079 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									Streams::verbose()<<"simple_expr:expr DIV expr\n";
									(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),DIV,scoop);
									}
#line 3768 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1083 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:OPEN_P expr CLOSE_P\n";(yyval.r.node)=(yyvsp[-1].r.node);}
#line 3774 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1084 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:ID++";}
#line 3780 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1085 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:ID--";}
#line 3786 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1086 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:++ID";}
#line 3792 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1087 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:--ID";}
#line 3798 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1088 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"expr:p_type expr\n";
																if(type!=NULL)
																(yyval.r.node)=new CastNode(scoop,type,(yyvsp[0].r.node));
															}
#line 3808 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1095 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3824 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1108 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3839 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1120 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"sender: message_call\n";
											
											callNode->setSender((yyvsp[0].r.node));
											 (yyval.r.node)=(yyvsp[0].r.node);
											 
											}
#line 3850 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1126 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"sender: IDENTIFIER\n";
											(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
											
											//callNode=new CallNode(scoop);
											
											callNode->setSender((yyval.r.node));
											
											}
#line 3863 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1136 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"message: IDENTIFIER\n";
											(yyval.r.text)=(yyvsp[0].r.text);
												
											}
#line 3872 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1140 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"message_selectors_list\n";
											//$<r.node>$=$<r.text>1;
											(yyval.r.text)="";
											}
#line 3882 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1147 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"message_selectors_list:message_selectors_list message_selector \n";
												callNode->addSelector(cselector);
											cselector=NULL;
												}
#line 3892 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1152 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	callNode->addSelector(cselector);
							cselector=NULL;
								Streams::verbose()<<"message_selectors_list: message_selector\n";
											
		}
#line 3902 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1158 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cselector->name=(yyvsp[-2].r.text);
							}
#line 3910 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1162 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"argument_list: argument_list argument\n";
												cselector->addArg((yyvsp[0].r.node));}
#line 3917 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1164 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"argument_list: argument\n";
												cselector=new CallSelector("");
											cselector->addArg((yyvsp[0].r.node));}
#line 3925 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1169 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"argument: SEMI_COLUMN expr\n";
											(yyval.r.node)=(yyvsp[0].r.node);
											//callNode->addArgument($<r.node>1,"");
											
											}
#line 3936 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1177 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"while_loop:while_loop_header statement\n";
											 (yyval.r.node)=new WhileNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop);
										}
#line 3945 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1183 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3953 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1188 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"conditional_statement: if_header statement\n";
												 (yyval.r.node)=new IfNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop,NULL);
												}
#line 3961 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1191 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"conditional_statement: if_header statement with else\n";
												 (yyval.r.node)=new IfNode((yyvsp[-3].r.node),(yyvsp[-2].r.node),scoop,new ElseNode((yyvsp[0].r.node),scoop));
												}
#line 3970 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1195 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"conditional_statement: switch_header switch_body statement\n";
											(yyval.r.node)=new SwitchNode(tempSwitch);
										}
#line 3978 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1200 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3986 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1205 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"switch_header: SWITCH OPEN_P IDENTIFIER CLOSE_P\n";
										
										tempSwitch->setExpr(new IdentifierNode((yyvsp[-2].r.text),scoop));
									}
#line 3995 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1211 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {scoop=new ScoopNode(scoop);tempSwitch=new SwitchNode(NULL,std::list<pair<Node*,Node*>>(),scoop);}
#line 4001 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1214 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4007 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1215 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4013 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1216 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4019 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1217 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4025 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1220 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4031 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1221 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4037 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1224 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-4].r.node),(yyvsp[-2].r.node));}
#line 4043 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1225 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-2].r.node),(yyvsp[0].r.node));}
#line 4049 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1226 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-3].r.node),NULL);}
#line 4055 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1229 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-2].r.node));}
#line 4061 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1230 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[0].r.node));}
#line 4067 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1231 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-1].r.node));}
#line 4073 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1233 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"protocol: protocol_header protocol_body\n";
										idsList.clear();
										methodsList.clear();
										method=NULL;
										}
#line 4084 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1241 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose()<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";
								protocol=ProtocolHelper ::createNewProtocol((yyvsp[0].r.text),symbolTable );
								
								}
#line 4094 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1248 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose()<<"protocol_body:	protocol_reference_list interface_declaration_list	AT_END\n";
								ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								idsList.clear();
								}
#line 4106 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1256 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose()<<"protocol_body:	interface_declaration_list	AT_END\n";
									
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								
								}
#line 4118 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1264 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose()<<"protocol_body:	protocol_reference_list AT_END	\n";
											ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								idsList.clear();
								}
#line 4128 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1270 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"protocol_body:	AT_END\n";}
#line 4134 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1272 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"enum: ENUM IDENTIFIER  OPEN_S list_expr CLOSE_S SEMI_COMA  \n";
																
																EnumHelper::createNewEnum( (yyvsp[-4].r.text),idsList, symbolTable);
																idsList.clear();
															 }
#line 4145 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1278 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"enum: ENUM IDENTIFIER SEMI_COMA\n";
																EnumHelper::createNewEnum( (yyvsp[-1].r.text),idsList, symbolTable);
															  }
#line 4154 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1285 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"list_expr:IDENTIFIER EQUAL expr COMMA list_expr\n";
												idsList.push_back((yyvsp[-4].r.text));
													(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-4].r.text),scoop),(yyvsp[-2].r.node));
												}
#line 4164 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1290 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"list_expr:IDENTIFIER EQUAL expr\n";
												idsList.push_back((yyvsp[-2].r.text));
												(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
												}
#line 4174 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1295 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													Streams::verbose()<<"list_expr:IDENTIFIER \n";
													idsList.push_back((yyvsp[0].r.text));
													//??
												}
#line 4184 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1300 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  Streams::verbose()<<"list_expr:IDENTIFIER  COMMA list_expr \n";
												  idsList.push_back((yyvsp[-2].r.text));
												  //??
												}
#line 4194 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1307 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  Streams::verbose()<<"try_catch:TRY statement catch_list finally_statement \n";
												}
#line 4202 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1311 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {				  
								Streams::verbose()<<"try_catch:TRY statement catch_list \n";
							  }
#line 4210 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1316 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"catch_list:CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4216 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1317 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"catch_list:catch_list CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4222 "yacc.cpp" /* yacc.c:1646  */
    break;


#line 4226 "yacc.cpp" /* yacc.c:1646  */
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
#line 1322 "C:\\Users\\Khaled Kuteini\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1906  */

void yyerror(const char *s) {
	fprintf (stderr, "%s\n", s);
	;
}

int yylex(){
	return lexer->yylex();

}
void main(void){
  //yydebug=1;

	globalScoop=new ScoopNode(NULL);
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
