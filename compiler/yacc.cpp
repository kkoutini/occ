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
#line 142 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:355  */

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
#line 145 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:355  */

	
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
#define YYLAST   884

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  262
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  477

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
     777,   786,   789,   793,   795,   798,   807,   813,   819,   826,
     830,   831,   834,   837,   844,   853,   856,   861,   864,   867,
     872,   877,   880,   898,   904,   908,   912,   917,   921,   925,
     930,   936,   947,   950,   955,   958,   961,   964,   967,   970,
     973,   976,   980,   983,   986,   991,   994,   999,  1006,  1007,
    1011,  1021,  1024,  1028,  1031,  1034,  1037,  1041,  1045,  1048,
    1052,  1053,  1054,  1055,  1056,  1057,  1064,  1070,  1078,  1081,
    1086,  1090,  1096,  1097,  1100,  1105,  1112,  1118,  1123,  1126,
    1130,  1135,  1140,  1146,  1149,  1150,  1151,  1152,  1155,  1156,
    1159,  1160,  1161,  1164,  1165,  1166,  1168,  1176,  1182,  1190,
    1198,  1204,  1207,  1213,  1220,  1225,  1230,  1235,  1242,  1246,
    1251,  1252,  1255
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

#define YYPACT_NINF -430

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-430)))

#define YYTABLE_NINF -65

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-65)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     175,    30,   112,    34,    65,    95,   153,    23,   132,  -430,
    -430,   463,   115,  -430,  -430,   127,  -430,   375,  -430,  -430,
    -430,   168,   189,   148,  -430,  -430,  -430,  -430,   594,   176,
    -430,    21,    21,  -430,   137,   146,   162,  -430,  -430,  -430,
     243,  -430,    21,    21,   358,  -430,   413,  -430,  -430,   186,
    -430,   186,  -430,   424,   439,  -430,   306,   206,  -430,   211,
     200,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
     496,  -430,   237,   250,   392,  -430,   308,   308,  -430,   418,
    -430,  -430,  -430,  -430,  -430,    19,   258,   496,   287,   245,
     287,   294,   470,  -430,   196,   247,  -430,  -430,   263,  -430,
    -430,  -430,   308,   266,   296,  -430,   308,   287,  -430,   287,
    -430,  -430,   472,  -430,  -430,  -430,  -430,   319,  -430,  -430,
     499,  -430,  -430,  -430,  -430,    32,   305,  -430,   466,   307,
     309,  -430,  -430,  -430,   308,   273,     3,   154,  -430,  -430,
     329,  -430,   328,   344,   291,  -430,  -430,   345,  -430,  -430,
     517,  -430,  -430,   274,  -430,  -430,  -430,  -430,  -430,   178,
     362,  -430,   337,   285,  -430,  -430,  -430,  -430,   200,  -430,
     496,   360,   367,   382,  -430,   384,   408,  -430,   341,   527,
     414,   497,  -430,  -430,   381,  -430,  -430,  -430,  -430,  -430,
    -430,   527,  -430,   527,   409,    -8,     9,   422,  -430,   527,
    -430,   527,    10,  -430,  -430,  -430,   211,   341,   429,     3,
     227,  -430,  -430,     1,  -430,  -430,  -430,   173,  -430,   526,
    -430,   431,   356,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,   551,   444,  -430,   293,  -430,   339,   497,
      94,   699,   699,   457,    55,  -430,   623,  -430,  -430,  -430,
    -430,   462,   464,   341,   481,  -430,    -8,   198,  -430,   365,
     488,   273,   268,   174,  -430,  -430,  -430,   478,  -430,  -430,
     341,   522,  -430,  -430,   524,  -430,  -430,   482,  -430,   341,
     535,  -430,    92,  -430,   534,  -430,   538,  -430,  -430,  -430,
     492,  -430,   502,  -430,   273,  -430,  -430,   552,   328,   540,
    -430,  -430,  -430,   548,  -430,   208,   519,   557,   656,   553,
     587,   341,  -430,  -430,   322,   301,   451,   536,  -430,  -430,
     425,   503,   417,  -430,  -430,   198,  -430,   341,   341,   341,
     341,   549,   445,  -430,   525,   341,   525,  -430,   497,  -430,
     497,   558,   198,  -430,   563,   523,   527,   569,   407,  -430,
    -430,   559,  -430,   211,  -430,     8,   328,  -430,  -430,  -430,
     341,   539,   752,    96,   667,   518,   417,  -430,  -430,   699,
     699,   341,   341,   341,   341,   341,  -430,   565,  -430,   187,
     187,  -430,  -430,   496,   567,   527,  -430,   568,  -430,  -430,
    -430,  -430,  -430,  -430,   823,  -430,  -430,   467,   575,   530,
    -430,  -430,   547,   554,  -430,  -430,   341,  -430,   560,   770,
     784,   116,  -430,   485,   485,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,   584,   496,  -430,   731,  -430,   585,  -430,   823,
    -430,   601,   556,  -430,   603,  -430,  -430,  -430,  -430,  -430,
     588,  -430,   593,   802,   606,   620,   738,  -430,   608,   610,
     341,  -430,  -430,   624,  -430,  -430,  -430,  -430,   607,   527,
     619,   621,   625,  -430,   791,  -430,  -430,  -430,  -430,   527,
     791,   632,  -430,  -430,  -430,   791,  -430
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       5,     0,     0,     8,     6,     0,     7,     0,     9,    13,
      14,    12,   126,     0,   247,    70,     1,     3,     0,     0,
      23,     0,     0,    10,     0,     0,     0,   108,   109,   110,
       0,   130,     0,     0,     0,   124,     0,   132,   133,     0,
     134,     0,   251,     0,     0,   246,     0,     0,   253,     0,
       0,    93,    92,    91,    95,    90,    55,    54,    53,    46,
       0,    94,     0,     0,     0,    48,    49,     0,    52,     0,
      84,    85,    82,    83,    36,     0,   119,     0,     0,     0,
       0,     0,    26,    20,     0,     0,    31,    21,     0,    32,
      22,   107,     0,     0,     0,    68,    56,     0,   137,     0,
     140,   128,     0,   129,   131,   142,   135,     0,   138,   250,
       0,   249,    15,    11,   125,   256,     0,    96,     0,    88,
      86,    45,    47,    51,    50,    62,     0,     0,    61,    34,
       0,    33,     0,     0,     0,   114,   112,     0,   116,    24,
       0,    28,    17,     0,    29,    18,    30,    19,    69,     0,
      80,    73,     0,     0,    67,   136,   139,   127,   200,   144,
       0,     0,     0,     0,   171,     0,     0,   216,     0,     0,
       0,     0,   151,   141,     0,   146,   154,   150,   152,   147,
     169,     0,   167,     0,     0,     0,     0,   199,   168,     0,
     148,     0,     0,   159,   153,   248,     0,     0,     0,     0,
       0,    89,    87,     0,    65,    99,    66,     0,    57,     0,
      35,     0,   118,   122,   117,   113,   111,   115,    25,    27,
      16,    77,    81,     0,     0,    71,     0,    74,     0,     0,
       0,     0,     0,     0,    88,   200,     0,   201,   203,   204,
     202,     0,     0,     0,     0,   195,   205,   196,   199,     0,
       0,     0,   106,     0,   161,   143,   145,     0,   172,   149,
       0,     0,   219,   218,     0,   155,   226,   228,   237,     0,
       0,   230,     0,   239,     0,   257,   255,   252,    63,    58,
       0,   102,    97,    59,     0,    60,   123,     0,     0,     0,
      79,    75,    78,     0,    72,     0,   183,     0,     0,     0,
       0,     0,   193,   194,     0,     0,     0,     0,   211,   212,
     200,   205,     0,   213,   214,   215,   166,     0,     0,     0,
       0,     0,   259,   156,   104,     0,   104,   164,     0,   157,
       0,     0,   197,   198,   220,     0,     0,     0,     0,   235,
     238,     0,   236,     0,   101,     0,     0,   120,    76,   158,
       0,     0,     0,     0,     0,     0,   196,   189,   227,     0,
       0,     0,     0,     0,     0,     0,   231,     0,   210,   206,
     207,   208,   209,     0,     0,     0,   258,     0,   165,   105,
     163,   162,   160,   170,     0,   217,   229,     0,     0,   244,
     234,   254,     0,     0,   121,   182,     0,   180,     0,     0,
       0,     0,   190,   191,   192,   184,   185,   186,   187,   188,
     233,   232,     0,     0,   262,     0,   103,   200,   224,   221,
     223,     0,   241,   245,     0,   100,    98,   181,   179,   178,
       0,   177,     0,     0,     0,     0,     0,    38,     0,    40,
       0,   222,   242,     0,   243,   174,   175,   176,     0,     0,
       0,    41,     0,    37,     0,   225,   240,   173,   260,     0,
       0,    43,    39,   261,    44,     0,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -430,  -430,  -430,   635,  -430,  -430,  -430,   634,  -430,  -430,
    -429,   100,  -430,   579,   582,  -430,  -430,   -11,   528,   442,
    -430,  -430,  -430,  -147,   -28,  -430,  -430,  -430,  -430,  -133,
    -430,  -430,   326,  -430,    27,    16,  -430,  -430,   -24,    13,
    -430,  -292,  -430,  -430,  -430,   622,   -15,  -430,  -430,  -430,
    -430,   210,  -430,  -430,  -430,  -169,  -430,  -430,   426,   -60,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,  -214,  -167,   -91,
    -116,  -129,  -430,  -112,  -430,  -430,  -430,   234,  -430,   397,
    -430,  -430,  -430,  -430,  -430,  -430,   386,   387,  -430,  -430,
    -430,    82,  -204,  -430,  -430,  -430
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    33,    34,    85,   426,
     448,    35,    74,    75,    76,    77,   104,    78,   137,   138,
     106,    12,    13,   162,   181,    80,    81,    82,    83,   214,
     292,   215,   388,   337,    36,    37,    38,    39,   253,    89,
     222,   223,    14,    15,    45,    46,    47,    48,    49,    50,
      51,   182,   117,   183,   184,   185,   186,   187,   263,   264,
     188,   189,   190,   191,   192,   193,   309,   314,   315,   255,
     256,   257,   196,   258,   274,   345,   429,   430,   198,   199,
     200,   201,   202,   421,   281,   282,   283,   284,    16,    17,
      55,   203,   126,   204,   332,   386
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,   195,   285,   217,   216,   197,   357,    88,    90,   402,
     259,   254,    79,   272,   -64,   266,   238,   462,   107,   109,
     139,   -64,   267,    26,   268,    86,   194,   278,   316,   105,
     276,   114,   277,   270,    19,   472,   290,   140,    22,   141,
     286,   474,   128,   403,    54,    91,   476,    87,    79,    79,
     206,   271,   101,   291,   213,   108,   110,   279,   280,   143,
     177,    95,    98,   195,   404,   133,    58,   197,   195,    23,
     101,    59,   197,   207,    79,   195,   288,   195,    79,   197,
     120,   197,    18,   195,   273,   195,   300,   197,   194,   197,
      18,   158,   211,   194,   363,   164,   365,   114,   306,    24,
     194,   144,   194,   147,   307,   308,    79,   409,   194,   349,
     194,   101,   347,    20,   101,    44,    21,   322,   221,   150,
     165,   153,   166,   133,   325,   369,   370,   443,   334,   336,
     321,    40,    -2,     1,    94,     2,   101,   321,    92,   279,
     280,   342,   239,    28,   367,   369,   370,    96,    41,   401,
     411,    42,    43,    28,   321,   413,   414,    25,    93,    58,
       3,    31,    32,    99,    59,   218,   101,    97,   389,   101,
      31,    32,   219,    56,   293,   338,     1,   396,     2,   399,
      84,   366,     4,   100,   -63,   339,    31,    32,     5,   231,
       6,   -63,   340,   405,    57,   408,   232,   151,   379,   380,
     381,   382,   115,     3,   415,   416,   417,   418,   419,   338,
     124,   321,   321,   321,   321,   125,   424,   152,   143,   359,
      31,    32,   327,   328,   329,     4,   340,   428,   432,   330,
     195,     5,   195,     6,   197,   329,   197,   127,   289,   437,
     330,   129,   440,   442,   102,   219,   145,    60,   154,    61,
      62,    63,    64,    65,   130,   194,   146,   194,   449,   116,
     103,   118,   428,   142,   156,    70,    71,   159,   155,   195,
     160,    31,    32,   197,   221,   229,   458,   161,   391,   449,
     392,   195,   143,   465,   157,   197,   236,    31,    32,   160,
     468,    86,   225,    72,   194,   230,   237,   449,    31,    32,
     473,    73,   226,   449,   302,   148,   194,   122,   449,   335,
     123,   232,    60,   163,    61,    62,    63,    64,    65,   213,
     371,   372,   208,   168,   213,    61,    62,    63,    64,    65,
      70,    71,   221,   220,   373,   115,   169,   374,   234,   375,
     303,   170,    71,   195,   211,   245,   212,   197,   235,   368,
     304,   369,   370,   195,    87,   422,   227,   197,    72,   171,
     297,   298,   172,   173,   174,   175,    73,   246,   194,   176,
     177,   224,   247,   248,   178,   249,   250,    73,   194,   111,
     233,   179,    42,    43,   180,   168,   240,    61,    62,    63,
      64,    65,   177,   241,    29,   445,    52,   115,   265,    31,
      32,   251,   252,   170,    71,    66,    67,    68,   242,   131,
     243,   168,   244,    61,    62,    63,    64,    65,   260,   135,
     269,   171,   136,   115,   172,   173,   174,   175,   331,   170,
      71,   176,   177,   275,   113,   296,   178,    42,    43,    73,
     287,   327,   328,   179,   378,   119,   180,   171,    31,    32,
     172,   173,   174,   175,   329,   301,   398,   176,   177,   330,
     121,   317,   178,    31,    32,    73,   323,   135,   324,   179,
     209,   168,   180,    61,    62,    63,    64,    65,   376,    28,
     369,   370,    29,   115,    30,   318,   319,    31,    32,   170,
      71,   149,   326,   167,    31,    32,    42,    43,   261,   333,
      60,   262,    61,    62,    63,    64,    65,   171,   384,   385,
     172,   173,   174,   175,   -65,   -65,   431,   176,   177,    71,
     205,   172,   178,    31,    32,    73,   343,   294,   344,   179,
     209,   168,   180,    61,    62,    63,    64,    65,   228,   346,
     348,    31,    32,   115,   354,   412,    72,   369,   370,   170,
      71,   352,   299,   355,    73,   160,   353,   356,   232,   358,
     360,   361,   271,   377,   364,   383,   387,   171,   394,   393,
     172,   173,   174,   175,   397,   395,   400,   176,   177,   434,
     406,   420,   178,   423,   425,    73,   433,   438,   444,   179,
     450,   320,   180,    61,    62,    63,    64,    65,    60,   435,
      61,    62,    63,    64,    65,   453,   436,    66,    67,    68,
      71,    69,   452,   310,   454,   455,    70,    71,   247,   248,
     456,   249,   250,   459,   460,   463,   311,   320,   464,    61,
      62,    63,    64,    65,   467,   466,   469,    72,   177,   470,
     312,   313,   471,    27,    72,    73,    71,   251,   252,   246,
     475,    53,    73,   132,   247,   248,   210,   249,   250,   134,
     245,   295,   390,   451,   341,   305,   112,   362,   350,   351,
       0,   245,     0,    72,   177,     0,     0,     0,   410,     0,
       0,    73,   310,   251,   252,     0,     0,   247,   248,     0,
     249,   250,     0,   310,     0,   311,     0,     0,   247,   248,
       0,   249,   250,   245,     0,     0,   311,   177,     0,   312,
     313,     0,     0,     0,     0,     0,   251,   252,   177,     0,
     312,   313,     0,     0,     0,   310,     0,   251,   252,     0,
     247,   248,     0,   249,   250,   245,     0,     0,   311,     0,
       0,     0,   245,     0,     0,     0,     0,   446,   447,     0,
     177,     0,   312,   313,   446,   461,   245,   246,     0,   251,
     252,     0,   247,   248,   246,   249,   250,     0,     0,   247,
     248,     0,   249,   250,   245,     0,     0,     0,   246,   407,
       0,     0,   177,   247,   248,     0,   249,   250,   245,   177,
       0,   251,   252,     0,     0,   245,   246,   439,   251,   252,
       0,   247,   248,   177,   249,   250,   245,   446,     0,     0,
     246,   441,   251,   252,     0,   247,   248,   246,   249,   250,
       0,   177,   247,   248,     0,   249,   250,   427,   246,   457,
     251,   252,     0,   247,   248,   177,   249,   250,     0,     0,
       0,     0,   177,     0,   251,   252,     0,     0,     0,   246,
       0,   251,   252,   177,   247,   248,     0,   249,   250,     0,
       0,     0,   251,   252,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   177,     0,     0,     0,     0,     0,
       0,     0,     0,   251,   252
};

static const yytype_int16 yycheck[] =
{
      28,   117,   206,   136,     1,   117,   298,    31,    32,     1,
     179,   178,    40,     4,    11,   184,   163,   446,    42,    43,
       1,    18,   191,     0,   193,     4,   117,    17,   242,    40,
     199,    46,   201,    41,     4,   464,    35,    18,     4,    20,
     207,   470,    70,    35,    17,    32,   475,    26,    76,    77,
      18,    59,    36,    52,    51,    42,    43,    47,    48,    87,
      51,    34,    35,   179,   356,    76,    11,   179,   184,     4,
      54,    16,   184,    41,   102,   191,   209,   193,   106,   191,
      53,   193,     0,   199,   196,   201,   233,   199,   179,   201,
       8,   102,    37,   184,   308,   106,   310,   112,     4,     4,
     191,    88,   193,    90,    10,    11,   134,    11,   199,    17,
     201,    95,   279,     1,    98,    15,     4,   246,   142,    92,
     107,    94,   109,   134,   253,    29,    30,    11,   261,   262,
     246,    16,     0,     1,    34,     3,   120,   253,     1,    47,
      48,   270,   170,    16,   311,    29,    30,     1,    21,   353,
     364,    24,    25,    16,   270,   369,   370,     4,    21,    11,
      28,    24,    25,     1,    16,    11,   150,    21,   335,   153,
      24,    25,    18,     5,     1,     1,     1,   346,     3,   348,
       4,   310,    50,    21,    11,    11,    24,    25,    56,    11,
      58,    18,    18,   360,     5,   362,    18,     1,   327,   328,
     329,   330,    16,    28,   371,   372,   373,   374,   375,     1,
       4,   327,   328,   329,   330,     4,   385,    21,   246,    11,
      24,    25,    24,    25,    37,    50,    18,   394,   397,    42,
     346,    56,   348,    58,   346,    37,   348,    37,    11,   406,
      42,     4,   409,   410,     1,    18,     1,     4,     1,     6,
       7,     8,     9,    10,     4,   346,    11,   348,   425,    49,
      17,    51,   429,     5,     1,    22,    23,     1,    21,   385,
       4,    24,    25,   385,   298,     1,   443,    11,   338,   446,
     340,   397,   310,   450,    21,   397,     1,    24,    25,     4,
     459,     4,     1,    50,   385,    21,    11,   464,    24,    25,
     469,    58,    11,   470,    11,    11,   397,     1,   475,    41,
       4,    18,     4,    17,     6,     7,     8,     9,    10,    51,
      19,    20,    17,     4,    51,     6,     7,     8,     9,    10,
      22,    23,   356,     4,    33,    16,    17,    36,     1,    38,
       1,    22,    23,   459,    37,     4,    37,   459,    11,    27,
      11,    29,    30,   469,    26,   383,    11,   469,    50,    40,
       4,     5,    43,    44,    45,    46,    58,    26,   459,    50,
      51,    27,    31,    32,    55,    34,    35,    58,   469,    21,
      18,    62,    24,    25,    65,     4,    26,     6,     7,     8,
       9,    10,    51,    26,    19,   423,    21,    16,    17,    24,
      25,    60,    61,    22,    23,    13,    14,    15,    26,    17,
      26,     4,     4,     6,     7,     8,     9,    10,     4,     1,
      11,    40,     4,    16,    43,    44,    45,    46,    63,    22,
      23,    50,    51,    11,    21,     4,    55,    24,    25,    58,
      11,    24,    25,    62,    27,    21,    65,    40,    24,    25,
      43,    44,    45,    46,    37,    11,    49,    50,    51,    42,
      21,     4,    55,    24,    25,    58,     4,     1,     4,    62,
       4,     4,    65,     6,     7,     8,     9,    10,    27,    16,
      29,    30,    19,    16,    21,    60,    61,    24,    25,    22,
      23,    21,    11,    21,    24,    25,    24,    25,     1,    11,
       4,     4,     6,     7,     8,     9,    10,    40,    63,    64,
      43,    44,    45,    46,    29,    30,    49,    50,    51,    23,
      21,    43,    55,    24,    25,    58,     4,     1,     4,    62,
       4,     4,    65,     6,     7,     8,     9,    10,    21,    57,
       5,    24,    25,    16,    52,    27,    50,    29,    30,    22,
      23,    17,     1,    51,    58,     4,    18,     5,    18,    11,
      41,     4,    59,    27,    11,    16,    41,    40,     5,    11,
      43,    44,    45,    46,     5,    52,    17,    50,    51,    49,
      41,    16,    55,    16,    16,    58,    11,    27,     4,    62,
       5,     4,    65,     6,     7,     8,     9,    10,     4,    52,
       6,     7,     8,     9,    10,    49,    52,    13,    14,    15,
      23,    17,    11,    26,    11,    27,    22,    23,    31,    32,
      27,    34,    35,    17,     4,    17,    39,     4,    18,     6,
       7,     8,     9,    10,    27,    11,    17,    50,    51,    18,
      53,    54,    17,     8,    50,    58,    23,    60,    61,    26,
      18,    17,    58,    74,    31,    32,   128,    34,    35,    77,
       4,   219,   336,   429,   267,   239,    44,    11,   282,   282,
      -1,     4,    -1,    50,    51,    -1,    -1,    -1,    11,    -1,
      -1,    58,    26,    60,    61,    -1,    -1,    31,    32,    -1,
      34,    35,    -1,    26,    -1,    39,    -1,    -1,    31,    32,
      -1,    34,    35,     4,    -1,    -1,    39,    51,    -1,    53,
      54,    -1,    -1,    -1,    -1,    -1,    60,    61,    51,    -1,
      53,    54,    -1,    -1,    -1,    26,    -1,    60,    61,    -1,
      31,    32,    -1,    34,    35,     4,    -1,    -1,    39,    -1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    16,    17,    -1,
      51,    -1,    53,    54,    16,    17,     4,    26,    -1,    60,
      61,    -1,    31,    32,    26,    34,    35,    -1,    -1,    31,
      32,    -1,    34,    35,     4,    -1,    -1,    -1,    26,    27,
      -1,    -1,    51,    31,    32,    -1,    34,    35,     4,    51,
      -1,    60,    61,    -1,    -1,     4,    26,    27,    60,    61,
      -1,    31,    32,    51,    34,    35,     4,    16,    -1,    -1,
      26,    27,    60,    61,    -1,    31,    32,    26,    34,    35,
      -1,    51,    31,    32,    -1,    34,    35,     4,    26,    27,
      60,    61,    -1,    31,    32,    51,    34,    35,    -1,    -1,
      -1,    -1,    51,    -1,    60,    61,    -1,    -1,    -1,    26,
      -1,    60,    61,    51,    31,    32,    -1,    34,    35,    -1,
      -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61
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
      35,    60,    61,   110,   140,   141,   142,   143,   145,   127,
       4,     1,     4,   130,   131,    17,   127,   127,   127,    11,
      41,    59,     4,   145,   146,    11,   127,   127,    17,    47,
      48,   156,   157,   158,   159,   164,   140,    11,   101,    11,
      35,    52,   102,     1,     1,    91,     4,     4,     5,     1,
      95,    11,    11,     1,    11,   130,     4,    10,    11,   138,
      26,    39,    53,    54,   139,   140,   139,     4,    60,    61,
       4,   142,   143,     4,     4,   143,    11,    24,    25,    37,
      42,    63,   166,    11,   101,    41,   101,   105,     1,    11,
      18,   151,   143,     4,     4,   147,    57,   140,     5,    17,
     158,   159,    17,    18,    52,    51,     5,   113,    11,    11,
      41,     4,    11,   139,    11,   139,   143,   140,    27,    29,
      30,    19,    20,    33,    36,    38,    27,    27,    27,   143,
     143,   143,   143,    16,    63,    64,   167,    41,   104,   140,
     104,   131,   131,    11,     5,    52,   127,     5,    49,   127,
      17,   164,     1,    35,   113,   140,    41,    27,   140,    11,
      11,   139,    27,   139,   139,   140,   140,   140,   140,   140,
      16,   155,    96,    16,   127,    16,    81,     4,   140,   148,
     149,    49,   127,    11,    49,    52,    52,   140,    27,    27,
     140,    27,   140,    11,     4,    96,    16,    17,    82,   140,
       5,   149,    11,    49,    11,    27,    27,    27,   140,    17,
       4,    17,    82,    17,    18,   140,    11,    27,   127,    17,
      18,    17,    82,   127,    82,    18,    82
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
     127,   127,   127,   127,   127,   127,   128,   129,   129,   129,
     130,   130,   130,   131,   131,   131,   132,   133,   133,   133,
     134,   135,   136,   137,   137,   137,   137,   137,   137,   137,
     137,   138,   138,   138,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   140,   140,   141,   142,   142,
     142,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   144,   145,   146,   146,
     147,   147,   148,   148,   149,   149,   150,   151,   152,   152,
     152,   153,   154,   155,   156,   156,   156,   156,   157,   157,
     158,   158,   158,   159,   159,   159,   160,   161,   162,   162,
     162,   162,   163,   163,   164,   164,   164,   164,   165,   165,
     166,   166,   167
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
       1,     1,     1,     1,     1,     2,     3,     3,     4,     1,
       3,     1,     3,     3,     2,     3,     3,     1,     1,     1,
       4,     1,     2,     8,     7,     7,     7,     6,     6,     6,
       5,     4,     3,     1,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     1,     1,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     1,     4,     1,     1,
       1,     3,     2,     1,     1,     3,     2,     4,     2,     4,
       2,     4,     5,     1,     3,     2,     2,     1,     2,     1,
       6,     4,     5,     5,     3,     4,     2,     2,     3,     2,
       2,     1,     6,     3,     5,     3,     1,     3,     4,     3,
       6,     7,     2
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
#line 175 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"program: components\n"; 
										 }
#line 2033 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 178 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"components: components component\n";}
#line 2039 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 179 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"components: component\n";}
#line 2045 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 181 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface \n";}
#line 2051 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 182 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation \n";}
#line 2057 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 183 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"protocol \n";}
#line 2063 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 184 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct \n";}
#line 2069 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 185 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum \n";}
#line 2075 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 187 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface: class_interface_header class_interface_body\n";
																interface->setClassNode(classNode);
																classNode=NULL;
																 idsList.clear();
																 methodsList.clear();
																 method=NULL;
																}
#line 2087 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 197 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																				interface=InterfaceHelper::createNewInterface((yyvsp[-2].r.text),(yyvsp[0].r.text),symbolTable);
																				classNode=new ClassNode(NULL,interface);
																				}
#line 2096 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 201 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																					cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
																				 interface=InterfaceHelper::createNewInterface((yyvsp[0].r.text),"",symbolTable);
																				 	classNode=new ClassNode(NULL,interface);
																				}
#line 2106 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 206 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Unknown type name '"<<(yyvsp[-1].r.text)<<"' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2112 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 207 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2118 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 209 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2124 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 212 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
															
														InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2134 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 218 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														}
#line 2142 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 222 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	protocol_reference_list interface_declaration_list	AT_END\n";
														}
#line 2151 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 227 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2160 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 232 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														}
#line 2168 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 236 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_body:instance_variables		AT_END\n";}
#line 2174 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 238 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {														
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:interface_declaration_list	AT_END\n";
														}
#line 2183 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 242 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_body:AT_END\n";}
#line 2189 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 243 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2195 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 244 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2201 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 245 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2207 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 246 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2213 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 247 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2219 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 248 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2225 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 249 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2231 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 250 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2237 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 251 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2243 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 255 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													if(interface!=NULL){
													InterfaceHelper::addInheritedProtocol(interface,idsList,symbolTable);
														idsList.clear();
													}
													cout<<"protocol_reference_list: LESS_THAN ids_list_identifier MORE_THAN\n";
												}
#line 2255 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 262 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '>' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2261 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 265 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"ids_list:ids_list_identifier COMMA IDENTIFIER\n"; 
													idsList.push_back((yyvsp[0].r.text));
													}
#line 2270 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 269 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"ids_list_identifier:IDENTIFIER\n";
													idsList.push_back((yyvsp[0].r.text));
												    }
#line 2279 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 274 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array with body";}
#line 2285 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 275 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array without elements";}
#line 2291 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 279 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array-element \n";}
#line 2297 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 280 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array-element \n";}
#line 2303 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 281 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"empty element \n";}
#line 2309 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 282 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2315 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 283 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2321 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 284 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2327 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 287 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";}
#line 2333 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 288 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variables:OPEN_S	 CLOSE_S\n";}
#line 2339 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 291 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";}
#line 2345 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 292 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:instance_variable_declaration\n";}
#line 2351 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 293 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:variable_declaration_list\n";}
#line 2357 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 296 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declaration:visibility_specification variable_declaration_list\n";
																	}
#line 2364 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 300 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
											arrayList.clear();
												idsList.clear();
												flag=false;
										}
#line 2376 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 308 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										       InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
												arrayList.clear();
												idsList.clear();
												flag=false;
										cout<<"variable_declaration_list: variable_declaration\n";
										}
#line 2388 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 318 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PRIVATE\n";  visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2394 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 319 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PROTECTED\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2400 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 320 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PUBLIC\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2406 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 325 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct_variable_declaration:struct_declaration_list\n";}
#line 2412 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 328 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
	                                           (yyval.r.text)=(yyvsp[-2].r.text);
												}
#line 2420 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 331 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
													}
#line 2429 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 335 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2435 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 339 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"ids_list:ids_list COMMA id_dec\n"; 

									}
#line 2444 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 343 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"ids_list:id_dec\n"; }
#line 2450 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 344 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2456 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 347 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout <<" data_member: IDENTIFIER array_tag \n";
							 var=new Array((yyvsp[0].r.text),arrayAlloc.size(),NULL);
					       ( dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
						   arrayList.push_back( ( dynamic_cast<Array*>(var)));
						      arrayAlloc.clear();
							}
#line 2467 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 353 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {idsList.push_back((yyvsp[0].r.text)) ;cout <<" data_member: IDENTIFIER  \n";}
#line 2473 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 354 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2479 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 355 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2485 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 357 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {  
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																												idsList.clear();
																												flag=false;
																										  cout<<"struct_declaration_list: struct_declaration_list  variable_declarationxx\n";
																										}
#line 2497 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 365 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																														 	idsList.clear();
																															flag=false;
																										cout<<"struct_declaration_list:  variable_declarationxx\n";
																										}
#line 2509 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 372 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Illigal visibility specification at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2515 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 376 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
					myStruct=StructHelper::createNewStruct((yyvsp[0].r.text),symbolTable);
					cout<<"struct_header: STRUCT  IDENTIFIER\n";
					}
#line 2524 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 382 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S  entity SEMI_COMA\n";}
#line 2530 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 383 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S enteity SEMI_COMA \n";}
#line 2536 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 384 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S SEMI_COMA\n";}
#line 2542 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 385 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S  SEMI_COMA  \n";}
#line 2548 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 386 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2554 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 387 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2560 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 388 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2566 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 389 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2572 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 392 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"entity: IDENTIFIER COMMA  entity\n";}
#line 2578 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 393 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"entity:  IDENTIFIER \n";}
#line 2584 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 394 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2590 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 398 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type:simple type\n";}
#line 2596 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 399 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: complex type\n";}
#line 2602 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 400 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: struct_type\n";}
#line 2608 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 401 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: enum_type\n";}
#line 2614 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 405 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	cout<<"struct_type: STRUCT IDENTIFIER   \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																		string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2628 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 414 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct_type: STRUCT IDENTIFIER  MULTI \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2642 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 425 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum_type: ENUM IDENTIFIER \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2656 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 434 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum_type: ENUM IDENTIFIER  MULTI  \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																									string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2670 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 445 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"int type \n";
																type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
																}
#line 2684 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 454 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"char type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2697 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 462 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"float type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2710 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 470 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"NSString type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2723 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 478 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"void type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2736 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 486 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"bool type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2749 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 496 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 2764 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 507 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_tag: array_first_tag array_tag_list \n"; 
										   }
#line 2772 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 512 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"array_tag_list: array_tag_list OPEN_ARR INT_VAL CLOSE_ARR\n"; 
																arrayAlloc.push_back((yyvsp[-1].r.int_val));
														   }
#line 2781 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 517 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<" Error:missing  dimension in array tag  ";arrayAlloc.clear();}
#line 2787 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 520 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_first_tag: OPEN_ARR INT_VAL CLOSE_ARR\n"; 
											arrayAlloc.push_back((yyvsp[-1].r.int_val));
											}
#line 2796 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 524 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_first_tag: OPEN_ARR  CLOSE_ARR\n"; 
											arrayAlloc.push_back(-1);
											}
#line 2805 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 530 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							   }
#line 2813 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 535 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout <<"with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							 }
#line 2822 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 544 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
															 methodsList.push_back(method);
														
															 
																}
#line 2833 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 550 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																 cout<<"interface_declaration_list:interface_declaration\n";
															 methodsList.push_back(method);
															 
																 	
																 }
#line 2844 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 558 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"interface_declaration: class_method_declaration\n";}
#line 2850 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 559 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"interface_declaration: instance_method_declaration\n";}
#line 2856 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 563 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_method_declaration: PLUS p_type method_selector	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,true);
															
																 selectorsList.clear();
																
																}
#line 2868 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 570 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_method_declaration: PLUS			 method_selector	SEMI_COMA\n";
																		method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																}
#line 2878 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 575 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2884 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 576 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2890 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 579 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															cout<<"instance_method_declaration: MINUS p_type	method_selector		SEMI_COMA\n";
															method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,false);
																 selectorsList.clear();
																
																
															}
#line 2902 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 586 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"instance_method_declaration: MINUS			 method_selector	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																}
#line 2912 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 593 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.r.text)=(yyvsp[-1].r.text);
																}
#line 2921 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 600 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {\
																cout<<"method_selector:IDENTIFIER SEMI_COLUMN parameter_list\n";
																	(yyval.r.text)=(yyvsp[-2].r.text);
																}
#line 2930 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 604 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"method_selector:IDENTIFIER \n";(yyval.r.text)=(yyvsp[0].r.text);}
#line 2936 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 606 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				cout<<"parameter_list:	parameter_list	SEMI_COLUMN	parameter\n";
																				selectorsList.push_back(new Selector("",var));
																			}
#line 2945 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 610 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				cout<<"parameter_list:	parameter_list	IDENTIFIER  SEMI_COLUMN	parameter\n";
																					selectorsList.push_back(new Selector((yyvsp[-2].r.text),var));
																			}
#line 2954 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 614 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				cout<<"parameter_list: parameter\n";
																			selectorsList.push_back(new Selector("",var));
																			}
#line 2963 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 619 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"parameter:  p_type IDENTIFIER\n";
																
																if(type!=NULL){
																var=new Variable((yyvsp[0].r.text),type);
																}
																else{
																cout<<"Error:Type not found.\n";
																}
																}
#line 2978 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 632 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation: class_implementation_header class_implementation_body\n";}
#line 2984 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 635 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																	interface=InterfaceHelper::checkImplementation((yyvsp[-2].r.text),symbolTable,(yyvsp[0].r.text));
																	
																}
#line 2994 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 640 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																interface=InterfaceHelper::checkImplementation((yyvsp[0].r.text),symbolTable,"");
																	
																}
#line 3003 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 646 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";
																			InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														}
#line 3013 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 652 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
																	cout<<"class_implementation_body: instance_variables									AT_END\n";
																}
#line 3021 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 655 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_body:						implementation_definition_list	AT_END\n";
																	InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														
																}
#line 3032 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 661 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation_body:	AT_END\n";}
#line 3038 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 664 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);cout<<"implementation_definition_list: implementation_definition_list implementation_definition\n";}
#line 3044 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 665 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);cout<<"implementation_definition_list: implementation_definition\n";}
#line 3050 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 668 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"implementation_definition: class_implementation_definition	\n";}
#line 3056 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 669 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"implementation_definition: instance_implementation_definition \n";}
#line 3062 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 672 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"class_implementation_definition: class_implementation_definition_header block_body";
														method->setFunctionNode(functionNode);
														functionNode=NULL;
													nodeXX=method;
													}
#line 3073 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 680 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"class_implementation_definition_header: PLUS p_type		 method_selector\n";
															method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																
																
										}
#line 3085 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 687 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"class_implementation_definition_header:  PLUS			 method_selector\n";
													 method =InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
									
										}
#line 3096 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 696 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															scoop=NULL;
															cscoop=NULL;
															cout<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";
															method->setFunctionNode(functionNode);
														functionNode=NULL;
															}
#line 3108 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 705 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											     cout<<"instance_implementation_definition_header:MINUS p_type		method_selector\n";
												 method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
															
												}
#line 3119 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 711 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"instance_implementation_definition_header:MINUS 			method_selector\n";
												 method =InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
												}
#line 3129 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 718 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												
												cout<<"block_body:OPEN_S  block_body_part \n";
												(yyval.r.node)=(yyvsp[-1].r.node);
												}
#line 3139 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 725 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3155 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 739 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												scoop=scoop->getParent();
												cout<<"block_body_statements:statement_list	CLOSE_S	\n";
												}
#line 3164 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 743 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												scoop=scoop->getParent();
												cout<<"block_body_statements:CLOSE_S\n";
												}
#line 3173 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 749 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement_list: statement_list statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3183 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 754 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement_list: statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											(yyval.r.node)=(yyvsp[0].r.node);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3194 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 763 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: loop_statement\n";
											(yyval.r.text)="loop";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3203 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 767 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: conditional_statement\n";
											(yyval.r.text)="cond";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3212 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 771 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"statement: expr\n";
												(yyval.r.text)="expr";
												(yyval.r.node)=(yyvsp[-1].r.node);
												//nodeXX=$<r.node>1;
											}
#line 3223 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 777 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"statement: variable_declaration\n";
											
												ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												(yyval.r.node)=(yyvsp[0].r.node);
										    }
#line 3237 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 786 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: block_body\n";(yyval.r.text)=new char[256];(yyval.r.text)[0]='\0';strcat((yyval.r.text),"Block");
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3245 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 789 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: return_statement\n";
												(yyval.r.text)="return";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3254 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 793 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: try_catch\n";}
#line 3260 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 795 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	                                            (yyval.r.text)="asm";
												(yyval.r.node)=(yyvsp[0].r.node);}
#line 3268 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 798 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	 (yyval.r.text)="call";
	(yyval.r.node)=(yyvsp[-1].r.node);
	}
#line 3277 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 807 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"@asm command \n";
	                                         (yyval.r.node)=new AsmNode(scoop,(yyvsp[-1].r.text));
											 }
#line 3285 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 813 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
														 (yyval.r.text)=(yyvsp[-2].r.text);
														 (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3296 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 819 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
														  (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3308 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 826 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:enum\n";}
#line 3314 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 830 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_list:variable_list COMMA variable\n";}
#line 3320 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 831 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_list:variable\n";
										
										}
#line 3328 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 834 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ',' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3334 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 837 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout <<"variable:  IDENTIFIER array_tag initializer \n";
											 var=new Array((yyvsp[-1].r.text),arrayAlloc.size(),NULL);
											(dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
											 arrayList.push_back( ( dynamic_cast<Array*>(var)));
											 arrayAlloc.clear();
											}
#line 3346 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 844 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
											cout <<"variable:  IDENTIFIER main_initializer \n";
											idsList.push_back((yyvsp[-1].r.text)) ;
											IdentifierNode* identifierNode=new IdentifierNode((yyvsp[-1].r.text),scoop);
											if((yyvsp[0].r.node)!=NULL){
											(dynamic_cast<AssignNode*>((yyvsp[0].r.node)))->setLeftExp(identifierNode);
											}
											declarationList.push_back(make_pair((yyvsp[-1].r.text),(yyvsp[0].r.node)));
											}
#line 3360 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 853 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3366 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 856 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"return_statement: RETURN expr\n";
												 (yyval.r.node)=new ReturnNode(scoop,(yyvsp[-1].r.node));
												}
#line 3374 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 861 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: for_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3382 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 864 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3390 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 867 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: do_while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3398 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 872 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"do_while: do_header   statement   while_loop_header   SEMI_COMMA\n";
													(yyval.r.node)=new DoWhileNode((yyvsp[-1].r.node),(yyvsp[-2].r.node),scoop);
													}
#line 3406 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 877 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"do_header: DO\n";}
#line 3412 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 880 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3433 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 899 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer	SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-5].r.node),(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										//nodeXX=$<r.node>5;
										}
#line 3442 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 905 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3450 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 909 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3458 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 913 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),(yyvsp[-2].r.node),NULL,NULL,scoop);
										}
#line 3466 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 918 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-3].r.node),NULL,NULL,NULL,scoop);
										}
#line 3474 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 922 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA				CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-1].r.node),NULL,NULL,scoop);
										}
#line 3482 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 926 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P";
										(yyval.r.node)=new ForNode(NULL,NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3490 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 931 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_hearder: FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	\n";
											(yyval.r.node)=new ForNode(NULL,NULL,NULL,NULL,scoop);
											}
#line 3498 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 936 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: INT IDENTIFIER EQUAL expr\n";
											AssignNode * temp=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
											
											//temp->add($<r.text>2,);
											
											//temp.push_back(make_pair($<r.text>2,$<r.node>4));
											DeclerationNode* temp1=new DeclerationNode(list<pair<string,Node*>>(),scoop,"int");
											temp1->add((yyvsp[-2].r.text),temp);
										 (yyval.r.node)=temp1; 
										 idsList.push_back((yyvsp[-2].r.text));
										}
#line 3514 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 947 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: IDENTIFIER EQUAL expr\n";
										(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
										}
#line 3522 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 950 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: IDENTIFIER\n";
										(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
										}
#line 3530 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 955 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr LESS_THAN expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_THAN,scoop);
										}
#line 3538 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 958 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr MORE_THAN expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_THAN,scoop);
										}
#line 3546 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 961 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_OR_EQUAL,scoop);
										}
#line 3554 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 964 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_OR_EQUAL,scoop);
										}
#line 3562 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 967 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr EQUAL_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),EQUAL_EQUAL,scoop);
										}
#line 3570 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 970 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:NOT_EQUAL expr\n";
										 (yyval.r.node)=new UnaryNode(scoop,(yyvsp[0].r.node),NOT_EQUAL);
										}
#line 3578 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 973 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";
										 (yyval.r.node)=(yyvsp[-1].r.node);
										}
#line 3586 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 976 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"logic_expr:logic_expr AND_AND logic_expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),AND_AND,scoop);
										}
#line 3595 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 980 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:logic_expr OR_OR logic_expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),OR_OR,scoop);
										}
#line 3603 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 983 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:TRUE\n";
										 (yyval.r.node)=new ConstantNode(true,scoop);
										}
#line 3611 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 986 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:FALSE\n";
											 (yyval.r.node)=new ConstantNode(false,scoop);
										}
#line 3619 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 991 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"expr:assign_expr\n";
										 (yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3627 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 994 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"expr:simple_expr\n";
										(yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3635 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 999 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"assign_expr:long_id EQUAL simple_expr\n";
										//LongIdHelper::checkIdenentifier( scoop, interface,"set1");
										(yyval.r.node)=new AssignNode(scoop,(yyvsp[-2].r.node),(yyvsp[0].r.node));
										}
#line 3645 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1006 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"long_id: long_id.IDENTIFIER\n";LongIdHelper::addIdentifier((yyvsp[-2].r.text));}
#line 3651 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1007 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"long_id: long_id.message_call\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3660 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1011 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																LongIdHelper::addIdentifier((yyvsp[0].r.text)); 
																(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
																cout<<"long_id:IDENTIFIER\n";
															   }
#line 3670 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1021 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:STRING_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.string_val,scoop);
									}
#line 3678 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1024 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"simple_expr:INT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.int_val,scoop);
									}
#line 3687 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1028 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:FLOAT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.float_val,scoop);
									}
#line 3695 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1031 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:CHAR_VAL\n";
										(yyval.r.node)=new ConstantNode(yylval.r.char_val,scoop);
									}
#line 3703 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1034 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:long_id\n";
									(yyval.r.node)=(yyvsp[0].r.node);
									}
#line 3711 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1037 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"simple_expr:expr PLUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),PLUS,scoop);
									}
#line 3720 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1041 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"simple_expr:expr MINUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MINUS,scoop);
									}
#line 3729 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1045 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:expr MULTI expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MULTI,scoop);
									}
#line 3737 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1048 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"simple_expr:expr DIV expr\n";
									(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),DIV,scoop);
									}
#line 3746 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1052 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:OPEN_P expr CLOSE_P\n";}
#line 3752 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1053 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:ID++";}
#line 3758 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1054 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:ID--";}
#line 3764 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1055 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:++ID";}
#line 3770 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1056 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:--ID";}
#line 3776 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1057 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"expr:p_type expr\n";
																if(type!=NULL)
																(yyval.r.node)=new CastNode(scoop,type,(yyvsp[0].r.node));
															}
#line 3786 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1064 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
							cout<<"message_call2: OPEN_ARR\n";
							callNode=new CallNode(scoop);
						 }
#line 3795 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1070 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";
												callNode->setSender((yyvsp[-2].r.node));
												callNode->setMessage((yyvsp[-1].r.text));
												(yyval.r.node)=callNode;
												}
#line 3806 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1078 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"sender: message_call\n";
											 (yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3814 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1081 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"sender: IDENTIFIER\n";
											(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
											}
#line 3822 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1086 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"message: IDENTIFIER\n";
											//$<r.node>$=$<r.text>1;
												
											}
#line 3831 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1090 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"message: IDENTIFIER SEMI_COLUMN argument_list\n";
											//$<r.node>$=$<r.text>1;
											}
#line 3840 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1096 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"argument_list: argument_list argument\n";}
#line 3846 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1097 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"argument_list: argument\n";}
#line 3852 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1100 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"argument: SEMI_COLUMN expr\n";
											(yyval.r.node)=(yyvsp[0].r.node);
											callNode->addArgument((yyvsp[0].r.node),"");
											}
#line 3862 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1105 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											 cout<<"argument: IDENTIFIER SEMI_COLUMN expr\n";
											 callNode->addArgument((yyvsp[0].r.node),(yyvsp[-2].r.text));
											 (yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3872 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1112 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"while_loop:while_loop_header statement\n";
											 (yyval.r.node)=new WhileNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop);
										}
#line 3881 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1118 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3889 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1123 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"conditional_statement: if_header statement\n";
												 (yyval.r.node)=new IfNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop,NULL);
												}
#line 3897 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1126 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"conditional_statement: if_header statement with else\n";
												 (yyval.r.node)=new IfNode((yyvsp[-3].r.node),(yyvsp[-2].r.node),scoop,new ElseNode((yyvsp[0].r.node),scoop));
												}
#line 3906 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1130 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"conditional_statement: switch_header switch_body statement\n";
											(yyval.r.node)=new SwitchNode(tempSwitch);
										}
#line 3914 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1135 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3922 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1140 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"switch_header: SWITCH OPEN_P IDENTIFIER CLOSE_P\n";
										
										tempSwitch->setExpr(new IdentifierNode((yyvsp[-2].r.text),scoop));
									}
#line 3931 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1146 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cscoop=scoop;scoop=new ScoopNode(cscoop);tempSwitch=new SwitchNode(NULL,std::list<pair<Node*,Node*>>(),scoop);}
#line 3937 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1149 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3943 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1150 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3949 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1151 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3955 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1152 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3961 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1155 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3967 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1156 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3973 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1159 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-4].r.node),(yyvsp[-2].r.node));}
#line 3979 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1160 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-2].r.node),(yyvsp[0].r.node));}
#line 3985 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1161 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-3].r.node),NULL);}
#line 3991 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1164 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-2].r.node));}
#line 3997 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1165 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[0].r.node));}
#line 4003 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1166 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-1].r.node));}
#line 4009 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1168 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"protocol: protocol_header protocol_body\n";
										idsList.clear();
										methodsList.clear();
										method=NULL;
										}
#line 4020 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1176 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";
								protocol=ProtocolHelper ::createNewProtocol((yyvsp[0].r.text),symbolTable );
								
								}
#line 4030 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1183 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	protocol_reference_list interface_declaration_list	AT_END\n";
								ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								idsList.clear();
								}
#line 4042 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1191 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	interface_declaration_list	AT_END\n";
									
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								
								}
#line 4054 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1199 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	protocol_reference_list AT_END	\n";
											ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								idsList.clear();
								}
#line 4064 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1205 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"protocol_body:	AT_END\n";}
#line 4070 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1207 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"enum: ENUM IDENTIFIER  OPEN_S list_expr CLOSE_S SEMI_COMA  \n";
																
																EnumHelper::createNewEnum( (yyvsp[-4].r.text),idsList, symbolTable);
																idsList.clear();
															 }
#line 4081 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1213 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"enum: ENUM IDENTIFIER SEMI_COMA\n";
																EnumHelper::createNewEnum( (yyvsp[-1].r.text),idsList, symbolTable);
															  }
#line 4090 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1220 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"list_expr:IDENTIFIER EQUAL expr COMMA list_expr\n";
												idsList.push_back((yyvsp[-4].r.text));
													(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-4].r.text),scoop),(yyvsp[-2].r.node));
												}
#line 4100 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1225 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"list_expr:IDENTIFIER EQUAL expr\n";
												idsList.push_back((yyvsp[-2].r.text));
												(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
												}
#line 4110 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1230 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"list_expr:IDENTIFIER \n";
													idsList.push_back((yyvsp[0].r.text));
													//??
												}
#line 4120 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1235 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  cout<<"list_expr:IDENTIFIER  COMMA list_expr \n";
												  idsList.push_back((yyvsp[-2].r.text));
												  //??
												}
#line 4130 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1242 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  cout<<"try_catch:TRY statement catch_list finally_statement \n";
												}
#line 4138 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1246 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {				  
								cout<<"try_catch:TRY statement catch_list \n";
							  }
#line 4146 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1251 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"catch_list:CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4152 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1252 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"catch_list:catch_list CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4158 "yacc.cpp" /* yacc.c:1646  */
    break;


#line 4162 "yacc.cpp" /* yacc.c:1646  */
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
#line 1257 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1906  */

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

