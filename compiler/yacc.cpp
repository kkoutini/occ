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
#line 5 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:339  */

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
	vector <Selector *> selectorsList;
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

#line 138 "yacc.cpp" /* yacc.c:339  */

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
#line 142 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:355  */

#include "ast\node.h"

#line 172 "yacc.cpp" /* yacc.c:355  */

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
#line 145 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:355  */

	
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
	   

#line 271 "yacc.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 286 "yacc.cpp" /* yacc.c:358  */

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
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  261
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  475

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
       0,   175,   175,   178,   179,   181,   182,   183,   184,   185,
     187,   197,   201,   206,   207,   209,   211,   217,   221,   226,
     231,   235,   237,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   255,   262,   265,   269,   274,   275,   279,
     280,   281,   282,   283,   284,   287,   288,   291,   292,   293,
     296,   299,   307,   318,   319,   320,   325,   328,   331,   335,
     339,   343,   344,   347,   353,   354,   355,   357,   365,   372,
     376,   382,   383,   384,   385,   386,   387,   388,   389,   392,
     393,   394,   398,   399,   400,   401,   405,   414,   425,   434,
     445,   454,   462,   470,   478,   486,   496,   507,   512,   516,
     517,   520,   524,   530,   533,   535,   539,   544,   550,   558,
     559,   563,   570,   575,   576,   579,   586,   593,   600,   604,
     606,   610,   614,   619,   632,   635,   640,   646,   652,   655,
     661,   664,   665,   668,   669,   672,   680,   687,   696,   705,
     711,   718,   725,   739,   743,   749,   754,   763,   767,   771,
     777,   786,   789,   793,   795,   803,   809,   815,   822,   826,
     827,   830,   833,   840,   849,   852,   857,   860,   863,   868,
     873,   876,   894,   900,   904,   908,   913,   917,   921,   926,
     932,   943,   946,   951,   954,   957,   960,   963,   966,   969,
     972,   976,   979,   982,   987,   990,   995,  1002,  1003,  1007,
    1017,  1020,  1024,  1027,  1030,  1033,  1037,  1041,  1044,  1048,
    1049,  1050,  1051,  1052,  1053,  1060,  1066,  1074,  1077,  1082,
    1086,  1092,  1093,  1096,  1101,  1108,  1114,  1119,  1122,  1126,
    1131,  1136,  1142,  1145,  1146,  1147,  1148,  1151,  1152,  1155,
    1156,  1157,  1160,  1161,  1162,  1164,  1172,  1178,  1186,  1194,
    1200,  1203,  1209,  1216,  1221,  1226,  1231,  1238,  1242,  1247,
    1248,  1251
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
  "instance_method_declaration", "p_type", "method_selector",
  "parameter_list", "parameter", "class_implementation",
  "class_implementation_header", "class_implementation_body",
  "implementation_definition_list", "implementation_definition",
  "class_implementation_definition",
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

#define YYPACT_NINF -409

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-409)))

#define YYTABLE_NINF -65

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-65)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     107,    35,   168,    57,   219,   256,   273,   150,   104,  -409,
    -409,   345,   253,  -409,  -409,   404,  -409,   375,  -409,  -409,
    -409,   289,   299,   123,  -409,  -409,  -409,  -409,   613,   274,
    -409,    20,    20,  -409,   143,   195,   260,  -409,  -409,  -409,
     242,  -409,    20,    20,   443,  -409,   458,  -409,  -409,   270,
    -409,   270,  -409,   476,   482,  -409,   176,   323,  -409,   327,
     300,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
     369,  -409,   350,   356,   398,  -409,   183,   183,  -409,   367,
    -409,  -409,  -409,  -409,  -409,   111,   362,   369,   368,    27,
     368,   363,   489,  -409,   281,   287,  -409,  -409,   308,  -409,
    -409,  -409,   183,   193,   364,  -409,   183,   368,  -409,   368,
    -409,  -409,   491,  -409,  -409,  -409,  -409,   340,  -409,  -409,
     496,  -409,  -409,  -409,  -409,     9,   365,  -409,   417,   351,
     352,  -409,  -409,  -409,   183,   336,    51,    19,  -409,  -409,
     393,  -409,   377,   374,   110,  -409,  -409,   403,  -409,  -409,
     498,  -409,  -409,   436,  -409,  -409,  -409,  -409,  -409,   184,
     406,  -409,   216,   252,  -409,  -409,  -409,  -409,   300,  -409,
     369,   405,   413,   421,  -409,   428,   422,  -409,   799,   546,
     448,   437,  -409,  -409,   400,  -409,  -409,  -409,  -409,  -409,
    -409,   546,  -409,   546,   462,    50,     7,  -409,  -409,   546,
    -409,   546,    76,  -409,  -409,  -409,   327,   799,   463,    51,
     305,  -409,  -409,    36,  -409,  -409,  -409,   137,  -409,   452,
    -409,   455,    21,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
    -409,  -409,  -409,   485,   467,  -409,   347,  -409,   265,   437,
     309,   675,   675,   459,     6,  -409,   642,  -409,  -409,  -409,
    -409,   481,   483,   799,   469,  -409,    50,   146,   435,   488,
     336,   250,   325,  -409,  -409,  -409,   461,  -409,  -409,   799,
     501,  -409,  -409,   507,  -409,   468,  -409,   799,   519,  -409,
      78,  -409,   510,  -409,   500,  -409,  -409,  -409,   487,  -409,
     477,  -409,   336,  -409,  -409,   528,   377,   516,  -409,  -409,
    -409,   527,  -409,   341,   504,   542,   147,   536,   606,   799,
    -409,  -409,   513,   302,   530,   522,  -409,  -409,    39,   499,
     220,  -409,  -409,   146,  -409,   799,   799,   799,   799,   549,
     151,  -409,   525,   799,   525,  -409,   437,  -409,   437,   556,
     146,  -409,   565,   520,   546,   566,   426,  -409,  -409,   557,
    -409,   327,  -409,    12,   377,  -409,  -409,  -409,   799,   532,
     728,   155,   264,   534,   220,  -409,  -409,   675,   675,   799,
     799,   799,   799,   799,  -409,   559,  -409,   119,   119,  -409,
    -409,   369,   560,   546,  -409,   561,  -409,  -409,  -409,  -409,
    -409,  -409,   810,  -409,  -409,   486,   567,   531,  -409,  -409,
     529,   533,  -409,  -409,   799,  -409,   552,   746,   760,   192,
    -409,   225,   225,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
     578,   369,  -409,   707,  -409,   579,  -409,   810,  -409,   572,
     538,  -409,   577,  -409,  -409,  -409,  -409,  -409,   568,  -409,
     571,   778,   576,   590,   714,  -409,   582,   584,   799,  -409,
    -409,   589,  -409,  -409,  -409,  -409,   580,   546,   586,   587,
     592,  -409,   767,  -409,  -409,  -409,  -409,   546,   767,   588,
    -409,  -409,  -409,   767,  -409
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       5,     0,     0,     8,     6,     0,     7,     0,     9,    13,
      14,    12,   126,     0,   246,    70,     1,     3,     0,     0,
      23,     0,     0,    10,     0,     0,     0,   108,   109,   110,
       0,   130,     0,     0,     0,   124,     0,   132,   133,     0,
     134,     0,   250,     0,     0,   245,     0,     0,   252,     0,
       0,    93,    92,    91,    95,    90,    55,    54,    53,    46,
       0,    94,     0,     0,     0,    48,    49,     0,    52,     0,
      84,    85,    82,    83,    36,     0,   119,     0,     0,     0,
       0,     0,    26,    20,     0,     0,    31,    21,     0,    32,
      22,   107,     0,     0,     0,    68,    56,     0,   137,     0,
     140,   128,     0,   129,   131,   142,   135,     0,   138,   249,
       0,   248,    15,    11,   125,   255,     0,    96,     0,    88,
      86,    45,    47,    51,    50,    62,     0,     0,    61,    34,
       0,    33,     0,     0,     0,   114,   112,     0,   116,    24,
       0,    28,    17,     0,    29,    18,    30,    19,    69,     0,
      80,    73,     0,     0,    67,   136,   139,   127,   199,   144,
       0,     0,     0,     0,   170,     0,     0,   215,     0,     0,
       0,     0,   151,   141,     0,   146,   154,   150,   152,   147,
     168,     0,   166,     0,     0,     0,     0,   198,   167,     0,
     148,     0,     0,   158,   153,   247,     0,     0,     0,     0,
       0,    89,    87,     0,    65,    99,    66,     0,    57,     0,
      35,     0,   118,   122,   117,   113,   111,   115,    25,    27,
      16,    77,    81,     0,     0,    71,     0,    74,     0,     0,
       0,     0,     0,     0,    88,   199,     0,   200,   202,   203,
     201,     0,     0,     0,     0,   194,   204,   195,     0,     0,
       0,   106,     0,   160,   143,   145,     0,   171,   149,     0,
       0,   218,   217,     0,   225,   227,   236,     0,     0,   229,
       0,   238,     0,   256,   254,   251,    63,    58,     0,   102,
      97,    59,     0,    60,   123,     0,     0,     0,    79,    75,
      78,     0,    72,     0,   182,     0,     0,     0,     0,     0,
     192,   193,     0,     0,     0,     0,   210,   211,   199,   204,
       0,   212,   213,   214,   165,     0,     0,     0,     0,     0,
     258,   155,   104,     0,   104,   163,     0,   156,     0,     0,
     196,   197,   219,     0,     0,     0,     0,   234,   237,     0,
     235,     0,   101,     0,     0,   120,    76,   157,     0,     0,
       0,     0,     0,     0,   195,   188,   226,     0,     0,     0,
       0,     0,     0,     0,   230,     0,   209,   205,   206,   207,
     208,     0,     0,     0,   257,     0,   164,   105,   162,   161,
     159,   169,     0,   216,   228,     0,     0,   243,   233,   253,
       0,     0,   121,   181,     0,   179,     0,     0,     0,     0,
     189,   190,   191,   183,   184,   185,   186,   187,   232,   231,
       0,     0,   261,     0,   103,   199,   223,   220,   222,     0,
     240,   244,     0,   100,    98,   180,   178,   177,     0,   176,
       0,     0,     0,     0,     0,    38,     0,    40,     0,   221,
     241,     0,   242,   173,   174,   175,     0,     0,     0,    41,
       0,    37,     0,   224,   239,   172,   259,     0,     0,    43,
      39,   260,    44,     0,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -409,  -409,  -409,   610,  -409,  -409,  -409,   607,  -409,  -409,
    -408,   102,  -409,   551,   554,  -409,  -409,   -36,   505,   415,
    -409,  -409,  -409,  -153,   -28,  -409,  -409,  -409,  -409,  -133,
    -409,  -409,   310,  -409,    -2,    -1,  -409,  -409,   -24,    13,
    -409,  -290,  -409,  -409,  -409,   595,   -30,  -409,  -409,  -409,
    -409,   180,  -409,  -409,  -409,  -170,  -409,  -409,   408,   -96,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,  -222,  -134,  -112,
    -116,  -212,  -409,   446,  -409,  -409,  -409,   226,  -409,   388,
    -409,  -409,  -409,  -409,  -409,  -409,   378,   381,  -409,  -409,
    -409,   133,  -204,  -409,  -409,  -409
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    33,    34,    85,   424,
     446,    35,    74,    75,    76,    77,   104,    78,   137,   138,
     106,    12,    13,   162,   181,    80,    81,    82,    83,   214,
     290,   215,   386,   335,    36,    37,    38,    39,   253,    89,
     222,   223,    14,    15,    45,    46,    47,    48,    49,    50,
      51,   182,   117,   183,   184,   185,   186,   187,   262,   263,
     188,   189,   190,   191,   192,   193,   307,   312,   313,   255,
     256,   257,   196,   197,   273,   343,   427,   428,   198,   199,
     200,   201,   202,   419,   279,   280,   281,   282,    16,    17,
      55,   203,   126,   204,   330,   384
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,   195,   283,   217,   105,   194,   355,    88,    90,   258,
     238,   271,    79,   400,   265,    54,   114,    58,   107,   109,
     314,   266,    59,   267,    86,   295,   296,   206,   145,   274,
     218,   275,    95,    98,   320,   101,   460,   219,   146,    19,
     133,   323,   128,   211,   254,    91,    87,   401,    79,    79,
     207,   120,   216,   101,   470,   108,   110,   340,   177,   143,
     472,    22,   -64,   195,   402,   474,   158,   194,   195,   -64,
     164,   288,   194,   284,    79,   195,   286,   195,    79,   194,
     298,   194,   114,   195,   361,   195,   363,   194,   289,   194,
     150,   269,   153,   276,   101,   347,   364,   101,   133,   316,
     317,   144,   213,   147,    -2,     1,    79,     2,     1,   270,
       2,   225,   139,   377,   378,   379,   380,    44,   221,   101,
     165,   226,   166,   277,   278,   277,   278,   332,   334,   140,
     319,   141,     3,    18,    58,     3,    94,   319,   291,    59,
     409,    18,   239,   345,    92,   411,   412,   399,   -63,   101,
      26,   245,   101,   319,     4,   -63,   327,     4,   360,    28,
       5,   328,     6,     5,    93,     6,   407,    31,    32,    20,
     325,   326,    21,   308,   394,   365,   397,   122,   247,   248,
     123,   249,   250,   327,   367,   368,   309,    60,   328,    61,
      62,    63,    64,    65,   159,   231,    96,   160,   177,   387,
     310,   311,   232,   441,   161,    70,    71,   251,   252,   319,
     319,   319,   319,   422,   382,   383,    97,   234,   143,    31,
      32,   367,   368,    23,   403,   430,   406,   235,   195,   116,
     195,   118,   194,    72,   194,   413,   414,   415,   416,   417,
     389,    73,   390,   102,   325,   326,    60,   376,    61,    62,
      63,    64,    65,   236,   -65,   -65,   160,   327,   426,   103,
      24,    99,   328,   237,    70,    71,   301,   195,   245,    40,
     435,   194,   221,   438,   440,   408,   302,    25,    84,   195,
     143,   100,   151,   194,    31,    32,   115,   466,   154,   447,
     308,   333,    72,   426,    56,   247,   248,   471,   249,   250,
      73,   213,   152,   309,    57,    31,    32,   456,   155,   156,
     447,    31,    32,   304,   463,   177,   287,   310,   311,   305,
     306,   369,   370,   219,   251,   252,   336,   124,   447,   157,
     221,   125,    31,    32,   447,   371,   337,   127,   372,   447,
     373,   195,   336,   338,   168,   194,    61,    62,    63,    64,
      65,   195,   357,   420,   129,   194,   115,   169,   300,   338,
     130,    28,   170,    71,    29,   232,    30,   142,   135,    31,
      32,   136,    86,    60,   148,    61,    62,    63,    64,    65,
     171,   163,   208,   172,   173,   174,   175,   213,   211,   212,
     176,   177,    71,   443,    29,   178,    52,   220,    73,    31,
      32,   224,   179,    87,   168,   180,    61,    62,    63,    64,
      65,    66,    67,    68,   227,   131,   115,   264,   135,    72,
      28,   209,   170,    71,   233,    41,   244,    73,    42,    43,
     168,   240,    61,    62,    63,    64,    65,   229,   260,   241,
     171,   261,   115,   172,   173,   174,   175,   242,   170,    71,
     176,   177,   259,   292,   243,   178,   209,   230,    73,   294,
      31,    32,   179,   315,   111,   180,   171,    42,    43,   172,
     173,   174,   175,   268,   285,   396,   176,   177,   299,   113,
     324,   178,    42,    43,    73,   321,   297,   322,   179,   160,
     168,   180,    61,    62,    63,    64,    65,   119,   329,   331,
      31,    32,   115,   121,   172,   341,    31,    32,   170,    71,
     149,   342,   167,    31,    32,    42,    43,   205,   351,   228,
      31,    32,    31,    32,   346,   344,   171,   350,   353,   172,
     173,   174,   175,   354,   232,   429,   176,   177,   356,   352,
     366,   178,   367,   368,    73,   358,   359,   362,   179,   375,
     168,   180,    61,    62,    63,    64,    65,   374,   270,   367,
     368,   410,   115,   367,   368,   381,   385,   391,   170,    71,
     392,   395,   393,   404,   398,   418,   421,   423,   431,   436,
     432,   433,   442,   450,   448,   434,   171,   451,   452,   172,
     173,   174,   175,   457,   458,   453,   176,   177,   454,   461,
     464,   178,   462,   467,    73,   468,   473,   465,   179,   469,
     318,   180,    61,    62,    63,    64,    65,    60,    27,    61,
      62,    63,    64,    65,    53,   132,    66,    67,    68,    71,
      69,   134,   308,   210,   293,    70,    71,   247,   248,   112,
     249,   250,   272,     0,   388,   309,   318,   303,    61,    62,
      63,    64,    65,   449,   339,     0,    72,   177,   348,   310,
     311,   349,     0,    72,    73,    71,   251,   252,   246,     0,
       0,    73,     0,   247,   248,     0,   249,   250,     0,   245,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,   177,     0,     0,     0,     0,     0,     0,
      73,   308,   251,   252,     0,     0,   247,   248,     0,   249,
     250,   245,     0,     0,   309,     0,     0,     0,   245,     0,
       0,     0,     0,   444,   445,     0,   177,     0,   310,   311,
     444,   459,   245,   246,     0,   251,   252,     0,   247,   248,
     246,   249,   250,     0,     0,   247,   248,     0,   249,   250,
     245,     0,     0,     0,   246,   405,     0,     0,   177,   247,
     248,     0,   249,   250,   245,   177,     0,   251,   252,     0,
       0,   245,   246,   437,   251,   252,     0,   247,   248,   177,
     249,   250,   245,   444,     0,     0,   246,   439,   251,   252,
       0,   247,   248,   246,   249,   250,     0,   177,   247,   248,
       0,   249,   250,   245,   246,   455,   251,   252,     0,   247,
     248,   177,   249,   250,   425,     0,     0,     0,   177,     0,
     251,   252,     0,     0,     0,   246,     0,   251,   252,   177,
     247,   248,     0,   249,   250,     0,   246,     0,   251,   252,
       0,   247,   248,     0,   249,   250,     0,     0,     0,     0,
     177,     0,     0,     0,     0,     0,     0,     0,     0,   251,
     252,   177,     0,     0,     0,     0,     0,     0,     0,     0,
     251,   252
};

static const yytype_int16 yycheck[] =
{
      28,   117,   206,   136,    40,   117,   296,    31,    32,   179,
     163,     4,    40,     1,   184,    17,    46,    11,    42,    43,
     242,   191,    16,   193,     4,     4,     5,    18,     1,   199,
      11,   201,    34,    35,   246,    36,   444,    18,    11,     4,
      76,   253,    70,    37,   178,    32,    26,    35,    76,    77,
      41,    53,     1,    54,   462,    42,    43,   269,    51,    87,
     468,     4,    11,   179,   354,   473,   102,   179,   184,    18,
     106,    35,   184,   207,   102,   191,   209,   193,   106,   191,
     233,   193,   112,   199,   306,   201,   308,   199,    52,   201,
      92,    41,    94,    17,    95,    17,   308,    98,   134,    60,
      61,    88,    51,    90,     0,     1,   134,     3,     1,    59,
       3,     1,     1,   325,   326,   327,   328,    15,   142,   120,
     107,    11,   109,    47,    48,    47,    48,   260,   261,    18,
     246,    20,    28,     0,    11,    28,    34,   253,     1,    16,
     362,     8,   170,   277,     1,   367,   368,   351,    11,   150,
       0,     4,   153,   269,    50,    18,    37,    50,    11,    16,
      56,    42,    58,    56,    21,    58,    11,    24,    25,     1,
      24,    25,     4,    26,   344,   309,   346,     1,    31,    32,
       4,    34,    35,    37,    29,    30,    39,     4,    42,     6,
       7,     8,     9,    10,     1,    11,     1,     4,    51,   333,
      53,    54,    18,    11,    11,    22,    23,    60,    61,   325,
     326,   327,   328,   383,    63,    64,    21,     1,   246,    24,
      25,    29,    30,     4,   358,   395,   360,    11,   344,    49,
     346,    51,   344,    50,   346,   369,   370,   371,   372,   373,
     336,    58,   338,     1,    24,    25,     4,    27,     6,     7,
       8,     9,    10,     1,    29,    30,     4,    37,   392,    17,
       4,     1,    42,    11,    22,    23,     1,   383,     4,    16,
     404,   383,   296,   407,   408,    11,    11,     4,     4,   395,
     308,    21,     1,   395,    24,    25,    16,   457,     1,   423,
      26,    41,    50,   427,     5,    31,    32,   467,    34,    35,
      58,    51,    21,    39,     5,    24,    25,   441,    21,     1,
     444,    24,    25,     4,   448,    51,    11,    53,    54,    10,
      11,    19,    20,    18,    60,    61,     1,     4,   462,    21,
     354,     4,    24,    25,   468,    33,    11,    37,    36,   473,
      38,   457,     1,    18,     4,   457,     6,     7,     8,     9,
      10,   467,    11,   381,     4,   467,    16,    17,    11,    18,
       4,    16,    22,    23,    19,    18,    21,     5,     1,    24,
      25,     4,     4,     4,    11,     6,     7,     8,     9,    10,
      40,    17,    17,    43,    44,    45,    46,    51,    37,    37,
      50,    51,    23,   421,    19,    55,    21,     4,    58,    24,
      25,    27,    62,    26,     4,    65,     6,     7,     8,     9,
      10,    13,    14,    15,    11,    17,    16,    17,     1,    50,
      16,     4,    22,    23,    18,    21,     4,    58,    24,    25,
       4,    26,     6,     7,     8,     9,    10,     1,     1,    26,
      40,     4,    16,    43,    44,    45,    46,    26,    22,    23,
      50,    51,     4,     1,    26,    55,     4,    21,    58,     4,
      24,    25,    62,     4,    21,    65,    40,    24,    25,    43,
      44,    45,    46,    11,    11,    49,    50,    51,    11,    21,
      11,    55,    24,    25,    58,     4,     1,     4,    62,     4,
       4,    65,     6,     7,     8,     9,    10,    21,    63,    11,
      24,    25,    16,    21,    43,     4,    24,    25,    22,    23,
      21,     4,    21,    24,    25,    24,    25,    21,    18,    21,
      24,    25,    24,    25,     5,    57,    40,    17,    51,    43,
      44,    45,    46,     5,    18,    49,    50,    51,    11,    52,
      27,    55,    29,    30,    58,    41,     4,    11,    62,    27,
       4,    65,     6,     7,     8,     9,    10,    27,    59,    29,
      30,    27,    16,    29,    30,    16,    41,    11,    22,    23,
       5,     5,    52,    41,    17,    16,    16,    16,    11,    27,
      49,    52,     4,    11,     5,    52,    40,    49,    11,    43,
      44,    45,    46,    17,     4,    27,    50,    51,    27,    17,
      11,    55,    18,    17,    58,    18,    18,    27,    62,    17,
       4,    65,     6,     7,     8,     9,    10,     4,     8,     6,
       7,     8,     9,    10,    17,    74,    13,    14,    15,    23,
      17,    77,    26,   128,   219,    22,    23,    31,    32,    44,
      34,    35,   196,    -1,   334,    39,     4,   239,     6,     7,
       8,     9,    10,   427,   266,    -1,    50,    51,   280,    53,
      54,   280,    -1,    50,    58,    23,    60,    61,    26,    -1,
      -1,    58,    -1,    31,    32,    -1,    34,    35,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    26,    60,    61,    -1,    -1,    31,    32,    -1,    34,
      35,     4,    -1,    -1,    39,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    16,    17,    -1,    51,    -1,    53,    54,
      16,    17,     4,    26,    -1,    60,    61,    -1,    31,    32,
      26,    34,    35,    -1,    -1,    31,    32,    -1,    34,    35,
       4,    -1,    -1,    -1,    26,    27,    -1,    -1,    51,    31,
      32,    -1,    34,    35,     4,    51,    -1,    60,    61,    -1,
      -1,     4,    26,    27,    60,    61,    -1,    31,    32,    51,
      34,    35,     4,    16,    -1,    -1,    26,    27,    60,    61,
      -1,    31,    32,    26,    34,    35,    -1,    51,    31,    32,
      -1,    34,    35,     4,    26,    27,    60,    61,    -1,    31,
      32,    51,    34,    35,     4,    -1,    -1,    -1,    51,    -1,
      60,    61,    -1,    -1,    -1,    26,    -1,    60,    61,    51,
      31,    32,    -1,    34,    35,    -1,    26,    -1,    60,    61,
      -1,    31,    32,    -1,    34,    35,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    28,    50,    56,    58,    73,    74,    75,
      76,    77,    93,    94,   114,   115,   160,   161,   163,     4,
       1,     4,     4,     4,     4,     4,     0,    75,    16,    19,
      21,    24,    25,    78,    79,    83,   106,   107,   108,   109,
      16,    21,    24,    25,    83,   116,   117,   118,   119,   120,
     121,   122,    21,    79,   106,   162,     5,     5,    11,    16,
       4,     6,     7,     8,     9,    10,    13,    14,    15,    17,
      22,    23,    50,    58,    84,    85,    86,    87,    89,    96,
      97,    98,    99,   100,     4,    80,     4,    26,   110,   111,
     110,   111,     1,    21,    83,   106,     1,    21,   106,     1,
      21,   107,     1,    17,    88,    89,    92,   110,   111,   110,
     111,    21,   117,    21,   118,    16,   123,   124,   123,    21,
     106,    21,     1,     4,     4,     4,   164,    37,    96,     4,
       4,    17,    85,    89,    86,     1,     4,    90,    91,     1,
      18,    20,     5,    96,   111,     1,    11,   111,    11,    21,
     106,     1,    21,   106,     1,    21,     1,    21,    89,     1,
       4,    11,    95,    17,    89,   111,   111,    21,     4,    17,
      22,    40,    43,    44,    45,    46,    50,    51,    55,    62,
      65,    96,   123,   125,   126,   127,   128,   129,   132,   133,
     134,   135,   136,   137,   141,   142,   144,   145,   150,   151,
     152,   153,   154,   163,   165,    21,    18,    41,    17,     4,
      90,    37,    37,    51,   101,   103,     1,   101,    11,    18,
       4,   110,   112,   113,    27,     1,    11,    11,    21,     1,
      21,    11,    18,    18,     1,    11,     1,    11,    95,    96,
      26,    26,    26,    26,     4,     4,    26,    31,    32,    34,
      35,    60,    61,   110,   140,   141,   142,   143,   127,     4,
       1,     4,   130,   131,    17,   127,   127,   127,    11,    41,
      59,     4,   145,   146,   127,   127,    17,    47,    48,   156,
     157,   158,   159,   164,   140,    11,   101,    11,    35,    52,
     102,     1,     1,    91,     4,     4,     5,     1,    95,    11,
      11,     1,    11,   130,     4,    10,    11,   138,    26,    39,
      53,    54,   139,   140,   139,     4,    60,    61,     4,   142,
     143,     4,     4,   143,    11,    24,    25,    37,    42,    63,
     166,    11,   101,    41,   101,   105,     1,    11,    18,   151,
     143,     4,     4,   147,    57,   140,     5,    17,   158,   159,
      17,    18,    52,    51,     5,   113,    11,    11,    41,     4,
      11,   139,    11,   139,   143,   140,    27,    29,    30,    19,
      20,    33,    36,    38,    27,    27,    27,   143,   143,   143,
     143,    16,    63,    64,   167,    41,   104,   140,   104,   131,
     131,    11,     5,    52,   127,     5,    49,   127,    17,   164,
       1,    35,   113,   140,    41,    27,   140,    11,    11,   139,
      27,   139,   139,   140,   140,   140,   140,   140,    16,   155,
      96,    16,   127,    16,    81,     4,   140,   148,   149,    49,
     127,    11,    49,    52,    52,   140,    27,    27,   140,    27,
     140,    11,     4,    96,    16,    17,    82,   140,     5,   149,
      11,    49,    11,    27,    27,    27,   140,    17,     4,    17,
      82,    17,    18,   140,    11,    27,   127,    17,    18,    17,
      82,   127,    82,    18,    82
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
     112,   112,   112,   113,   114,   115,   115,   116,   116,   116,
     116,   117,   117,   118,   118,   119,   120,   120,   121,   122,
     122,   123,   124,   125,   125,   126,   126,   127,   127,   127,
     127,   127,   127,   127,   127,   128,   129,   129,   129,   130,
     130,   130,   131,   131,   131,   132,   133,   133,   133,   134,
     135,   136,   137,   137,   137,   137,   137,   137,   137,   137,
     138,   138,   138,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   140,   140,   141,   142,   142,   142,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   144,   145,   146,   146,   147,
     147,   148,   148,   149,   149,   150,   151,   152,   152,   152,
     153,   154,   155,   156,   156,   156,   156,   157,   157,   158,
     158,   158,   159,   159,   159,   160,   161,   162,   162,   162,
     162,   163,   163,   164,   164,   164,   164,   165,   165,   166,
     166,   167
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
       1,     1,     1,     1,     1,     3,     3,     4,     1,     3,
       1,     3,     3,     2,     3,     3,     1,     1,     1,     4,
       1,     2,     8,     7,     7,     7,     6,     6,     6,     5,
       4,     3,     1,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     1,     1,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     1,     4,     1,     1,     1,
       3,     2,     1,     1,     3,     2,     4,     2,     4,     2,
       4,     5,     1,     3,     2,     2,     1,     2,     1,     6,
       4,     5,     5,     3,     4,     2,     2,     3,     2,     2,
       1,     6,     3,     5,     3,     1,     3,     4,     3,     6,
       7,     2
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
#line 175 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"program: components\n"; 
										 }
#line 2031 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 178 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"components: components component\n";}
#line 2037 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 179 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"components: component\n";}
#line 2043 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 181 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface \n";}
#line 2049 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 182 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation \n";}
#line 2055 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 183 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"protocol \n";}
#line 2061 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 184 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct \n";}
#line 2067 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 185 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum \n";}
#line 2073 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 187 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface: class_interface_header class_interface_body\n";
																interface->setClassNode(classNode);
																classNode=NULL;
																 idsList.clear();
																 methodsList.clear();
																 method=NULL;
																}
#line 2085 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 197 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																				interface=InterfaceHelper::createNewInterface((yyvsp[-2].r.text),(yyvsp[0].r.text),symbolTable);
																				classNode=new ClassNode(NULL,interface);
																				}
#line 2094 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 201 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																					cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
																				 interface=InterfaceHelper::createNewInterface((yyvsp[0].r.text),"",symbolTable);
																				 	classNode=new ClassNode(NULL,interface);
																				}
#line 2104 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 206 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Unknown type name '"<<(yyvsp[-1].r.text)<<"' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2110 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 207 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2116 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 209 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2122 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 212 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
															
														InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2132 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 218 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														}
#line 2140 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 222 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	protocol_reference_list interface_declaration_list	AT_END\n";
														}
#line 2149 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 227 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2158 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 232 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														}
#line 2166 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 236 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_body:instance_variables		AT_END\n";}
#line 2172 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 238 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {														
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:interface_declaration_list	AT_END\n";
														}
#line 2181 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 242 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_body:AT_END\n";}
#line 2187 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 243 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2193 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 244 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2199 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 245 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2205 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 246 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2211 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 247 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2217 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 248 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2223 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 249 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2229 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 250 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2235 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 251 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2241 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 255 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													if(interface!=NULL){
													InterfaceHelper::addInheritedProtocol(interface,idsList,symbolTable);
														idsList.clear();
													}
													cout<<"protocol_reference_list: LESS_THAN ids_list_identifier MORE_THAN\n";
												}
#line 2253 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 262 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '>' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2259 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 265 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"ids_list:ids_list_identifier COMMA IDENTIFIER\n"; 
													idsList.push_back((yyvsp[0].r.text));
													}
#line 2268 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 269 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"ids_list_identifier:IDENTIFIER\n";
													idsList.push_back((yyvsp[0].r.text));
												    }
#line 2277 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 274 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array with body";}
#line 2283 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 275 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array without elements";}
#line 2289 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 279 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array-element \n";}
#line 2295 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 280 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array-element \n";}
#line 2301 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 281 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"empty element \n";}
#line 2307 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 282 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2313 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 283 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2319 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 284 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2325 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 287 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";}
#line 2331 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 288 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variables:OPEN_S	 CLOSE_S\n";}
#line 2337 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 291 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";}
#line 2343 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 292 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:instance_variable_declaration\n";}
#line 2349 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 293 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:variable_declaration_list\n";}
#line 2355 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 296 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declaration:visibility_specification variable_declaration_list\n";
																	}
#line 2362 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 300 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
											arrayList.clear();
												idsList.clear();
												flag=false;
										}
#line 2374 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 308 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										       InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
												arrayList.clear();
												idsList.clear();
												flag=false;
										cout<<"variable_declaration_list: variable_declaration\n";
										}
#line 2386 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 318 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PRIVATE\n";  visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2392 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 319 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PROTECTED\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2398 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 320 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PUBLIC\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2404 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 325 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct_variable_declaration:struct_declaration_list\n";}
#line 2410 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 328 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
	                                           (yyval.r.text)=(yyvsp[-2].r.text);
												}
#line 2418 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 331 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
													}
#line 2427 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 335 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2433 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 339 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"ids_list:ids_list COMMA id_dec\n"; 

									}
#line 2442 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 343 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"ids_list:id_dec\n"; }
#line 2448 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 344 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2454 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 347 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout <<" data_member: IDENTIFIER array_tag \n";
							 var=new Array((yyvsp[0].r.text),arrayAlloc.size(),NULL);
					       ( dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
						   arrayList.push_back( ( dynamic_cast<Array*>(var)));
						      arrayAlloc.clear();
							}
#line 2465 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 353 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {idsList.push_back((yyvsp[0].r.text)) ;cout <<" data_member: IDENTIFIER  \n";}
#line 2471 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 354 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2477 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 355 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2483 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 357 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {  
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																												idsList.clear();
																												flag=false;
																										  cout<<"struct_declaration_list: struct_declaration_list  variable_declarationxx\n";
																										}
#line 2495 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 365 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																														 	idsList.clear();
																															flag=false;
																										cout<<"struct_declaration_list:  variable_declarationxx\n";
																										}
#line 2507 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 372 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Illigal visibility specification at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2513 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 376 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
					myStruct=StructHelper::createNewStruct((yyvsp[0].r.text),symbolTable);
					cout<<"struct_header: STRUCT  IDENTIFIER\n";
					}
#line 2522 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 382 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S  entity SEMI_COMA\n";}
#line 2528 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 383 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S enteity SEMI_COMA \n";}
#line 2534 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 384 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S SEMI_COMA\n";}
#line 2540 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 385 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S  SEMI_COMA  \n";}
#line 2546 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 386 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2552 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 387 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2558 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 388 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2564 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 389 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2570 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 392 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"entity: IDENTIFIER COMMA  entity\n";}
#line 2576 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 393 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"entity:  IDENTIFIER \n";}
#line 2582 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 394 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2588 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 398 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type:simple type\n";}
#line 2594 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 399 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: complex type\n";}
#line 2600 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 400 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: struct_type\n";}
#line 2606 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 401 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: enum_type\n";}
#line 2612 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 405 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	cout<<"struct_type: STRUCT IDENTIFIER   \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																		string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2626 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 414 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct_type: STRUCT IDENTIFIER  MULTI \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2640 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 425 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum_type: ENUM IDENTIFIER \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2654 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 434 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum_type: ENUM IDENTIFIER  MULTI  \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																									string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2668 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 445 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"int type \n";
																type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
																}
#line 2682 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 454 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"char type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2695 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 462 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"float type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2708 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 470 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"NSString type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2721 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 478 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"void type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2734 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 486 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"bool type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2747 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 496 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 2762 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 507 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_tag: array_first_tag array_tag_list \n"; 
										   }
#line 2770 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 512 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"array_tag_list: array_tag_list OPEN_ARR INT_VAL CLOSE_ARR\n"; 
																arrayAlloc.push_back((yyvsp[-1].r.int_val));
														   }
#line 2779 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 517 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<" Error:missing  dimension in array tag  ";arrayAlloc.clear();}
#line 2785 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 520 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_first_tag: OPEN_ARR INT_VAL CLOSE_ARR\n"; 
											arrayAlloc.push_back((yyvsp[-1].r.int_val));
											}
#line 2794 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 524 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_first_tag: OPEN_ARR  CLOSE_ARR\n"; 
											arrayAlloc.push_back(-1);
											}
#line 2803 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 530 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							   }
#line 2811 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 535 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout <<"with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							 }
#line 2820 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 544 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
															 methodsList.push_back(method);
														
															 
																}
#line 2831 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 550 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																 cout<<"interface_declaration_list:interface_declaration\n";
															 methodsList.push_back(method);
															 
																 	
																 }
#line 2842 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 558 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"interface_declaration: class_method_declaration\n";}
#line 2848 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 559 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"interface_declaration: instance_method_declaration\n";}
#line 2854 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 563 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_method_declaration: PLUS p_type method_selector	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,true);
															
																 selectorsList.clear();
																
																}
#line 2866 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 570 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_method_declaration: PLUS			 method_selector	SEMI_COMA\n";
																		method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																}
#line 2876 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 575 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2882 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 576 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2888 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 579 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															cout<<"instance_method_declaration: MINUS p_type	method_selector		SEMI_COMA\n";
															method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,false);
																 selectorsList.clear();
																
																
															}
#line 2900 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 586 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"instance_method_declaration: MINUS			 method_selector	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																}
#line 2910 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 593 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.r.text)=(yyvsp[-1].r.text);
																}
#line 2919 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 600 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {\
																cout<<"method_selector:IDENTIFIER SEMI_COLUMN parameter_list\n";
																	(yyval.r.text)=(yyvsp[-2].r.text);
																}
#line 2928 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 604 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"method_selector:IDENTIFIER \n";(yyval.r.text)=(yyvsp[0].r.text);}
#line 2934 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 606 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				cout<<"parameter_list:	parameter_list	SEMI_COLUMN	parameter\n";
																				selectorsList.push_back(new Selector("",var));
																			}
#line 2943 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 610 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				cout<<"parameter_list:	parameter_list	IDENTIFIER  SEMI_COLUMN	parameter\n";
																					selectorsList.push_back(new Selector((yyvsp[-2].r.text),var));
																			}
#line 2952 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 614 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				cout<<"parameter_list: parameter\n";
																			selectorsList.push_back(new Selector("",var));
																			}
#line 2961 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 619 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"parameter:  p_type IDENTIFIER\n";
																
																if(type!=NULL){
																var=new Variable((yyvsp[0].r.text),type);
																}
																else{
																cout<<"Error:Type not found.\n";
																}
																}
#line 2976 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 632 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation: class_implementation_header class_implementation_body\n";}
#line 2982 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 635 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																	interface=InterfaceHelper::checkImplementation((yyvsp[-2].r.text),symbolTable,(yyvsp[0].r.text));
																	
																}
#line 2992 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 640 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																interface=InterfaceHelper::checkImplementation((yyvsp[0].r.text),symbolTable,"");
																	
																}
#line 3001 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 646 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";
																			InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														}
#line 3011 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 652 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
																	cout<<"class_implementation_body: instance_variables									AT_END\n";
																}
#line 3019 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 655 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_body:						implementation_definition_list	AT_END\n";
																	InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														
																}
#line 3030 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 661 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation_body:	AT_END\n";}
#line 3036 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 664 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);cout<<"implementation_definition_list: implementation_definition_list implementation_definition\n";}
#line 3042 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 665 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);cout<<"implementation_definition_list: implementation_definition\n";}
#line 3048 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 668 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"implementation_definition: class_implementation_definition	\n";}
#line 3054 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 669 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"implementation_definition: instance_implementation_definition \n";}
#line 3060 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 672 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"class_implementation_definition: class_implementation_definition_header block_body";
														method->setFunctionNode(functionNode);
														functionNode=NULL;
													nodeXX=method;
													}
#line 3071 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 680 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"class_implementation_definition_header: PLUS p_type		 method_selector\n";
															method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																
																
										}
#line 3083 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 687 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"class_implementation_definition_header:  PLUS			 method_selector\n";
													 method =InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
									
										}
#line 3094 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 696 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															scoop=NULL;
															cscoop=NULL;
															cout<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";
															method->setFunctionNode(functionNode);
														functionNode=NULL;
															}
#line 3106 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 705 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											     cout<<"instance_implementation_definition_header:MINUS p_type		method_selector\n";
												 method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
															
												}
#line 3117 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 711 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"instance_implementation_definition_header:MINUS 			method_selector\n";
												 method =InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
												}
#line 3127 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 718 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												
												cout<<"block_body:OPEN_S  block_body_part \n";
												(yyval.r.node)=(yyvsp[-1].r.node);
												}
#line 3137 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 725 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3153 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 739 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												scoop=scoop->getParent();
												cout<<"block_body_statements:statement_list	CLOSE_S	\n";
												}
#line 3162 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 743 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												scoop=scoop->getParent();
												cout<<"block_body_statements:CLOSE_S\n";
												}
#line 3171 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 749 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement_list: statement_list statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3181 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 754 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement_list: statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											(yyval.r.node)=(yyvsp[0].r.node);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3192 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 763 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: loop_statement\n";
											(yyval.r.text)="loop";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3201 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 767 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: conditional_statement\n";
											(yyval.r.text)="cond";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3210 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 771 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"statement: expr\n";
												(yyval.r.text)="expr";
												(yyval.r.node)=(yyvsp[-1].r.node);
												//nodeXX=$<r.node>1;
											}
#line 3221 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 777 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"statement: variable_declaration\n";
											
												ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												(yyval.r.node)=(yyvsp[0].r.node);
										    }
#line 3235 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 786 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: block_body\n";(yyval.r.text)=new char[256];(yyval.r.text)[0]='\0';strcat((yyval.r.text),"Block");
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3243 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 789 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: return_statement\n";
												(yyval.r.text)="return";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3252 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 793 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: try_catch\n";}
#line 3258 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 795 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	                                            (yyval.r.text)="asm";
												(yyval.r.node)=(yyvsp[0].r.node);}
#line 3266 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 803 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"@asm command \n";
	                                         (yyval.r.node)=new AsmNode(scoop,(yyvsp[-1].r.text));
											 }
#line 3274 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 809 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
														 (yyval.r.text)=(yyvsp[-2].r.text);
														 (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3285 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 815 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
														  (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3297 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 822 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:enum\n";}
#line 3303 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 826 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_list:variable_list COMMA variable\n";}
#line 3309 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 827 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_list:variable\n";
										
										}
#line 3317 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 830 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ',' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3323 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 833 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout <<"variable:  IDENTIFIER array_tag initializer \n";
											 var=new Array((yyvsp[-1].r.text),arrayAlloc.size(),NULL);
											(dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
											 arrayList.push_back( ( dynamic_cast<Array*>(var)));
											 arrayAlloc.clear();
											}
#line 3335 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 840 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
											cout <<"variable:  IDENTIFIER main_initializer \n";
											idsList.push_back((yyvsp[-1].r.text)) ;
											IdentifierNode* identifierNode=new IdentifierNode((yyvsp[-1].r.text),scoop);
											if((yyvsp[0].r.node)!=NULL){
											(dynamic_cast<AssignNode*>((yyvsp[0].r.node)))->setLeftExp(identifierNode);
											}
											declarationList.push_back(make_pair((yyvsp[-1].r.text),(yyvsp[0].r.node)));
											}
#line 3349 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 849 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3355 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 852 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"return_statement: RETURN expr\n";
												 (yyval.r.node)=new ReturnNode(scoop,(yyvsp[-1].r.node));
												}
#line 3363 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 857 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: for_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3371 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 860 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3379 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 863 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: do_while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3387 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 868 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"do_while: do_header   statement   while_loop_header   SEMI_COMMA\n";
													(yyval.r.node)=new DoWhileNode((yyvsp[-1].r.node),(yyvsp[-2].r.node),scoop);
													}
#line 3395 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 873 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"do_header: DO\n";}
#line 3401 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 876 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3422 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 895 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer	SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-5].r.node),(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										//nodeXX=$<r.node>5;
										}
#line 3431 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 901 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3439 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 905 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3447 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 909 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),(yyvsp[-2].r.node),NULL,NULL,scoop);
										}
#line 3455 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 914 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-3].r.node),NULL,NULL,NULL,scoop);
										}
#line 3463 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 918 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA				CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-1].r.node),NULL,NULL,scoop);
										}
#line 3471 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 922 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P";
										(yyval.r.node)=new ForNode(NULL,NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3479 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 927 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_hearder: FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	\n";
											(yyval.r.node)=new ForNode(NULL,NULL,NULL,NULL,scoop);
											}
#line 3487 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 932 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: INT IDENTIFIER EQUAL expr\n";
											AssignNode * temp=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
											
											//temp->add($<r.text>2,);
											
											//temp.push_back(make_pair($<r.text>2,$<r.node>4));
											DeclerationNode* temp1=new DeclerationNode(list<pair<string,Node*>>(),scoop,"int");
											temp1->add((yyvsp[-2].r.text),temp);
										 (yyval.r.node)=temp1; 
										 idsList.push_back((yyvsp[-2].r.text));
										}
#line 3503 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 943 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: IDENTIFIER EQUAL expr\n";
										(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
										}
#line 3511 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 946 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: IDENTIFIER\n";
										(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
										}
#line 3519 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 951 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr LESS_THAN expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_THAN,scoop);
										}
#line 3527 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 954 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr MORE_THAN expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_THAN,scoop);
										}
#line 3535 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 957 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_OR_EQUAL,scoop);
										}
#line 3543 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 960 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_OR_EQUAL,scoop);
										}
#line 3551 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 963 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr EQUAL_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),EQUAL_EQUAL,scoop);
										}
#line 3559 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 966 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:NOT_EQUAL expr\n";
										 (yyval.r.node)=new UnaryNode(scoop,(yyvsp[0].r.node),NOT_EQUAL);
										}
#line 3567 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 969 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";
										 (yyval.r.node)=(yyvsp[-1].r.node);
										}
#line 3575 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 972 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"logic_expr:logic_expr AND_AND logic_expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),AND_AND,scoop);
										}
#line 3584 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 976 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:logic_expr OR_OR logic_expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),OR_OR,scoop);
										}
#line 3592 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 979 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:TRUE\n";
										 (yyval.r.node)=new ConstantNode(true,scoop);
										}
#line 3600 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 982 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:FALSE\n";
											 (yyval.r.node)=new ConstantNode(false,scoop);
										}
#line 3608 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 987 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"expr:assign_expr\n";
										 (yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3616 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 990 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"expr:simple_expr\n";
										(yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3624 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 995 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"assign_expr:long_id EQUAL simple_expr\n";
										//LongIdHelper::checkIdenentifier( scoop, interface,"set1");
										(yyval.r.node)=new AssignNode(scoop,(yyvsp[-2].r.node),(yyvsp[0].r.node));
										}
#line 3634 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1002 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"long_id: long_id.IDENTIFIER\n";LongIdHelper::addIdentifier((yyvsp[-2].r.text));}
#line 3640 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1003 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"long_id: long_id.message_call\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3649 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1007 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																LongIdHelper::addIdentifier((yyvsp[0].r.text)); 
																(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
																cout<<"long_id:IDENTIFIER\n";
															   }
#line 3659 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1017 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:STRING_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.string_val,scoop);
									}
#line 3667 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1020 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"simple_expr:INT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.int_val,scoop);
									}
#line 3676 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1024 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:FLOAT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.float_val,scoop);
									}
#line 3684 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1027 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:CHAR_VAL\n";
										(yyval.r.node)=new ConstantNode(yylval.r.char_val,scoop);
									}
#line 3692 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1030 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:long_id\n";
									(yyval.r.node)=(yyvsp[0].r.node);
									}
#line 3700 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1033 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"simple_expr:expr PLUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),PLUS,scoop);
									}
#line 3709 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1037 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"simple_expr:expr MINUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MINUS,scoop);
									}
#line 3718 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1041 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:expr MULTI expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MULTI,scoop);
									}
#line 3726 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1044 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"simple_expr:expr DIV expr\n";
									(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),DIV,scoop);
									}
#line 3735 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1048 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:OPEN_P expr CLOSE_P\n";}
#line 3741 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1049 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:ID++";}
#line 3747 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1050 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:ID--";}
#line 3753 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1051 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:++ID";}
#line 3759 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1052 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:--ID";}
#line 3765 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1053 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"expr:p_type expr\n";
																if(type!=NULL)
																(yyval.r.node)=new CastNode(scoop,type,(yyvsp[0].r.node));
															}
#line 3775 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1060 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
							cout<<"message_call2: OPEN_ARR\n";
							callNode=new CallNode(scoop);
						 }
#line 3784 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1066 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";
												callNode->setSender((yyvsp[-2].r.node));
												callNode->setMessage((yyvsp[-1].r.text));
												(yyval.r.node)=callNode;
												}
#line 3795 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1074 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"sender: message_call\n";
											 (yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3803 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1077 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"sender: IDENTIFIER\n";
											(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
											}
#line 3811 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1082 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"message: IDENTIFIER\n";
											//$<r.node>$=$<r.text>1;
												
											}
#line 3820 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1086 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"message: IDENTIFIER SEMI_COLUMN argument_list\n";
											//$<r.node>$=$<r.text>1;
											}
#line 3829 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1092 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"argument_list: argument_list argument\n";}
#line 3835 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1093 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"argument_list: argument\n";}
#line 3841 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1096 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"argument: SEMI_COLUMN expr\n";
											(yyval.r.node)=(yyvsp[0].r.node);
											callNode->addArgument((yyvsp[0].r.node),"");
											}
#line 3851 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1101 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											 cout<<"argument: IDENTIFIER SEMI_COLUMN expr\n";
											 callNode->addArgument((yyvsp[0].r.node),(yyvsp[-2].r.text));
											 (yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3861 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1108 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"while_loop:while_loop_header statement\n";
											 (yyval.r.node)=new WhileNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop);
										}
#line 3870 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1114 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3878 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1119 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"conditional_statement: if_header statement\n";
												 (yyval.r.node)=new IfNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop,NULL);
												}
#line 3886 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1122 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"conditional_statement: if_header statement with else\n";
												 (yyval.r.node)=new IfNode((yyvsp[-3].r.node),(yyvsp[-2].r.node),scoop,new ElseNode((yyvsp[0].r.node),scoop));
												}
#line 3895 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1126 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"conditional_statement: switch_header switch_body statement\n";
											(yyval.r.node)=new SwitchNode(tempSwitch);
										}
#line 3903 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1131 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3911 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1136 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"switch_header: SWITCH OPEN_P IDENTIFIER CLOSE_P\n";
										
										tempSwitch->setExpr(new IdentifierNode((yyvsp[-2].r.text),scoop));
									}
#line 3920 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1142 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cscoop=scoop;scoop=new ScoopNode(cscoop);tempSwitch=new SwitchNode(NULL,std::list<pair<Node*,Node*>>(),scoop);}
#line 3926 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1145 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3932 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1146 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3938 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1147 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3944 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1148 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3950 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1151 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3956 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1152 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3962 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1155 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-4].r.node),(yyvsp[-2].r.node));}
#line 3968 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1156 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-2].r.node),(yyvsp[0].r.node));}
#line 3974 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1157 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-3].r.node),NULL);}
#line 3980 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1160 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-2].r.node));}
#line 3986 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1161 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[0].r.node));}
#line 3992 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1162 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-1].r.node));}
#line 3998 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1164 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"protocol: protocol_header protocol_body\n";
										idsList.clear();
										methodsList.clear();
										method=NULL;
										}
#line 4009 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1172 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";
								protocol=ProtocolHelper ::createNewProtocol((yyvsp[0].r.text),symbolTable );
								
								}
#line 4019 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1179 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	protocol_reference_list interface_declaration_list	AT_END\n";
								ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								idsList.clear();
								}
#line 4031 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1187 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	interface_declaration_list	AT_END\n";
									
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								
								}
#line 4043 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1195 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	protocol_reference_list AT_END	\n";
											ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								idsList.clear();
								}
#line 4053 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1201 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"protocol_body:	AT_END\n";}
#line 4059 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1203 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"enum: ENUM IDENTIFIER  OPEN_S list_expr CLOSE_S SEMI_COMA  \n";
																
																EnumHelper::createNewEnum( (yyvsp[-4].r.text),idsList, symbolTable);
																idsList.clear();
															 }
#line 4070 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1209 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"enum: ENUM IDENTIFIER SEMI_COMA\n";
																EnumHelper::createNewEnum( (yyvsp[-1].r.text),idsList, symbolTable);
															  }
#line 4079 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1216 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"list_expr:IDENTIFIER EQUAL expr COMMA list_expr\n";
												idsList.push_back((yyvsp[-4].r.text));
													(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-4].r.text),scoop),(yyvsp[-2].r.node));
												}
#line 4089 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1221 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"list_expr:IDENTIFIER EQUAL expr\n";
												idsList.push_back((yyvsp[-2].r.text));
												(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
												}
#line 4099 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1226 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"list_expr:IDENTIFIER \n";
													idsList.push_back((yyvsp[0].r.text));
													//??
												}
#line 4109 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1231 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  cout<<"list_expr:IDENTIFIER  COMMA list_expr \n";
												  idsList.push_back((yyvsp[-2].r.text));
												  //??
												}
#line 4119 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1238 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  cout<<"try_catch:TRY statement catch_list finally_statement \n";
												}
#line 4127 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1242 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {				  
								cout<<"try_catch:TRY statement catch_list \n";
							  }
#line 4135 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1247 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"catch_list:CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4141 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1248 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"catch_list:catch_list CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4147 "yacc.cpp" /* yacc.c:1646  */
    break;


#line 4151 "yacc.cpp" /* yacc.c:1646  */
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
#line 1253 "C:\\Users\\Toshiba\\Source\\Repos\\occ\\compiler\\yacc.y" /* yacc.c:1906  */

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

