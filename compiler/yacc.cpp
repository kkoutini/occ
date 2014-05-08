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

#line 137 "yacc.cpp" /* yacc.c:339  */

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
#line 139 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:355  */

#include "ast\node.h"

#line 171 "yacc.cpp" /* yacc.c:355  */

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
#line 142 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:355  */

	
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
	   

#line 268 "yacc.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 283 "yacc.cpp" /* yacc.c:358  */

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
#define YYLAST   848

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  259
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  471

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
       0,   172,   172,   175,   176,   178,   179,   180,   181,   182,
     184,   194,   198,   203,   204,   206,   208,   214,   218,   223,
     228,   232,   234,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   252,   259,   262,   266,   271,   272,   276,
     277,   278,   279,   280,   281,   284,   285,   288,   289,   290,
     293,   296,   304,   315,   316,   317,   322,   325,   328,   332,
     336,   340,   341,   344,   350,   351,   352,   354,   362,   369,
     373,   379,   380,   381,   382,   383,   384,   385,   386,   389,
     390,   391,   395,   396,   397,   398,   402,   411,   422,   431,
     442,   451,   459,   467,   475,   483,   493,   504,   509,   513,
     514,   517,   521,   527,   530,   532,   536,   541,   547,   555,
     556,   560,   567,   572,   573,   576,   583,   590,   597,   601,
     603,   607,   611,   616,   629,   632,   637,   643,   649,   652,
     658,   661,   662,   665,   666,   669,   677,   684,   693,   702,
     708,   715,   722,   736,   740,   746,   751,   760,   764,   768,
     774,   783,   786,   790,   795,   801,   808,   812,   813,   816,
     819,   826,   835,   838,   843,   846,   849,   854,   859,   862,
     880,   886,   890,   894,   899,   903,   907,   912,   918,   929,
     932,   937,   940,   943,   946,   949,   952,   955,   958,   962,
     965,   968,   973,   976,   981,   988,   989,   993,  1003,  1006,
    1010,  1013,  1016,  1019,  1023,  1027,  1030,  1034,  1035,  1036,
    1037,  1038,  1039,  1046,  1052,  1060,  1063,  1068,  1072,  1078,
    1079,  1082,  1087,  1094,  1100,  1105,  1108,  1112,  1117,  1122,
    1128,  1131,  1132,  1133,  1134,  1137,  1138,  1141,  1142,  1143,
    1146,  1147,  1148,  1150,  1158,  1164,  1172,  1180,  1186,  1189,
    1195,  1202,  1207,  1212,  1217,  1224,  1228,  1233,  1234,  1237
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
  "assign_expr", "long_id", "simple_expr", "message_call2", "message_call",
  "sender", "message", "argument_list", "argument", "while_loop",
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

#define YYPACT_NINF -314

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-314)))

#define YYTABLE_NINF -65

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-65)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     143,    41,   135,    85,   117,   157,   163,     8,   104,  -314,
    -314,   371,    77,  -314,  -314,   220,  -314,   410,  -314,  -314,
    -314,   187,   198,   175,  -314,  -314,  -314,  -314,   790,   225,
    -314,    36,    36,  -314,   148,   101,   164,  -314,  -314,  -314,
     173,  -314,    36,    36,   417,  -314,   432,  -314,  -314,   231,
    -314,   231,  -314,   447,   453,  -314,   154,   258,  -314,   283,
     233,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
     481,  -314,   296,   301,   386,  -314,   344,   344,  -314,   435,
    -314,  -314,  -314,  -314,  -314,    32,   313,   481,   327,   183,
     327,   332,   471,  -314,   197,   218,  -314,  -314,   227,  -314,
    -314,  -314,   344,    30,   338,  -314,   344,   327,  -314,   327,
    -314,  -314,   485,  -314,  -314,  -314,  -314,   251,  -314,  -314,
     492,  -314,  -314,  -314,  -314,    29,   340,  -314,   510,   328,
     333,  -314,  -314,  -314,   344,   337,    17,   214,  -314,  -314,
     382,  -314,   367,   378,   209,  -314,  -314,   401,  -314,  -314,
     505,  -314,  -314,   287,  -314,  -314,  -314,  -314,  -314,   267,
     399,  -314,   281,   226,  -314,  -314,  -314,  -314,   233,  -314,
     481,   406,   426,   428,  -314,   433,   456,  -314,   729,   457,
     537,  -314,  -314,   318,  -314,  -314,  -314,  -314,  -314,   457,
    -314,   457,   458,    -4,    15,  -314,  -314,   457,  -314,   457,
      13,  -314,  -314,  -314,   283,   729,   459,    17,   321,  -314,
    -314,    42,  -314,  -314,  -314,   130,  -314,   543,  -314,   472,
     370,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,   562,   464,  -314,   360,  -314,   292,   537,   319,   626,
     626,   478,    16,  -314,   550,  -314,  -314,  -314,  -314,   482,
     489,   729,   483,  -314,    -4,   335,   436,   337,   266,   152,
    -314,  -314,  -314,   455,  -314,  -314,   729,   521,  -314,  -314,
     530,  -314,   486,  -314,   729,   545,  -314,    86,  -314,   525,
    -314,   533,  -314,  -314,  -314,   503,  -314,   518,  -314,   337,
    -314,  -314,   565,   367,   553,  -314,  -314,  -314,   566,  -314,
     186,   538,   574,   583,   569,   514,   729,  -314,  -314,   315,
     300,   384,   556,  -314,  -314,    48,   527,   229,  -314,  -314,
     335,  -314,   729,   729,   729,   729,   572,   364,   548,   729,
     548,  -314,   537,  -314,   537,   579,   335,  -314,   586,   540,
     457,   588,   375,  -314,  -314,   578,  -314,   283,  -314,    21,
     367,  -314,  -314,  -314,   729,   555,   501,    89,   594,   454,
     229,  -314,  -314,   626,   626,   729,   729,   729,   729,   729,
    -314,   581,  -314,   239,   239,  -314,  -314,   481,   587,   457,
    -314,   590,  -314,  -314,  -314,  -314,  -314,  -314,   750,  -314,
    -314,   400,   591,   558,  -314,  -314,   547,   552,  -314,  -314,
     729,  -314,   585,   679,   697,   269,  -314,   418,   418,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,   609,   481,  -314,   658,
    -314,   611,  -314,   750,  -314,   608,   575,  -314,   610,  -314,
    -314,  -314,  -314,  -314,   596,  -314,   600,   711,   614,   628,
     665,  -314,   618,   620,   729,  -314,  -314,   629,  -314,  -314,
    -314,  -314,   612,   457,   624,   631,   625,  -314,   718,  -314,
    -314,  -314,  -314,   457,   718,   632,  -314,  -314,  -314,   718,
    -314
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       5,     0,     0,     8,     6,     0,     7,     0,     9,    13,
      14,    12,   126,     0,   244,    70,     1,     3,     0,     0,
      23,     0,     0,    10,     0,     0,     0,   108,   109,   110,
       0,   130,     0,     0,     0,   124,     0,   132,   133,     0,
     134,     0,   248,     0,     0,   243,     0,     0,   250,     0,
       0,    93,    92,    91,    95,    90,    55,    54,    53,    46,
       0,    94,     0,     0,     0,    48,    49,     0,    52,     0,
      84,    85,    82,    83,    36,     0,   119,     0,     0,     0,
       0,     0,    26,    20,     0,     0,    31,    21,     0,    32,
      22,   107,     0,     0,     0,    68,    56,     0,   137,     0,
     140,   128,     0,   129,   131,   142,   135,     0,   138,   247,
       0,   246,    15,    11,   125,   253,     0,    96,     0,    88,
      86,    45,    47,    51,    50,    62,     0,     0,    61,    34,
       0,    33,     0,     0,     0,   114,   112,     0,   116,    24,
       0,    28,    17,     0,    29,    18,    30,    19,    69,     0,
      80,    73,     0,     0,    67,   136,   139,   127,   197,   144,
       0,     0,     0,     0,   168,     0,     0,   213,     0,     0,
       0,   151,   141,     0,   146,   150,   152,   147,   166,     0,
     164,     0,     0,     0,     0,   196,   165,     0,   148,     0,
       0,   156,   153,   245,     0,     0,     0,     0,     0,    89,
      87,     0,    65,    99,    66,     0,    57,     0,    35,     0,
     118,   122,   117,   113,   111,   115,    25,    27,    16,    77,
      81,     0,     0,    71,     0,    74,     0,     0,     0,     0,
       0,     0,    88,   197,     0,   198,   200,   201,   199,     0,
       0,     0,     0,   192,   202,   193,     0,     0,   106,     0,
     158,   143,   145,     0,   169,   149,     0,     0,   216,   215,
       0,   223,   225,   234,     0,     0,   227,     0,   236,     0,
     254,   252,   249,    63,    58,     0,   102,    97,    59,     0,
      60,   123,     0,     0,     0,    79,    75,    78,     0,    72,
       0,   180,     0,     0,     0,     0,     0,   190,   191,     0,
       0,     0,     0,   208,   209,   197,   202,     0,   210,   211,
     212,   163,     0,     0,     0,     0,     0,   256,   104,     0,
     104,   161,     0,   154,     0,     0,   194,   195,   217,     0,
       0,     0,     0,   232,   235,     0,   233,     0,   101,     0,
       0,   120,    76,   155,     0,     0,     0,     0,     0,     0,
     193,   186,   224,     0,     0,     0,     0,     0,     0,     0,
     228,     0,   207,   203,   204,   205,   206,     0,     0,     0,
     255,     0,   162,   105,   160,   159,   157,   167,     0,   214,
     226,     0,     0,   241,   231,   251,     0,     0,   121,   179,
       0,   177,     0,     0,     0,     0,   187,   188,   189,   181,
     182,   183,   184,   185,   230,   229,     0,     0,   259,     0,
     103,   197,   221,   218,   220,     0,   238,   242,     0,   100,
      98,   178,   176,   175,     0,   174,     0,     0,     0,     0,
       0,    38,     0,    40,     0,   219,   239,     0,   240,   171,
     172,   173,     0,     0,     0,    41,     0,    37,     0,   222,
     237,   170,   257,     0,     0,    43,    39,   258,    44,     0,
      42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -314,  -314,  -314,   638,  -314,  -314,  -314,   634,  -314,  -314,
    -313,    65,  -314,   582,   576,  -314,  -314,   -11,   531,   446,
    -314,  -314,  -314,  -152,   -28,  -314,  -314,  -314,  -314,  -120,
    -314,  -314,   334,  -314,     4,   -10,  -314,  -314,   -29,    69,
    -314,  -286,  -314,  -314,  -314,   622,   -26,  -314,  -314,  -314,
    -314,   189,  -314,  -314,  -314,  -174,  -314,   430,   -18,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -234,  -154,  -107,  -116,
    -208,  -314,   474,  -314,  -314,  -314,   247,  -314,   408,  -314,
    -314,  -314,  -314,  -314,  -314,   395,   396,  -314,  -314,  -314,
      46,  -200,  -314,  -314,  -314
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    33,    34,    85,   420,
     442,    35,    74,    75,    76,    77,   104,    78,   137,   138,
     106,    12,    13,   162,   180,    80,    81,    82,    83,   212,
     287,   213,   382,   331,    36,    37,    38,    39,   251,    89,
     220,   221,    14,    15,    45,    46,    47,    48,    49,    50,
      51,   181,   117,   182,   183,   184,   185,   259,   260,   186,
     187,   188,   189,   190,   191,   304,   309,   310,   253,   254,
     255,   194,   195,   270,   339,   423,   424,   196,   197,   198,
     199,   200,   415,   276,   277,   278,   279,    16,    17,    55,
     201,   126,   202,   327,   380
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,   193,    88,    90,   280,   256,   311,   351,    26,   262,
     192,   236,    79,   107,   109,   263,   215,   264,   214,   268,
     114,    54,   396,   271,   252,   272,   101,    58,   -64,   105,
     273,   159,    59,   139,   160,   -64,   317,   266,    95,    98,
      86,   161,   128,   320,   101,    19,    18,   204,    79,    79,
     140,   281,   141,   209,    18,   267,   397,   120,   336,   143,
     274,   275,    87,   193,   398,   133,   177,   193,   211,   357,
     205,   359,   192,   193,    79,   193,   192,   285,    79,   295,
      44,   193,   192,   193,   192,   101,   114,   283,   101,    22,
     192,   158,   192,    40,   286,   164,   150,   360,   153,    94,
     403,    91,    96,   343,    -2,     1,    79,     2,   313,   314,
     101,   108,   110,   219,   373,   374,   375,   376,   363,   364,
     341,    23,    97,   133,   405,    31,    32,   456,   316,   407,
     408,   288,     3,   274,   275,   316,    20,   328,   330,    21,
     101,   -63,   237,   101,     1,   466,     2,   395,   -63,    92,
     316,   468,   361,   332,     4,   122,   470,   144,   123,   147,
       5,    24,     6,   333,    28,    99,   390,    25,   393,    93,
     334,     3,    31,    32,   102,   383,   165,    60,   166,    61,
      62,    63,    64,    65,   145,   100,    58,   332,    31,    32,
     103,    59,    56,     4,   146,    70,    71,   353,   151,     5,
     399,     6,   402,    57,   334,   418,   316,   316,   316,   316,
     223,   409,   410,   411,   412,   413,   143,   426,   152,   154,
     224,    31,    32,    72,   193,   216,   193,   234,   156,    84,
     160,    73,   217,   192,   422,   192,    28,   235,   116,   155,
     118,    41,    31,    32,    42,    43,   431,   115,   157,   434,
     436,    31,    32,   322,   323,   168,   372,    61,    62,    63,
      64,    65,   124,   193,   219,   443,   324,   115,   169,   422,
     127,   325,   192,   170,    71,   193,   324,   143,   229,   462,
     437,   325,   232,   452,   192,   230,   443,   125,   227,   467,
     459,   171,   233,   298,   172,   173,   174,   175,   363,   364,
     129,   176,   177,   299,   443,   130,   178,   329,   228,    73,
     443,    31,    32,   179,   385,   443,   386,   211,   142,   365,
     366,   219,   168,   301,    61,    62,    63,    64,    65,   302,
     303,    86,   284,   367,   115,   261,   368,   193,   369,   217,
     170,    71,   362,   148,   363,   364,   192,   193,    60,   416,
      61,    62,    63,    64,    65,   163,   192,   206,   171,   322,
     323,   172,   173,   174,   175,   209,    70,    71,   176,   177,
     210,   297,   324,   178,   292,   293,    73,   325,   230,   168,
     179,    61,    62,    63,    64,    65,   218,    28,   211,   439,
      29,   115,    30,    87,    72,    31,    32,   170,    71,    66,
      67,    68,    73,   131,   168,   222,    61,    62,    63,    64,
      65,   370,   225,   363,   364,   171,   115,   231,   172,   173,
     174,   175,   170,    71,   392,   176,   177,   378,   379,    29,
     178,    52,   238,    73,    31,    32,   135,   179,   111,   136,
     171,    42,    43,   172,   173,   174,   175,   -65,   -65,   425,
     176,   177,   239,   113,   240,   178,    42,    43,    73,   241,
     242,   168,   179,    61,    62,    63,    64,    65,   119,   265,
     282,    31,    32,   115,   121,   296,   291,    31,    32,   170,
      71,   406,   312,   363,   364,    60,   318,    61,    62,    63,
      64,    65,   149,   319,   321,    31,    32,   171,   172,   326,
     172,   173,   174,   175,    71,   243,   167,   176,   177,    42,
      43,   135,   178,   203,   207,    73,    31,    32,   315,   179,
      61,    62,    63,    64,    65,   337,   226,   244,   401,    31,
      32,    72,   245,   246,   338,   247,   248,    71,   257,    73,
     305,   258,   346,   340,   289,   245,   246,   207,   247,   248,
     342,   347,   177,   306,   315,   348,    61,    62,    63,    64,
      65,   249,   250,   294,    72,   177,   160,   307,   308,   349,
     350,   230,    73,    71,   249,   250,   244,   352,   355,   354,
     358,   245,   246,   371,   247,   248,   267,   243,   377,   381,
     387,   388,   389,   391,   356,   394,   400,   414,   243,   429,
      72,   177,   427,   417,   430,   404,   419,   428,    73,   305,
     249,   250,   432,   438,   245,   246,   444,   247,   248,   446,
     305,   448,   306,   449,   447,   245,   246,   450,   247,   248,
     243,   453,   454,   306,   177,   457,   307,   308,   458,   461,
     460,   463,   465,   249,   250,   177,    27,   307,   308,   464,
     469,    53,   305,   134,   249,   250,   132,   245,   246,   208,
     247,   248,   243,   290,   384,   306,   112,   300,   269,   243,
     445,   335,   344,   345,   440,   441,     0,   177,     0,   307,
     308,   440,   455,   243,   244,     0,   249,   250,     0,   245,
     246,   244,   247,   248,     0,     0,   245,   246,     0,   247,
     248,   243,     0,     0,     0,   244,   433,     0,     0,   177,
     245,   246,     0,   247,   248,   243,   177,     0,   249,   250,
       0,     0,   243,   244,   435,   249,   250,     0,   245,   246,
     177,   247,   248,   243,   440,     0,     0,   244,   451,   249,
     250,     0,   245,   246,   244,   247,   248,     0,   177,   245,
     246,     0,   247,   248,   421,   244,     0,   249,   250,     0,
     245,   246,   177,   247,   248,     0,     0,     0,     0,   177,
       0,   249,   250,     0,     0,     0,   244,     0,   249,   250,
     177,   245,   246,     0,   247,   248,     0,     0,     0,   249,
     250,     0,     0,     0,    60,     0,    61,    62,    63,    64,
      65,   177,     0,    66,    67,    68,     0,    69,     0,     0,
     249,   250,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,     0,     0,     0,     0,     0,     0,     0,    73
};

static const yytype_int16 yycheck[] =
{
      28,   117,    31,    32,   204,   179,   240,   293,     0,   183,
     117,   163,    40,    42,    43,   189,   136,   191,     1,     4,
      46,    17,     1,   197,   178,   199,    36,    11,    11,    40,
      17,     1,    16,     1,     4,    18,   244,    41,    34,    35,
       4,    11,    70,   251,    54,     4,     0,    18,    76,    77,
      18,   205,    20,    37,     8,    59,    35,    53,   266,    87,
      47,    48,    26,   179,   350,    76,    51,   183,    51,   303,
      41,   305,   179,   189,   102,   191,   183,    35,   106,   231,
      15,   197,   189,   199,   191,    95,   112,   207,    98,     4,
     197,   102,   199,    16,    52,   106,    92,   305,    94,    34,
      11,    32,     1,    17,     0,     1,   134,     3,    60,    61,
     120,    42,    43,   142,   322,   323,   324,   325,    29,    30,
     274,     4,    21,   134,   358,    24,    25,   440,   244,   363,
     364,     1,    28,    47,    48,   251,     1,   257,   258,     4,
     150,    11,   170,   153,     1,   458,     3,   347,    18,     1,
     266,   464,   306,     1,    50,     1,   469,    88,     4,    90,
      56,     4,    58,    11,    16,     1,   340,     4,   342,    21,
      18,    28,    24,    25,     1,   329,   107,     4,   109,     6,
       7,     8,     9,    10,     1,    21,    11,     1,    24,    25,
      17,    16,     5,    50,    11,    22,    23,    11,     1,    56,
     354,    58,   356,     5,    18,   379,   322,   323,   324,   325,
       1,   365,   366,   367,   368,   369,   244,   391,    21,     1,
      11,    24,    25,    50,   340,    11,   342,     1,     1,     4,
       4,    58,    18,   340,   388,   342,    16,    11,    49,    21,
      51,    21,    24,    25,    24,    25,   400,    16,    21,   403,
     404,    24,    25,    24,    25,     4,    27,     6,     7,     8,
       9,    10,     4,   379,   293,   419,    37,    16,    17,   423,
      37,    42,   379,    22,    23,   391,    37,   305,    11,   453,
      11,    42,     1,   437,   391,    18,   440,     4,     1,   463,
     444,    40,    11,     1,    43,    44,    45,    46,    29,    30,
       4,    50,    51,    11,   458,     4,    55,    41,    21,    58,
     464,    24,    25,    62,   332,   469,   334,    51,     5,    19,
      20,   350,     4,     4,     6,     7,     8,     9,    10,    10,
      11,     4,    11,    33,    16,    17,    36,   453,    38,    18,
      22,    23,    27,    11,    29,    30,   453,   463,     4,   377,
       6,     7,     8,     9,    10,    17,   463,    17,    40,    24,
      25,    43,    44,    45,    46,    37,    22,    23,    50,    51,
      37,    11,    37,    55,     4,     5,    58,    42,    18,     4,
      62,     6,     7,     8,     9,    10,     4,    16,    51,   417,
      19,    16,    21,    26,    50,    24,    25,    22,    23,    13,
      14,    15,    58,    17,     4,    27,     6,     7,     8,     9,
      10,    27,    11,    29,    30,    40,    16,    18,    43,    44,
      45,    46,    22,    23,    49,    50,    51,    63,    64,    19,
      55,    21,    26,    58,    24,    25,     1,    62,    21,     4,
      40,    24,    25,    43,    44,    45,    46,    29,    30,    49,
      50,    51,    26,    21,    26,    55,    24,    25,    58,    26,
       4,     4,    62,     6,     7,     8,     9,    10,    21,    11,
      11,    24,    25,    16,    21,    11,     4,    24,    25,    22,
      23,    27,     4,    29,    30,     4,     4,     6,     7,     8,
       9,    10,    21,     4,    11,    24,    25,    40,    43,    63,
      43,    44,    45,    46,    23,     4,    21,    50,    51,    24,
      25,     1,    55,    21,     4,    58,    24,    25,     4,    62,
       6,     7,     8,     9,    10,     4,    21,    26,    27,    24,
      25,    50,    31,    32,     4,    34,    35,    23,     1,    58,
      26,     4,    17,    57,     1,    31,    32,     4,    34,    35,
       5,    18,    51,    39,     4,    52,     6,     7,     8,     9,
      10,    60,    61,     1,    50,    51,     4,    53,    54,    51,
       5,    18,    58,    23,    60,    61,    26,    11,     4,    41,
      11,    31,    32,    27,    34,    35,    59,     4,    16,    41,
      11,     5,    52,     5,    11,    17,    41,    16,     4,    52,
      50,    51,    11,    16,    52,    11,    16,    49,    58,    26,
      60,    61,    27,     4,    31,    32,     5,    34,    35,    11,
      26,    11,    39,    27,    49,    31,    32,    27,    34,    35,
       4,    17,     4,    39,    51,    17,    53,    54,    18,    27,
      11,    17,    17,    60,    61,    51,     8,    53,    54,    18,
      18,    17,    26,    77,    60,    61,    74,    31,    32,   128,
      34,    35,     4,   217,   330,    39,    44,   237,   194,     4,
     423,   263,   277,   277,    16,    17,    -1,    51,    -1,    53,
      54,    16,    17,     4,    26,    -1,    60,    61,    -1,    31,
      32,    26,    34,    35,    -1,    -1,    31,    32,    -1,    34,
      35,     4,    -1,    -1,    -1,    26,    27,    -1,    -1,    51,
      31,    32,    -1,    34,    35,     4,    51,    -1,    60,    61,
      -1,    -1,     4,    26,    27,    60,    61,    -1,    31,    32,
      51,    34,    35,     4,    16,    -1,    -1,    26,    27,    60,
      61,    -1,    31,    32,    26,    34,    35,    -1,    51,    31,
      32,    -1,    34,    35,     4,    26,    -1,    60,    61,    -1,
      31,    32,    51,    34,    35,    -1,    -1,    -1,    -1,    51,
      -1,    60,    61,    -1,    -1,    -1,    26,    -1,    60,    61,
      51,    31,    32,    -1,    34,    35,    -1,    -1,    -1,    60,
      61,    -1,    -1,    -1,     4,    -1,     6,     7,     8,     9,
      10,    51,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
      60,    61,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    28,    50,    56,    58,    71,    72,    73,
      74,    75,    91,    92,   112,   113,   157,   158,   160,     4,
       1,     4,     4,     4,     4,     4,     0,    73,    16,    19,
      21,    24,    25,    76,    77,    81,   104,   105,   106,   107,
      16,    21,    24,    25,    81,   114,   115,   116,   117,   118,
     119,   120,    21,    77,   104,   159,     5,     5,    11,    16,
       4,     6,     7,     8,     9,    10,    13,    14,    15,    17,
      22,    23,    50,    58,    82,    83,    84,    85,    87,    94,
      95,    96,    97,    98,     4,    78,     4,    26,   108,   109,
     108,   109,     1,    21,    81,   104,     1,    21,   104,     1,
      21,   105,     1,    17,    86,    87,    90,   108,   109,   108,
     109,    21,   115,    21,   116,    16,   121,   122,   121,    21,
     104,    21,     1,     4,     4,     4,   161,    37,    94,     4,
       4,    17,    83,    87,    84,     1,     4,    88,    89,     1,
      18,    20,     5,    94,   109,     1,    11,   109,    11,    21,
     104,     1,    21,   104,     1,    21,     1,    21,    87,     1,
       4,    11,    93,    17,    87,   109,   109,    21,     4,    17,
      22,    40,    43,    44,    45,    46,    50,    51,    55,    62,
      94,   121,   123,   124,   125,   126,   129,   130,   131,   132,
     133,   134,   138,   139,   141,   142,   147,   148,   149,   150,
     151,   160,   162,    21,    18,    41,    17,     4,    88,    37,
      37,    51,    99,   101,     1,    99,    11,    18,     4,   108,
     110,   111,    27,     1,    11,    11,    21,     1,    21,    11,
      18,    18,     1,    11,     1,    11,    93,    94,    26,    26,
      26,    26,     4,     4,    26,    31,    32,    34,    35,    60,
      61,   108,   137,   138,   139,   140,   125,     1,     4,   127,
     128,    17,   125,   125,   125,    11,    41,    59,     4,   142,
     143,   125,   125,    17,    47,    48,   153,   154,   155,   156,
     161,   137,    11,    99,    11,    35,    52,   100,     1,     1,
      89,     4,     4,     5,     1,    93,    11,    11,     1,    11,
     127,     4,    10,    11,   135,    26,    39,    53,    54,   136,
     137,   136,     4,    60,    61,     4,   139,   140,     4,     4,
     140,    11,    24,    25,    37,    42,    63,   163,    99,    41,
      99,   103,     1,    11,    18,   148,   140,     4,     4,   144,
      57,   137,     5,    17,   155,   156,    17,    18,    52,    51,
       5,   111,    11,    11,    41,     4,    11,   136,    11,   136,
     140,   137,    27,    29,    30,    19,    20,    33,    36,    38,
      27,    27,    27,   140,   140,   140,   140,    16,    63,    64,
     164,    41,   102,   137,   102,   128,   128,    11,     5,    52,
     125,     5,    49,   125,    17,   161,     1,    35,   111,   137,
      41,    27,   137,    11,    11,   136,    27,   136,   136,   137,
     137,   137,   137,   137,    16,   152,    94,    16,   125,    16,
      79,     4,   137,   145,   146,    49,   125,    11,    49,    52,
      52,   137,    27,    27,   137,    27,   137,    11,     4,    94,
      16,    17,    80,   137,     5,   146,    11,    49,    11,    27,
      27,    27,   137,    17,     4,    17,    80,    17,    18,   137,
      11,    27,   125,    17,    18,    17,    80,   125,    80,    18,
      80
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
     140,   140,   140,   141,   142,   143,   143,   144,   144,   145,
     145,   146,   146,   147,   148,   149,   149,   149,   150,   151,
     152,   153,   153,   153,   153,   154,   154,   155,   155,   155,
     156,   156,   156,   157,   158,   159,   159,   159,   159,   160,
     160,   161,   161,   161,   161,   162,   162,   163,   163,   164
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
       2,     2,     2,     1,     4,     1,     1,     1,     3,     2,
       1,     1,     3,     2,     4,     2,     4,     2,     4,     5,
       1,     3,     2,     2,     1,     2,     1,     6,     4,     5,
       5,     3,     4,     2,     2,     3,     2,     2,     1,     6,
       3,     5,     3,     1,     3,     4,     3,     6,     7,     2
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
#line 172 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"program: components\n"; 
										 }
#line 2017 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 175 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"components: components component\n";}
#line 2023 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 176 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"components: component\n";}
#line 2029 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 178 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface \n";}
#line 2035 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 179 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation \n";}
#line 2041 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 180 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"protocol \n";}
#line 2047 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 181 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct \n";}
#line 2053 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 182 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum \n";}
#line 2059 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 184 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface: class_interface_header class_interface_body\n";
																interface->setClassNode(classNode);
																classNode=NULL;
																 idsList.clear();
																 methodsList.clear();
																 method=NULL;
																}
#line 2071 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 194 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																				interface=InterfaceHelper::createNewInterface((yyvsp[-2].r.text),(yyvsp[0].r.text),symbolTable);
																				classNode=new ClassNode(NULL,interface);
																				}
#line 2080 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 198 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																					cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
																				 interface=InterfaceHelper::createNewInterface((yyvsp[0].r.text),"",symbolTable);
																				 	classNode=new ClassNode(NULL,interface);
																				}
#line 2090 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 203 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Unknown type name '"<<(yyvsp[-1].r.text)<<"' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2096 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 204 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2102 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 206 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2108 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 209 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
															
														InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2118 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 215 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														}
#line 2126 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 219 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	protocol_reference_list interface_declaration_list	AT_END\n";
														}
#line 2135 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 224 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2144 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 229 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														}
#line 2152 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 233 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_body:instance_variables		AT_END\n";}
#line 2158 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 235 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {														
																InterfaceHelper::addMethods(interface,methodsList);
																cout<<"class_interface_body:interface_declaration_list	AT_END\n";
														}
#line 2167 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 239 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_interface_body:AT_END\n";}
#line 2173 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 240 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2179 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 241 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2185 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 242 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2191 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 243 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2197 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 244 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2203 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 245 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2209 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 246 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2215 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 247 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2221 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 248 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2227 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 252 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													if(interface!=NULL){
													InterfaceHelper::addInheritedProtocol(interface,idsList,symbolTable);
														idsList.clear();
													}
													cout<<"protocol_reference_list: LESS_THAN ids_list_identifier MORE_THAN\n";
												}
#line 2239 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 259 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected '>' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2245 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 262 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"ids_list:ids_list_identifier COMMA IDENTIFIER\n"; 
													idsList.push_back((yyvsp[0].r.text));
													}
#line 2254 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 266 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"ids_list_identifier:IDENTIFIER\n";
													idsList.push_back((yyvsp[0].r.text));
												    }
#line 2263 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 271 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array with body";}
#line 2269 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 272 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array without elements";}
#line 2275 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 276 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array-element \n";}
#line 2281 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 277 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array-element \n";}
#line 2287 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 278 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"empty element \n";}
#line 2293 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 279 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2299 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 280 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2305 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 281 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"inside braces element \n";}
#line 2311 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 284 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";}
#line 2317 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 285 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variables:OPEN_S	 CLOSE_S\n";}
#line 2323 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 288 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";}
#line 2329 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 289 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:instance_variable_declaration\n";}
#line 2335 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 290 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declarations:variable_declaration_list\n";}
#line 2341 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 293 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"instance_variable_declaration:visibility_specification variable_declaration_list\n";
																	}
#line 2348 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 297 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
											arrayList.clear();
												idsList.clear();
												flag=false;
										}
#line 2360 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 305 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										       InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
												arrayList.clear();
												idsList.clear();
												flag=false;
										cout<<"variable_declaration_list: variable_declaration\n";
										}
#line 2372 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 315 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PRIVATE\n";  visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2378 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 316 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PROTECTED\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2384 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 317 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"visibility_specification:AT_PUBLIC\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2390 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 322 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct_variable_declaration:struct_declaration_list\n";}
#line 2396 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 325 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
	                                           (yyval.r.text)=(yyvsp[-2].r.text);
												}
#line 2404 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 328 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
													}
#line 2413 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 332 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2419 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 336 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"ids_list:ids_list COMMA id_dec\n"; 

									}
#line 2428 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 340 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"ids_list:id_dec\n"; }
#line 2434 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 341 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2440 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 344 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout <<" data_member: IDENTIFIER array_tag \n";
							 var=new Array((yyvsp[0].r.text),arrayAlloc.size(),NULL);
					       ( dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
						   arrayList.push_back( ( dynamic_cast<Array*>(var)));
						      arrayAlloc.clear();
							}
#line 2451 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 350 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {idsList.push_back((yyvsp[0].r.text)) ;cout <<" data_member: IDENTIFIER  \n";}
#line 2457 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 351 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2463 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 352 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2469 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 354 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {  
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																												idsList.clear();
																												flag=false;
																										  cout<<"struct_declaration_list: struct_declaration_list  variable_declarationxx\n";
																										}
#line 2481 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 362 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																														 	idsList.clear();
																															flag=false;
																										cout<<"struct_declaration_list:  variable_declarationxx\n";
																										}
#line 2493 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 369 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Illigal visibility specification at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2499 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 373 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
					myStruct=StructHelper::createNewStruct((yyvsp[0].r.text),symbolTable);
					cout<<"struct_header: STRUCT  IDENTIFIER\n";
					}
#line 2508 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 379 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S  entity SEMI_COMA\n";}
#line 2514 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 380 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S enteity SEMI_COMA \n";}
#line 2520 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 381 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S SEMI_COMA\n";}
#line 2526 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 382 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S  SEMI_COMA  \n";}
#line 2532 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 383 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2538 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 384 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2544 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 385 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2550 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 386 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2556 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 389 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"entity: IDENTIFIER COMMA  entity\n";}
#line 2562 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 390 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"entity:  IDENTIFIER \n";}
#line 2568 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 391 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2574 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 395 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type:simple type\n";}
#line 2580 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 396 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: complex type\n";}
#line 2586 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 397 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: struct_type\n";}
#line 2592 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 398 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"type: enum_type\n";}
#line 2598 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 402 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	cout<<"struct_type: STRUCT IDENTIFIER   \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																		string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2612 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 411 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"struct_type: STRUCT IDENTIFIER  MULTI \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2626 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 422 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum_type: ENUM IDENTIFIER \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2640 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 431 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"enum_type: ENUM IDENTIFIER  MULTI  \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																									string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2654 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 442 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"int type \n";
																type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
																}
#line 2668 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 451 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"char type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2681 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 459 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"float type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2694 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 467 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"NSString type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2707 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 475 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"void type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2720 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 483 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"bool type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2733 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 493 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 2748 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 504 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_tag: array_first_tag array_tag_list \n"; 
										   }
#line 2756 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 509 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"array_tag_list: array_tag_list OPEN_ARR INT_VAL CLOSE_ARR\n"; 
																arrayAlloc.push_back((yyvsp[-1].r.int_val));
														   }
#line 2765 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 514 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<" Error:missing  dimension in array tag  ";arrayAlloc.clear();}
#line 2771 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 517 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_first_tag: OPEN_ARR INT_VAL CLOSE_ARR\n"; 
											arrayAlloc.push_back((yyvsp[-1].r.int_val));
											}
#line 2780 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 521 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"array_first_tag: OPEN_ARR  CLOSE_ARR\n"; 
											arrayAlloc.push_back(-1);
											}
#line 2789 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 527 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"array with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							   }
#line 2797 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 532 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout <<"with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							 }
#line 2806 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 541 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
															 methodsList.push_back(method);
														
															 
																}
#line 2817 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 547 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																 cout<<"interface_declaration_list:interface_declaration\n";
															 methodsList.push_back(method);
															 
																 	
																 }
#line 2828 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 555 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"interface_declaration: class_method_declaration\n";}
#line 2834 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 556 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"interface_declaration: instance_method_declaration\n";}
#line 2840 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 560 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_method_declaration: PLUS p_type method_selector	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,true);
															
																 selectorsList.clear();
																
																}
#line 2852 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 567 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"class_method_declaration: PLUS			 method_selector	SEMI_COMA\n";
																		method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																}
#line 2862 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 572 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2868 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 573 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2874 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 576 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															cout<<"instance_method_declaration: MINUS p_type	method_selector		SEMI_COMA\n";
															method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,false);
																 selectorsList.clear();
																
																
															}
#line 2886 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 583 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"instance_method_declaration: MINUS			 method_selector	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																}
#line 2896 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 590 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.r.text)=(yyvsp[-1].r.text);
																}
#line 2905 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 597 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {\
																cout<<"method_selector:IDENTIFIER SEMI_COLUMN parameter_list\n";
																	(yyval.r.text)=(yyvsp[-2].r.text);
																}
#line 2914 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 601 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"method_selector:IDENTIFIER \n";(yyval.r.text)=(yyvsp[0].r.text);}
#line 2920 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 603 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				cout<<"parameter_list:	parameter_list	SEMI_COLUMN	parameter\n";
																				selectorsList.push_back(new Selector("",var));
																			}
#line 2929 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 607 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				cout<<"parameter_list:	parameter_list	IDENTIFIER  SEMI_COLUMN	parameter\n";
																					selectorsList.push_back(new Selector((yyvsp[-2].r.text),var));
																			}
#line 2938 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 611 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				cout<<"parameter_list: parameter\n";
																			selectorsList.push_back(new Selector("",var));
																			}
#line 2947 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 616 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"parameter:  p_type IDENTIFIER\n";
																
																if(type!=NULL){
																var=new Variable((yyvsp[0].r.text),type);
																}
																else{
																cout<<"Error:Type not found.\n";
																}
																}
#line 2962 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 629 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation: class_implementation_header class_implementation_body\n";}
#line 2968 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 632 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																	interface=InterfaceHelper::checkImplementation((yyvsp[-2].r.text),symbolTable,(yyvsp[0].r.text));
																	
																}
#line 2978 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 637 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																interface=InterfaceHelper::checkImplementation((yyvsp[0].r.text),symbolTable,"");
																	
																}
#line 2987 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 643 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";
																			InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														}
#line 2997 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 649 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
																	cout<<"class_implementation_body: instance_variables									AT_END\n";
																}
#line 3005 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 652 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	cout<<"class_implementation_body:						implementation_definition_list	AT_END\n";
																	InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														
																}
#line 3016 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 658 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"class_implementation_body:	AT_END\n";}
#line 3022 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 661 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);cout<<"implementation_definition_list: implementation_definition_list implementation_definition\n";}
#line 3028 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 662 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);cout<<"implementation_definition_list: implementation_definition\n";}
#line 3034 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 665 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"implementation_definition: class_implementation_definition	\n";}
#line 3040 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 666 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"implementation_definition: instance_implementation_definition \n";}
#line 3046 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 669 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"class_implementation_definition: class_implementation_definition_header block_body";
														method->setFunctionNode(functionNode);
														functionNode=NULL;
													nodeXX=method;
													}
#line 3057 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 677 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"class_implementation_definition_header: PLUS p_type		 method_selector\n";
															method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
																
																
										}
#line 3069 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 684 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"class_implementation_definition_header:  PLUS			 method_selector\n";
													 method =InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
									
										}
#line 3080 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 693 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															scoop=NULL;
															cscoop=NULL;
															cout<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";
															method->setFunctionNode(functionNode);
														functionNode=NULL;
															}
#line 3092 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 702 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											     cout<<"instance_implementation_definition_header:MINUS p_type		method_selector\n";
												 method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
															
												}
#line 3103 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 708 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"instance_implementation_definition_header:MINUS 			method_selector\n";
												 method =InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
												}
#line 3113 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 715 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												
												cout<<"block_body:OPEN_S  block_body_part \n";
												(yyval.r.node)=(yyvsp[-1].r.node);
												}
#line 3123 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 722 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3139 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 736 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												scoop=scoop->getParent();
												cout<<"block_body_statements:statement_list	CLOSE_S	\n";
												}
#line 3148 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 740 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												scoop=scoop->getParent();
												cout<<"block_body_statements:CLOSE_S\n";
												}
#line 3157 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 746 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement_list: statement_list statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3167 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 751 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement_list: statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											(yyval.r.node)=(yyvsp[0].r.node);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3178 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 760 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: loop_statement\n";
											(yyval.r.text)="loop";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3187 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 764 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: conditional_statement\n";
											(yyval.r.text)="cond";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3196 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 768 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"statement: expr\n";
												(yyval.r.text)="expr";
												(yyval.r.node)=(yyvsp[-1].r.node);
												//nodeXX=$<r.node>1;
											}
#line 3207 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 774 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"statement: variable_declaration\n";
											
												ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												(yyval.r.node)=(yyvsp[0].r.node);
										    }
#line 3221 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 783 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: block_body\n";(yyval.r.text)=new char[256];(yyval.r.text)[0]='\0';strcat((yyval.r.text),"Block");
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3229 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 786 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: return_statement\n";
												(yyval.r.text)="return";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3238 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 790 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"statement: try_catch\n";}
#line 3244 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 795 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
														 (yyval.r.text)=(yyvsp[-2].r.text);
														 (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3255 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 801 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
														  (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3267 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 808 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_declaration:enum\n";}
#line 3273 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 812 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_list:variable_list COMMA variable\n";}
#line 3279 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 813 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"variable_list:variable\n";
										
										}
#line 3287 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 816 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected ',' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3293 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 819 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout <<"variable:  IDENTIFIER array_tag initializer \n";
											 var=new Array((yyvsp[-1].r.text),arrayAlloc.size(),NULL);
											(dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
											 arrayList.push_back( ( dynamic_cast<Array*>(var)));
											 arrayAlloc.clear();
											}
#line 3305 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 826 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
											cout <<"variable:  IDENTIFIER main_initializer \n";
											idsList.push_back((yyvsp[-1].r.text)) ;
											IdentifierNode* identifierNode=new IdentifierNode((yyvsp[-1].r.text),scoop);
											if((yyvsp[0].r.node)!=NULL){
											(dynamic_cast<AssignNode*>((yyvsp[0].r.node)))->setLeftExp(identifierNode);
											}
											declarationList.push_back(make_pair((yyvsp[-1].r.text),(yyvsp[0].r.node)));
											}
#line 3319 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 835 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3325 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 838 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"return_statement: RETURN expr\n";
												 (yyval.r.node)=new ReturnNode(scoop,(yyvsp[-1].r.node));
												}
#line 3333 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 843 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: for_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3341 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 846 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3349 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 849 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"loop_statement: do_while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3357 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 854 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"do_while: do_header   statement   while_loop_header   SEMI_COMMA\n";
													(yyval.r.node)=new DoWhileNode((yyvsp[-1].r.node),(yyvsp[-2].r.node),scoop);
													}
#line 3365 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 859 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"do_header: DO\n";}
#line 3371 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 862 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3392 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 881 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer	SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-5].r.node),(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										//nodeXX=$<r.node>5;
										}
#line 3401 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 887 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3409 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 891 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3417 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 895 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),(yyvsp[-2].r.node),NULL,NULL,scoop);
										}
#line 3425 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 900 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-3].r.node),NULL,NULL,NULL,scoop);
										}
#line 3433 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 904 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA				CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-1].r.node),NULL,NULL,scoop);
										}
#line 3441 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 908 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_header: FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P";
										(yyval.r.node)=new ForNode(NULL,NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3449 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 913 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_loop_hearder: FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	\n";
											(yyval.r.node)=new ForNode(NULL,NULL,NULL,NULL,scoop);
											}
#line 3457 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 918 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: INT IDENTIFIER EQUAL expr\n";
											AssignNode * temp=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
											
											//temp->add($<r.text>2,);
											
											//temp.push_back(make_pair($<r.text>2,$<r.node>4));
											DeclerationNode* temp1=new DeclerationNode(list<pair<string,Node*>>(),scoop,"int");
											temp1->add((yyvsp[-2].r.text),temp);
										 (yyval.r.node)=temp1; 
										 idsList.push_back((yyvsp[-2].r.text));
										}
#line 3473 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 929 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: IDENTIFIER EQUAL expr\n";
										(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
										}
#line 3481 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 932 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"for_initializer: IDENTIFIER\n";
										(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
										}
#line 3489 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 937 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr LESS_THAN expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_THAN,scoop);
										}
#line 3497 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 940 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr MORE_THAN expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_THAN,scoop);
										}
#line 3505 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 943 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_OR_EQUAL,scoop);
										}
#line 3513 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 946 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_OR_EQUAL,scoop);
										}
#line 3521 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 949 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:expr EQUAL_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),EQUAL_EQUAL,scoop);
										}
#line 3529 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 952 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:NOT_EQUAL expr\n";
										 (yyval.r.node)=new UnaryNode(scoop,(yyvsp[0].r.node),NOT_EQUAL);
										}
#line 3537 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 955 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";
										 (yyval.r.node)=(yyvsp[-1].r.node);
										}
#line 3545 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 958 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"logic_expr:logic_expr AND_AND logic_expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),AND_AND,scoop);
										}
#line 3554 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 962 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:logic_expr OR_OR logic_expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),OR_OR,scoop);
										}
#line 3562 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 965 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:TRUE\n";
										 (yyval.r.node)=new ConstantNode(true,scoop);
										}
#line 3570 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 968 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"logic_expr:FALSE\n";
											 (yyval.r.node)=new ConstantNode(false,scoop);
										}
#line 3578 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 973 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"expr:assign_expr\n";
										 (yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3586 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 976 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"expr:simple_expr\n";
										(yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3594 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 981 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"assign_expr:long_id EQUAL simple_expr\n";
										//LongIdHelper::checkIdenentifier( scoop, interface,"set1");
										(yyval.r.node)=new AssignNode(scoop,(yyvsp[-2].r.node),(yyvsp[0].r.node));
										}
#line 3604 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 988 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"long_id: long_id.IDENTIFIER\n";LongIdHelper::addIdentifier((yyvsp[-2].r.text));}
#line 3610 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 989 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"long_id: long_id.message_call\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3619 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 993 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																LongIdHelper::addIdentifier((yyvsp[0].r.text)); 
																(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
																cout<<"long_id:IDENTIFIER\n";
															   }
#line 3629 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1003 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:STRING_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.string_val,scoop);
									}
#line 3637 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1006 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"simple_expr:INT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.int_val,scoop);
									}
#line 3646 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1010 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:FLOAT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.float_val,scoop);
									}
#line 3654 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1013 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:CHAR_VAL\n";
										(yyval.r.node)=new ConstantNode(yylval.r.char_val,scoop);
									}
#line 3662 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1016 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:long_id\n";
									(yyval.r.node)=(yyvsp[0].r.node);
									}
#line 3670 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1019 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"simple_expr:expr PLUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),PLUS,scoop);
									}
#line 3679 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1023 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"simple_expr:expr MINUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MINUS,scoop);
									}
#line 3688 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1027 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:expr MULTI expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MULTI,scoop);
									}
#line 3696 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1030 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cout<<"simple_expr:expr DIV expr\n";
									(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),DIV,scoop);
									}
#line 3705 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1034 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:OPEN_P expr CLOSE_P\n";}
#line 3711 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1035 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:ID++";}
#line 3717 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1036 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:ID--";}
#line 3723 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1037 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:++ID";}
#line 3729 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1038 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"simple_expr:--ID";}
#line 3735 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1039 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"expr:p_type expr\n";
																if(type!=NULL)
																(yyval.r.node)=new CastNode(scoop,type,(yyvsp[0].r.node));
															}
#line 3745 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1046 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
							cout<<"message_call2: OPEN_ARR\n";
							callNode=new CallNode(scoop);
						 }
#line 3754 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1052 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";
												callNode->setSender((yyvsp[-2].r.node));
												callNode->setMessage((yyvsp[-1].r.text));
												(yyval.r.node)=callNode;
												}
#line 3765 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1060 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"sender: message_call\n";
											 (yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3773 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1063 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"sender: IDENTIFIER\n";
											(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
											}
#line 3781 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1068 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"message: IDENTIFIER\n";
											//$<r.node>$=$<r.text>1;
												
											}
#line 3790 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1072 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"message: IDENTIFIER SEMI_COLUMN argument_list\n";
											//$<r.node>$=$<r.text>1;
											}
#line 3799 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1078 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"argument_list: argument_list argument\n";}
#line 3805 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1079 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"argument_list: argument\n";}
#line 3811 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1082 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"argument: SEMI_COLUMN expr\n";
											(yyval.r.node)=(yyvsp[0].r.node);
											callNode->addArgument((yyvsp[0].r.node),"");
											}
#line 3821 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1087 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											 cout<<"argument: IDENTIFIER SEMI_COLUMN expr\n";
											 callNode->addArgument((yyvsp[0].r.node),(yyvsp[-2].r.text));
											 (yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3831 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1094 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											cout<<"while_loop:while_loop_header statement\n";
											 (yyval.r.node)=new WhileNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop);
										}
#line 3840 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1100 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3848 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1105 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"conditional_statement: if_header statement\n";
												 (yyval.r.node)=new IfNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop,NULL);
												}
#line 3856 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1108 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"conditional_statement: if_header statement with else\n";
												 (yyval.r.node)=new IfNode((yyvsp[-3].r.node),(yyvsp[-2].r.node),scoop,new ElseNode((yyvsp[0].r.node),scoop));
												}
#line 3865 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1112 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"conditional_statement: switch_header switch_body statement\n";
											(yyval.r.node)=new SwitchNode(tempSwitch);
										}
#line 3873 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1117 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 3881 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1122 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"switch_header: SWITCH OPEN_P IDENTIFIER CLOSE_P\n";
										
										tempSwitch->setExpr(new IdentifierNode((yyvsp[-2].r.text),scoop));
									}
#line 3890 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1128 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cscoop=scoop;scoop=new ScoopNode(cscoop);tempSwitch=new SwitchNode(NULL,std::list<pair<Node*,Node*>>(),scoop);}
#line 3896 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1131 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3902 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1132 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3908 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1133 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3914 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1134 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3920 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1137 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3926 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1138 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 3932 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1141 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-4].r.node),(yyvsp[-2].r.node));}
#line 3938 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1142 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-2].r.node),(yyvsp[0].r.node));}
#line 3944 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1143 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-3].r.node),NULL);}
#line 3950 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1146 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-2].r.node));}
#line 3956 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1147 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[0].r.node));}
#line 3962 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1148 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-1].r.node));}
#line 3968 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1150 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										cout<<"protocol: protocol_header protocol_body\n";
										idsList.clear();
										methodsList.clear();
										method=NULL;
										}
#line 3979 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1158 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";
								protocol=ProtocolHelper ::createNewProtocol((yyvsp[0].r.text),symbolTable );
								
								}
#line 3989 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1165 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	protocol_reference_list interface_declaration_list	AT_END\n";
								ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								idsList.clear();
								}
#line 4001 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1173 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	interface_declaration_list	AT_END\n";
									
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								
								}
#line 4013 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1181 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								cout<<"protocol_body:	protocol_reference_list AT_END	\n";
											ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								idsList.clear();
								}
#line 4023 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1187 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"protocol_body:	AT_END\n";}
#line 4029 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1189 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"enum: ENUM IDENTIFIER  OPEN_S list_expr CLOSE_S SEMI_COMA  \n";
																
																EnumHelper::createNewEnum( (yyvsp[-4].r.text),idsList, symbolTable);
																idsList.clear();
															 }
#line 4040 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1195 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																cout<<"enum: ENUM IDENTIFIER SEMI_COMA\n";
																EnumHelper::createNewEnum( (yyvsp[-1].r.text),idsList, symbolTable);
															  }
#line 4049 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1202 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"list_expr:IDENTIFIER EQUAL expr COMMA list_expr\n";
												idsList.push_back((yyvsp[-4].r.text));
													(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-4].r.text),scoop),(yyvsp[-2].r.node));
												}
#line 4059 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1207 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cout<<"list_expr:IDENTIFIER EQUAL expr\n";
												idsList.push_back((yyvsp[-2].r.text));
												(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
												}
#line 4069 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1212 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													cout<<"list_expr:IDENTIFIER \n";
													idsList.push_back((yyvsp[0].r.text));
													//??
												}
#line 4079 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1217 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  cout<<"list_expr:IDENTIFIER  COMMA list_expr \n";
												  idsList.push_back((yyvsp[-2].r.text));
												  //??
												}
#line 4089 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1224 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  cout<<"try_catch:TRY statement catch_list finally_statement \n";
												}
#line 4097 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1228 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {				  
								cout<<"try_catch:TRY statement catch_list \n";
							  }
#line 4105 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1233 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"catch_list:CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4111 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1234 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1646  */
    {cout<<"catch_list:catch_list CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4117 "yacc.cpp" /* yacc.c:1646  */
    break;


#line 4121 "yacc.cpp" /* yacc.c:1646  */
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
#line 1239 "C:\\Users\\Mac Win\\source\\repos\\compiler\\compiler\\yacc.y" /* yacc.c:1906  */

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

