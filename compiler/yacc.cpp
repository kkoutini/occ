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
#line 5 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:339  */

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

#line 146 "yacc.cpp" /* yacc.c:339  */

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
#line 150 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:355  */

#include "ast\node.h"

#line 180 "yacc.cpp" /* yacc.c:355  */

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
#line 153 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:355  */

	
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
	   

#line 279 "yacc.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 294 "yacc.cpp" /* yacc.c:358  */

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
#define YYLAST   871

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  266
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  480

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
       0,   183,   183,   186,   187,   189,   190,   191,   192,   193,
     195,   205,   209,   214,   215,   217,   219,   225,   229,   234,
     239,   243,   245,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   263,   270,   273,   277,   282,   283,   287,
     288,   289,   290,   291,   292,   295,   296,   299,   300,   301,
     304,   307,   315,   326,   327,   328,   333,   336,   339,   343,
     347,   351,   352,   355,   361,   362,   363,   365,   373,   380,
     384,   390,   391,   392,   393,   394,   395,   396,   397,   400,
     401,   402,   406,   407,   408,   409,   413,   422,   433,   442,
     453,   462,   470,   478,   486,   494,   504,   515,   520,   524,
     525,   528,   532,   538,   541,   543,   547,   552,   558,   566,
     567,   571,   578,   583,   584,   587,   594,   601,   610,   614,
     616,   622,   630,   636,   640,   649,   662,   665,   670,   676,
     682,   685,   691,   694,   695,   698,   699,   702,   710,   717,
     726,   735,   741,   748,   755,   770,   774,   780,   785,   794,
     798,   802,   808,   817,   820,   824,   826,   829,   838,   844,
     850,   857,   861,   862,   865,   868,   875,   884,   887,   892,
     895,   898,   903,   908,   911,   929,   935,   939,   943,   948,
     952,   956,   961,   967,   978,   981,   986,   989,   992,   995,
     998,  1001,  1004,  1007,  1011,  1014,  1017,  1022,  1025,  1030,
    1037,  1038,  1042,  1052,  1055,  1059,  1062,  1065,  1068,  1072,
    1076,  1079,  1083,  1084,  1085,  1086,  1087,  1088,  1095,  1108,
    1120,  1126,  1136,  1140,  1147,  1152,  1158,  1162,  1164,  1169,
    1177,  1183,  1188,  1191,  1195,  1200,  1205,  1211,  1214,  1215,
    1216,  1217,  1220,  1221,  1224,  1225,  1226,  1229,  1230,  1231,
    1233,  1241,  1247,  1255,  1263,  1269,  1272,  1278,  1285,  1290,
    1295,  1300,  1307,  1311,  1316,  1317,  1320
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

#define YYPACT_NINF -313

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-313)))

#define YYTABLE_NINF -65

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-65)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     162,    36,   319,    40,    54,   105,   113,   133,   139,  -313,
    -313,   253,   121,  -313,  -313,   324,  -313,   393,  -313,  -313,
    -313,   148,   163,    66,  -313,  -313,  -313,  -313,   638,   155,
    -313,    15,    15,  -313,   159,   123,   267,  -313,  -313,  -313,
     699,  -313,    15,    15,   415,  -313,   428,  -313,  -313,   207,
    -313,   207,  -313,   457,   464,  -313,   364,   230,  -313,   243,
     214,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
     232,  -313,   249,   258,   411,  -313,   221,   221,  -313,   442,
    -313,  -313,  -313,  -313,  -313,   125,   327,   232,   335,    96,
     343,  -313,   335,   341,   483,  -313,   288,   306,  -313,  -313,
     377,  -313,  -313,  -313,   221,   111,   337,  -313,   221,   335,
    -313,   335,  -313,  -313,   501,  -313,  -313,  -313,  -313,   365,
    -313,  -313,   507,  -313,  -313,  -313,  -313,    25,   347,  -313,
     450,   323,   342,  -313,  -313,  -313,   221,   307,    12,    28,
    -313,  -313,   395,  -313,   360,   386,   151,  -313,  -313,   327,
    -313,   433,  -313,  -313,   514,  -313,  -313,   382,  -313,  -313,
    -313,  -313,  -313,   174,   427,  -313,   153,   304,  -313,  -313,
    -313,  -313,   214,  -313,   232,   378,   424,   430,  -313,   436,
     460,  -313,   302,   571,   468,   462,  -313,  -313,   425,  -313,
    -313,  -313,  -313,  -313,  -313,   571,  -313,   571,   466,    -4,
       1,   473,  -313,   571,  -313,   571,   -15,  -313,  -313,  -313,
     243,   302,   475,    12,   238,  -313,  -313,    34,  -313,  -313,
    -313,   193,  -313,   510,  -313,   488,   474,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,   536,   482,  -313,
     308,  -313,   198,   462,   166,   147,   147,   494,    20,   235,
     667,  -313,  -313,  -313,  -313,   495,   499,   302,   512,  -313,
      -4,   208,  -313,   447,   513,   307,   263,   195,  -313,  -313,
    -313,   469,  -313,  -313,   302,   525,  -313,  -313,   526,  -313,
    -313,   448,  -313,   302,   531,  -313,    17,  -313,   524,  -313,
     527,  -313,  -313,  -313,   490,  -313,   492,  -313,   307,  -313,
    -313,   360,   528,  -313,  -313,  -313,   533,  -313,   299,   506,
     544,   290,   538,   631,   302,  -313,  -313,   362,   357,   367,
     523,  -313,  -313,   235,   493,   233,  -313,  -313,   208,  -313,
     302,   302,   302,   302,   537,   321,  -313,   517,   302,   517,
    -313,   462,  -313,   462,   548,   208,  -313,   558,   515,   560,
    -313,   571,   563,   451,  -313,  -313,   553,  -313,   243,  -313,
      16,  -313,  -313,  -313,   302,   530,   760,    24,   700,   392,
     233,  -313,  -313,   147,   147,   302,   302,   302,   302,   302,
    -313,   549,  -313,   239,   239,  -313,  -313,   232,   556,   571,
    -313,   566,  -313,  -313,  -313,  -313,  -313,  -313,   302,  -313,
     558,  -313,  -313,   511,   572,   535,  -313,  -313,   522,   534,
    -313,   302,  -313,   561,   778,   792,   158,  -313,   408,   408,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,   581,   232,  -313,
     739,  -313,  -313,   584,  -313,   579,   542,  -313,   585,  -313,
    -313,  -313,  -313,  -313,   565,  -313,   568,   810,   580,   594,
     746,  -313,   582,   583,   302,  -313,   589,  -313,  -313,  -313,
    -313,   575,   571,   586,   587,   590,  -313,   799,  -313,  -313,
    -313,  -313,   571,   799,   588,  -313,  -313,  -313,   799,  -313
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       5,     0,     0,     8,     6,     0,     7,     0,     9,    13,
      14,    12,   128,     0,   251,    70,     1,     3,     0,     0,
      23,     0,     0,    10,     0,     0,     0,   108,   109,   110,
       0,   132,     0,     0,     0,   126,     0,   134,   135,     0,
     136,     0,   255,     0,     0,   250,     0,     0,   257,     0,
       0,    93,    92,    91,    95,    90,    55,    54,    53,    46,
       0,    94,     0,     0,     0,    48,    49,     0,    52,     0,
      84,    85,    82,    83,    36,     0,   119,     0,     0,     0,
     118,   121,     0,     0,    26,    20,     0,     0,    31,    21,
       0,    32,    22,   107,     0,     0,     0,    68,    56,     0,
     139,     0,   142,   130,     0,   131,   133,   144,   137,     0,
     140,   254,     0,   253,    15,    11,   127,   260,     0,    96,
       0,    88,    86,    45,    47,    51,    50,    62,     0,     0,
      61,    34,     0,    33,     0,     0,     0,   114,   112,     0,
     120,     0,   116,    24,     0,    28,    17,     0,    29,    18,
      30,    19,    69,     0,    80,    73,     0,     0,    67,   138,
     141,   129,   202,   146,     0,     0,     0,     0,   173,     0,
       0,   218,     0,     0,     0,     0,   153,   143,     0,   148,
     156,   152,   154,   149,   171,     0,   169,     0,     0,     0,
       0,   201,   170,     0,   150,     0,     0,   161,   155,   252,
       0,     0,     0,     0,     0,    89,    87,     0,    65,    99,
      66,     0,    57,     0,    35,     0,   122,   124,   117,   113,
     111,   115,    25,    27,    16,    77,    81,     0,     0,    71,
       0,    74,     0,     0,     0,     0,     0,     0,    88,   202,
       0,   203,   205,   206,   204,     0,     0,     0,     0,   197,
     207,   198,   201,     0,     0,     0,   106,     0,   163,   145,
     147,     0,   174,   151,     0,     0,   221,   220,     0,   157,
     230,   232,   241,     0,     0,   234,     0,   243,     0,   261,
     259,   256,    63,    58,     0,   102,    97,    59,     0,    60,
     125,     0,     0,    79,    75,    78,     0,    72,     0,   185,
       0,     0,     0,     0,     0,   195,   196,     0,     0,     0,
       0,   213,   214,   202,   207,     0,   215,   216,   217,   168,
       0,     0,     0,     0,     0,   263,   158,   104,     0,   104,
     166,     0,   159,     0,     0,   199,   200,   222,     0,   223,
     225,     0,     0,     0,   239,   242,     0,   240,     0,   101,
       0,   123,    76,   160,     0,     0,     0,     0,     0,     0,
     198,   191,   231,     0,     0,     0,     0,     0,     0,     0,
     235,     0,   212,   208,   209,   210,   211,     0,     0,     0,
     262,     0,   167,   105,   165,   164,   162,   172,     0,   219,
       0,   224,   233,     0,     0,   248,   238,   258,     0,     0,
     184,     0,   182,     0,     0,     0,     0,   192,   193,   194,
     186,   187,   188,   189,   190,   237,   236,     0,     0,   266,
       0,   103,   229,   226,   228,     0,   245,   249,     0,   100,
      98,   183,   181,   180,     0,   179,     0,     0,     0,     0,
       0,    38,     0,    40,     0,   246,     0,   247,   176,   177,
     178,     0,     0,     0,    41,     0,    37,     0,   227,   244,
     175,   264,     0,     0,    43,    39,   265,    44,     0,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -313,  -313,  -313,   596,  -313,  -313,  -313,   591,  -313,  -313,
    -312,    13,  -313,   539,   532,  -313,  -313,   -20,   480,   389,
    -313,  -313,  -313,  -152,   -28,  -313,  -313,  -313,  -313,  -109,
    -313,  -313,   279,  -313,    97,   -29,  -313,  -313,   -21,    18,
    -313,   529,  -313,   322,  -313,  -313,  -313,   576,   -40,  -313,
    -313,  -313,  -313,   154,  -313,  -313,  -313,  -179,  -313,  -313,
     381,  -122,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -238,
    -112,   -92,  -116,  -212,  -313,  -105,  -313,  -313,  -313,   276,
    -313,   173,  -313,   359,  -313,  -313,  -313,  -313,  -313,  -313,
     345,   346,  -313,  -313,  -313,    94,  -209,  -313,  -313,  -313
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    33,    34,    85,   431,
     452,    35,    74,    75,    76,    77,   106,    78,   139,   140,
     108,    12,    13,   166,   185,    80,    81,    82,    83,   218,
     296,   219,   392,   340,    36,    37,    38,    39,   257,    89,
      90,    91,   226,   227,    14,    15,    45,    46,    47,    48,
      49,    50,    51,   186,   119,   187,   188,   189,   190,   191,
     267,   268,   192,   193,   194,   195,   196,   197,   312,   317,
     318,   259,   260,   261,   200,   262,   278,   348,   349,   350,
     433,   434,   202,   203,   204,   205,   206,   426,   285,   286,
     287,   288,    16,    17,    55,   207,   128,   208,   335,   390
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,   289,   282,   199,   263,   276,   116,   103,   319,   270,
      88,    92,    79,   220,   201,   242,   271,   408,   272,    86,
     107,   109,   111,   -64,   280,   103,   281,   198,    44,   221,
     -64,    58,   283,   284,   354,   414,    59,   274,   325,   222,
      19,    87,   130,   210,    22,   328,   223,    96,    79,    79,
      93,   409,   181,   373,   374,   275,   135,   215,    23,   145,
     110,   112,   345,   217,   283,   284,   211,   199,   103,   294,
     258,   103,   199,   367,   116,   369,    79,    58,   201,   199,
      79,   199,    59,   201,   162,   303,   295,   199,   168,   199,
     201,   198,   201,   103,    18,   277,   198,   147,   201,   290,
     201,   370,    18,   198,   292,   198,   146,   148,    79,    24,
     151,   198,   163,   198,    54,   164,   135,    25,   383,   384,
     385,   386,   165,   225,    98,   103,   141,   169,   103,   170,
     416,    97,   100,    26,   324,   418,   419,    40,   465,    -2,
       1,   324,     2,   142,    99,   143,   243,    31,    32,   407,
     122,   249,   229,    56,   238,   475,   337,   339,   324,    84,
      94,   477,   230,     1,   239,     2,   479,     3,    57,   447,
     309,   352,   402,   313,   405,    28,   310,   311,   251,   252,
      95,   253,   254,    31,    32,   235,   314,   373,   374,     4,
       3,   154,   236,   157,   297,     5,   341,     6,   181,   306,
     315,   316,   371,   118,   -63,   120,   342,   255,   256,   307,
     429,   -63,     4,   343,   324,   324,   324,   324,     5,   395,
       6,   396,   145,   117,   436,    60,   393,    61,    62,    63,
      64,    65,   330,   331,   126,   199,    60,   199,    61,    62,
      63,    64,    65,    70,    71,   332,   201,   127,   201,   293,
     333,   129,   410,   131,   413,    71,   223,   330,   331,   198,
     382,   198,   132,   420,   421,   422,   423,   424,   101,    28,
     332,    72,    29,   199,    30,   333,   332,    31,    32,    73,
     225,   333,    72,   471,   201,   145,   432,   199,   102,   155,
      73,    31,    32,   476,   249,   321,   322,   198,   201,   441,
     341,   366,   444,   446,   338,   240,   249,   158,   164,   156,
     363,   198,    31,    32,   217,   241,   313,   343,   453,   305,
      20,   251,   252,    21,   253,   254,   236,   159,   250,   314,
      31,    32,   144,   251,   252,   461,   253,   254,   453,    86,
      28,   181,   432,   315,   316,    41,   199,   149,    42,    43,
     255,   256,   152,   181,   167,   453,   199,   201,   217,   427,
     215,   453,   255,   256,   212,   124,   453,   201,   125,   172,
     198,    61,    62,    63,    64,    65,   375,   376,   160,   216,
     198,   117,   173,   233,   388,   389,    87,   174,    71,   372,
     377,   373,   374,   378,   380,   379,   373,   374,   161,   224,
     449,    31,    32,   234,   244,   175,    31,    32,   176,   177,
     178,   179,    29,   228,    52,   180,   181,    31,    32,   417,
     182,   373,   374,    73,    66,    67,    68,   183,   133,   172,
     184,    61,    62,    63,    64,    65,   113,   -65,   -65,    42,
      43,   117,   269,   137,   231,   237,   138,   174,    71,   115,
     245,   137,    42,    43,   213,   172,   246,    61,    62,    63,
      64,    65,   247,   265,   248,   175,   266,   117,   176,   177,
     178,   179,   264,   174,    71,   180,   181,   273,   121,   301,
     182,    31,    32,    73,   279,   123,   291,   183,    31,    32,
     184,   175,   300,   304,   176,   177,   178,   179,   320,   326,
     404,   180,   181,   327,   153,   351,   182,    31,    32,    73,
     334,   298,   176,   183,   213,   172,   184,    61,    62,    63,
      64,    65,   171,   329,   336,    42,    43,   117,   209,   346,
     347,    31,    32,   174,    71,   232,   353,   302,    31,    32,
     164,   357,   359,   360,   362,   358,   236,   364,   365,   368,
     381,   175,   275,   387,   176,   177,   178,   179,   391,   397,
     435,   180,   181,   398,   400,   425,   182,   399,   403,    73,
     406,   411,   428,   183,   439,   172,   184,    61,    62,    63,
      64,    65,   430,   437,   438,   448,   440,   117,   442,   454,
     455,   456,   458,   174,    71,   459,   457,   462,   463,   466,
     469,   467,   470,   472,    27,   473,   478,   474,    53,   136,
     214,   175,   299,   134,   176,   177,   178,   179,   394,   150,
     114,   180,   181,   361,   308,   401,   182,   468,     0,    73,
     344,   355,   356,   183,     0,   323,   184,    61,    62,    63,
      64,    65,    60,     0,    61,    62,    63,    64,    65,     0,
       0,    66,    67,    68,    71,    69,     0,   313,     0,     0,
      70,    71,   251,   252,     0,   253,   254,     0,     0,     0,
     314,   323,     0,    61,    62,    63,    64,    65,     0,     0,
       0,    72,   181,     0,   315,   316,     0,     0,    72,    73,
      71,   255,   256,   250,     0,     0,    73,     0,   251,   252,
     104,   253,   254,    60,   249,    61,    62,    63,    64,    65,
       0,   415,     0,     0,     0,     0,   105,    72,   181,     0,
       0,    70,    71,     0,     0,    73,   313,   255,   256,     0,
       0,   251,   252,     0,   253,   254,     0,     0,     0,   314,
       0,     0,     0,   249,     0,     0,     0,     0,     0,    72,
     249,   181,     0,   315,   316,   450,   451,    73,     0,     0,
     255,   256,   450,   464,   249,   250,     0,     0,     0,     0,
     251,   252,   250,   253,   254,     0,     0,   251,   252,     0,
     253,   254,   249,     0,     0,     0,   250,   412,     0,     0,
     181,   251,   252,     0,   253,   254,   249,   181,     0,   255,
     256,     0,     0,   249,   250,   443,   255,   256,     0,   251,
     252,   181,   253,   254,   249,   450,     0,     0,   250,   445,
     255,   256,     0,   251,   252,   250,   253,   254,     0,   181,
     251,   252,     0,   253,   254,     0,   250,   460,   255,   256,
       0,   251,   252,   181,   253,   254,     0,     0,     0,     0,
     181,     0,   255,   256,     0,     0,     0,     0,     0,   255,
     256,   181,     0,     0,     0,     0,     0,     0,     0,     0,
     255,   256
};

static const yytype_int16 yycheck[] =
{
      28,   210,    17,   119,   183,     4,    46,    36,   246,   188,
      31,    32,    40,     1,   119,   167,   195,     1,   197,     4,
      40,    42,    43,    11,   203,    54,   205,   119,    15,   138,
      18,    11,    47,    48,    17,    11,    16,    41,   250,    11,
       4,    26,    70,    18,     4,   257,    18,    34,    76,    77,
      32,    35,    51,    29,    30,    59,    76,    37,     4,    87,
      42,    43,   274,    51,    47,    48,    41,   183,    97,    35,
     182,   100,   188,   311,   114,   313,   104,    11,   183,   195,
     108,   197,    16,   188,   104,   237,    52,   203,   108,   205,
     195,   183,   197,   122,     0,   200,   188,     1,   203,   211,
     205,   313,     8,   195,   213,   197,    88,    11,   136,     4,
      92,   203,     1,   205,    17,     4,   136,     4,   330,   331,
     332,   333,    11,   144,     1,   154,     1,   109,   157,   111,
     368,    34,    35,     0,   250,   373,   374,    16,   450,     0,
       1,   257,     3,    18,    21,    20,   174,    24,    25,   358,
      53,     4,     1,     5,     1,   467,   265,   266,   274,     4,
       1,   473,    11,     1,    11,     3,   478,    28,     5,    11,
       4,   283,   351,    26,   353,    16,    10,    11,    31,    32,
      21,    34,    35,    24,    25,    11,    39,    29,    30,    50,
      28,    94,    18,    96,     1,    56,     1,    58,    51,     1,
      53,    54,   314,    49,    11,    51,    11,    60,    61,    11,
     389,    18,    50,    18,   330,   331,   332,   333,    56,   341,
      58,   343,   250,    16,   403,     4,   338,     6,     7,     8,
       9,    10,    24,    25,     4,   351,     4,   353,     6,     7,
       8,     9,    10,    22,    23,    37,   351,     4,   353,    11,
      42,    37,   364,     4,   366,    23,    18,    24,    25,   351,
      27,   353,     4,   375,   376,   377,   378,   379,     1,    16,
      37,    50,    19,   389,    21,    42,    37,    24,    25,    58,
     301,    42,    50,   462,   389,   313,   398,   403,    21,     1,
      58,    24,    25,   472,     4,    60,    61,   389,   403,   411,
       1,    11,   414,   415,    41,     1,     4,     1,     4,    21,
      11,   403,    24,    25,    51,    11,    26,    18,   430,    11,
       1,    31,    32,     4,    34,    35,    18,    21,    26,    39,
      24,    25,     5,    31,    32,   447,    34,    35,   450,     4,
      16,    51,   454,    53,    54,    21,   462,     4,    24,    25,
      60,    61,    11,    51,    17,   467,   472,   462,    51,   387,
      37,   473,    60,    61,    17,     1,   478,   472,     4,     4,
     462,     6,     7,     8,     9,    10,    19,    20,     1,    37,
     472,    16,    17,     1,    63,    64,    26,    22,    23,    27,
      33,    29,    30,    36,    27,    38,    29,    30,    21,     4,
     428,    24,    25,    21,    26,    40,    24,    25,    43,    44,
      45,    46,    19,    27,    21,    50,    51,    24,    25,    27,
      55,    29,    30,    58,    13,    14,    15,    62,    17,     4,
      65,     6,     7,     8,     9,    10,    21,    29,    30,    24,
      25,    16,    17,     1,    11,    18,     4,    22,    23,    21,
      26,     1,    24,    25,     4,     4,    26,     6,     7,     8,
       9,    10,    26,     1,     4,    40,     4,    16,    43,    44,
      45,    46,     4,    22,    23,    50,    51,    11,    21,     5,
      55,    24,    25,    58,    11,    21,    11,    62,    24,    25,
      65,    40,     4,    11,    43,    44,    45,    46,     4,     4,
      49,    50,    51,     4,    21,    57,    55,    24,    25,    58,
      63,     1,    43,    62,     4,     4,    65,     6,     7,     8,
       9,    10,    21,    11,    11,    24,    25,    16,    21,     4,
       4,    24,    25,    22,    23,    21,     5,     1,    24,    25,
       4,    17,    52,    51,    11,    18,    18,    41,     4,    11,
      27,    40,    59,    16,    43,    44,    45,    46,    41,    11,
      49,    50,    51,     5,     4,    16,    55,    52,     5,    58,
      17,    41,    16,    62,    52,     4,    65,     6,     7,     8,
       9,    10,    16,    11,    49,     4,    52,    16,    27,     5,
      11,    49,    27,    22,    23,    27,    11,    17,     4,    17,
      11,    18,    27,    17,     8,    18,    18,    17,    17,    77,
     130,    40,   223,    74,    43,    44,    45,    46,   339,    90,
      44,    50,    51,   301,   243,   349,    55,   454,    -1,    58,
     271,   286,   286,    62,    -1,     4,    65,     6,     7,     8,
       9,    10,     4,    -1,     6,     7,     8,     9,    10,    -1,
      -1,    13,    14,    15,    23,    17,    -1,    26,    -1,    -1,
      22,    23,    31,    32,    -1,    34,    35,    -1,    -1,    -1,
      39,     4,    -1,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    50,    51,    -1,    53,    54,    -1,    -1,    50,    58,
      23,    60,    61,    26,    -1,    -1,    58,    -1,    31,    32,
       1,    34,    35,     4,     4,     6,     7,     8,     9,    10,
      -1,    11,    -1,    -1,    -1,    -1,    17,    50,    51,    -1,
      -1,    22,    23,    -1,    -1,    58,    26,    60,    61,    -1,
      -1,    31,    32,    -1,    34,    35,    -1,    -1,    -1,    39,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    50,
       4,    51,    -1,    53,    54,    16,    17,    58,    -1,    -1,
      60,    61,    16,    17,     4,    26,    -1,    -1,    -1,    -1,
      31,    32,    26,    34,    35,    -1,    -1,    31,    32,    -1,
      34,    35,     4,    -1,    -1,    -1,    26,    27,    -1,    -1,
      51,    31,    32,    -1,    34,    35,     4,    51,    -1,    60,
      61,    -1,    -1,     4,    26,    27,    60,    61,    -1,    31,
      32,    51,    34,    35,     4,    16,    -1,    -1,    26,    27,
      60,    61,    -1,    31,    32,    26,    34,    35,    -1,    51,
      31,    32,    -1,    34,    35,    -1,    26,    27,    60,    61,
      -1,    31,    32,    51,    34,    35,    -1,    -1,    -1,    -1,
      51,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,    60,
      61,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61
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
     111,    21,     4,    17,    22,    40,    43,    44,    45,    46,
      50,    51,    55,    62,    65,    96,   125,   127,   128,   129,
     130,   131,   134,   135,   136,   137,   138,   139,   143,   144,
     146,   147,   154,   155,   156,   157,   158,   167,   169,    21,
      18,    41,    17,     4,    90,    37,    37,    51,   101,   103,
       1,   101,    11,    18,     4,   110,   114,   115,    27,     1,
      11,    11,    21,     1,    21,    11,    18,    18,     1,    11,
       1,    11,    95,    96,    26,    26,    26,    26,     4,     4,
      26,    31,    32,    34,    35,    60,    61,   110,   142,   143,
     144,   145,   147,   129,     4,     1,     4,   132,   133,    17,
     129,   129,   129,    11,    41,    59,     4,   147,   148,    11,
     129,   129,    17,    47,    48,   160,   161,   162,   163,   168,
     142,    11,   101,    11,    35,    52,   102,     1,     1,    91,
       4,     5,     1,    95,    11,    11,     1,    11,   132,     4,
      10,    11,   140,    26,    39,    53,    54,   141,   142,   141,
       4,    60,    61,     4,   144,   145,     4,     4,   145,    11,
      24,    25,    37,    42,    63,   170,    11,   101,    41,   101,
     105,     1,    11,    18,   155,   145,     4,     4,   149,   150,
     151,    57,   142,     5,    17,   162,   163,    17,    18,    52,
      51,   115,    11,    11,    41,     4,    11,   141,    11,   141,
     145,   142,    27,    29,    30,    19,    20,    33,    36,    38,
      27,    27,    27,   145,   145,   145,   145,    16,    63,    64,
     171,    41,   104,   142,   104,   133,   133,    11,     5,    52,
       4,   151,   129,     5,    49,   129,    17,   168,     1,    35,
     142,    41,    27,   142,    11,    11,   141,    27,   141,   141,
     142,   142,   142,   142,   142,    16,   159,    96,    16,   129,
      16,    81,   142,   152,   153,    49,   129,    11,    49,    52,
      52,   142,    27,    27,   142,    27,   142,    11,     4,    96,
      16,    17,    82,   142,     5,    11,    49,    11,    27,    27,
      27,   142,    17,     4,    17,    82,    17,    18,   153,    11,
      27,   129,    17,    18,    17,    82,   129,    82,    18,    82
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
     148,   148,   149,   149,   150,   150,   151,   152,   152,   153,
     154,   155,   156,   156,   156,   157,   158,   159,   160,   160,
     160,   160,   161,   161,   162,   162,   162,   163,   163,   163,
     164,   165,   166,   166,   166,   166,   167,   167,   168,   168,
     168,   168,   169,   169,   170,   170,   171
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
       1,     1,     1,     1,     2,     1,     3,     3,     1,     1,
       2,     4,     2,     4,     2,     4,     5,     1,     3,     2,
       2,     1,     2,     1,     6,     4,     5,     5,     3,     4,
       2,     2,     3,     2,     2,     1,     6,     3,     5,     3,
       1,     3,     4,     3,     6,     7,     2
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
#line 183 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"program: components\n"; 
										 }
#line 2040 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 186 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"components: components component\n";}
#line 2046 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 187 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"components: component\n";}
#line 2052 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 189 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface \n";}
#line 2058 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 190 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation \n";}
#line 2064 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 191 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"protocol \n";}
#line 2070 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 192 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct \n";}
#line 2076 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 193 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum \n";}
#line 2082 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 195 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface: class_interface_header class_interface_body\n";
																interface->setClassNode(classNode);
																classNode=NULL;
																 idsList.clear();
																 methodsList.clear();
																 method=NULL;
																}
#line 2094 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 205 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																				interface=InterfaceHelper::createNewInterface((yyvsp[-2].r.text),(yyvsp[0].r.text),symbolTable);
																				classNode=new ClassNode(NULL,interface);
																				}
#line 2103 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 209 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																					cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
																				 interface=InterfaceHelper::createNewInterface((yyvsp[0].r.text),"",symbolTable);
																				 	classNode=new ClassNode(NULL,interface);
																				}
#line 2113 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 214 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Unknown type name '"<<(yyvsp[-1].r.text)<<"' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2119 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 215 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2125 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 217 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2131 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 220 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
															
														InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2141 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 226 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														}
#line 2149 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 230 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	protocol_reference_list interface_declaration_list	AT_END\n";
														}
#line 2158 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 235 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2167 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 240 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														}
#line 2175 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 244 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_body:instance_variables		AT_END\n";}
#line 2181 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 246 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {														
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:interface_declaration_list	AT_END\n";
														}
#line 2190 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 250 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_body:AT_END\n";}
#line 2196 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 251 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2202 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 252 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2208 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 253 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2214 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 254 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2220 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 255 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2226 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 256 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2232 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 257 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2238 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 258 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2244 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 259 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2250 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 263 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													if(interface!=NULL){
													InterfaceHelper::addInheritedProtocol(interface,idsList,symbolTable);
														idsList.clear();
													}
													cout<<"protocol_reference_list: LESS_THAN ids_list_identifier MORE_THAN\n";
												}
#line 2262 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 270 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '>' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2268 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 273 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"ids_list:ids_list_identifier COMMA IDENTIFIER\n"; 
													idsList.push_back((yyvsp[0].r.text));
													}
#line 2277 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 277 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"ids_list_identifier:IDENTIFIER\n";
													idsList.push_back((yyvsp[0].r.text));
												    }
#line 2286 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 282 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array with body";}
#line 2292 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 283 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array without elements";}
#line 2298 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 287 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array-element \n";}
#line 2304 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 288 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array-element \n";}
#line 2310 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 289 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"empty element \n";}
#line 2316 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 290 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2322 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 291 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2328 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 292 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2334 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 295 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";}
#line 2340 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 296 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variables:OPEN_S	 CLOSE_S\n";}
#line 2346 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 299 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";}
#line 2352 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 300 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:instance_variable_declaration\n";}
#line 2358 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 301 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:variable_declaration_list\n";}
#line 2364 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 304 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declaration:visibility_specification variable_declaration_list\n";
																	}
#line 2371 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 308 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
											arrayList.clear();
												idsList.clear();
												flag=false;
										}
#line 2383 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 316 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										       InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
												arrayList.clear();
												idsList.clear();
												flag=false;
										cout<<"variable_declaration_list: variable_declaration\n";
										}
#line 2395 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 326 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PRIVATE\n";  visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2401 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 327 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PROTECTED\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2407 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 328 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PUBLIC\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2413 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 333 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct_variable_declaration:struct_declaration_list\n";}
#line 2419 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 336 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
	                                           (yyval.r.text)=(yyvsp[-2].r.text);
												}
#line 2427 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 339 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
													}
#line 2436 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 343 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2442 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 347 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"ids_list:ids_list COMMA id_dec\n"; 

									}
#line 2451 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 351 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"ids_list:id_dec\n"; }
#line 2457 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 352 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2463 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 355 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout <<" data_member: IDENTIFIER array_tag \n";
							 var=new Array((yyvsp[0].r.text),arrayAlloc.size(),NULL);
					       ( dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
						   arrayList.push_back( ( dynamic_cast<Array*>(var)));
						      arrayAlloc.clear();
							}
#line 2474 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 361 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {idsList.push_back((yyvsp[0].r.text)) ;cout <<" data_member: IDENTIFIER  \n";}
#line 2480 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 362 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2486 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 363 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2492 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 365 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {  
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																												idsList.clear();
																												flag=false;
																										  cout<<"struct_declaration_list: struct_declaration_list  variable_declarationxx\n";
																										}
#line 2504 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 373 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																														 	idsList.clear();
																															flag=false;
																										cout<<"struct_declaration_list:  variable_declarationxx\n";
																										}
#line 2516 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 380 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Illigal visibility specification at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2522 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 384 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
					myStruct=StructHelper::createNewStruct((yyvsp[0].r.text),symbolTable);
					cout<<"struct_header: STRUCT  IDENTIFIER\n";
					}
#line 2531 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 390 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S  entity SEMI_COMA\n";}
#line 2537 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 391 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S enteity SEMI_COMA \n";}
#line 2543 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 392 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S SEMI_COMA\n";}
#line 2549 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 393 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S  SEMI_COMA  \n";}
#line 2555 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 394 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2561 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 395 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2567 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 396 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2573 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 397 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2579 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 400 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"entity: IDENTIFIER COMMA  entity\n";}
#line 2585 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 401 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"entity:  IDENTIFIER \n";}
#line 2591 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 402 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2597 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 406 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type:simple type\n";}
#line 2603 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 407 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: complex type\n";}
#line 2609 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 408 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: struct_type\n";}
#line 2615 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 409 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: enum_type\n";}
#line 2621 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 413 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {	cout<<"struct_type: STRUCT IDENTIFIER   \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																		string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2635 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 422 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct_type: STRUCT IDENTIFIER  MULTI \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2649 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 433 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum_type: ENUM IDENTIFIER \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2663 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 442 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum_type: ENUM IDENTIFIER  MULTI  \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																									string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2677 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 453 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"int type \n";
																type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
																}
#line 2691 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 462 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"char type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2704 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 470 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"float type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2717 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 478 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"NSString type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2730 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 486 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"void type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2743 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 494 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"bool type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2756 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 504 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 2771 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 515 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_tag: array_first_tag array_tag_list \n"; 
										   }
#line 2779 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 520 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"array_tag_list: array_tag_list OPEN_ARR INT_VAL CLOSE_ARR\n"; 
																arrayAlloc.push_back((yyvsp[-1].r.int_val));
														   }
#line 2788 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 525 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<" Error:missing  dimension in array tag  ";arrayAlloc.clear();}
#line 2794 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 528 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_first_tag: OPEN_ARR INT_VAL CLOSE_ARR\n"; 
											arrayAlloc.push_back((yyvsp[-1].r.int_val));
											}
#line 2803 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 532 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_first_tag: OPEN_ARR  CLOSE_ARR\n"; 
											arrayAlloc.push_back(-1);
											}
#line 2812 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 538 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							   }
#line 2820 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 543 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout <<"with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							 }
#line 2829 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 552 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
															 methodsList.push_back(method);
														
															 
																}
#line 2840 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 558 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																 cout<<"interface_declaration_list:interface_declaration\n";
															 methodsList.push_back(method);
															 
																 	
																 }
#line 2851 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 566 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"interface_declaration: class_method_declaration\n";}
#line 2857 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 567 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"interface_declaration: instance_method_declaration\n";}
#line 2863 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 571 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_method_declaration: PLUS p_type method_selectors	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,true);
															
																 selectorsList.clear();
																
																}
#line 2875 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 578 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_method_declaration: PLUS			 method_selectors	SEMI_COMA\n";
																		method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																}
#line 2885 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 583 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2891 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 584 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2897 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 587 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															cout<<"instance_method_declaration: MINUS p_type	method_selectors		SEMI_COMA\n";
															method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,false);
																 selectorsList.clear();
																
																
															}
#line 2909 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 594 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"instance_method_declaration: MINUS			 method_selectors	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																}
#line 2919 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 601 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.r.text)=(yyvsp[-1].r.text);
																}
#line 2928 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 610 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"method_selectors: selectors_list\n";
																	(yyval.r.text)="";
																}
#line 2937 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 614 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"method_selectors:IDENTIFIER \n";(yyval.r.text)=(yyvsp[0].r.text);}
#line 2943 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 616 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"selectors_list:	selectors_list selector_decleration\n";
																
													selectorsList.push_back(tselector);
													tselector=NULL;
											}
#line 2954 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 622 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"selectors_list:	 selector_decleration\n";
												selectorsList.clear();

												selectorsList.push_back(tselector);
												tselector=NULL;
}
#line 2966 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 630 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				cout<<"selector_decleration:	IDENTIFIER	SEMI_COLUMN	parameter_list	\n";
																				tselector=new DeclerationSelector((yyvsp[-2].r.text),selectorVarList);
																			}
#line 2975 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 636 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"parameter_list: parameter_list parameter\n";
																	selectorVarList.push_back(var);		
											}
#line 2984 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 640 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									selectorVarList.clear();
										selectorVarList.push_back(var);		
											
				 
														cout<<"parameter_list:  parameter\n";
						
					}
#line 2997 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 649 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"parameter:  p_type IDENTIFIER\n";
																
																if(type!=NULL){
																var=new Variable((yyvsp[0].r.text),type);
																}
																else{
																cout<<"Error:Type not found.\n";
																}
																}
#line 3012 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 662 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation: class_implementation_header class_implementation_body\n";}
#line 3018 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 665 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																	interface=InterfaceHelper::checkImplementation((yyvsp[-2].r.text),symbolTable,(yyvsp[0].r.text));
																	
																}
#line 3028 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 670 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																interface=InterfaceHelper::checkImplementation((yyvsp[0].r.text),symbolTable,"");
																	
																}
#line 3037 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 676 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";
																			InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														}
#line 3047 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 682 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
																	cout<<"class_implementation_body: instance_variables									AT_END\n";
																}
#line 3055 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 685 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_body:						implementation_definition_list	AT_END\n";
																	InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														
																}
#line 3066 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 691 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation_body:	AT_END\n";}
#line 3072 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 694 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);cout<<"implementation_definition_list: implementation_definition_list implementation_definition\n";}
#line 3078 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 695 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);cout<<"implementation_definition_list: implementation_definition\n";}
#line 3084 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 698 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"implementation_definition: class_implementation_definition	\n";}
#line 3090 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 699 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"implementation_definition: instance_implementation_definition \n";}
#line 3096 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 702 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"class_implementation_definition: class_implementation_definition_header block_body";
														//method->setFunctionNode(functionNode);
														functionNode=NULL;
													nodeXX=method;
													}
#line 3107 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 710 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"class_implementation_definition_header: PLUS p_type		 method_selectors\n";
															method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																
																
										}
#line 3119 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 717 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"class_implementation_definition_header:  PLUS			 method_selectors\n";
													 method =InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
									
										}
#line 3130 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 726 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															scoop=NULL;
															cscoop=NULL;
															cout<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";
															//method->setFunctionNode(functionNode);
														functionNode=NULL;
															}
#line 3142 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 735 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											     cout<<"instance_implementation_definition_header:MINUS p_type		method_selectors\n";
												 method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
															
												}
#line 3153 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 741 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"instance_implementation_definition_header:MINUS 			method_selectors\n";
												 method =InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
												}
#line 3163 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 748 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												
												cout<<"block_body:OPEN_S  block_body_part \n";
												(yyval.r.node)=(yyvsp[-1].r.node);
												}
#line 3173 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 755 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3190 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 770 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												scoop=scoop->getParent();
												cout<<"block_body_statements:statement_list	CLOSE_S	\n";
												}
#line 3199 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 774 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												scoop=scoop->getParent();
												cout<<"block_body_statements:CLOSE_S\n";
												}
#line 3208 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 780 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement_list: statement_list statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3218 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 785 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement_list: statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											(yyval.r.node)=(yyvsp[0].r.node);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3229 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 794 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: loop_statement\n";
											(yyval.r.text)="loop";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3238 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 798 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: conditional_statement\n";
											(yyval.r.text)="cond";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3247 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 802 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"statement: expr\n";
												(yyval.r.text)="expr";
												(yyval.r.node)=(yyvsp[-1].r.node);
												//nodeXX=$<r.node>1;
											}
#line 3258 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 808 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"statement: variable_declaration\n";
											
												ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												(yyval.r.node)=(yyvsp[0].r.node);
										    }
#line 3272 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 817 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: block_body\n";(yyval.r.text)=new char[256];(yyval.r.text)[0]='\0';strcat((yyval.r.text),"Block");
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3280 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 820 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: return_statement\n";
												(yyval.r.text)="return";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3289 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 824 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: try_catch\n";}
#line 3295 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 826 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	                                            (yyval.r.text)="asm";
												(yyval.r.node)=(yyvsp[0].r.node);}
#line 3303 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 829 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	 (yyval.r.text)="call";
	(yyval.r.node)=(yyvsp[-1].r.node);
	}
#line 3312 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 838 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"@asm command \n";
	                                         (yyval.r.node)=new AsmNode(scoop,(yyvsp[-1].r.text));
											 }
#line 3320 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 844 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
														 (yyval.r.text)=(yyvsp[-2].r.text);
														 (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3331 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 850 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
														  (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3343 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 857 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:enum\n";}
#line 3349 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 861 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_list:variable_list COMMA variable\n";}
#line 3355 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 862 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_list:variable\n";
										
										}
#line 3363 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 865 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ',' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3369 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 868 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout <<"variable:  IDENTIFIER array_tag initializer \n";
											 var=new Array((yyvsp[-1].r.text),arrayAlloc.size(),NULL);
											(dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
											 arrayList.push_back( ( dynamic_cast<Array*>(var)));
											 arrayAlloc.clear();
											}
#line 3381 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 875 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
											cout <<"variable:  IDENTIFIER main_initializer \n";
											idsList.push_back((yyvsp[-1].r.text)) ;
											IdentifierNode* identifierNode=new IdentifierNode((yyvsp[-1].r.text),scoop);
											if((yyvsp[0].r.node)!=NULL){
											(dynamic_cast<AssignNode*>((yyvsp[0].r.node)))->setLeftExp(identifierNode);
											}
											declarationList.push_back(make_pair((yyvsp[-1].r.text),(yyvsp[0].r.node)));
											}
#line 3395 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 884 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3401 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 887 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"return_statement: RETURN expr\n";
												 (yyval.r.node)=new ReturnNode(scoop,(yyvsp[-1].r.node));
												}
#line 3409 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 892 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: for_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3417 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 895 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3425 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 898 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: do_while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3433 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 903 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"do_while: do_header   statement   while_loop_header   SEMI_COMMA\n";
													(yyval.r.node)=new DoWhileNode((yyvsp[-1].r.node),(yyvsp[-2].r.node),scoop);
													}
#line 3441 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 908 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"do_header: DO\n";}
#line 3447 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 911 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3468 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 930 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer	SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-5].r.node),(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										//nodeXX=$<r.node>5;
										}
#line 3477 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 936 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3485 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 940 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3493 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 944 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),(yyvsp[-2].r.node),NULL,NULL,scoop);
										}
#line 3501 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 949 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-3].r.node),NULL,NULL,NULL,scoop);
										}
#line 3509 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 953 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA				CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-1].r.node),NULL,NULL,scoop);
										}
#line 3517 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 957 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P";
										(yyval.r.node)=new ForNode(NULL,NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3525 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 962 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_hearder: FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	\n";
											(yyval.r.node)=new ForNode(NULL,NULL,NULL,NULL,scoop);
											}
#line 3533 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 967 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: INT IDENTIFIER EQUAL expr\n";
											AssignNode * temp=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
											
											//temp->add($<r.text>2,);
											
											//temp.push_back(make_pair($<r.text>2,$<r.node>4));
											DeclerationNode* temp1=new DeclerationNode(list<pair<string,Node*>>(),scoop,"int");
											temp1->add((yyvsp[-2].r.text),temp);
										 (yyval.r.node)=temp1; 
										 idsList.push_back((yyvsp[-2].r.text));
										}
#line 3549 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 978 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: IDENTIFIER EQUAL expr\n";
										(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
										}
#line 3557 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 981 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: IDENTIFIER\n";
										(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
										}
#line 3565 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 986 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr LESS_THAN expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_THAN,scoop);
										}
#line 3573 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 989 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr MORE_THAN expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_THAN,scoop);
										}
#line 3581 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 992 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_OR_EQUAL,scoop);
										}
#line 3589 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 995 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_OR_EQUAL,scoop);
										}
#line 3597 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 998 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr EQUAL_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),EQUAL_EQUAL,scoop);
										}
#line 3605 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1001 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:NOT_EQUAL expr\n";
										 (yyval.r.node)=new UnaryNode(scoop,(yyvsp[0].r.node),NOT_EQUAL);
										}
#line 3613 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1004 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";
										 (yyval.r.node)=(yyvsp[-1].r.node);
										}
#line 3621 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1007 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"logic_expr:logic_expr AND_AND logic_expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),AND_AND,scoop);
										}
#line 3630 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1011 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:logic_expr OR_OR logic_expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),OR_OR,scoop);
										}
#line 3638 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1014 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:TRUE\n";
										 (yyval.r.node)=new ConstantNode(true,scoop);
										}
#line 3646 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1017 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:FALSE\n";
											 (yyval.r.node)=new ConstantNode(false,scoop);
										}
#line 3654 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1022 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"expr:assign_expr\n";
										 (yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3662 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1025 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"expr:simple_expr\n";
										(yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3670 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1030 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"assign_expr:long_id EQUAL simple_expr\n";
										//LongIdHelper::checkIdenentifier( scoop, interface,"set1");
										(yyval.r.node)=new AssignNode(scoop,(yyvsp[-2].r.node),(yyvsp[0].r.node));
										}
#line 3680 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1037 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"long_id: long_id.IDENTIFIER\n";LongIdHelper::addIdentifier((yyvsp[-2].r.text));}
#line 3686 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1038 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"long_id: long_id.message_call\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3695 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1042 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																LongIdHelper::addIdentifier((yyvsp[0].r.text)); 
																(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
																cout<<"long_id:IDENTIFIER\n";
															   }
#line 3705 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1052 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:STRING_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.string_val,scoop);
									}
#line 3713 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1055 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"simple_expr:INT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.int_val,scoop);
									}
#line 3722 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1059 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:FLOAT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.float_val,scoop);
									}
#line 3730 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1062 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:CHAR_VAL\n";
										(yyval.r.node)=new ConstantNode(yylval.r.char_val,scoop);
									}
#line 3738 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1065 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:long_id\n";
									(yyval.r.node)=(yyvsp[0].r.node);
									}
#line 3746 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1068 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"simple_expr:expr PLUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),PLUS,scoop);
									}
#line 3755 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1072 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"simple_expr:expr MINUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MINUS,scoop);
									}
#line 3764 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1076 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:expr MULTI expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MULTI,scoop);
									}
#line 3772 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1079 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"simple_expr:expr DIV expr\n";
									(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),DIV,scoop);
									}
#line 3781 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1083 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:OPEN_P expr CLOSE_P\n";}
#line 3787 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1084 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:ID++";}
#line 3793 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1085 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:ID--";}
#line 3799 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1086 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:++ID";}
#line 3805 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1087 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:--ID";}
#line 3811 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1088 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"expr:p_type expr\n";
																if(type!=NULL)
																(yyval.r.node)=new CastNode(scoop,type,(yyvsp[0].r.node));
															}
#line 3821 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1095 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3837 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1108 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3852 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1120 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"sender: message_call\n";
											
											callNode->setSender((yyvsp[0].r.node));
											 (yyval.r.node)=(yyvsp[0].r.node);
											 
											}
#line 3863 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1126 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"sender: IDENTIFIER\n";
											(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
											
											//callNode=new CallNode(scoop);
											
											callNode->setSender((yyval.r.node));
											
											}
#line 3876 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1136 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"message: IDENTIFIER\n";
											(yyval.r.text)=(yyvsp[0].r.text);
												
											}
#line 3885 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1140 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"message_selectors_list\n";
											//$<r.node>$=$<r.text>1;
											(yyval.r.text)="";
											}
#line 3895 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1147 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"message_selectors_list:message_selectors_list message_selector \n";
												callNode->addSelector(cselector);
											cselector=NULL;
												}
#line 3905 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1152 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {	callNode->addSelector(cselector);
							cselector=NULL;
								cout<<"message_selectors_list: message_selector\n";
											
		}
#line 3915 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1158 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cselector->name=(yyvsp[-2].r.text);
							}
#line 3923 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1162 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"argument_list: argument_list argument\n";
												cselector->addArg((yyvsp[0].r.node));}
#line 3930 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1164 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"argument_list: argument\n";
												cselector=new CallSelector("");
											cselector->addArg((yyvsp[0].r.node));}
#line 3938 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1169 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"argument: SEMI_COLUMN expr\n";
											(yyval.r.node)=(yyvsp[0].r.node);
											//callNode->addArgument($<r.node>1,"");
											
											}
#line 3949 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1177 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"while_loop:while_loop_header statement\n";
											 (yyval.r.node)=new WhileNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop);
										}
#line 3958 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1183 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3966 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1188 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"conditional_statement: if_header statement\n";
												 (yyval.r.node)=new IfNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop,NULL);
												}
#line 3974 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1191 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"conditional_statement: if_header statement with else\n";
												 (yyval.r.node)=new IfNode((yyvsp[-3].r.node),(yyvsp[-2].r.node),scoop,new ElseNode((yyvsp[0].r.node),scoop));
												}
#line 3983 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1195 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"conditional_statement: switch_header switch_body statement\n";
											(yyval.r.node)=new SwitchNode(tempSwitch);
										}
#line 3991 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1200 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3999 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1205 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"switch_header: SWITCH OPEN_P IDENTIFIER CLOSE_P\n";
										
										tempSwitch->setExpr(new IdentifierNode((yyvsp[-2].r.text),scoop));
									}
#line 4008 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1211 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cscoop=scoop;scoop=new ScoopNode(cscoop);tempSwitch=new SwitchNode(NULL,std::list<pair<Node*,Node*>>(),scoop);}
#line 4014 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1214 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4020 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1215 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4026 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1216 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4032 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1217 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4038 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1220 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4044 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1221 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4050 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1224 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-4].r.node),(yyvsp[-2].r.node));}
#line 4056 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1225 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-2].r.node),(yyvsp[0].r.node));}
#line 4062 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1226 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-3].r.node),NULL);}
#line 4068 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1229 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-2].r.node));}
#line 4074 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1230 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[0].r.node));}
#line 4080 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1231 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-1].r.node));}
#line 4086 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1233 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"protocol: protocol_header protocol_body\n";
										idsList.clear();
										methodsList.clear();
										method=NULL;
										}
#line 4097 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1241 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";
								protocol=ProtocolHelper ::createNewProtocol((yyvsp[0].r.text),symbolTable );
								
								}
#line 4107 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1248 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	protocol_reference_list interface_declaration_list	AT_END\n";
								ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								idsList.clear();
								}
#line 4119 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1256 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	interface_declaration_list	AT_END\n";
									
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								
								}
#line 4131 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1264 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	protocol_reference_list AT_END	\n";
											ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								idsList.clear();
								}
#line 4141 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1270 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"protocol_body:	AT_END\n";}
#line 4147 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1272 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"enum: ENUM IDENTIFIER  OPEN_S list_expr CLOSE_S SEMI_COMA  \n";
																
																EnumHelper::createNewEnum( (yyvsp[-4].r.text),idsList, symbolTable);
																idsList.clear();
															 }
#line 4158 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1278 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"enum: ENUM IDENTIFIER SEMI_COMA\n";
																EnumHelper::createNewEnum( (yyvsp[-1].r.text),idsList, symbolTable);
															  }
#line 4167 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1285 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"list_expr:IDENTIFIER EQUAL expr COMMA list_expr\n";
												idsList.push_back((yyvsp[-4].r.text));
													(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-4].r.text),scoop),(yyvsp[-2].r.node));
												}
#line 4177 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1290 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"list_expr:IDENTIFIER EQUAL expr\n";
												idsList.push_back((yyvsp[-2].r.text));
												(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
												}
#line 4187 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1295 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"list_expr:IDENTIFIER \n";
													idsList.push_back((yyvsp[0].r.text));
													//??
												}
#line 4197 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1300 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  cout<<"list_expr:IDENTIFIER  COMMA list_expr \n";
												  idsList.push_back((yyvsp[-2].r.text));
												  //??
												}
#line 4207 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1307 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  cout<<"try_catch:TRY statement catch_list finally_statement \n";
												}
#line 4215 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1311 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {				  
								cout<<"try_catch:TRY statement catch_list \n";
							  }
#line 4223 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1316 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"catch_list:CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4229 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1317 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"catch_list:catch_list CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4235 "yacc.cpp" /* yacc.c:1646  */
    break;


#line 4239 "yacc.cpp" /* yacc.c:1646  */
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
#line 1322 "C:\\Users\\toshiba\\Source\\Repos\\occ2\\compiler\\yacc.y" /* yacc.c:1906  */

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

